package states;

import helpers.states.AnimationDebug;
import base.Conductor;
import objects.Player;
import helpers.Highscore;
import flixel.text.FlxText.FlxTextBorderStyle;
import objects.ConnectedFlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import helpers.AssetPaths;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxG;
import objects.ScrollSprite;

using StringTools;

class PlayerChooser extends MusicBeatState {
	var menuItems:FlxTypedGroup<Player>;
	private var arrayArray:Array<ConnectedFlxText> = [];

	public static var curSelected:Int = 0;

	var charTxt:ConnectedFlxText;

	// 1 - char name / 2 - age????
	var chars:Array<Dynamic> = [
		["1", "old"],
		["2", "old"],
		["3", "old"],
		["4", "new"],
		["5", "new"]
	];

	public function new() {
		super();
	}

	override public function create() {
		AssetPaths.clearStoredMemory();
		AssetPaths.clearUnusedMemory();

		super.create();

		var bg:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.GRAY);
		bg.screenCenter();
		add(bg);

		menuItems = new FlxTypedGroup<Player>();
		add(menuItems);

		for (i in 0...chars.length) {
			var char:Player = new Player(0, 0, Std.parseInt(chars[i][0]), true);
			char.ID = i;
			char.scrollType = "Horizontal";
			menuItems.add(char);

			charTxt = new ConnectedFlxText(0, 0, FlxG.width, '' + chars[i][0], 20);
			charTxt.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), 20, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			charTxt.sprTracker = char;
			charTxt.xAdd = -650;
			charTxt.yAdd = char.height + 20;
			add(charTxt);
			arrayArray.push(charTxt);
		}

		/*var middle:FlxSprite = new FlxSprite().loadGraphic(AssetPaths.image('ui/thingy'));
		middle.screenCenter();
		add(middle);*/

		changeSelection();
	}

	override public function update(elapsed:Float) {
		if (FlxG.sound.music != null)
			Conductor.songPosition = FlxG.sound.music.time;

		if (controls.UI_LEFT_P) {
			changeSelection(-1);
		}

		if (controls.UI_RIGHT_P) {
			changeSelection(1);
		}

		if (controls.ACCEPT) {
			for (i in 0...chars.length) {
				if (i == curSelected) {
					MusicBeatState.switchState(new LevelChooser(Std.parseInt(chars[i][0])));
				}
			}
		}

		if (controls.BACK)
			MusicBeatState.switchState(new TitleScreen());

		if (FlxG.keys.justPressed.SEVEN) {
			for (i in 0...chars.length) {
				if ((curSelected != 0 || curSelected != 1 || curSelected != 2) && i == curSelected) {
					MusicBeatState.switchState(new AnimationDebug(Std.parseInt(chars[i][0])));
				}
			}
		}

		super.update(elapsed);
	}

	var lastBeatHit:Int = -1;

	override public function beatHit() {
		super.beatHit();

		if (lastBeatHit == curBeat) {
			return;
		}

		for (item in menuItems.members) {
			if (curBeat % item.beatPercent == 0
				&& (item.skin != 1 || item.skin != 2 || item.skin != 3)
				&& item.animation.curAnim != null) {
				switch (item.skin) {
					default:
						item.dance();
				}
			}
		}

		lastBeatHit = curBeat;
	}

	override public function stepHit() {
		super.stepHit();
	}

	function changeSelection(huh:Int = 0) {
		curSelected += huh;

		if (curSelected >= menuItems.length)
			curSelected = 0;
		if (curSelected < 0)
			curSelected = menuItems.length - 1;

		var num:Int = 0;
		for (item in menuItems.members) {
			item.targetX = num - curSelected;
			num++;
		}

		for (item in menuItems.members) {
			item.alpha = 0.6;

			if (item.targetX == 0) {
				item.alpha = 1;
			}
		}
	}
}
