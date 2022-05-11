package shaders;

import flixel.system.FlxAssets.FlxShader;
import openfl.display.BitmapData;
import openfl.display.Shader;
import openfl.display.ShaderInput;
import openfl.utils.Assets;
import flixel.FlxG;
import openfl.Lib;

class Space extends Effect {
	public var shader(default, null):SpaceShader = new SpaceShader();

	public function new() {
		shader.iTime.value = [0];
        shader.iResolution.value = [Lib.current.stage.stageWidth, Lib.current.stage.stageHeight];
	}

	public function update(elapsed:Float) {
		shader.iTime.value[0] += elapsed;
		shader.iResolution.value = [Lib.current.stage.stageWidth, Lib.current.stage.stageHeight];
	}
}

class SpaceShader extends FlxShader {
	@:glFragmentSource('
        #pragma header

        uniform vec3 iResolution;            // viewport resolution (in pixels)
        uniform float iTime;                 // shader playback time (in seconds)
        uniform float iTimeDelta;            // render time (in seconds)
        uniform int iFrame;                  // shader playback frame
        uniform float iChannelTime[4];       // channel playback time (in seconds)
        uniform vec3 iChannelResolution[4];  // channel resolution (in pixels)
        uniform vec4 iMouse;                 // mouse pixel coords. xy: current (if MLB down), zw: click
        uniform samplerXX iChannel0..3;      // input channel. XX = 2D/Cube
        uniform vec4 iDate;                  // (year, month, day, time in seconds)
        uniform float iSampleRate;           // sound sample rate (i.e., 44100)
    ')

    public function new()
    {
        super();
    }
}