package states;

import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.ui.FlxBar;
import cpp.abi.Abi;
import flixel.math.FlxMath;
import helpers.Utilities;
import base.Conductor;
import base.PlayerSettings;
import base.Controls;
import helpers.AssetPaths;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxStrip;
import flixel.util.FlxColor;
import haxe.io.Bytes;
import lime.media.AudioBuffer;
import lime.media.vorbis.VorbisFile;
import openfl.geom.Rectangle;
import openfl.media.Sound;
import sys.thread.Thread;

class WFteststate extends MusicBeatState {
	var ww:Int = 534;
	var hh:Int = 218;
	var size:Float = 30;
	var playbackLoudness:Float = 0;

	var music:String = "";
	var waveformSprite:FlxSprite;

	var audioBuffer:AudioBuffer;
	var bytes:Bytes;

	public function new(music:String) {
		super();
		this.music = music;
	}

	override public function create() {
		if (FlxG.sound.music != null)
			FlxG.sound.music.stop();

		bgColor = FlxColor.GRAY;

		super.create();

		waveformSprite = new FlxSprite().makeGraphic(ww, hh, FlxColor.BLACK);
		waveformSprite.screenCenter();
		add(waveformSprite);

		audioBuffer = AudioBuffer.fromFile(music);

		bytes = audioBuffer.data.toBytes();

		FlxG.sound.playMusic(Sound.fromAudioBuffer(audioBuffer));
	}

	override public function update(elapsed:Float) {
		if (FlxG.sound.music != null) Conductor.songPosition = FlxG.sound.music.time;
		if (controls.BACK) {
			bgColor = FlxColor.BLACK;
			MusicBeatState.switchState(new TitleScreen());
			FlxG.sound.music.stop();
		}

		super.update(elapsed);

		updateWaveform();
	}

	override public function beatHit() {
		super.beatHit();
	}

	// gedehari basically made all of this and the waveform stuff
	// i only modified the code a bit
	function updateWaveform() {
		waveformSprite.makeGraphic(Std.int(ww), Std.int(hh), 0x00FFFFFF);
		waveformSprite.pixels.fillRect(new Rectangle(0, 0, ww, hh), 0x00FFFFFF);

		var sampleMult:Float = audioBuffer.sampleRate / 44100;
		var index:Int = Std.int(Conductor.songPosition * 44.0875 * sampleMult);
		var drawIndex:Int = 0;

		var samplesPerRow:Int = Std.int(((Conductor.stepCrochet * 16 * 1.1 * sampleMult) / 16));
		if (samplesPerRow < 1) samplesPerRow = 1;
		var waveBytes:Bytes = audioBuffer.data.toBytes();

		var min:Float = 0;
		var max:Float = 0;
		while (index < (waveBytes.length - 1)) {
			var byte:Int = waveBytes.getUInt16(index * 4);

			if (byte > 65535 / 2)
				byte -= 65535;

			var sample:Float = (byte / 65535);

			if (sample > 0) {
				if (sample > max)
					max = sample;
			}
			else if (sample < 0) {
				if (sample < min)
					min = sample;
			}

			if ((index % samplesPerRow) == 0) {
				var mult:Float = 8;
				//if (drawIndex == hh) freqHit(x, y, width, height);
				var pixelsMin:Float = Math.abs(min * (size * mult));
				var pixelsMax:Float = max * (size * mult);
				waveformSprite.pixels.fillRect(new Rectangle(drawIndex, Std.int((size * (mult / 2))) - pixelsMin, 1, pixelsMin + pixelsMax), FlxColor.WHITE); // waveform lookin good
				drawIndex++;

				min = 0;
				max = 0;

				if (drawIndex > hh) break;
			}

			index++;
		}
	}

	public function freqHit(x:Float, y:Float, min:Float, max:Float) {
		playbackLoudness = min * 0.001 + max * 0.001;
	}
}
