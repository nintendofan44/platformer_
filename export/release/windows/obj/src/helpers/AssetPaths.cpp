#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_helpers_AssetPaths
#include <helpers/AssetPaths.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_16_setCurrentLevel,"helpers.AssetPaths","setCurrentLevel",0xc305eca6,"helpers.AssetPaths.setCurrentLevel","helpers/AssetPaths.hx",16,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_20_getPath,"helpers.AssetPaths","getPath",0x85fa33b4,"helpers.AssetPaths.getPath","helpers/AssetPaths.hx",20,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_40_getLibraryPath,"helpers.AssetPaths","getLibraryPath",0x6e4bf411,"helpers.AssetPaths.getLibraryPath","helpers/AssetPaths.hx",40,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_45_getLibraryPathForce,"helpers.AssetPaths","getLibraryPathForce",0x59b2d01a,"helpers.AssetPaths.getLibraryPathForce","helpers/AssetPaths.hx",45,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_50_getPreloadPath,"helpers.AssetPaths","getPreloadPath",0xb8ba93df,"helpers.AssetPaths.getPreloadPath","helpers/AssetPaths.hx",50,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_55_file,"helpers.AssetPaths","file",0x16c2ae83,"helpers.AssetPaths.file","helpers/AssetPaths.hx",55,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_60_txt,"helpers.AssetPaths","txt",0x32a7ac49,"helpers.AssetPaths.txt","helpers/AssetPaths.hx",60,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_65_xml,"helpers.AssetPaths","xml",0x32aaabb0,"helpers.AssetPaths.xml","helpers/AssetPaths.hx",65,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_70_tmx,"helpers.AssetPaths","tmx",0x32a7a2b8,"helpers.AssetPaths.tmx","helpers/AssetPaths.hx",70,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_75_tsx,"helpers.AssetPaths","tsx",0x32a7a7f2,"helpers.AssetPaths.tsx","helpers/AssetPaths.hx",75,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_80_json,"helpers.AssetPaths","json",0x196f222f,"helpers.AssetPaths.json","helpers/AssetPaths.hx",80,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_85_sound,"helpers.AssetPaths","sound",0x53c9b2e8,"helpers.AssetPaths.sound","helpers/AssetPaths.hx",85,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_90_soundRandom,"helpers.AssetPaths","soundRandom",0x58b2670b,"helpers.AssetPaths.soundRandom","helpers/AssetPaths.hx",90,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_95_music,"helpers.AssetPaths","music",0xe357f6be,"helpers.AssetPaths.music","helpers/AssetPaths.hx",95,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_100_image,"helpers.AssetPaths","image",0x90664574,"helpers.AssetPaths.image","helpers/AssetPaths.hx",100,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_105_font,"helpers.AssetPaths","font",0x16c73dd6,"helpers.AssetPaths.font","helpers/AssetPaths.hx",105,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_110_getSparrowAtlas,"helpers.AssetPaths","getSparrowAtlas",0x9298caae,"helpers.AssetPaths.getSparrowAtlas","helpers/AssetPaths.hx",110,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_115_getPackerAtlas,"helpers.AssetPaths","getPackerAtlas",0x31bb81b6,"helpers.AssetPaths.getPackerAtlas","helpers/AssetPaths.hx",115,0x8f3eaeb6)
HX_LOCAL_STACK_FRAME(_hx_pos_e6120414052c1cf7_10_boot,"helpers.AssetPaths","boot",0x14226439,"helpers.AssetPaths.boot","helpers/AssetPaths.hx",10,0x8f3eaeb6)
namespace helpers{

void AssetPaths_obj::__construct() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return new AssetPaths_obj; }

void *AssetPaths_obj::_hx_vtable = 0;

Dynamic AssetPaths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetPaths_obj > _hx_result = new AssetPaths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetPaths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6ce54e03;
}

::String AssetPaths_obj::SOUND_EXT;

::String AssetPaths_obj::currentLevel;

void AssetPaths_obj::setCurrentLevel(::String name){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_16_setCurrentLevel)
HXDLIN(  16)		::helpers::AssetPaths_obj::currentLevel = name.toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,setCurrentLevel,(void))

