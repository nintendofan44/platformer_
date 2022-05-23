package objects;

import flixel.FlxCamera;
import flixel.FlxG;

using flixel.util.FlxColorTransformUtil;

class FlxCameraCustom extends FlxCamera {
	@:deprecated("`FlxCamera.defaultCameras` is deprecated, use `FlxG.cameras.setDefaultDrawTarget` instead")
	public static var defaultCameras(get, set):Array<FlxCamera>;

	@:allow(flixel.FlxBasic.get_cameras)
	@:allow(flixel.FlxBasic.get_camera)
	@:allow(flixel.system.frontEnds.CameraFrontEnd)
	@:allow(flixel.group.FlxTypedGroup.draw)
	static var _defaultCameras:Array<FlxCamera>;

	override function updateFlashSpritePosition():Void {
		if (flashSprite != null) {
			flashSprite.x = (FlxG.width - flashSprite.width) / 2;
			flashSprite.y = (FlxG.height - flashSprite.height) / 2;
		}
	}

	static inline function get_defaultCameras():Array<FlxCamera> {
		return _defaultCameras;
	}

	static inline function set_defaultCameras(value:Array<FlxCamera>):Array<FlxCamera> {
		return _defaultCameras = value;
	}
}
