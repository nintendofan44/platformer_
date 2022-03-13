#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledImageTile
#include <flixel/addons/editors/tiled/TiledImageTile.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
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
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTilePropertySet
#include <flixel/addons/editors/tiled/TiledTilePropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
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
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_haxe_xml__Access_HasNodeAccess_Impl_
#include <haxe/xml/_Access/HasNodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeAccess_Impl_
#include <haxe/xml/_Access/NodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c73e981696bb0370_45_new,"flixel.addons.editors.tiled.TiledTileSet","new",0xf865df19,"flixel.addons.editors.tiled.TiledTileSet.new","flixel/addons/editors/tiled/TiledTileSet.hx",45,0x504d33d5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73e981696bb0370_212_hasGid,"flixel.addons.editors.tiled.TiledTileSet","hasGid",0x55a8bbaf,"flixel.addons.editors.tiled.TiledTileSet.hasGid","flixel/addons/editors/tiled/TiledTileSet.hx",212,0x504d33d5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73e981696bb0370_217_fromGid,"flixel.addons.editors.tiled.TiledTileSet","fromGid",0xe24bb3f1,"flixel.addons.editors.tiled.TiledTileSet.fromGid","flixel/addons/editors/tiled/TiledTileSet.hx",217,0x504d33d5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73e981696bb0370_222_toGid,"flixel.addons.editors.tiled.TiledTileSet","toGid",0xbfce2440,"flixel.addons.editors.tiled.TiledTileSet.toGid","flixel/addons/editors/tiled/TiledTileSet.hx",222,0x504d33d5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73e981696bb0370_226_getPropertiesByGid,"flixel.addons.editors.tiled.TiledTileSet","getPropertiesByGid",0x4c2032e9,"flixel.addons.editors.tiled.TiledTileSet.getPropertiesByGid","flixel/addons/editors/tiled/TiledTileSet.hx",226,0x504d33d5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73e981696bb0370_237_getProperties,"flixel.addons.editors.tiled.TiledTileSet","getProperties",0x8aac6822,"flixel.addons.editors.tiled.TiledTileSet.getProperties","flixel/addons/editors/tiled/TiledTileSet.hx",237,0x504d33d5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73e981696bb0370_241_getImageSourceByGid,"flixel.addons.editors.tiled.TiledTileSet","getImageSourceByGid",0x251eb564,"flixel.addons.editors.tiled.TiledTileSet.getImageSourceByGid","flixel/addons/editors/tiled/TiledTileSet.hx",241,0x504d33d5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73e981696bb0370_252_getImageSource,"flixel.addons.editors.tiled.TiledTileSet","getImageSource",0xba92f787,"flixel.addons.editors.tiled.TiledTileSet.getImageSource","flixel/addons/editors/tiled/TiledTileSet.hx",252,0x504d33d5)
HX_LOCAL_STACK_FRAME(_hx_pos_c73e981696bb0370_258_getRect,"flixel.addons.editors.tiled.TiledTileSet","getRect",0xa87c5c13,"flixel.addons.editors.tiled.TiledTileSet.getRect","flixel/addons/editors/tiled/TiledTileSet.hx",258,0x504d33d5)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledTileSet_obj::__construct( ::Dynamic data,::String __o_rootPath){
            		::String rootPath = __o_rootPath;
            		if (::hx::IsNull(__o_rootPath)) rootPath = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_c73e981696bb0370_45_new)
HXLINE(  46)		 ::Xml source;
HXLINE(  47)		this->numTiles = 16777215;
HXLINE(  48)		this->numRows = (this->numCols = 1);
HXLINE(  51)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::Xml >())) {
HXLINE(  53)			source = ( ( ::Xml)(data) );
            		}
            		else {
HXLINE(  55)			if (::Std_obj::isOfType(data,::hx::ClassOf< ::openfl::utils::ByteArrayData >())) {
HXLINE(  57)				 ::openfl::utils::ByteArrayData bytes = ( ( ::openfl::utils::ByteArrayData)(data) );
HXLINE(  58)				 ::Xml x = ::Xml_obj::parse(bytes->toString());
HXDLIN(  58)				bool source1;
HXDLIN(  58)				if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE(  58)					source1 = (x->nodeType != ::Xml_obj::Element);
            				}
            				else {
HXLINE(  58)					source1 = false;
            				}
HXDLIN(  58)				if (source1) {
HXLINE(  58)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            				}
HXDLIN(  58)				 ::Xml this1 = x;
HXDLIN(  58)				source = this1;
HXLINE(  59)				source = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(source,HX_("tileset",34,81,93,45));
            			}
            			else {
HXLINE(  63)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unknown TMX tileset format",da,21,2b,65)));
            			}
            		}
