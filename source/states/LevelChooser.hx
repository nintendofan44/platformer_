package states;

import helpers.Utilities;
import sys.FileSystem;
import base.Conductor;
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

class LevelChooser extends MusicBeatState {
	var menuItems:FlxTypedGroup<ScrollSprite>;
	private var arrayArray:Array<ConnectedFlxText> = [];

	var pnToStore:Int = 0;

	public static var curSelected:Int = 0;

	var scoreTxt:ConnectedFlxText;
	var wrldTxt:ConnectedFlxText;

	var levels:Array<String> = [];
	var worlds:Array<String> = [];
	public static var firstTime = true;

	var worldFile = Utilities.textArray(AssetPaths.txt('levelWorlds', 'levels'));

	var strRep:Array<Dynamic> = [
		[".tmx", ""],
	];

	public function new(pnToStore:Int) {
		super();
		this.pnToStore = pnToStore;
	}

	override public function create() {
		AssetPaths.clearStoredMemory();
		AssetPaths.clearUnusedMemory();

		for (i in FileSystem.readDirectory(FileSystem.absolutePath("assets/levels/data")))
		{
			if (i != "levelAssets.tsx" && i != "levelWorlds.txt") {
				trace('check before: ' + i);
				for (j in 0...strRep.length) {
					i = i.replace(strRep[j][0], strRep[j][1]);
				}
				trace('check after: ' + i);
				if (firstTime) {
					levels.push(i);
				} else {
					if (!levels.contains(i))
						levels.push(i);
				}
			}
		}

		worlds = worldFile;

		firstTime = false;

		super.create();

		var bg:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.GRAY);
		bg.screenCenter();
		add(bg);

		menuItems = new FlxTypedGroup<ScrollSprite>();
		add(menuItems);

		for (i in 0...levels.length) {
			var icon:ScrollSprite = new ScrollSprite().loadGraphic(AssetPaths.levelIcon(levels[i], 'levels'));
			icon.ID = i;
			icon.scrollType = "Horizontal";
			menuItems.add(icon);

			scoreTxt = new ConnectedFlxText(0, 0, FlxG.width, 'Score: ' + Highscore.getScore(levels[i]), 20);
			scoreTxt.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), 20, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			scoreTxt.sprTracker = icon;
			scoreTxt.xAdd = -550;
			scoreTxt.yAdd = 150;
			add(scoreTxt);

			wrldTxt = new ConnectedFlxText(0, scoreTxt.y, FlxG.width, 'World: ' + worlds[i], 20);
			wrldTxt.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), 20, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			wrldTxt.sprTracker = scoreTxt;
			wrldTxt.yAdd = scoreTxt.height + 20;
			add(wrldTxt);
			arrayArray.push(wrldTxt);
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
			for (i in 0...levels.length) {
				if (i == curSelected) {
					trace(i);
					MusicBeatState.switchState(new PlayState(levels[i], Std.parseInt(worlds[i]), pnToStore));
				}
			}
		}

		if (controls.BACK)
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

class WorldData
{
	public var name:Int = 1;

	public function new(name:Int)
	{
		if (name < 0 && name != 0)
			this.name = name;
	}
}
