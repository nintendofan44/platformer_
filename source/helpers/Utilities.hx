package helpers;

import openfl.system.System;
import flixel.text.FlxText;
import flixel.FlxG;
import openfl.utils.Assets;
import flixel.FlxSprite;

using StringTools;

class Utilities
{
	inline public static function textArray(path:String):Array<String>
	{
		var daList:Array<String> = Assets.getText(path).trim().split('\n');
		for (i in 0...daList.length)
		{
			daList[i] = daList[i].trim();
		}

		return daList;
	}

	inline public static function nextPower(k:Int) { // not sure what this is for
		var n = 1;
		while (n < k)
			n *= 2;
		return Std.int(n);
	}

	inline public static function bound(value:Float, min:Float, max:Float):Float {
		return Math.max(min, Math.min(max, value));
	}

	inline public static function currentMem():Float
	{
		return (System.totalMemory / 1024) / 1000;
	}

	inline public static function divide(f1:Float, f2:Float):Float
	{
		return if (f2 == 0) 0 else f1 / f2;
	}

	public static function precacheSound(sound:String, ?library:String = null):Void {
		precacheSoundFile(AssetPaths.sound(sound, library));
	}

	public static function precacheMusic(sound:String, ?library:String = null):Void {
		precacheSoundFile(AssetPaths.music(sound, library));
	}

	private static function precacheSoundFile(file:Dynamic):Void {
		if (Assets.exists(file, SOUND) || Assets.exists(file, MUSIC))
			Assets.getSound(file, true);
	}

	inline public static function verifyChar(array:Array<Dynamic>, texto:String) {
        for (i in 0...array.length) {
            if (texto.contains(array[i][0]))
                texto = texto.replace(array[i][0], array[i][1]);
        }
    }

	public static function browserLoad(site:String)
	{
		#if linux
		Sys.command('/usr/bin/xdg-open', [site]);
		#else
		FlxG.openURL(site);
		#end
	}

	/**
		Specified by the constant, e. `EULER` is approximately `2.7182818284590452353602874713527`.
	**/
	public static var EULER(default, null):Float = 2.7182818284590452353602874713527;
}