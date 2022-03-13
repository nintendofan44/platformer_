#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_base_Conductor
#include <base/Conductor.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f7848762756b13f0_29_new,"base.Conductor","new",0xa853871c,"base.Conductor.new","base/Conductor.hx",29,0x0f674d55)
HX_LOCAL_STACK_FRAME(_hx_pos_f7848762756b13f0_33_mapBPMChanges,"base.Conductor","mapBPMChanges",0x4b10c35c,"base.Conductor.mapBPMChanges","base/Conductor.hx",33,0x0f674d55)
HX_LOCAL_STACK_FRAME(_hx_pos_f7848762756b13f0_60_changeBPM,"base.Conductor","changeBPM",0x1b67bb0b,"base.Conductor.changeBPM","base/Conductor.hx",60,0x0f674d55)
HX_LOCAL_STACK_FRAME(_hx_pos_f7848762756b13f0_19_boot,"base.Conductor","boot",0x98dbb1f6,"base.Conductor.boot","base/Conductor.hx",19,0x0f674d55)
HX_LOCAL_STACK_FRAME(_hx_pos_f7848762756b13f0_20_boot,"base.Conductor","boot",0x98dbb1f6,"base.Conductor.boot","base/Conductor.hx",20,0x0f674d55)
HX_LOCAL_STACK_FRAME(_hx_pos_f7848762756b13f0_21_boot,"base.Conductor","boot",0x98dbb1f6,"base.Conductor.boot","base/Conductor.hx",21,0x0f674d55)
HX_LOCAL_STACK_FRAME(_hx_pos_f7848762756b13f0_22_boot,"base.Conductor","boot",0x98dbb1f6,"base.Conductor.boot","base/Conductor.hx",22,0x0f674d55)
HX_LOCAL_STACK_FRAME(_hx_pos_f7848762756b13f0_24_boot,"base.Conductor","boot",0x98dbb1f6,"base.Conductor.boot","base/Conductor.hx",24,0x0f674d55)
HX_LOCAL_STACK_FRAME(_hx_pos_f7848762756b13f0_26_boot,"base.Conductor","boot",0x98dbb1f6,"base.Conductor.boot","base/Conductor.hx",26,0x0f674d55)
namespace base{

void Conductor_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f7848762756b13f0_29_new)
            	}

Dynamic Conductor_obj::__CreateEmpty() { return new Conductor_obj; }

void *Conductor_obj::_hx_vtable = 0;

Dynamic Conductor_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Conductor_obj > _hx_result = new Conductor_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Conductor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d0a31d6;
}

Float Conductor_obj::bpm;

Float Conductor_obj::crochet;

Float Conductor_obj::stepCrochet;

Float Conductor_obj::songPosition;

Float Conductor_obj::lastSongPos;

Float Conductor_obj::offset;

::Array< ::Dynamic> Conductor_obj::bpmChangeMap;

