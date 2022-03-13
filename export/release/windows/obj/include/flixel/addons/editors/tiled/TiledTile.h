#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#define INCLUDED_flixel_addons_editors_tiled_TiledTile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2b9e43ba1cece35d_7_new)
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledTile)

namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES TiledTile_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TiledTile_obj OBJ_;
		TiledTile_obj();

	public:
		enum { _hx_ClassId = 0x3d666665 };

		void __construct(int OriginalId);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.addons.editors.tiled.TiledTile")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.addons.editors.tiled.TiledTile"); }

		inline static ::hx::ObjectPtr< TiledTile_obj > __new(int OriginalId) {
			::hx::ObjectPtr< TiledTile_obj > __this = new TiledTile_obj();
			__this->__construct(OriginalId);
			return __this;
		}

		inline static ::hx::ObjectPtr< TiledTile_obj > __alloc(::hx::Ctx *_hx_ctx,int OriginalId) {
			TiledTile_obj *__this = (TiledTile_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiledTile_obj), false, "flixel.addons.editors.tiled.TiledTile"));
			*(void **)__this = TiledTile_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2b9e43ba1cece35d_7_new)
HXLINE(  35)		( ( ::flixel::addons::editors::tiled::TiledTile)(__this) )->isFlipVertically = false;
HXLINE(  30)		( ( ::flixel::addons::editors::tiled::TiledTile)(__this) )->isFlipHorizontally = false;
HXLINE(  44)		( ( ::flixel::addons::editors::tiled::TiledTile)(__this) )->tileID = OriginalId;
HXLINE(  45)		( ( ::flixel::addons::editors::tiled::TiledTile)(__this) )->tilesetID = (( ( ::flixel::addons::editors::tiled::TiledTile)(__this) )->tileID & 536870911);
HXLINE(  46)		( ( ::flixel::addons::editors::tiled::TiledTile)(__this) )->rotate = 0;
HXLINE(  47)		( ( ::flixel::addons::editors::tiled::TiledTile)(__this) )->resolveFlipAndRotation();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TiledTile_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TiledTile",a4,c7,e8,65); }

		static void __boot();
		static int FLIPPED_HORIZONTAL;
		static int FLIPPED_VERTICAL;
		static int FLIPPED_DIAGONAL;
		static int ROTATE_0;
		static int ROTATE_90;
		static int ROTATE_270;
		int tileID;
		int tilesetID;
		bool isFlipHorizontally;
		bool isFlipVertically;
		int rotate;
		void resolveFlipAndRotation();
		::Dynamic resolveFlipAndRotation_dyn();

		int resolveTilesetID();
		::Dynamic resolveTilesetID_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledTile */ 
