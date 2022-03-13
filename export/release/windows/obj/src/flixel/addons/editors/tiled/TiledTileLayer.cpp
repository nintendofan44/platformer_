#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayerType
#include <flixel/addons/editors/tiled/TiledLayerType.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#include <flixel/addons/editors/tiled/TiledTile.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileLayer
#include <flixel/addons/editors/tiled/TiledTileLayer.h>
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
#ifndef INCLUDED_haxe_xml__Access_Access_Impl_
#include <haxe/xml/_Access/Access_Impl_.h>
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
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6e8a9623e9d30997_29_new,"flixel.addons.editors.tiled.TiledTileLayer","new",0x92503408,"flixel.addons.editors.tiled.TiledTileLayer.new","flixel/addons/editors/tiled/TiledTileLayer.hx",29,0x5f61a546)
HX_LOCAL_STACK_FRAME(_hx_pos_6e8a9623e9d30997_48_getByteArrayData,"flixel.addons.editors.tiled.TiledTileLayer","getByteArrayData",0x4a9ded1d,"flixel.addons.editors.tiled.TiledTileLayer.getByteArrayData","flixel/addons/editors/tiled/TiledTileLayer.hx",48,0x5f61a546)
HX_LOCAL_STACK_FRAME(_hx_pos_6e8a9623e9d30997_85_base64ToByteArray,"flixel.addons.editors.tiled.TiledTileLayer","base64ToByteArray",0x153e24cf,"flixel.addons.editors.tiled.TiledTileLayer.base64ToByteArray","flixel/addons/editors/tiled/TiledTileLayer.hx",85,0x5f61a546)
HX_LOCAL_STACK_FRAME(_hx_pos_6e8a9623e9d30997_136_resolveTile,"flixel.addons.editors.tiled.TiledTileLayer","resolveTile",0xa03c3be2,"flixel.addons.editors.tiled.TiledTileLayer.resolveTile","flixel/addons/editors/tiled/TiledTileLayer.hx",136,0x5f61a546)
HX_LOCAL_STACK_FRAME(_hx_pos_6e8a9623e9d30997_153_get_encoding,"flixel.addons.editors.tiled.TiledTileLayer","get_encoding",0x31302834,"flixel.addons.editors.tiled.TiledTileLayer.get_encoding","flixel/addons/editors/tiled/TiledTileLayer.hx",153,0x5f61a546)
HX_LOCAL_STACK_FRAME(_hx_pos_6e8a9623e9d30997_162_get_csvData,"flixel.addons.editors.tiled.TiledTileLayer","get_csvData",0x6c5b0ccf,"flixel.addons.editors.tiled.TiledTileLayer.get_csvData","flixel/addons/editors/tiled/TiledTileLayer.hx",162,0x5f61a546)
HX_LOCAL_STACK_FRAME(_hx_pos_6e8a9623e9d30997_178_get_tileArray,"flixel.addons.editors.tiled.TiledTileLayer","get_tileArray",0x6cbb250a,"flixel.addons.editors.tiled.TiledTileLayer.get_tileArray","flixel/addons/editors/tiled/TiledTileLayer.hx",178,0x5f61a546)
HX_LOCAL_STACK_FRAME(_hx_pos_6e8a9623e9d30997_26_boot,"flixel.addons.editors.tiled.TiledTileLayer","boot",0x6bf6538a,"flixel.addons.editors.tiled.TiledTileLayer.boot","flixel/addons/editors/tiled/TiledTileLayer.hx",26,0x5f61a546)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledTileLayer_obj::__construct( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent){
            	HX_STACKFRAME(&_hx_pos_6e8a9623e9d30997_29_new)
HXLINE(  30)		super::__construct(source,parent);
HXLINE(  31)		this->type = ::flixel::addons::editors::tiled::TiledLayerType_obj::TILE_dyn();
HXLINE(  32)		int _hx_tmp;
HXDLIN(  32)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("x",78,00,00,00))) {
HXLINE(  32)			_hx_tmp = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("x",78,00,00,00)))) );
            		}
            		else {
HXLINE(  32)			_hx_tmp = 0;
            		}
HXDLIN(  32)		this->x = _hx_tmp;
HXLINE(  33)		int _hx_tmp1;
HXDLIN(  33)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(source,HX_("y",79,00,00,00))) {
HXLINE(  33)			_hx_tmp1 = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("y",79,00,00,00)))) );
            		}
            		else {
HXLINE(  33)			_hx_tmp1 = 0;
            		}
