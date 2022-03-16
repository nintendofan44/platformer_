package states;

import shaders.ShaderEffect;
import shaders.Light;
import shaders.Shadow;
import helpers.Utilities;
import flixel.math.FlxMath;
import flixel.FlxCamera;
import openfl.Lib;
import flixel.util.FlxCollision;
import flixel.FlxG;
import flixel.util.FlxColor;
import objects.Player;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.addons.editors.tiled.TiledObjectLayer;
import flixel.addons.editors.tiled.TiledObject;
import helpers.AssetPaths;
import flixel.addons.editors.tiled.TiledMap;
import openfl.filters.ShaderFilter;
import openfl.filters.BitmapFilter;

class CourseState extends MusicBeatState {
	var levelBounds:FlxGroup;
	var player:Player;
	var platformGroup:FlxTypedGroup<FlxSprite>;
	var doorGroup:FlxTypedGroup<FlxSprite>;
	var brickGroup:FlxTypedGroup<FlxSprite>;
	var woodGroup:FlxTypedGroup<FlxSprite>;
	var groundGroup:FlxTypedGroup<FlxSprite>;
	var dirtGroup:FlxTypedGroup<FlxSprite>;

	var gameWidth:Int = Lib.application.window.width;
	var gameHeight:Int = Lib.application.window.height;
	var zoom:Float = -1;
	var windowWidth:Float = Lib.application.window.width;
	var windowHeight:Float = Lib.application.window.height;

	var mainCam:FlxCamera;
	var hudCam:FlxCamera;
	var defaultCamZoom:Float = 1;
	var defaulthudCamZoom:Float = 1;
	var camZoom:Float = 0.010;
	var hudCamZoom:Float = 0.03;
	var maxCamZoomLimit:Float = 1.35;

	var hudShaders:Array<ShaderEffect> = [];
	var mainShaders:Array<ShaderEffect> = [];
	var light:Light;
	var shadow:Shadow;

    function createCourse(levelName:String, playerSpawn:{x:Float, y:Float}) {
        final map = new TiledMap(AssetPaths.tmx('$levelName', 'levels'));

		mainCam = new FlxCamera();
		//hudCam = new FlxCamera();
		//hudCam.bgColor.alpha = 0;

		FlxG.cameras.reset(mainCam);
		//FlxG.cameras.add(hudCam);

		FlxCamera.defaultCameras = [mainCam];

        persistentUpdate = true;
		persistentDraw = true;

		/*addShaderToCamera('game', new Light());
		addShaderToCamera('hud', new Light());
		addShaderToCamera('game', new Shadow());
		addShaderToCamera('hud', new Shadow());*/

		generateFloor(map);
		generateWoodBlocks(map);
		generateBrickBlocks(map);
		generateDoors(map);
		generatePlatforms(map);

		player = new Player(playerSpawn.x, playerSpawn.y, FlxG.random.int(1, 3));
		add(player);

		levelBounds = FlxCollision.createCameraWall(FlxG.camera, true, 1);
    }

	/**
	 * reminder for me and any one wanting to mod this game: 
	 * when placing a door on tiled map editor, move it 1 block up whilst holding ctrl to snap the door to the grid
	 */
	function generateDoors(map:TiledMap) {
		final doorLayer:TiledObjectLayer = cast(map.getLayer("Door"));
		doorGroup = new FlxTypedGroup<FlxSprite>();

		for (door in doorLayer.objects) {
			final doorFromSprite = new FlxSprite(door.x, door.y);
			doorFromSprite.loadGraphic(AssetPaths.image("building/door", 'textures'), false, 16, 32);
			doorFromSprite.immovable = true;
			doorGroup.add(doorFromSprite);
		}
		add(doorGroup);
	}

	function generateBrickBlocks(map:TiledMap) {
		final brickLayer:TiledObjectLayer = cast(map.getLayer("Bricks"));
		brickGroup = new FlxTypedGroup<FlxSprite>();

		for (brick in brickLayer.objects) {
			final brickFromSprite = new FlxSprite(brick.x, brick.y);
			brickFromSprite.loadGraphic(AssetPaths.image("building/bricks", 'textures'), false, 16, 16);
			brickFromSprite.immovable = true;
			brickGroup.add(brickFromSprite);
		}
		add(brickGroup);
	}

	function generateWoodBlocks(map:TiledMap) {
		final woodLayer:TiledObjectLayer = cast(map.getLayer("Wood"));
		woodGroup = new FlxTypedGroup<FlxSprite>();

		for (wood in woodLayer.objects) {
			final woodFromSprite = new FlxSprite(wood.x, wood.y);
			woodFromSprite.loadGraphic(AssetPaths.image("building/wood planks", 'textures'), false, 16, 16);
			woodFromSprite.immovable = true;
			woodGroup.add(woodFromSprite);
		}
		add(woodGroup);
	}

