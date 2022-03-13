#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayerType
#include <flixel/addons/editors/tiled/TiledLayerType.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

::flixel::addons::editors::tiled::TiledLayerType TiledLayerType_obj::GROUP;

::flixel::addons::editors::tiled::TiledLayerType TiledLayerType_obj::IMAGE;

::flixel::addons::editors::tiled::TiledLayerType TiledLayerType_obj::OBJECT;

::flixel::addons::editors::tiled::TiledLayerType TiledLayerType_obj::TILE;

bool TiledLayerType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GROUP",1f,eb,e2,17)) { outValue = TiledLayerType_obj::GROUP; return true; }
	if (inName==HX_("IMAGE",3b,57,57,3b)) { outValue = TiledLayerType_obj::IMAGE; return true; }
	if (inName==HX_("OBJECT",bf,2a,c2,c7)) { outValue = TiledLayerType_obj::OBJECT; return true; }
	if (inName==HX_("TILE",2e,93,bd,37)) { outValue = TiledLayerType_obj::TILE; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TiledLayerType_obj)

int TiledLayerType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("GROUP",1f,eb,e2,17)) return 3;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return 2;
	if (inName==HX_("OBJECT",bf,2a,c2,c7)) return 1;
	if (inName==HX_("TILE",2e,93,bd,37)) return 0;
	return super::__FindIndex(inName);
}

int TiledLayerType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("GROUP",1f,eb,e2,17)) return 0;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return 0;
	if (inName==HX_("OBJECT",bf,2a,c2,c7)) return 0;
	if (inName==HX_("TILE",2e,93,bd,37)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val TiledLayerType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("GROUP",1f,eb,e2,17)) return GROUP;
	if (inName==HX_("IMAGE",3b,57,57,3b)) return IMAGE;
	if (inName==HX_("OBJECT",bf,2a,c2,c7)) return OBJECT;
	if (inName==HX_("TILE",2e,93,bd,37)) return TILE;
	return super::__Field(inName,inCallProp);
}

static ::String TiledLayerType_obj_sStaticFields[] = {
	HX_("TILE",2e,93,bd,37),
	HX_("OBJECT",bf,2a,c2,c7),
	HX_("IMAGE",3b,57,57,3b),
	HX_("GROUP",1f,eb,e2,17),
	::String(null())
};

::hx::Class TiledLayerType_obj::__mClass;

Dynamic __Create_TiledLayerType_obj() { return new TiledLayerType_obj; }

void TiledLayerType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.editors.tiled.TiledLayerType",7e,4d,b6,1a), ::hx::TCanCast< TiledLayerType_obj >,TiledLayerType_obj_sStaticFields,0,
	&__Create_TiledLayerType_obj, &__Create,
	&super::__SGetClass(), &CreateTiledLayerType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TiledLayerType_obj::__GetStatic;
}

void TiledLayerType_obj::__boot()
{
GROUP = ::hx::CreateConstEnum< TiledLayerType_obj >(HX_("GROUP",1f,eb,e2,17),3);
IMAGE = ::hx::CreateConstEnum< TiledLayerType_obj >(HX_("IMAGE",3b,57,57,3b),2);
OBJECT = ::hx::CreateConstEnum< TiledLayerType_obj >(HX_("OBJECT",bf,2a,c2,c7),1);
TILE = ::hx::CreateConstEnum< TiledLayerType_obj >(HX_("TILE",2e,93,bd,37),0);
}


} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
