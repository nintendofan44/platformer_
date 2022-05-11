package objects;

import base.PlayerSettings;
import base.Controls;
import helpers.Utilities;
import flixel.math.FlxMath;
import base.Conductor;
import helpers.AssetPaths;
import flixel.FlxG;
import flixel.FlxSprite;
import base.GameSettings;

using StringTools;

class Player extends FlxSprite {
	private var controls(get, never):Controls;
	inline function get_controls():Controls
		return PlayerSettings.player1.controls;

	public var forceX:Float = Math.NEGATIVE_INFINITY;
	public var targetY:Float = 0;
	public var targetX:Float = 0;
	public var yMult:Float = 120;
	public var scrollType:String = "";

	var MAX_SPEED_X:Int = 250;
	var ACCELERATION_X:Int = 600;
	var DRAG_X:Int = 400;

	var MAX_SPEED_Y:Int = 300;
	var ACCELERATION_Y:Int = 900;
	var DRAG_Y:Int = 400;

	public var holdTimer:Float = 0;
	public var jumpTimer:Float = 0;
	public var isJumping:Bool = false;
	public var scrolls:Bool;
	public var inOptions:Bool;

	public var animOffsets:Map<String, Array<Dynamic>>;

	var left(get, null):Bool;
	var right(get, null):Bool;
	var jump(get, null):Bool;

	public var debugMode:Bool = false;
	public var specialAnim:Bool = false;
	public var doubleIdle:Bool = false;

	public var skin:Int;

	private function get_left():Bool {
		return controls.LEFT;
	}

    private function get_right():Bool {
		return controls.RIGHT;
	}

    private function get_jump():Bool {
		return controls.JUMP;
	}

	public function new(xx:Float, yy:Float, skin:Int, scrolls:Bool, inOptions:Bool = false) {
		super(xx, yy);

		animOffsets = new Map();

		this.scrolls = scrolls;
		this.inOptions = inOptions;
		this.skin = skin;
        loadSkin(skin);

		recalcIdle();
		dance();
	}

	override function update(elapsed:Float) {
		var scaledY = FlxMath.remapToRange(targetY, 0, 1, 0, 1.3);
		var scaledX = FlxMath.remapToRange(targetX, 0, 1, 0, 1.3);
		var lerpVal:Float = Utilities.bound(elapsed * 9.6, 0, 1);

		if (scrolls) {
			switch (scrollType) {
				case "Classic":
					y = FlxMath.lerp(y, (scaledY * yMult) + (FlxG.height * 0.48), lerpVal);
					if (forceX != Math.NEGATIVE_INFINITY) {
						x = forceX;
					}
					else {
						x = FlxMath.lerp(x, (targetY * 20) + 90, lerpVal);
					}
	
				case "Vertical":
					y = FlxMath.lerp(y, (scaledY * 120) + (FlxG.height * 0.5), lerpVal);
					x = FlxMath.lerp(x, (targetY * 0) + 308, lerpVal);
					x += targetX / (openfl.Lib.current.stage.frameRate / 60);
	
				case "Horizontal":
					screenCenter(Y);
					x = FlxMath.lerp(x, (scaledX * 200) + (FlxG.width * 0.5), lerpVal);
					x += 0.5;
	
				case "C-Shape":
					y = FlxMath.lerp(y, (scaledY * 65) + (FlxG.height * 0.39), lerpVal);
	
					x = FlxMath.lerp(x, Math.exp(scaledY * 0.8) * 70 + (FlxG.width * 0.1), lerpVal);
					if (scaledY < 0)
						x = FlxMath.lerp(x, Math.exp(scaledY * -0.8) * 70 + (FlxG.width * 0.1), lerpVal);
	
					if (x > FlxG.width + 30)
						x = FlxG.width + 30;
				case "D-Shape":
					y = FlxMath.lerp(y, (scaledY * 90) + (FlxG.height * 0.45), lerpVal);
	
					x = FlxMath.lerp(x, Math.exp(scaledY * 0.8) * -70 + (FlxG.width * 0.35), lerpVal);
					if (scaledY < 0)
						x = FlxMath.lerp(x, Math.exp(scaledY * -0.8) * -70 + (FlxG.width * 0.35), lerpVal);
	
					if (x < -900)
						x = -900;
				case "Center":
					screenCenter(X);
	
					y = FlxMath.lerp(y, (scaledY * 120) + (FlxG.height * 0.48), 0.30);
					// x = FlxMath.lerp(x, (targetY * 20) + 90, 0.30);
			}
		} else {
			jumpMechanic(elapsed);
		}

		if (!debugMode && animation.curAnim != null) {
			if (specialAnim && animation.curAnim.finished) {
				specialAnim = false;
				dance();
			}

			if (animation.curAnim.name.startsWith('walk')) {
				holdTimer += elapsed;
			}

			if (holdTimer >= Conductor.stepCrochet * 0.001 * 4) {
				dance();
				holdTimer = 0;
			}
		}

		super.update(elapsed);

		if (!scrolls)
			movementMechanic(elapsed);
	}

