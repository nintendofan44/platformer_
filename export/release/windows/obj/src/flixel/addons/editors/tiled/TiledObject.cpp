#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectLayer
#include <flixel/addons/editors/tiled/TiledObjectLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasNodeAccess_Impl_
#include <haxe/xml/_Access/HasNodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeAccess_Impl_
#include <haxe/xml/_Access/NodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30d0ee2c03993c65_90_new,"flixel.addons.editors.tiled.TiledObject","new",0x3a8d437e,"flixel.addons.editors.tiled.TiledObject.new","flixel/addons/editors/tiled/TiledObject.hx",90,0x5c109e14)
HX_LOCAL_STACK_FRAME(_hx_pos_30d0ee2c03993c65_158_getPoints,"flixel.addons.editors.tiled.TiledObject","getPoints",0xa25a38f7,"flixel.addons.editors.tiled.TiledObject.getPoints","flixel/addons/editors/tiled/TiledObject.hx",158,0x5c109e14)
HX_LOCAL_STACK_FRAME(_hx_pos_30d0ee2c03993c65_25_boot,"flixel.addons.editors.tiled.TiledObject","boot",0xf926cb54,"flixel.addons.editors.tiled.TiledObject.boot","flixel/addons/editors/tiled/TiledObject.hx",25,0x5c109e14)
HX_LOCAL_STACK_FRAME(_hx_pos_30d0ee2c03993c65_27_boot,"flixel.addons.editors.tiled.TiledObject","boot",0xf926cb54,"flixel.addons.editors.tiled.TiledObject.boot","flixel/addons/editors/tiled/TiledObject.hx",27,0x5c109e14)
HX_LOCAL_STACK_FRAME(_hx_pos_30d0ee2c03993c65_29_boot,"flixel.addons.editors.tiled.TiledObject","boot",0xf926cb54,"flixel.addons.editors.tiled.TiledObject.boot","flixel/addons/editors/tiled/TiledObject.hx",29,0x5c109e14)
HX_LOCAL_STACK_FRAME(_hx_pos_30d0ee2c03993c65_30_boot,"flixel.addons.editors.tiled.TiledObject","boot",0xf926cb54,"flixel.addons.editors.tiled.TiledObject.boot","flixel/addons/editors/tiled/TiledObject.hx",30,0x5c109e14)
HX_LOCAL_STACK_FRAME(_hx_pos_30d0ee2c03993c65_31_boot,"flixel.addons.editors.tiled.TiledObject","boot",0xf926cb54,"flixel.addons.editors.tiled.TiledObject.boot","flixel/addons/editors/tiled/TiledObject.hx",31,0x5c109e14)
HX_LOCAL_STACK_FRAME(_hx_pos_30d0ee2c03993c65_32_boot,"flixel.addons.editors.tiled.TiledObject","boot",0xf926cb54,"flixel.addons.editors.tiled.TiledObject.boot","flixel/addons/editors/tiled/TiledObject.hx",32,0x5c109e14)
HX_LOCAL_STACK_FRAME(_hx_pos_30d0ee2c03993c65_33_boot,"flixel.addons.editors.tiled.TiledObject","boot",0xf926cb54,"flixel.addons.editors.tiled.TiledObject.boot","flixel/addons/editors/tiled/TiledObject.hx",33,0x5c109e14)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledObject_obj::__construct( ::Xml source, ::flixel::addons::editors::tiled::TiledObjectLayer parent){
            	HX_GC_STACKFRAME(&_hx_pos_30d0ee2c03993c65_90_new)
HXLINE(  91)		this->xmlData = source;
HXLINE(  92)		this->layer = parent;
HXLINE(  93)		::String _hx_tmp;
HXDLIN(  93)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("name",4b,72,ff,48))) {
HXLINE(  93)			_hx_tmp = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("name",4b,72,ff,48));
            		}
            		else {
HXLINE(  93)			_hx_tmp = HX_("",00,00,00,00);
            		}
