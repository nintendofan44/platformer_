package states;

import helpers.Highscore;
import flixel.text.FlxText.FlxTextBorderStyle;
import objects.ConnectedFlxText;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import helpers.AssetPaths;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxG;
import objects.LevelIcon;

class LevelChooser extends MusicBeatState {
	var menuItems:FlxTypedGroup<LevelIcon>;
	private var arrayArray:Array<ConnectedFlxText> = [];

	public static var curSelected:Int = 0;

	var scoreTxt:ConnectedFlxText;

	// 1 - level name / 2 - world name
	var levels:Array<Dynamic> = [
		["level1", "one"],
		["level2", "one"],
		["level3", "one"],
		["level4", "one"],
		["level5", "one"]
	];

	var close(get, null):Bool;
	var enter(get, null):Bool;
	var left(get, null):Bool;
	var right(get, null):Bool;

	private function get_close():Bool {
		return FlxG.keys.anyJustPressed([ESCAPE, BACKSPACE]);
	}

	private function get_enter():Bool {
		return FlxG.keys.anyJustPressed([ENTER]);
	}

    private function get_left():Bool {
		return FlxG.keys.anyJustPressed([LEFT, A]);
	}

    private function get_right():Bool {
		return FlxG.keys.anyJustPressed([RIGHT, D]);
	}

	public function new() {
		super();
	}

	override public function create() {
		super.create();

		var bg:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.GRAY);
		bg.screenCenter();
		add(bg);

		menuItems = new FlxTypedGroup<LevelIcon>();
		add(menuItems);

		for (i in 0...levels.length) {
			var icon:LevelIcon = new LevelIcon().loadGraphic(AssetPaths.levelIcon(levels[i][0], 'levels'));
			icon.ID = i;
			icon.scrollType = "Horizontal";
			menuItems.add(icon);

			scoreTxt = new ConnectedFlxText(0, 0, FlxG.width, 'Score: ' + Highscore.getScore(levels[i][0]), 20);
			scoreTxt.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), 20, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			scoreTxt.sprTracker = icon;
			scoreTxt.xAdd = -550;
			scoreTxt.yAdd = 150;
			add(scoreTxt);
			arrayArray.push(scoreTxt);
		}

		/*var middle:FlxSprite = new FlxSprite().loadGraphic(AssetPaths.image('ui/thingy'));
		middle.screenCenter();
		add(middle);*/

		changeSelection();
	}

	override public function update(elapsed:Float) {
		if (left) {
			changeSelection(-1);
		}

		if (right) {
			changeSelection(1);
		}

		if (enter) {
			for (i in 0...levels.length) {
				if (i == curSelected) {
					MusicBeatState.switchState(new PlayState(levels[i][0], levels[i][1]));
				}
			}
		}

		if (close)
			MusicBeatState.switchState(new TitleScreen());

		super.update(elapsed);
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
