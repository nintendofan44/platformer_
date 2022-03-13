#ifndef INCLUDED_flixel_addons_editors_tiled_TiledGroupLayer
#define INCLUDED_flixel_addons_editors_tiled_TiledGroupLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledGroupLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledGroupLayer_obj : public  ::flixel::addons::editors::tiled::TiledLayer_obj
{
	public:
		typedef  ::flixel::addons::editors::tiled::TiledLayer_obj super;
		typedef TiledGroupLayer_obj OBJ_;
		TiledGroupLayer_obj();

	public:
		enum { _hx_ClassId = 0x688ef6c1 };

		void __construct( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent, ::haxe::ds::StringMap noLoadHash);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledGroupLayer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.tiled.TiledGroupLayer"); }
		static ::hx::ObjectPtr< TiledGroupLayer_obj > __new( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent, ::haxe::ds::StringMap noLoadHash);
		static ::hx::ObjectPtr< TiledGroupLayer_obj > __alloc(::hx::Ctx *_hx_ctx, ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent, ::haxe::ds::StringMap noLoadHash);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TiledGroupLayer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TiledGroupLayer",08,d3,81,4d); }

		::Array< ::Dynamic> layers;
		 ::haxe::ds::StringMap layerMap;
		void loadLayers( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent, ::haxe::ds::StringMap noLoadHash);
		::Dynamic loadLayers_dyn();

		 ::flixel::addons::editors::tiled::TiledLayer getLayer(::String name);
		::Dynamic getLayer_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledGroupLayer */ 
