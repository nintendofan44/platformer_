package base;

import flixel.FlxG;
import flixel.util.FlxSave;
import flixel.input.keyboard.FlxKey;
import flixel.graphics.FlxGraphic;
import lime.app.Application;
import base.Controls;

class GameSettings {
	public static var ptBR:Bool = false;
	public static var disableReset:Bool = false;
	public static var antialias:Bool = true;
	public static var framerate:Int = 60;
	public static var gameplaySettings:Map<String, Dynamic> = [
		'test1' => 1.0,
		'test2' => false
	];

	public static var keyBinds:Map<String, Array<FlxKey>> = [
		//Key Bind, Name for ControlsSubState
		'left'			=> [A, LEFT],
		'down'			=> [S, DOWN],
		'up'			=> [W, UP],
		'right'			=> [D, RIGHT],
		'jump'			=> [SPACE, NONE],
		
		'ui_left'		=> [A, LEFT],
		'ui_down'		=> [S, DOWN],
		'ui_up'			=> [W, UP],
		'ui_right'		=> [D, RIGHT],
		
		'accept'		=> [SPACE, ENTER],
		'back'			=> [BACKSPACE, ESCAPE],
		'pause'			=> [ENTER, ESCAPE],
		'reset'			=> [R, NONE],
	];
	public static var defaultKeys:Map<String, Array<FlxKey>> = null;

	public static function loadDefaultKeys() {
		defaultKeys = keyBinds.copy();
		//trace(defaultKeys);
	}

	public static function saveSettings() {
		FlxG.save.data.ptBR = ptBR;
		FlxG.save.data.disableReset = disableReset;
		FlxG.save.data.antialias = antialias;
	
		FlxG.save.flush();

		var save:FlxSave = new FlxSave();
		save.bind('controls', 'nf44'); //Placing this in a separate save so that it can be manually deleted without removing your Score and stuff
		save.data.customControls = keyBinds;
		save.flush();
		FlxG.log.add("Settings saved!");
	}

	public static function loadPrefs() {
		if(FlxG.save.data.ptBR != null) {
			ptBR = FlxG.save.data.ptBR;
		}
		if(FlxG.save.data.disableReset != null) {
			disableReset = FlxG.save.data.disableReset;
		}
		if(FlxG.save.data.antialiaas != null) {
			antialias = FlxG.save.data.antialias;
		}
		if(FlxG.save.data.framerate != null) {
			framerate = FlxG.save.data.framerate;
		}
		#if !html5
		else {
			var refreshRate:Int = Application.current.window.displayMode.refreshRate;
			if(framerate != refreshRate) {
				framerate = refreshRate;
				if(framerate < 60) {
					framerate = 60;
				} else if(framerate > 240) {
					framerate = 240;
				}
			}
		}
		#end
		if(framerate != FlxG.drawFramerate) {
			FlxG.updateFramerate = framerate;
			FlxG.drawFramerate = framerate;
		}
		if(FlxG.save.data.gameplaySettings != null)
		{
			var savedMap:Map<String, Dynamic> = FlxG.save.data.gameplaySettings;
			for (name => value in savedMap)
			{
				gameplaySettings.set(name, value);
			}
		}
		
		// flixel automatically saves your volume!
		if(FlxG.save.data.volume != null)
		{
			FlxG.sound.volume = FlxG.save.data.volume;
		}
		if (FlxG.save.data.mute != null)
		{
			FlxG.sound.muted = FlxG.save.data.mute;
		}

		var save:FlxSave = new FlxSave();
		save.bind('controls', 'nintendofan44');
		if(save != null && save.data.customControls != null) {
			var loadedControls:Map<String, Array<FlxKey>> = save.data.customControls;
			for (control => keys in loadedControls) {
				keyBinds.set(control, keys);
			}
			reloadControls();
		}
	}

	inline public static function getGameplaySetting(name:String, defaultValue:Dynamic):Dynamic {
		return (gameplaySettings.exists(name) ? gameplaySettings.get(name) : defaultValue);
	}

	public static function reloadControls() {
		PlayerSettings.player1.controls.setKeyboardScheme(KeyboardScheme.Solo);
	}
	public static function copyKey(arrayToCopy:Array<FlxKey>):Array<FlxKey> {
		var copiedArray:Array<FlxKey> = arrayToCopy.copy();
		var i:Int = 0;
		var len:Int = copiedArray.length;

		while (i < len) {
			if(copiedArray[i] == NONE) {
				copiedArray.remove(NONE);
				--i;
			}
			i++;
			len = copiedArray.length;
		}
		return copiedArray;
	}
}