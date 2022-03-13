#ifndef INCLUDED_flixel_addons_ui_FontFixer
#define INCLUDED_flixel_addons_ui_FontFixer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,ui,FontFixer)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FontFixer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FontFixer_obj OBJ_;
		FontFixer_obj();

	public:
		enum { _hx_ClassId = 0x7ef53788 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.addons.ui.FontFixer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.addons.ui.FontFixer"); }

		inline static ::hx::ObjectPtr< FontFixer_obj > __new() {
			::hx::ObjectPtr< FontFixer_obj > __this = new FontFixer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FontFixer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			FontFixer_obj *__this = (FontFixer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FontFixer_obj), false, "flixel.addons.ui.FontFixer"));
			*(void **)__this = FontFixer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FontFixer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FontFixer",13,7d,50,4e); }

		static  ::haxe::ds::StringMap name2File;
		static void init();
		static ::Dynamic init_dyn();

		static ::String fix(::String font);
		static ::Dynamic fix_dyn();

		static ::String add(::String file,::String name);
		static ::Dynamic add_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FontFixer */ 
