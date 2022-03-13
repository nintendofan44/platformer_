#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_openfl_display__internal_SamplerState
#include <openfl/display/_internal/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_AGALConverter
#include <openfl/display3D/_internal/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_RegisterMap
#include <openfl/display3D/_internal/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_DestRegister
#include <openfl/display3D/_internal/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_ProgramType
#include <openfl/display3D/_internal/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_RegisterUsage
#include <openfl/display3D/_internal/_AGALConverter/RegisterUsage.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SamplerRegister
#include <openfl/display3D/_internal/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SourceRegister
#include <openfl/display3D/_internal/_AGALConverter/SourceRegister.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_bb48f68540be485a_27_prefixFromType,"openfl.display3D._internal.AGALConverter","prefixFromType",0x1017c240,"openfl.display3D._internal.AGALConverter.prefixFromType","openfl/display3D/_internal/AGALConverter.hx",27,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_bb48f68540be485a_47_readUInt64,"openfl.display3D._internal.AGALConverter","readUInt64",0xc091bd78,"openfl.display3D._internal.AGALConverter.readUInt64","openfl/display3D/_internal/AGALConverter.hx",47,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_bb48f68540be485a_54_convertToGLSL,"openfl.display3D._internal.AGALConverter","convertToGLSL",0x5d4ef142,"openfl.display3D._internal.AGALConverter.convertToGLSL","openfl/display3D/_internal/AGALConverter.hx",54,0x4de1651d)
static const ::String _hx_array_data_6ed82be4_4[] = {
	HX_("\t",09,00,00,00),
};
static const ::String _hx_array_data_6ed82be4_5[] = {
	HX_("\t} else {\n",6a,88,3f,f9),
};
static const ::String _hx_array_data_6ed82be4_6[] = {
	HX_("\t}",54,08,00,00),
};
static const ::String _hx_array_data_6ed82be4_7[] = {
	HX_("\t} else {\n",6a,88,3f,f9),
};
static const ::String _hx_array_data_6ed82be4_8[] = {
	HX_("\t}",54,08,00,00),
};
static const ::String _hx_array_data_6ed82be4_9[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_6ed82be4_10[] = {
	HX_("#version 100\n",24,25,05,19),
};
static const ::String _hx_array_data_6ed82be4_11[] = {
	HX_("#ifdef GL_FRAGMENT_PRECISION_HIGH\n",97,28,cb,f3),
};
static const ::String _hx_array_data_6ed82be4_12[] = {
	HX_("precision highp float;\n",57,4a,f7,14),
};
static const ::String _hx_array_data_6ed82be4_13[] = {
	HX_("#else\n",2e,de,b0,6d),
};
static const ::String _hx_array_data_6ed82be4_14[] = {
	HX_("precision mediump float;\n",64,96,1e,cd),
};
static const ::String _hx_array_data_6ed82be4_15[] = {
	HX_("#endif\n",f5,d8,f7,a9),
};
static const ::String _hx_array_data_6ed82be4_16[] = {
	HX_("#version 120\n",a6,a9,06,19),
};
static const ::String _hx_array_data_6ed82be4_17[] = {
	HX_("uniform vec4 vcPositionScale;\n",cf,aa,4f,18),
};
static const ::String _hx_array_data_6ed82be4_18[] = {
	HX_("void main() {\n",49,b0,bf,fb),
};
static const ::String _hx_array_data_6ed82be4_19[] = {
	HX_("\tgl_Position *= vcPositionScale;\n",7c,ad,85,8d),
};
static const ::String _hx_array_data_6ed82be4_20[] = {
	HX_("}\n",ed,6c,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_bb48f68540be485a_21_boot,"openfl.display3D._internal.AGALConverter","boot",0x01946cfc,"openfl.display3D._internal.AGALConverter.boot","openfl/display3D/_internal/AGALConverter.hx",21,0x4de1651d)
namespace openfl{
namespace display3D{
namespace _internal{

void AGALConverter_obj::__construct() { }

Dynamic AGALConverter_obj::__CreateEmpty() { return new AGALConverter_obj; }

void *AGALConverter_obj::_hx_vtable = 0;

Dynamic AGALConverter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AGALConverter_obj > _hx_result = new AGALConverter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AGALConverter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cd8d5b2;
}

 ::Dynamic AGALConverter_obj::limitedProfile;

::String AGALConverter_obj::prefixFromType(int regType, ::openfl::display3D::_internal::_AGALConverter::ProgramType programType){
            	HX_GC_STACKFRAME(&_hx_pos_bb48f68540be485a_27_prefixFromType)
HXDLIN(  27)		switch((int)(regType)){
            			case (int)0: {
HXLINE(  30)				return HX_("va",2b,67,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE(  32)				if (::hx::IsPointerEq( programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE(  32)					return HX_("vc",2d,67,00,00);
            				}
            				else {
HXLINE(  32)					return HX_("fc",3d,59,00,00);
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  34)				if (::hx::IsPointerEq( programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE(  34)					return HX_("vt",3e,67,00,00);
            				}
            				else {
HXLINE(  34)					return HX_("ft",4e,59,00,00);
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  36)				return HX_("output_",3e,12,6c,e4);
            			}
            			break;
            			case (int)4: {
HXLINE(  38)				return HX_("v",76,00,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(  40)				return HX_("sampler",08,c5,c9,83);
            			}
            			break;
            			default:{
HXLINE(  42)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Invalid data!",ae,d8,c0,b8))));
            			}
            		}
HXLINE(  27)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGALConverter_obj,prefixFromType,return )

 cpp::Int64Struct AGALConverter_obj::readUInt64( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_bb48f68540be485a_47_readUInt64)
HXLINE(  48)		int low = byteArray->readInt();
HXLINE(  49)		int high = byteArray->readInt();
HXLINE(  50)		return _hx_int64_make(high,low);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AGALConverter_obj,readUInt64,return )

::String AGALConverter_obj::convertToGLSL( ::openfl::utils::ByteArrayData agal,::Array< ::Dynamic> samplerState){
            	HX_GC_STACKFRAME(&_hx_pos_bb48f68540be485a_54_convertToGLSL)
HXLINE(  55)		agal->position = 0;
HXLINE(  56)		agal->_hx___endian = 1;
HXLINE(  58)		int magic = (agal->readByte() & 255);
HXLINE(  60)		if ((magic == 176)) {
HXLINE(  63)			return agal->readUTF();
            		}
HXLINE(  66)		if ((magic != 160)) {
HXLINE(  68)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Magic value must be 0xA0, may not be AGAL",33,cd,d9,2e))));
            		}
HXLINE(  71)		int version = agal->readInt();
HXLINE(  73)		if ((version != 1)) {
HXLINE(  75)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Version must be 1",e3,ba,ef,98))));
            		}
HXLINE(  78)		int shaderTypeID = (agal->readByte() & 255);
HXLINE(  80)		if ((shaderTypeID != 161)) {
HXLINE(  82)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("Shader type ID must be 0xA1",38,36,8f,05))));
            		}
HXLINE(  85)		 ::openfl::display3D::_internal::_AGALConverter::ProgramType programType;
HXDLIN(  85)		if (((agal->readByte() & 255) == 0)) {
HXLINE(  85)			programType = ::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn();
            		}
            		else {
HXLINE(  85)			programType = ::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::FRAGMENT_dyn();
            		}
HXLINE(  87)		 ::openfl::display3D::_internal::RegisterMap map =  ::openfl::display3D::_internal::RegisterMap_obj::__alloc( HX_CTX );
HXLINE(  88)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  90)		while(true){
HXLINE(  90)			int a = agal->position;
HXDLIN(  90)			int b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(agal);
HXDLIN(  90)			bool aNeg = (b < 0);
HXDLIN(  90)			bool bNeg = (a < 0);
HXDLIN(  90)			bool _hx_tmp;
HXDLIN(  90)			if ((aNeg != bNeg)) {
HXLINE(  90)				_hx_tmp = aNeg;
            			}
            			else {
HXLINE(  90)				_hx_tmp = (b > a);
            			}
HXDLIN(  90)			if (!(_hx_tmp)) {
HXLINE(  90)				goto _hx_goto_2;
            			}
HXLINE(  93)			int opcode = agal->readInt();
HXLINE(  94)			int dest = agal->readUnsignedInt();
HXLINE(  95)			 cpp::Int64Struct source1 = ::openfl::display3D::_internal::AGALConverter_obj::readUInt64(agal);
HXLINE(  96)			 cpp::Int64Struct source2 = ::openfl::display3D::_internal::AGALConverter_obj::readUInt64(agal);
HXLINE(  99)			 ::openfl::display3D::_internal::_AGALConverter::DestRegister dr = ::openfl::display3D::_internal::_AGALConverter::DestRegister_obj::parse(dest,programType);
HXLINE( 100)			 ::openfl::display3D::_internal::_AGALConverter::SourceRegister sr1 = ::openfl::display3D::_internal::_AGALConverter::SourceRegister_obj::parse(source1,programType,dr->mask);
HXLINE( 101)			 ::openfl::display3D::_internal::_AGALConverter::SourceRegister sr2 = ::openfl::display3D::_internal::_AGALConverter::SourceRegister_obj::parse(source2,programType,dr->mask);
HXLINE( 104)			{
HXLINE( 104)				if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 104)					sb->flush();
            				}
HXDLIN( 104)				if (::hx::IsNull( sb->b )) {
HXLINE( 104)					sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_4,1);
            				}
            				else {
HXLINE( 104)					sb->b->push(HX_("\t",09,00,00,00));
            				}
            			}
HXLINE( 106)			switch((int)(opcode)){
            				case (int)0: {
HXLINE( 110)					{
HXLINE( 110)						::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 110)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("; // mov",19,49,64,51));
HXDLIN( 110)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 110)							sb->flush();
            						}
HXDLIN( 110)						if (::hx::IsNull( sb->b )) {
HXLINE( 110)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 110)							::Array< ::String > sb1 = sb->b;
HXDLIN( 110)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 111)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 112)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)1: {
HXLINE( 116)					{
HXLINE( 116)						::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 116)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" + ",b5,6d,18,00));
HXDLIN( 116)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("; // add",66,24,5b,51));
HXDLIN( 116)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 116)							sb->flush();
            						}
