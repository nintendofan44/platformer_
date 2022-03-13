#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_states_MusicBeatSubstate
#include <states/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_ui_CustomFadeTransition
#include <ui/CustomFadeTransition.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7267642a2b298362_19_new,"ui.CustomFadeTransition","new",0x40afd12e,"ui.CustomFadeTransition.new","ui/CustomFadeTransition.hx",19,0x1be1ce21)
static const int _hx_array_data_8910623c_1[] = {
	(int)0,(int)-16777216,
};
static const int _hx_array_data_8910623c_2[] = {
	(int)-16777216,(int)0,
};
HX_DEFINE_STACK_FRAME(_hx_pos_7267642a2b298362_49_new,"ui.CustomFadeTransition","new",0x40afd12e,"ui.CustomFadeTransition.new","ui/CustomFadeTransition.hx",49,0x1be1ce21)
HX_DEFINE_STACK_FRAME(_hx_pos_7267642a2b298362_57_new,"ui.CustomFadeTransition","new",0x40afd12e,"ui.CustomFadeTransition.new","ui/CustomFadeTransition.hx",57,0x1be1ce21)
HX_LOCAL_STACK_FRAME(_hx_pos_7267642a2b298362_71_update,"ui.CustomFadeTransition","update",0x705379fb,"ui.CustomFadeTransition.update","ui/CustomFadeTransition.hx",71,0x1be1ce21)
HX_LOCAL_STACK_FRAME(_hx_pos_7267642a2b298362_85_destroy,"ui.CustomFadeTransition","destroy",0x5f6dacc8,"ui.CustomFadeTransition.destroy","ui/CustomFadeTransition.hx",85,0x1be1ce21)
namespace ui{

void CustomFadeTransition_obj::__construct(Float duration,bool isTransIn){
            	HX_GC_STACKFRAME(&_hx_pos_7267642a2b298362_19_new)
HXLINE(  23)		this->isTransIn = false;
HXLINE(  21)		this->leTween = null();
HXLINE(  27)		 ::ui::CustomFadeTransition _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  28)		super::__construct();
HXLINE(  30)		this->isTransIn = isTransIn;
HXLINE(  31)		Float zoom = ::Math_obj::max(((Float)0.05),::Math_obj::min(( (Float)(1) ),::flixel::FlxG_obj::camera->zoom));
HXLINE(  32)		int width = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) / zoom));
HXLINE(  33)		int height = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) / zoom));
HXLINE(  34)		::Array< int > _hx_tmp;
HXDLIN(  34)		if (isTransIn) {
HXLINE(  34)			_hx_tmp = ::Array_obj< int >::fromData( _hx_array_data_8910623c_1,2);
            		}
            		else {
HXLINE(  34)			_hx_tmp = ::Array_obj< int >::fromData( _hx_array_data_8910623c_2,2);
            		}
HXDLIN(  34)		this->transGradient = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(width,height,_hx_tmp,null(),null(),null());
HXLINE(  35)		this->transGradient->scrollFactor->set(null(),null());
HXLINE(  36)		this->add(this->transGradient);
HXLINE(  38)		this->transBlack =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(width,(height + 400),-16777216,null(),null());
HXLINE(  39)		this->transBlack->scrollFactor->set(null(),null());
HXLINE(  40)		this->add(this->transBlack);
HXLINE(  42)		 ::flixel::FlxSprite fh = this->transGradient;
HXDLIN(  42)		fh->set_x((fh->x - (( (Float)((width - ::flixel::FlxG_obj::width)) ) / ( (Float)(2) ))));
HXLINE(  43)		this->transBlack->set_x(this->transGradient->x);
HXLINE(  45)		if (isTransIn) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::ui::CustomFadeTransition,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_7267642a2b298362_49_new)
HXLINE(  49)				_gthis->close();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  46)			 ::flixel::FlxSprite _hx_tmp = this->transGradient;
HXDLIN(  46)			Float _hx_tmp1 = this->transBlack->y;
HXDLIN(  46)			_hx_tmp->set_y((_hx_tmp1 - this->transBlack->get_height()));
HXLINE(  47)			 ::flixel::FlxSprite _hx_tmp2 = this->transGradient;
HXDLIN(  47)			Float _hx_tmp3 = (this->transGradient->get_height() + 50);
HXDLIN(  47)			::flixel::tweens::FlxTween_obj::tween(_hx_tmp2, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),_hx_tmp3)),duration, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_7267642a2b298362_57_new)
HXLINE(  57)				if (::hx::IsNotNull( ::ui::CustomFadeTransition_obj::finishCallback )) {
HXLINE(  58)					::ui::CustomFadeTransition_obj::finishCallback();
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  53)			 ::flixel::FlxSprite _hx_tmp = this->transGradient;
HXDLIN(  53)			_hx_tmp->set_y(-(this->transGradient->get_height()));
HXLINE(  54)			 ::flixel::FlxSprite _hx_tmp1 = this->transBlack;
HXDLIN(  54)			Float _hx_tmp2 = this->transGradient->y;
HXDLIN(  54)			_hx_tmp1->set_y(((_hx_tmp2 - this->transBlack->get_height()) + 50));
HXLINE(  55)			 ::flixel::FlxSprite _hx_tmp3 = this->transGradient;
HXDLIN(  55)			Float _hx_tmp4 = (this->transGradient->get_height() + 50);
HXDLIN(  55)			this->leTween = ::flixel::tweens::FlxTween_obj::tween(_hx_tmp3, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),_hx_tmp4)),duration, ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1()))));
            		}