::String AssetPaths_obj::getPath(::String file,::String type,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_20_getPath)
HXLINE(  21)		if (::hx::IsNotNull( library )) {
HXLINE(  22)			return ::helpers::AssetPaths_obj::getLibraryPath(file,library);
            		}
HXLINE(  24)		if (::hx::IsNotNull( ::helpers::AssetPaths_obj::currentLevel )) {
HXLINE(  26)			::String library = ::helpers::AssetPaths_obj::currentLevel;
HXDLIN(  26)			::String levelPath = (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
HXLINE(  27)			if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE(  28)				return levelPath;
            			}
HXLINE(  30)			levelPath = ((((HX_("shared",a5,5e,2b,1d) + HX_(":assets/",52,05,4a,2c)) + HX_("shared",a5,5e,2b,1d)) + HX_("/",2f,00,00,00)) + file);
HXLINE(  31)			if (::openfl::utils::Assets_obj::exists(levelPath,type)) {
HXLINE(  32)				return levelPath;
            			}
            		}
HXLINE(  35)		return (HX_("assets/",4c,2a,dc,36) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AssetPaths_obj,getPath,return )

::String AssetPaths_obj::getLibraryPath(::String file,::String __o_library){
            		::String library = __o_library;
            		if (::hx::IsNull(__o_library)) library = HX_("main",39,38,56,48);
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_40_getLibraryPath)
HXDLIN(  40)		bool _hx_tmp;
HXDLIN(  40)		if ((library != HX_("main",39,38,56,48))) {
HXDLIN(  40)			_hx_tmp = (library == HX_("default",c1,d8,c3,9b));
            		}
            		else {
HXDLIN(  40)			_hx_tmp = true;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXDLIN(  40)			return (HX_("assets/",4c,2a,dc,36) + file);
            		}
            		else {
HXDLIN(  40)			return (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
            		}
HXDLIN(  40)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,getLibraryPath,return )

::String AssetPaths_obj::getLibraryPathForce(::String file,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_45_getLibraryPathForce)
HXDLIN(  45)		return (((((HX_("",00,00,00,00) + library) + HX_(":assets/",52,05,4a,2c)) + library) + HX_("/",2f,00,00,00)) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,getLibraryPathForce,return )

::String AssetPaths_obj::getPreloadPath(::String file){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_50_getPreloadPath)
HXDLIN(  50)		return (HX_("assets/",4c,2a,dc,36) + file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,getPreloadPath,return )

::String AssetPaths_obj::file(::String file,::String __o_type,::String library){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("TEXT",ad,94,ba,37);
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_55_file)
HXDLIN(  55)		return ::helpers::AssetPaths_obj::getPath(file,type,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AssetPaths_obj,file,return )

::String AssetPaths_obj::txt(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_60_txt)
HXDLIN(  60)		return ::helpers::AssetPaths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,txt,return )

::String AssetPaths_obj::xml(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_65_xml)
HXDLIN(  65)		return ::helpers::AssetPaths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,xml,return )

::String AssetPaths_obj::tmx(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_70_tmx)
HXDLIN(  70)		return ::helpers::AssetPaths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".tmx",71,35,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,tmx,return )

::String AssetPaths_obj::tsx(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_75_tsx)
HXDLIN(  75)		return ::helpers::AssetPaths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".tsx",ab,3a,c0,1e)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,tsx,return )