HXDLIN( 116)						if (::hx::IsNull( sb->b )) {
HXLINE( 116)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 116)							::Array< ::String > sb1 = sb->b;
HXDLIN( 116)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 117)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 118)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 119)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)2: {
HXLINE( 123)					{
HXLINE( 123)						::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 123)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" - ",73,6f,18,00));
HXDLIN( 123)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("; // sub",c5,db,68,51));
HXDLIN( 123)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 123)							sb->flush();
            						}
HXDLIN( 123)						if (::hx::IsNull( sb->b )) {
HXLINE( 123)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 123)							::Array< ::String > sb1 = sb->b;
HXDLIN( 123)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 124)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 125)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 126)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)3: {
HXLINE( 130)					{
HXLINE( 130)						::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 130)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" * ",d6,6c,18,00));
HXDLIN( 130)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("; // mul",49,4e,64,51));
HXDLIN( 130)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 130)							sb->flush();
            						}
HXDLIN( 130)						if (::hx::IsNull( sb->b )) {
HXLINE( 130)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 130)							::Array< ::String > sb1 = sb->b;
HXDLIN( 130)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 131)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 132)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 133)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)4: {
HXLINE( 137)					{
HXLINE( 137)						::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 137)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" / ",31,71,18,00));
HXDLIN( 137)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("; // div",96,6f,5d,51));
HXDLIN( 137)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 137)							sb->flush();
            						}
HXDLIN( 137)						if (::hx::IsNull( sb->b )) {
HXLINE( 137)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 137)							::Array< ::String > sb1 = sb->b;
HXDLIN( 137)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 138)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 139)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 140)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)5: {
HXLINE( 144)					::String sr = sr1->toGLSL(null(),null());
HXLINE( 146)					if ((sr.indexOf(HX_(".",2e,00,00,00),null()) > -1)) {
HXLINE( 149)						::String x = (dr->toGLSL(null()) + HX_(" = 1.0 / ",01,36,9f,65));
HXDLIN( 149)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("; // rcp",e4,09,68,51));
HXDLIN( 149)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 149)							sb->flush();
            						}
HXDLIN( 149)						if (::hx::IsNull( sb->b )) {
HXLINE( 149)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 149)							::Array< ::String > sb1 = sb->b;
HXDLIN( 149)							sb1->push(::Std_obj::string(x1));
            						}
            					}
            					else {
HXLINE( 153)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(1) / ",b4,32,05,3b));
HXDLIN( 153)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("; // rcp",e4,09,68,51));
HXDLIN( 153)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 153)							sb->flush();
            						}
HXDLIN( 153)						if (::hx::IsNull( sb->b )) {
HXLINE( 153)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 153)							::Array< ::String > sb1 = sb->b;
HXDLIN( 153)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 156)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 157)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)6: {
HXLINE( 161)					{
HXLINE( 161)						::String x = (dr->toGLSL(null()) + HX_(" = min(",39,b9,a2,4b));
HXDLIN( 161)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 161)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("); // min",00,15,0e,1a));
HXDLIN( 161)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 161)							sb->flush();
            						}
