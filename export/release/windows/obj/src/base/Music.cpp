#include <hxcpp.h>

#ifndef INCLUDED_base_Music
#include <base/Music.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af06bfa6d25363be_21_new,"base.Music","new",0x4218995a,"base.Music.new","base/Music.hx",21,0x0002b857)
namespace base{

void Music_obj::__construct(::String song,::Array< ::Dynamic> things,Float bpm){
            	HX_STACKFRAME(&_hx_pos_af06bfa6d25363be_21_new)
HXLINE(  22)		this->song = song;
HXLINE(  23)		this->things = things;
HXLINE(  24)		this->bpm = bpm;
            	}

Dynamic Music_obj::__CreateEmpty() { return new Music_obj; }

void *Music_obj::_hx_vtable = 0;

Dynamic Music_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Music_obj > _hx_result = new Music_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Music_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x77c90714;
}


Music_obj::Music_obj()
{
}

void Music_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Music);
	HX_MARK_MEMBER_NAME(song,"song");
	HX_MARK_MEMBER_NAME(things,"things");
	HX_MARK_MEMBER_NAME(bpm,"bpm");
	HX_MARK_END_CLASS();
}

void Music_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(song,"song");
	HX_VISIT_MEMBER_NAME(things,"things");
	HX_VISIT_MEMBER_NAME(bpm,"bpm");
}

::hx::Val Music_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { return ::hx::Val( bpm ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"song") ) { return ::hx::Val( song ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"things") ) { return ::hx::Val( things ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Music_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { bpm=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"song") ) { song=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"things") ) { things=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Music_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("song",d5,23,58,4c));
	outFields->push(HX_("things",c5,68,cd,88));
	outFields->push(HX_("bpm",df,be,4a,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Music_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Music_obj,song),HX_("song",d5,23,58,4c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Music_obj,things),HX_("things",c5,68,cd,88)},
	{::hx::fsFloat,(int)offsetof(Music_obj,bpm),HX_("bpm",df,be,4a,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Music_obj_sStaticStorageInfo = 0;
#endif

static ::String Music_obj_sMemberFields[] = {
	HX_("song",d5,23,58,4c),
	HX_("things",c5,68,cd,88),
	HX_("bpm",df,be,4a,00),
	::String(null()) };

::hx::Class Music_obj::__mClass;

void Music_obj::__register()
{
	Music_obj _hx_dummy;
	Music_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("base.Music",68,a4,8e,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Music_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Music_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Music_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Music_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace base
