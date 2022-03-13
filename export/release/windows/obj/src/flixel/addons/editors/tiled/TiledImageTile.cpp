#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageTile
#include <flixel/addons/editors/tiled/TiledImageTile.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0cc80364e33fd596_23_new,"flixel.addons.editors.tiled.TiledImageTile","new",0xfa04df6e,"flixel.addons.editors.tiled.TiledImageTile.new","flixel/addons/editors/tiled/TiledImageTile.hx",23,0x0527e8a0)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledImageTile_obj::__construct( ::Xml Source){
            	HX_STACKFRAME(&_hx_pos_0cc80364e33fd596_23_new)
HXDLIN(  23)		int _g = 0;
HXDLIN(  23)		::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(Source,HX_("image",5b,1f,69,bd));
HXDLIN(  23)		while((_g < _g1->length)){
HXDLIN(  23)			 ::Xml img = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN(  23)			_g = (_g + 1);
HXLINE(  25)			this->width = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(img,HX_("width",06,b6,62,ca)));
HXLINE(  26)			this->height = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(img,HX_("height",e7,07,4c,02)));
HXLINE(  27)			this->source = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(img,HX_("source",db,b0,31,32));
            		}
            	}

Dynamic TiledImageTile_obj::__CreateEmpty() { return new TiledImageTile_obj; }

void *TiledImageTile_obj::_hx_vtable = 0;

Dynamic TiledImageTile_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiledImageTile_obj > _hx_result = new TiledImageTile_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TiledImageTile_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70b6bd92;
}


::hx::ObjectPtr< TiledImageTile_obj > TiledImageTile_obj::__new( ::Xml Source) {
	::hx::ObjectPtr< TiledImageTile_obj > __this = new TiledImageTile_obj();
	__this->__construct(Source);
	return __this;
}

::hx::ObjectPtr< TiledImageTile_obj > TiledImageTile_obj::__alloc(::hx::Ctx *_hx_ctx, ::Xml Source) {
	TiledImageTile_obj *__this = (TiledImageTile_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiledImageTile_obj), true, "flixel.addons.editors.tiled.TiledImageTile"));
	*(void **)__this = TiledImageTile_obj::_hx_vtable;
	__this->__construct(Source);
	return __this;
}

TiledImageTile_obj::TiledImageTile_obj()
{
}

void TiledImageTile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledImageTile);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_END_CLASS();
}

void TiledImageTile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(source,"source");
}

::hx::Val TiledImageTile_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"source") ) { return ::hx::Val( source ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiledImageTile_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledImageTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("source",db,b0,31,32));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiledImageTile_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TiledImageTile_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsFloat,(int)offsetof(TiledImageTile_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(TiledImageTile_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsString,(int)offsetof(TiledImageTile_obj,source),HX_("source",db,b0,31,32)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TiledImageTile_obj_sStaticStorageInfo = 0;
#endif

static ::String TiledImageTile_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("source",db,b0,31,32),
	::String(null()) };

::hx::Class TiledImageTile_obj::__mClass;

void TiledImageTile_obj::__register()
{
	TiledImageTile_obj _hx_dummy;
	TiledImageTile_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.tiled.TiledImageTile",7c,50,b1,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiledImageTile_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiledImageTile_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledImageTile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledImageTile_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
