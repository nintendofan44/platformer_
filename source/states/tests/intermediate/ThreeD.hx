package states.tests.intermediate;

import helpers.AssetPaths;
import away3d.cameras.*;
import away3d.containers.*;
import away3d.controllers.*;
import away3d.debug.*;
import away3d.entities.*;
import away3d.lights.*;
import away3d.materials.*;
import away3d.materials.lightpickers.StaticLightPicker;
import away3d.primitives.*;
import away3d.textures.BitmapTexture;
import away3d.utils.*;
import flixel.FlxCamera;
import flixel.FlxG;
import helpers.Utilities;
import openfl.Assets;
import openfl.Lib;
import openfl.Vector;
import openfl.display.*;
import openfl.events.*;
import openfl.geom.*;
import openfl.utils.*;

class ThreeD extends MusicBeatState {
    var mainCam:FlxCamera;
	var hudCam:FlxCamera;

    // engine variables
	private var scene:Scene3D;
	private var cameraThing:Camera3D;
	private var view:View3D;
	private var cameraController:HoverController;

	// material objects
	private var planeMaterial:TextureMaterial;
	private var sphereMaterial:TextureMaterial;
	private var cubeMaterial:TextureMaterial;
	private var torusMaterial:TextureMaterial;

	// light objects
	private var light1:DirectionalLight;
	private var light2:DirectionalLight;
	private var lightPicker:StaticLightPicker;

	// scene objects
	private var plane:Mesh;
	private var sphere:Mesh;
	private var cube:Mesh;
	private var torus:Mesh;

	// navigation variables
	private var move:Bool = false;
	private var lastPanAngle:Float;
	private var lastTiltAngle:Float;
	private var lastMouseX:Float;
	private var lastMouseY:Float;

    override public function create() {
        mainCam = new FlxCamera();
        mainCam.bgColor.alpha = 0;
		hudCam = new FlxCamera();
		hudCam.bgColor.alpha = 0;

		FlxG.cameras.reset(mainCam);
		FlxG.cameras.add(hudCam);

		FlxCamera.defaultCameras = [mainCam];

        init3Dtest(hudCam);
        super.create();
    }

    /**
	 * Global initialise function
	 */
	private function init3Dtest(cam:FlxCamera):Void {
		initEngine(cam);
		initLights();
		initMaterials();
		initObjects();
		initListeners(cam);
	}

	/**
	 * Initialise the engine
	 */
	private function initEngine(cam:FlxCamera):Void {
		Lib.current.stage.scaleMode = StageScaleMode.NO_SCALE;
		Lib.current.stage.align = StageAlign.TOP_LEFT;

		scene = new Scene3D();

		cameraThing = new Camera3D();

		view = new View3D();
		view.antiAlias = 4;
		view.scene = scene;
		view.camera = cameraThing;

		// setup controller to be used on the camera
		cameraController = new HoverController(cameraThing);
		cameraController.distance = 1000;
		cameraController.minTiltAngle = 0;
		cameraController.maxTiltAngle = 90;
		cameraController.panAngle = 45;
		cameraController.tiltAngle = 20;

		if (cam != null) {
			cam.flashSprite.addChild(view);
			cam.flashSprite.addChild(new AwayStats(view));
		}
	}

	/**
	 * Initialise the materials
	 */
	private function initMaterials():Void {
		planeMaterial = new TextureMaterial(Cast.bitmapTexture(AssetPaths.ThreeDtex('jpg', 'shading/test1/floor_diffuse', 'textures')));
		planeMaterial.specularMap = Cast.bitmapTexture(AssetPaths.ThreeDtex('jpg', 'shading/test1/floor_specular', 'textures'));
		planeMaterial.normalMap = Cast.bitmapTexture(AssetPaths.ThreeDtex('jpg', 'shading/test1/floor_normal', 'textures'));
		planeMaterial.lightPicker = lightPicker;
		planeMaterial.repeat = true;
		planeMaterial.mipmap = false;

		sphereMaterial = new TextureMaterial(Cast.bitmapTexture(AssetPaths.ThreeDtex('jpg', 'shading/test1/beachball_diffuse', 'textures')));
		sphereMaterial.specularMap = Cast.bitmapTexture(AssetPaths.ThreeDtex('jpg', 'shading/test1/beachball_specular', 'textures'));
		sphereMaterial.lightPicker = lightPicker;

		cubeMaterial = new TextureMaterial(Cast.bitmapTexture(AssetPaths.ThreeDtex('jpg', 'shading/test1/trinket_diffuse', 'textures')));
		cubeMaterial.specularMap = Cast.bitmapTexture(AssetPaths.ThreeDtex('jpg', 'shading/test1/trinket_specular', 'textures'));
		cubeMaterial.normalMap = Cast.bitmapTexture(AssetPaths.ThreeDtex('jpg', 'shading/test1/trinket_normal', 'textures'));
		cubeMaterial.lightPicker = lightPicker;
		cubeMaterial.mipmap = false;

		var weaveDiffuseTexture:BitmapTexture = Cast.bitmapTexture(AssetPaths.ThreeDtex('jpg', 'shading/test1/weave_diffuse', 'textures'));
		torusMaterial = new TextureMaterial(weaveDiffuseTexture);
		torusMaterial.specularMap = weaveDiffuseTexture;
		torusMaterial.normalMap = Cast.bitmapTexture(AssetPaths.ThreeDtex('jpg', 'shading/test1/weave_normal', 'textures'));
		torusMaterial.lightPicker = lightPicker;
		torusMaterial.repeat = true;
	}

