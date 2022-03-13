#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#define INCLUDED_flixel_addons_editors_tiled_TiledPropertySet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledPropertySet)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledPropertySet_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TiledPropertySet_obj OBJ_;
		TiledPropertySet_obj();

	public:
		enum { _hx_ClassId = 0x4a3977f6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.editors.tiled.TiledPropertySet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.editors.tiled.TiledPropertySet"); }
		static ::hx::ObjectPtr< TiledPropertySet_obj > __new();
		static ::hx::ObjectPtr< TiledPropertySet_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TiledPropertySet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TiledPropertySet",97,4c,9f,46); }

		 ::haxe::ds::StringMap keys;
		::String get(::String Key);
		::Dynamic get_dyn();

		bool contains(::String Key);
		::Dynamic contains_dyn();

		::String resolve(::String Name);
		::Dynamic resolve_dyn();

		 ::Dynamic keysIterator();
		::Dynamic keysIterator_dyn();

		void extend( ::Xml Source);
		::Dynamic extend_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledPropertySet */ 
