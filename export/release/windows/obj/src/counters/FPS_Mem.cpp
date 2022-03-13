#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_counters_FPS_Mem
#include <counters/FPS_Mem.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5e2310d3ba3506a2_14_new,"counters.FPS_Mem","new",0x0daaeaba,"counters.FPS_Mem.new","counters/FPS_Mem.hx",14,0xa238b537)
HX_LOCAL_STACK_FRAME(_hx_pos_5e2310d3ba3506a2_36_onEnter,"counters.FPS_Mem","onEnter",0x48c05ad3,"counters.FPS_Mem.onEnter","counters/FPS_Mem.hx",36,0xa238b537)
namespace counters{

void FPS_Mem_obj::__construct(::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol){
            		Float inX = __o_inX.Default(((Float)10.0));
            		Float inY = __o_inY.Default(((Float)10.0));
            		int inCol = __o_inCol.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_5e2310d3ba3506a2_14_new)
HXLINE(  17)		this->memPeak = ((Float)0);
HXLINE(  21)		super::__construct();
HXLINE(  23)		this->set_x(inX);
HXLINE(  24)		this->set_y(inY);
HXLINE(  26)		this->set_selectable(false);
HXLINE(  27)		this->set_defaultTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,HX_("_sans",32,a0,5e,ff),12,inCol,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE(  28)		this->set_text(HX_("FPS: ",af,da,2c,83));
HXLINE(  29)		this->times = ::Array_obj< Float >::__new(0);
HXLINE(  30)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->onEnter_dyn(),null(),null(),null());
HXLINE(  31)		this->set_width(( (Float)(150) ));
HXLINE(  32)		this->set_height(( (Float)(70) ));
            	}

Dynamic FPS_Mem_obj::__CreateEmpty() { return new FPS_Mem_obj; }

void *FPS_Mem_obj::_hx_vtable = 0;

Dynamic FPS_Mem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FPS_Mem_obj > _hx_result = new FPS_Mem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FPS_Mem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6b353933) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	} else {
		return inClassId==(int)0x7f0de750 || inClassId==(int)0x7f849fac;
	}
}

void FPS_Mem_obj::onEnter( ::openfl::events::Event _){
            	HX_STACKFRAME(&_hx_pos_5e2310d3ba3506a2_36_onEnter)
HXLINE(  37)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  37)		Float now;
HXDLIN(  37)		if ((timer > 0)) {
HXLINE(  37)			now = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  37)			now = ( (Float)(0) );
            		}
HXLINE(  39)		this->times->push(now);
HXLINE(  41)		while((this->times->__get(0) < (now - ( (Float)(1) )))){
HXLINE(  42)			this->times->shift();
            		}
HXLINE(  44)		Float mem = (( (Float)(::Math_obj::round((((( (Float)(::openfl::_hx_system::System_obj::get_totalMemory()) ) / ( (Float)(1024) )) / ( (Float)(1024) )) * ( (Float)(100) )))) ) / ( (Float)(100) ));
HXLINE(  46)		if ((mem > this->memPeak)) {
HXLINE(  47)			this->memPeak = mem;
            		}
HXLINE(  49)		if (this->get_visible()) {
HXLINE(  51)			this->set_text(((((((HX_("FPS: ",af,da,2c,83) + this->times->length) + HX_("\nMEM: ",91,9f,42,83)) + mem) + HX_(" MB\nMEM peak: ",85,3c,cd,94)) + this->memPeak) + HX_(" MB",75,8b,18,00)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FPS_Mem_obj,onEnter,(void))


::hx::ObjectPtr< FPS_Mem_obj > FPS_Mem_obj::__new(::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol) {
	::hx::ObjectPtr< FPS_Mem_obj > __this = new FPS_Mem_obj();
	__this->__construct(__o_inX,__o_inY,__o_inCol);
	return __this;
}

::hx::ObjectPtr< FPS_Mem_obj > FPS_Mem_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol) {
	FPS_Mem_obj *__this = (FPS_Mem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FPS_Mem_obj), true, "counters.FPS_Mem"));
	*(void **)__this = FPS_Mem_obj::_hx_vtable;
	__this->__construct(__o_inX,__o_inY,__o_inCol);
	return __this;
}

FPS_Mem_obj::FPS_Mem_obj()
{
}

void FPS_Mem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FPS_Mem);
	HX_MARK_MEMBER_NAME(times,"times");
	HX_MARK_MEMBER_NAME(memPeak,"memPeak");
	 ::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FPS_Mem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(times,"times");
	HX_VISIT_MEMBER_NAME(memPeak,"memPeak");
	 ::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FPS_Mem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return ::hx::Val( times ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memPeak") ) { return ::hx::Val( memPeak ); }
		if (HX_FIELD_EQ(inName,"onEnter") ) { return ::hx::Val( onEnter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FPS_Mem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"memPeak") ) { memPeak=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FPS_Mem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("times",c6,bf,35,10));
	outFields->push(HX_("memPeak",d4,46,8a,0e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FPS_Mem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FPS_Mem_obj,times),HX_("times",c6,bf,35,10)},
	{::hx::fsFloat,(int)offsetof(FPS_Mem_obj,memPeak),HX_("memPeak",d4,46,8a,0e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FPS_Mem_obj_sStaticStorageInfo = 0;
#endif

static ::String FPS_Mem_obj_sMemberFields[] = {
	HX_("times",c6,bf,35,10),
	HX_("memPeak",d4,46,8a,0e),
	HX_("onEnter",79,0b,c4,06),
	::String(null()) };

::hx::Class FPS_Mem_obj::__mClass;

void FPS_Mem_obj::__register()
{
	FPS_Mem_obj _hx_dummy;
	FPS_Mem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("counters.FPS_Mem",c8,c5,84,44);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FPS_Mem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FPS_Mem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FPS_Mem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FPS_Mem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace counters
