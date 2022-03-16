package states;

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
	var close(get, null):Bool;

	var sound:FlxSoundAsset;

	private function get_close():Bool {
		return FlxG.keys.anyJustPressed([ESCAPE, BACKSPACE]);
	}

	override public function create() {
		createCourse('level1', {x: 16, y: 672});

		super.create();
	}

	override public function update(elapsed:Float) {
		if (FlxG.sound.music != null)
			Conductor.songPosition = FlxG.sound.music.time;

		super.update(elapsed);

		if (close)
			MusicBeatState.switchState(new TitleScreen());
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
}

class ScoreSubstate extends MusicBeatSubstate {
	public function new() {
		super();
	}

	override public function create() {
		super.create();
	}

	override public function update(elapsed:Float) {
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
}