HXDLIN( 161)						if (::hx::IsNull( sb->b )) {
HXLINE( 161)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 161)							::Array< ::String > sb1 = sb->b;
HXDLIN( 161)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 162)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 163)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 164)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)7: {
HXLINE( 168)					{
HXLINE( 168)						::String x = (dr->toGLSL(null()) + HX_(" = max(",e7,af,9c,4b));
HXDLIN( 168)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 168)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("); // max",12,0e,0e,1a));
HXDLIN( 168)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 168)							sb->flush();
            						}
HXDLIN( 168)						if (::hx::IsNull( sb->b )) {
HXLINE( 168)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 168)							::Array< ::String > sb1 = sb->b;
HXDLIN( 168)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 169)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 170)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 171)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)8: {
HXLINE( 175)					{
HXLINE( 175)						::String x = (dr->toGLSL(null()) + HX_(" = fract(",85,4f,5f,de));
HXDLIN( 175)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // frc",05,cd,08,1a));
HXDLIN( 175)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 175)							sb->flush();
            						}
HXDLIN( 175)						if (::hx::IsNull( sb->b )) {
HXLINE( 175)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 175)							::Array< ::String > sb1 = sb->b;
HXDLIN( 175)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 176)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 177)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)9: {
HXLINE( 181)					{
HXLINE( 181)						::String x = (dr->toGLSL(null()) + HX_(" = sqrt(",05,d4,73,5c));
HXDLIN( 181)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // sqrt",b2,a8,41,b6));
HXDLIN( 181)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 181)							sb->flush();
            						}
HXDLIN( 181)						if (::hx::IsNull( sb->b )) {
HXLINE( 181)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 181)							::Array< ::String > sb1 = sb->b;
HXDLIN( 181)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 182)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 183)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)10: {
HXLINE( 187)					{
HXLINE( 187)						::String x = (dr->toGLSL(null()) + HX_(" = inversesqrt(",7b,94,3b,f8));
HXDLIN( 187)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // rsq",fe,e8,11,1a));
HXDLIN( 187)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 187)							sb->flush();
            						}
HXDLIN( 187)						if (::hx::IsNull( sb->b )) {
HXLINE( 187)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 187)							::Array< ::String > sb1 = sb->b;
HXDLIN( 187)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 188)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 189)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)11: {
HXLINE( 193)					{
HXLINE( 193)						::String x = (dr->toGLSL(null()) + HX_(" = pow(",73,f2,a2,4d));
HXDLIN( 193)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 193)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("); // pow",06,61,10,1a));
HXDLIN( 193)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 193)							sb->flush();
            						}
HXDLIN( 193)						if (::hx::IsNull( sb->b )) {
HXLINE( 193)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 193)							::Array< ::String > sb1 = sb->b;
HXDLIN( 193)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 194)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 195)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 196)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)12: {
HXLINE( 200)					{
HXLINE( 200)						::String x = (dr->toGLSL(null()) + HX_(" = log2(",f7,c4,4a,53));
HXDLIN( 200)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // log",f2,57,0d,1a));
HXDLIN( 200)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 200)							sb->flush();
            						}
HXDLIN( 200)						if (::hx::IsNull( sb->b )) {
HXLINE( 200)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 200)							::Array< ::String > sb1 = sb->b;
HXDLIN( 200)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 201)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 202)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)13: {
HXLINE( 206)					{
HXLINE( 206)						::String x = (dr->toGLSL(null()) + HX_(" = exp2(",50,75,76,51));
HXDLIN( 206)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // exp",0b,10,08,1a));
HXDLIN( 206)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 206)							sb->flush();
            						}
HXDLIN( 206)						if (::hx::IsNull( sb->b )) {
HXLINE( 206)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 206)							::Array< ::String > sb1 = sb->b;
HXDLIN( 206)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 207)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 208)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)14: {
HXLINE( 212)					{
HXLINE( 212)						::String x = (dr->toGLSL(null()) + HX_(" = normalize(",1e,9b,e9,ff));
HXDLIN( 212)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // normalize",7b,81,39,e2));
HXDLIN( 212)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 212)							sb->flush();
            						}
HXDLIN( 212)						if (::hx::IsNull( sb->b )) {
HXLINE( 212)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 212)							::Array< ::String > sb1 = sb->b;
HXDLIN( 212)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 213)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 214)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)15: {
HXLINE( 218)					{
HXLINE( 218)						::String x = (dr->toGLSL(null()) + HX_(" = sin(",f3,00,9a,4f));
HXDLIN( 218)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // sin",86,a2,12,1a));
HXDLIN( 218)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 218)							sb->flush();
            						}
HXDLIN( 218)						if (::hx::IsNull( sb->b )) {
HXLINE( 218)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 218)							::Array< ::String > sb1 = sb->b;
HXDLIN( 218)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 219)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 220)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)16: {
HXLINE( 224)					{
HXLINE( 224)						::String x = (dr->toGLSL(null()) + HX_(" = cos(",e4,28,0b,45));
HXDLIN( 224)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // cos",b5,83,06,1a));
HXDLIN( 224)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 224)							sb->flush();
            						}
HXDLIN( 224)						if (::hx::IsNull( sb->b )) {
HXLINE( 224)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 224)							::Array< ::String > sb1 = sb->b;
HXDLIN( 224)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 225)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 226)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)17: {
HXLINE( 230)					sr1->sourceMask = (sr2->sourceMask = 7);
HXLINE( 231)					{
HXLINE( 231)						::String x = (dr->toGLSL(null()) + HX_(" = cross(vec3(",be,c1,b9,ac));
HXDLIN( 231)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("), vec3(",ec,87,86,4e));
HXDLIN( 231)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_(")); // crs",09,b9,f3,e5));
HXDLIN( 231)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 231)							sb->flush();
            						}
HXDLIN( 231)						if (::hx::IsNull( sb->b )) {
HXLINE( 231)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            						}
            						else {
HXLINE( 231)							::Array< ::String > sb1 = sb->b;
HXDLIN( 231)							sb1->push(::Std_obj::string(x2));
            						}
            					}
