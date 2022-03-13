#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_Access_Impl_
#include <haxe/xml/_Access/Access_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_692ee901efc615a8_215_get_innerData,"haxe.xml._Access.Access_Impl_","get_innerData",0x69953cd7,"haxe.xml._Access.Access_Impl_.get_innerData","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Access.hx",215,0xd9eced32)
namespace haxe{
namespace xml{
namespace _Access{

void Access_Impl__obj::__construct() { }

Dynamic Access_Impl__obj::__CreateEmpty() { return new Access_Impl__obj; }

void *Access_Impl__obj::_hx_vtable = 0;

Dynamic Access_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Access_Impl__obj > _hx_result = new Access_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Access_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2733f11a;
}

::String Access_Impl__obj::get_innerData( ::Xml this1){
            	HX_STACKFRAME(&_hx_pos_692ee901efc615a8_215_get_innerData)
HXLINE( 216)		bool _hx_tmp;
HXDLIN( 216)		if ((this1->nodeType != ::Xml_obj::Document)) {
HXLINE( 216)			_hx_tmp = (this1->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 216)			_hx_tmp = false;
            		}
HXDLIN( 216)		if (_hx_tmp) {
HXLINE( 216)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element or Document but found ",a0,d6,ba,79) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            		}
HXDLIN( 216)		int it_current = 0;
HXDLIN( 216)		::Array< ::Dynamic> it_array = this1->children;
HXLINE( 217)		if ((it_current >= it_array->length)) {
HXLINE( 218)			::String _hx_tmp;
HXDLIN( 218)			if ((this1->nodeType == ::Xml_obj::Document)) {
HXLINE( 218)				_hx_tmp = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXLINE( 218)				if ((this1->nodeType != ::Xml_obj::Element)) {
HXLINE( 218)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            				}
HXDLIN( 218)				_hx_tmp = this1->nodeName;
            			}
HXDLIN( 218)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + HX_(" does not have data",0e,54,3b,f4))));
            		}
HXLINE( 219)		it_current = (it_current + 1);
HXDLIN( 219)		 ::Xml v = it_array->__get((it_current - 1)).StaticCast<  ::Xml >();
HXLINE( 220)		if ((it_current < it_array->length)) {
HXLINE( 221)			it_current = (it_current + 1);
HXDLIN( 221)			 ::Xml n = it_array->__get((it_current - 1)).StaticCast<  ::Xml >();
HXLINE( 223)			bool _hx_tmp;
HXDLIN( 223)			bool _hx_tmp1;
HXDLIN( 223)			if ((v->nodeType == ::Xml_obj::PCData)) {
HXLINE( 223)				_hx_tmp1 = (n->nodeType == ::Xml_obj::CData);
            			}
            			else {
HXLINE( 223)				_hx_tmp1 = false;
            			}
HXDLIN( 223)			if (_hx_tmp1) {
HXLINE( 223)				bool _hx_tmp1;
HXDLIN( 223)				if ((v->nodeType != ::Xml_obj::Document)) {
HXLINE( 223)					_hx_tmp1 = (v->nodeType == ::Xml_obj::Element);
            				}
            				else {
HXLINE( 223)					_hx_tmp1 = true;
            				}
HXDLIN( 223)				if (_hx_tmp1) {
HXLINE( 223)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(v->nodeType))));
            				}
HXDLIN( 223)				_hx_tmp = (::StringTools_obj::trim(v->nodeValue) == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 223)				_hx_tmp = false;
            			}
HXDLIN( 223)			if (_hx_tmp) {
HXLINE( 224)				if ((it_current >= it_array->length)) {
HXLINE( 225)					bool _hx_tmp;
HXDLIN( 225)					if ((n->nodeType != ::Xml_obj::Document)) {
HXLINE( 225)						_hx_tmp = (n->nodeType == ::Xml_obj::Element);
            					}
            					else {
HXLINE( 225)						_hx_tmp = true;
            					}
HXDLIN( 225)					if (_hx_tmp) {
HXLINE( 225)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(n->nodeType))));
            					}
HXDLIN( 225)					return n->nodeValue;
            				}
