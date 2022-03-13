#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_helpers_Controls
#include <helpers/Controls.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f418d65564106e74_6_boot,"helpers.Controls","boot",0x4b1a5e21,"helpers.Controls.boot","helpers/Controls.hx",6,0x9d6ef8de)
HX_LOCAL_STACK_FRAME(_hx_pos_f418d65564106e74_7_boot,"helpers.Controls","boot",0x4b1a5e21,"helpers.Controls.boot","helpers/Controls.hx",7,0x9d6ef8de)
HX_LOCAL_STACK_FRAME(_hx_pos_f418d65564106e74_8_boot,"helpers.Controls","boot",0x4b1a5e21,"helpers.Controls.boot","helpers/Controls.hx",8,0x9d6ef8de)
HX_LOCAL_STACK_FRAME(_hx_pos_f418d65564106e74_10_boot,"helpers.Controls","boot",0x4b1a5e21,"helpers.Controls.boot","helpers/Controls.hx",10,0x9d6ef8de)
HX_LOCAL_STACK_FRAME(_hx_pos_f418d65564106e74_11_boot,"helpers.Controls","boot",0x4b1a5e21,"helpers.Controls.boot","helpers/Controls.hx",11,0x9d6ef8de)
HX_LOCAL_STACK_FRAME(_hx_pos_f418d65564106e74_12_boot,"helpers.Controls","boot",0x4b1a5e21,"helpers.Controls.boot","helpers/Controls.hx",12,0x9d6ef8de)
namespace helpers{

void Controls_obj::__construct() { }

Dynamic Controls_obj::__CreateEmpty() { return new Controls_obj; }

void *Controls_obj::_hx_vtable = 0;

Dynamic Controls_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Controls_obj > _hx_result = new Controls_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Controls_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3bbdd61b;
}

bool Controls_obj::enter;

bool Controls_obj::enter_R;

bool Controls_obj::enter_P;

bool Controls_obj::esc;

bool Controls_obj::esc_R;

bool Controls_obj::esc_P;


Controls_obj::Controls_obj()
{
}

bool Controls_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"esc") ) { outValue = ( esc ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { outValue = ( enter ); return true; }
		if (HX_FIELD_EQ(inName,"esc_R") ) { outValue = ( esc_R ); return true; }
		if (HX_FIELD_EQ(inName,"esc_P") ) { outValue = ( esc_P ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enter_R") ) { outValue = ( enter_R ); return true; }
		if (HX_FIELD_EQ(inName,"enter_P") ) { outValue = ( enter_P ); return true; }
	}
	return false;
}

bool Controls_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"esc") ) { esc=ioValue.Cast< bool >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { enter=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"esc_R") ) { esc_R=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"esc_P") ) { esc_P=ioValue.Cast< bool >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enter_R") ) { enter_R=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"enter_P") ) { enter_P=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Controls_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Controls_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &Controls_obj::enter,HX_("enter",18,6d,86,70)},
	{::hx::fsBool,(void *) &Controls_obj::enter_R,HX_("enter_R",2b,36,ce,70)},
	{::hx::fsBool,(void *) &Controls_obj::enter_P,HX_("enter_P",29,36,ce,70)},
	{::hx::fsBool,(void *) &Controls_obj::esc,HX_("esc",35,08,4d,00)},
	{::hx::fsBool,(void *) &Controls_obj::esc_R,HX_("esc_R",88,92,c7,73)},
	{::hx::fsBool,(void *) &Controls_obj::esc_P,HX_("esc_P",86,92,c7,73)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Controls_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controls_obj::enter,"enter");
	HX_MARK_MEMBER_NAME(Controls_obj::enter_R,"enter_R");
	HX_MARK_MEMBER_NAME(Controls_obj::enter_P,"enter_P");
	HX_MARK_MEMBER_NAME(Controls_obj::esc,"esc");
	HX_MARK_MEMBER_NAME(Controls_obj::esc_R,"esc_R");
	HX_MARK_MEMBER_NAME(Controls_obj::esc_P,"esc_P");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Controls_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controls_obj::enter,"enter");
	HX_VISIT_MEMBER_NAME(Controls_obj::enter_R,"enter_R");
	HX_VISIT_MEMBER_NAME(Controls_obj::enter_P,"enter_P");
	HX_VISIT_MEMBER_NAME(Controls_obj::esc,"esc");
	HX_VISIT_MEMBER_NAME(Controls_obj::esc_R,"esc_R");
	HX_VISIT_MEMBER_NAME(Controls_obj::esc_P,"esc_P");
};

#endif

::hx::Class Controls_obj::__mClass;

static ::String Controls_obj_sStaticFields[] = {
	HX_("enter",18,6d,86,70),
	HX_("enter_R",2b,36,ce,70),
	HX_("enter_P",29,36,ce,70),
	HX_("esc",35,08,4d,00),
	HX_("esc_R",88,92,c7,73),
	HX_("esc_P",86,92,c7,73),
	::String(null())
};

void Controls_obj::__register()
{
	Controls_obj _hx_dummy;
	Controls_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("helpers.Controls",df,cc,01,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Controls_obj::__GetStatic;
	__mClass->mSetStaticField = &Controls_obj::__SetStatic;
	__mClass->mMarkFunc = Controls_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Controls_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Controls_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Controls_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Controls_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Controls_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Controls_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_f418d65564106e74_6_boot)
HXDLIN(   6)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(   6)			return _this->keyManager->checkStatusUnsafe(13,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_f418d65564106e74_6_boot)
HXDLIN(   6)		enter = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_f418d65564106e74_7_boot)
HXDLIN(   7)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justReleased) );
HXDLIN(   7)			return _this->keyManager->checkStatusUnsafe(13,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_f418d65564106e74_7_boot)
HXDLIN(   7)		enter_R = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_f418d65564106e74_8_boot)
HXDLIN(   8)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(   8)			return _this->keyManager->checkStatusUnsafe(13,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_f418d65564106e74_8_boot)
HXDLIN(   8)		enter_P = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_f418d65564106e74_10_boot)
HXDLIN(  10)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  10)			return _this->keyManager->checkStatusUnsafe(27,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_f418d65564106e74_10_boot)
HXDLIN(  10)		esc = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_f418d65564106e74_11_boot)
HXDLIN(  11)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justReleased) );
HXDLIN(  11)			return _this->keyManager->checkStatusUnsafe(27,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_f418d65564106e74_11_boot)
HXDLIN(  11)		esc_R = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_f418d65564106e74_12_boot)
HXDLIN(  12)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  12)			return _this->keyManager->checkStatusUnsafe(27,_this->status);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_f418d65564106e74_12_boot)
HXDLIN(  12)		esc_P = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace helpers
