package objects;

import flixel.FlxCamera;
import flixel.FlxG;

using flixel.util.FlxColorTransformUtil;

class FlxCameraCustom extends FlxCamera {
	@:deprecated("`FlxCameraCustom.defaultCameras` is deprecated, use `FlxG.cameras.setDefaultDrawTarget` instead")
	public static var defaultCameras(get, set):Array<FlxCameraCustom>;

	@:allow(flixel.FlxBasic.get_cameras)
	@:allow(flixel.FlxBasic.get_camera)
	@:allow(flixel.system.frontEnds.CameraFrontEnd)
	@:allow(flixel.group.FlxTypedGroup.draw)
	static var _defaultCameras:Array<FlxCameraCustom>;
	public var canUpdateScrShake:Bool = true;

	function updateFlashSpriteSize():Void {
		if (flashSprite != null) {
			flashSprite.width = FlxG.width;
			flashSprite.height = FlxG.height;
		}
	}

	override function updateFlashSpritePosition():Void {
		if (flashSprite != null) {
			flashSprite.x = (FlxG.width - flashSprite.width) / 3;
			flashSprite.y = (FlxG.height - flashSprite.height) / 2;
		}
	}

	override function updateFlashOffset():Void {
		if (flashSprite != null) {
			//trace('do nothin');
		}
	}

	override function updateShake(elapsed:Float):Void
	{
		if (flashSprite != null) {
			//trace('do nothin');
		}
	}

	static inline function get_defaultCameras():Array<FlxCameraCustom> {
		return _defaultCameras;
	}

	static inline function set_defaultCameras(value:Array<FlxCameraCustom>):Array<FlxCameraCustom> {
		return _defaultCameras = value;
	}

	override public function update(elapsed:Float):Void
	{
		// follow the target, if there is one
		if (target != null)
		{
			updateFollow();
		}

		updateScroll();
		updateFlash(elapsed);
		updateFade(elapsed);

		flashSprite.filters = filtersEnabled ? _filters : null;

		updateFlashSpriteSize();
		updateFlashSpritePosition();
		updateShake(elapsed);
	}
}
