#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledGroupLayer
#include <flixel/addons/editors/tiled/TiledGroupLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageLayer
#include <flixel/addons/editors/tiled/TiledImageLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectLayer
#include <flixel/addons/editors/tiled/TiledObjectLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileLayer
#include <flixel/addons/editors/tiled/TiledTileLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeAccess_Impl_
#include <haxe/xml/_Access/NodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_67d155f97991e016_21_new,"flixel.addons.editors.tiled.TiledMap","new",0xde9b4f21,"flixel.addons.editors.tiled.TiledMap.new","flixel/addons/editors/tiled/TiledMap.hx",21,0xfb5e15cd)
HX_LOCAL_STACK_FRAME(_hx_pos_67d155f97991e016_92_loadAttributes,"flixel.addons.editors.tiled.TiledMap","loadAttributes",0x4081997c,"flixel.addons.editors.tiled.TiledMap.loadAttributes","flixel/addons/editors/tiled/TiledMap.hx",92,0xfb5e15cd)
HX_LOCAL_STACK_FRAME(_hx_pos_67d155f97991e016_108_loadProperties,"flixel.addons.editors.tiled.TiledMap","loadProperties",0x0a1eec98,"flixel.addons.editors.tiled.TiledMap.loadProperties","flixel/addons/editors/tiled/TiledMap.hx",108,0xfb5e15cd)
HX_LOCAL_STACK_FRAME(_hx_pos_67d155f97991e016_128_loadTilesets,"flixel.addons.editors.tiled.TiledMap","loadTilesets",0x94e39a24,"flixel.addons.editors.tiled.TiledMap.loadTilesets","flixel/addons/editors/tiled/TiledMap.hx",128,0xfb5e15cd)
HX_LOCAL_STACK_FRAME(_hx_pos_67d155f97991e016_143_loadLayers,"flixel.addons.editors.tiled.TiledMap","loadLayers",0x89a88fa7,"flixel.addons.editors.tiled.TiledMap.loadLayers","flixel/addons/editors/tiled/TiledMap.hx",143,0xfb5e15cd)
HX_LOCAL_STACK_FRAME(_hx_pos_67d155f97991e016_167_getTileSet,"flixel.addons.editors.tiled.TiledMap","getTileSet",0x10a90a7d,"flixel.addons.editors.tiled.TiledMap.getTileSet","flixel/addons/editors/tiled/TiledMap.hx",167,0xfb5e15cd)
HX_LOCAL_STACK_FRAME(_hx_pos_67d155f97991e016_172_getLayer,"flixel.addons.editors.tiled.TiledMap","getLayer",0xf247f6fa,"flixel.addons.editors.tiled.TiledMap.getLayer","flixel/addons/editors/tiled/TiledMap.hx",172,0xfb5e15cd)
HX_LOCAL_STACK_FRAME(_hx_pos_67d155f97991e016_179_getGidOwner,"flixel.addons.editors.tiled.TiledMap","getGidOwner",0xd5d72748,"flixel.addons.editors.tiled.TiledMap.getGidOwner","flixel/addons/editors/tiled/TiledMap.hx",179,0xfb5e15cd)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledMap_obj::__construct( ::Dynamic data,::String rootPath){
            	HX_GC_STACKFRAME(&_hx_pos_67d155f97991e016_21_new)
HXLINE(  54)		this->layerMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  53)		this->noLoadHash =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  48)		this->layers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		this->tilesetArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  41)		this->tilesets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  36)		this->properties =  ::flixel::addons::editors::tiled::TiledPropertySet_obj::__alloc( HX_CTX );
HXLINE(  64)		 ::Xml source = null();
HXLINE(  66)		if (::hx::IsNotNull( rootPath )) {
HXLINE(  67)			this->rootPath = rootPath;
            		}
