#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#define INCLUDED_flixel_addons_editors_tiled_TiledMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTileSet)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledMap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TiledMap_obj OBJ_;
		TiledMap_obj();

	public:
		enum { _hx_ClassId = 0x3b84f8a9 };

		void __construct( ::Dynamic data,::String rootPath);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledMap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.tiled.TiledMap"); }
		static ::hx::ObjectPtr< TiledMap_obj > __new( ::Dynamic data,::String rootPath);
		static ::hx::ObjectPtr< TiledMap_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic data,::String rootPath);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TiledMap_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TiledMap",e6,ce,32,6b); }

		::String version;
		::String orientation;
		int backgroundColor;
		int width;
		int height;
		int tileWidth;
		int tileHeight;
		int fullWidth;
		int fullHeight;
		 ::flixel::addons::editors::tiled::TiledPropertySet properties;
		 ::haxe::ds::StringMap tilesets;
		::Array< ::Dynamic> tilesetArray;
		::Array< ::Dynamic> layers;
		 ::haxe::ds::StringMap noLoadHash;
		 ::haxe::ds::StringMap layerMap;
		::String rootPath;
		void loadAttributes( ::Xml source);
		::Dynamic loadAttributes_dyn();

		void loadProperties( ::Xml source);
		::Dynamic loadProperties_dyn();

		void loadTilesets( ::Xml source);
		::Dynamic loadTilesets_dyn();

		void loadLayers( ::Xml source);
		::Dynamic loadLayers_dyn();

		 ::flixel::addons::editors::tiled::TiledTileSet getTileSet(::String name);
		::Dynamic getTileSet_dyn();

		 ::flixel::addons::editors::tiled::TiledLayer getLayer(::String name);
		::Dynamic getLayer_dyn();

		 ::flixel::addons::editors::tiled::TiledTileSet getGidOwner(int gid);
		::Dynamic getGidOwner_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledMap */ 
