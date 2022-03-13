#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_helpers_AssetPaths
#include <helpers/AssetPaths.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_76cb3f6186044bdd_7_new,"objects.Player","new",0x7e6cfa4d,"objects.Player.new","objects/Player.hx",7,0x1efe05a2)
HX_LOCAL_STACK_FRAME(_hx_pos_76cb3f6186044bdd_24_get_left,"objects.Player","get_left",0xf3117e83,"objects.Player.get_left","objects/Player.hx",24,0x1efe05a2)
static const int _hx_array_data_b6dccfdb_2[] = {
	(int)37,(int)65,
};
HX_LOCAL_STACK_FRAME(_hx_pos_76cb3f6186044bdd_28_get_right,"objects.Player","get_right",0x334a41e0,"objects.Player.get_right","objects/Player.hx",28,0x1efe05a2)
static const int _hx_array_data_b6dccfdb_4[] = {
	(int)39,(int)68,
};
HX_LOCAL_STACK_FRAME(_hx_pos_76cb3f6186044bdd_32_get_jump,"objects.Player","get_jump",0xf1cb3b6a,"objects.Player.get_jump","objects/Player.hx",32,0x1efe05a2)
static const int _hx_array_data_b6dccfdb_6[] = {
	(int)38,(int)32,(int)87,
};
HX_LOCAL_STACK_FRAME(_hx_pos_76cb3f6186044bdd_41_update,"objects.Player","update",0xd4f38e3c,"objects.Player.update","objects/Player.hx",41,0x1efe05a2)
HX_LOCAL_STACK_FRAME(_hx_pos_76cb3f6186044bdd_49_jumpMechanic,"objects.Player","jumpMechanic",0x04bed405,"objects.Player.jumpMechanic","objects/Player.hx",49,0x1efe05a2)
HX_LOCAL_STACK_FRAME(_hx_pos_76cb3f6186044bdd_68_movementMechanic,"objects.Player","movementMechanic",0xebc4f2c6,"objects.Player.movementMechanic","objects/Player.hx",68,0x1efe05a2)
HX_LOCAL_STACK_FRAME(_hx_pos_76cb3f6186044bdd_82_loadSkin,"objects.Player","loadSkin",0xe89ba2b6,"objects.Player.loadSkin","objects/Player.hx",82,0x1efe05a2)
namespace objects{

void Player_obj::__construct(Float xx,Float yy,int skin){
            	HX_STACKFRAME(&_hx_pos_76cb3f6186044bdd_7_new)
HXLINE(  17)		this->isJumping = false;
HXLINE(  16)		this->jumpTimer = ((Float)0);
HXLINE(  14)		this->DRAG_Y = 400;
HXLINE(  13)		this->ACCELERATION_Y = 900;
HXLINE(  12)		this->MAX_SPEED_Y = 300;
HXLINE(  10)		this->DRAG_X = 400;
HXLINE(   9)		this->ACCELERATION_X = 600;
HXLINE(   8)		this->MAX_SPEED_X = 250;
HXLINE(  36)		super::__construct(xx,yy,null());
HXLINE(  38)		this->loadSkin(skin);
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x45a16455) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x45a16455;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

bool Player_obj::get_left(){
            	HX_STACKFRAME(&_hx_pos_76cb3f6186044bdd_24_get_left)
HXDLIN(  24)		return ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_b6dccfdb_2,2),1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,get_left,return )

bool Player_obj::get_right(){
            	HX_STACKFRAME(&_hx_pos_76cb3f6186044bdd_28_get_right)
HXDLIN(  28)		return ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_b6dccfdb_4,2),1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,get_right,return )

bool Player_obj::get_jump(){
            	HX_STACKFRAME(&_hx_pos_76cb3f6186044bdd_32_get_jump)
HXDLIN(  32)		return ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_b6dccfdb_6,3),1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,get_jump,return )

void Player_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_76cb3f6186044bdd_41_update)
HXLINE(  42)		this->jumpMechanic(elapsed);
HXLINE(  44)		this->super::update(elapsed);
HXLINE(  46)		this->movementMechanic(null());
            	}


void Player_obj::jumpMechanic( ::Dynamic elapsed){
            	HX_STACKFRAME(&_hx_pos_76cb3f6186044bdd_49_jumpMechanic)
HXLINE(  50)		bool _hx_tmp;
HXDLIN(  50)		if (this->isJumping) {
HXLINE(  50)			_hx_tmp = !(this->get_jump());
            		}
            		else {
HXLINE(  50)			_hx_tmp = false;
            		}
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  51)			this->isJumping = false;
            		}