HXDLIN(  33)		this->y = _hx_tmp1;
HXLINE(  34)		this->width = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("width",06,b6,62,ca)))) );
HXLINE(  35)		this->height = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(source,HX_("height",e7,07,4c,02)))) );
HXLINE(  37)		this->tiles = ::Array_obj< ::Dynamic>::__new();
HXLINE(  40)		this->xmlData = ::haxe::xml::_Access::NodeAccess_Impl__obj::resolve(source,HX_("data",2a,56,63,42));
HXLINE(  41)		if (::hx::IsNull( this->xmlData )) {
HXLINE(  43)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Error loading TiledLayer level data",8f,52,0a,f4)));
            		}
            	}

Dynamic TiledTileLayer_obj::__CreateEmpty() { return new TiledTileLayer_obj; }

void *TiledTileLayer_obj::_hx_vtable = 0;

Dynamic TiledTileLayer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiledTileLayer_obj > _hx_result = new TiledTileLayer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TiledTileLayer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3ca13d2c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3ca13d2c;
	} else {
		return inClassId==(int)0x4dd3cd1e;
	}
}

 ::openfl::utils::ByteArrayData TiledTileLayer_obj::getByteArrayData(){
            	HX_STACKFRAME(&_hx_pos_6e8a9623e9d30997_48_getByteArrayData)
HXLINE(  49)		 ::openfl::utils::ByteArrayData result = null();
HXLINE(  51)		if ((this->get_encoding() == HX_("base64",8f,fd,27,55))) {
HXLINE(  53)			::String chunk = ::haxe::xml::_Access::Access_Impl__obj::get_innerData(this->xmlData);
HXLINE(  54)			bool compressed = false;
HXLINE(  56)			result = this->base64ToByteArray(chunk);
HXLINE(  57)			result->_hx___endian = 1;
HXLINE(  59)			if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(this->xmlData,HX_("compression",66,b7,2b,77))) {
HXLINE(  61)				if ((::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->xmlData,HX_("compression",66,b7,2b,77)) == HX_("zlib",0b,57,f6,50))) {
HXLINE(  64)					compressed = true;
            				}
            				else {
HXLINE(  66)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("TiledLayer - data compression type not supported!",ce,90,21,a6)));
            				}
            			}
HXLINE(  70)			if (compressed) {
HXLINE(  72)				 ::Dynamic algorithm = null();
HXDLIN(  72)				result->uncompress(algorithm);
            			}
            		}
            		else {
HXLINE(  77)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Must use base64 encoding in order to get tileArray data.",41,92,e6,4d)));
            		}
HXLINE(  80)		result->_hx___endian = 1;
HXLINE(  81)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TiledTileLayer_obj,getByteArrayData,return )

 ::openfl::utils::ByteArrayData TiledTileLayer_obj::base64ToByteArray(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_6e8a9623e9d30997_85_base64ToByteArray)