HXLINE(  69)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::String >())) {
HXLINE(  71)			if (::hx::IsNull( this->rootPath )) {
HXLINE(  72)				this->rootPath = (::haxe::io::Path_obj::directory(( (::String)(data) )) + HX_("/",2f,00,00,00));
            			}
HXLINE(  73)			 ::Xml x = ::Xml_obj::parse(::openfl::utils::Assets_obj::getText(( (::String)(data) )));
HXDLIN(  73)			bool source1;
HXDLIN(  73)			if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE(  73)				source1 = (x->nodeType != ::Xml_obj::Element);
            			}
            			else {
HXLINE(  73)				source1 = false;
            			}
HXDLIN(  73)			if (source1) {
HXLINE(  73)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            			}
HXDLIN(  73)			 ::Xml this1 = x;
HXDLIN(  73)			source = this1;
            		}
            		else {
HXLINE(  75)			if (::Std_obj::isOfType(data,::hx::ClassOf< ::Xml >())) {
HXLINE(  77)				if (::hx::IsNull( this->rootPath )) {
HXLINE(  78)					this->rootPath = HX_("",00,00,00,00);
            				}
HXLINE(  79)				 ::Xml xml = ( ( ::Xml)(data) );
HXLINE(  80)				bool source1;
HXDLIN(  80)				if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE(  80)					source1 = (xml->nodeType != ::Xml_obj::Element);
            				}
            				else {
HXLINE(  80)					source1 = false;
            				}
HXDLIN(  80)				if (source1) {
HXLINE(  80)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            				}
HXDLIN(  80)				 ::Xml this1 = xml;
HXDLIN(  80)				source = this1;
            			}
            		}
HXLINE(  83)		source = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(source,HX_("map",9c,0a,53,00));
HXLINE(  85)		this->loadAttributes(source);
HXLINE(  86)		this->loadProperties(source);
HXLINE(  87)		this->loadTilesets(source);
HXLINE(  88)		this->loadLayers(source);
            	}

Dynamic TiledMap_obj::__CreateEmpty() { return new TiledMap_obj; }

void *TiledMap_obj::_hx_vtable = 0;

Dynamic TiledMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiledMap_obj > _hx_result = new TiledMap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TiledMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3b84f8a9;
}

void TiledMap_obj::loadAttributes( ::Xml source){
            	HX_STACKFRAME(&_hx_pos_67d155f97991e016_92_loadAttributes)
HXLINE(  93)		::String _hx_tmp;
HXDLIN(  93)		if (::hx::IsNotNull( ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("version",18,e7,f1,7c)) )) {
HXLINE(  93)			_hx_tmp = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("version",18,e7,f1,7c));
            		}
            		else {
HXLINE(  93)			_hx_tmp = HX_("unknown",8a,23,7b,e1);
            		}
HXDLIN(  93)		this->version = _hx_tmp;
HXLINE(  94)		::String _hx_tmp1;
HXDLIN(  94)		if (::hx::IsNotNull( ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("orientation",d0,ee,fe,fd)) )) {
HXLINE(  94)			_hx_tmp1 = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("orientation",d0,ee,fe,fd));
            		}
            		else {
HXLINE(  94)			_hx_tmp1 = HX_("orthogonal",79,f9,f3,18);
            		}
HXDLIN(  94)		this->orientation = _hx_tmp1;
HXLINE(  95)		int _hx_tmp2;
HXDLIN(  95)		bool _hx_tmp3;
HXDLIN(  95)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("backgroundcolor",b5,de,19,7a))) {
HXLINE(  95)			_hx_tmp3 = ::hx::IsNotNull( ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("backgroundcolor",b5,de,19,7a)) );
            		}
            		else {
HXLINE(  95)			_hx_tmp3 = false;
            		}
HXDLIN(  95)		if (_hx_tmp3) {
HXLINE(  95)			_hx_tmp2 = ( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("backgroundcolor",b5,de,19,7a)))) );
            		}
            		else {
HXLINE(  95)			_hx_tmp2 = 0;
            		}
