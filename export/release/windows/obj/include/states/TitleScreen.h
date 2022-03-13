#ifndef INCLUDED_states_TitleScreen
#define INCLUDED_states_TitleScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_states_MusicBeatState
#include <states/MusicBeatState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,MusicBeatState)
HX_DECLARE_CLASS1(states,TitleScreen)

namespace states{


class HXCPP_CLASS_ATTRIBUTES TitleScreen_obj : public  ::states::MusicBeatState_obj
{
	public:
		typedef  ::states::MusicBeatState_obj super;
		typedef TitleScreen_obj OBJ_;
		TitleScreen_obj();

	public:
		enum { _hx_ClassId = 0x4cce7c1e };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.TitleScreen")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.TitleScreen"); }
		static ::hx::ObjectPtr< TitleScreen_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< TitleScreen_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TitleScreen_obj();

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
		::String __ToString() const { return HX_("TitleScreen",04,9f,1b,c2); }

		static void __boot();
		static ::String state;
		static ::String gameName;
		static bool moved;
		 ::Dynamic sound;
		int curSelected;
		Float scroll;
		 ::flixel::FlxSprite bg;
		 ::flixel::text::FlxText title;
		 ::flixel::text::FlxText titleShadow;
		 ::flixel::text::FlxText titleOuterShadow;
		int titleSize;
		::Array< ::Dynamic> titleArray;
		::Array< ::String > buttonArray;
		::Array< ::Dynamic> anotherButtonArray;
		 ::flixel::FlxObject camFollowPos;
		bool enableCamScroll;
		void create();

		bool canClick;
		bool isUsingMouse;
		void update(Float elapsed);

		void beatHit();

		void stepHit();

		bool selected;
		void selectButton();
		::Dynamic selectButton_dyn();

		void goToState();
		::Dynamic goToState_dyn();

		void changeItem(::hx::Null< int >  huh);
		::Dynamic changeItem_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_TitleScreen */ 
