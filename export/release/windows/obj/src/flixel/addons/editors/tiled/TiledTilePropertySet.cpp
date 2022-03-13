#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTilePropertySet
#include <flixel/addons/editors/tiled/TiledTilePropertySet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_89babae20dffc326_22_new,"flixel.addons.editors.tiled.TiledTilePropertySet","new",0x96943044,"flixel.addons.editors.tiled.TiledTilePropertySet.new","flixel/addons/editors/tiled/TiledTilePropertySet.hx",22,0xb74dff0a)
HX_LOCAL_STACK_FRAME(_hx_pos_89babae20dffc326_31_addAnimationFrame,"flixel.addons.editors.tiled.TiledTilePropertySet","addAnimationFrame",0x771c8f6e,"flixel.addons.editors.tiled.TiledTilePropertySet.addAnimationFrame","flixel/addons/editors/tiled/TiledTilePropertySet.hx",31,0xb74dff0a)
HX_LOCAL_STACK_FRAME(_hx_pos_89babae20dffc326_37_addTileObject,"flixel.addons.editors.tiled.TiledTilePropertySet","addTileObject",0x1a4442f2,"flixel.addons.editors.tiled.TiledTilePropertySet.addTileObject","flixel/addons/editors/tiled/TiledTilePropertySet.hx",37,0xb74dff0a)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledTilePropertySet_obj::__construct(int tileID){
            	HX_STACKFRAME(&_hx_pos_89babae20dffc326_22_new)
HXLINE(  23)		super::__construct();
HXLINE(  24)		this->tileID = tileID;
HXLINE(  25)		this->animationFrames = ::Array_obj< ::Dynamic>::__new();
HXLINE(  26)		this->tileObjects = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic TiledTilePropertySet_obj::__CreateEmpty() { return new TiledTilePropertySet_obj; }

void *TiledTilePropertySet_obj::_hx_vtable = 0;

Dynamic TiledTilePropertySet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiledTilePropertySet_obj > _hx_result = new TiledTilePropertySet_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TiledTilePropertySet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41535fe8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x41535fe8;
	} else {
		return inClassId==(int)0x4a3977f6;
	}
}

void TiledTilePropertySet_obj::addAnimationFrame(int tileID,Float duration){
            	HX_STACKFRAME(&_hx_pos_89babae20dffc326_31_addAnimationFrame)
HXDLIN(  31)		this->animationFrames->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("duration",54,0f,8e,14),duration)
            			->setFixed(1,HX_("tileID",89,b2,28,1e),tileID)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(TiledTilePropertySet_obj,addAnimationFrame,(void))

void TiledTilePropertySet_obj::addTileObject( ::flixel::addons::editors::tiled::TiledObject tileObject){
            	HX_STACKFRAME(&_hx_pos_89babae20dffc326_37_addTileObject)
HXDLIN(  37)		this->tileObjects->push(tileObject);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTilePropertySet_obj,addTileObject,(void))


::hx::ObjectPtr< TiledTilePropertySet_obj > TiledTilePropertySet_obj::__new(int tileID) {
	::hx::ObjectPtr< TiledTilePropertySet_obj > __this = new TiledTilePropertySet_obj();
	__this->__construct(tileID);
	return __this;
}

::hx::ObjectPtr< TiledTilePropertySet_obj > TiledTilePropertySet_obj::__alloc(::hx::Ctx *_hx_ctx,int tileID) {
	TiledTilePropertySet_obj *__this = (TiledTilePropertySet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiledTilePropertySet_obj), true, "flixel.addons.editors.tiled.TiledTilePropertySet"));
	*(void **)__this = TiledTilePropertySet_obj::_hx_vtable;
	__this->__construct(tileID);
	return __this;
}

TiledTilePropertySet_obj::TiledTilePropertySet_obj()
{
}

void TiledTilePropertySet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTilePropertySet);
	HX_MARK_MEMBER_NAME(tileID,"tileID");
	HX_MARK_MEMBER_NAME(animationFrames,"animationFrames");
	HX_MARK_MEMBER_NAME(tileObjects,"tileObjects");
	 ::flixel::addons::editors::tiled::TiledPropertySet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledTilePropertySet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileID,"tileID");
	HX_VISIT_MEMBER_NAME(animationFrames,"animationFrames");
	HX_VISIT_MEMBER_NAME(tileObjects,"tileObjects");
	 ::flixel::addons::editors::tiled::TiledPropertySet_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TiledTilePropertySet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { return ::hx::Val( tileID ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileObjects") ) { return ::hx::Val( tileObjects ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addTileObject") ) { return ::hx::Val( addTileObject_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationFrames") ) { return ::hx::Val( animationFrames ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addAnimationFrame") ) { return ::hx::Val( addAnimationFrame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiledTilePropertySet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileObjects") ) { tileObjects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"animationFrames") ) { animationFrames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTilePropertySet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tileID",89,b2,28,1e));
	outFields->push(HX_("animationFrames",ca,2d,82,bb));
	outFields->push(HX_("tileObjects",46,a7,b3,21));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiledTilePropertySet_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TiledTilePropertySet_obj,tileID),HX_("tileID",89,b2,28,1e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TiledTilePropertySet_obj,animationFrames),HX_("animationFrames",ca,2d,82,bb)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TiledTilePropertySet_obj,tileObjects),HX_("tileObjects",46,a7,b3,21)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TiledTilePropertySet_obj_sStaticStorageInfo = 0;
#endif

static ::String TiledTilePropertySet_obj_sMemberFields[] = {
	HX_("tileID",89,b2,28,1e),
	HX_("animationFrames",ca,2d,82,bb),
	HX_("tileObjects",46,a7,b3,21),
	HX_("addAnimationFrame",8a,a8,79,60),
	HX_("addTileObject",0e,9e,1f,e4),
	::String(null()) };

::hx::Class TiledTilePropertySet_obj::__mClass;

void TiledTilePropertySet_obj::__register()
{
	TiledTilePropertySet_obj _hx_dummy;
	TiledTilePropertySet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.tiled.TiledTilePropertySet",52,fe,25,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiledTilePropertySet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiledTilePropertySet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledTilePropertySet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledTilePropertySet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
