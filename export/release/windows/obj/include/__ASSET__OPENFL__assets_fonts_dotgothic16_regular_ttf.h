#ifndef INCLUDED___ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf
#define INCLUDED___ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
HX_DECLARE_CLASS0(__ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(openfl,text,Font)



class HXCPP_CLASS_ATTRIBUTES __ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf_obj : public  ::openfl::text::Font_obj
{
	public:
		typedef  ::openfl::text::Font_obj super;
		typedef __ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf_obj OBJ_;
		__ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf_obj();

	public:
		enum { _hx_ClassId = 0x7152b621 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="__ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"__ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf"); }
		static ::hx::ObjectPtr< __ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf_obj > __new();
		static ::hx::ObjectPtr< __ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~__ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("__ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf",71,70,c1,72); }

};


#endif /* INCLUDED___ASSET__OPENFL__assets_fonts_dotgothic16_regular_ttf */ 
