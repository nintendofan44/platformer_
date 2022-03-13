#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayerType
#define INCLUDED_flixel_addons_editors_tiled_TiledLayerType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledLayerType)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{


class TiledLayerType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef TiledLayerType_obj OBJ_;

	public:
		TiledLayerType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.editors.tiled.TiledLayerType",7e,4d,b6,1a); }
		::String __ToString() const { return HX_("TiledLayerType.",99,e1,50,27) + _hx_tag; }

		static ::flixel::addons::editors::tiled::TiledLayerType GROUP;
		static inline ::flixel::addons::editors::tiled::TiledLayerType GROUP_dyn() { return GROUP; }
		static ::flixel::addons::editors::tiled::TiledLayerType IMAGE;
		static inline ::flixel::addons::editors::tiled::TiledLayerType IMAGE_dyn() { return IMAGE; }
		static ::flixel::addons::editors::tiled::TiledLayerType OBJECT;
		static inline ::flixel::addons::editors::tiled::TiledLayerType OBJECT_dyn() { return OBJECT; }
		static ::flixel::addons::editors::tiled::TiledLayerType TILE;
		static inline ::flixel::addons::editors::tiled::TiledLayerType TILE_dyn() { return TILE; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled

#endif /* INCLUDED_flixel_addons_editors_tiled_TiledLayerType */ 
