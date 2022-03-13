#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_helpers_AssetPaths
#include <helpers/AssetPaths.h>
#endif
#ifndef INCLUDED_helpers_Utilities
#include <helpers/Utilities.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_279cc67273b54bf2_12_nextPower,"helpers.Utilities","nextPower",0xed508fa5,"helpers.Utilities.nextPower","helpers/Utilities.hx",12,0xa65fba9e)
HX_LOCAL_STACK_FRAME(_hx_pos_279cc67273b54bf2_20_bound,"helpers.Utilities","bound",0x77eed451,"helpers.Utilities.bound","helpers/Utilities.hx",20,0xa65fba9e)
HX_LOCAL_STACK_FRAME(_hx_pos_279cc67273b54bf2_25_precacheSound,"helpers.Utilities","precacheSound",0x045bec23,"helpers.Utilities.precacheSound","helpers/Utilities.hx",25,0xa65fba9e)
HX_LOCAL_STACK_FRAME(_hx_pos_279cc67273b54bf2_36_browserLoad,"helpers.Utilities","browserLoad",0x0719aa41,"helpers.Utilities.browserLoad","helpers/Utilities.hx",36,0xa65fba9e)
namespace helpers{

void Utilities_obj::__construct() { }

Dynamic Utilities_obj::__CreateEmpty() { return new Utilities_obj; }

void *Utilities_obj::_hx_vtable = 0;

Dynamic Utilities_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Utilities_obj > _hx_result = new Utilities_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Utilities_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x363179e9;
}

int Utilities_obj::nextPower(int k){
            	HX_STACKFRAME(&_hx_pos_279cc67273b54bf2_12_nextPower)
HXLINE(  13)		int n = 1;
HXLINE(  14)		while((n < k)){
HXLINE(  15)			n = (n * 2);
            		}
HXLINE(  16)		return ::Std_obj::_hx_int(( (Float)(n) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utilities_obj,nextPower,return )

Float Utilities_obj::bound(Float value,Float min,Float max){
            	HX_STACKFRAME(&_hx_pos_279cc67273b54bf2_20_bound)
HXDLIN(  20)		return ::Math_obj::max(min,::Math_obj::min(max,value));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utilities_obj,bound,return )

void Utilities_obj::precacheSound(::String sound,::String library){
            	HX_STACKFRAME(&_hx_pos_279cc67273b54bf2_25_precacheSound)
HXDLIN(  25)		::Dynamic _hx_tmp = ::openfl::utils::Assets_obj::cache;
HXDLIN(  25)		if (!(::openfl::utils::IAssetCache_obj::hasSound(_hx_tmp,::helpers::AssetPaths_obj::sound(sound,library)))) {
HXLINE(  27)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _this = ::flixel::FlxG_obj::sound;
HXDLIN(  27)			::String EmbeddedSound = ::helpers::AssetPaths_obj::sound(sound,library);
HXDLIN(  27)			bool _hx_tmp;
HXDLIN(  27)			if (!(::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("SOUND",af,c4,ba,fe)))) {
HXLINE(  27)				_hx_tmp = ::openfl::utils::Assets_obj::exists(EmbeddedSound,HX_("MUSIC",85,08,49,8e));
            			}
            			else {
HXLINE(  27)				_hx_tmp = true;
            			}
HXDLIN(  27)			if (_hx_tmp) {
HXLINE(  27)				::openfl::utils::Assets_obj::getSound(EmbeddedSound,true);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utilities_obj,precacheSound,(void))

void Utilities_obj::browserLoad(::String site){
            	HX_GC_STACKFRAME(&_hx_pos_279cc67273b54bf2_36_browserLoad)
HXDLIN(  36)		::String prefix = HX_("",00,00,00,00);
HXDLIN(  36)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(site))) {
HXDLIN(  36)			prefix = HX_("http://",52,75,cd,5a);
            		}
HXDLIN(  36)		::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + site)),HX_("_blank",95,26,d9,b0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utilities_obj,browserLoad,(void))


Utilities_obj::Utilities_obj()
{
}

bool Utilities_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bound") ) { outValue = bound_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextPower") ) { outValue = nextPower_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"browserLoad") ) { outValue = browserLoad_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"precacheSound") ) { outValue = precacheSound_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Utilities_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Utilities_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Utilities_obj::__mClass;

static ::String Utilities_obj_sStaticFields[] = {
	HX_("nextPower",12,66,df,6d),
	HX_("bound",3e,b0,fc,b6),
	HX_("precacheSound",10,fd,ba,66),
	HX_("browserLoad",ee,b5,dc,e9),
	::String(null())
};

void Utilities_obj::__register()
{
	Utilities_obj _hx_dummy;
	Utilities_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("helpers.Utilities",41,64,71,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utilities_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Utilities_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Utilities_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utilities_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utilities_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace helpers
