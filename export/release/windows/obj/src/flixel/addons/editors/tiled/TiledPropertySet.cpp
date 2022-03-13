#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
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
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f7469de85736df0a_20_new,"flixel.addons.editors.tiled.TiledPropertySet","new",0x0ee1ea52,"flixel.addons.editors.tiled.TiledPropertySet.new","flixel/addons/editors/tiled/TiledPropertySet.hx",20,0x279539bc)
HX_LOCAL_STACK_FRAME(_hx_pos_f7469de85736df0a_25_get,"flixel.addons.editors.tiled.TiledPropertySet","get",0x0edc9a88,"flixel.addons.editors.tiled.TiledPropertySet.get","flixel/addons/editors/tiled/TiledPropertySet.hx",25,0x279539bc)
HX_LOCAL_STACK_FRAME(_hx_pos_f7469de85736df0a_30_contains,"flixel.addons.editors.tiled.TiledPropertySet","contains",0x498ff2ed,"flixel.addons.editors.tiled.TiledPropertySet.contains","flixel/addons/editors/tiled/TiledPropertySet.hx",30,0x279539bc)
HX_LOCAL_STACK_FRAME(_hx_pos_f7469de85736df0a_35_resolve,"flixel.addons.editors.tiled.TiledPropertySet","resolve",0x30670dde,"flixel.addons.editors.tiled.TiledPropertySet.resolve","flixel/addons/editors/tiled/TiledPropertySet.hx",35,0x279539bc)
HX_LOCAL_STACK_FRAME(_hx_pos_f7469de85736df0a_40_keysIterator,"flixel.addons.editors.tiled.TiledPropertySet","keysIterator",0x218013d0,"flixel.addons.editors.tiled.TiledPropertySet.keysIterator","flixel/addons/editors/tiled/TiledPropertySet.hx",40,0x279539bc)
HX_LOCAL_STACK_FRAME(_hx_pos_f7469de85736df0a_45_extend,"flixel.addons.editors.tiled.TiledPropertySet","extend",0xeb97fb28,"flixel.addons.editors.tiled.TiledPropertySet.extend","flixel/addons/editors/tiled/TiledPropertySet.hx",45,0x279539bc)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledPropertySet_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_f7469de85736df0a_20_new)
HXDLIN(  20)		this->keys =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic TiledPropertySet_obj::__CreateEmpty() { return new TiledPropertySet_obj; }

void *TiledPropertySet_obj::_hx_vtable = 0;

Dynamic TiledPropertySet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiledPropertySet_obj > _hx_result = new TiledPropertySet_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TiledPropertySet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a3977f6;
}

::String TiledPropertySet_obj::get(::String Key){
            	HX_STACKFRAME(&_hx_pos_f7469de85736df0a_25_get)
HXDLIN(  25)		return this->keys->get_string(Key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,get,return )

bool TiledPropertySet_obj::contains(::String Key){
            	HX_STACKFRAME(&_hx_pos_f7469de85736df0a_30_contains)
HXDLIN(  30)		return this->keys->exists(Key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,contains,return )

::String TiledPropertySet_obj::resolve(::String Name){
            	HX_STACKFRAME(&_hx_pos_f7469de85736df0a_35_resolve)
HXDLIN(  35)		return this->keys->get_string(Name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,resolve,return )

 ::Dynamic TiledPropertySet_obj::keysIterator(){
            	HX_STACKFRAME(&_hx_pos_f7469de85736df0a_40_keysIterator)
HXDLIN(  40)		return this->keys->keys();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TiledPropertySet_obj,keysIterator,return )

void TiledPropertySet_obj::extend( ::Xml Source){
            	HX_STACKFRAME(&_hx_pos_f7469de85736df0a_45_extend)
HXDLIN(  45)		int _g = 0;
HXDLIN(  45)		::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(Source,HX_("property",55,48,38,ac));
HXDLIN(  45)		while((_g < _g1->length)){
HXDLIN(  45)			 ::Xml prop = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN(  45)			_g = (_g + 1);
HXLINE(  47)			{
HXLINE(  47)				::Dynamic this1 = this->keys;
HXDLIN(  47)				::String key = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(prop,HX_("name",4b,72,ff,48));
HXDLIN(  47)				( ( ::haxe::ds::StringMap)(this1) )->set(key,::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(prop,HX_("value",71,7f,b8,31)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledPropertySet_obj,extend,(void))


::hx::ObjectPtr< TiledPropertySet_obj > TiledPropertySet_obj::__new() {
	::hx::ObjectPtr< TiledPropertySet_obj > __this = new TiledPropertySet_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TiledPropertySet_obj > TiledPropertySet_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TiledPropertySet_obj *__this = (TiledPropertySet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiledPropertySet_obj), true, "flixel.addons.editors.tiled.TiledPropertySet"));
	*(void **)__this = TiledPropertySet_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TiledPropertySet_obj::TiledPropertySet_obj()
{
}

void TiledPropertySet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledPropertySet);
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_END_CLASS();
}

void TiledPropertySet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keys,"keys");
}

::hx::Val TiledPropertySet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"extend") ) { return ::hx::Val( extend_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keysIterator") ) { return ::hx::Val( keysIterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiledPropertySet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledPropertySet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("keys",f4,e1,06,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiledPropertySet_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(TiledPropertySet_obj,keys),HX_("keys",f4,e1,06,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TiledPropertySet_obj_sStaticStorageInfo = 0;
#endif

static ::String TiledPropertySet_obj_sMemberFields[] = {
	HX_("keys",f4,e1,06,47),
	HX_("get",96,80,4e,00),
	HX_("contains",1f,5a,7b,2c),
	HX_("resolve",ec,12,60,67),
	HX_("keysIterator",02,fc,b3,65),
	HX_("extend",da,d1,1a,c7),
	::String(null()) };

::hx::Class TiledPropertySet_obj::__mClass;

void TiledPropertySet_obj::__register()
{
	TiledPropertySet_obj _hx_dummy;
	TiledPropertySet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.tiled.TiledPropertySet",60,19,2e,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiledPropertySet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiledPropertySet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledPropertySet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledPropertySet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
