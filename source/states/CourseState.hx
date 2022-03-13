package states;

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

class CourseState extends MusicBeatState {
	var levelBounds:FlxGroup;
	var player:Player;
	var platformGroup:FlxTypedGroup<FlxSprite>;
	var doorGroup:FlxTypedGroup<FlxSprite>;
	var brickGroup:FlxTypedGroup<FlxSprite>;
	var woodGroup:FlxTypedGroup<FlxSprite>;
	var groundGroup:FlxTypedGroup<FlxSprite>;
	var dirtGroup:FlxTypedGroup<FlxSprite>;

    function createCourse(levelName:String, playerSpawn:{x:Float, y:Float}) {
        final map = new TiledMap(AssetPaths.tmx('$levelName', 'levels'));

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
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		FlxG.collide(player, levelBounds);
		FlxG.collide(player, dirtGroup);
		FlxG.collide(player, groundGroup);
		FlxG.collide(player, woodGroup);
		FlxG.collide(player, brickGroup);
		//FlxG.collide(player, doorGroup);
		FlxG.collide(player, platformGroup);
	}

	override public function beatHit() {
		super.beatHit();
	}

	override public function stepHit() {
		super.stepHit();
	}
}