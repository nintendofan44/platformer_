#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_base_Conductor
#include <base/Conductor.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_states_MusicBeatState
#include <states/MusicBeatState.h>
#endif
#ifndef INCLUDED_states_MusicBeatSubstate
#include <states/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_ui_CustomFadeTransition
#include <ui/CustomFadeTransition.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_08d8359b19576454_18_new,"states.MusicBeatState","new",0xfba04f14,"states.MusicBeatState.new","states/MusicBeatState.hx",18,0x86511dbb)
HX_LOCAL_STACK_FRAME(_hx_pos_08d8359b19576454_26_create,"states.MusicBeatState","create",0x582010c8,"states.MusicBeatState.create","states/MusicBeatState.hx",26,0x86511dbb)
HX_LOCAL_STACK_FRAME(_hx_pos_08d8359b19576454_51_update,"states.MusicBeatState","update",0x63162fd5,"states.MusicBeatState.update","states/MusicBeatState.hx",51,0x86511dbb)
HX_LOCAL_STACK_FRAME(_hx_pos_08d8359b19576454_68_updateBeat,"states.MusicBeatState","updateBeat",0x4ba04beb,"states.MusicBeatState.updateBeat","states/MusicBeatState.hx",68,0x86511dbb)
HX_LOCAL_STACK_FRAME(_hx_pos_08d8359b19576454_72_updateCurStep,"states.MusicBeatState","updateCurStep",0x2a592597,"states.MusicBeatState.updateCurStep","states/MusicBeatState.hx",72,0x86511dbb)
HX_LOCAL_STACK_FRAME(_hx_pos_08d8359b19576454_122_stepHit,"states.MusicBeatState","stepHit",0x33c5971b,"states.MusicBeatState.stepHit","states/MusicBeatState.hx",122,0x86511dbb)
HX_LOCAL_STACK_FRAME(_hx_pos_08d8359b19576454_127_beatHit,"states.MusicBeatState","beatHit",0x2688d331,"states.MusicBeatState.beatHit","states/MusicBeatState.hx",127,0x86511dbb)
HX_LOCAL_STACK_FRAME(_hx_pos_08d8359b19576454_87_switchState,"states.MusicBeatState","switchState",0xc2435a31,"states.MusicBeatState.switchState","states/MusicBeatState.hx",87,0x86511dbb)
HX_LOCAL_STACK_FRAME(_hx_pos_08d8359b19576454_95_switchState,"states.MusicBeatState","switchState",0xc2435a31,"states.MusicBeatState.switchState","states/MusicBeatState.hx",95,0x86511dbb)
HX_LOCAL_STACK_FRAME(_hx_pos_08d8359b19576454_100_switchState,"states.MusicBeatState","switchState",0xc2435a31,"states.MusicBeatState.switchState","states/MusicBeatState.hx",100,0x86511dbb)
HX_LOCAL_STACK_FRAME(_hx_pos_08d8359b19576454_111_resetState,"states.MusicBeatState","resetState",0xbe7f2d8e,"states.MusicBeatState.resetState","states/MusicBeatState.hx",111,0x86511dbb)
HX_LOCAL_STACK_FRAME(_hx_pos_08d8359b19576454_114_getState,"states.MusicBeatState","getState",0x64ca3a67,"states.MusicBeatState.getState","states/MusicBeatState.hx",114,0x86511dbb)
namespace states{

void MusicBeatState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_08d8359b19576454_18_new)
HXLINE(  24)		this->curBeat = 0;
HXLINE(  23)		this->curStep = 0;
HXLINE(  21)		this->lastStep = ((Float)0);
HXLINE(  20)		this->lastBeat = ((Float)0);
HXLINE(  18)		super::__construct(TransIn,TransOut);
            	}

Dynamic MusicBeatState_obj::__CreateEmpty() { return new MusicBeatState_obj; }

void *MusicBeatState_obj::_hx_vtable = 0;

Dynamic MusicBeatState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatState_obj > _hx_result = new MusicBeatState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MusicBeatState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3369ae9c) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3369ae9c;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MusicBeatState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_08d8359b19576454_26_create)
HXLINE(  27)		bool skip = ::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut;
HXLINE(  28)		this->super::create();
HXLINE(  30)		if (!(skip)) {
HXLINE(  31)			this->openSubState( ::ui::CustomFadeTransition_obj::__alloc( HX_CTX ,((Float)0.7),true));
            		}
HXLINE(  33)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = false;
            	}


void MusicBeatState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_08d8359b19576454_51_update)
HXLINE(  53)		int oldStep = this->curStep;
HXLINE(  55)		this->updateCurStep();
HXLINE(  56)		this->updateBeat();
HXLINE(  58)		bool _hx_tmp;
HXDLIN(  58)		if ((oldStep != this->curStep)) {
HXLINE(  58)			_hx_tmp = (this->curStep > 0);
            		}
            		else {
HXLINE(  58)			_hx_tmp = false;
            		}
HXDLIN(  58)		if (_hx_tmp) {
HXLINE(  59)			this->stepHit();
            		}
HXLINE(  61)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data )) {
HXLINE(  61)			::flixel::FlxG_obj::save->data->__SetField(HX_("fullscreen",3b,3a,b4,f9),::flixel::FlxG_obj::get_fullscreen(),::hx::paccDynamic);
            		}
HXLINE(  63)		this->super::update(elapsed);
            	}


void MusicBeatState_obj::updateBeat(){
            	HX_STACKFRAME(&_hx_pos_08d8359b19576454_68_updateBeat)
HXDLIN(  68)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateBeat,(void))