HXLINE(  64)		if (::hx::IsNotNull( ::ui::CustomFadeTransition_obj::nextCamera )) {
HXLINE(  65)			this->transBlack->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::ui::CustomFadeTransition_obj::nextCamera));
HXLINE(  66)			this->transGradient->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::ui::CustomFadeTransition_obj::nextCamera));
            		}
HXLINE(  68)		::ui::CustomFadeTransition_obj::nextCamera = null();
            	}

Dynamic CustomFadeTransition_obj::__CreateEmpty() { return new CustomFadeTransition_obj; }

void *CustomFadeTransition_obj::_hx_vtable = 0;

Dynamic CustomFadeTransition_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomFadeTransition_obj > _hx_result = new CustomFadeTransition_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CustomFadeTransition_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5661ffbf) {
		if (inClassId<=(int)0x371d00b6) {
			if (inClassId<=(int)0x157d02ca) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x157d02ca;
			} else {
				return inClassId==(int)0x371d00b6;
			}
		} else {
			return inClassId==(int)0x5661ffbf;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void CustomFadeTransition_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7267642a2b298362_71_update)
HXLINE(  72)		if (this->isTransIn) {
HXLINE(  73)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  73)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  73)			_hx_tmp->set_y((_hx_tmp1 + this->transGradient->get_height()));
            		}
            		else {
HXLINE(  75)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  75)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  75)			_hx_tmp->set_y((_hx_tmp1 - this->transBlack->get_height()));
            		}
HXLINE(  77)		this->super::update(elapsed);
HXLINE(  78)		if (this->isTransIn) {
HXLINE(  79)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  79)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  79)			_hx_tmp->set_y((_hx_tmp1 + this->transGradient->get_height()));
            		}
            		else {
HXLINE(  81)			 ::flixel::FlxSprite _hx_tmp = this->transBlack;
HXDLIN(  81)			Float _hx_tmp1 = this->transGradient->y;
HXDLIN(  81)			_hx_tmp->set_y((_hx_tmp1 - this->transBlack->get_height()));
            		}
            	}


void CustomFadeTransition_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7267642a2b298362_85_destroy)
HXLINE(  86)		if (::hx::IsNotNull( this->leTween )) {
HXLINE(  87)			::ui::CustomFadeTransition_obj::finishCallback();
HXLINE(  88)			this->leTween->cancel();
            		}
HXLINE(  90)		this->super::destroy();
            	}


 ::Dynamic CustomFadeTransition_obj::finishCallback;

 ::flixel::FlxCamera CustomFadeTransition_obj::nextCamera;


::hx::ObjectPtr< CustomFadeTransition_obj > CustomFadeTransition_obj::__new(Float duration,bool isTransIn) {
	::hx::ObjectPtr< CustomFadeTransition_obj > __this = new CustomFadeTransition_obj();
	__this->__construct(duration,isTransIn);
	return __this;
}

