#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ff3326fd807048e_32_new,"flixel.addons.editors.tiled.TiledLayer","new",0x018fcf96,"flixel.addons.editors.tiled.TiledLayer.new","flixel/addons/editors/tiled/TiledLayer.hx",32,0x30daee78)
HX_LOCAL_STACK_FRAME(_hx_pos_1ff3326fd807048e_46_loadProperties,"flixel.addons.editors.tiled.TiledLayer","loadProperties",0x66f78643,"flixel.addons.editors.tiled.TiledLayer.loadProperties","flixel/addons/editors/tiled/TiledLayer.hx",46,0x30daee78)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledLayer_obj::__construct( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent){
            	HX_GC_STACKFRAME(&_hx_pos_1ff3326fd807048e_32_new)
HXLINE(  33)		this->properties =  ::flixel::addons::editors::tiled::TiledPropertySet_obj::__alloc( HX_CTX );
HXLINE(  34)		this->map = parent;
HXLINE(  35)		this->name = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("name",4b,72,ff,48));
HXLINE(  36)		bool _hx_tmp;
HXDLIN(  36)		bool _hx_tmp1;
HXDLIN(  36)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("visible",72,78,24,a3))) {
HXLINE(  36)			_hx_tmp1 = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("visible",72,78,24,a3)) == HX_("0",30,00,00,00));
            		}
            		else {
HXLINE(  36)			_hx_tmp1 = false;
            		}
HXDLIN(  36)		if (_hx_tmp1) {
HXLINE(  36)			_hx_tmp = false;
            		}
            		else {
HXLINE(  36)			_hx_tmp = true;
            		}
HXDLIN(  36)		this->visible = _hx_tmp;
HXLINE(  37)		Float _hx_tmp2;
HXDLIN(  37)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("opacity",cb,5d,65,eb))) {
HXLINE(  37)			_hx_tmp2 = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("opacity",cb,5d,65,eb)));
            		}
            		else {
HXLINE(  37)			_hx_tmp2 = ((Float)1.0);
            		}
HXDLIN(  37)		this->opacity = _hx_tmp2;
HXLINE(  38)		Float _hx_tmp3;
HXDLIN(  38)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("offsetx",85,09,65,d7))) {
HXLINE(  38)			_hx_tmp3 = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("offsetx",85,09,65,d7)));
            		}
            		else {
HXLINE(  38)			_hx_tmp3 = ((Float)0.0);
            		}
HXDLIN(  38)		this->offsetX = _hx_tmp3;
HXLINE(  39)		Float _hx_tmp4;
HXDLIN(  39)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("offsety",86,09,65,d7))) {
HXLINE(  39)			_hx_tmp4 = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("offsety",86,09,65,d7)));
            		}
            		else {
HXLINE(  39)			_hx_tmp4 = ((Float)0.0);
            		}
HXDLIN(  39)		this->offsetY = _hx_tmp4;
HXLINE(  41)		this->loadProperties(source);
            	}

Dynamic TiledLayer_obj::__CreateEmpty() { return new TiledLayer_obj; }

void *TiledLayer_obj::_hx_vtable = 0;

Dynamic TiledLayer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiledLayer_obj > _hx_result = new TiledLayer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TiledLayer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4dd3cd1e;
}

void TiledLayer_obj::loadProperties( ::Xml source){
            	HX_STACKFRAME(&_hx_pos_1ff3326fd807048e_46_loadProperties)
HXDLIN(  46)		int _g = 0;
HXDLIN(  46)		::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(source,HX_("properties",f3,fb,0e,61));
HXDLIN(  46)		while((_g < _g1->length)){
HXDLIN(  46)			 ::Xml node = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN(  46)			_g = (_g + 1);
HXLINE(  48)			this->properties->extend(node);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,loadProperties,(void))


::hx::ObjectPtr< TiledLayer_obj > TiledLayer_obj::__new( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent) {
	::hx::ObjectPtr< TiledLayer_obj > __this = new TiledLayer_obj();
	__this->__construct(source,parent);
	return __this;
}

::hx::ObjectPtr< TiledLayer_obj > TiledLayer_obj::__alloc(::hx::Ctx *_hx_ctx, ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent) {
	TiledLayer_obj *__this = (TiledLayer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiledLayer_obj), true, "flixel.addons.editors.tiled.TiledLayer"));
	*(void **)__this = TiledLayer_obj::_hx_vtable;
	__this->__construct(source,parent);
	return __this;
}

TiledLayer_obj::TiledLayer_obj()
{
}

void TiledLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledLayer);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_END_CLASS();
}

void TiledLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
}

::hx::Val TiledLayer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return ::hx::Val( opacity ); }
		if (HX_FIELD_EQ(inName,"visible") ) { return ::hx::Val( visible ); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return ::hx::Val( properties ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadProperties") ) { return ::hx::Val( loadProperties_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiledLayer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::flixel::addons::editors::tiled::TiledMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::flixel::addons::editors::tiled::TiledLayerType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("map",9c,0a,53,00));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("opacity",cb,5d,65,eb));
	outFields->push(HX_("visible",72,78,24,a3));
	outFields->push(HX_("properties",f3,fb,0e,61));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiledLayer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::editors::tiled::TiledLayerType */ ,(int)offsetof(TiledLayer_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::flixel::addons::editors::tiled::TiledMap */ ,(int)offsetof(TiledLayer_obj,map),HX_("map",9c,0a,53,00)},
	{::hx::fsString,(int)offsetof(TiledLayer_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsFloat,(int)offsetof(TiledLayer_obj,opacity),HX_("opacity",cb,5d,65,eb)},
	{::hx::fsBool,(int)offsetof(TiledLayer_obj,visible),HX_("visible",72,78,24,a3)},
	{::hx::fsObject /*  ::flixel::addons::editors::tiled::TiledPropertySet */ ,(int)offsetof(TiledLayer_obj,properties),HX_("properties",f3,fb,0e,61)},
	{::hx::fsFloat,(int)offsetof(TiledLayer_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(TiledLayer_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TiledLayer_obj_sStaticStorageInfo = 0;
#endif

static ::String TiledLayer_obj_sMemberFields[] = {
	HX_("type",ba,f2,08,4d),
	HX_("map",9c,0a,53,00),
	HX_("name",4b,72,ff,48),
	HX_("opacity",cb,5d,65,eb),
	HX_("visible",72,78,24,a3),
	HX_("properties",f3,fb,0e,61),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("loadProperties",b9,05,c0,f7),
	::String(null()) };

::hx::Class TiledLayer_obj::__mClass;

void TiledLayer_obj::__register()
{
	TiledLayer_obj _hx_dummy;
	TiledLayer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.tiled.TiledLayer",a4,0c,a7,c6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiledLayer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiledLayer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledLayer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledLayer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