::String AssetPaths_obj::json(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_80_json)
HXDLIN(  80)		return ::helpers::AssetPaths_obj::getPath(((HX_("data/",c5,0e,88,d4) + key) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,json,return )

::String AssetPaths_obj::sound(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_85_sound)
HXDLIN(  85)		return ::helpers::AssetPaths_obj::getPath((((HX_("sounds/",eb,02,a5,b6) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("SOUND",af,c4,ba,fe),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,sound,return )

::String AssetPaths_obj::soundRandom(::String key,int min,int max,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_90_soundRandom)
HXDLIN(  90)		return ::helpers::AssetPaths_obj::sound((key + ::flixel::FlxG_obj::random->_hx_int(min,max,null())),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(AssetPaths_obj,soundRandom,return )

::String AssetPaths_obj::music(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_95_music)
HXDLIN(  95)		return ::helpers::AssetPaths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + key) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,music,return )

::String AssetPaths_obj::image(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_100_image)
HXDLIN( 100)		return ::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,image,return )

::String AssetPaths_obj::font(::String key){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_105_font)
HXDLIN( 105)		return (HX_("assets/fonts/",37,ff,a5,9c) + key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetPaths_obj,font,return )

 ::flixel::graphics::frames::FlxAtlasFrames AssetPaths_obj::getSparrowAtlas(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_110_getSparrowAtlas)
HXDLIN( 110)		::String _hx_tmp = ::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 110)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,getSparrowAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames AssetPaths_obj::getPackerAtlas(::String key,::String library){
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_115_getPackerAtlas)
HXDLIN( 115)		::String _hx_tmp = ::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 115)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetPaths_obj,getPackerAtlas,return )


AssetPaths_obj::AssetPaths_obj()
{
}

bool AssetPaths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { outValue = txt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"xml") ) { outValue = xml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"tmx") ) { outValue = tmx_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"tsx") ) { outValue = tsx_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { outValue = file_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"json") ) { outValue = json_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"font") ) { outValue = font_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"soundRandom") ) { outValue = soundRandom_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { outValue = ( currentLevel ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLibraryPath") ) { outValue = getLibraryPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPreloadPath") ) { outValue = getPreloadPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPackerAtlas") ) { outValue = getPackerAtlas_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setCurrentLevel") ) { outValue = setCurrentLevel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSparrowAtlas") ) { outValue = getSparrowAtlas_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getLibraryPathForce") ) { outValue = getLibraryPathForce_dyn(); return true; }
	}
	return false;
}

bool AssetPaths_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"currentLevel") ) { currentLevel=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetPaths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AssetPaths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AssetPaths_obj::SOUND_EXT,HX_("SOUND_EXT",b1,35,8c,6f)},
	{::hx::fsString,(void *) &AssetPaths_obj::currentLevel,HX_("currentLevel",8b,fa,6e,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AssetPaths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::SOUND_EXT,"SOUND_EXT");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::currentLevel,"currentLevel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetPaths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::SOUND_EXT,"SOUND_EXT");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::currentLevel,"currentLevel");
};

#endif

::hx::Class AssetPaths_obj::__mClass;

static ::String AssetPaths_obj_sStaticFields[] = {
	HX_("SOUND_EXT",b1,35,8c,6f),
	HX_("currentLevel",8b,fa,6e,b9),
	HX_("setCurrentLevel",4d,cd,24,d8),
	HX_("getPath",5b,95,d4,1c),
	HX_("getLibraryPath",4a,25,d8,33),
	HX_("getLibraryPathForce",41,90,ac,3f),
	HX_("getPreloadPath",18,c5,46,7e),
	HX_("file",7c,ce,bb,43),
	HX_("txt",70,6e,58,00),
	HX_("xml",d7,6d,5b,00),
	HX_("tmx",df,64,58,00),
	HX_("tsx",19,6a,58,00),
	HX_("json",28,42,68,46),
	HX_("sound",cf,8c,cc,80),
	HX_("soundRandom",32,28,bc,6a),
	HX_("music",a5,d0,5a,10),
	HX_("image",5b,1f,69,bd),
	HX_("font",cf,5d,c0,43),
	HX_("getSparrowAtlas",55,ab,b7,a7),
	HX_("getPackerAtlas",ef,b2,47,f7),
	::String(null())
};

void AssetPaths_obj::__register()
{
	AssetPaths_obj _hx_dummy;
	AssetPaths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("helpers.AssetPaths",c7,7d,27,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetPaths_obj::__GetStatic;
	__mClass->mSetStaticField = &AssetPaths_obj::__SetStatic;
	__mClass->mMarkFunc = AssetPaths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetPaths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AssetPaths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetPaths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetPaths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetPaths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AssetPaths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e6120414052c1cf7_10_boot)
HXDLIN(  10)		SOUND_EXT = HX_("ogg",4f,94,54,00);
            	}
}

} // end namespace helpers