::hx::ObjectPtr< CustomFadeTransition_obj > CustomFadeTransition_obj::__alloc(::hx::Ctx *_hx_ctx,Float duration,bool isTransIn) {
	CustomFadeTransition_obj *__this = (CustomFadeTransition_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomFadeTransition_obj), true, "ui.CustomFadeTransition"));
	*(void **)__this = CustomFadeTransition_obj::_hx_vtable;
	__this->__construct(duration,isTransIn);
	return __this;
}

CustomFadeTransition_obj::CustomFadeTransition_obj()
{
}

void CustomFadeTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CustomFadeTransition);
	HX_MARK_MEMBER_NAME(leTween,"leTween");
	HX_MARK_MEMBER_NAME(isTransIn,"isTransIn");
	HX_MARK_MEMBER_NAME(transBlack,"transBlack");
	HX_MARK_MEMBER_NAME(transGradient,"transGradient");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CustomFadeTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leTween,"leTween");
	HX_VISIT_MEMBER_NAME(isTransIn,"isTransIn");
	HX_VISIT_MEMBER_NAME(transBlack,"transBlack");
	HX_VISIT_MEMBER_NAME(transGradient,"transGradient");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CustomFadeTransition_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leTween") ) { return ::hx::Val( leTween ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isTransIn") ) { return ::hx::Val( isTransIn ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transBlack") ) { return ::hx::Val( transBlack ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transGradient") ) { return ::hx::Val( transGradient ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CustomFadeTransition_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nextCamera") ) { outValue = ( nextCamera ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { outValue = ( finishCallback ); return true; }
	}
	return false;
}

::hx::Val CustomFadeTransition_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leTween") ) { leTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isTransIn") ) { isTransIn=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transBlack") ) { transBlack=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transGradient") ) { transGradient=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CustomFadeTransition_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nextCamera") ) { nextCamera=ioValue.Cast<  ::flixel::FlxCamera >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void CustomFadeTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("leTween",32,a5,b7,99));
	outFields->push(HX_("isTransIn",63,af,52,93));
	outFields->push(HX_("transBlack",77,1c,bf,de));
	outFields->push(HX_("transGradient",38,f6,20,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CustomFadeTransition_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CustomFadeTransition_obj,leTween),HX_("leTween",32,a5,b7,99)},
	{::hx::fsBool,(int)offsetof(CustomFadeTransition_obj,isTransIn),HX_("isTransIn",63,af,52,93)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CustomFadeTransition_obj,transBlack),HX_("transBlack",77,1c,bf,de)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CustomFadeTransition_obj,transGradient),HX_("transGradient",38,f6,20,1d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CustomFadeTransition_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CustomFadeTransition_obj::finishCallback,HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(void *) &CustomFadeTransition_obj::nextCamera,HX_("nextCamera",f8,f7,bd,6c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CustomFadeTransition_obj_sMemberFields[] = {
	HX_("leTween",32,a5,b7,99),
	HX_("isTransIn",63,af,52,93),
	HX_("transBlack",77,1c,bf,de),
	HX_("transGradient",38,f6,20,1d),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void CustomFadeTransition_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CustomFadeTransition_obj::finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(CustomFadeTransition_obj::nextCamera,"nextCamera");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CustomFadeTransition_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CustomFadeTransition_obj::finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(CustomFadeTransition_obj::nextCamera,"nextCamera");
};

#endif

::hx::Class CustomFadeTransition_obj::__mClass;

static ::String CustomFadeTransition_obj_sStaticFields[] = {
	HX_("finishCallback",38,a1,bc,b4),
	HX_("nextCamera",f8,f7,bd,6c),
	::String(null())
};

void CustomFadeTransition_obj::__register()
{
	CustomFadeTransition_obj _hx_dummy;
	CustomFadeTransition_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ui.CustomFadeTransition",3c,62,10,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CustomFadeTransition_obj::__GetStatic;
	__mClass->mSetStaticField = &CustomFadeTransition_obj::__SetStatic;
	__mClass->mMarkFunc = CustomFadeTransition_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CustomFadeTransition_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CustomFadeTransition_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CustomFadeTransition_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CustomFadeTransition_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomFadeTransition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomFadeTransition_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace ui
