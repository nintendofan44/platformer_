#ifndef INCLUDED___ASSET__flixel_flixel_ui_xml_default_popup_xml
#define INCLUDED___ASSET__flixel_flixel_ui_xml_default_popup_xml

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
HX_DECLARE_CLASS0(__ASSET__flixel_flixel_ui_xml_default_popup_xml)
HX_DECLARE_CLASS2(haxe,io,Bytes)



class HXCPP_CLASS_ATTRIBUTES __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj : public  ::haxe::io::Bytes_obj
{
	public:
		typedef  ::haxe::io::Bytes_obj super;
		typedef __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj OBJ_;
		__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj();

	public:
		enum { _hx_ClassId = 0x7aa12723 };

		void __construct( ::Dynamic length,::Array< unsigned char > bytesData);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="__ASSET__flixel_flixel_ui_xml_default_popup_xml")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"__ASSET__flixel_flixel_ui_xml_default_popup_xml"); }
		static ::hx::ObjectPtr< __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj > __new( ::Dynamic length,::Array< unsigned char > bytesData);
		static ::hx::ObjectPtr< __ASSET__flixel_flixel_ui_xml_default_popup_xml_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic length,::Array< unsigned char > bytesData);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~__ASSET__flixel_flixel_ui_xml_default_popup_xml_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("__ASSET__flixel_flixel_ui_xml_default_popup_xml",e3,41,dd,c1); }

		static void __boot();
		static ::String resourceName;
};


#endif /* INCLUDED___ASSET__flixel_flixel_ui_xml_default_popup_xml */ 
