#ifndef INCLUDED_helpers_Utilities
#define INCLUDED_helpers_Utilities

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(helpers,Utilities)

namespace helpers{


class HXCPP_CLASS_ATTRIBUTES Utilities_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Utilities_obj OBJ_;
		Utilities_obj();

	public:
		enum { _hx_ClassId = 0x363179e9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="helpers.Utilities")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"helpers.Utilities"); }

		inline static ::hx::ObjectPtr< Utilities_obj > __new() {
			::hx::ObjectPtr< Utilities_obj > __this = new Utilities_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Utilities_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Utilities_obj *__this = (Utilities_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Utilities_obj), false, "helpers.Utilities"));
			*(void **)__this = Utilities_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Utilities_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Utilities",aa,ee,eb,f3); }

		static int nextPower(int k);
		static ::Dynamic nextPower_dyn();

		static Float bound(Float value,Float min,Float max);
		static ::Dynamic bound_dyn();

		static void precacheSound(::String sound,::String library);
		static ::Dynamic precacheSound_dyn();

		static void browserLoad(::String site);
		static ::Dynamic browserLoad_dyn();

};

} // end namespace helpers

#endif /* INCLUDED_helpers_Utilities */ 
