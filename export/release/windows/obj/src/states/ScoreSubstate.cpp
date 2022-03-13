#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_states_MusicBeatSubstate
#include <states/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_states_ScoreSubstate
#include <states/ScoreSubstate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d2829fac3bc7cd44_54_new,"states.ScoreSubstate","new",0x07e58a29,"states.ScoreSubstate.new","states/PlayState.hx",54,0x36e487ae)
HX_LOCAL_STACK_FRAME(_hx_pos_d2829fac3bc7cd44_58_create,"states.ScoreSubstate","create",0x927330d3,"states.ScoreSubstate.create","states/PlayState.hx",58,0x36e487ae)
HX_LOCAL_STACK_FRAME(_hx_pos_d2829fac3bc7cd44_62_update,"states.ScoreSubstate","update",0x9d694fe0,"states.ScoreSubstate.update","states/PlayState.hx",62,0x36e487ae)
HX_LOCAL_STACK_FRAME(_hx_pos_d2829fac3bc7cd44_66_beatHit,"states.ScoreSubstate","beatHit",0xf4f1bcc6,"states.ScoreSubstate.beatHit","states/PlayState.hx",66,0x36e487ae)
HX_LOCAL_STACK_FRAME(_hx_pos_d2829fac3bc7cd44_70_stepHit,"states.ScoreSubstate","stepHit",0x022e80b0,"states.ScoreSubstate.stepHit","states/PlayState.hx",70,0x36e487ae)
namespace states{

void ScoreSubstate_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d2829fac3bc7cd44_54_new)
HXDLIN(  54)		super::__construct();
            	}

Dynamic ScoreSubstate_obj::__CreateEmpty() { return new ScoreSubstate_obj; }

void *ScoreSubstate_obj::_hx_vtable = 0;

Dynamic ScoreSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScoreSubstate_obj > _hx_result = new ScoreSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScoreSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x157d02ca) {
			if (inClassId<=(int)0x0fb6e199) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0fb6e199;
			} else {
				return inClassId==(int)0x157d02ca;
			}
		} else {
			return inClassId==(int)0x5661ffbf;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void ScoreSubstate_obj::create(){
            	HX_STACKFRAME(&_hx_pos_d2829fac3bc7cd44_58_create)
HXDLIN(  58)		this->super::create();
            	}


void ScoreSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_d2829fac3bc7cd44_62_update)
HXDLIN(  62)		this->super::update(elapsed);
            	}


void ScoreSubstate_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_d2829fac3bc7cd44_66_beatHit)
HXDLIN(  66)		this->super::beatHit();
            	}


void ScoreSubstate_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_d2829fac3bc7cd44_70_stepHit)
HXDLIN(  70)		this->super::stepHit();
            	}



::hx::ObjectPtr< ScoreSubstate_obj > ScoreSubstate_obj::__new() {
	::hx::ObjectPtr< ScoreSubstate_obj > __this = new ScoreSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScoreSubstate_obj > ScoreSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScoreSubstate_obj *__this = (ScoreSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScoreSubstate_obj), true, "states.ScoreSubstate"));
	*(void **)__this = ScoreSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScoreSubstate_obj::ScoreSubstate_obj()
{
}

::hx::Val ScoreSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScoreSubstate_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ScoreSubstate_obj_sStaticStorageInfo = 0;
#endif

static ::String ScoreSubstate_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("stepHit",67,ae,41,81),
	::String(null()) };

::hx::Class ScoreSubstate_obj::__mClass;

void ScoreSubstate_obj::__register()
{
	ScoreSubstate_obj _hx_dummy;
	ScoreSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.ScoreSubstate",b7,41,a1,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScoreSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScoreSubstate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScoreSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScoreSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
