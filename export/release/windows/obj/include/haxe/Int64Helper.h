#ifndef INCLUDED_haxe_Int64Helper
#define INCLUDED_haxe_Int64Helper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
HX_DECLARE_CLASS1(haxe,Int64Helper)

namespace haxe{


class HXCPP_CLASS_ATTRIBUTES Int64Helper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Int64Helper_obj OBJ_;
		Int64Helper_obj();

	public:
		enum { _hx_ClassId = 0x03ea75b5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.Int64Helper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.Int64Helper"); }

		inline static ::hx::ObjectPtr< Int64Helper_obj > __new() {
			::hx::ObjectPtr< Int64Helper_obj > __this = new Int64Helper_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Int64Helper_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Int64Helper_obj *__this = (Int64Helper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Int64Helper_obj), false, "haxe.Int64Helper"));
			*(void **)__this = Int64Helper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Int64Helper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Int64Helper",1b,cf,b2,b0); }

		static  cpp::Int64Struct parseString(::String sParam);
		static ::Dynamic parseString_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Int64Helper */ 