HXLINE( 232)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 233)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 234)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)18: {
HXLINE( 238)					sr1->sourceMask = (sr2->sourceMask = 7);
HXLINE( 239)					{
HXLINE( 239)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(dot(vec3(",e5,e8,98,98));
HXDLIN( 239)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("), vec3(",ec,87,86,4e));
HXDLIN( 239)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_(")))",49,40,1f,00));
HXDLIN( 239)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // dp3",6c,75,5d,51));
HXDLIN( 239)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 239)							sb->flush();
            						}
HXDLIN( 239)						if (::hx::IsNull( sb->b )) {
HXLINE( 239)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 239)							::Array< ::String > sb1 = sb->b;
HXDLIN( 239)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 240)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 241)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 242)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)19: {
HXLINE( 246)					sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 247)					{
HXLINE( 247)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(dot(vec4(",c4,e9,98,98));
HXDLIN( 247)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("), vec4(",cb,88,86,4e));
HXDLIN( 247)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_(")))",49,40,1f,00));
HXDLIN( 247)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // dp4",6d,75,5d,51));
HXDLIN( 247)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 247)							sb->flush();
            						}
HXDLIN( 247)						if (::hx::IsNull( sb->b )) {
HXLINE( 247)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 247)							::Array< ::String > sb1 = sb->b;
HXDLIN( 247)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 248)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 249)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 250)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)20: {
HXLINE( 254)					{
HXLINE( 254)						::String x = (dr->toGLSL(null()) + HX_(" = abs(",59,de,ae,43));
HXDLIN( 254)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("); // abs",e0,f3,04,1a));
HXDLIN( 254)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 254)							sb->flush();
            						}
HXDLIN( 254)						if (::hx::IsNull( sb->b )) {
HXLINE( 254)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 254)							::Array< ::String > sb1 = sb->b;
HXDLIN( 254)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 255)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 256)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)21: {
HXLINE( 260)					{
HXLINE( 260)						::String x = (dr->toGLSL(null()) + HX_(" = -",6a,39,55,15));
HXDLIN( 260)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_("; // neg",95,02,65,51));
HXDLIN( 260)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 260)							sb->flush();
            						}
HXDLIN( 260)						if (::hx::IsNull( sb->b )) {
HXLINE( 260)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 260)							::Array< ::String > sb1 = sb->b;
HXDLIN( 260)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 261)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 262)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)22: {
HXLINE( 266)					{
HXLINE( 266)						::String x = (dr->toGLSL(null()) + HX_(" = clamp(",70,52,ed,36));
HXDLIN( 266)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", 0.0, 1.0); // saturate",02,d7,59,d0));
HXDLIN( 266)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 266)							sb->flush();
            						}
HXDLIN( 266)						if (::hx::IsNull( sb->b )) {
HXLINE( 266)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 266)							::Array< ::String > sb1 = sb->b;
HXDLIN( 266)							sb1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 267)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 268)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)23: {
HXLINE( 276)					 ::openfl::display3D::_internal::_AGALConverter::RegisterUsage existingUsage = map->getRegisterUsage(sr2);
HXLINE( 278)					bool _hx_tmp;
HXDLIN( 278)					if (::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn() )) {
HXLINE( 278)						_hx_tmp = ::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn() );
            					}
            					else {
HXLINE( 278)						_hx_tmp = false;
            					}
HXDLIN( 278)					if (_hx_tmp) {
HXLINE( 280)						{
HXLINE( 280)							::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 280)							::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" * mat3(",9f,6a,62,c7));
HXDLIN( 280)							::String x2 = ((x1 + sr2->toGLSL(false,null())) + HX_("); // m33",bb,e5,0d,1a));
HXDLIN( 280)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 280)								sb->flush();
            							}
HXDLIN( 280)							if (::hx::IsNull( sb->b )) {
HXLINE( 280)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            							}
            							else {
HXLINE( 280)								::Array< ::String > sb1 = sb->b;
HXDLIN( 280)								sb1->push(::Std_obj::string(x2));
            							}
            						}
HXLINE( 281)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 282)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 283)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::MATRIX_4_4_dyn(),null());
            					}
            					else {
HXLINE( 288)						sr1->sourceMask = (sr2->sourceMask = 7);
HXLINE( 289)						{
HXLINE( 289)							::String x = ((dr->toGLSL(null()) + HX_(" = vec3(",a6,67,ad,0e)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 289)							::String x1 = ((x + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 289)							::String x2 = (((x1 + sr2->toGLSL(true,0)) + HX_("), ",dd,42,1f,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 289)							::String x3 = ((x2 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 289)							::String x4 = (((x3 + sr2->toGLSL(true,1)) + HX_("),",e3,23,00,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 289)							::String x5 = ((x4 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 289)							::String x6 = ((x5 + sr2->toGLSL(true,2)) + HX_(")); // m33",72,18,fb,e5));
HXDLIN( 289)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 289)								sb->flush();
            							}
HXDLIN( 289)							if (::hx::IsNull( sb->b )) {
HXLINE( 289)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x6));
            							}
            							else {
HXLINE( 289)								::Array< ::String > sb1 = sb->b;
HXDLIN( 289)								sb1->push(::Std_obj::string(x6));
            							}
            						}
HXLINE( 292)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 293)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 294)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),0);
HXLINE( 295)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),1);
HXLINE( 296)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),2);
            					}
            				}
            				break;
            				case (int)24: {
HXLINE( 307)					 ::openfl::display3D::_internal::_AGALConverter::RegisterUsage existingUsage = map->getRegisterUsage(sr2);
HXLINE( 309)					bool _hx_tmp;
HXDLIN( 309)					if (::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn() )) {
HXLINE( 309)						_hx_tmp = ::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn() );
            					}
            					else {
HXLINE( 309)						_hx_tmp = false;
            					}
HXDLIN( 309)					if (_hx_tmp) {
HXLINE( 311)						{
HXLINE( 311)							::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 311)							::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" * ",d6,6c,18,00));
HXDLIN( 311)							::String x2 = ((x1 + sr2->toGLSL(false,null())) + HX_("; // m44",72,15,64,51));
HXDLIN( 311)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 311)								sb->flush();
            							}
HXDLIN( 311)							if (::hx::IsNull( sb->b )) {
HXLINE( 311)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            							}
            							else {
HXLINE( 311)								::Array< ::String > sb1 = sb->b;
HXDLIN( 311)								sb1->push(::Std_obj::string(x2));
            							}
            						}
