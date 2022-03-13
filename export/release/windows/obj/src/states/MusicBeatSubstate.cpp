#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_base_Conductor
#include <base/Conductor.h>
#endif
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

HX_DEFINE_STACK_FRAME(_hx_pos_d9fc82cfef02fb28_9_new,"states.MusicBeatSubstate","new",0x949d8f12,"states.MusicBeatSubstate.new","states/MusicBeatSubstate.hx",9,0x337bdf1f)
HX_LOCAL_STACK_FRAME(_hx_pos_d9fc82cfef02fb28_23_update,"states.MusicBeatSubstate","update",0x128e8297,"states.MusicBeatSubstate.update","states/MusicBeatSubstate.hx",23,0x337bdf1f)
HX_LOCAL_STACK_FRAME(_hx_pos_d9fc82cfef02fb28_38_updateCurStep,"states.MusicBeatSubstate","updateCurStep",0x5aa98f15,"states.MusicBeatSubstate.updateCurStep","states/MusicBeatSubstate.hx",38,0x337bdf1f)
HX_LOCAL_STACK_FRAME(_hx_pos_d9fc82cfef02fb28_55_stepHit,"states.MusicBeatSubstate","stepHit",0x0d95ae19,"states.MusicBeatSubstate.stepHit","states/MusicBeatSubstate.hx",55,0x337bdf1f)
HX_LOCAL_STACK_FRAME(_hx_pos_d9fc82cfef02fb28_60_beatHit,"states.MusicBeatSubstate","beatHit",0x0058ea2f,"states.MusicBeatSubstate.beatHit","states/MusicBeatSubstate.hx",60,0x337bdf1f)
namespace states{

void MusicBeatSubstate_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d9fc82cfef02fb28_9_new)
HXLINE(  20)		this->curBeat = 0;
HXLINE(  19)		this->curStep = 0;
HXLINE(  17)		this->lastStep = ((Float)0);
HXLINE(  16)		this->lastBeat = ((Float)0);
HXLINE(  13)		super::__construct(null());
            	}

Dynamic MusicBeatSubstate_obj::__CreateEmpty() { return new MusicBeatSubstate_obj; }

void *MusicBeatSubstate_obj::_hx_vtable = 0;

Dynamic MusicBeatSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MusicBeatSubstate_obj > _hx_result = new MusicBeatSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MusicBeatSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x157d02ca) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x157d02ca;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void MusicBeatSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_d9fc82cfef02fb28_23_update)
HXLINE(  25)		int oldStep = this->curStep;
HXLINE(  27)		this->updateCurStep();
HXLINE(  28)		this->curBeat = ::Math_obj::floor((( (Float)(this->curStep) ) / ( (Float)(4) )));
HXLINE(  30)		bool _hx_tmp;
HXDLIN(  30)		if ((oldStep != this->curStep)) {
HXLINE(  30)			_hx_tmp = (this->curStep > 0);
            		}
            		else {
HXLINE(  30)			_hx_tmp = false;
            		}
HXDLIN(  30)		if (_hx_tmp) {
HXLINE(  31)			this->stepHit();
            		}
HXLINE(  34)		this->super::update(elapsed);
            	}


void MusicBeatSubstate_obj::updateCurStep(){
            	HX_STACKFRAME(&_hx_pos_d9fc82cfef02fb28_38_updateCurStep)
HXLINE(  39)		 ::Dynamic lastChange =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("stepTime",79,75,25,a0),0)
            			->setFixed(1,HX_("bpm",df,be,4a,00),( (Float)(0) ))
            			->setFixed(2,HX_("songTime",82,2a,d5,3a),( (Float)(0) )));
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			int _g1 = ::base::Conductor_obj::bpmChangeMap->length;
HXDLIN(  44)			while((_g < _g1)){
HXLINE(  44)				_g = (_g + 1);
HXDLIN(  44)				int i = (_g - 1);
HXLINE(  46)				if (::hx::IsGreater( ::base::Conductor_obj::songPosition,::base::Conductor_obj::bpmChangeMap->__get(i)->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic) )) {
HXLINE(  47)					lastChange = ::base::Conductor_obj::bpmChangeMap->__get(i);
            				}
            			}
            		}
HXLINE(  50)		this->curStep = ( (int)((lastChange->__Field(HX_("stepTime",79,75,25,a0),::hx::paccDynamic) + ::Math_obj::floor(((::base::Conductor_obj::songPosition - ( (Float)(lastChange->__Field(HX_("songTime",82,2a,d5,3a),::hx::paccDynamic)) )) / ::base::Conductor_obj::stepCrochet)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,updateCurStep,(void))

void MusicBeatSubstate_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_d9fc82cfef02fb28_55_stepHit)
HXDLIN(  55)		if ((::hx::Mod(this->curStep,4) == 0)) {
HXLINE(  56)			this->beatHit();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,stepHit,(void))

void MusicBeatSubstate_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_d9fc82cfef02fb28_60_beatHit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(MusicBeatSubstate_obj,beatHit,(void))


::hx::ObjectPtr< MusicBeatSubstate_obj > MusicBeatSubstate_obj::__new() {
	::hx::ObjectPtr< MusicBeatSubstate_obj > __this = new MusicBeatSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MusicBeatSubstate_obj > MusicBeatSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MusicBeatSubstate_obj *__this = (MusicBeatSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MusicBeatSubstate_obj), true, "states.MusicBeatSubstate"));
	*(void **)__this = MusicBeatSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MusicBeatSubstate_obj::MusicBeatSubstate_obj()
{
}

::hx::Val MusicBeatSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
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
	case 13:
		if (HX_FIELD_EQ(inName,"updateCurStep") ) { return ::hx::Val( updateCurStep_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MusicBeatSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
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

void MusicBeatSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lastBeat",ec,fa,5c,d4));
	outFields->push(HX_("lastStep",c2,00,a5,df));
	outFields->push(HX_("curStep",ec,58,71,b7));
	outFields->push(HX_("curBeat",16,53,29,ac));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MusicBeatSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MusicBeatSubstate_obj,lastBeat),HX_("lastBeat",ec,fa,5c,d4)},
	{::hx::fsFloat,(int)offsetof(MusicBeatSubstate_obj,lastStep),HX_("lastStep",c2,00,a5,df)},
	{::hx::fsInt,(int)offsetof(MusicBeatSubstate_obj,curStep),HX_("curStep",ec,58,71,b7)},
	{::hx::fsInt,(int)offsetof(MusicBeatSubstate_obj,curBeat),HX_("curBeat",16,53,29,ac)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MusicBeatSubstate_obj_sStaticStorageInfo = 0;
#endif

static ::String MusicBeatSubstate_obj_sMemberFields[] = {
	HX_("lastBeat",ec,fa,5c,d4),
	HX_("lastStep",c2,00,a5,df),
	HX_("curStep",ec,58,71,b7),
	HX_("curBeat",16,53,29,ac),
	HX_("update",09,86,05,87),
	HX_("updateCurStep",e3,bd,df,82),
	HX_("stepHit",67,ae,41,81),
	HX_("beatHit",7d,ea,04,74),
	::String(null()) };

::hx::Class MusicBeatSubstate_obj::__mClass;

void MusicBeatSubstate_obj::__register()
{
	MusicBeatSubstate_obj _hx_dummy;
	MusicBeatSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.MusicBeatSubstate",20,5e,88,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MusicBeatSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MusicBeatSubstate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MusicBeatSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MusicBeatSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
