package shaders;

import flixel.system.FlxAssets.FlxShader;

class Light {
	public var shader:LightShader = new LightShader();

	public function new() {
	}

    public function updateRes(x:Float, y:Float) {
		shader.iResolution.value = [x, y];
	}
}

class LightShader extends FlxShader {
	@:glFragmentSource('
        #pragma header

        #define PI 3.14

        //inputs from vertex shader
        varying LOWP vec4 vColor;
        
        //uniform values
        uniform sampler2D u_texture;
        uniform vec2 iResolution;
        
        //sample from the 1D distance map
        float sample(vec2 coord, float r) {
            return step(r, texture2D(u_texture, coord).r);
        }
        
        void main(void) {
            vec2 texcoord = openfl_TextureCoordv;

            vec2 norm = texcoord.st * 2.0 - 1.0;
            float theta = atan(norm.y, norm.x);
            float r = length(norm);	
            float coord = (theta + PI) / (2.0*PI);
            
            vec2 tc = vec2(coord, 0.0);
            

            float center = sample(tc, r);        

            float blur = (1./iResolution.x)  * smoothstep(0., 1., r); 

            float sum = 0.0;
            
            sum += sample(vec2(tc.x - 4.0*blur, tc.y), r) * 0.05;
            sum += sample(vec2(tc.x - 3.0*blur, tc.y), r) * 0.09;
            sum += sample(vec2(tc.x - 2.0*blur, tc.y), r) * 0.12;
            sum += sample(vec2(tc.x - 1.0*blur, tc.y), r) * 0.15;
            
            sum += center * 0.16;
            
            sum += sample(vec2(tc.x + 1.0*blur, tc.y), r) * 0.15;
            sum += sample(vec2(tc.x + 2.0*blur, tc.y), r) * 0.12;
            sum += sample(vec2(tc.x + 3.0*blur, tc.y), r) * 0.09;
            sum += sample(vec2(tc.x + 4.0*blur, tc.y), r) * 0.05;
            
            //sum of 1.0 -> in light, 0.0 -> in shadow

            gl_FragColor = vColor * vec4(vec3(1.0), sum * smoothstep(1.0, 0.0, r));
        }
    ')

    public function new()
    {
        super();
    }
}