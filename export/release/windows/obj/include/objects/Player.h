#ifndef INCLUDED_objects_Player
#define INCLUDED_objects_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(objects,Player)

namespace objects{


class HXCPP_CLASS_ATTRIBUTES Player_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef Player_obj OBJ_;
		Player_obj();

	public:
		enum { _hx_ClassId = 0x45a16455 };

		void __construct(Float xx,Float yy,int skin);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="objects.Player")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"objects.Player"); }
		static ::hx::ObjectPtr< Player_obj > __new(Float xx,Float yy,int skin);
		static ::hx::ObjectPtr< Player_obj > __alloc(::hx::Ctx *_hx_ctx,Float xx,Float yy,int skin);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Player",81,5f,4d,6c); }

		int MAX_SPEED_X;
		int ACCELERATION_X;
		int DRAG_X;
		int MAX_SPEED_Y;
		int ACCELERATION_Y;
		int DRAG_Y;
		Float jumpTimer;
		bool isJumping;
		bool left;
		bool right;
		bool jump;
		bool get_left();
		::Dynamic get_left_dyn();

		bool get_right();
		::Dynamic get_right_dyn();

		bool get_jump();
		::Dynamic get_jump_dyn();

		void update(Float elapsed);

		void jumpMechanic( ::Dynamic elapsed);
		::Dynamic jumpMechanic_dyn();

		void movementMechanic( ::Dynamic elapsed);
		::Dynamic movementMechanic_dyn();

		void loadSkin(int skin);
		::Dynamic loadSkin_dyn();

};

} // end namespace objects

#endif /* INCLUDED_objects_Player */ 
