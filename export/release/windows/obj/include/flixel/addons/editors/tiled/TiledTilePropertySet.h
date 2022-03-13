#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTilePropertySet
#define INCLUDED_flixel_addons_editors_tiled_TiledTilePropertySet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledObject)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTilePropertySet)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledTilePropertySet_obj : public  ::flixel::addons::editors::tiled::TiledPropertySet_obj
{
	public:
		typedef  ::flixel::addons::editors::tiled::TiledPropertySet_obj super;
		typedef TiledTilePropertySet_obj OBJ_;
		TiledTilePropertySet_obj();

	public:
		enum { _hx_ClassId = 0x41535fe8 };

		void __construct(int tileID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledTilePropertySet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.tiled.TiledTilePropertySet"); }
		static ::hx::ObjectPtr< TiledTilePropertySet_obj > __new(int tileID);
		static ::hx::ObjectPtr< TiledTilePropertySet_obj > __alloc(::hx::Ctx *_hx_ctx,int tileID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TiledTilePropertySet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TiledTilePropertySet",09,99,b6,7a); }

		int tileID;
		::Array< ::Dynamic> animationFrames;
		::Array< ::Dynamic> tileObjects;
		void addAnimationFrame(int tileID,Float duration);
		::Dynamic addAnimationFrame_dyn();

		void addTileObject( ::flixel::addons::editors::tiled::TiledObject tileObject);
		::Dynamic addTileObject_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledTilePropertySet */ 
