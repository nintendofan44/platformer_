package states;

import flixel.addons.ui.FlxUISlider;
import flixel.util.FlxTimer;
import flixel.util.FlxStringUtil;
import flixel.text.FlxText;
import ui.CustomFadeTransition;
import flixel.FlxCamera;
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
import flixel.math.FlxPoint;
import flixel.addons.ui.FlxUISlider;

class WFteststate extends MusicBeatState {
	var ww:Int = 534;
	var hh:Int = 218;
	var size:Float = 30;
	var playbackLoudness:Float = 0;

	var music:String = "";

	var audioManagerBg:FlxSprite;
	var waveformSprite:FlxSprite;
	var disc:FlxSprite;

	var audioBuffer:AudioBuffer;
	var bytes:Bytes;

	public var hudCamera:FlxCamera;
	public var mainCamera:FlxCamera;
	public var transitionCamera:FlxCamera;

	private var updateTime:Bool = false;
	var songLength:Float = 0;
	var songPercent:Float = 0;

	var timeLeft:FlxText;

	var introDuration:Float = 1.0;

	var volumeSlider:FlxUISlider; // just to make it fancy B)

	public function new(music:String) {
		super();
		this.music = music;
	}

	override public function create() {
		if (FlxG.sound.music != null)
			FlxG.sound.music.stop();

		bgColor = FlxColor.GRAY;

		// Cameras
		mainCamera = new FlxCamera();
		hudCamera = new FlxCamera();
		transitionCamera = new FlxCamera();
		hudCamera.bgColor.alpha = 0;
		transitionCamera.bgColor.alpha = 0;

		FlxG.cameras.reset(mainCamera);
		FlxG.cameras.add(hudCamera);
		FlxG.cameras.add(transitionCamera);

		FlxCamera.defaultCameras = [mainCamera];
		CustomFadeTransition.nextCamera = transitionCamera;

		var toAdd:Int = 100;
		audioManagerBg = new FlxSprite(0, 0);
		makeSpriteGraphic(audioManagerBg, ww + toAdd, hh + toAdd, FlxColor.BLACK);
		audioManagerBg.cameras = [hudCamera];
		audioManagerBg.scrollFactor.set();
		audioManagerBg.screenCenter();
		audioManagerBg.y += 100;
		add(audioManagerBg);

		var tex = AssetPaths.getSparrowAtlas('cd', 'shared');
		disc = new FlxSprite(904, 314);
		disc.cameras = [hudCamera];
		disc.frames = tex;
		disc.animation.addByPrefix("cd", "cd", 24);
		disc.animation.play("cd");
		add(disc);

		waveformSprite = new FlxSprite(350, 271).makeGraphic(ww, hh, FlxColor.BLACK);
		waveformSprite.cameras = [hudCamera];
		add(waveformSprite);

		timeLeft = new FlxText(0, 0, FlxG.width, "", 45);
		timeLeft.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), 45, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		timeLeft.cameras = [hudCamera];
		timeLeft.scrollFactor.set();
		timeLeft.screenCenter();
		add(timeLeft);

		volumeSlider = new FlxUISlider(FlxG.sound.music, 'volume', 341, 1100, 0, 1, 303, 26, 5, FlxColor.fromRGB(255, 87, 51), FlxColor.GRAY);
		volumeSlider.cameras = [hudCamera];
		add(volumeSlider);

		super.create();

		audioBuffer = AudioBuffer.fromFile(music);
		bytes = audioBuffer.data.toBytes();
		FlxG.sound.playMusic(Sound.fromAudioBuffer(audioBuffer));
		updateTime = true;
		songLength = FlxG.sound.music.length;

		disc.scale.x = 0;
		disc.alpha = 0;
		FlxTween.tween(disc, {alpha: 1, 'scale.x': 1}, introDuration, {ease: FlxEase.expoInOut});

		audioManagerBg.alpha = 0;
		FlxTween.tween(audioManagerBg, {alpha: 1}, introDuration, {ease: FlxEase.expoInOut});

		waveformSprite.scale.x = 0;
		waveformSprite.alpha = 0;
		FlxTween.tween(waveformSprite, {alpha: 1, 'scale.x': 1}, introDuration, {ease: FlxEase.expoInOut});

		timeLeft.scale.x = 0;
		timeLeft.alpha = 0;
		FlxTween.tween(timeLeft, {alpha: 1, 'scale.x': 1}, introDuration, {ease: FlxEase.expoInOut});

