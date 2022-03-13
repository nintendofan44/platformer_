package helpers;

import flixel.text.FlxText;
import flixel.FlxG;
import openfl.utils.Assets;
import flixel.FlxSprite;

using StringTools;

class Utilities
{
	inline public static function nextPower(k:Int) { // not sure what this is for
		var n = 1;
		while (n < k)
			n *= 2;
		return Std.int(n);
	}

	inline public static function bound(value:Float, min:Float, max:Float):Float {
		return Math.max(min, Math.min(max, value));
	}

	public static function precacheSound(sound:String, ?library:String = null):Void
	{
		if (!Assets.cache.hasSound(AssetPaths.sound(sound, library)))
		{
			FlxG.sound.cache(AssetPaths.sound(sound, library));
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
}