#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledGroupLayer
#include <flixel/addons/editors/tiled/TiledGroupLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageLayer
#include <flixel/addons/editors/tiled/TiledImageLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayerType
#include <flixel/addons/editors/tiled/TiledLayerType.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectLayer
#include <flixel/addons/editors/tiled/TiledObjectLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileLayer
#include <flixel/addons/editors/tiled/TiledTileLayer.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_08581f5ec74ed482_17_new,"flixel.addons.editors.tiled.TiledGroupLayer","new",0x41ec2ed1,"flixel.addons.editors.tiled.TiledGroupLayer.new","flixel/addons/editors/tiled/TiledGroupLayer.hx",17,0x24c69721)
HX_LOCAL_STACK_FRAME(_hx_pos_08581f5ec74ed482_31_loadLayers,"flixel.addons.editors.tiled.TiledGroupLayer","loadLayers",0x747005f7,"flixel.addons.editors.tiled.TiledGroupLayer.loadLayers","flixel/addons/editors/tiled/TiledGroupLayer.hx",31,0x24c69721)
HX_LOCAL_STACK_FRAME(_hx_pos_08581f5ec74ed482_55_getLayer,"flixel.addons.editors.tiled.TiledGroupLayer","getLayer",0x813e394a,"flixel.addons.editors.tiled.TiledGroupLayer.getLayer","flixel/addons/editors/tiled/TiledGroupLayer.hx",55,0x24c69721)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledGroupLayer_obj::__construct( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent, ::haxe::ds::StringMap noLoadHash){
            	HX_GC_STACKFRAME(&_hx_pos_08581f5ec74ed482_17_new)
HXLINE(  20)		this->layerMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  19)		this->layers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  24)		super::__construct(source,parent);
HXLINE(  25)		this->type = ::flixel::addons::editors::tiled::TiledLayerType_obj::GROUP_dyn();
HXLINE(  26)		this->loadLayers(source,parent,noLoadHash);
            	}

Dynamic TiledGroupLayer_obj::__CreateEmpty() { return new TiledGroupLayer_obj; }

void *TiledGroupLayer_obj::_hx_vtable = 0;

Dynamic TiledGroupLayer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiledGroupLayer_obj > _hx_result = new TiledGroupLayer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TiledGroupLayer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4dd3cd1e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4dd3cd1e;
	} else {
		return inClassId==(int)0x688ef6c1;
	}
}

void TiledGroupLayer_obj::loadLayers( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent, ::haxe::ds::StringMap noLoadHash){
            	HX_GC_STACKFRAME(&_hx_pos_08581f5ec74ed482_31_loadLayers)
HXDLIN(  31)		 ::Dynamic el = source->elements();
HXDLIN(  31)		while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN(  31)			 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  33)			bool _hx_tmp;
HXDLIN(  33)			if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(el1,HX_("name",4b,72,ff,48))) {
HXLINE(  33)				_hx_tmp = noLoadHash->exists(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(el1,HX_("name",4b,72,ff,48)));
            			}
            			else {
HXLINE(  33)				_hx_tmp = false;
            			}
HXDLIN(  33)			if (_hx_tmp) {
HXLINE(  34)				continue;
            			}
HXLINE(  36)			 ::flixel::addons::editors::tiled::TiledLayer layer;
HXDLIN(  36)			::String _g;
HXDLIN(  36)			if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE(  36)				_g = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXLINE(  36)				if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE(  36)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN(  36)				_g = el1->nodeName;
            			}