HXLINE( 312)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 313)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 314)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::MATRIX_4_4_dyn(),null());
            					}
            					else {
HXLINE( 319)						sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 320)						{
HXLINE( 320)							::String x = ((dr->toGLSL(null()) + HX_(" = vec4(",85,68,ad,0e)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 320)							::String x1 = ((x + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 320)							::String x2 = (((x1 + sr2->toGLSL(true,0)) + HX_("), ",dd,42,1f,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 320)							::String x3 = ((x2 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 320)							::String x4 = (((x3 + sr2->toGLSL(true,1)) + HX_("), ",dd,42,1f,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 320)							::String x5 = ((x4 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 320)							::String x6 = (((x5 + sr2->toGLSL(true,2)) + HX_("), ",dd,42,1f,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 320)							::String x7 = ((x6 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 320)							::String x8 = ((x7 + sr2->toGLSL(true,3)) + HX_(")); // m44",52,19,fb,e5));
HXDLIN( 320)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 320)								sb->flush();
            							}
HXDLIN( 320)							if (::hx::IsNull( sb->b )) {
HXLINE( 320)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x8));
            							}
            							else {
HXLINE( 320)								::Array< ::String > sb1 = sb->b;
HXDLIN( 320)								sb1->push(::Std_obj::string(x8));
            							}
            						}
HXLINE( 324)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 325)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 326)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),0);
HXLINE( 327)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),1);
HXLINE( 328)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),2);
HXLINE( 329)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),3);
            					}
            				}
            				break;
            				case (int)25: {
HXLINE( 340)					 ::openfl::display3D::_internal::_AGALConverter::DestRegister dr1 = dr;
HXDLIN( 340)					dr1->mask = (dr1->mask & 7);
HXLINE( 342)					 ::openfl::display3D::_internal::_AGALConverter::RegisterUsage existingUsage = map->getRegisterUsage(sr2);
HXLINE( 344)					bool _hx_tmp;
HXDLIN( 344)					if (::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn() )) {
HXLINE( 344)						_hx_tmp = ::hx::IsPointerNotEq( existingUsage,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn() );
            					}
            					else {
HXLINE( 344)						_hx_tmp = false;
            					}
HXDLIN( 344)					if (_hx_tmp) {
HXLINE( 346)						{
HXLINE( 346)							::String x = (dr->toGLSL(null()) + HX_(" = ",63,7d,18,00));
HXDLIN( 346)							::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(" * ",d6,6c,18,00));
HXDLIN( 346)							::String x2 = ((x1 + sr2->toGLSL(false,null())) + HX_("; // m34",93,14,64,51));
HXDLIN( 346)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 346)								sb->flush();
            							}
HXDLIN( 346)							if (::hx::IsNull( sb->b )) {
HXLINE( 346)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            							}
            							else {
HXLINE( 346)								::Array< ::String > sb1 = sb->b;
HXDLIN( 346)								sb1->push(::Std_obj::string(x2));
            							}
            						}
HXLINE( 347)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 348)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 349)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::MATRIX_4_4_dyn(),null());
            					}
            					else {
HXLINE( 354)						sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 355)						{
HXLINE( 355)							::String x = ((dr->toGLSL(null()) + HX_(" = vec3(",a6,67,ad,0e)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 355)							::String x1 = ((x + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 355)							::String x2 = (((x1 + sr2->toGLSL(true,0)) + HX_("), ",dd,42,1f,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 355)							::String x3 = ((x2 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 355)							::String x4 = (((x3 + sr2->toGLSL(true,1)) + HX_("),",e3,23,00,00)) + HX_("dot(",7f,f5,6d,42));
HXDLIN( 355)							::String x5 = ((x4 + sr1->toGLSL(true,null())) + HX_(",",2c,00,00,00));
HXDLIN( 355)							::String x6 = ((x5 + sr2->toGLSL(true,2)) + HX_(")); // m34",73,18,fb,e5));
HXDLIN( 355)							if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 355)								sb->flush();
            							}
HXDLIN( 355)							if (::hx::IsNull( sb->b )) {
HXLINE( 355)								sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x6));
            							}
            							else {
HXLINE( 355)								::Array< ::String > sb1 = sb->b;
HXDLIN( 355)								sb1->push(::Std_obj::string(x6));
            							}
            						}
HXLINE( 358)						map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 359)						map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 360)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),0);
HXLINE( 361)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),1);
HXLINE( 362)						map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),2);
            					}
            				}
            				break;
            				case (int)39: {
HXLINE( 372)					sr1->sourceMask = 15;
HXLINE( 373)					{
HXLINE( 373)						::String x = ((HX_("if (any(lessThan(",0d,a8,4d,9b) + sr1->toGLSL(null(),null())) + HX_(", vec4(0)))) discard;",61,d7,c4,f0));
HXDLIN( 373)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 373)							sb->flush();
            						}
HXDLIN( 373)						if (::hx::IsNull( sb->b )) {
HXLINE( 373)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 373)							::Array< ::String > sb1 = sb->b;
HXDLIN( 373)							sb1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 374)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)40: {
HXLINE( 379)					 ::openfl::display3D::_internal::_AGALConverter::SamplerRegister sampler = ::openfl::display3D::_internal::_AGALConverter::SamplerRegister_obj::parse(source2,programType);
HXLINE( 381)					switch((int)(sampler->d)){
            						case (int)0: {
HXLINE( 385)							if ((sampler->t == 2)) {
HXLINE( 388)								sr1->sourceMask = 3;
HXLINE( 389)								map->addSaR(sampler,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_2D_ALPHA_dyn());
HXLINE( 390)								{
HXLINE( 390)									::String x = ((HX_("if (",25,e9,b4,45) + sampler->toGLSL()) + HX_("_alphaEnabled) {\n",68,cb,8a,22));
HXDLIN( 390)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 390)										sb->flush();
            									}
HXDLIN( 390)									if (::hx::IsNull( sb->b )) {
HXLINE( 390)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 390)										::Array< ::String > sb1 = sb->b;
HXDLIN( 390)										sb1->push(::Std_obj::string(x));
            									}
            								}
HXLINE( 391)								{
HXLINE( 391)									::String x1 = ((HX_("\t\t",e0,07,00,00) + dr->toGLSL(null())) + HX_(" = vec4(texture2D(",e0,3e,c1,08));
HXDLIN( 391)									::String x2 = ((x1 + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 391)									::String x3 = ((x2 + sr1->toGLSL(null(),null())) + HX_(").xyz, texture2D(",23,7d,b7,f4));
HXDLIN( 391)									::String x4 = ((x3 + sampler->toGLSL()) + HX_("_alpha, ",d3,3a,ce,eb));
HXDLIN( 391)									::String x5 = ((x4 + sr1->toGLSL(null(),null())) + HX_(").x); // tex + alpha\n",1f,b8,ed,c2));
HXDLIN( 391)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 391)										sb->flush();
            									}
HXDLIN( 391)									if (::hx::IsNull( sb->b )) {
HXLINE( 391)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x5));
            									}
            									else {
HXLINE( 391)										::Array< ::String > sb1 = sb->b;
HXDLIN( 391)										sb1->push(::Std_obj::string(x5));
            									}
            								}