HXDLIN(  95)		this->backgroundColor = _hx_tmp2;
HXLINE(  97)		this->width = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("width",06,b6,62,ca)))) );
HXLINE(  98)		this->height = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("height",e7,07,4c,02)))) );
HXLINE(  99)		this->tileWidth = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("tilewidth",18,a4,90,c2)))) );
HXLINE( 100)		this->tileHeight = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("tileheight",95,69,4e,32)))) );
HXLINE( 103)		this->fullWidth = (this->width * this->tileWidth);
HXLINE( 104)		this->fullHeight = (this->height * this->tileHeight);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,loadAttributes,(void))

void TiledMap_obj::loadProperties( ::Xml source){
            	HX_GC_STACKFRAME(&_hx_pos_67d155f97991e016_108_loadProperties)
HXLINE( 109)		{
HXLINE( 109)			int _g = 0;
HXDLIN( 109)			::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(source,HX_("properties",f3,fb,0e,61));
HXDLIN( 109)			while((_g < _g1->length)){
HXLINE( 109)				 ::Xml node = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 109)				_g = (_g + 1);
HXLINE( 111)				this->properties->extend(node);
            			}
            		}
HXLINE( 114)		::String noLoadStr = this->properties->keys->get_string(HX_("noload",e7,ae,73,2c));
HXLINE( 115)		if (::hx::IsNotNull( noLoadStr )) {
HXLINE( 117)			::Array< ::String > noLoadArr =  ::EReg_obj::__alloc( HX_CTX ,HX_("[,;|]",8b,5e,b9,82),HX_("",00,00,00,00))->split(noLoadStr);
HXLINE( 119)			{
HXLINE( 119)				int _g = 0;
HXDLIN( 119)				while((_g < noLoadArr->length)){
HXLINE( 119)					::String s = noLoadArr->__get(_g);
HXDLIN( 119)					_g = (_g + 1);
HXLINE( 121)					{
HXLINE( 121)						::Dynamic this1 = this->noLoadHash;
HXDLIN( 121)						( ( ::haxe::ds::StringMap)(this1) )->set(::StringTools_obj::trim(s),true);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,loadProperties,(void))

void TiledMap_obj::loadTilesets( ::Xml source){
            	HX_GC_STACKFRAME(&_hx_pos_67d155f97991e016_128_loadTilesets)
HXDLIN( 128)		int _g = 0;
HXDLIN( 128)		::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(source,HX_("tileset",34,81,93,45));
HXDLIN( 128)		while((_g < _g1->length)){
HXDLIN( 128)			 ::Xml node = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 128)			_g = (_g + 1);
HXLINE( 130)			::String name;
HXDLIN( 130)			if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(node,HX_("name",4b,72,ff,48))) {
HXLINE( 130)				name = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("name",4b,72,ff,48));
            			}
            			else {
HXLINE( 130)				name = HX_("",00,00,00,00);
            			}
HXLINE( 132)			if (!(this->noLoadHash->exists(name))) {
HXLINE( 134)				 ::flixel::addons::editors::tiled::TiledTileSet ts =  ::flixel::addons::editors::tiled::TiledTileSet_obj::__alloc( HX_CTX ,node,this->rootPath);
HXLINE( 135)				this->tilesets->set(ts->name,ts);
HXLINE( 136)				this->tilesetArray->push(ts);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,loadTilesets,(void))

void TiledMap_obj::loadLayers( ::Xml source){
            	HX_GC_STACKFRAME(&_hx_pos_67d155f97991e016_143_loadLayers)
HXDLIN( 143)		 ::Dynamic el = source->elements();
HXDLIN( 143)		while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 143)			 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 145)			bool _hx_tmp;
HXDLIN( 145)			if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(el1,HX_("name",4b,72,ff,48))) {
HXLINE( 145)				::Dynamic this1 = this->noLoadHash;
HXDLIN( 145)				_hx_tmp = ( ( ::haxe::ds::StringMap)(this1) )->exists(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(el1,HX_("name",4b,72,ff,48)));
            			}
            			else {
HXLINE( 145)				_hx_tmp = false;
            			}
