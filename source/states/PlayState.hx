package states;

import base.GameSettings;
import states.LevelChooser.WorldData;
import flixel.FlxSubState;
import flixel.addons.transition.FlxTransitionableState;
import helpers.Highscore;
import flixel.text.FlxText;
import objects.Player;
import flixel.group.FlxGroup;
import flixel.addons.transition.FlxTransitionSprite.GraphicTransTileDiamond;
import flixel.math.FlxMath;
import flixel.system.FlxAssets.FlxSoundAsset;
import helpers.AssetPaths;
import base.Conductor;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import states.MusicBeatState;
import helpers.Utilities;
import states.CourseState;
import flixel.util.FlxCollision;

class PlayState extends CourseState {
	var sound:FlxSoundAsset;

	var level:String = "";
	var world:Int = 1;

	var playerNum:Int = 0;

	public function new(level:String, world:Int, playerNum:Int) {
		super();
		this.level = level;

		if (world < 0 && world != 0)
			this.world = world;

		this.playerNum = playerNum;
	}

	override public function create() {
		AssetPaths.clearStoredMemory();

		createCourse(level, {x: 16, y: 672}, world, playerNum);

		score = new FlxText(18, 15, FlxG.width, scoreString + 0, 24);
		score.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		score.scrollFactor.set();
		score.borderSize = 1.25;
		add(score);

		super.create();

		AssetPaths.clearUnusedMemory();
	}

	override public function update(elapsed:Float) {
		if (FlxG.sound.music != null)
			Conductor.songPosition = FlxG.sound.music.time;

		if (controls.RESET && GameSettings.disableReset)
			MusicBeatState.switchState(new PlayState(level, world, playerNum)); // bad but whateva, it works

		super.update(elapsed);

		if (controls.BACK)
			MusicBeatState.switchState(new TitleScreen());

		for (coin in coinGroup.members) {
			if (coin.exists) {
				if (player.overlaps(coin))
				{
					coinCallback(coin);
				}
			}
		}

		for (trophy in trophyGroup.members) {
			if (trophy.exists) {
				if (player.overlaps(trophy))
				{
					trophyCallback(trophy);
					openSubState(new ScoreSubstate(scoreString, scoreNum));
					Highscore.saveScore(level, scoreNum);
				}
			}
		}
	}

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

	public override function openSubState(SubState:FlxSubState):Void
	{
		#if FLX_MOUSE
		if (cursor != null && hideCursorOnSubstate && cursor.visible == true)
		{
			_cursorHidden = true;
			cursor.visible = false;
		}
		#end
		super.openSubState(SubState);
	}
}

class ScoreSubstate extends MusicBeatSubstate {
	var score:FlxText;
	var lerpScore:Int = 0;
	var intendedScore:Int = 0;
	var stringThing:String = "";

	var bg:FlxSprite = new FlxSprite();

	public function new(stringThing:String, scoreNum:Int) {
		super();

		this.stringThing = stringThing;
		this.intendedScore = scoreNum;

		bg.makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		bg.screenCenter();
		bg.alpha = 0.6;
		add(bg);

		score = new FlxText(0, 0, FlxG.width, "", 24);
		score.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		score.scrollFactor.set();
		score.borderSize = 1.25;
		score.screenCenter();
		add(score);
	}

	override public function update(elapsed:Float) {
		lerpScore = Math.floor(FlxMath.lerp(lerpScore, intendedScore, Utilities.bound(elapsed, 0, 1)));

		score.text = '' + stringThing + lerpScore;

		super.update(elapsed);

		if (controls.BACK) {
			FlxG.switchState(new TitleScreen());
			FlxTransitionableState.skipNextTransIn = true;
			FlxTransitionableState.skipNextTransOut = true;
		}
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
}
