#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#define INCLUDED_flixel_addons_editors_tiled_TiledObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObject)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObjectLayer)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TiledObject_obj OBJ_;
		TiledObject_obj();

	public:
		enum { _hx_ClassId = 0x27af95b6 };

		void __construct( ::Xml source, ::flixel::addons::editors::tiled::TiledObjectLayer parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.tiled.TiledObject"); }
		static ::hx::ObjectPtr< TiledObject_obj > __new( ::Xml source, ::flixel::addons::editors::tiled::TiledObjectLayer parent);
		static ::hx::ObjectPtr< TiledObject_obj > __alloc(::hx::Ctx *_hx_ctx, ::Xml source, ::flixel::addons::editors::tiled::TiledObjectLayer parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TiledObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TiledObject",b5,04,7c,3e); }

		static void __boot();
		static int FLIPPED_VERTICALLY_FLAG;
		static int FLIPPED_HORIZONTALLY_FLAG;
		static int RECTANGLE;
		static int ELLIPSE;
		static int POLYGON;
		static int POLYLINE;
		static int TILE;
		int x;
		int y;
		int width;
		int height;
		::String name;
		::String type;
		 ::Xml xmlData;
		Float angle;
		int gid;
		 ::flixel::addons::editors::tiled::TiledPropertySet properties;
		 ::flixel::addons::editors::tiled::TiledPropertySet shared;
		 ::flixel::addons::editors::tiled::TiledObjectLayer layer;
		int objectType;
		bool flippedHorizontally;
		bool flippedVertically;
		::Array< ::Dynamic> points;
		void getPoints( ::Xml node);
		::Dynamic getPoints_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledObject */ 
