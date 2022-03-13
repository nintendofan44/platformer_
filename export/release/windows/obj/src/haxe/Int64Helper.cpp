#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Int64Helper
#include <haxe/Int64Helper.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b0cea5ff2040a8e2_36_parseString,"haxe.Int64Helper","parseString",0x30544f49,"haxe.Int64Helper.parseString","C:\\HaxeToolkit\\haxe\\std/haxe/Int64Helper.hx",36,0x6db66153)
namespace haxe{

void Int64Helper_obj::__construct() { }

Dynamic Int64Helper_obj::__CreateEmpty() { return new Int64Helper_obj; }

void *Int64Helper_obj::_hx_vtable = 0;

Dynamic Int64Helper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Int64Helper_obj > _hx_result = new Int64Helper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Int64Helper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x03ea75b5;
}

 cpp::Int64Struct Int64Helper_obj::parseString(::String sParam){
            	HX_STACKFRAME(&_hx_pos_b0cea5ff2040a8e2_36_parseString)
HXLINE(  37)		 cpp::Int64Struct base = ( ::cpp::Int64Struct(10));
HXLINE(  38)		 cpp::Int64Struct current = ( ::cpp::Int64Struct(0));
HXLINE(  39)		 cpp::Int64Struct multiplier = ( ::cpp::Int64Struct(1));
HXLINE(  40)		bool sIsNegative = false;
HXLINE(  42)		::String s = ::StringTools_obj::trim(sParam);
HXLINE(  43)		if ((s.charAt(0) == HX_("-",2d,00,00,00))) {
HXLINE(  44)			sIsNegative = true;
HXLINE(  45)			s = s.substring(1,s.length);
            		}
HXLINE(  47)		int len = s.length;
HXLINE(  49)		{
HXLINE(  49)			int _g = 0;
HXDLIN(  49)			int _g1 = len;
HXDLIN(  49)			while((_g < _g1)){
HXLINE(  49)				_g = (_g + 1);
HXDLIN(  49)				int i = (_g - 1);
HXLINE(  50)				int digitInt = (( (int)(s.charCodeAt(((len - 1) - i))) ) - 48);
HXLINE(  52)				bool _hx_tmp;
HXDLIN(  52)				if ((digitInt >= 0)) {
HXLINE(  52)					_hx_tmp = (digitInt > 9);
            				}
            				else {
HXLINE(  52)					_hx_tmp = true;
            				}
HXDLIN(  52)				if (_hx_tmp) {
HXLINE(  53)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("NumberFormatError",a8,c8,6f,c1)));
            				}
HXLINE(  56)				if ((digitInt != 0)) {
HXLINE(  57)					 cpp::Int64Struct digit = ( ::cpp::Int64Struct(digitInt));
HXLINE(  58)					if (sIsNegative) {
HXLINE(  59)						current = _hx_int64_sub(current,_hx_int64_mul(multiplier,digit));
HXLINE(  60)						if (!(_hx_int64_is_neg(current))) {
HXLINE(  61)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("NumberFormatError: Underflow",d8,65,97,7b)));
            						}
            					}
            					else {
HXLINE(  64)						current = _hx_int64_add(current,_hx_int64_mul(multiplier,digit));
HXLINE(  65)						if (_hx_int64_is_neg(current)) {
HXLINE(  66)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("NumberFormatError: Overflow",b0,12,ea,e1)));
            						}
            					}
            				}
HXLINE(  71)				multiplier = _hx_int64_mul(multiplier,base);
            			}
            		}
HXLINE(  73)		return current;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int64Helper_obj,parseString,return )


Int64Helper_obj::Int64Helper_obj()
{
}

bool Int64Helper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"parseString") ) { outValue = parseString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Int64Helper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Int64Helper_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Int64Helper_obj::__mClass;

static ::String Int64Helper_obj_sStaticFields[] = {
	HX_("parseString",64,d5,6c,8c),
	::String(null())
};

void Int64Helper_obj::__register()
{
	Int64Helper_obj _hx_dummy;
	Int64Helper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.Int64Helper",d3,56,31,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int64Helper_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Int64Helper_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Int64Helper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Int64Helper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Int64Helper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
