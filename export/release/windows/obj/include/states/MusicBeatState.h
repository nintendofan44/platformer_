#ifndef INCLUDED_states_MusicBeatState
#define INCLUDED_states_MusicBeatState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,MusicBeatState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES MusicBeatState_obj : public  ::flixel::addons::ui::FlxUIState_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIState_obj super;
		typedef MusicBeatState_obj OBJ_;
		MusicBeatState_obj();

	public:
		enum { _hx_ClassId = 0x3369ae9c };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.MusicBeatState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.MusicBeatState"); }
		static ::hx::ObjectPtr< MusicBeatState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< MusicBeatState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MusicBeatState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MusicBeatState",76,df,84,5d); }

		static void switchState( ::flixel::FlxState nextState);
		static ::Dynamic switchState_dyn();

		static void resetState();
		static ::Dynamic resetState_dyn();

		static  ::states::MusicBeatState getState();
		static ::Dynamic getState_dyn();

		Float lastBeat;
		Float lastStep;
		int curStep;
		int curBeat;
		virtual void create();

		virtual void update(Float elapsed);

		void updateBeat();
		::Dynamic updateBeat_dyn();

		void updateCurStep();
		::Dynamic updateCurStep_dyn();

		virtual void stepHit();
		::Dynamic stepHit_dyn();

		virtual void beatHit();
		::Dynamic beatHit_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_MusicBeatState */ 