HXLINE(  66)		int _hx_tmp;
HXDLIN(  66)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("firstgid",d2,49,26,f1))) {
HXLINE(  66)			_hx_tmp = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("firstgid",d2,49,26,f1)))) );
            		}
            		else {
HXLINE(  66)			_hx_tmp = 1;
            		}
HXDLIN(  66)		this->firstGID = _hx_tmp;
HXLINE(  68)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("source",db,b0,31,32))) {
HXLINE(  70)			::String sourcePath = ::haxe::io::Path_obj::normalize((rootPath + ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("source",db,b0,31,32))));
HXLINE(  71)			if (::openfl::utils::Assets_obj::exists(sourcePath,null())) {
HXLINE(  73)				 ::Xml x = ::Xml_obj::parse(::openfl::utils::Assets_obj::getText(sourcePath));
HXDLIN(  73)				bool source1;
HXDLIN(  73)				if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE(  73)					source1 = (x->nodeType != ::Xml_obj::Element);
            				}
            				else {
HXLINE(  73)					source1 = false;
            				}
HXDLIN(  73)				if (source1) {
HXLINE(  73)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            				}
HXDLIN(  73)				 ::Xml this1 = x;
HXDLIN(  73)				source = this1;
HXLINE(  74)				source = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(source,HX_("tileset",34,81,93,45));
            			}
            			else {
HXLINE(  78)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid TSX tileset path: ",e7,ca,61,68) + sourcePath)));
            			}
            		}
HXLINE(  82)		if (!(::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("source",db,b0,31,32)))) {
HXLINE(  84)			 ::Xml node;
HXLINE(  86)			if (::haxe::xml::_Access::HasNodeAccess_Impl__obj::resolve(source,HX_("image",5b,1f,69,bd))) {
HXLINE(  89)				node = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(source,HX_("image",5b,1f,69,bd));
HXLINE(  90)				this->imageSource = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("source",db,b0,31,32));
            			}
            			else {
HXLINE(  95)				node = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(source,HX_("tile",2e,cb,fc,4c));
HXLINE(  96)				this->imageSource = HX_("",00,00,00,00);
HXLINE(  99)				this->tileImagesSources = ::Array_obj< ::Dynamic>::__new();
HXLINE( 101)				{
HXLINE( 101)					int _g = 0;
HXDLIN( 101)					::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(source,HX_("tile",2e,cb,fc,4c));
HXDLIN( 101)					while((_g < _g1->length)){
HXLINE( 101)						 ::Xml node = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 101)						_g = (_g + 1);
HXLINE( 103)						if (!(::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(node,HX_("id",db,5b,00,00)))) {
HXLINE( 105)							continue;
            						}
HXLINE( 108)						int id = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("id",db,5b,00,00)))) );
HXLINE( 109)						this->tileImagesSources[id] =  ::flixel::addons::editors::tiled::TiledImageTile_obj::__alloc( HX_CTX ,node);
            					}
            				}
            			}
HXLINE( 113)			this->name = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("name",4b,72,ff,48));
HXLINE( 115)			int imgWidth = 0;
HXLINE( 116)			if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(node,HX_("width",06,b6,62,ca))) {
HXLINE( 118)				imgWidth = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("width",06,b6,62,ca)))) );
            			}
HXLINE( 120)			int imgHeight = 0;
HXLINE( 121)			if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(node,HX_("height",e7,07,4c,02))) {
HXLINE( 123)				imgHeight = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("height",e7,07,4c,02)))) );
            			}
HXLINE( 126)			if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("tilewidth",18,a4,90,c2))) {
HXLINE( 128)				this->tileWidth = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("tilewidth",18,a4,90,c2)))) );
            			}
HXLINE( 130)			if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("tileheight",95,69,4e,32))) {
HXLINE( 132)				this->tileHeight = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("tileheight",95,69,4e,32)))) );
            			}
HXLINE( 134)			if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("spacing",83,33,bb,91))) {
HXLINE( 136)				this->spacing = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("spacing",83,33,bb,91)))) );
            			}