void Conductor_obj::mapBPMChanges( ::Dynamic song){
            	HX_STACKFRAME(&_hx_pos_f7848762756b13f0_33_mapBPMChanges)
HXLINE(  34)		::base::Conductor_obj::bpmChangeMap = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  36)		Float curBPM = ( (Float)(song->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
HXLINE(  37)		int totalSteps = 0;
HXLINE(  38)		Float totalPos = ( (Float)(0) );
HXLINE(  39)		{
HXLINE(  39)			int _g = 0;
HXDLIN(  39)			int _g1 = ( (::Array< ::Dynamic>)(song->__Field(HX_("things",c5,68,cd,88),::hx::paccDynamic)) )->length;
HXDLIN(  39)			while((_g < _g1)){
HXLINE(  39)				_g = (_g + 1);
HXDLIN(  39)				int i = (_g - 1);
HXLINE(  41)				bool _hx_tmp;
HXDLIN(  41)				if (( (bool)( ::Dynamic(song->__Field(HX_("things",c5,68,cd,88),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("changeBPM",4f,4f,f8,1d),::hx::paccDynamic)) )) {
HXLINE(  41)					_hx_tmp = ::hx::IsNotEq(  ::Dynamic(song->__Field(HX_("things",c5,68,cd,88),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic),curBPM );
            				}
            				else {
HXLINE(  41)					_hx_tmp = false;
            				}
HXDLIN(  41)				if (_hx_tmp) {
HXLINE(  43)					curBPM = ( (Float)( ::Dynamic(song->__Field(HX_("things",c5,68,cd,88),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
HXLINE(  44)					 ::Dynamic event =  ::Dynamic(::hx::Anon_obj::Create(3)
            						->setFixed(0,HX_("stepTime",79,75,25,a0),totalSteps)
            						->setFixed(1,HX_("bpm",df,be,4a,00),curBPM)
            						->setFixed(2,HX_("songTime",82,2a,d5,3a),totalPos));
HXLINE(  49)					::base::Conductor_obj::bpmChangeMap->push(event);
            				}
HXLINE(  52)				int deltaSteps = ( (int)( ::Dynamic(song->__Field(HX_("things",c5,68,cd,88),::hx::paccDynamic))->__GetItem(i)->__Field(HX_("lengthInSteps",3c,ed,41,db),::hx::paccDynamic)) );
HXLINE(  53)				totalSteps = (totalSteps + deltaSteps);
HXLINE(  54)				totalPos = (totalPos + ((((( (Float)(60) ) / curBPM) * ( (Float)(1000) )) / ( (Float)(4) )) * ( (Float)(deltaSteps) )));
            			}
            		}
HXLINE(  56)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  56)		::String _hx_tmp1 = (HX_("new BPM map BUDDY ",ff,cc,e3,2e) + ::Std_obj::string(::base::Conductor_obj::bpmChangeMap));
HXDLIN(  56)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/base/Conductor.hx",e1,2b,4e,52),56,HX_("base.Conductor",2a,09,0b,5e),HX_("mapBPMChanges",a0,c9,ba,4a)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,mapBPMChanges,(void))

void Conductor_obj::changeBPM(Float newBpm){
            	HX_STACKFRAME(&_hx_pos_f7848762756b13f0_60_changeBPM)
HXLINE(  61)		::base::Conductor_obj::bpm = newBpm;
HXLINE(  63)		::base::Conductor_obj::crochet = ((( (Float)(60) ) / ::base::Conductor_obj::bpm) * ( (Float)(1000) ));
HXLINE(  64)		::base::Conductor_obj::stepCrochet = (::base::Conductor_obj::crochet / ( (Float)(4) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Conductor_obj,changeBPM,(void))


Conductor_obj::Conductor_obj()
{
}

bool Conductor_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { outValue = ( bpm ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { outValue = ( offset ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"crochet") ) { outValue = ( crochet ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"changeBPM") ) { outValue = changeBPM_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stepCrochet") ) { outValue = ( stepCrochet ); return true; }
		if (HX_FIELD_EQ(inName,"lastSongPos") ) { outValue = ( lastSongPos ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"songPosition") ) { outValue = ( songPosition ); return true; }
		if (HX_FIELD_EQ(inName,"bpmChangeMap") ) { outValue = ( bpmChangeMap ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mapBPMChanges") ) { outValue = mapBPMChanges_dyn(); return true; }
	}
	return false;
}

bool Conductor_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { bpm=ioValue.Cast< Float >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=ioValue.Cast< Float >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"crochet") ) { crochet=ioValue.Cast< Float >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stepCrochet") ) { stepCrochet=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"lastSongPos") ) { lastSongPos=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"songPosition") ) { songPosition=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"bpmChangeMap") ) { bpmChangeMap=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Conductor_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Conductor_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Conductor_obj::bpm,HX_("bpm",df,be,4a,00)},
	{::hx::fsFloat,(void *) &Conductor_obj::crochet,HX_("crochet",34,d5,b5,d4)},
	{::hx::fsFloat,(void *) &Conductor_obj::stepCrochet,HX_("stepCrochet",48,d7,ff,e6)},
	{::hx::fsFloat,(void *) &Conductor_obj::songPosition,HX_("songPosition",9e,dd,3b,8d)},
	{::hx::fsFloat,(void *) &Conductor_obj::lastSongPos,HX_("lastSongPos",09,f9,d2,5e)},
	{::hx::fsFloat,(void *) &Conductor_obj::offset,HX_("offset",93,97,3f,60)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Conductor_obj::bpmChangeMap,HX_("bpmChangeMap",2d,84,1f,2c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Conductor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Conductor_obj::bpm,"bpm");
	HX_MARK_MEMBER_NAME(Conductor_obj::crochet,"crochet");
	HX_MARK_MEMBER_NAME(Conductor_obj::stepCrochet,"stepCrochet");
	HX_MARK_MEMBER_NAME(Conductor_obj::songPosition,"songPosition");
	HX_MARK_MEMBER_NAME(Conductor_obj::lastSongPos,"lastSongPos");
	HX_MARK_MEMBER_NAME(Conductor_obj::offset,"offset");
	HX_MARK_MEMBER_NAME(Conductor_obj::bpmChangeMap,"bpmChangeMap");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Conductor_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Conductor_obj::bpm,"bpm");
	HX_VISIT_MEMBER_NAME(Conductor_obj::crochet,"crochet");
	HX_VISIT_MEMBER_NAME(Conductor_obj::stepCrochet,"stepCrochet");
	HX_VISIT_MEMBER_NAME(Conductor_obj::songPosition,"songPosition");
	HX_VISIT_MEMBER_NAME(Conductor_obj::lastSongPos,"lastSongPos");
	HX_VISIT_MEMBER_NAME(Conductor_obj::offset,"offset");
	HX_VISIT_MEMBER_NAME(Conductor_obj::bpmChangeMap,"bpmChangeMap");
};

#endif

::hx::Class Conductor_obj::__mClass;

static ::String Conductor_obj_sStaticFields[] = {
	HX_("bpm",df,be,4a,00),
	HX_("crochet",34,d5,b5,d4),
	HX_("stepCrochet",48,d7,ff,e6),
	HX_("songPosition",9e,dd,3b,8d),
	HX_("lastSongPos",09,f9,d2,5e),
	HX_("offset",93,97,3f,60),
	HX_("bpmChangeMap",2d,84,1f,2c),
	HX_("mapBPMChanges",a0,c9,ba,4a),
	HX_("changeBPM",4f,4f,f8,1d),
	::String(null())
};

void Conductor_obj::__register()
{
	Conductor_obj _hx_dummy;
	Conductor_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("base.Conductor",2a,09,0b,5e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Conductor_obj::__GetStatic;
	__mClass->mSetStaticField = &Conductor_obj::__SetStatic;
	__mClass->mMarkFunc = Conductor_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Conductor_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Conductor_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Conductor_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Conductor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Conductor_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Conductor_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f7848762756b13f0_19_boot)
HXDLIN(  19)		bpm = ((Float)100);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7848762756b13f0_20_boot)
HXDLIN(  20)		crochet = ((( (Float)(60) ) / ::base::Conductor_obj::bpm) * ( (Float)(1000) ));
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7848762756b13f0_21_boot)
HXDLIN(  21)		stepCrochet = (::base::Conductor_obj::crochet / ( (Float)(4) ));
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7848762756b13f0_22_boot)
HXDLIN(  22)		songPosition = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7848762756b13f0_24_boot)
HXDLIN(  24)		offset = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f7848762756b13f0_26_boot)
HXDLIN(  26)		bpmChangeMap = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace base
