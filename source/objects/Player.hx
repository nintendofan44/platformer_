package objects;

import helpers.AssetPaths;
import flixel.FlxG;
import flixel.FlxSprite;

class Player extends FlxSprite {
	var MAX_SPEED_X:Int = 250;
	var ACCELERATION_X:Int = 600;
	var DRAG_X:Int = 400;

	var MAX_SPEED_Y:Int = 300;
	var ACCELERATION_Y:Int = 900;
	var DRAG_Y:Int = 400;

	var jumpTimer:Float = 0;
	var isJumping:Bool = false;

    var left(get, null):Bool;
	var right(get, null):Bool;
	var jump(get, null):Bool;

    private function get_left():Bool {
		return FlxG.keys.anyPressed([LEFT, A]);
	}

    private function get_right():Bool {
		return FlxG.keys.anyPressed([RIGHT, D]);
	}

    private function get_jump():Bool {
		return FlxG.keys.anyPressed([UP, SPACE, W]);
	}

	public function new(xx:Float, yy:Float, skin:Int) {
		super(xx, yy);

        loadSkin(skin);
	}

	override public function update(elapsed:Float) {
        jumpMechanic(elapsed);

		super.update(elapsed);

        movementMechanic();
	}

    function jumpMechanic(?elapsed:Float) {
        if (isJumping && !jump)
			isJumping = false;

		if (isTouching(DOWN) && !isJumping)
			jumpTimer = 0;

		if (jumpTimer >= 0 && jump) {
			isJumping = true;
			jumpTimer += elapsed;
		}
		else
			jumpTimer = -1;

		if (jumpTimer > 0 && jumpTimer < 0.25)
			velocity.y = -300;
    }

    function movementMechanic(?elapsed:Float) {
        if (left) {
			acceleration.x = -ACCELERATION_X;
		}
		else if (right) {
			acceleration.x = ACCELERATION_X;
		}
		else if (left && right) {
			acceleration.x = 0;
		}
		else {
			acceleration.x = 0;
		}
    }

    function loadSkin(skin:Int) {
        loadGraphic(AssetPaths.image('player' + skin, 'shared'));

        acceleration.y = ACCELERATION_Y;
        maxVelocity.y = MAX_SPEED_Y;
        maxVelocity.x = MAX_SPEED_X;
        drag.x = DRAG_X;
        antialiasing = true;
    }
}