HXDLIN(  93)		this->name = _hx_tmp;
HXLINE(  94)		::String _hx_tmp1;
HXDLIN(  94)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("type",ba,f2,08,4d))) {
HXLINE(  94)			_hx_tmp1 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("type",ba,f2,08,4d));
            		}
            		else {
HXLINE(  94)			bool _hx_tmp;
HXDLIN(  94)			if (::hx::IsNotNull( parent )) {
HXLINE(  94)				_hx_tmp = parent->properties->keys->exists(HX_("defaultType",1b,ec,c7,1e));
            			}
            			else {
HXLINE(  94)				_hx_tmp = false;
            			}
HXDLIN(  94)			if (_hx_tmp) {
HXLINE(  94)				_hx_tmp1 = parent->properties->keys->get_string(HX_("defaultType",1b,ec,c7,1e));
            			}
            			else {
HXLINE(  94)				_hx_tmp1 = HX_("",00,00,00,00);
            			}
            		}
HXDLIN(  94)		this->type = _hx_tmp1;
HXLINE(  96)		this->x = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("x",78,00,00,00)))) );
HXLINE(  97)		this->y = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("y",79,00,00,00)))) );
HXLINE(  98)		int _hx_tmp2;
HXDLIN(  98)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("width",06,b6,62,ca))) {
HXLINE(  98)			_hx_tmp2 = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("width",06,b6,62,ca)))) );
            		}
            		else {
HXLINE(  98)			_hx_tmp2 = 0;
            		}
HXDLIN(  98)		this->width = _hx_tmp2;
HXLINE(  99)		int _hx_tmp3;
HXDLIN(  99)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("height",e7,07,4c,02))) {
HXLINE(  99)			_hx_tmp3 = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("height",e7,07,4c,02)))) );
            		}
            		else {
HXLINE(  99)			_hx_tmp3 = 0;
            		}
HXDLIN(  99)		this->height = _hx_tmp3;
HXLINE( 100)		Float _hx_tmp4;
HXDLIN( 100)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("rotation",3e,3d,86,08))) {
HXLINE( 100)			_hx_tmp4 = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("rotation",3e,3d,86,08)));
            		}
            		else {
HXLINE( 100)			_hx_tmp4 = ( (Float)(0) );
            		}
HXDLIN( 100)		this->angle = _hx_tmp4;
HXLINE( 102)		this->objectType = 0;
HXLINE( 105)		this->shared = null();
HXLINE( 106)		this->gid = -1;
HXLINE( 109)		bool _hx_tmp5;
HXDLIN( 109)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("gid",02,84,4e,00))) {
HXLINE( 109)			_hx_tmp5 = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("gid",02,84,4e,00)).length != 0);
            		}
            		else {
HXLINE( 109)			_hx_tmp5 = false;
            		}
HXDLIN( 109)		if (_hx_tmp5) {
HXLINE( 111)			 cpp::Int64Struct gid64 = ::haxe::_Int64::Int64_Impl__obj::parseString(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("gid",02,84,4e,00)));
HXLINE( 113)			 cpp::Int64Struct a = _hx_int64_and(gid64,( ::cpp::Int64Struct((int)-2147483648)));
HXDLIN( 113)			this->flippedHorizontally = (_hx_int64_compare(a,( ::cpp::Int64Struct(0))) > 0);
HXLINE( 114)			 cpp::Int64Struct a1 = _hx_int64_and(gid64,( ::cpp::Int64Struct((int)1073741824)));
HXDLIN( 114)			this->flippedVertically = (_hx_int64_compare(a1,( ::cpp::Int64Struct(0))) > 0);
HXLINE( 115)			gid64 = _hx_int64_and(gid64,( ::cpp::Int64Struct((int)1073741823)));
HXLINE( 116)			this->gid = _hx_int64_low(gid64);
HXLINE( 118)			{
HXLINE( 118)				 ::Dynamic set = this->layer->map->tilesets->iterator();
HXDLIN( 118)				while(( (bool)(set->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 118)					 ::flixel::addons::editors::tiled::TiledTileSet set1 = ( ( ::flixel::addons::editors::tiled::TiledTileSet)(set->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 120)					this->shared = set1->getPropertiesByGid(this->gid);
HXLINE( 122)					if (::hx::IsNotNull( this->shared )) {
HXLINE( 124)						goto _hx_goto_0;
            					}
            				}
            				_hx_goto_0:;
            			}
HXLINE( 129)			this->objectType = 4;
            		}
HXLINE( 133)		this->properties =  ::flixel::addons::editors::tiled::TiledPropertySet_obj::__alloc( HX_CTX );
HXLINE( 135)		{
HXLINE( 135)			int _g = 0;
HXDLIN( 135)			::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(source,HX_("properties",f3,fb,0e,61));
HXDLIN( 135)			while((_g < _g1->length)){
HXLINE( 135)				 ::Xml node = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 135)				_g = (_g + 1);
HXLINE( 137)				this->properties->extend(node);
            			}
            		}
