package objects;

import helpers.AssetPaths;
import flixel.FlxG;
import flixel.graphics.FlxGraphic;
import flixel.util.FlxColor;
import flixel.FlxSprite;

using StringTools;

class ConnectedSprite extends FlxSprite {
	public var sprTracker:FlxSprite;
	public var xAdd:Float = 0;
	public var yAdd:Float = 0;
	public var angleAdd:Float = 0;
	public var alphaMult:Float = 1;

	public var copyAngle:Bool = true;
	public var copyAlpha:Bool = true;
	public var copyScroll:Bool = true;
	public var copyVisible:Bool = false;

	public function new(?file:String = null, ?library:String = null, ?anim:String = null, ?loop:Bool = false) {
		super();
		if (anim != null) {
			frames = AssetPaths.getSparrowAtlas(file, library);
			animation.addByPrefix('idle', anim, 24, loop);
			animation.play('idle');
		}
		else if (file != null) {
			loadGraphic(AssetPaths.image(file, library));
		}
		antialiasing = true;
		scrollFactor.set();
	}

	override function update(elapsed:Float) {
		super.update(elapsed);

		if (sprTracker != null) {
			setPosition(sprTracker.x + xAdd, sprTracker.y + yAdd);

			if (copyScroll)
				scrollFactor.set(sprTracker.scrollFactor.x, sprTracker.scrollFactor.y);

			if (copyAngle)
				angle = sprTracker.angle + angleAdd;

			if (copyAlpha)
				alpha = sprTracker.alpha + alphaMult;

			if (copyVisible)
				visible = sprTracker.visible;
		}
	}

	override public function makeGraphic(Width:Int, Height:Int, Color:FlxColor = FlxColor.WHITE, Unique:Bool = false, ?Key:String):ConnectedSprite
	{
		var graph:FlxGraphic = FlxG.bitmap.create(Width, Height, Color, Unique, Key);
		frames = graph.imageFrame;
		return this;
	}
}