HXLINE( 393)								{
HXLINE( 393)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 393)										sb->flush();
            									}
HXDLIN( 393)									if (::hx::IsNull( sb->b )) {
HXLINE( 393)										sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_5,1);
            									}
            									else {
HXLINE( 393)										sb->b->push(HX_("\t} else {\n",6a,88,3f,f9));
            									}
            								}
HXLINE( 394)								{
HXLINE( 394)									::String x6 = ((HX_("\t\t",e0,07,00,00) + dr->toGLSL(null())) + HX_(" = texture2D(",3e,55,2e,2f));
HXDLIN( 394)									::String x7 = ((x6 + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 394)									::String x8 = ((x7 + sr1->toGLSL(null(),null())) + HX_("); // tex\n",15,c9,e1,b6));
HXDLIN( 394)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 394)										sb->flush();
            									}
HXDLIN( 394)									if (::hx::IsNull( sb->b )) {
HXLINE( 394)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x8));
            									}
            									else {
HXLINE( 394)										::Array< ::String > sb1 = sb->b;
HXDLIN( 394)										sb1->push(::Std_obj::string(x8));
            									}
            								}
HXLINE( 395)								{
HXLINE( 395)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 395)										sb->flush();
            									}
HXDLIN( 395)									if (::hx::IsNull( sb->b )) {
HXLINE( 395)										sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_6,1);
            									}
            									else {
HXLINE( 395)										sb->b->push(HX_("\t}",54,08,00,00));
            									}
            								}
            							}
            							else {
HXLINE( 399)								sr1->sourceMask = 3;
HXLINE( 400)								map->addSaR(sampler,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_2D_dyn());
HXLINE( 401)								{
HXLINE( 401)									::String x = (dr->toGLSL(null()) + HX_(" = texture2D(",3e,55,2e,2f));
HXDLIN( 401)									::String x1 = ((x + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 401)									::String x2 = ((x1 + sr1->toGLSL(null(),null())) + HX_("); // tex",55,61,13,1a));
HXDLIN( 401)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 401)										sb->flush();
            									}
HXDLIN( 401)									if (::hx::IsNull( sb->b )) {
HXLINE( 401)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            									}
            									else {
HXLINE( 401)										::Array< ::String > sb1 = sb->b;
HXDLIN( 401)										sb1->push(::Std_obj::string(x2));
            									}
            								}
            							}
            						}
            						break;
            						case (int)1: {
HXLINE( 406)							if ((sampler->t == 2)) {
HXLINE( 409)								sr1->sourceMask = 7;
HXLINE( 410)								map->addSaR(sampler,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_CUBE_ALPHA_dyn());
HXLINE( 411)								{
HXLINE( 411)									::String x = ((HX_("if (",25,e9,b4,45) + sampler->toGLSL()) + HX_("_alphaEnabled) {\n",68,cb,8a,22));
HXDLIN( 411)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 411)										sb->flush();
            									}
HXDLIN( 411)									if (::hx::IsNull( sb->b )) {
HXLINE( 411)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 411)										::Array< ::String > sb1 = sb->b;
HXDLIN( 411)										sb1->push(::Std_obj::string(x));
            									}
            								}
HXLINE( 412)								{
HXLINE( 412)									::String x1 = ((HX_("\t\t",e0,07,00,00) + dr->toGLSL(null())) + HX_(" = vec4(textureCube(",bd,62,16,95));
HXDLIN( 412)									::String x2 = ((x1 + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 412)									::String x3 = ((x2 + sr1->toGLSL(null(),null())) + HX_(").xyz, textureCube(",c0,f7,ca,19));
HXDLIN( 412)									::String x4 = ((x3 + sampler->toGLSL()) + HX_("_alpha, ",d3,3a,ce,eb));
HXDLIN( 412)									::String x5 = ((x4 + sr1->toGLSL(null(),null())) + HX_(").x); // tex + alpha\n",1f,b8,ed,c2));
HXDLIN( 412)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 412)										sb->flush();
            									}
HXDLIN( 412)									if (::hx::IsNull( sb->b )) {
HXLINE( 412)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x5));
            									}
            									else {
HXLINE( 412)										::Array< ::String > sb1 = sb->b;
HXDLIN( 412)										sb1->push(::Std_obj::string(x5));
            									}
            								}
HXLINE( 414)								{
HXLINE( 414)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 414)										sb->flush();
            									}
HXDLIN( 414)									if (::hx::IsNull( sb->b )) {
HXLINE( 414)										sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_7,1);
            									}
            									else {
HXLINE( 414)										sb->b->push(HX_("\t} else {\n",6a,88,3f,f9));
            									}
            								}
HXLINE( 415)								{
HXLINE( 415)									::String x6 = ((HX_("\t\t",e0,07,00,00) + dr->toGLSL(null())) + HX_(" = textureCube(",9b,4c,bc,01));
HXDLIN( 415)									::String x7 = ((x6 + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 415)									::String x8 = ((x7 + sr1->toGLSL(null(),null())) + HX_("); // tex",55,61,13,1a));
HXDLIN( 415)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 415)										sb->flush();
            									}
HXDLIN( 415)									if (::hx::IsNull( sb->b )) {
HXLINE( 415)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x8));
            									}
            									else {
HXLINE( 415)										::Array< ::String > sb1 = sb->b;
HXDLIN( 415)										sb1->push(::Std_obj::string(x8));
            									}
            								}
HXLINE( 416)								{
HXLINE( 416)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 416)										sb->flush();
            									}
HXDLIN( 416)									if (::hx::IsNull( sb->b )) {
HXLINE( 416)										sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_8,1);
            									}
            									else {
HXLINE( 416)										sb->b->push(HX_("\t}",54,08,00,00));
            									}
            								}
            							}
            							else {
HXLINE( 420)								sr1->sourceMask = 7;
HXLINE( 421)								{
HXLINE( 421)									::String x = (dr->toGLSL(null()) + HX_(" = textureCube(",9b,4c,bc,01));
HXDLIN( 421)									::String x1 = ((x + sampler->toGLSL()) + HX_(", ",74,26,00,00));
HXDLIN( 421)									::String x2 = ((x1 + sr1->toGLSL(null(),null())) + HX_("); // tex",55,61,13,1a));
HXDLIN( 421)									if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 421)										sb->flush();
            									}
