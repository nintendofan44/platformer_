package states;

import flixel.FlxSubState;
import flixel.addons.transition.FlxTransitionableState;
import helpers.Highscore;
import flixel.text.FlxText;
import objects.Player;
import flixel.group.FlxGroup;
import flixel.addons.transition.FlxTransitionSprite.GraphicTransTileDiamond;
import flixel.math.FlxMath;
import flixel.system.FlxAssets.FlxSoundAsset;
import helpers.AssetPaths;
import base.Conductor;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import states.MusicBeatState;
import helpers.Utilities;
import states.CourseState;
import flixel.util.FlxCollision;

class PlayState extends CourseState {
	var close(get, null):Bool;

	var sound:FlxSoundAsset;

	var level:String = "";
	var world:String = "";

	private function get_close():Bool {
		return FlxG.keys.anyJustPressed([ESCAPE, BACKSPACE]);
	}

	public function new(level:String, world:String) {
		super();
		this.level = level;
		this.world = world;
	}

	override public function create() {
		createCourse(level, {x: 16, y: 672}, world);

		score = new FlxText(18, 15, FlxG.width, scoreString + 0, 24);
		score.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		score.scrollFactor.set();
		score.borderSize = 1.25;
		add(score);

		super.create();
	}

	override public function update(elapsed:Float) {
		if (FlxG.sound.music != null)
			Conductor.songPosition = FlxG.sound.music.time;

		super.update(elapsed);

		if (close)
			MusicBeatState.switchState(new TitleScreen());

		for (coin in coinGroup.members) {
			if (coin.exists) {
				if (player.overlaps(coin))
				{
					coinCallback(coin);
				}
			}
		}

		for (trophy in trophyGroup.members) {
			if (trophy.exists) {
				if (player.overlaps(trophy))
				{
					trophyCallback(trophy);
					openSubState(new ScoreSubstate(scoreString, scoreNum));
					Highscore.saveScore(level, scoreNum);
				}
			}
		}
	}

	override public function beatHit() {
		super.beatHit();

		if (lastBeatHit == curBeat) {
			return;
		}

		lastBeatHit = curBeat;
	}

	override public function stepHit() {
		super.stepHit();
	}

	public override function openSubState(SubState:FlxSubState):Void
	{
		#if FLX_MOUSE
		if (cursor != null && hideCursorOnSubstate && cursor.visible == true)
		{
			_cursorHidden = true;
			cursor.visible = false;
		}
		#end
		super.openSubState(SubState);
	}
}

class ScoreSubstate extends MusicBeatSubstate {
	var score:FlxText;
	var bg:FlxSprite = new FlxSprite();

	var closeThis(get, null):Bool;

	private function get_closeThis():Bool {
		return FlxG.keys.anyJustPressed([ENTER]);
	}

	public function new(stringThing:String, scoreNum:Int) {
		super();

		bg.makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		bg.screenCenter();
		bg.alpha = 0.6;
		add(bg);

		score = new FlxText(0, 0, FlxG.width, stringThing + scoreNum, 24);
		score.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		score.scrollFactor.set();
		score.borderSize = 1.25;
		score.screenCenter();
		add(score);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		if (closeThis) {
			FlxG.switchState(new TitleScreen());
			FlxTransitionableState.skipNextTransIn = true;
			FlxTransitionableState.skipNextTransOut = true;
		}
	}

	var lastBeatHit:Int = -1;

	override public function beatHit() {
		super.beatHit();

		if (lastBeatHit == curBeat) {
			return;
		}

		lastBeatHit = curBeat;
	}

	override public function stepHit() {
		super.stepHit();
	}
}
