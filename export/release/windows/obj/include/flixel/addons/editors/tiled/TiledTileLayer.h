#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileLayer
#define INCLUDED_flixel_addons_editors_tiled_TiledTileLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTile)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTileLayer)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledTileLayer_obj : public  ::flixel::addons::editors::tiled::TiledLayer_obj
{
	public:
		typedef  ::flixel::addons::editors::tiled::TiledLayer_obj super;
		typedef TiledTileLayer_obj OBJ_;
		TiledTileLayer_obj();

	public:
		enum { _hx_ClassId = 0x3ca13d2c };

		void __construct( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledTileLayer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.tiled.TiledTileLayer"); }
		static ::hx::ObjectPtr< TiledTileLayer_obj > __new( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent);
		static ::hx::ObjectPtr< TiledTileLayer_obj > __alloc(::hx::Ctx *_hx_ctx, ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TiledTileLayer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TiledTileLayer",8d,f7,5a,cb); }

		static void __boot();
		static ::String BASE64_CHARS;
		int x;
		int y;
		int width;
		int height;
		::Array< ::Dynamic> tiles;
		::String encoding;
		::String csvData;
		::Array< int > tileArray;
		 ::Xml xmlData;
		 ::openfl::utils::ByteArrayData getByteArrayData();
		::Dynamic getByteArrayData_dyn();

		 ::openfl::utils::ByteArrayData base64ToByteArray(::String data);
		::Dynamic base64ToByteArray_dyn();

		int resolveTile(int globalTileId);
		::Dynamic resolveTile_dyn();

		::String get_encoding();
		::Dynamic get_encoding_dyn();

		::String get_csvData();
		::Dynamic get_csvData_dyn();

		::Array< int > get_tileArray();
		::Dynamic get_tileArray_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledTileLayer */ 