		FlxTween.tween(volumeSlider, {y: 538}, introDuration, {ease: FlxEase.expoInOut});
	}

	override public function update(elapsed:Float) {
		if (FlxG.sound.music != null) Conductor.songPosition = FlxG.sound.music.time;

		debugControls(volumeSlider);

		if (controls.BACK) {
			FlxTween.tween(disc, {alpha: 0, 'scale.x': 0}, introDuration, {ease: FlxEase.expoInOut});
			FlxTween.tween(audioManagerBg, {alpha: 0}, introDuration, {ease: FlxEase.expoInOut});
			FlxTween.tween(waveformSprite, {alpha: 0, 'scale.x': 0}, introDuration, {ease: FlxEase.expoInOut});
			FlxTween.tween(timeLeft, {alpha: 0, 'scale.x': 0}, introDuration, {ease: FlxEase.expoInOut});
			FlxTween.tween(volumeSlider, {y: 1100}, introDuration, {ease: FlxEase.expoInOut});
			new FlxTimer().start(introDuration + 0.1, function(tmr:FlxTimer) {
				MusicBeatState.switchState(new TitleScreen());
				updateTime = false;
				FlxG.sound.music.stop();
				FlxG.sound.music = null;
				bgColor = FlxColor.BLACK;
			});
		}

		super.update(elapsed);

		disc.angle += 0.6 / Utilities.bound(elapsed * 9.6, 0, 1);

		if (updateTime) {
			var curTime:Float = Conductor.songPosition;
			if(curTime < 0) curTime = 0;
			songPercent = (curTime / songLength);

			var songCalc:Float = (songLength - curTime);
			//songCalc = curTime;

			var secondsTotal:Int = Math.floor(songCalc / 1000);
			if(secondsTotal < 0) secondsTotal = 0;

			timeLeft.text = FlxStringUtil.formatTime(secondsTotal, false);
		}

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
				// if (drawIndex == hh) freqHit(x, y, width, height);
				var pixelsMin:Float = Math.abs(min * (size * mult));
				var pixelsMax:Float = max * (size * mult);
				var rect:Rectangle = new Rectangle(drawIndex, Std.int((size * (mult / 2))) - pixelsMin, 1, pixelsMin + pixelsMax);
				waveformSprite.pixels.fillRect(rect, FlxColor.WHITE); // waveform lookin good
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

	function debugControls(sprite:FlxSprite) {
		var holdShift = FlxG.keys.pressed.SHIFT;
		var multiplier = 1;
		if (holdShift)
			multiplier = 10;

		if (sprite != null && sprite.exists) {
			if (FlxG.keys.pressed.LEFT) {
				sprite.x -= 1 * multiplier;
				trace('x: ' + sprite.x);
			}
			if (FlxG.keys.pressed.RIGHT) {
				sprite.x += 1 * multiplier;
				trace('x: ' + sprite.x);
			}
			if (FlxG.keys.pressed.UP) {
				sprite.y -= 1 * multiplier;
				trace('y: ' + sprite.y);
			}
			if (FlxG.keys.pressed.DOWN) {
				sprite.y += 1 * multiplier;
				trace('y: ' + sprite.y);
			}
		}
	}

	var cornerSize:Int = 10;
	function makeSpriteGraphic(graphic:FlxSprite, w, h, color:FlxColor) {
		graphic.makeGraphic(w, h, color);
		graphic.pixels.fillRect(new Rectangle(0, 190, graphic.width, 5), 0x0);

		graphic.pixels.fillRect(new Rectangle(0, 0, cornerSize, cornerSize), 0x0); // top left
		drawSpriteCorner(graphic, false, false, color);

		graphic.pixels.fillRect(new Rectangle(graphic.width - cornerSize, 0, cornerSize, cornerSize), 0x0); // top right
		drawSpriteCorner(graphic, true, false, color);

		graphic.pixels.fillRect(new Rectangle(0, graphic.height - cornerSize, cornerSize, cornerSize), 0x0); // bottom left
		drawSpriteCorner(graphic, false, true, color);

		graphic.pixels.fillRect(new Rectangle(graphic.width - cornerSize, graphic.height - cornerSize, cornerSize, cornerSize), 0x0); // bottom right
		drawSpriteCorner(graphic, true, true, color);
	}

	function drawSpriteCorner(graphic:FlxSprite, flipX:Bool, flipY:Bool, color:FlxColor) {
		var antiX:Float = (graphic.width - cornerSize);
		var antiY:Float = flipY ? (graphic.height - 1) : 0;
		if (flipY) antiY -= 2;
		graphic.pixels.fillRect(new Rectangle((flipX ? antiX : 1), Std.int(Math.abs(antiY - 8)), 10, 3), color);
		if (flipY) antiY += 1;
		graphic.pixels.fillRect(new Rectangle((flipX ? antiX : 2), Std.int(Math.abs(antiY - 6)), 9, 2), color);
		if (flipY) antiY += 1;
		graphic.pixels.fillRect(new Rectangle((flipX ? antiX : 3), Std.int(Math.abs(antiY - 5)), 8, 1), color);
		graphic.pixels.fillRect(new Rectangle((flipX ? antiX : 4), Std.int(Math.abs(antiY - 4)), 7, 1), color);
		graphic.pixels.fillRect(new Rectangle((flipX ? antiX : 5), Std.int(Math.abs(antiY - 3)), 6, 1), color);
		graphic.pixels.fillRect(new Rectangle((flipX ? antiX : 6), Std.int(Math.abs(antiY - 2)), 5, 1), color);
		graphic.pixels.fillRect(new Rectangle((flipX ? antiX : 8), Std.int(Math.abs(antiY - 1)), 3, 1), color);
	}
}
