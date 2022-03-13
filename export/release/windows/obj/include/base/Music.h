#ifndef INCLUDED_base_Music
#define INCLUDED_base_Music

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_af06bfa6d25363be_21_new)
HX_DECLARE_CLASS1(base,Music)

namespace base{


class HXCPP_CLASS_ATTRIBUTES Music_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Music_obj OBJ_;
		Music_obj();

	public:
		enum { _hx_ClassId = 0x77c90714 };

		void __construct(::String song,::Array< ::Dynamic> things,Float bpm);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="base.Music")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"base.Music"); }

		inline static ::hx::ObjectPtr< Music_obj > __new(::String song,::Array< ::Dynamic> things,Float bpm) {
			::hx::ObjectPtr< Music_obj > __this = new Music_obj();
			__this->__construct(song,things,bpm);
			return __this;
		}

		inline static ::hx::ObjectPtr< Music_obj > __alloc(::hx::Ctx *_hx_ctx,::String song,::Array< ::Dynamic> things,Float bpm) {
			Music_obj *__this = (Music_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Music_obj), true, "base.Music"));
			*(void **)__this = Music_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_af06bfa6d25363be_21_new)
HXLINE(  22)		( ( ::base::Music)(__this) )->song = song;
HXLINE(  23)		( ( ::base::Music)(__this) )->things = things;
HXLINE(  24)		( ( ::base::Music)(__this) )->bpm = bpm;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Music_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Music",85,40,88,a3); }

		::String song;
		::Array< ::Dynamic> things;
		Float bpm;
};

} // end namespace base

#endif /* INCLUDED_base_Music */ 
