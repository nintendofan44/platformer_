#ifndef INCLUDED_counters_FPS_Mem
#define INCLUDED_counters_FPS_Mem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
HX_DECLARE_CLASS1(counters,FPS_Mem)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace counters{


class HXCPP_CLASS_ATTRIBUTES FPS_Mem_obj : public  ::openfl::text::TextField_obj
{
	public:
		typedef  ::openfl::text::TextField_obj super;
		typedef FPS_Mem_obj OBJ_;
		FPS_Mem_obj();

	public:
		enum { _hx_ClassId = 0x7f849fac };

		void __construct(::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="counters.FPS_Mem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"counters.FPS_Mem"); }
		static ::hx::ObjectPtr< FPS_Mem_obj > __new(::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol);
		static ::hx::ObjectPtr< FPS_Mem_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_inX,::hx::Null< Float >  __o_inY,::hx::Null< int >  __o_inCol);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FPS_Mem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FPS_Mem",3f,87,b3,64); }

		::Array< Float > times;
		Float memPeak;
		void onEnter( ::openfl::events::Event _);
		::Dynamic onEnter_dyn();

};

} // end namespace counters

#endif /* INCLUDED_counters_FPS_Mem */ 
