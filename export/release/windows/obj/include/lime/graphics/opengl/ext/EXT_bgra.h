#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_bgra
#define INCLUDED_lime_graphics_opengl_ext_EXT_bgra

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_46934636fcfe52a8_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_bgra)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_bgra_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_bgra_obj OBJ_;
		EXT_bgra_obj();

	public:
		enum { _hx_ClassId = 0x1eee6c9c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_bgra")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_bgra"); }

		inline static ::hx::ObjectPtr< EXT_bgra_obj > __new() {
			::hx::ObjectPtr< EXT_bgra_obj > __this = new EXT_bgra_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_bgra_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_bgra_obj *__this = (EXT_bgra_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_bgra_obj), false, "lime.graphics.opengl.ext.EXT_bgra"));
			*(void **)__this = EXT_bgra_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_46934636fcfe52a8_4_new)
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_bgra)(__this) )->BGRA_EXT = 32993;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_bgra)(__this) )->BGR_EXT = 32992;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_bgra_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_bgra",72,74,1a,40); }

		int BGR_EXT;
		int BGRA_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_bgra */ 
