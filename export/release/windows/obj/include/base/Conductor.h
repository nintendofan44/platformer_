#ifndef INCLUDED_base_Conductor
#define INCLUDED_base_Conductor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f7848762756b13f0_29_new)
HX_DECLARE_CLASS1(base,Conductor)

namespace base{


class HXCPP_CLASS_ATTRIBUTES Conductor_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Conductor_obj OBJ_;
		Conductor_obj();

	public:
		enum { _hx_ClassId = 0x1d0a31d6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="base.Conductor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"base.Conductor"); }

		inline static ::hx::ObjectPtr< Conductor_obj > __new() {
			::hx::ObjectPtr< Conductor_obj > __this = new Conductor_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Conductor_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Conductor_obj *__this = (Conductor_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Conductor_obj), false, "base.Conductor"));
			*(void **)__this = Conductor_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f7848762756b13f0_29_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Conductor_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Conductor",c7,77,a1,7b); }

		static void __boot();
		static Float bpm;
		static Float crochet;
		static Float stepCrochet;
		static Float songPosition;
		static Float lastSongPos;
		static Float offset;
		static ::Array< ::Dynamic> bpmChangeMap;
		static void mapBPMChanges( ::Dynamic song);
		static ::Dynamic mapBPMChanges_dyn();

		static void changeBPM(Float newBpm);
		static ::Dynamic changeBPM_dyn();

};

} // end namespace base

#endif /* INCLUDED_base_Conductor */ 
