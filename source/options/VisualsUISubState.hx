package options;

import helpers.AssetPaths;
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

class VisualsUISubState extends BaseOptionsMenu
{
	public function new()
	{
		title = 'Visuals and UI';

		//I'd suggest using "ptBR" as an example for making your own option since it is the simplest here
		var option:Option = new Option('ptBR', //Name
			'Você é br ou sabe falar português \nseja bem vindo ao jogo meu amigo', //Description
			'ptBR', //Save data variable name
			'bool', //Variable type
			false); //Default value
		addOption(option);

		super();
	}
}