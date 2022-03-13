#ifndef INCLUDED_states_CourseState
#define INCLUDED_states_CourseState

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
HX_DECLARE_CLASS4(flixel,addons,editors,tiled,TiledMap)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Player)
HX_DECLARE_CLASS1(states,CourseState)
HX_DECLARE_CLASS1(states,MusicBeatState)

namespace states{


class HXCPP_CLASS_ATTRIBUTES CourseState_obj : public  ::states::MusicBeatState_obj
{
	public:
		typedef  ::states::MusicBeatState_obj super;
		typedef CourseState_obj OBJ_;
		CourseState_obj();

	public:
		enum { _hx_ClassId = 0x5bfc754c };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.CourseState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.CourseState"); }
		static ::hx::ObjectPtr< CourseState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< CourseState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CourseState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CourseState",16,8b,b4,22); }

		 ::flixel::group::FlxTypedGroup levelBounds;
		 ::objects::Player player;
		 ::flixel::group::FlxTypedGroup platformGroup;
		 ::flixel::group::FlxTypedGroup doorGroup;
		 ::flixel::group::FlxTypedGroup brickGroup;
		 ::flixel::group::FlxTypedGroup woodGroup;
		 ::flixel::group::FlxTypedGroup groundGroup;
		 ::flixel::group::FlxTypedGroup dirtGroup;
		void createCourse(::String levelName, ::Dynamic playerSpawn);
		::Dynamic createCourse_dyn();

		void generateDoors( ::flixel::addons::editors::tiled::TiledMap map);
		::Dynamic generateDoors_dyn();

		void generateBrickBlocks( ::flixel::addons::editors::tiled::TiledMap map);
		::Dynamic generateBrickBlocks_dyn();

		void generateWoodBlocks( ::flixel::addons::editors::tiled::TiledMap map);
		::Dynamic generateWoodBlocks_dyn();

		void generatePlatforms( ::flixel::addons::editors::tiled::TiledMap map);
		::Dynamic generatePlatforms_dyn();

		void generateFloor( ::flixel::addons::editors::tiled::TiledMap map);
		::Dynamic generateFloor_dyn();

		virtual void create();

		virtual void update(Float elapsed);

		virtual void beatHit();

		virtual void stepHit();

};

} // end namespace states

#endif /* INCLUDED_states_CourseState */ 
