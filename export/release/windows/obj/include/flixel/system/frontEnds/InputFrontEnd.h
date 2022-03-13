#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#define INCLUDED_flixel_system_frontEnds_InputFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKeyboard)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouse)
HX_DECLARE_CLASS3(flixel,input,touch,FlxTouchManager)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,InputFrontEnd)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES InputFrontEnd_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InputFrontEnd_obj OBJ_;
		InputFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x2c30b64a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.InputFrontEnd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.frontEnds.InputFrontEnd"); }
		static ::hx::ObjectPtr< InputFrontEnd_obj > __new();
		static ::hx::ObjectPtr< InputFrontEnd_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InputFrontEnd_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InputFrontEnd",bc,9c,cc,29); }

		 ::flixel::input::gamepad::FlxGamepadManager add_flixel_input_gamepad_FlxGamepadManager( ::flixel::input::gamepad::FlxGamepadManager Input);
		::Dynamic add_flixel_input_gamepad_FlxGamepadManager_dyn();

		 ::flixel::input::touch::FlxTouchManager add_flixel_input_touch_FlxTouchManager( ::flixel::input::touch::FlxTouchManager Input);
		::Dynamic add_flixel_input_touch_FlxTouchManager_dyn();

		 ::flixel::input::mouse::FlxMouse replace_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Old, ::flixel::input::mouse::FlxMouse New);
		::Dynamic replace_flixel_input_mouse_FlxMouse_dyn();

		 ::flixel::input::mouse::FlxMouse add_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Input);
		::Dynamic add_flixel_input_mouse_FlxMouse_dyn();

		 ::flixel::input::keyboard::FlxKeyboard add_flixel_input_keyboard_FlxKeyboard( ::flixel::input::keyboard::FlxKeyboard Input);
		::Dynamic add_flixel_input_keyboard_FlxKeyboard_dyn();

		::Array< ::Dynamic> list;
		bool resetOnStateSwitch;
		void reset();
		::Dynamic reset_dyn();

		void update();
		::Dynamic update_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		void onStateSwitch();
		::Dynamic onStateSwitch_dyn();

		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_InputFrontEnd */ 