HXDLIN( 421)									if (::hx::IsNull( sb->b )) {
HXLINE( 421)										sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            									}
            									else {
HXLINE( 421)										::Array< ::String > sb1 = sb->b;
HXDLIN( 421)										sb1->push(::Std_obj::string(x2));
            									}
            								}
HXLINE( 422)								map->addSaR(sampler,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::SAMPLER_CUBE_dyn());
            							}
            						}
            						break;
            					}
HXLINE( 427)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 428)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 430)					if (::hx::IsNotNull( samplerState )) {
HXLINE( 433)						samplerState[sampler->n] = sampler->toSamplerState();
            					}
            				}
            				break;
            				case (int)41: {
HXLINE( 438)					sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 439)					{
HXLINE( 439)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(greaterThanEqual(",aa,a3,51,ec));
HXDLIN( 439)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 439)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("))",e0,23,00,00));
HXDLIN( 439)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // ste",e9,da,68,51));
HXDLIN( 439)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 439)							sb->flush();
            						}
HXDLIN( 439)						if (::hx::IsNull( sb->b )) {
HXLINE( 439)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 439)							::Array< ::String > sb1 = sb->b;
HXDLIN( 439)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 440)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 441)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 442)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)42: {
HXLINE( 446)					sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 447)					{
HXLINE( 447)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(lessThan(",69,ee,b4,35));
HXDLIN( 447)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 447)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("))",e0,23,00,00));
HXDLIN( 447)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // slt",00,d4,68,51));
HXDLIN( 447)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 447)							sb->flush();
            						}
HXDLIN( 447)						if (::hx::IsNull( sb->b )) {
HXLINE( 447)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 447)							::Array< ::String > sb1 = sb->b;
HXDLIN( 447)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 448)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 449)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 450)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)44: {
HXLINE( 454)					sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 455)					{
HXLINE( 455)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(equal(",39,08,45,e1));
HXDLIN( 455)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 455)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("))",e0,23,00,00));
HXDLIN( 455)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // seq",e4,cd,68,51));
HXDLIN( 455)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 455)							sb->flush();
            						}
HXDLIN( 455)						if (::hx::IsNull( sb->b )) {
HXLINE( 455)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 455)							::Array< ::String > sb1 = sb->b;
HXDLIN( 455)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 456)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 457)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 458)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				case (int)45: {
HXLINE( 462)					sr1->sourceMask = (sr2->sourceMask = 15);
HXLINE( 463)					{
HXLINE( 463)						::String x = (dr->toGLSL(null()) + HX_(" = vec4(notEqual(",42,aa,f1,97));
HXDLIN( 463)						::String x1 = ((x + sr1->toGLSL(null(),null())) + HX_(", ",74,26,00,00));
HXDLIN( 463)						::String x2 = ((x1 + sr2->toGLSL(null(),null())) + HX_("))",e0,23,00,00));
HXDLIN( 463)						::String x3 = ((x2 + dr->getWriteMask()) + HX_("; // sne",af,d5,68,51));
HXDLIN( 463)						if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 463)							sb->flush();
            						}
HXDLIN( 463)						if (::hx::IsNull( sb->b )) {
HXLINE( 463)							sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            						}
            						else {
HXLINE( 463)							::Array< ::String > sb1 = sb->b;
HXDLIN( 463)							sb1->push(::Std_obj::string(x3));
            						}
            					}
HXLINE( 464)					map->addDR(dr,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 465)					map->addSR(sr1,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
HXLINE( 466)					map->addSR(sr2,::openfl::display3D::_internal::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn(),null());
            				}
            				break;
            				default:{
HXLINE( 470)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,(HX_("Opcode ",72,65,6e,e7) + opcode))));
            				}
            			}
HXLINE( 473)			{
HXLINE( 473)				if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 473)					sb->flush();
            				}
HXDLIN( 473)				if (::hx::IsNull( sb->b )) {
HXLINE( 473)					sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_9,1);
            				}
            				else {
HXLINE( 473)					sb->b->push(HX_("\n",0a,00,00,00));
            				}
            			}
            		}
            		_hx_goto_2:;
HXLINE( 477)		if (::hx::IsNull( ::openfl::display3D::_internal::AGALConverter_obj::limitedProfile )) {
HXLINE( 479)			::String version = ( (::String)(::lime::graphics::opengl::GL_obj::context->getParameter(7938)) );
HXLINE( 480)			bool _hx_tmp;
HXDLIN( 480)			if ((version.indexOf(HX_("OpenGL ES",5f,cb,92,95),null()) <= -1)) {
HXLINE( 480)				_hx_tmp = (version.indexOf(HX_("WebGL",99,9f,e9,5a),null()) > -1);
            			}
            			else {
HXLINE( 480)				_hx_tmp = true;
            			}
HXDLIN( 480)			::openfl::display3D::_internal::AGALConverter_obj::limitedProfile = _hx_tmp;
            		}
HXLINE( 485)		 ::StringBuf glsl =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 486)		{
HXLINE( 486)			::String x;
HXDLIN( 486)			if (::hx::IsPointerEq( programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE( 486)				x = HX_("vertex",64,db,47,a1);
            			}
            			else {
HXLINE( 486)				x = HX_("fragment",d0,5f,e5,ad);
            			}
HXDLIN( 486)			::String x1 = ((HX_("// AGAL ",af,bc,4a,8a) + x) + HX_(" shader\n",25,c5,d4,85));
HXDLIN( 486)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 486)				glsl->flush();
            			}
HXDLIN( 486)			if (::hx::IsNull( glsl->b )) {
HXLINE( 486)				glsl->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 486)				::Array< ::String > glsl1 = glsl->b;
HXDLIN( 486)				glsl1->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 488)		if (( (bool)(::openfl::display3D::_internal::AGALConverter_obj::limitedProfile) )) {
HXLINE( 490)			{
HXLINE( 490)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 490)					glsl->flush();
            				}
HXDLIN( 490)				if (::hx::IsNull( glsl->b )) {
HXLINE( 490)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_10,1);
            				}
            				else {
HXLINE( 490)					glsl->b->push(HX_("#version 100\n",24,25,05,19));
            				}
            			}
HXLINE( 493)			{
HXLINE( 493)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 493)					glsl->flush();
            				}
HXDLIN( 493)				if (::hx::IsNull( glsl->b )) {
HXLINE( 493)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_11,1);
            				}
            				else {
HXLINE( 493)					glsl->b->push(HX_("#ifdef GL_FRAGMENT_PRECISION_HIGH\n",97,28,cb,f3));
            				}
            			}
HXLINE( 494)			{
HXLINE( 494)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 494)					glsl->flush();
            				}