	/**
	 * Initialise the lights
	 */
	private function initLights():Void {
		light1 = new DirectionalLight();
		light1.direction = new Vector3D(0, -1, 0);
		light1.ambient = 0.1;
		light1.diffuse = 0.7;

		scene.addChild(light1);

		light2 = new DirectionalLight();
		light2.direction = new Vector3D(0, -1, 0);
		light2.color = 0x00FFFF;
		light2.ambient = 0.1;
		light2.diffuse = 0.7;

		scene.addChild(light2);

		lightPicker = new StaticLightPicker([light1, light2]);
	}

	/**
	 * Initialise the scene objects
	 */
	private function initObjects():Void {
		plane = new Mesh(new PlaneGeometry(1000, 1000), planeMaterial);
		plane.geometry.scaleUV(2, 2);
		plane.y = -20;

		scene.addChild(plane);

		sphere = new Mesh(new SphereGeometry(150, 40, 20), sphereMaterial);
		sphere.x = 300;
		sphere.y = 160;
		sphere.z = 300;

		scene.addChild(sphere);

		cube = new Mesh(new CubeGeometry(200, 200, 200, 1, 1, 1, false), cubeMaterial);
		cube.x = 300;
		cube.y = 160;
		cube.z = -250;

		scene.addChild(cube);

		torus = new Mesh(new TorusGeometry(150, 60, 40, 20), torusMaterial);
		torus.geometry.scaleUV(10, 5);
		torus.x = -250;
		torus.y = 160;
		torus.z = -250;

        var daX:Float = 300;
        var daY:Float = 150;

        plane.x += daX;
        sphere.x += daX;
        cube.x += daX;
        torus.x += daX;
        plane.y += daY;
        sphere.y += daY;
        cube.y += daY;
        torus.y += daY;

		scene.addChild(torus);
	}

	/**
	 * Initialise the listeners
	 */
	private function initListeners(cam:FlxCamera):Void {
		cam.flashSprite.addEventListener(Event.ENTER_FRAME, onEnterFrame);
		Lib.current.stage.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
		Lib.current.stage.addEventListener(MouseEvent.MOUSE_UP, onMouseUp);
		Lib.current.stage.addEventListener(Event.RESIZE, onResizeScreen);
		onResizeScreen();
	}

	/**
	 * Navigation and render loop
	 */
	private function onEnterFrame(event:Event):Void {
		if (move) {
			cameraController.panAngle = 0.3 * (Lib.current.stage.mouseX - lastMouseX) + lastPanAngle;
			cameraController.tiltAngle = 0.3 * (Lib.current.stage.mouseY - lastMouseY) + lastTiltAngle;
		}

		light1.direction = new Vector3D(Math.sin(Lib.getTimer() / 10000) * 150000, 1000, Math.cos(Lib.getTimer() / 10000) * 150000);

		view.render();
	}

	/**
	 * Mouse down listener for navigation
	 */
	private function onMouseDown(event:MouseEvent):Void {
		lastPanAngle = cameraController.panAngle;
		lastTiltAngle = cameraController.tiltAngle;
		lastMouseX = Lib.current.stage.mouseX;
		lastMouseY = Lib.current.stage.mouseY;
		move = true;
		Lib.current.stage.addEventListener(Event.MOUSE_LEAVE, onStageMouseLeave);
	}

	/**
	 * Mouse up listener for navigation
	 */
	private function onMouseUp(event:MouseEvent):Void {
		move = false;
		Lib.current.stage.removeEventListener(Event.MOUSE_LEAVE, onStageMouseLeave);
	}

	/**
	 * Mouse Lib.current.stage leave listener for navigation
	 */
	private function onStageMouseLeave(event:Event):Void {
		move = false;
		Lib.current.stage.removeEventListener(Event.MOUSE_LEAVE, onStageMouseLeave);
	}

	/**
	 * Lib.current.stage listener for resize events
	 */
	private function onResizeScreen(event:Event = null):Void {
		view.width = Lib.current.stage.stageWidth;
		view.height = Lib.current.stage.stageHeight;
	}
}