	function generatePlatforms(map:TiledMap) {
		final platformLayer:TiledObjectLayer = cast(map.getLayer("Platforms"));
		platformGroup = new FlxTypedGroup<FlxSprite>();

		for (platform in platformLayer.objects) {
			final platformFromSprite = new FlxSprite(platform.x, platform.y);
			platformFromSprite.loadGraphic(AssetPaths.image("building/wood platform", 'textures'), false, 128, 16);
			platformFromSprite.immovable = true;
			platformGroup.add(platformFromSprite);
		}
		add(platformGroup);
	}

	function generateFloor(map:TiledMap) {
		final groundLayer:TiledObjectLayer = cast(map.getLayer("Grass"));
		final dirtLayer:TiledObjectLayer = cast(map.getLayer("Dirt"));
		groundGroup = new FlxTypedGroup<FlxSprite>();
		dirtGroup = new FlxTypedGroup<FlxSprite>();

		for (grass in groundLayer.objects) {
			final grassFromSprite = new FlxSprite(grass.x, grass.y);
			grassFromSprite.loadGraphic(AssetPaths.image("terrain/ground", 'textures'), false, 128, 16);
			grassFromSprite.immovable = true;
			groundGroup.add(grassFromSprite);
		}

		for (dirt in dirtLayer.objects) {
			final dirtFromSprite = new FlxSprite(dirt.x, dirt.y);
			dirtFromSprite.loadGraphic(AssetPaths.image("terrain/dirt", 'textures'), false, 128, 16);
			dirtFromSprite.immovable = true;
			dirtGroup.add(dirtFromSprite);
		}
		add(dirtGroup);
		add(groundGroup);
	}

	override public function create() {
		super.create();

		bgColor = FlxColor.GRAY;

		if (zoom == -1) {
			var ratioX:Float = windowWidth / gameWidth;
			var ratioY:Float = windowHeight / gameHeight;
			zoom = Math.min(ratioX, ratioY);
			gameWidth = Math.ceil(windowWidth / zoom);
			gameHeight = Math.ceil(windowHeight / zoom);
		}
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		FlxG.camera.zoom = FlxMath.lerp(defaultCamZoom, FlxG.camera.zoom, Utilities.bound(1 - (elapsed * 3.125), 0, 1));
		//hudCam.zoom = FlxMath.lerp(defaulthudCamZoom, hudCam.zoom, Utilities.bound(1 - (elapsed * 3.125), 0, 1));

		FlxG.collide(player, levelBounds);
		FlxG.collide(player, dirtGroup);
		FlxG.collide(player, groundGroup);
		FlxG.collide(player, woodGroup);
		FlxG.collide(player, brickGroup);
		//FlxG.collide(player, doorGroup);
		FlxG.collide(player, platformGroup);
	}

	var lastBeatHit:Int = -1;

	override public function beatHit() {
		super.beatHit();

		if (lastBeatHit == curBeat) {
			return;
		}

		if (FlxG.camera.zoom < maxCamZoomLimit && curBeat % 1 == 0) {
			FlxG.camera.zoom += camZoom;
			//hudCam.zoom += hudCamZoom;
		}

		lastBeatHit = curBeat;
	}

	override public function stepHit() {
		super.stepHit();
	}

	public function addShaderToCamera(cam:String, effect:ShaderEffect) {

		switch (cam.toLowerCase()) {
			case 'hudCam' | 'hud':
				hudShaders.push(effect);
				var newCamEffects:Array<BitmapFilter> = [];
				for (i in hudShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				hudCam.setFilters(newCamEffects);
			case 'mainCam' | 'game':
				mainShaders.push(effect);
				var newCamEffects:Array<BitmapFilter> = [];
				for (i in mainShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				mainCam.setFilters(newCamEffects);
			default:
				mainShaders.push(effect);
				var newCamEffects:Array<BitmapFilter> = [];
				for (i in mainShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				mainCam.setFilters(newCamEffects);
		}
	}

	public function removeShaderFromCamera(cam:String, effect:ShaderEffect) {
		switch (cam.toLowerCase()) {
			case 'hudCam' | 'hud':
				hudShaders.remove(effect);
				var newCamEffects:Array<BitmapFilter> = [];
				for (i in hudShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				hudCam.setFilters(newCamEffects);
            case 'mainCam' | 'game':
                mainShaders.remove(effect);
				var newCamEffects:Array<BitmapFilter> = [];
				for (i in mainShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				mainCam.setFilters(newCamEffects);
			default:
				mainShaders.remove(effect);
				var newCamEffects:Array<BitmapFilter> = [];
				for (i in mainShaders) {
					newCamEffects.push(new ShaderFilter(i.shader));
				}
				mainCam.setFilters(newCamEffects);
		}
	}

	public function clearShadersFromCamera(cam:String) {
		switch (cam.toLowerCase()) {
			case 'hudCam' | 'hud':
				hudShaders = [];
				var newCamEffects:Array<BitmapFilter> = [];
				hudCam.setFilters(newCamEffects);
            case 'mainCam' | 'game':
                mainShaders = [];
				var newCamEffects:Array<BitmapFilter> = [];
				mainCam.setFilters(newCamEffects);
			default:
				mainShaders = [];
				var newCamEffects:Array<BitmapFilter> = [];
				mainCam.setFilters(newCamEffects);
		}
	}
}