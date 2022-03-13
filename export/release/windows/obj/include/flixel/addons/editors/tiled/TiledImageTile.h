#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageTile
#define INCLUDED_flixel_addons_editors_tiled_TiledImageTile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledImageTile)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledImageTile_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TiledImageTile_obj OBJ_;
		TiledImageTile_obj();

	public:
		enum { _hx_ClassId = 0x70b6bd92 };

		void __construct( ::Xml Source);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledImageTile")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.tiled.TiledImageTile"); }
		static ::hx::ObjectPtr< TiledImageTile_obj > __new( ::Xml Source);
		static ::hx::ObjectPtr< TiledImageTile_obj > __alloc(::hx::Ctx *_hx_ctx, ::Xml Source);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TiledImageTile_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TiledImageTile",f3,77,70,ff); }

		::String id;
		Float width;
		Float height;
		::String source;
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledImageTile */ 
