#ifndef INCLUDED_states_ScoreSubstate
#define INCLUDED_states_ScoreSubstate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_states_MusicBeatSubstate
#include <states/MusicBeatSubstate.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(states,MusicBeatSubstate)
HX_DECLARE_CLASS1(states,ScoreSubstate)

namespace states{


class HXCPP_CLASS_ATTRIBUTES ScoreSubstate_obj : public  ::states::MusicBeatSubstate_obj
{
	public:
		typedef  ::states::MusicBeatSubstate_obj super;
		typedef ScoreSubstate_obj OBJ_;
		ScoreSubstate_obj();

	public:
		enum { _hx_ClassId = 0x0fb6e199 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.ScoreSubstate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.ScoreSubstate"); }
		static ::hx::ObjectPtr< ScoreSubstate_obj > __new();
		static ::hx::ObjectPtr< ScoreSubstate_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ScoreSubstate_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ScoreSubstate",e3,7d,f7,04); }

		void create();

		void update(Float elapsed);

		void beatHit();

		void stepHit();

};

} // end namespace states

#endif /* INCLUDED_states_ScoreSubstate */ 
