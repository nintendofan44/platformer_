#ifndef INCLUDED_haxe_xml__Access_Access_Impl_
#define INCLUDED_haxe_xml__Access_Access_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(haxe,xml,_Access,Access_Impl_)

namespace haxe{
namespace xml{
namespace _Access{


class HXCPP_CLASS_ATTRIBUTES Access_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Access_Impl__obj OBJ_;
		Access_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2733f11a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.xml._Access.Access_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.xml._Access.Access_Impl_"); }

		inline static ::hx::ObjectPtr< Access_Impl__obj > __new() {
			::hx::ObjectPtr< Access_Impl__obj > __this = new Access_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Access_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Access_Impl__obj *__this = (Access_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Access_Impl__obj), false, "haxe.xml._Access.Access_Impl_"));
			*(void **)__this = Access_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Access_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Access_Impl_",64,f1,ff,c9); }

		static ::String get_innerData( ::Xml this1);
		static ::Dynamic get_innerData_dyn();

};

} // end namespace haxe
} // end namespace xml
} // end namespace _Access

#endif /* INCLUDED_haxe_xml__Access_Access_Impl_ */ 
