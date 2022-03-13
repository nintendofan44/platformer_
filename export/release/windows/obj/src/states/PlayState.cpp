#include <hxcpp.h>

#ifndef INCLUDED_base_Conductor
#include <base/Conductor.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_states_CourseState
#include <states/CourseState.h>
#endif
#ifndef INCLUDED_states_MusicBeatState
#include <states/MusicBeatState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_TitleScreen
#include <states/TitleScreen.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_801e532e222627de_18_new,"states.PlayState","new",0x0e695aa3,"states.PlayState.new","states/PlayState.hx",18,0x36e487ae)
HX_LOCAL_STACK_FRAME(_hx_pos_801e532e222627de_24_get_close,"states.PlayState","get_close",0x4c039292,"states.PlayState.get_close","states/PlayState.hx",24,0x36e487ae)
static const int _hx_array_data_0420cd31_2[] = {
	(int)27,(int)8,
};
HX_LOCAL_STACK_FRAME(_hx_pos_801e532e222627de_27_create,"states.PlayState","create",0x0cd56899,"states.PlayState.create","states/PlayState.hx",27,0x36e487ae)
HX_LOCAL_STACK_FRAME(_hx_pos_801e532e222627de_33_update,"states.PlayState","update",0x17cb87a6,"states.PlayState.update","states/PlayState.hx",33,0x36e487ae)
HX_LOCAL_STACK_FRAME(_hx_pos_801e532e222627de_44_beatHit,"states.PlayState","beatHit",0x90805240,"states.PlayState.beatHit","states/PlayState.hx",44,0x36e487ae)
HX_LOCAL_STACK_FRAME(_hx_pos_801e532e222627de_48_stepHit,"states.PlayState","stepHit",0x9dbd162a,"states.PlayState.stepHit","states/PlayState.hx",48,0x36e487ae)
namespace states{

void PlayState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_801e532e222627de_18_new)
HXDLIN(  18)		super::__construct(TransIn,TransOut);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3369ae9c) {
		if (inClassId<=(int)0x26cbb7db) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x26cbb7db;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3369ae9c;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			if (inClassId<=(int)0x62817b24) {
				return inClassId==(int)0x5bfc754c || inClassId==(int)0x62817b24;
			} else {
				return inClassId==(int)0x7c795c9f;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

bool PlayState_obj::get_close(){
            	HX_STACKFRAME(&_hx_pos_801e532e222627de_24_get_close)
HXDLIN(  24)		return ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< int >::fromData( _hx_array_data_0420cd31_2,2),2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,get_close,return )

void PlayState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_801e532e222627de_27_create)
HXLINE(  28)		this->createCourse(HX_("level1",2d,be,4f,a4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),( (Float)(16) ))
            			->setFixed(1,HX_("y",79,00,00,00),( (Float)(672) ))));
HXLINE(  30)		this->super::create();
            	}


void PlayState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_801e532e222627de_33_update)
HXLINE(  34)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  35)			::base::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE(  37)		this->super::update(elapsed);
HXLINE(  39)		if (this->get_close()) {
HXLINE(  40)			::states::MusicBeatState_obj::switchState( ::states::TitleScreen_obj::__alloc( HX_CTX ,null(),null()));
            		}
            	}


void PlayState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_801e532e222627de_44_beatHit)
HXDLIN(  44)		this->super::beatHit();
            	}


void PlayState_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_801e532e222627de_48_stepHit)
HXDLIN(  48)		this->super::stepHit();
            	}



::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "states.PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(close,"close");
	HX_MARK_MEMBER_NAME(sound,"sound");
	 ::states::CourseState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(close,"close");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	 ::states::CourseState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_close() : close ); }
		if (HX_FIELD_EQ(inName,"sound") ) { return ::hx::Val( sound ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_close") ) { return ::hx::Val( get_close_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { close=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("close",b8,17,63,48));
	outFields->push(HX_("sound",cf,8c,cc,80));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(PlayState_obj,close),HX_("close",b8,17,63,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(PlayState_obj,sound),HX_("sound",cf,8c,cc,80)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("close",b8,17,63,48),
	HX_("sound",cf,8c,cc,80),
	HX_("get_close",0f,74,0c,8c),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("stepHit",67,ae,41,81),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.PlayState",31,cd,20,04);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
