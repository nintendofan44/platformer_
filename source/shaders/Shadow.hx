package shaders;

import flixel.system.FlxAssets.FlxShader;

class Shadow {
	public var shader:ShadowShader = new ShadowShader();

    public function new() {
	}

    public function updateRes(x:Float, y:Float) {
		shader.iResolution.value = [x, y];
	}
}

class ShadowShader extends FlxShader {
	@:glFragmentSource('
        #pragma header

        uniform sampler2D u_texture;
        uniform vec2 iResolution;
        uniform float iTime;

        const float THRESHOLD = 0.75;
        const float PI = 3.141592;
        
        void main(void) {
            vec2 texcoord = openfl_TextureCoordv;
            float distance = 1.0;

            for (float y = 0.0; y < iResolution.y; y += 1.0) {
                vec2 norm = vec2(texcoord.s, y/iResolution.y) * 2.0 - 1.0;
                float theta = PI*1.5 + norm.x * PI; 
                float r = (1.0 + norm.y) * 0.5;
                  
                vec2 coord = vec2(-r * sin(theta), -r * cos(theta))/2.0 + 0.5;
                  
                vec4 data = texture2D(u_texture, coord);
  
                float dst = y/iResolution.y;
  
                float caster = data.a;
                if (caster > THRESHOLD) {
                    distance = min(distance, dst);
                }
            } 
            gl_FragColor = vec4(vec3(distance), 1.0);
        }
    ')

    public function new()
    {
        super();
    }
}