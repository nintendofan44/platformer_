#ifndef INCLUDED_base_Section
#define INCLUDED_base_Section

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_efd17c28423a5039_15_new)
HX_DECLARE_CLASS1(base,Section)

namespace base{


class HXCPP_CLASS_ATTRIBUTES Section_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Section_obj OBJ_;
		Section_obj();

	public:
		enum { _hx_ClassId = 0x2613f614 };

		void __construct(::hx::Null< int >  __o_lengthInSteps);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="base.Section")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"base.Section"); }

		inline static ::hx::ObjectPtr< Section_obj > __new(::hx::Null< int >  __o_lengthInSteps) {
			::hx::ObjectPtr< Section_obj > __this = new Section_obj();
			__this->__construct(__o_lengthInSteps);
			return __this;
		}

		inline static ::hx::ObjectPtr< Section_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_lengthInSteps) {
			Section_obj *__this = (Section_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Section_obj), true, "base.Section"));
			*(void **)__this = Section_obj::_hx_vtable;
{
            		int lengthInSteps = __o_lengthInSteps.Default(16);
            	HX_STACKFRAME(&_hx_pos_efd17c28423a5039_15_new)
HXLINE(  21)		( ( ::base::Section)(__this) )->mustHitSection = true;
HXLINE(  20)		( ( ::base::Section)(__this) )->typeOfSection = 0;
HXLINE(  19)		( ( ::base::Section)(__this) )->lengthInSteps = 16;
HXLINE(  17)		( ( ::base::Section)(__this) )->sectionNotes = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  30)		( ( ::base::Section)(__this) )->lengthInSteps = lengthInSteps;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Section_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Section",c5,2d,29,2b); }

		static void __boot();
		static int COPYCAT;
		::cpp::VirtualArray sectionNotes;
		int lengthInSteps;
		int typeOfSection;
		bool mustHitSection;
};

} // end namespace base

#endif /* INCLUDED_base_Section */ 
