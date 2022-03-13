#ifndef INCLUDED_ui_CustomFadeTransition
#define INCLUDED_ui_CustomFadeTransition

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_states_MusicBeatSubstate
#include <states/MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,MusicBeatSubstate)
HX_DECLARE_CLASS1(ui,CustomFadeTransition)

namespace ui{


class HXCPP_CLASS_ATTRIBUTES CustomFadeTransition_obj : public  ::states::MusicBeatSubstate_obj
{
	public:
		typedef  ::states::MusicBeatSubstate_obj super;
		typedef CustomFadeTransition_obj OBJ_;
		CustomFadeTransition_obj();

	public:
		enum { _hx_ClassId = 0x371d00b6 };

		void __construct(Float duration,bool isTransIn);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ui.CustomFadeTransition")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ui.CustomFadeTransition"); }
		static ::hx::ObjectPtr< CustomFadeTransition_obj > __new(Float duration,bool isTransIn);
		static ::hx::ObjectPtr< CustomFadeTransition_obj > __alloc(::hx::Ctx *_hx_ctx,Float duration,bool isTransIn);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CustomFadeTransition_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CustomFadeTransition",e2,b5,f1,00); }

		static  ::Dynamic finishCallback;
		static Dynamic finishCallback_dyn() { return finishCallback;}
		static  ::flixel::FlxCamera nextCamera;
		 ::flixel::tweens::FlxTween leTween;
		bool isTransIn;
		 ::flixel::FlxSprite transBlack;
		 ::flixel::FlxSprite transGradient;
		void update(Float elapsed);

		void destroy();

};

} // end namespace ui

#endif /* INCLUDED_ui_CustomFadeTransition */ 