HXDLIN(  36)			::String _hx_switch_0 = _g.toLowerCase();
            			if (  (_hx_switch_0==HX_("group",3f,b3,f4,99)) ){
HXLINE(  36)				layer =  ::flixel::addons::editors::tiled::TiledGroupLayer_obj::__alloc( HX_CTX ,el1,parent,noLoadHash);
HXDLIN(  36)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("imagelayer",96,d8,60,e8)) ){
HXLINE(  36)				layer =  ::flixel::addons::editors::tiled::TiledImageLayer_obj::__alloc( HX_CTX ,el1,parent);
HXDLIN(  36)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("layer",d1,81,c0,6f)) ){
HXLINE(  36)				layer =  ::flixel::addons::editors::tiled::TiledTileLayer_obj::__alloc( HX_CTX ,el1,parent);
HXDLIN(  36)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("objectgroup",20,60,f6,75)) ){
HXLINE(  36)				layer =  ::flixel::addons::editors::tiled::TiledObjectLayer_obj::__alloc( HX_CTX ,el1,parent);
HXDLIN(  36)				goto _hx_goto_2;
            			}
            			/* default */{
HXLINE(  36)				layer = null();
            			}
            			_hx_goto_2:;
HXLINE(  45)			if (::hx::IsNotNull( layer )) {
HXLINE(  47)				this->layers->push(layer);
HXLINE(  48)				this->layerMap->set(layer->name,layer);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(TiledGroupLayer_obj,loadLayers,(void))

 ::flixel::addons::editors::tiled::TiledLayer TiledGroupLayer_obj::getLayer(::String name){
            	HX_STACKFRAME(&_hx_pos_08581f5ec74ed482_55_getLayer)
HXDLIN(  55)		return ( ( ::flixel::addons::editors::tiled::TiledLayer)(this->layerMap->get(name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledGroupLayer_obj,getLayer,return )


::hx::ObjectPtr< TiledGroupLayer_obj > TiledGroupLayer_obj::__new( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent, ::haxe::ds::StringMap noLoadHash) {
	::hx::ObjectPtr< TiledGroupLayer_obj > __this = new TiledGroupLayer_obj();
	__this->__construct(source,parent,noLoadHash);
	return __this;
}

::hx::ObjectPtr< TiledGroupLayer_obj > TiledGroupLayer_obj::__alloc(::hx::Ctx *_hx_ctx, ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent, ::haxe::ds::StringMap noLoadHash) {
	TiledGroupLayer_obj *__this = (TiledGroupLayer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiledGroupLayer_obj), true, "flixel.addons.editors.tiled.TiledGroupLayer"));
	*(void **)__this = TiledGroupLayer_obj::_hx_vtable;
	__this->__construct(source,parent,noLoadHash);
	return __this;
}

TiledGroupLayer_obj::TiledGroupLayer_obj()
{
}

void TiledGroupLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledGroupLayer);
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(layerMap,"layerMap");
	 ::flixel::addons::editors::tiled::TiledLayer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledGroupLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(layerMap,"layerMap");
	 ::flixel::addons::editors::tiled::TiledLayer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TiledGroupLayer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { return ::hx::Val( layers ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"layerMap") ) { return ::hx::Val( layerMap ); }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return ::hx::Val( getLayer_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadLayers") ) { return ::hx::Val( loadLayers_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiledGroupLayer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"layerMap") ) { layerMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledGroupLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("layers",82,15,b1,58));
	outFields->push(HX_("layerMap",4b,79,26,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiledGroupLayer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TiledGroupLayer_obj,layers),HX_("layers",82,15,b1,58)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(TiledGroupLayer_obj,layerMap),HX_("layerMap",4b,79,26,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TiledGroupLayer_obj_sStaticStorageInfo = 0;
#endif

static ::String TiledGroupLayer_obj_sMemberFields[] = {
	HX_("layers",82,15,b1,58),
	HX_("layerMap",4b,79,26,b7),
	HX_("loadLayers",48,44,dc,0d),
	HX_("getLayer",5b,91,97,cf),
	::String(null()) };

::hx::Class TiledGroupLayer_obj::__mClass;

void TiledGroupLayer_obj::__register()
{
	TiledGroupLayer_obj _hx_dummy;
	TiledGroupLayer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.tiled.TiledGroupLayer",5f,72,fe,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiledGroupLayer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiledGroupLayer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledGroupLayer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledGroupLayer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
