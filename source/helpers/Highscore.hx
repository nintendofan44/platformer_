package helpers;

import flixel.FlxG;

using StringTools;

class Highscore {
	public static var worldScores:Map<String, Int> = new Map();
	public static var levelScores:Map<String, Int> = new Map();

	public static function resetLevel(level:String):Void {
		var theLevel:String = format(level);
		setScore(theLevel, 0);
	}

	public static function resetWorld(world:String):Void {
		var theWorld:String = format(world);
		setWorldScore(theWorld, 0);
	}

	public static function floorDecimal(value:Float, decimals:Int):Float {
		if (decimals < 1) {
			return Math.floor(value);
		}

		var tempMult:Float = 1;
		for (i in 0...decimals) {
			tempMult *= 10;
		}
		var newValue:Float = Math.floor(value * tempMult);
		return newValue / tempMult;
	}

	public static function saveScore(level:String, score:Int = 0):Void {
		var theLevel:String = format(level);

		if (levelScores.exists(theLevel)) {
			if (levelScores.get(theLevel) < score) {
				setScore(theLevel, score);
			}
		}
		else {
			setScore(theLevel, score);
		}
	}

	public static function saveWorldScore(world:String, score:Int = 0):Void {
		var theWorld:String = format(world);

		if (worldScores.exists(theWorld)) {
			if (worldScores.get(theWorld) < score)
				setWorldScore(theWorld, score);
		}
		else
			setWorldScore(theWorld, score);
	}

	static function setScore(level:String, score:Int):Void {
		levelScores.set(level, score);
		FlxG.save.data.levelScores = levelScores;
		FlxG.save.flush();
	}

	static function setWorldScore(world:String, score:Int):Void {
		worldScores.set(world, score);
		FlxG.save.data.worldScores = worldScores;
		FlxG.save.flush();
	}

	public static function format(level:String):String {
		return AssetPaths.formatToLevelPath(level);
	}

	public static function getScore(level:String):Int {
		var theLevel:String = format(level);
		if (!levelScores.exists(theLevel))
			setScore(theLevel, 0);

		return levelScores.get(theLevel);
	}

	public static function getWorldScore(world:String):Int {
		var theWorld:String = format(world);
		if (!worldScores.exists(theWorld))
			setWorldScore(theWorld, 0);

		return worldScores.get(theWorld);
	}

	public static function load():Void {
		if (FlxG.save.data.worldScores != null) {
			worldScores = FlxG.save.data.worldScores;
		}
		if (FlxG.save.data.levelScores != null) {
			levelScores = FlxG.save.data.levelScores;
		}
	}
}