HXLINE(  53)		bool _hx_tmp1;
HXDLIN(  53)		if (((this->touching & 4096) > 0)) {
HXLINE(  53)			_hx_tmp1 = !(this->isJumping);
            		}
            		else {
HXLINE(  53)			_hx_tmp1 = false;
            		}
HXDLIN(  53)		if (_hx_tmp1) {
HXLINE(  54)			this->jumpTimer = ( (Float)(0) );
            		}
HXLINE(  56)		bool _hx_tmp2;
HXDLIN(  56)		if ((this->jumpTimer >= 0)) {
HXLINE(  56)			_hx_tmp2 = this->get_jump();
            		}
            		else {
HXLINE(  56)			_hx_tmp2 = false;
            		}
HXDLIN(  56)		if (_hx_tmp2) {
HXLINE(  57)			this->isJumping = true;
HXLINE(  58)			 ::objects::Player _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  58)			_hx_tmp->jumpTimer = (_hx_tmp->jumpTimer + elapsed);
            		}
            		else {
HXLINE(  61)			this->jumpTimer = ( (Float)(-1) );
            		}
HXLINE(  63)		bool _hx_tmp3;
HXDLIN(  63)		if ((this->jumpTimer > 0)) {
HXLINE(  63)			_hx_tmp3 = (this->jumpTimer < ((Float)0.25));
            		}
            		else {
HXLINE(  63)			_hx_tmp3 = false;
            		}
