package options;

import states.TitleScreen;
import options.GraphicsSettingsSubstate.GraphicsSettingsSubState;
import base.GameSettings;
import helpers.AssetPaths;
import objects.Alphabet;
import states.MusicBeatState;
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import lime.utils.Assets;
import flixel.FlxSubState;
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxSave;
import haxe.Json;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxTimer;
import flixel.input.keyboard.FlxKey;
import flixel.graphics.FlxGraphic;
import base.Controls;

using StringTools;

class OptionsState extends MusicBeatState
{
	var options:Array<String> = ['Controls', 'Graphics', 'Visuals and UI', 'Gameplay'];
	private var grpOptions:FlxTypedGroup<Alphabet>;
	private static var curSelected:Int = 0;

	function openSelectedSubstate(label:String) {
		switch(label) {
			case 'Controls':
				openSubState(new options.ControlsSubState());
			case 'Graphics':
				openSubState(new options.GraphicsSettingsSubState());
			case 'Visuals and UI':
				openSubState(new options.VisualsUISubState());
			case 'Gameplay':
				openSubState(new options.GameplaySettingsSubState());
		}
	}

	var selectorLeft:Alphabet;
	var selectorRight:Alphabet;

	override function create() {
        var bg:FlxSprite = new FlxSprite(0, 0).makeGraphic(FlxG.width, FlxG.height, FlxColor.fromRGB(255, 87, 51));
		bg.screenCenter();
        bg.scrollFactor.set();
		add(bg);

		grpOptions = new FlxTypedGroup<Alphabet>();
		add(grpOptions);

		for (i in 0...options.length)
		{
			var optionText:Alphabet = new Alphabet(0, 0, options[i], true, false);
			optionText.screenCenter();
			optionText.y += (100 * (i - (options.length / 2))) + 50;
			grpOptions.add(optionText);
		}

		selectorLeft = new Alphabet(0, 0, '>', true, false);
		add(selectorLeft);
		selectorRight = new Alphabet(0, 0, '<', true, false);
		add(selectorRight);

		changeSelection();
		GameSettings.saveSettings();

		super.create();
	}

	override function closeSubState() {
		super.closeSubState();
		GameSettings.saveSettings();
	}

	override function update(elapsed:Float) {
		super.update(elapsed);

		if (controls.UI_UP_P) {
			changeSelection(-1);
		}
		if (controls.UI_DOWN_P) {
			changeSelection(1);
		}

		if (controls.BACK) {
			MusicBeatState.switchState(new TitleScreen());
		}

		if (controls.ACCEPT) {
			openSelectedSubstate(options[curSelected]);
		}
	}
	
	function changeSelection(change:Int = 0) {
		curSelected += change;
		if (curSelected < 0)
			curSelected = options.length - 1;
		if (curSelected >= options.length)
			curSelected = 0;

		var ihadastroke:Int = 0;

		var duration:Float = 1;
		for (item in grpOptions.members) {
			item.targetY = ihadastroke - curSelected;
			ihadastroke++;

			FlxTween.tween(item, {alpha: 0.6}, duration - 0.65, {ease: FlxEase.expoInOut});
			if (item.targetY == 0) {
				FlxTween.tween(item, {alpha: 0.6}, duration - 0.65, {
					ease: FlxEase.expoInOut,
					onComplete: function(flxTween:FlxTween) {
						FlxTween.tween(item, {alpha: 1}, duration - 0.8, {ease: FlxEase.expoInOut});
					}
				});
				FlxTween.tween(selectorLeft, {alpha: 0.6, x: item.x - 63, y: item.y}, duration - 0.65, {
					ease: FlxEase.expoInOut,
					onComplete: function(flxTween:FlxTween) {
						FlxTween.tween(selectorLeft, {alpha: 1}, duration - 0.8, {ease: FlxEase.expoInOut});
					}
				});
				FlxTween.tween(selectorRight, {alpha: 0.6, x: item.x + item.width + 15, y: item.y}, duration - 0.65, {
					ease: FlxEase.expoInOut,
					onComplete: function(flxTween:FlxTween) {
						FlxTween.tween(selectorRight, {alpha: 1}, duration - 0.8, {ease: FlxEase.expoInOut});
					}
				});
			}
		}
	}
}