HXDLIN( 145)			if (_hx_tmp) {
HXLINE( 146)				continue;
            			}
HXLINE( 148)			 ::flixel::addons::editors::tiled::TiledLayer layer;
HXDLIN( 148)			::String _g;
HXDLIN( 148)			if ((el1->nodeType == ::Xml_obj::Document)) {
HXLINE( 148)				_g = HX_("Document",3b,ab,c4,74);
            			}
            			else {
HXLINE( 148)				if ((el1->nodeType != ::Xml_obj::Element)) {
HXLINE( 148)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(el1->nodeType))));
            				}
HXDLIN( 148)				_g = el1->nodeName;
            			}
HXDLIN( 148)			::String _hx_switch_0 = _g.toLowerCase();
            			if (  (_hx_switch_0==HX_("group",3f,b3,f4,99)) ){
HXLINE( 148)				layer =  ::flixel::addons::editors::tiled::TiledGroupLayer_obj::__alloc( HX_CTX ,el1,::hx::ObjectPtr<OBJ_>(this),this->noLoadHash);
HXDLIN( 148)				goto _hx_goto_8;
            			}
            			if (  (_hx_switch_0==HX_("imagelayer",96,d8,60,e8)) ){
HXLINE( 148)				layer =  ::flixel::addons::editors::tiled::TiledImageLayer_obj::__alloc( HX_CTX ,el1,::hx::ObjectPtr<OBJ_>(this));
HXDLIN( 148)				goto _hx_goto_8;
            			}
            			if (  (_hx_switch_0==HX_("layer",d1,81,c0,6f)) ){
HXLINE( 148)				layer =  ::flixel::addons::editors::tiled::TiledTileLayer_obj::__alloc( HX_CTX ,el1,::hx::ObjectPtr<OBJ_>(this));
HXDLIN( 148)				goto _hx_goto_8;
            			}
            			if (  (_hx_switch_0==HX_("objectgroup",20,60,f6,75)) ){
HXLINE( 148)				layer =  ::flixel::addons::editors::tiled::TiledObjectLayer_obj::__alloc( HX_CTX ,el1,::hx::ObjectPtr<OBJ_>(this));
HXDLIN( 148)				goto _hx_goto_8;
            			}
            			/* default */{
HXLINE( 148)				layer = null();
            			}
            			_hx_goto_8:;
