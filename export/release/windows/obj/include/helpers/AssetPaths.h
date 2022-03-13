#ifndef INCLUDED_helpers_AssetPaths
#define INCLUDED_helpers_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(helpers,AssetPaths)

namespace helpers{


class HXCPP_CLASS_ATTRIBUTES AssetPaths_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();

	public:
		enum { _hx_ClassId = 0x6ce54e03 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="helpers.AssetPaths")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"helpers.AssetPaths"); }

		inline static ::hx::ObjectPtr< AssetPaths_obj > __new() {
			::hx::ObjectPtr< AssetPaths_obj > __this = new AssetPaths_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AssetPaths_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AssetPaths_obj *__this = (AssetPaths_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetPaths_obj), false, "helpers.AssetPaths"));
			*(void **)__this = AssetPaths_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetPaths",3e,0f,e6,60); }

		static void __boot();
		static ::String SOUND_EXT;
		static ::String currentLevel;
		static void setCurrentLevel(::String name);
		static ::Dynamic setCurrentLevel_dyn();

		static ::String getPath(::String file,::String type,::String library);
		static ::Dynamic getPath_dyn();

		static ::String getLibraryPath(::String file,::String library);
		static ::Dynamic getLibraryPath_dyn();

		static ::String getLibraryPathForce(::String file,::String library);
		static ::Dynamic getLibraryPathForce_dyn();

		static ::String getPreloadPath(::String file);
		static ::Dynamic getPreloadPath_dyn();

		static ::String file(::String file,::String type,::String library);
		static ::Dynamic file_dyn();

		static ::String txt(::String key,::String library);
		static ::Dynamic txt_dyn();

		static ::String xml(::String key,::String library);
		static ::Dynamic xml_dyn();

		static ::String tmx(::String key,::String library);
		static ::Dynamic tmx_dyn();

		static ::String tsx(::String key,::String library);
		static ::Dynamic tsx_dyn();

		static ::String json(::String key,::String library);
		static ::Dynamic json_dyn();

		static ::String sound(::String key,::String library);
		static ::Dynamic sound_dyn();

		static ::String soundRandom(::String key,int min,int max,::String library);
		static ::Dynamic soundRandom_dyn();

		static ::String music(::String key,::String library);
		static ::Dynamic music_dyn();

		static ::String image(::String key,::String library);
		static ::Dynamic image_dyn();

		static ::String font(::String key);
		static ::Dynamic font_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames getSparrowAtlas(::String key,::String library);
		static ::Dynamic getSparrowAtlas_dyn();

		static  ::flixel::graphics::frames::FlxAtlasFrames getPackerAtlas(::String key,::String library);
		static ::Dynamic getPackerAtlas_dyn();

};

} // end namespace helpers

#endif /* INCLUDED_helpers_AssetPaths */ 
