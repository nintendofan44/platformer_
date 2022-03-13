#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#define INCLUDED_flixel_addons_editors_tiled_TiledTileSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledImageTile)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTilePropertySet)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTileSet)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledTileSet_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TiledTileSet_obj OBJ_;
		TiledTileSet_obj();

	public:
		enum { _hx_ClassId = 0x551f3a3d };

		void __construct( ::Dynamic data,::String __o_rootPath);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledTileSet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.tiled.TiledTileSet"); }
		static ::hx::ObjectPtr< TiledTileSet_obj > __new( ::Dynamic data,::String __o_rootPath);
		static ::hx::ObjectPtr< TiledTileSet_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic data,::String __o_rootPath);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TiledTileSet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TiledTileSet",5e,ea,33,31); }

		int firstGID;
		::String name;
		int tileWidth;
		int tileHeight;
		int spacing;
		int margin;
		::String imageSource;
		int numTiles;
		int numRows;
		int numCols;
		 ::flixel::addons::editors::tiled::TiledPropertySet properties;
		::Array< ::String > tileTypes;
		::Array< Float > tileProbabilities;
		::Array< ::Dynamic> tileProps;
		::Array< ::Dynamic> tileImagesSources;
		bool hasGid(int Gid);
		::Dynamic hasGid_dyn();

		int fromGid(int Gid);
		::Dynamic fromGid_dyn();

		int toGid(int ID);
		::Dynamic toGid_dyn();

		 ::flixel::addons::editors::tiled::TiledPropertySet getPropertiesByGid(int Gid);
		::Dynamic getPropertiesByGid_dyn();

		 ::flixel::addons::editors::tiled::TiledPropertySet getProperties(int ID);
		::Dynamic getProperties_dyn();

		 ::flixel::addons::editors::tiled::TiledImageTile getImageSourceByGid(int Gid);
		::Dynamic getImageSourceByGid_dyn();

		 ::flixel::addons::editors::tiled::TiledImageTile getImageSource(int ID);
		::Dynamic getImageSource_dyn();

		 ::openfl::geom::Rectangle getRect(int ID);
		::Dynamic getRect_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledTileSet */ 