HXLINE( 141)		if (::haxe::xml::_Access::HasNodeAccess_Impl__obj::resolve(source,HX_("ellipse",de,40,86,0b))) {
HXLINE( 143)			this->objectType = 1;
            		}
            		else {
HXLINE( 145)			if (::haxe::xml::_Access::HasNodeAccess_Impl__obj::resolve(source,HX_("polygon",7a,02,91,12))) {
HXLINE( 147)				this->objectType = 2;
HXLINE( 148)				this->getPoints(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(source,HX_("polygon",7a,02,91,12)));
            			}
            			else {
HXLINE( 150)				if (::haxe::xml::_Access::HasNodeAccess_Impl__obj::resolve(source,HX_("polyline",40,ac,9a,2f))) {
HXLINE( 152)					this->objectType = 3;
HXLINE( 153)					this->getPoints(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(source,HX_("polyline",40,ac,9a,2f)));
            				}
            			}
            		}
            	}

Dynamic TiledObject_obj::__CreateEmpty() { return new TiledObject_obj; }

void *TiledObject_obj::_hx_vtable = 0;

Dynamic TiledObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiledObject_obj > _hx_result = new TiledObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TiledObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x27af95b6;
}

void TiledObject_obj::getPoints( ::Xml node){
            	HX_STACKFRAME(&_hx_pos_30d0ee2c03993c65_158_getPoints)
HXLINE( 159)		this->points = ::Array_obj< ::Dynamic>::__new();
HXLINE( 161)		::Array< ::String > pointsStr = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("points",23,12,2e,f7)).split(HX_(" ",20,00,00,00));
HXLINE( 162)		::Array< ::String > pair;
HXLINE( 163)		{
HXLINE( 163)			int _g = 0;
HXDLIN( 163)			while((_g < pointsStr->length)){
HXLINE( 163)				::String p = pointsStr->__get(_g);
HXDLIN( 163)				_g = (_g + 1);
HXLINE( 165)				pair = p.split(HX_(",",2c,00,00,00));
HXLINE( 166)				::Array< ::Dynamic> _hx_tmp = this->points;
HXDLIN( 166)				Float X = ::Std_obj::parseFloat(pair->__get(0));
HXDLIN( 166)				Float Y = ::Std_obj::parseFloat(pair->__get(1));
HXDLIN( 166)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 166)				point->_inPool = false;
HXDLIN( 166)				_hx_tmp->push(point);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledObject_obj,getPoints,(void))

int TiledObject_obj::FLIPPED_VERTICALLY_FLAG;

int TiledObject_obj::FLIPPED_HORIZONTALLY_FLAG;

int TiledObject_obj::RECTANGLE;

int TiledObject_obj::ELLIPSE;

int TiledObject_obj::POLYGON;

int TiledObject_obj::POLYLINE;

int TiledObject_obj::TILE;


::hx::ObjectPtr< TiledObject_obj > TiledObject_obj::__new( ::Xml source, ::flixel::addons::editors::tiled::TiledObjectLayer parent) {
	::hx::ObjectPtr< TiledObject_obj > __this = new TiledObject_obj();
	__this->__construct(source,parent);
	return __this;
}

::hx::ObjectPtr< TiledObject_obj > TiledObject_obj::__alloc(::hx::Ctx *_hx_ctx, ::Xml source, ::flixel::addons::editors::tiled::TiledObjectLayer parent) {
	TiledObject_obj *__this = (TiledObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiledObject_obj), true, "flixel.addons.editors.tiled.TiledObject"));
	*(void **)__this = TiledObject_obj::_hx_vtable;
	__this->__construct(source,parent);
	return __this;
}

TiledObject_obj::TiledObject_obj()
{
}

void TiledObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObject);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(xmlData,"xmlData");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(gid,"gid");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(shared,"shared");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(objectType,"objectType");
	HX_MARK_MEMBER_NAME(flippedHorizontally,"flippedHorizontally");
	HX_MARK_MEMBER_NAME(flippedVertically,"flippedVertically");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_END_CLASS();
}

void TiledObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(xmlData,"xmlData");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(gid,"gid");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(shared,"shared");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(objectType,"objectType");
	HX_VISIT_MEMBER_NAME(flippedHorizontally,"flippedHorizontally");
	HX_VISIT_MEMBER_NAME(flippedVertically,"flippedVertically");
	HX_VISIT_MEMBER_NAME(points,"points");
}

::hx::Val TiledObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { return ::hx::Val( gid ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"layer") ) { return ::hx::Val( layer ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"shared") ) { return ::hx::Val( shared ); }
		if (HX_FIELD_EQ(inName,"points") ) { return ::hx::Val( points ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlData") ) { return ::hx::Val( xmlData ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getPoints") ) { return ::hx::Val( getPoints_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return ::hx::Val( properties ); }
		if (HX_FIELD_EQ(inName,"objectType") ) { return ::hx::Val( objectType ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"flippedVertically") ) { return ::hx::Val( flippedVertically ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"flippedHorizontally") ) { return ::hx::Val( flippedHorizontally ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiledObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { gid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast<  ::flixel::addons::editors::tiled::TiledObjectLayer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shared") ) { shared=inValue.Cast<  ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xmlData") ) { xmlData=inValue.Cast<  ::Xml >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectType") ) { objectType=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"flippedVertically") ) { flippedVertically=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"flippedHorizontally") ) { flippedHorizontally=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("xmlData",a1,27,79,6f));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("gid",02,84,4e,00));
	outFields->push(HX_("properties",f3,fb,0e,61));
	outFields->push(HX_("shared",a5,5e,2b,1d));
	outFields->push(HX_("layer",d1,81,c0,6f));
	outFields->push(HX_("objectType",19,69,41,cf));
	outFields->push(HX_("flippedHorizontally",d3,6f,95,b0));
	outFields->push(HX_("flippedVertically",65,bb,26,a7));
	outFields->push(HX_("points",23,12,2e,f7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiledObject_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TiledObject_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(TiledObject_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsInt,(int)offsetof(TiledObject_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(TiledObject_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsString,(int)offsetof(TiledObject_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(TiledObject_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /*  ::Xml */ ,(int)offsetof(TiledObject_obj,xmlData),HX_("xmlData",a1,27,79,6f)},
	{::hx::fsFloat,(int)offsetof(TiledObject_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsInt,(int)offsetof(TiledObject_obj,gid),HX_("gid",02,84,4e,00)},
	{::hx::fsObject /*  ::flixel::addons::editors::tiled::TiledPropertySet */ ,(int)offsetof(TiledObject_obj,properties),HX_("properties",f3,fb,0e,61)},
	{::hx::fsObject /*  ::flixel::addons::editors::tiled::TiledPropertySet */ ,(int)offsetof(TiledObject_obj,shared),HX_("shared",a5,5e,2b,1d)},
	{::hx::fsObject /*  ::flixel::addons::editors::tiled::TiledObjectLayer */ ,(int)offsetof(TiledObject_obj,layer),HX_("layer",d1,81,c0,6f)},
	{::hx::fsInt,(int)offsetof(TiledObject_obj,objectType),HX_("objectType",19,69,41,cf)},
	{::hx::fsBool,(int)offsetof(TiledObject_obj,flippedHorizontally),HX_("flippedHorizontally",d3,6f,95,b0)},
	{::hx::fsBool,(int)offsetof(TiledObject_obj,flippedVertically),HX_("flippedVertically",65,bb,26,a7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TiledObject_obj,points),HX_("points",23,12,2e,f7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TiledObject_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TiledObject_obj::FLIPPED_VERTICALLY_FLAG,HX_("FLIPPED_VERTICALLY_FLAG",cb,82,b6,97)},
	{::hx::fsInt,(void *) &TiledObject_obj::FLIPPED_HORIZONTALLY_FLAG,HX_("FLIPPED_HORIZONTALLY_FLAG",dd,16,9f,d8)},
	{::hx::fsInt,(void *) &TiledObject_obj::RECTANGLE,HX_("RECTANGLE",0f,44,d5,14)},
	{::hx::fsInt,(void *) &TiledObject_obj::ELLIPSE,HX_("ELLIPSE",be,14,5a,8b)},
	{::hx::fsInt,(void *) &TiledObject_obj::POLYGON,HX_("POLYGON",5a,d6,64,92)},
	{::hx::fsInt,(void *) &TiledObject_obj::POLYLINE,HX_("POLYLINE",40,3c,20,89)},
	{::hx::fsInt,(void *) &TiledObject_obj::TILE,HX_("TILE",2e,93,bd,37)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TiledObject_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("name",4b,72,ff,48),
	HX_("type",ba,f2,08,4d),
	HX_("xmlData",a1,27,79,6f),
	HX_("angle",d3,43,e2,22),
	HX_("gid",02,84,4e,00),
	HX_("properties",f3,fb,0e,61),
	HX_("shared",a5,5e,2b,1d),
	HX_("layer",d1,81,c0,6f),
	HX_("objectType",19,69,41,cf),
	HX_("flippedHorizontally",d3,6f,95,b0),
	HX_("flippedVertically",65,bb,26,a7),
	HX_("points",23,12,2e,f7),
	HX_("getPoints",59,9b,84,73),
	::String(null()) };

static void TiledObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObject_obj::FLIPPED_VERTICALLY_FLAG,"FLIPPED_VERTICALLY_FLAG");
	HX_MARK_MEMBER_NAME(TiledObject_obj::FLIPPED_HORIZONTALLY_FLAG,"FLIPPED_HORIZONTALLY_FLAG");
	HX_MARK_MEMBER_NAME(TiledObject_obj::RECTANGLE,"RECTANGLE");
	HX_MARK_MEMBER_NAME(TiledObject_obj::ELLIPSE,"ELLIPSE");
	HX_MARK_MEMBER_NAME(TiledObject_obj::POLYGON,"POLYGON");
	HX_MARK_MEMBER_NAME(TiledObject_obj::POLYLINE,"POLYLINE");
	HX_MARK_MEMBER_NAME(TiledObject_obj::TILE,"TILE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TiledObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObject_obj::FLIPPED_VERTICALLY_FLAG,"FLIPPED_VERTICALLY_FLAG");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::FLIPPED_HORIZONTALLY_FLAG,"FLIPPED_HORIZONTALLY_FLAG");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::RECTANGLE,"RECTANGLE");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::ELLIPSE,"ELLIPSE");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::POLYGON,"POLYGON");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::POLYLINE,"POLYLINE");
	HX_VISIT_MEMBER_NAME(TiledObject_obj::TILE,"TILE");
};

#endif

::hx::Class TiledObject_obj::__mClass;

static ::String TiledObject_obj_sStaticFields[] = {
	HX_("FLIPPED_VERTICALLY_FLAG",cb,82,b6,97),
	HX_("FLIPPED_HORIZONTALLY_FLAG",dd,16,9f,d8),
	HX_("RECTANGLE",0f,44,d5,14),
	HX_("ELLIPSE",be,14,5a,8b),
	HX_("POLYGON",5a,d6,64,92),
	HX_("POLYLINE",40,3c,20,89),
	HX_("TILE",2e,93,bd,37),
	::String(null())
};

void TiledObject_obj::__register()
{
	TiledObject_obj _hx_dummy;
	TiledObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.tiled.TiledObject",8c,6c,12,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TiledObject_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TiledObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiledObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiledObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TiledObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TiledObject_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_30d0ee2c03993c65_25_boot)
HXDLIN(  25)		FLIPPED_VERTICALLY_FLAG = (int)1073741824;
            	}
{
            	HX_STACKFRAME(&_hx_pos_30d0ee2c03993c65_27_boot)
HXDLIN(  27)		FLIPPED_HORIZONTALLY_FLAG = (int)-2147483648;
            	}
{
            	HX_STACKFRAME(&_hx_pos_30d0ee2c03993c65_29_boot)
HXDLIN(  29)		RECTANGLE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_30d0ee2c03993c65_30_boot)
HXDLIN(  30)		ELLIPSE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_30d0ee2c03993c65_31_boot)
HXDLIN(  31)		POLYGON = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_30d0ee2c03993c65_32_boot)
HXDLIN(  32)		POLYLINE = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_30d0ee2c03993c65_33_boot)
HXDLIN(  33)		TILE = 4;
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