HXLINE( 157)			if (::hx::IsNotNull( layer )) {
HXLINE( 159)				this->layers->push(layer);
HXLINE( 160)				this->layerMap->set(layer->name,layer);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,loadLayers,(void))

 ::flixel::addons::editors::tiled::TiledTileSet TiledMap_obj::getTileSet(::String name){
            	HX_STACKFRAME(&_hx_pos_67d155f97991e016_167_getTileSet)
HXDLIN( 167)		return ( ( ::flixel::addons::editors::tiled::TiledTileSet)(this->tilesets->get(name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getTileSet,return )

 ::flixel::addons::editors::tiled::TiledLayer TiledMap_obj::getLayer(::String name){
            	HX_STACKFRAME(&_hx_pos_67d155f97991e016_172_getLayer)
HXDLIN( 172)		return ( ( ::flixel::addons::editors::tiled::TiledLayer)(this->layerMap->get(name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getLayer,return )

 ::flixel::addons::editors::tiled::TiledTileSet TiledMap_obj::getGidOwner(int gid){
            	HX_STACKFRAME(&_hx_pos_67d155f97991e016_179_getGidOwner)
HXLINE( 180)		{
HXLINE( 180)			 ::Dynamic set = this->tilesets->iterator();
HXDLIN( 180)			while(( (bool)(set->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 180)				 ::flixel::addons::editors::tiled::TiledTileSet set1 = ( ( ::flixel::addons::editors::tiled::TiledTileSet)(set->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 182)				bool _hx_tmp;
HXDLIN( 182)				if ((gid >= set1->firstGID)) {
HXLINE( 182)					_hx_tmp = (gid < (set1->firstGID + set1->numTiles));
            				}
            				else {
HXLINE( 182)					_hx_tmp = false;
            				}
HXDLIN( 182)				if (_hx_tmp) {
HXLINE( 184)					return set1;
            				}
            			}
            		}
HXLINE( 188)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getGidOwner,return )


::hx::ObjectPtr< TiledMap_obj > TiledMap_obj::__new( ::Dynamic data,::String rootPath) {
	::hx::ObjectPtr< TiledMap_obj > __this = new TiledMap_obj();
	__this->__construct(data,rootPath);
	return __this;
}

::hx::ObjectPtr< TiledMap_obj > TiledMap_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic data,::String rootPath) {
	TiledMap_obj *__this = (TiledMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiledMap_obj), true, "flixel.addons.editors.tiled.TiledMap"));
	*(void **)__this = TiledMap_obj::_hx_vtable;
	__this->__construct(data,rootPath);
	return __this;
}

TiledMap_obj::TiledMap_obj()
{
}

void TiledMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledMap);
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(fullWidth,"fullWidth");
	HX_MARK_MEMBER_NAME(fullHeight,"fullHeight");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tilesets,"tilesets");
	HX_MARK_MEMBER_NAME(tilesetArray,"tilesetArray");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(noLoadHash,"noLoadHash");
	HX_MARK_MEMBER_NAME(layerMap,"layerMap");
	HX_MARK_MEMBER_NAME(rootPath,"rootPath");
	HX_MARK_END_CLASS();
}

void TiledMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(fullWidth,"fullWidth");
	HX_VISIT_MEMBER_NAME(fullHeight,"fullHeight");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tilesets,"tilesets");
	HX_VISIT_MEMBER_NAME(tilesetArray,"tilesetArray");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(noLoadHash,"noLoadHash");
	HX_VISIT_MEMBER_NAME(layerMap,"layerMap");
	HX_VISIT_MEMBER_NAME(rootPath,"rootPath");
}

