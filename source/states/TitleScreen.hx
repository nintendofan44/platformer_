package states;

import helpers.Highscore;
import states.LevelChooser;
import flixel.FlxObject;
import lime.system.System;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.text.FlxText.FlxTextBorderStyle;
import helpers.Utilities;
import flixel.math.FlxMath;
import helpers.AssetPaths;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxSoundAsset;
import base.Conductor;

class TitleScreen extends MusicBeatState {
	var sound:FlxSoundAsset;
    public static var state:String = "started";
    public static var gameName:String = "Basic Platformer";

    var curSelected:Int = 0;
    var scroll:Float = 0;
    public static var moved:Bool = false;

    // sprites and such
    var bg:FlxSprite;
    var title:FlxText;
    var titleShadow:FlxText;
    var titleOuterShadow:FlxText;
    var titleSize:Int = 80;

    // arrays and such
    private var titleArray:Array<FlxText> = [];
    private var buttonArray:Array<String> = ['playButton', 'exitGame'];
    private var anotherButtonArray:Array<FlxSprite> = [];

    // camera stuff
	var camFollowPos:FlxObject;
    var enableCamScroll:Bool = false;

	override public function create()
	{
        Highscore.load();

        if (buttonArray.length > 2)
            enableCamScroll = true;

        trace(state);

        if (FlxG.sound.music == null) {
            sound = AssetPaths.music('tea-time'); // temporary music. by iflicky
            FlxG.sound.playMusic(sound);
            Conductor.changeBPM(105.0);
        }

        bg = new FlxSprite(0, 0).makeGraphic(FlxG.width, FlxG.height, FlxColor.fromRGB(0, 166, 255));
		bg.screenCenter();
        bg.scrollFactor.set();
		add(bg);

        if (enableCamScroll) {
            camFollowPos = new FlxObject(0, 0, 1, 1);
            add(camFollowPos);
    
            camFollowPos.setPosition(bg.getGraphicMidpoint().x, scroll * 30);
        }

        titleShadow = new FlxText(0, 0, FlxG.width, gameName, titleSize);
		titleShadow.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), titleSize, FlxColor.fromRGB(0, 0, 0), CENTER, FlxTextBorderStyle.NONE);

        title = new FlxText(0, 0, FlxG.width, gameName, titleSize);
		title.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), titleSize, FlxColor.fromRGB(255, 255, 255), CENTER, FlxTextBorderStyle.NONE);
		title.screenCenter();
        title.y -= 190;

        titleOuterShadow = new FlxText(0, 0, FlxG.width, gameName, titleSize);
		titleOuterShadow.setFormat(AssetPaths.font("DotGothic16-Regular.ttf"), titleSize, FlxColor.fromRGB(58, 58, 58), CENTER, FlxTextBorderStyle.NONE);

        for (i in 0...buttonArray.length) {
			var button:FlxSprite = new FlxSprite(0, FlxG.height * 1.6);
			button.ID = i;
			button.frames = AssetPaths.getSparrowAtlas('menu/' + buttonArray[i]);
			button.animation.addByPrefix('idle', buttonArray[i] + 'Idle', 24, true);
			button.animation.addByPrefix('hover', buttonArray[i] + 'Hover', 24, true);
			button.animation.play('idle');
			button.antialiasing = true;
			button.updateHitbox();
			button.screenCenter(X);
            add(button);
            var scr:Float = buttonArray.length * 0.135;
			if (buttonArray.length < 1) scr = 0;
			button.scrollFactor.set(0, scr);
            button.antialiasing = true;
            anotherButtonArray.push(button);
            if (enableCamScroll) {
                FlxTween.tween(button, {y: (titleOuterShadow.height + 120) + (i * 200)}, 1 + (i * 0.25), {
                    ease: FlxEase.expoInOut,
                    onComplete: function(flxTween:FlxTween) {
                        moved = true;
                    }
                });
            } else {
                FlxTween.tween(button, {y: (titleOuterShadow.height + 220) + (i * 200)}, 1 + (i * 0.25), {
                    ease: FlxEase.expoInOut,
                    onComplete: function(flxTween:FlxTween) {
                        moved = true;
                    }
                });
            }
		}

        add(titleShadow);
        titleArray.push(titleShadow);
        add(title);
        titleArray.push(title);
        add(titleOuterShadow);
        titleArray.push(titleOuterShadow);

        titleShadow.scrollFactor.set();
        title.scrollFactor.set();
        titleOuterShadow.scrollFactor.set();

        titleShadow.setPosition(title.x - 5, title.y);
        titleOuterShadow.setPosition(title.x + 1, title.y);

        if (enableCamScroll)
            FlxG.camera.follow(camFollowPos, null, 1);

        changeItem();

		super.create();
	}

    var canClick:Bool = true;
	var isUsingMouse:Bool = false;

	override public function update(elapsed:Float)
	{
		if (FlxG.sound.music != null)
			Conductor.songPosition = FlxG.sound.music.time;

        if (enableCamScroll) {
            if (scroll < 0)
                scroll = 0;
    
            if (FlxG.mouse.wheel > 0) {
                scroll += FlxG.mouse.wheel * 30;
                camFollowPos.setPosition(bg.getGraphicMidpoint().x, scroll);
            }
    
            if (FlxG.mouse.wheel < 0) {
                scroll += FlxG.mouse.wheel * 30;
                camFollowPos.setPosition(bg.getGraphicMidpoint().x, scroll);
            }
    
            //trace(scroll);   
        }

		super.update(elapsed);

        for (i in 0...anotherButtonArray.length) {
			if (isUsingMouse)
			{
				if(!FlxG.mouse.overlaps(anotherButtonArray[i]))
					anotherButtonArray[i].animation.play('idle');
			}

            anotherButtonArray[i].centerOffsets();
            anotherButtonArray[i].centerOrigin();

            var multX:Float = FlxMath.lerp(1, anotherButtonArray[i].scale.x, Utilities.bound(1 - (elapsed * 9), 0, 1));
            var multY:Float = FlxMath.lerp(1, anotherButtonArray[i].scale.y, Utilities.bound(1 - (elapsed * 9), 0, 1));
            anotherButtonArray[i].scale.set(multX, multY);
            anotherButtonArray[i].updateHitbox();
	
			if (FlxG.mouse.overlaps(anotherButtonArray[i]))
			{
				if (canClick)
				{
					curSelected = anotherButtonArray[i].ID;
					isUsingMouse = true;
					anotherButtonArray[i].animation.play('hover');

                    if (i == curSelected) {
                        var multX:Float = FlxMath.lerp(1.1, anotherButtonArray[i].scale.x, Utilities.bound(1.1 - (elapsed * 9), 0, 1.1));
                        var multY:Float = FlxMath.lerp(1.1, anotherButtonArray[i].scale.y, Utilities.bound(1.1 - (elapsed * 9), 0, 1.1));
                        anotherButtonArray[i].scale.set(multX, multY);
                        anotherButtonArray[i].updateHitbox();
                    }
				}
					
				if(FlxG.mouse.pressed && canClick)
				{
					selectButton();
				}
			}
	
			anotherButtonArray[i].updateHitbox();
        }

        for (i in 0...titleArray.length) {
            var multX:Float = FlxMath.lerp(1, titleArray[i].scale.x, Utilities.bound(1 - (elapsed * 9), 0, 1));
            var multY:Float = FlxMath.lerp(1, titleArray[i].scale.y, Utilities.bound(1 - (elapsed * 9), 0, 1));
		    titleArray[i].scale.set(multX, multY);
		    titleArray[i].updateHitbox();
        }
	}

    var lastBeatHit:Int = -1;

	override public function beatHit() {
		super.beatHit();

		if (lastBeatHit == curBeat) {
			return;
		}

        if (curBeat % 1 == 0) {
            for (i in 0...titleArray.length) {
                titleArray[i].scale.set(1.05, 1.05);
                titleArray[i].updateHitbox();
            }
        }

		lastBeatHit = curBeat;
	}

	override public function stepHit() {
		super.stepHit();
	}

    var selected:Bool = false;

    function selectButton()
	{
		selected = true;
		
		canClick = false;

        for (i in 0...anotherButtonArray.length) {
			if (curSelected == anotherButtonArray[i].ID)
			{
                goToState();
			}
		}
	}
	
	function goToState()
	{
		var stateToGo:String = buttonArray[curSelected];

		switch (stateToGo)
		{
			case 'playButton':
				MusicBeatState.switchState(new PlayerChooser());
            case 'exitGame':
				Sys.exit(0);
		}		
	}

    function changeItem(huh:Int = 0)
	{
        if (moved) {
            curSelected += huh;

            if (curSelected >= anotherButtonArray.length)
                curSelected = 0;
            if (curSelected < 0)
                curSelected = anotherButtonArray.length - 1;
        }

        for (i in 0...anotherButtonArray.length) {
			anotherButtonArray[i].animation.play('idle');

			if (anotherButtonArray[i].ID == curSelected && moved)
			{
				anotherButtonArray[i].animation.play('hover');
			}

			anotherButtonArray[i].updateHitbox();
		}
	}
}