    function jumpMechanic(?elapsed:Float) {
        if (isJumping && !jump)
			isJumping = false;

		if (isTouching(DOWN) && !isJumping)
			jumpTimer = 0;

		if (jumpTimer >= 0 && jump) {
			isJumping = true;
			jumpTimer += elapsed;
		}
		else
			jumpTimer = -1;

		if (jumpTimer > 0 && jumpTimer < 0.25)
			velocity.y = -300;
    }

    function movementMechanic(?elapsed:Float) {
		if (left) {
			acceleration.x = -ACCELERATION_X;
			playAnim('walk');
		}
		else if (right) {
			acceleration.x = ACCELERATION_X;
			playAnim('walk');
		}
		else {
			acceleration.x = 0;
		}
    }

	public var beatPercent:Int = 2;
	private var settingUp:Bool = true;

	public function recalcIdle() {
		var lastIdle:Bool = doubleIdle;
		doubleIdle = (animation.getByName('left') != null && animation.getByName('right') != null);

		if (settingUp) {
			beatPercent = (doubleIdle ? 1 : 2);
		}
		else if (lastIdle != doubleIdle) {
			var calc:Float = beatPercent;
			if (doubleIdle)
				calc /= 2;
			else
				calc *= 2;

			beatPercent = Math.round(Math.max(calc, 1));
		}
		settingUp = false;
	}

	public var danced:Bool = false;

	public function dance()
	{
		if (!debugMode && !specialAnim)
		{
			if (doubleIdle)
			{
				danced = !danced;

				if (danced)
					playAnim('right');
				else
					playAnim('left');
			}
			else if(animation.getByName('idle') != null) {
					playAnim('idle');
			}
		}
	}

	public function playAnim(AnimName:String, Force:Bool = false, Reversed:Bool = false, Frame:Int = 0):Void
	{
		specialAnim = false;
		animation.play(AnimName, Force, Reversed, Frame);

		var theOffset = animOffsets.get(AnimName);
		if (animOffsets.exists(AnimName))
		{
			offset.set(theOffset[0], theOffset[1]);
		}
		else
			offset.set(0, 0);

		updateHitbox();
	}

    function loadSkin(skin:Int) {
		switch (skin)
		{
			default:
				loadGraphic(AssetPaths.image('players/old/player' + skin, 'shared'));
			case 4:
				frames = AssetPaths.getSparrowAtlas('players/new/player' + skin, 'shared');
				animation.addByPrefix('left', 'left', 24);
				animation.addByPrefix('right', 'right', 24);
				animation.addByPrefix('walk', 'walk', 24);

				var scaleNum:Float = 2.2;
				scale.set(scaleNum, scaleNum);
				updateHitbox();

				addOffset('left', 0, 0);
				addOffset('right', 0, 0);
				addOffset('walk', 0, 0);
			case 5:
				frames = AssetPaths.getSparrowAtlas('players/new/player' + skin, 'shared');
				animation.addByPrefix('left', 'left', 24);
				animation.addByPrefix('right', 'right', 24);
				animation.addByPrefix('walk', 'walk', 24);
				
				if (!inOptions) {
					var scaleNum:Float = 0.6;
					scale.set(scaleNum, scaleNum);
					updateHitbox();
				}

				addOffset('left', 0, 0);
				addOffset('right', -4, 0);
				addOffset('walk', 0, 0);
				//updateHitbox();
		}

		if (!scrolls) {
			acceleration.y = ACCELERATION_Y;
			maxVelocity.y = MAX_SPEED_Y;
			maxVelocity.x = MAX_SPEED_X;
			drag.x = DRAG_X;
			antialiasing = GameSettings.antialias;
		}
    }

	public function addOffset(name:String, x:Float = 0, y:Float = 0)
	{
		animOffsets[name] = [x, y];
	}

	public function quickAnimAdd(name:String, anim:String) {
		animation.addByPrefix(name, anim, 24, false);
	}
}