HXLINE(  86)		 ::openfl::utils::ByteArrayData this1 =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXDLIN(  86)		 ::openfl::utils::ByteArrayData output = this1;
HXLINE(  89)		::Array< int > lookup = ::Array_obj< int >::__new();
HXLINE(  91)		{
HXLINE(  91)			int _g = 0;
HXDLIN(  91)			int _g1 = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=",da,a1,d5,a3).length;
HXDLIN(  91)			while((_g < _g1)){
HXLINE(  91)				_g = (_g + 1);
HXDLIN(  91)				int c = (_g - 1);
HXLINE(  93)				lookup[( (int)(HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=",da,a1,d5,a3).charCodeAt(c)) )] = c;
            			}
            		}
HXLINE(  96)		int i = 0;
HXLINE(  97)		while((i < (data.length - 3))){
HXLINE( 100)			bool _hx_tmp;
HXDLIN( 100)			bool _hx_tmp1;
HXDLIN( 100)			if ((data.charAt(i) != HX_(" ",20,00,00,00))) {
HXLINE( 100)				_hx_tmp1 = (data.charAt(i) == HX_("\n",0a,00,00,00));
            			}
            			else {
HXLINE( 100)				_hx_tmp1 = true;
            			}
HXDLIN( 100)			if (!(_hx_tmp1)) {
HXLINE( 100)				_hx_tmp = (data.charAt(i) == HX_("\r",0d,00,00,00));
            			}
            			else {
HXLINE( 100)				_hx_tmp = true;
            			}
HXDLIN( 100)			if (_hx_tmp) {
HXLINE( 102)				i = (i + 1);
HXLINE( 103)				continue;
            			}
HXLINE( 107)			int a0 = lookup->__get(( (int)(data.charCodeAt(i)) ));
HXLINE( 108)			int a1 = lookup->__get(( (int)(data.charCodeAt((i + 1))) ));
HXLINE( 109)			int a2 = lookup->__get(( (int)(data.charCodeAt((i + 2))) ));
HXLINE( 110)			int a3 = lookup->__get(( (int)(data.charCodeAt((i + 3))) ));
HXLINE( 113)			if ((a1 < 64)) {
HXLINE( 115)				output->writeByte(((a0 << 2) + ((a1 & 48) >> 4)));
            			}
HXLINE( 117)			if ((a2 < 64)) {
HXLINE( 119)				output->writeByte((((a1 & 15) << 4) + ((a2 & 60) >> 2)));
            			}
HXLINE( 121)			if ((a3 < 64)) {
HXLINE( 123)				output->writeByte((((a2 & 3) << 6) + a3));
            			}
HXLINE( 126)			i = (i + 4);
            		}
HXLINE( 130)		output->position = 0;
HXLINE( 132)		return output;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileLayer_obj,base64ToByteArray,return )

int TiledTileLayer_obj::resolveTile(int globalTileId){
            	HX_GC_STACKFRAME(&_hx_pos_6e8a9623e9d30997_136_resolveTile)
HXLINE( 137)		 ::flixel::addons::editors::tiled::TiledTile tile =  ::flixel::addons::editors::tiled::TiledTile_obj::__alloc( HX_CTX ,globalTileId);
HXLINE( 139)		int tilesetID = tile->tilesetID;
HXLINE( 140)		{
HXLINE( 140)			 ::Dynamic tileset = this->map->tilesets->iterator();
HXDLIN( 140)			while(( (bool)(tileset->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 140)				 ::flixel::addons::editors::tiled::TiledTileSet tileset1 = ( ( ::flixel::addons::editors::tiled::TiledTileSet)(tileset->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 142)				bool _hx_tmp;
HXDLIN( 142)				if ((tilesetID >= tileset1->firstGID)) {
HXLINE( 142)					_hx_tmp = (tilesetID < (tileset1->firstGID + tileset1->numTiles));
            				}
            				else {
HXLINE( 142)					_hx_tmp = false;
            				}
HXDLIN( 142)				if (_hx_tmp) {
HXLINE( 144)					this->tiles->push(tile);
HXLINE( 145)					return tilesetID;
            				}
            			}
            		}
HXLINE( 148)		this->tiles->push(null());
HXLINE( 149)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileLayer_obj,resolveTile,return )

::String TiledTileLayer_obj::get_encoding(){
            	HX_STACKFRAME(&_hx_pos_6e8a9623e9d30997_153_get_encoding)
HXLINE( 154)		if (::hx::IsNull( this->encoding )) {
HXLINE( 156)			this->encoding = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->xmlData,HX_("encoding",d3,8c,58,30));
            		}
HXLINE( 158)		return this->encoding;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TiledTileLayer_obj,get_encoding,return )

::String TiledTileLayer_obj::get_csvData(){
            	HX_STACKFRAME(&_hx_pos_6e8a9623e9d30997_162_get_csvData)
HXLINE( 163)		if (::hx::IsNull( this->csvData )) {
HXLINE( 165)			if ((::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(this->xmlData,HX_("encoding",d3,8c,58,30)) == HX_("csv",c6,83,4b,00))) {
HXLINE( 167)				this->csvData = ::StringTools_obj::ltrim(::haxe::xml::_Access::Access_Impl__obj::get_innerData(this->xmlData));
            			}
            			else {
HXLINE( 171)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Must use CSV encoding in order to get CSV data.",05,1a,fa,a5)));
            			}
            		}
HXLINE( 174)		return this->csvData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TiledTileLayer_obj,get_csvData,return )

::Array< int > TiledTileLayer_obj::get_tileArray(){
            	HX_STACKFRAME(&_hx_pos_6e8a9623e9d30997_178_get_tileArray)
HXLINE( 179)		if (::hx::IsNull( this->tileArray )) {
HXLINE( 181)			this->tileArray = ::Array_obj< int >::__new();
HXLINE( 183)			if ((this->get_encoding() == HX_("csv",c6,83,4b,00))) {
HXLINE( 185)				::String endline;
HXDLIN( 185)				if ((this->get_csvData().indexOf(HX_("\r\n",5d,0b,00,00),null()) != -1)) {
HXLINE( 185)					endline = HX_("\r\n",5d,0b,00,00);
            				}
            				else {
HXLINE( 185)					endline = HX_("\n",0a,00,00,00);
            				}
HXLINE( 186)				::Array< ::String > rows = this->get_csvData().split(endline);
HXLINE( 188)				{
HXLINE( 188)					int _g = 0;
HXDLIN( 188)					while((_g < rows->length)){
HXLINE( 188)						::String row = rows->__get(_g);
HXDLIN( 188)						_g = (_g + 1);
HXLINE( 190)						::Array< ::String > cells = row.split(HX_(",",2c,00,00,00));
HXLINE( 191)						{
HXLINE( 191)							int _g1 = 0;
HXDLIN( 191)							while((_g1 < cells->length)){
HXLINE( 191)								::String cell = cells->__get(_g1);
HXDLIN( 191)								_g1 = (_g1 + 1);
HXLINE( 193)								if ((cell != HX_("",00,00,00,00))) {
HXLINE( 195)									::Array< int > _hx_tmp = this->tileArray;
HXDLIN( 195)									_hx_tmp->push(this->resolveTile(( (int)(::Std_obj::parseInt(cell)) )));
            								}
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 202)				 ::openfl::utils::ByteArrayData mapData = this->getByteArrayData();
HXLINE( 204)				if (::hx::IsNull( mapData )) {
HXLINE( 206)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Must use Base64 encoding (with or without zlip compression) in order to get 1D Array.",13,2f,11,cb)));
            				}
HXLINE( 209)				while(true){
HXLINE( 209)					int _hx_int = mapData->position;
HXDLIN( 209)					Float _hx_tmp;
HXDLIN( 209)					if ((_hx_int < 0)) {
HXLINE( 209)						_hx_tmp = (((Float)4294967296.0) + _hx_int);
            					}
            					else {
HXLINE( 209)						_hx_tmp = (_hx_int + ((Float)0.0));
            					}
HXDLIN( 209)					int _hx_tmp1 = ::Std_obj::_hx_int(_hx_tmp);
HXDLIN( 209)					int int1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(mapData);
HXDLIN( 209)					Float _hx_tmp2;
HXDLIN( 209)					if ((int1 < 0)) {
HXLINE( 209)						_hx_tmp2 = (((Float)4294967296.0) + int1);
            					}
            					else {
HXLINE( 209)						_hx_tmp2 = (int1 + ((Float)0.0));
            					}
HXDLIN( 209)					if (!((_hx_tmp1 < ::Std_obj::_hx_int(_hx_tmp2)))) {
HXLINE( 209)						goto _hx_goto_11;
            					}
HXLINE( 211)					::Array< int > _hx_tmp3 = this->tileArray;
HXDLIN( 211)					_hx_tmp3->push(this->resolveTile(mapData->readUnsignedInt()));
            				}
            				_hx_goto_11:;
            			}
            		}
HXLINE( 216)		return this->tileArray;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TiledTileLayer_obj,get_tileArray,return )

::String TiledTileLayer_obj::BASE64_CHARS;


::hx::ObjectPtr< TiledTileLayer_obj > TiledTileLayer_obj::__new( ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent) {
	::hx::ObjectPtr< TiledTileLayer_obj > __this = new TiledTileLayer_obj();
	__this->__construct(source,parent);
	return __this;
}

::hx::ObjectPtr< TiledTileLayer_obj > TiledTileLayer_obj::__alloc(::hx::Ctx *_hx_ctx, ::Xml source, ::flixel::addons::editors::tiled::TiledMap parent) {
	TiledTileLayer_obj *__this = (TiledTileLayer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TiledTileLayer_obj), true, "flixel.addons.editors.tiled.TiledTileLayer"));
	*(void **)__this = TiledTileLayer_obj::_hx_vtable;
	__this->__construct(source,parent);
	return __this;
}

TiledTileLayer_obj::TiledTileLayer_obj()
{
}

void TiledTileLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTileLayer);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(encoding,"encoding");
	HX_MARK_MEMBER_NAME(csvData,"csvData");
	HX_MARK_MEMBER_NAME(tileArray,"tileArray");
	HX_MARK_MEMBER_NAME(xmlData,"xmlData");
	 ::flixel::addons::editors::tiled::TiledLayer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledTileLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(encoding,"encoding");
	HX_VISIT_MEMBER_NAME(csvData,"csvData");
	HX_VISIT_MEMBER_NAME(tileArray,"tileArray");
	HX_VISIT_MEMBER_NAME(xmlData,"xmlData");
	 ::flixel::addons::editors::tiled::TiledLayer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TiledTileLayer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"tiles") ) { return ::hx::Val( tiles ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"csvData") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_csvData() : csvData ); }
		if (HX_FIELD_EQ(inName,"xmlData") ) { return ::hx::Val( xmlData ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"encoding") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_encoding() : encoding ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_tileArray() : tileArray ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveTile") ) { return ::hx::Val( resolveTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_csvData") ) { return ::hx::Val( get_csvData_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_encoding") ) { return ::hx::Val( get_encoding_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileArray") ) { return ::hx::Val( get_tileArray_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getByteArrayData") ) { return ::hx::Val( getByteArrayData_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"base64ToByteArray") ) { return ::hx::Val( base64ToByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiledTileLayer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"csvData") ) { csvData=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xmlData") ) { xmlData=inValue.Cast<  ::Xml >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"encoding") ) { encoding=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { tileArray=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTileLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("tiles",85,fd,34,10));
	outFields->push(HX_("encoding",d3,8c,58,30));
	outFields->push(HX_("csvData",10,61,5c,2e));
	outFields->push(HX_("tileArray",8b,cb,ea,b0));
	outFields->push(HX_("xmlData",a1,27,79,6f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiledTileLayer_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TiledTileLayer_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(TiledTileLayer_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsInt,(int)offsetof(TiledTileLayer_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(TiledTileLayer_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TiledTileLayer_obj,tiles),HX_("tiles",85,fd,34,10)},
	{::hx::fsString,(int)offsetof(TiledTileLayer_obj,encoding),HX_("encoding",d3,8c,58,30)},
	{::hx::fsString,(int)offsetof(TiledTileLayer_obj,csvData),HX_("csvData",10,61,5c,2e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(TiledTileLayer_obj,tileArray),HX_("tileArray",8b,cb,ea,b0)},
	{::hx::fsObject /*  ::Xml */ ,(int)offsetof(TiledTileLayer_obj,xmlData),HX_("xmlData",a1,27,79,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TiledTileLayer_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &TiledTileLayer_obj::BASE64_CHARS,HX_("BASE64_CHARS",cd,f6,92,21)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TiledTileLayer_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("tiles",85,fd,34,10),
	HX_("encoding",d3,8c,58,30),
	HX_("csvData",10,61,5c,2e),
	HX_("tileArray",8b,cb,ea,b0),
	HX_("xmlData",a1,27,79,6f),
	HX_("getByteArrayData",c5,79,1d,a1),
	HX_("base64ToByteArray",27,ab,59,6e),
	HX_("resolveTile",3a,f0,37,e8),
	HX_("get_encoding",dc,40,72,e5),
	HX_("get_csvData",27,c1,56,b4),
	HX_("get_tileArray",62,9f,4e,72),
	::String(null()) };

static void TiledTileLayer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTileLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TiledTileLayer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTileLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#endif

::hx::Class TiledTileLayer_obj::__mClass;

static ::String TiledTileLayer_obj_sStaticFields[] = {
	HX_("BASE64_CHARS",cd,f6,92,21),
	::String(null())
};

void TiledTileLayer_obj::__register()
{
	TiledTileLayer_obj _hx_dummy;
	TiledTileLayer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.tiled.TiledTileLayer",16,d0,9b,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TiledTileLayer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TiledTileLayer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiledTileLayer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiledTileLayer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TiledTileLayer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledTileLayer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledTileLayer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TiledTileLayer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6e8a9623e9d30997_26_boot)
HXDLIN(  26)		BASE64_CHARS = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=",da,a1,d5,a3);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
