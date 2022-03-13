#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectLayer
#include <flixel/addons/editors/tiled/TiledObjectLayer.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_e42a345368be2532_22_new,"flixel.addons.editors.tiled.TiledObjectLayer","new",0x50dc6117,"flixel.addons.editors.tiled.TiledObjectLayer.new","flixel/addons/editors/tiled/TiledObjectLayer.hx",22,0xb63a8297)
HX_LOCAL_STACK_FRAME(_hx_pos_e42a345368be2532_32_loadObjects,"flixel.addons.editors.tiled.TiledObjectLayer","loadObjects",0x0117c705,"flixel.addons.editors.tiled.TiledObjectLayer.loadObjects","flixel/addons/editors/tiled/TiledObjectLayer.hx",32,0xb63a8297)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledObjectLayer_obj::__construct( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent){
            	HX_STACKFRAME(&_hx_pos_e42a345368be2532_22_new)
HXLINE(  23)		super::__construct(source,parent);
HXLINE(  24)		this->type = ::flixel::addons::editors::tiled::TiledLayerType_obj::OBJECT_dyn();
HXLINE(  25)		this->objects = ::Array_obj< ::Dynamic>::__new();
HXLINE(  26)		int _hx_tmp;
HXDLIN(  26)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("color",63,71,5c,4a))) {
HXLINE(  26)			_hx_tmp = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("color",63,71,5c,4a)))) );
            		}
            		else {
HXLINE(  26)			_hx_tmp = 0;
            		}
HXDLIN(  26)		this->color = _hx_tmp;
HXLINE(  27)		this->loadObjects(source);
            	}

Dynamic TiledObjectLayer_obj::__CreateEmpty() { return new TiledObjectLayer_obj; }

void *TiledObjectLayer_obj::_hx_vtable = 0;

Dynamic TiledObjectLayer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiledObjectLayer_obj > _hx_result = new TiledObjectLayer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TiledObjectLayer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4dd3cd1e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4dd3cd1e;
	} else {
		return inClassId==(int)0x5901e19f;
	}
}

void TiledObjectLayer_obj::loadObjects( ::Xml source){
            	HX_GC_STACKFRAME(&_hx_pos_e42a345368be2532_32_loadObjects)
HXDLIN(  32)		int _g = 0;
HXDLIN(  32)		::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(source,HX_("object",bf,7e,3f,15));
HXDLIN(  32)		while((_g < _g1->length)){
HXDLIN(  32)			 ::Xml node = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN(  32)			_g = (_g + 1);
HXLINE(  34)			::Array< ::Dynamic> _hx_tmp = this->objects;
HXDLIN(  34)			_hx_tmp->push( ::flixel::addons::editors::tiled::TiledObject_obj::__alloc( HX_CTX ,node,::hx::ObjectPtr<OBJ_>(this)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledObjectLayer_obj,loadObjects,(void))


::hx::ObjectPtr< TiledObjectLayer_obj > TiledObjectLayer_obj::__new( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent) {
	::hx::ObjectPtr< TiledObjectLayer_obj > __this = new TiledObjectLayer_obj();
	__this->__construct(source,parent);
	return __this;
}

::hx::ObjectPtr< TiledObjectLayer_obj > TiledObjectLayer_obj::__alloc(::hx::Ctx *_hx_ctx, ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent) {
	TiledObjectLayer_obj *__this = (TiledObjectLayer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiledObjectLayer_obj), true, "flixel.addons.editors.tiled.TiledObjectLayer"));
	*(void **)__this = TiledObjectLayer_obj::_hx_vtable;
	__this->__construct(source,parent);
	return __this;
}

TiledObjectLayer_obj::TiledObjectLayer_obj()
{
}

void TiledObjectLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObjectLayer);
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(color,"color");
	 ::flixel::addons::editors::tiled::TiledLayer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledObjectLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(color,"color");
	 ::flixel::addons::editors::tiled::TiledLayer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TiledObjectLayer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return ::hx::Val( objects ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadObjects") ) { return ::hx::Val( loadObjects_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiledObjectLayer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObjectLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("objects",d4,68,4f,82));
	outFields->push(HX_("color",63,71,5c,4a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiledObjectLayer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TiledObjectLayer_obj,objects),HX_("objects",d4,68,4f,82)},
	{::hx::fsInt,(int)offsetof(TiledObjectLayer_obj,color),HX_("color",63,71,5c,4a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TiledObjectLayer_obj_sStaticStorageInfo = 0;
#endif

static ::String TiledObjectLayer_obj_sMemberFields[] = {
	HX_("objects",d4,68,4f,82),
	HX_("color",63,71,5c,4a),
	HX_("loadObjects",4e,27,ed,52),
	::String(null()) };

::hx::Class TiledObjectLayer_obj::__mClass;

void TiledObjectLayer_obj::__register()
{
	TiledObjectLayer_obj _hx_dummy;
	TiledObjectLayer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.tiled.TiledObjectLayer",a5,89,8a,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiledObjectLayer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiledObjectLayer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledObjectLayer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledObjectLayer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