HXDLIN(  63)		if (_hx_tmp3) {
HXLINE(  64)			this->velocity->set_y(( (Float)(-300) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,jumpMechanic,(void))

void Player_obj::movementMechanic( ::Dynamic elapsed){
            	HX_STACKFRAME(&_hx_pos_76cb3f6186044bdd_68_movementMechanic)
HXDLIN(  68)		if (this->get_left()) {
HXLINE(  69)			this->acceleration->set_x(( (Float)(-(this->ACCELERATION_X)) ));
            		}
            		else {
HXLINE(  71)			if (this->get_right()) {
HXLINE(  72)				this->acceleration->set_x(( (Float)(this->ACCELERATION_X) ));
            			}
            			else {
HXLINE(  74)				bool _hx_tmp;
HXDLIN(  74)				if (this->get_left()) {
HXLINE(  74)					_hx_tmp = this->get_right();
            				}
            				else {
HXLINE(  74)					_hx_tmp = false;
            				}
HXDLIN(  74)				if (_hx_tmp) {
HXLINE(  75)					this->acceleration->set_x(( (Float)(0) ));
            				}
            				else {
HXLINE(  78)					this->acceleration->set_x(( (Float)(0) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,movementMechanic,(void))

void Player_obj::loadSkin(int skin){
            	HX_STACKFRAME(&_hx_pos_76cb3f6186044bdd_82_loadSkin)
HXLINE(  83)		this->loadGraphic(::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + (HX_("player",61,eb,b8,37) + skin)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("shared",a5,5e,2b,1d)),null(),null(),null(),null(),null());
HXLINE(  85)		this->acceleration->set_y(( (Float)(this->ACCELERATION_Y) ));
HXLINE(  86)		this->maxVelocity->set_y(( (Float)(this->MAX_SPEED_Y) ));
HXLINE(  87)		this->maxVelocity->set_x(( (Float)(this->MAX_SPEED_X) ));
HXLINE(  88)		this->drag->set_x(( (Float)(this->DRAG_X) ));
HXLINE(  89)		this->set_antialiasing(true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,loadSkin,(void))


::hx::ObjectPtr< Player_obj > Player_obj::__new(Float xx,Float yy,int skin) {
	::hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(xx,yy,skin);
	return __this;
}

::hx::ObjectPtr< Player_obj > Player_obj::__alloc(::hx::Ctx *_hx_ctx,Float xx,Float yy,int skin) {
	Player_obj *__this = (Player_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "objects.Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(xx,yy,skin);
	return __this;
}

Player_obj::Player_obj()
{
}

::hx::Val Player_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_left() : left ); }
		if (HX_FIELD_EQ(inName,"jump") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_jump() : jump ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_right() : right ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DRAG_X") ) { return ::hx::Val( DRAG_X ); }
		if (HX_FIELD_EQ(inName,"DRAG_Y") ) { return ::hx::Val( DRAG_Y ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_left") ) { return ::hx::Val( get_left_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_jump") ) { return ::hx::Val( get_jump_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadSkin") ) { return ::hx::Val( loadSkin_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"jumpTimer") ) { return ::hx::Val( jumpTimer ); }
		if (HX_FIELD_EQ(inName,"isJumping") ) { return ::hx::Val( isJumping ); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return ::hx::Val( get_right_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MAX_SPEED_X") ) { return ::hx::Val( MAX_SPEED_X ); }
		if (HX_FIELD_EQ(inName,"MAX_SPEED_Y") ) { return ::hx::Val( MAX_SPEED_Y ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"jumpMechanic") ) { return ::hx::Val( jumpMechanic_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ACCELERATION_X") ) { return ::hx::Val( ACCELERATION_X ); }
		if (HX_FIELD_EQ(inName,"ACCELERATION_Y") ) { return ::hx::Val( ACCELERATION_Y ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"movementMechanic") ) { return ::hx::Val( movementMechanic_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Player_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jump") ) { jump=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DRAG_X") ) { DRAG_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAG_Y") ) { DRAG_Y=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"jumpTimer") ) { jumpTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isJumping") ) { isJumping=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MAX_SPEED_X") ) { MAX_SPEED_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_SPEED_Y") ) { MAX_SPEED_Y=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ACCELERATION_X") ) { ACCELERATION_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACCELERATION_Y") ) { ACCELERATION_Y=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("MAX_SPEED_X",45,2e,fb,b2));
	outFields->push(HX_("ACCELERATION_X",59,3b,66,45));
	outFields->push(HX_("DRAG_X",0d,2c,4d,92));
	outFields->push(HX_("MAX_SPEED_Y",46,2e,fb,b2));
	outFields->push(HX_("ACCELERATION_Y",5a,3b,66,45));
	outFields->push(HX_("DRAG_Y",0e,2c,4d,92));
	outFields->push(HX_("jumpTimer",f7,cb,02,9c));
	outFields->push(HX_("isJumping",ea,0d,a8,10));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("jump",ee,c4,69,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Player_obj,MAX_SPEED_X),HX_("MAX_SPEED_X",45,2e,fb,b2)},
	{::hx::fsInt,(int)offsetof(Player_obj,ACCELERATION_X),HX_("ACCELERATION_X",59,3b,66,45)},
	{::hx::fsInt,(int)offsetof(Player_obj,DRAG_X),HX_("DRAG_X",0d,2c,4d,92)},
	{::hx::fsInt,(int)offsetof(Player_obj,MAX_SPEED_Y),HX_("MAX_SPEED_Y",46,2e,fb,b2)},
	{::hx::fsInt,(int)offsetof(Player_obj,ACCELERATION_Y),HX_("ACCELERATION_Y",5a,3b,66,45)},
	{::hx::fsInt,(int)offsetof(Player_obj,DRAG_Y),HX_("DRAG_Y",0e,2c,4d,92)},
	{::hx::fsFloat,(int)offsetof(Player_obj,jumpTimer),HX_("jumpTimer",f7,cb,02,9c)},
	{::hx::fsBool,(int)offsetof(Player_obj,isJumping),HX_("isJumping",ea,0d,a8,10)},
	{::hx::fsBool,(int)offsetof(Player_obj,left),HX_("left",07,08,b0,47)},
	{::hx::fsBool,(int)offsetof(Player_obj,right),HX_("right",dc,0b,64,e9)},
	{::hx::fsBool,(int)offsetof(Player_obj,jump),HX_("jump",ee,c4,69,46)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_("MAX_SPEED_X",45,2e,fb,b2),
	HX_("ACCELERATION_X",59,3b,66,45),
	HX_("DRAG_X",0d,2c,4d,92),
	HX_("MAX_SPEED_Y",46,2e,fb,b2),
	HX_("ACCELERATION_Y",5a,3b,66,45),
	HX_("DRAG_Y",0e,2c,4d,92),
	HX_("jumpTimer",f7,cb,02,9c),
	HX_("isJumping",ea,0d,a8,10),
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("jump",ee,c4,69,46),
	HX_("get_left",90,c3,6a,c7),
	HX_("get_right",33,68,0d,2d),
	HX_("get_jump",77,80,24,c6),
	HX_("update",09,86,05,87),
	HX_("jumpMechanic",92,23,d4,9b),
	HX_("movementMechanic",d3,8c,ad,08),
	HX_("loadSkin",c3,e7,f4,bc),
	::String(null()) };

::hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	Player_obj _hx_dummy;
	Player_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.Player",db,cf,dc,b6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Player_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
