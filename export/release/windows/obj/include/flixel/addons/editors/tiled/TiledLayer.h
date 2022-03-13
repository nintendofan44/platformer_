#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#define INCLUDED_flixel_addons_editors_tiled_TiledLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayerType)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledLayer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TiledLayer_obj OBJ_;
		TiledLayer_obj();

	public:
		enum { _hx_ClassId = 0x4dd3cd1e };

		void __construct( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledLayer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.tiled.TiledLayer"); }
		static ::hx::ObjectPtr< TiledLayer_obj > __new( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent);
		static ::hx::ObjectPtr< TiledLayer_obj > __alloc(::hx::Ctx *_hx_ctx, ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TiledLayer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TiledLayer",9b,6c,51,25); }

		 ::flixel::addons::editors::tiled::TiledLayerType type;
		 ::flixel::addons::editors::tiled::TiledMap map;
		::String name;
		Float opacity;
		bool visible;
		 ::flixel::addons::editors::tiled::TiledPropertySet properties;
		Float offsetX;
		Float offsetY;
		void loadProperties( ::Xml source);
		::Dynamic loadProperties_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledLayer */ 