HXLINE( 138)			if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("margin",2e,70,6d,ba))) {
HXLINE( 140)				this->margin = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("margin",2e,70,6d,ba)))) );
            			}
HXLINE( 144)			this->properties =  ::flixel::addons::editors::tiled::TiledPropertySet_obj::__alloc( HX_CTX );
HXLINE( 145)			{
HXLINE( 145)				int _g = 0;
HXDLIN( 145)				::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(source,HX_("properties",f3,fb,0e,61));
HXDLIN( 145)				while((_g < _g1->length)){
HXLINE( 145)					 ::Xml prop = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 145)					_g = (_g + 1);
HXLINE( 146)					this->properties->extend(prop);
            				}
            			}
HXLINE( 149)			this->tileProps = ::Array_obj< ::Dynamic>::__new();
HXLINE( 150)			this->tileTypes = ::Array_obj< ::String >::__new();
HXLINE( 151)			this->tileProbabilities = ::Array_obj< Float >::__new();
HXLINE( 153)			{
HXLINE( 153)				int _g2 = 0;
HXDLIN( 153)				::Array< ::Dynamic> _g3 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(source,HX_("tile",2e,cb,fc,4c));
HXDLIN( 153)				while((_g2 < _g3->length)){
HXLINE( 153)					 ::Xml node = _g3->__get(_g2).StaticCast<  ::Xml >();
HXDLIN( 153)					_g2 = (_g2 + 1);
HXLINE( 155)					if (!(::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(node,HX_("id",db,5b,00,00)))) {
HXLINE( 157)						continue;
            					}
HXLINE( 160)					int id = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("id",db,5b,00,00)))) );
HXLINE( 162)					if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(node,HX_("type",ba,f2,08,4d))) {
HXLINE( 164)						::String type = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("type",ba,f2,08,4d));
HXLINE( 165)						this->tileTypes[id] = type;
            					}
HXLINE( 168)					if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(node,HX_("probability",b5,e6,d5,0b))) {
HXLINE( 170)						Float probability = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(node,HX_("probability",b5,e6,d5,0b)));
HXLINE( 171)						this->tileProbabilities[id] = probability;
            					}
HXLINE( 174)					this->tileProps[id] =  ::flixel::addons::editors::tiled::TiledTilePropertySet_obj::__alloc( HX_CTX ,id);
HXLINE( 175)					{
HXLINE( 175)						::Dynamic this1 = this->tileProps->__get(id).StaticCast<  ::flixel::addons::editors::tiled::TiledTilePropertySet >()->keys;
HXDLIN( 175)						( ( ::haxe::ds::StringMap)(this1) )->set(HX_("id",db,5b,00,00),::Std_obj::string(id));
            					}
HXLINE( 176)					{
HXLINE( 176)						int _g = 0;
HXDLIN( 176)						::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(node,HX_("properties",f3,fb,0e,61));
HXDLIN( 176)						while((_g < _g1->length)){
HXLINE( 176)							 ::Xml prop = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 176)							_g = (_g + 1);
HXLINE( 178)							this->tileProps->__get(id).StaticCast<  ::flixel::addons::editors::tiled::TiledTilePropertySet >()->extend(prop);
            						}
            					}
HXLINE( 180)					if (::haxe::xml::_Access::HasNodeAccess_Impl__obj::resolve(node,HX_("animation",04,ef,34,4b))) {
HXLINE( 182)						int _g = 0;
HXDLIN( 182)						::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(node,HX_("animation",04,ef,34,4b)),HX_("frame",2d,78,83,06));
HXDLIN( 182)						while((_g < _g1->length)){
HXLINE( 182)							 ::Xml frame = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 182)							_g = (_g + 1);
HXLINE( 184)							 ::flixel::addons::editors::tiled::TiledTilePropertySet _hx_tmp = this->tileProps->__get(id).StaticCast<  ::flixel::addons::editors::tiled::TiledTilePropertySet >();
HXDLIN( 184)							 ::Dynamic _hx_tmp1 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(frame,HX_("tileid",89,ce,28,1e)));
HXDLIN( 184)							_hx_tmp->addAnimationFrame(( (int)(_hx_tmp1) ),::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(frame,HX_("duration",54,0f,8e,14))));
            						}
            					}