HXDLIN( 494)				if (::hx::IsNull( glsl->b )) {
HXLINE( 494)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_12,1);
            				}
            				else {
HXLINE( 494)					glsl->b->push(HX_("precision highp float;\n",57,4a,f7,14));
            				}
            			}
HXLINE( 495)			{
HXLINE( 495)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 495)					glsl->flush();
            				}
HXDLIN( 495)				if (::hx::IsNull( glsl->b )) {
HXLINE( 495)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_13,1);
            				}
            				else {
HXLINE( 495)					glsl->b->push(HX_("#else\n",2e,de,b0,6d));
            				}
            			}
HXLINE( 496)			{
HXLINE( 496)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 496)					glsl->flush();
            				}
HXDLIN( 496)				if (::hx::IsNull( glsl->b )) {
HXLINE( 496)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_14,1);
            				}
            				else {
HXLINE( 496)					glsl->b->push(HX_("precision mediump float;\n",64,96,1e,cd));
            				}
            			}
HXLINE( 497)			{
HXLINE( 497)				if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 497)					glsl->flush();
            				}
HXDLIN( 497)				if (::hx::IsNull( glsl->b )) {
HXLINE( 497)					glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_15,1);
            				}
            				else {
HXLINE( 497)					glsl->b->push(HX_("#endif\n",f5,d8,f7,a9));
            				}
            			}
            		}
            		else {
HXLINE( 501)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 501)				glsl->flush();
            			}
HXDLIN( 501)			if (::hx::IsNull( glsl->b )) {
HXLINE( 501)				glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_16,1);
            			}
            			else {
HXLINE( 501)				glsl->b->push(HX_("#version 120\n",a6,a9,06,19));
            			}
            		}
HXLINE( 504)		{
HXLINE( 504)			::String x2 = map->toGLSL(false);
HXDLIN( 504)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 504)				glsl->flush();
            			}
HXDLIN( 504)			if (::hx::IsNull( glsl->b )) {
HXLINE( 504)				glsl->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            			}
            			else {
HXLINE( 504)				::Array< ::String > glsl1 = glsl->b;
HXDLIN( 504)				glsl1->push(::Std_obj::string(x2));
            			}
            		}
HXLINE( 506)		if (::hx::IsPointerEq( programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE( 509)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 509)				glsl->flush();
            			}
HXDLIN( 509)			if (::hx::IsNull( glsl->b )) {
HXLINE( 509)				glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_17,1);
            			}
            			else {
HXLINE( 509)				glsl->b->push(HX_("uniform vec4 vcPositionScale;\n",cf,aa,4f,18));
            			}
            		}
HXLINE( 512)		{
HXLINE( 512)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 512)				glsl->flush();
            			}
HXDLIN( 512)			if (::hx::IsNull( glsl->b )) {
HXLINE( 512)				glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_18,1);
            			}
            			else {
HXLINE( 512)				glsl->b->push(HX_("void main() {\n",49,b0,bf,fb));
            			}
            		}
HXLINE( 513)		{
HXLINE( 513)			::String x3 = map->toGLSL(true);
HXDLIN( 513)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 513)				glsl->flush();
            			}
HXDLIN( 513)			if (::hx::IsNull( glsl->b )) {
HXLINE( 513)				glsl->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            			}
            			else {
HXLINE( 513)				::Array< ::String > glsl1 = glsl->b;
HXDLIN( 513)				glsl1->push(::Std_obj::string(x3));
            			}
            		}
HXLINE( 514)		{
HXLINE( 514)			::String x4 = sb->toString();
HXDLIN( 514)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 514)				glsl->flush();
            			}
HXDLIN( 514)			if (::hx::IsNull( glsl->b )) {
HXLINE( 514)				glsl->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x4));
            			}
            			else {
HXLINE( 514)				::Array< ::String > glsl1 = glsl->b;
HXDLIN( 514)				glsl1->push(::Std_obj::string(x4));
            			}
            		}
HXLINE( 516)		if (::hx::IsPointerEq( programType,::openfl::display3D::_internal::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE( 519)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 519)				glsl->flush();
            			}
HXDLIN( 519)			if (::hx::IsNull( glsl->b )) {
HXLINE( 519)				glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_19,1);
            			}
            			else {
HXLINE( 519)				glsl->b->push(HX_("\tgl_Position *= vcPositionScale;\n",7c,ad,85,8d));
            			}
            		}
HXLINE( 522)		{
HXLINE( 522)			if (::hx::IsNotNull( glsl->charBuf )) {
HXLINE( 522)				glsl->flush();
            			}
HXDLIN( 522)			if (::hx::IsNull( glsl->b )) {
HXLINE( 522)				glsl->b = ::Array_obj< ::String >::fromData( _hx_array_data_6ed82be4_20,1);
            			}
            			else {
HXLINE( 522)				glsl->b->push(HX_("}\n",ed,6c,00,00));
            			}
            		}
HXLINE( 525)		return glsl->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGALConverter_obj,convertToGLSL,return )


AGALConverter_obj::AGALConverter_obj()
{
}

bool AGALConverter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"readUInt64") ) { outValue = readUInt64_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToGLSL") ) { outValue = convertToGLSL_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"limitedProfile") ) { outValue = ( limitedProfile ); return true; }
		if (HX_FIELD_EQ(inName,"prefixFromType") ) { outValue = prefixFromType_dyn(); return true; }
	}
	return false;
}

bool AGALConverter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"limitedProfile") ) { limitedProfile=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AGALConverter_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AGALConverter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &AGALConverter_obj::limitedProfile,HX_("limitedProfile",ef,13,1a,0a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AGALConverter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGALConverter_obj::limitedProfile,"limitedProfile");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AGALConverter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGALConverter_obj::limitedProfile,"limitedProfile");
};

#endif

::hx::Class AGALConverter_obj::__mClass;

static ::String AGALConverter_obj_sStaticFields[] = {
	HX_("limitedProfile",ef,13,1a,0a),
	HX_("prefixFromType",f6,38,ec,c8),
	HX_("readUInt64",2e,21,8b,12),
	HX_("convertToGLSL",4c,43,62,b5),
	::String(null())
};

void AGALConverter_obj::__register()
{
	AGALConverter_obj _hx_dummy;
	AGALConverter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._internal.AGALConverter",e4,2b,d8,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AGALConverter_obj::__GetStatic;
	__mClass->mSetStaticField = &AGALConverter_obj::__SetStatic;
	__mClass->mMarkFunc = AGALConverter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AGALConverter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AGALConverter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AGALConverter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AGALConverter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AGALConverter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AGALConverter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bb48f68540be485a_21_boot)
HXDLIN(  21)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
