#include <hxcpp.h>

#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf
#include <__ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__flixel_fonts_monsterrat_ttf
#include <__ASSET__OPENFL__flixel_fonts_monsterrat_ttf.h>
#endif
#ifndef INCLUDED___ASSET__OPENFL__flixel_fonts_nokiafc22_ttf
#include <__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6b0b98c45b3017d4_25_init,"ManifestResources","init",0xc8e10c68,"ManifestResources.init","ManifestResources.hx",25,0xf77aa668)

void ManifestResources_obj::__construct() { }

Dynamic ManifestResources_obj::__CreateEmpty() { return new ManifestResources_obj; }

void *ManifestResources_obj::_hx_vtable = 0;

Dynamic ManifestResources_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ManifestResources_obj > _hx_result = new ManifestResources_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ManifestResources_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f5bd976;
}

::Array< ::Dynamic> ManifestResources_obj::preloadLibraries;

::Array< ::String > ManifestResources_obj::preloadLibraryNames;

::String ManifestResources_obj::rootPath;

void ManifestResources_obj::init( ::Dynamic config){
            	HX_STACKFRAME(&_hx_pos_6b0b98c45b3017d4_25_init)
HXLINE(  27)		::ManifestResources_obj::preloadLibraries = ::Array_obj< ::Dynamic>::__new();
HXLINE(  28)		::ManifestResources_obj::preloadLibraryNames = ::Array_obj< ::String >::__new();
HXLINE(  30)		::ManifestResources_obj::rootPath = null();
HXLINE(  32)		bool _hx_tmp;
HXDLIN(  32)		if (::hx::IsNotNull( config )) {
HXLINE(  32)			_hx_tmp = ::Reflect_obj::hasField(config,HX_("rootPath",e7,b8,88,e1));
            		}
            		else {
HXLINE(  32)			_hx_tmp = false;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  34)			::ManifestResources_obj::rootPath = ( (::String)(::Reflect_obj::field(config,HX_("rootPath",e7,b8,88,e1))) );
            		}
HXLINE(  38)		if (::hx::IsNull( ::ManifestResources_obj::rootPath )) {
HXLINE(  47)			::ManifestResources_obj::rootPath = HX_("./",41,28,00,00);
            		}
HXLINE(  53)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf >());
HXLINE(  54)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf >());
HXLINE(  55)		::openfl::text::Font_obj::registerFont(::hx::ClassOf< ::__ASSET__OPENFL__flixel_fonts_monsterrat_ttf >());
HXLINE(  59)		 ::Dynamic data;
HXDLIN(  59)		 ::Dynamic manifest;
HXDLIN(  59)		 ::Dynamic bundle;
HXLINE(  72)		{
HXLINE(  72)			::String v = (::ManifestResources_obj::rootPath + HX_("manifest/shared.json",f1,c2,0a,f4));
HXDLIN(  72)			::lime::utils::Assets_obj::libraryPaths->set(HX_("shared",a5,5e,2b,1d),v);
            		}
HXLINE(  73)		{
HXLINE(  73)			::String v1 = (::ManifestResources_obj::rootPath + HX_("manifest/levels.json",e7,e6,c4,b5));
HXDLIN(  73)			::lime::utils::Assets_obj::libraryPaths->set(HX_("levels",6f,be,4f,a4),v1);
            		}
HXLINE(  74)		{
HXLINE(  74)			::String v2 = (::ManifestResources_obj::rootPath + HX_("manifest/textures.json",7e,8d,c4,cd));
HXDLIN(  74)			::lime::utils::Assets_obj::libraryPaths->set(HX_("textures",38,f7,ce,65),v2);
            		}
HXLINE(  75)		{
HXLINE(  75)			::String v3 = (::ManifestResources_obj::rootPath + HX_("manifest/default.json",95,ea,cc,42));
HXDLIN(  75)			::lime::utils::Assets_obj::libraryPaths->set(HX_("default",c1,d8,c3,9b),v3);
            		}
HXLINE(  59)		 ::lime::utils::AssetLibrary library = ::lime::utils::Assets_obj::getLibrary(HX_("shared",a5,5e,2b,1d));
HXLINE(  79)		if (::hx::IsNotNull( library )) {
HXLINE(  79)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE(  80)			::ManifestResources_obj::preloadLibraryNames->push(HX_("shared",a5,5e,2b,1d));
            		}
HXLINE(  81)		library = ::lime::utils::Assets_obj::getLibrary(HX_("levels",6f,be,4f,a4));
HXLINE(  82)		if (::hx::IsNotNull( library )) {
HXLINE(  82)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE(  83)			::ManifestResources_obj::preloadLibraryNames->push(HX_("levels",6f,be,4f,a4));
            		}
HXLINE(  84)		library = ::lime::utils::Assets_obj::getLibrary(HX_("textures",38,f7,ce,65));
HXLINE(  85)		if (::hx::IsNotNull( library )) {
HXLINE(  85)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE(  86)			::ManifestResources_obj::preloadLibraryNames->push(HX_("textures",38,f7,ce,65));
            		}
HXLINE(  87)		library = ::lime::utils::Assets_obj::getLibrary(HX_("default",c1,d8,c3,9b));
HXLINE(  88)		if (::hx::IsNotNull( library )) {
HXLINE(  88)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE(  89)			::ManifestResources_obj::preloadLibraryNames->push(HX_("default",c1,d8,c3,9b));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ManifestResources_obj,init,(void))


ManifestResources_obj::ManifestResources_obj()
{
}

bool ManifestResources_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { outValue = ( rootPath ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { outValue = ( preloadLibraries ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { outValue = ( preloadLibraryNames ); return true; }
	}
	return false;
}

bool ManifestResources_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { preloadLibraries=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { preloadLibraryNames=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ManifestResources_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ManifestResources_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &ManifestResources_obj::preloadLibraries,HX_("preloadLibraries",10,27,df,e6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &ManifestResources_obj::preloadLibraryNames,HX_("preloadLibraryNames",36,48,52,5c)},
	{::hx::fsString,(void *) &ManifestResources_obj::rootPath,HX_("rootPath",e7,b8,88,e1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ManifestResources_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::rootPath,"rootPath");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ManifestResources_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::rootPath,"rootPath");
};

#endif

::hx::Class ManifestResources_obj::__mClass;

static ::String ManifestResources_obj_sStaticFields[] = {
	HX_("preloadLibraries",10,27,df,e6),
	HX_("preloadLibraryNames",36,48,52,5c),
	HX_("rootPath",e7,b8,88,e1),
	HX_("init",10,3b,bb,45),
	::String(null())
};

void ManifestResources_obj::__register()
{
	ManifestResources_obj _hx_dummy;
	ManifestResources_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ManifestResources",16,0e,30,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ManifestResources_obj::__GetStatic;
	__mClass->mSetStaticField = &ManifestResources_obj::__SetStatic;
	__mClass->mMarkFunc = ManifestResources_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ManifestResources_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ManifestResources_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ManifestResources_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ManifestResources_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ManifestResources_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