HXLINE( 187)					if (::haxe::xml::_Access::HasNodeAccess_Impl__obj::resolve(node,HX_("objectgroup",20,60,f6,75))) {
HXLINE( 189)						int _g = 0;
HXDLIN( 189)						::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(node,HX_("objectgroup",20,60,f6,75)),HX_("object",bf,7e,3f,15));
HXDLIN( 189)						while((_g < _g1->length)){
HXLINE( 189)							 ::Xml object = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 189)							_g = (_g + 1);
HXLINE( 191)							 ::flixel::addons::editors::tiled::TiledObject tiledObject =  ::flixel::addons::editors::tiled::TiledObject_obj::__alloc( HX_CTX ,object,null());
HXLINE( 192)							this->tileProps->__get(id).StaticCast<  ::flixel::addons::editors::tiled::TiledTilePropertySet >()->addTileObject(tiledObject);
            						}
            					}
            				}
            			}
HXLINE( 197)			bool _hx_tmp;
HXDLIN( 197)			if ((this->tileWidth > 0)) {
HXLINE( 197)				_hx_tmp = (this->tileHeight > 0);
            			}
            			else {
HXLINE( 197)				_hx_tmp = false;
            			}
HXDLIN( 197)			if (_hx_tmp) {
HXLINE( 199)				this->numRows = ::Std_obj::_hx_int((( (Float)(imgHeight) ) / ( (Float)(this->tileHeight) )));
HXLINE( 200)				this->numCols = ::Std_obj::_hx_int((( (Float)(imgWidth) ) / ( (Float)(this->tileWidth) )));
HXLINE( 201)				this->numTiles = (this->numRows * this->numCols);
            			}
            		}
            		else {
HXLINE( 206)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TMX tileset misses source image or tiles",09,9d,4a,71)));
            		}
            	}

Dynamic TiledTileSet_obj::__CreateEmpty() { return new TiledTileSet_obj; }

void *TiledTileSet_obj::_hx_vtable = 0;

Dynamic TiledTileSet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiledTileSet_obj > _hx_result = new TiledTileSet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TiledTileSet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x551f3a3d;
}

bool TiledTileSet_obj::hasGid(int Gid){
            	HX_STACKFRAME(&_hx_pos_c73e981696bb0370_212_hasGid)
HXDLIN( 212)		if ((Gid >= this->firstGID)) {
HXDLIN( 212)			return (Gid < (this->firstGID + this->numTiles));
            		}
            		else {
HXDLIN( 212)			return false;
            		}
HXDLIN( 212)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,hasGid,return )

int TiledTileSet_obj::fromGid(int Gid){
            	HX_STACKFRAME(&_hx_pos_c73e981696bb0370_217_fromGid)
HXDLIN( 217)		return (Gid - (this->firstGID - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,fromGid,return )

int TiledTileSet_obj::toGid(int ID){
            	HX_STACKFRAME(&_hx_pos_c73e981696bb0370_222_toGid)
HXDLIN( 222)		return (this->firstGID + ID);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,toGid,return )

 ::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getPropertiesByGid(int Gid){
            	HX_STACKFRAME(&_hx_pos_c73e981696bb0370_226_getPropertiesByGid)
HXLINE( 227)		if (::hx::IsNotNull( this->tileProps )) {
HXLINE( 229)			return this->tileProps->__get((Gid - this->firstGID)).StaticCast<  ::flixel::addons::editors::tiled::TiledTilePropertySet >();
            		}
HXLINE( 232)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getPropertiesByGid,return )

 ::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getProperties(int ID){
            	HX_STACKFRAME(&_hx_pos_c73e981696bb0370_237_getProperties)
HXDLIN( 237)		return this->tileProps->__get(ID).StaticCast<  ::flixel::addons::editors::tiled::TiledTilePropertySet >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getProperties,return )

 ::flixel::addons::editors::tiled::TiledImageTile TiledTileSet_obj::getImageSourceByGid(int Gid){
            	HX_STACKFRAME(&_hx_pos_c73e981696bb0370_241_getImageSourceByGid)
HXLINE( 242)		if (::hx::IsNotNull( this->tileImagesSources )) {
HXLINE( 244)			return this->tileImagesSources->__get((Gid - this->firstGID)).StaticCast<  ::flixel::addons::editors::tiled::TiledImageTile >();
            		}
HXLINE( 247)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getImageSourceByGid,return )

 ::flixel::addons::editors::tiled::TiledImageTile TiledTileSet_obj::getImageSource(int ID){
            	HX_STACKFRAME(&_hx_pos_c73e981696bb0370_252_getImageSource)
HXDLIN( 252)		return this->tileImagesSources->__get(ID).StaticCast<  ::flixel::addons::editors::tiled::TiledImageTile >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getImageSource,return )

 ::openfl::geom::Rectangle TiledTileSet_obj::getRect(int ID){
            	HX_GC_STACKFRAME(&_hx_pos_c73e981696bb0370_258_getRect)
HXDLIN( 258)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,(::hx::Mod(ID,this->numCols) * this->tileWidth),((( (Float)(ID) ) / ( (Float)(this->numCols) )) * ( (Float)(this->tileHeight) )),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getRect,return )


::hx::ObjectPtr< TiledTileSet_obj > TiledTileSet_obj::__new( ::Dynamic data,::String __o_rootPath) {
	::hx::ObjectPtr< TiledTileSet_obj > __this = new TiledTileSet_obj();
	__this->__construct(data,__o_rootPath);
	return __this;
}

::hx::ObjectPtr< TiledTileSet_obj > TiledTileSet_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic data,::String __o_rootPath) {
	TiledTileSet_obj *__this = (TiledTileSet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiledTileSet_obj), true, "flixel.addons.editors.tiled.TiledTileSet"));
	*(void **)__this = TiledTileSet_obj::_hx_vtable;
	__this->__construct(data,__o_rootPath);
	return __this;
}