HXLINE( 226)				it_current = (it_current + 1);
HXDLIN( 226)				 ::Xml n2 = it_array->__get((it_current - 1)).StaticCast<  ::Xml >();
HXLINE( 227)				bool _hx_tmp;
HXDLIN( 227)				bool _hx_tmp1;
HXDLIN( 227)				if ((n2->nodeType == ::Xml_obj::PCData)) {
HXLINE( 227)					bool _hx_tmp;
HXDLIN( 227)					if ((n2->nodeType != ::Xml_obj::Document)) {
HXLINE( 227)						_hx_tmp = (n2->nodeType == ::Xml_obj::Element);
            					}
            					else {
HXLINE( 227)						_hx_tmp = true;
            					}
HXDLIN( 227)					if (_hx_tmp) {
HXLINE( 227)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(n2->nodeType))));
            					}
HXDLIN( 227)					_hx_tmp1 = (::StringTools_obj::trim(n2->nodeValue) == HX_("",00,00,00,00));
            				}
            				else {
HXLINE( 227)					_hx_tmp1 = false;
            				}
HXDLIN( 227)				if (_hx_tmp1) {
HXLINE( 227)					_hx_tmp = (it_current >= it_array->length);
            				}
            				else {
HXLINE( 227)					_hx_tmp = false;
            				}
HXDLIN( 227)				if (_hx_tmp) {
HXLINE( 228)					bool _hx_tmp;
HXDLIN( 228)					if ((n->nodeType != ::Xml_obj::Document)) {
HXLINE( 228)						_hx_tmp = (n->nodeType == ::Xml_obj::Element);
            					}
            					else {
HXLINE( 228)						_hx_tmp = true;
            					}
HXDLIN( 228)					if (_hx_tmp) {
HXLINE( 228)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(n->nodeType))));
            					}
HXDLIN( 228)					return n->nodeValue;
            				}
            			}
HXLINE( 230)			::String _hx_tmp2;
HXDLIN( 230)			if ((this1->nodeType == ::Xml_obj::Document)) {
HXLINE( 230)				_hx_tmp2 = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXLINE( 230)				if ((this1->nodeType != ::Xml_obj::Element)) {
HXLINE( 230)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            				}
HXDLIN( 230)				_hx_tmp2 = this1->nodeName;
            			}
HXDLIN( 230)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp2 + HX_(" does not only have data",82,e2,30,ae))));
            		}
HXLINE( 232)		bool _hx_tmp1;
HXDLIN( 232)		if ((v->nodeType != ::Xml_obj::PCData)) {
HXLINE( 232)			_hx_tmp1 = (v->nodeType != ::Xml_obj::CData);
            		}
            		else {
HXLINE( 232)			_hx_tmp1 = false;
            		}
HXDLIN( 232)		if (_hx_tmp1) {
HXLINE( 233)			::String _hx_tmp;
HXDLIN( 233)			if ((this1->nodeType == ::Xml_obj::Document)) {
HXLINE( 233)				_hx_tmp = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXLINE( 233)				if ((this1->nodeType != ::Xml_obj::Element)) {
HXLINE( 233)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(this1->nodeType))));
            				}
HXDLIN( 233)				_hx_tmp = this1->nodeName;
            			}
HXDLIN( 233)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + HX_(" does not have data",0e,54,3b,f4))));
            		}
HXLINE( 234)		bool _hx_tmp2;
HXDLIN( 234)		if ((v->nodeType != ::Xml_obj::Document)) {
HXLINE( 234)			_hx_tmp2 = (v->nodeType == ::Xml_obj::Element);
            		}
            		else {
HXLINE( 234)			_hx_tmp2 = true;
            		}
HXDLIN( 234)		if (_hx_tmp2) {
HXLINE( 234)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(v->nodeType))));
            		}
HXDLIN( 234)		return v->nodeValue;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Access_Impl__obj,get_innerData,return )


Access_Impl__obj::Access_Impl__obj()
{
}

bool Access_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"get_innerData") ) { outValue = get_innerData_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Access_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Access_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Access_Impl__obj::__mClass;

static ::String Access_Impl__obj_sStaticFields[] = {
	HX_("get_innerData",b7,0a,44,eb),
	::String(null())
};

void Access_Impl__obj::__register()
{
	Access_Impl__obj _hx_dummy;
	Access_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.xml._Access.Access_Impl_",8e,1a,60,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Access_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Access_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Access_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Access_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Access_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Access