::hx::Val TiledMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"layers") ) { return ::hx::Val( layers ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return ::hx::Val( version ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { return ::hx::Val( tilesets ); }
		if (HX_FIELD_EQ(inName,"layerMap") ) { return ::hx::Val( layerMap ); }
		if (HX_FIELD_EQ(inName,"rootPath") ) { return ::hx::Val( rootPath ); }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return ::hx::Val( getLayer_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return ::hx::Val( tileWidth ); }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { return ::hx::Val( fullWidth ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return ::hx::Val( tileHeight ); }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { return ::hx::Val( fullHeight ); }
		if (HX_FIELD_EQ(inName,"properties") ) { return ::hx::Val( properties ); }
		if (HX_FIELD_EQ(inName,"noLoadHash") ) { return ::hx::Val( noLoadHash ); }
		if (HX_FIELD_EQ(inName,"loadLayers") ) { return ::hx::Val( loadLayers_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTileSet") ) { return ::hx::Val( getTileSet_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { return ::hx::Val( orientation ); }
		if (HX_FIELD_EQ(inName,"getGidOwner") ) { return ::hx::Val( getGidOwner_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tilesetArray") ) { return ::hx::Val( tilesetArray ); }
		if (HX_FIELD_EQ(inName,"loadTilesets") ) { return ::hx::Val( loadTilesets_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadAttributes") ) { return ::hx::Val( loadAttributes_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadProperties") ) { return ::hx::Val( loadProperties_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiledMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { tilesets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layerMap") ) { layerMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { fullWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { fullHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noLoadHash") ) { noLoadHash=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tilesetArray") ) { tilesetArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("version",18,e7,f1,7c));
	outFields->push(HX_("orientation",d0,ee,fe,fd));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("tileWidth",f8,13,be,55));
	outFields->push(HX_("tileHeight",b5,dd,e2,66));
	outFields->push(HX_("fullWidth",f7,35,67,47));
	outFields->push(HX_("fullHeight",d6,7a,37,e9));
	outFields->push(HX_("properties",f3,fb,0e,61));
	outFields->push(HX_("tilesets",bf,8c,7d,9b));
	outFields->push(HX_("tilesetArray",c5,7f,64,32));
	outFields->push(HX_("layers",82,15,b1,58));
	outFields->push(HX_("noLoadHash",75,c6,05,a6));
	outFields->push(HX_("layerMap",4b,79,26,b7));
	outFields->push(HX_("rootPath",e7,b8,88,e1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiledMap_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TiledMap_obj,version),HX_("version",18,e7,f1,7c)},
	{::hx::fsString,(int)offsetof(TiledMap_obj,orientation),HX_("orientation",d0,ee,fe,fd)},
	{::hx::fsInt,(int)offsetof(TiledMap_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsInt,(int)offsetof(TiledMap_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(TiledMap_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(TiledMap_obj,tileWidth),HX_("tileWidth",f8,13,be,55)},
	{::hx::fsInt,(int)offsetof(TiledMap_obj,tileHeight),HX_("tileHeight",b5,dd,e2,66)},
	{::hx::fsInt,(int)offsetof(TiledMap_obj,fullWidth),HX_("fullWidth",f7,35,67,47)},
	{::hx::fsInt,(int)offsetof(TiledMap_obj,fullHeight),HX_("fullHeight",d6,7a,37,e9)},
	{::hx::fsObject /*  ::flixel::addons::editors::tiled::TiledPropertySet */ ,(int)offsetof(TiledMap_obj,properties),HX_("properties",f3,fb,0e,61)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(TiledMap_obj,tilesets),HX_("tilesets",bf,8c,7d,9b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TiledMap_obj,tilesetArray),HX_("tilesetArray",c5,7f,64,32)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TiledMap_obj,layers),HX_("layers",82,15,b1,58)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(TiledMap_obj,noLoadHash),HX_("noLoadHash",75,c6,05,a6)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(TiledMap_obj,layerMap),HX_("layerMap",4b,79,26,b7)},
	{::hx::fsString,(int)offsetof(TiledMap_obj,rootPath),HX_("rootPath",e7,b8,88,e1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TiledMap_obj_sStaticStorageInfo = 0;
#endif

static ::String TiledMap_obj_sMemberFields[] = {
	HX_("version",18,e7,f1,7c),
	HX_("orientation",d0,ee,fe,fd),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("tileWidth",f8,13,be,55),
	HX_("tileHeight",b5,dd,e2,66),
	HX_("fullWidth",f7,35,67,47),
	HX_("fullHeight",d6,7a,37,e9),
	HX_("properties",f3,fb,0e,61),
	HX_("tilesets",bf,8c,7d,9b),
	HX_("tilesetArray",c5,7f,64,32),
	HX_("layers",82,15,b1,58),
	HX_("noLoadHash",75,c6,05,a6),
	HX_("layerMap",4b,79,26,b7),
	HX_("rootPath",e7,b8,88,e1),
	HX_("loadAttributes",9d,b2,22,2e),
	HX_("loadProperties",b9,05,c0,f7),
	HX_("loadTilesets",05,79,e6,54),
	HX_("loadLayers",48,44,dc,0d),
	HX_("getTileSet",1e,bf,dc,94),
	HX_("getLayer",5b,91,97,cf),
	HX_("getGidOwner",87,7f,e1,fe),
	::String(null()) };

::hx::Class TiledMap_obj::__mClass;

void TiledMap_obj::__register()
{
	TiledMap_obj _hx_dummy;
	TiledMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.tiled.TiledMap",af,2a,e3,7a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiledMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiledMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