TiledTileSet_obj::TiledTileSet_obj()
{
}

void TiledTileSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTileSet);
	HX_MARK_MEMBER_NAME(firstGID,"firstGID");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(imageSource,"imageSource");
	HX_MARK_MEMBER_NAME(numTiles,"numTiles");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tileTypes,"tileTypes");
	HX_MARK_MEMBER_NAME(tileProbabilities,"tileProbabilities");
	HX_MARK_MEMBER_NAME(tileProps,"tileProps");
	HX_MARK_MEMBER_NAME(tileImagesSources,"tileImagesSources");
	HX_MARK_END_CLASS();
}

void TiledTileSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstGID,"firstGID");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(imageSource,"imageSource");
	HX_VISIT_MEMBER_NAME(numTiles,"numTiles");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tileTypes,"tileTypes");
	HX_VISIT_MEMBER_NAME(tileProbabilities,"tileProbabilities");
	HX_VISIT_MEMBER_NAME(tileProps,"tileProps");
	HX_VISIT_MEMBER_NAME(tileImagesSources,"tileImagesSources");
}

::hx::Val TiledTileSet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toGid") ) { return ::hx::Val( toGid_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { return ::hx::Val( margin ); }
		if (HX_FIELD_EQ(inName,"hasGid") ) { return ::hx::Val( hasGid_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return ::hx::Val( spacing ); }
		if (HX_FIELD_EQ(inName,"numRows") ) { return ::hx::Val( numRows ); }
		if (HX_FIELD_EQ(inName,"numCols") ) { return ::hx::Val( numCols ); }
		if (HX_FIELD_EQ(inName,"fromGid") ) { return ::hx::Val( fromGid_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return ::hx::Val( getRect_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { return ::hx::Val( firstGID ); }
		if (HX_FIELD_EQ(inName,"numTiles") ) { return ::hx::Val( numTiles ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return ::hx::Val( tileWidth ); }
		if (HX_FIELD_EQ(inName,"tileTypes") ) { return ::hx::Val( tileTypes ); }
		if (HX_FIELD_EQ(inName,"tileProps") ) { return ::hx::Val( tileProps ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return ::hx::Val( tileHeight ); }
		if (HX_FIELD_EQ(inName,"properties") ) { return ::hx::Val( properties ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { return ::hx::Val( imageSource ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getProperties") ) { return ::hx::Val( getProperties_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getImageSource") ) { return ::hx::Val( getImageSource_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tileProbabilities") ) { return ::hx::Val( tileProbabilities ); }
		if (HX_FIELD_EQ(inName,"tileImagesSources") ) { return ::hx::Val( tileImagesSources ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPropertiesByGid") ) { return ::hx::Val( getPropertiesByGid_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getImageSourceByGid") ) { return ::hx::Val( getImageSourceByGid_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiledTileSet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { firstGID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileTypes") ) { tileTypes=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileProps") ) { tileProps=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast<  ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { imageSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"tileProbabilities") ) { tileProbabilities=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileImagesSources") ) { tileImagesSources=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTileSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("firstGID",b2,e5,0d,f1));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("tileWidth",f8,13,be,55));
	outFields->push(HX_("tileHeight",b5,dd,e2,66));
	outFields->push(HX_("spacing",83,33,bb,91));
	outFields->push(HX_("margin",2e,70,6d,ba));
	outFields->push(HX_("imageSource",96,ba,71,7a));
	outFields->push(HX_("numTiles",5f,11,45,cd));
	outFields->push(HX_("numRows",7f,9a,2f,9f));
	outFields->push(HX_("numCols",99,5d,45,95));
	outFields->push(HX_("properties",f3,fb,0e,61));
	outFields->push(HX_("tileTypes",6b,ce,26,a6));
	outFields->push(HX_("tileProbabilities",45,92,ce,13));
	outFields->push(HX_("tileProps",62,45,eb,53));
	outFields->push(HX_("tileImagesSources",52,8d,e9,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiledTileSet_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TiledTileSet_obj,firstGID),HX_("firstGID",b2,e5,0d,f1)},
	{::hx::fsString,(int)offsetof(TiledTileSet_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(TiledTileSet_obj,tileWidth),HX_("tileWidth",f8,13,be,55)},
	{::hx::fsInt,(int)offsetof(TiledTileSet_obj,tileHeight),HX_("tileHeight",b5,dd,e2,66)},
	{::hx::fsInt,(int)offsetof(TiledTileSet_obj,spacing),HX_("spacing",83,33,bb,91)},
	{::hx::fsInt,(int)offsetof(TiledTileSet_obj,margin),HX_("margin",2e,70,6d,ba)},
	{::hx::fsString,(int)offsetof(TiledTileSet_obj,imageSource),HX_("imageSource",96,ba,71,7a)},
	{::hx::fsInt,(int)offsetof(TiledTileSet_obj,numTiles),HX_("numTiles",5f,11,45,cd)},
	{::hx::fsInt,(int)offsetof(TiledTileSet_obj,numRows),HX_("numRows",7f,9a,2f,9f)},
	{::hx::fsInt,(int)offsetof(TiledTileSet_obj,numCols),HX_("numCols",99,5d,45,95)},
	{::hx::fsObject /*  ::flixel::addons::editors::tiled::TiledPropertySet */ ,(int)offsetof(TiledTileSet_obj,properties),HX_("properties",f3,fb,0e,61)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TiledTileSet_obj,tileTypes),HX_("tileTypes",6b,ce,26,a6)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(TiledTileSet_obj,tileProbabilities),HX_("tileProbabilities",45,92,ce,13)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TiledTileSet_obj,tileProps),HX_("tileProps",62,45,eb,53)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TiledTileSet_obj,tileImagesSources),HX_("tileImagesSources",52,8d,e9,37)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TiledTileSet_obj_sStaticStorageInfo = 0;
#endif

static ::String TiledTileSet_obj_sMemberFields[] = {
	HX_("firstGID",b2,e5,0d,f1),
	HX_("name",4b,72,ff,48),
	HX_("tileWidth",f8,13,be,55),
	HX_("tileHeight",b5,dd,e2,66),
	HX_("spacing",83,33,bb,91),
	HX_("margin",2e,70,6d,ba),
	HX_("imageSource",96,ba,71,7a),
	HX_("numTiles",5f,11,45,cd),
	HX_("numRows",7f,9a,2f,9f),
	HX_("numCols",99,5d,45,95),
	HX_("properties",f3,fb,0e,61),
	HX_("tileTypes",6b,ce,26,a6),
	HX_("tileProbabilities",45,92,ce,13),
	HX_("tileProps",62,45,eb,53),
	HX_("tileImagesSources",52,8d,e9,37),
	HX_("hasGid",c8,90,35,bb),
	HX_("fromGid",b8,54,f9,57),
	HX_("toGid",47,35,10,14),
	HX_("getPropertiesByGid",82,c9,e4,cb),
	HX_("getProperties",29,58,81,bd),
	HX_("getImageSourceByGid",ab,e4,5d,71),
	HX_("getImageSource",a0,0d,10,02),
	HX_("getRect",da,fc,29,1e),
	::String(null()) };

::hx::Class TiledTileSet_obj::__mClass;

void TiledTileSet_obj::__register()
{
	TiledTileSet_obj _hx_dummy;
	TiledTileSet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.tiled.TiledTileSet",a7,5e,38,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiledTileSet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiledTileSet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledTileSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledTileSet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