void MusicBeatState_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_08d8359b19576454_72_updateCurStep)
HXLINE(  73)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("bpm",df,be,4a,00),( (Float)(0) ))
            			->setFixed(2,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  78)		{
HXLINE(  78)			int _g = 0;
HXDLIN(  78)			int _g1 = ::base::Conductor_obj::bpmChangeMap->length;
HXDLIN(  78)			while((_g < _g1)){
HXLINE(  78)				_g = (_g + 1);
HXDLIN(  78)				int i = (_g - 1);
HXLINE(  80)				if (::hx::IsGreaterEq( ::base::Conductor_obj::songPosition,::base::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE(  81)					lastChange = ::base::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE(  84)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor(((::base::Conductor_obj::songPosition - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ::base::Conductor_obj::stepCrochet)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,updateCurStep,(void))

void MusicBeatState_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_08d8359b19576454_122_stepHit)
HXDLIN( 122)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE( 123)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,stepHit,(void))

void MusicBeatState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_08d8359b19576454_127_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,beatHit,(void))

void MusicBeatState_obj::switchState( ::flixel::FlxState nextState){
            	HX_GC_STACKFRAME(&_hx_pos_08d8359b19576454_87_switchState)
HXLINE(  89)		 ::Dynamic curState = ::flixel::FlxG_obj::game->_state;
HXLINE(  90)		 ::states::MusicBeatState leState = ( ( ::states::MusicBeatState)(curState) );
HXLINE(  91)		if (!(::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn)) {
HXLINE(  92)			leState->openSubState( ::ui::CustomFadeTransition_obj::__alloc( HX_CTX ,((Float)0.6),false));
HXLINE(  93)			if (::hx::IsInstanceEq( nextState,::flixel::FlxG_obj::game->_state )) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_08d8359b19576454_95_switchState)
HXLINE(  95)					 ::flixel::FlxState nextState = ( ( ::flixel::FlxState)(::Type_obj::createInstance(::Type_obj::getClass(::flixel::FlxG_obj::game->_state),::cpp::VirtualArray_obj::__new(0))) );
HXDLIN(  95)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  95)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  94)				::ui::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_0());
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::flixel::FlxState,nextState) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_08d8359b19576454_100_switchState)
HXLINE( 100)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 100)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE(  99)				::ui::CustomFadeTransition_obj::finishCallback =  ::Dynamic(new _hx_Closure_1(nextState));
            			}
HXLINE( 104)			return;
            		}
HXLINE( 106)		::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = false;
HXLINE( 107)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 107)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MusicBeatState_obj,switchState,(void))

void MusicBeatState_obj::resetState(){
            	HX_STACKFRAME(&_hx_pos_08d8359b19576454_111_resetState)
HXDLIN( 111)		::states::MusicBeatState_obj::switchState(::flixel::FlxG_obj::game->_state);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,resetState,(void))

 ::states::MusicBeatState MusicBeatState_obj::getState(){
            	HX_STACKFRAME(&_hx_pos_08d8359b19576454_114_getState)
HXLINE( 115)		 ::Dynamic curState = ::flixel::FlxG_obj::game->_state;
HXLINE( 116)		 ::states::MusicBeatState leState = ( ( ::states::MusicBeatState)(curState) );
HXLINE( 117)		return leState;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MusicBeatState_obj,getState,return )


::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MusicBeatState_obj > __this = new MusicBeatState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MusicBeatState_obj > MusicBeatState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MusicBeatState_obj *__this = (MusicBeatState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatState_obj), true, "states.MusicBeatState"));
	*(void **)__this = MusicBeatState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MusicBeatState_obj::MusicBeatState_obj()
{
}

::hx::Val MusicBeatState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { return ::hx::Val( curStep ); }
		if (HX_FIELD_EQ(inName,"curBeat") ) { return ::hx::Val( curBeat ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { return ::hx::Val( lastBeat ); }
		if (HX_FIELD_EQ(inName,"lastStep") ) { return ::hx::Val( lastStep ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateBeat") ) { return ::hx::Val( updateBeat_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MusicBeatState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"getState") ) { outValue = getState_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetState") ) { outValue = resetState_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switchState") ) { outValue = switchState_dyn(); return true; }
	}
	return false;
}

::hx::Val MusicBeatState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curStep") ) { curStep=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curBeat") ) { curBeat=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastBeat") ) { lastBeat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastStep") ) { lastStep=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MusicBeatState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastBeat",ec,fa,5c,d4));
	outFields->push(HX_("lastStep",c2,00,a5,df));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatState_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastBeat),HX_("lastBeat",ec,fa,5c,d4)},
	{::hx::fsFloat,(int)offsetof(MusicBeatState_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatState_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MusicBeatState_obj_sStaticStorageInfo = 0;
#endif

static ::String MusicBeatState_obj_sMemberFields[] = {
	HX_("lastBeat",ec,fa,5c,d4),
	HX_("lastStep",c2,00,a5,df),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("updateBeat",1f,cc,c8,f9),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

::hx::Class MusicBeatState_obj::__mClass;

static ::String MusicBeatState_obj_sStaticFields[] = {
	HX_("switchState",7d,07,8b,77),
	HX_("resetState",c2,ad,a7,6c),
	HX_("getState",9b,85,e2,e3),
	::String(null())
};

void MusicBeatState_obj::__register()
{
	MusicBeatState_obj _hx_dummy;
	MusicBeatState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.MusicBeatState",22,75,66,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MusicBeatState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
