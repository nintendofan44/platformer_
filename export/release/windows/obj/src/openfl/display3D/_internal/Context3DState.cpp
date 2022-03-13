#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display__internal_SamplerState
#include <openfl/display/_internal/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_Context3DState
#include <openfl/display3D/_internal/Context3DState.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2647a1a4499da7d5_76_new,"openfl.display3D._internal.Context3DState","new",0x6082feae,"openfl.display3D._internal.Context3DState.new","openfl/display3D/_internal/Context3DState.hx",76,0x706df35f)
HX_LOCAL_STACK_FRAME(_hx_pos_2647a1a4499da7d5_21_boot,"openfl.display3D._internal.Context3DState","boot",0x0a34da24,"openfl.display3D._internal.Context3DState.boot","openfl/display3D/_internal/Context3DState.hx",21,0x706df35f)
namespace openfl{
namespace display3D{
namespace _internal{

void Context3DState_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2647a1a4499da7d5_76_new)
HXLINE(  77)		this->backBufferEnableDepthAndStencil = false;
HXLINE(  78)		this->blendDestinationAlphaFactor = 9;
HXLINE(  79)		this->blendSourceAlphaFactor = 2;
HXLINE(  80)		this->blendDestinationRGBFactor = 9;
HXLINE(  81)		this->blendSourceRGBFactor = 2;
HXLINE(  82)		this->colorMaskRed = true;
HXLINE(  83)		this->colorMaskGreen = true;
HXLINE(  84)		this->colorMaskBlue = true;
HXLINE(  85)		this->colorMaskAlpha = true;
HXLINE(  86)		this->culling = 3;
HXLINE(  87)		this->depthCompareMode = 4;
HXLINE(  88)		this->depthMask = true;
HXLINE(  89)		this->samplerStates = ::Array_obj< ::Dynamic>::__new();
HXLINE(  90)		this->scissorRectangle =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  91)		this->stencilCompareMode = 0;
HXLINE(  92)		this->stencilDepthFail = 5;
HXLINE(  93)		this->stencilFail = 5;
HXLINE(  94)		this->stencilPass = 5;
HXLINE(  95)		this->stencilReadMask = 255;
HXLINE(  96)		this->stencilReferenceValue = 0;
HXLINE(  97)		this->stencilTriangleFace = 2;
HXLINE(  98)		this->stencilWriteMask = 255;
HXLINE(  99)		this->textures = ::Array_obj< ::Dynamic>::__new();
HXLINE( 100)		this->_hx___frontFaceGLCCW = true;
HXLINE( 103)		this->_hx___glBlendEquation = 32774;
            	}

Dynamic Context3DState_obj::__CreateEmpty() { return new Context3DState_obj; }

void *Context3DState_obj::_hx_vtable = 0;

Dynamic Context3DState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DState_obj > _hx_result = new Context3DState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DState_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72ea205a;
}


::hx::ObjectPtr< Context3DState_obj > Context3DState_obj::__new() {
	::hx::ObjectPtr< Context3DState_obj > __this = new Context3DState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Context3DState_obj > Context3DState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Context3DState_obj *__this = (Context3DState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context3DState_obj), true, "openfl.display3D._internal.Context3DState"));
	*(void **)__this = Context3DState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Context3DState_obj::Context3DState_obj()
{
}

void Context3DState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DState);
	HX_MARK_MEMBER_NAME(backBufferEnableDepthAndStencil,"backBufferEnableDepthAndStencil");
	HX_MARK_MEMBER_NAME(blendDestinationAlphaFactor,"blendDestinationAlphaFactor");
	HX_MARK_MEMBER_NAME(blendSourceAlphaFactor,"blendSourceAlphaFactor");
	HX_MARK_MEMBER_NAME(blendDestinationRGBFactor,"blendDestinationRGBFactor");
	HX_MARK_MEMBER_NAME(blendSourceRGBFactor,"blendSourceRGBFactor");
	HX_MARK_MEMBER_NAME(colorMaskRed,"colorMaskRed");
	HX_MARK_MEMBER_NAME(colorMaskGreen,"colorMaskGreen");
	HX_MARK_MEMBER_NAME(colorMaskBlue,"colorMaskBlue");
	HX_MARK_MEMBER_NAME(colorMaskAlpha,"colorMaskAlpha");
	HX_MARK_MEMBER_NAME(culling,"culling");
	HX_MARK_MEMBER_NAME(depthCompareMode,"depthCompareMode");
	HX_MARK_MEMBER_NAME(depthMask,"depthMask");
	HX_MARK_MEMBER_NAME(program,"program");
	HX_MARK_MEMBER_NAME(renderToTexture,"renderToTexture");
	HX_MARK_MEMBER_NAME(renderToTextureAntiAlias,"renderToTextureAntiAlias");
	HX_MARK_MEMBER_NAME(renderToTextureDepthStencil,"renderToTextureDepthStencil");
	HX_MARK_MEMBER_NAME(renderToTextureSurfaceSelector,"renderToTextureSurfaceSelector");
	HX_MARK_MEMBER_NAME(samplerStates,"samplerStates");
	HX_MARK_MEMBER_NAME(scissorEnabled,"scissorEnabled");
	HX_MARK_MEMBER_NAME(scissorRectangle,"scissorRectangle");
	HX_MARK_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_MARK_MEMBER_NAME(stencilDepthFail,"stencilDepthFail");
	HX_MARK_MEMBER_NAME(stencilFail,"stencilFail");
	HX_MARK_MEMBER_NAME(stencilPass,"stencilPass");
	HX_MARK_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_MARK_MEMBER_NAME(stencilReferenceValue,"stencilReferenceValue");
	HX_MARK_MEMBER_NAME(stencilTriangleFace,"stencilTriangleFace");
	HX_MARK_MEMBER_NAME(stencilWriteMask,"stencilWriteMask");
	HX_MARK_MEMBER_NAME(textures,"textures");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(_hx___currentGLArrayBuffer,"__currentGLArrayBuffer");
	HX_MARK_MEMBER_NAME(_hx___currentGLElementArrayBuffer,"__currentGLElementArrayBuffer");
	HX_MARK_MEMBER_NAME(_hx___currentGLFramebuffer,"__currentGLFramebuffer");
	HX_MARK_MEMBER_NAME(_hx___currentGLTexture2D,"__currentGLTexture2D");
	HX_MARK_MEMBER_NAME(_hx___currentGLTextureCubeMap,"__currentGLTextureCubeMap");
	HX_MARK_MEMBER_NAME(_hx___enableGLBlend,"__enableGLBlend");
	HX_MARK_MEMBER_NAME(_hx___enableGLCullFace,"__enableGLCullFace");
	HX_MARK_MEMBER_NAME(_hx___enableGLDepthTest,"__enableGLDepthTest");
	HX_MARK_MEMBER_NAME(_hx___enableGLScissorTest,"__enableGLScissorTest");
	HX_MARK_MEMBER_NAME(_hx___enableGLStencilTest,"__enableGLStencilTest");
	HX_MARK_MEMBER_NAME(_hx___frontFaceGLCCW,"__frontFaceGLCCW");
	HX_MARK_MEMBER_NAME(_hx___glBlendEquation,"__glBlendEquation");
	HX_MARK_MEMBER_NAME(_hx___primaryGLFramebuffer,"__primaryGLFramebuffer");
	HX_MARK_MEMBER_NAME(_hx___rttDepthGLRenderbuffer,"__rttDepthGLRenderbuffer");
	HX_MARK_MEMBER_NAME(_hx___rttGLFramebuffer,"__rttGLFramebuffer");
	HX_MARK_MEMBER_NAME(_hx___rttGLRenderbuffer,"__rttGLRenderbuffer");
	HX_MARK_MEMBER_NAME(_hx___rttStencilGLRenderbuffer,"__rttStencilGLRenderbuffer");
	HX_MARK_END_CLASS();
}

void Context3DState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backBufferEnableDepthAndStencil,"backBufferEnableDepthAndStencil");
	HX_VISIT_MEMBER_NAME(blendDestinationAlphaFactor,"blendDestinationAlphaFactor");
	HX_VISIT_MEMBER_NAME(blendSourceAlphaFactor,"blendSourceAlphaFactor");
	HX_VISIT_MEMBER_NAME(blendDestinationRGBFactor,"blendDestinationRGBFactor");
	HX_VISIT_MEMBER_NAME(blendSourceRGBFactor,"blendSourceRGBFactor");
	HX_VISIT_MEMBER_NAME(colorMaskRed,"colorMaskRed");
	HX_VISIT_MEMBER_NAME(colorMaskGreen,"colorMaskGreen");
	HX_VISIT_MEMBER_NAME(colorMaskBlue,"colorMaskBlue");
	HX_VISIT_MEMBER_NAME(colorMaskAlpha,"colorMaskAlpha");
	HX_VISIT_MEMBER_NAME(culling,"culling");
	HX_VISIT_MEMBER_NAME(depthCompareMode,"depthCompareMode");
	HX_VISIT_MEMBER_NAME(depthMask,"depthMask");
	HX_VISIT_MEMBER_NAME(program,"program");
	HX_VISIT_MEMBER_NAME(renderToTexture,"renderToTexture");
	HX_VISIT_MEMBER_NAME(renderToTextureAntiAlias,"renderToTextureAntiAlias");
	HX_VISIT_MEMBER_NAME(renderToTextureDepthStencil,"renderToTextureDepthStencil");
	HX_VISIT_MEMBER_NAME(renderToTextureSurfaceSelector,"renderToTextureSurfaceSelector");
	HX_VISIT_MEMBER_NAME(samplerStates,"samplerStates");
	HX_VISIT_MEMBER_NAME(scissorEnabled,"scissorEnabled");
	HX_VISIT_MEMBER_NAME(scissorRectangle,"scissorRectangle");
	HX_VISIT_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_VISIT_MEMBER_NAME(stencilDepthFail,"stencilDepthFail");
	HX_VISIT_MEMBER_NAME(stencilFail,"stencilFail");
	HX_VISIT_MEMBER_NAME(stencilPass,"stencilPass");
	HX_VISIT_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_VISIT_MEMBER_NAME(stencilReferenceValue,"stencilReferenceValue");
	HX_VISIT_MEMBER_NAME(stencilTriangleFace,"stencilTriangleFace");
	HX_VISIT_MEMBER_NAME(stencilWriteMask,"stencilWriteMask");
	HX_VISIT_MEMBER_NAME(textures,"textures");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(_hx___currentGLArrayBuffer,"__currentGLArrayBuffer");
	HX_VISIT_MEMBER_NAME(_hx___currentGLElementArrayBuffer,"__currentGLElementArrayBuffer");
	HX_VISIT_MEMBER_NAME(_hx___currentGLFramebuffer,"__currentGLFramebuffer");
	HX_VISIT_MEMBER_NAME(_hx___currentGLTexture2D,"__currentGLTexture2D");
	HX_VISIT_MEMBER_NAME(_hx___currentGLTextureCubeMap,"__currentGLTextureCubeMap");
	HX_VISIT_MEMBER_NAME(_hx___enableGLBlend,"__enableGLBlend");
	HX_VISIT_MEMBER_NAME(_hx___enableGLCullFace,"__enableGLCullFace");
	HX_VISIT_MEMBER_NAME(_hx___enableGLDepthTest,"__enableGLDepthTest");
	HX_VISIT_MEMBER_NAME(_hx___enableGLScissorTest,"__enableGLScissorTest");
	HX_VISIT_MEMBER_NAME(_hx___enableGLStencilTest,"__enableGLStencilTest");
	HX_VISIT_MEMBER_NAME(_hx___frontFaceGLCCW,"__frontFaceGLCCW");
	HX_VISIT_MEMBER_NAME(_hx___glBlendEquation,"__glBlendEquation");
	HX_VISIT_MEMBER_NAME(_hx___primaryGLFramebuffer,"__primaryGLFramebuffer");
	HX_VISIT_MEMBER_NAME(_hx___rttDepthGLRenderbuffer,"__rttDepthGLRenderbuffer");
	HX_VISIT_MEMBER_NAME(_hx___rttGLFramebuffer,"__rttGLFramebuffer");
	HX_VISIT_MEMBER_NAME(_hx___rttGLRenderbuffer,"__rttGLRenderbuffer");
	HX_VISIT_MEMBER_NAME(_hx___rttStencilGLRenderbuffer,"__rttStencilGLRenderbuffer");
}

::hx::Val Context3DState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"culling") ) { return ::hx::Val( culling ); }
		if (HX_FIELD_EQ(inName,"program") ) { return ::hx::Val( program ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { return ::hx::Val( textures ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"depthMask") ) { return ::hx::Val( depthMask ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stencilFail") ) { return ::hx::Val( stencilFail ); }
		if (HX_FIELD_EQ(inName,"stencilPass") ) { return ::hx::Val( stencilPass ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorMaskRed") ) { return ::hx::Val( colorMaskRed ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"colorMaskBlue") ) { return ::hx::Val( colorMaskBlue ); }
		if (HX_FIELD_EQ(inName,"samplerStates") ) { return ::hx::Val( samplerStates ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorMaskGreen") ) { return ::hx::Val( colorMaskGreen ); }
		if (HX_FIELD_EQ(inName,"colorMaskAlpha") ) { return ::hx::Val( colorMaskAlpha ); }
		if (HX_FIELD_EQ(inName,"scissorEnabled") ) { return ::hx::Val( scissorEnabled ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderToTexture") ) { return ::hx::Val( renderToTexture ); }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { return ::hx::Val( stencilReadMask ); }
		if (HX_FIELD_EQ(inName,"__enableGLBlend") ) { return ::hx::Val( _hx___enableGLBlend ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { return ::hx::Val( depthCompareMode ); }
		if (HX_FIELD_EQ(inName,"scissorRectangle") ) { return ::hx::Val( scissorRectangle ); }
		if (HX_FIELD_EQ(inName,"stencilDepthFail") ) { return ::hx::Val( stencilDepthFail ); }
		if (HX_FIELD_EQ(inName,"stencilWriteMask") ) { return ::hx::Val( stencilWriteMask ); }
		if (HX_FIELD_EQ(inName,"__frontFaceGLCCW") ) { return ::hx::Val( _hx___frontFaceGLCCW ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__glBlendEquation") ) { return ::hx::Val( _hx___glBlendEquation ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { return ::hx::Val( stencilCompareMode ); }
		if (HX_FIELD_EQ(inName,"__enableGLCullFace") ) { return ::hx::Val( _hx___enableGLCullFace ); }
		if (HX_FIELD_EQ(inName,"__rttGLFramebuffer") ) { return ::hx::Val( _hx___rttGLFramebuffer ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"stencilTriangleFace") ) { return ::hx::Val( stencilTriangleFace ); }
		if (HX_FIELD_EQ(inName,"__enableGLDepthTest") ) { return ::hx::Val( _hx___enableGLDepthTest ); }
		if (HX_FIELD_EQ(inName,"__rttGLRenderbuffer") ) { return ::hx::Val( _hx___rttGLRenderbuffer ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"blendSourceRGBFactor") ) { return ::hx::Val( blendSourceRGBFactor ); }
		if (HX_FIELD_EQ(inName,"__currentGLTexture2D") ) { return ::hx::Val( _hx___currentGLTexture2D ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"stencilReferenceValue") ) { return ::hx::Val( stencilReferenceValue ); }
		if (HX_FIELD_EQ(inName,"__enableGLScissorTest") ) { return ::hx::Val( _hx___enableGLScissorTest ); }
		if (HX_FIELD_EQ(inName,"__enableGLStencilTest") ) { return ::hx::Val( _hx___enableGLStencilTest ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendSourceAlphaFactor") ) { return ::hx::Val( blendSourceAlphaFactor ); }
		if (HX_FIELD_EQ(inName,"__currentGLArrayBuffer") ) { return ::hx::Val( _hx___currentGLArrayBuffer ); }
		if (HX_FIELD_EQ(inName,"__currentGLFramebuffer") ) { return ::hx::Val( _hx___currentGLFramebuffer ); }
		if (HX_FIELD_EQ(inName,"__primaryGLFramebuffer") ) { return ::hx::Val( _hx___primaryGLFramebuffer ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"renderToTextureAntiAlias") ) { return ::hx::Val( renderToTextureAntiAlias ); }
		if (HX_FIELD_EQ(inName,"__rttDepthGLRenderbuffer") ) { return ::hx::Val( _hx___rttDepthGLRenderbuffer ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"blendDestinationRGBFactor") ) { return ::hx::Val( blendDestinationRGBFactor ); }
		if (HX_FIELD_EQ(inName,"__currentGLTextureCubeMap") ) { return ::hx::Val( _hx___currentGLTextureCubeMap ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__rttStencilGLRenderbuffer") ) { return ::hx::Val( _hx___rttStencilGLRenderbuffer ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"blendDestinationAlphaFactor") ) { return ::hx::Val( blendDestinationAlphaFactor ); }
		if (HX_FIELD_EQ(inName,"renderToTextureDepthStencil") ) { return ::hx::Val( renderToTextureDepthStencil ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__currentGLElementArrayBuffer") ) { return ::hx::Val( _hx___currentGLElementArrayBuffer ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"renderToTextureSurfaceSelector") ) { return ::hx::Val( renderToTextureSurfaceSelector ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"backBufferEnableDepthAndStencil") ) { return ::hx::Val( backBufferEnableDepthAndStencil ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Context3DState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::openfl::display::Shader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"culling") ) { culling=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"program") ) { program=inValue.Cast<  ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"depthMask") ) { depthMask=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stencilFail") ) { stencilFail=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilPass") ) { stencilPass=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"colorMaskRed") ) { colorMaskRed=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"colorMaskBlue") ) { colorMaskBlue=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samplerStates") ) { samplerStates=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorMaskGreen") ) { colorMaskGreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorMaskAlpha") ) { colorMaskAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scissorEnabled") ) { scissorEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"renderToTexture") ) { renderToTexture=inValue.Cast<  ::openfl::display3D::textures::TextureBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { stencilReadMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__enableGLBlend") ) { _hx___enableGLBlend=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"depthCompareMode") ) { depthCompareMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scissorRectangle") ) { scissorRectangle=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilDepthFail") ) { stencilDepthFail=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilWriteMask") ) { stencilWriteMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__frontFaceGLCCW") ) { _hx___frontFaceGLCCW=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__glBlendEquation") ) { _hx___glBlendEquation=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { stencilCompareMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__enableGLCullFace") ) { _hx___enableGLCullFace=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rttGLFramebuffer") ) { _hx___rttGLFramebuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"stencilTriangleFace") ) { stencilTriangleFace=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__enableGLDepthTest") ) { _hx___enableGLDepthTest=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rttGLRenderbuffer") ) { _hx___rttGLRenderbuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"blendSourceRGBFactor") ) { blendSourceRGBFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentGLTexture2D") ) { _hx___currentGLTexture2D=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"stencilReferenceValue") ) { stencilReferenceValue=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__enableGLScissorTest") ) { _hx___enableGLScissorTest=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__enableGLStencilTest") ) { _hx___enableGLStencilTest=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"blendSourceAlphaFactor") ) { blendSourceAlphaFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentGLArrayBuffer") ) { _hx___currentGLArrayBuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentGLFramebuffer") ) { _hx___currentGLFramebuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__primaryGLFramebuffer") ) { _hx___primaryGLFramebuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"renderToTextureAntiAlias") ) { renderToTextureAntiAlias=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rttDepthGLRenderbuffer") ) { _hx___rttDepthGLRenderbuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"blendDestinationRGBFactor") ) { blendDestinationRGBFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__currentGLTextureCubeMap") ) { _hx___currentGLTextureCubeMap=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__rttStencilGLRenderbuffer") ) { _hx___rttStencilGLRenderbuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"blendDestinationAlphaFactor") ) { blendDestinationAlphaFactor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderToTextureDepthStencil") ) { renderToTextureDepthStencil=inValue.Cast< bool >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__currentGLElementArrayBuffer") ) { _hx___currentGLElementArrayBuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"renderToTextureSurfaceSelector") ) { renderToTextureSurfaceSelector=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"backBufferEnableDepthAndStencil") ) { backBufferEnableDepthAndStencil=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("backBufferEnableDepthAndStencil",7e,25,35,2a));
	outFields->push(HX_("blendDestinationAlphaFactor",10,cc,9a,03));
	outFields->push(HX_("blendSourceAlphaFactor",21,aa,fd,97));
	outFields->push(HX_("blendDestinationRGBFactor",3f,6a,8d,0a));
	outFields->push(HX_("blendSourceRGBFactor",10,f2,e1,7a));
	outFields->push(HX_("colorMaskRed",a2,a4,a5,24));
	outFields->push(HX_("colorMaskGreen",54,10,02,88));
	outFields->push(HX_("colorMaskBlue",29,5e,bc,e1));
	outFields->push(HX_("colorMaskAlpha",ef,a8,ab,0f));
	outFields->push(HX_("culling",70,e2,87,53));
	outFields->push(HX_("depthCompareMode",65,5e,47,b5));
	outFields->push(HX_("depthMask",8f,9b,d9,9e));
	outFields->push(HX_("program",84,4a,f9,f3));
	outFields->push(HX_("renderToTexture",6a,5a,1d,b7));
	outFields->push(HX_("renderToTextureAntiAlias",c4,2e,27,75));
	outFields->push(HX_("renderToTextureDepthStencil",c3,08,d5,8a));
	outFields->push(HX_("renderToTextureSurfaceSelector",22,bf,22,b8));
	outFields->push(HX_("samplerStates",6a,88,27,8c));
	outFields->push(HX_("scissorEnabled",c5,7f,d4,e4));
	outFields->push(HX_("scissorRectangle",73,a8,68,0c));
	outFields->push(HX_("stencilCompareMode",0c,b2,9a,77));
	outFields->push(HX_("stencilDepthFail",e5,96,76,67));
	outFields->push(HX_("stencilFail",fa,51,af,40));
	outFields->push(HX_("stencilPass",ed,7c,4b,47));
	outFields->push(HX_("stencilReadMask",7e,f1,2b,e5));
	outFields->push(HX_("stencilReferenceValue",c2,1a,35,60));
	outFields->push(HX_("stencilTriangleFace",a1,b7,e8,53));
	outFields->push(HX_("stencilWriteMask",cf,b7,47,1e));
	outFields->push(HX_("textures",38,f7,ce,65));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("__currentGLArrayBuffer",9b,60,91,80));
	outFields->push(HX_("__currentGLElementArrayBuffer",3b,c1,f2,45));
	outFields->push(HX_("__currentGLFramebuffer",0f,1e,fd,3c));
	outFields->push(HX_("__currentGLTexture2D",0f,3e,84,97));
	outFields->push(HX_("__currentGLTextureCubeMap",2a,25,61,d4));
	outFields->push(HX_("__enableGLBlend",a9,64,22,80));
	outFields->push(HX_("__enableGLCullFace",17,b2,c4,8b));
	outFields->push(HX_("__enableGLDepthTest",4d,ab,5b,64));
	outFields->push(HX_("__enableGLScissorTest",e6,a8,79,fe));
	outFields->push(HX_("__enableGLStencilTest",c6,ae,c6,e5));
	outFields->push(HX_("__frontFaceGLCCW",2c,60,32,bd));
	outFields->push(HX_("__glBlendEquation",78,8c,54,e0));
	outFields->push(HX_("__primaryGLFramebuffer",e6,38,3c,31));
	outFields->push(HX_("__rttDepthGLRenderbuffer",ac,d6,cf,01));
	outFields->push(HX_("__rttGLFramebuffer",36,14,43,13));
	outFields->push(HX_("__rttGLRenderbuffer",6d,ad,fa,4d));
	outFields->push(HX_("__rttStencilGLRenderbuffer",e5,14,ba,53));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Context3DState_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Context3DState_obj,backBufferEnableDepthAndStencil),HX_("backBufferEnableDepthAndStencil",7e,25,35,2a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Context3DState_obj,blendDestinationAlphaFactor),HX_("blendDestinationAlphaFactor",10,cc,9a,03)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Context3DState_obj,blendSourceAlphaFactor),HX_("blendSourceAlphaFactor",21,aa,fd,97)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Context3DState_obj,blendDestinationRGBFactor),HX_("blendDestinationRGBFactor",3f,6a,8d,0a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Context3DState_obj,blendSourceRGBFactor),HX_("blendSourceRGBFactor",10,f2,e1,7a)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,colorMaskRed),HX_("colorMaskRed",a2,a4,a5,24)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,colorMaskGreen),HX_("colorMaskGreen",54,10,02,88)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,colorMaskBlue),HX_("colorMaskBlue",29,5e,bc,e1)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,colorMaskAlpha),HX_("colorMaskAlpha",ef,a8,ab,0f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Context3DState_obj,culling),HX_("culling",70,e2,87,53)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Context3DState_obj,depthCompareMode),HX_("depthCompareMode",65,5e,47,b5)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,depthMask),HX_("depthMask",8f,9b,d9,9e)},
	{::hx::fsObject /*  ::openfl::display3D::Program3D */ ,(int)offsetof(Context3DState_obj,program),HX_("program",84,4a,f9,f3)},
	{::hx::fsObject /*  ::openfl::display3D::textures::TextureBase */ ,(int)offsetof(Context3DState_obj,renderToTexture),HX_("renderToTexture",6a,5a,1d,b7)},
	{::hx::fsInt,(int)offsetof(Context3DState_obj,renderToTextureAntiAlias),HX_("renderToTextureAntiAlias",c4,2e,27,75)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,renderToTextureDepthStencil),HX_("renderToTextureDepthStencil",c3,08,d5,8a)},
	{::hx::fsInt,(int)offsetof(Context3DState_obj,renderToTextureSurfaceSelector),HX_("renderToTextureSurfaceSelector",22,bf,22,b8)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Context3DState_obj,samplerStates),HX_("samplerStates",6a,88,27,8c)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,scissorEnabled),HX_("scissorEnabled",c5,7f,d4,e4)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(Context3DState_obj,scissorRectangle),HX_("scissorRectangle",73,a8,68,0c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Context3DState_obj,stencilCompareMode),HX_("stencilCompareMode",0c,b2,9a,77)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Context3DState_obj,stencilDepthFail),HX_("stencilDepthFail",e5,96,76,67)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Context3DState_obj,stencilFail),HX_("stencilFail",fa,51,af,40)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Context3DState_obj,stencilPass),HX_("stencilPass",ed,7c,4b,47)},
	{::hx::fsInt,(int)offsetof(Context3DState_obj,stencilReadMask),HX_("stencilReadMask",7e,f1,2b,e5)},
	{::hx::fsInt,(int)offsetof(Context3DState_obj,stencilReferenceValue),HX_("stencilReferenceValue",c2,1a,35,60)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Context3DState_obj,stencilTriangleFace),HX_("stencilTriangleFace",a1,b7,e8,53)},
	{::hx::fsInt,(int)offsetof(Context3DState_obj,stencilWriteMask),HX_("stencilWriteMask",cf,b7,47,1e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Context3DState_obj,textures),HX_("textures",38,f7,ce,65)},
	{::hx::fsObject /*  ::openfl::display::Shader */ ,(int)offsetof(Context3DState_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Context3DState_obj,_hx___currentGLArrayBuffer),HX_("__currentGLArrayBuffer",9b,60,91,80)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Context3DState_obj,_hx___currentGLElementArrayBuffer),HX_("__currentGLElementArrayBuffer",3b,c1,f2,45)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Context3DState_obj,_hx___currentGLFramebuffer),HX_("__currentGLFramebuffer",0f,1e,fd,3c)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Context3DState_obj,_hx___currentGLTexture2D),HX_("__currentGLTexture2D",0f,3e,84,97)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Context3DState_obj,_hx___currentGLTextureCubeMap),HX_("__currentGLTextureCubeMap",2a,25,61,d4)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,_hx___enableGLBlend),HX_("__enableGLBlend",a9,64,22,80)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,_hx___enableGLCullFace),HX_("__enableGLCullFace",17,b2,c4,8b)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,_hx___enableGLDepthTest),HX_("__enableGLDepthTest",4d,ab,5b,64)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,_hx___enableGLScissorTest),HX_("__enableGLScissorTest",e6,a8,79,fe)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,_hx___enableGLStencilTest),HX_("__enableGLStencilTest",c6,ae,c6,e5)},
	{::hx::fsBool,(int)offsetof(Context3DState_obj,_hx___frontFaceGLCCW),HX_("__frontFaceGLCCW",2c,60,32,bd)},
	{::hx::fsInt,(int)offsetof(Context3DState_obj,_hx___glBlendEquation),HX_("__glBlendEquation",78,8c,54,e0)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Context3DState_obj,_hx___primaryGLFramebuffer),HX_("__primaryGLFramebuffer",e6,38,3c,31)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Context3DState_obj,_hx___rttDepthGLRenderbuffer),HX_("__rttDepthGLRenderbuffer",ac,d6,cf,01)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Context3DState_obj,_hx___rttGLFramebuffer),HX_("__rttGLFramebuffer",36,14,43,13)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Context3DState_obj,_hx___rttGLRenderbuffer),HX_("__rttGLRenderbuffer",6d,ad,fa,4d)},
	{::hx::fsObject /*  ::lime::graphics::opengl::GLObject */ ,(int)offsetof(Context3DState_obj,_hx___rttStencilGLRenderbuffer),HX_("__rttStencilGLRenderbuffer",e5,14,ba,53)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Context3DState_obj_sStaticStorageInfo = 0;
#endif

static ::String Context3DState_obj_sMemberFields[] = {
	HX_("backBufferEnableDepthAndStencil",7e,25,35,2a),
	HX_("blendDestinationAlphaFactor",10,cc,9a,03),
	HX_("blendSourceAlphaFactor",21,aa,fd,97),
	HX_("blendDestinationRGBFactor",3f,6a,8d,0a),
	HX_("blendSourceRGBFactor",10,f2,e1,7a),
	HX_("colorMaskRed",a2,a4,a5,24),
	HX_("colorMaskGreen",54,10,02,88),
	HX_("colorMaskBlue",29,5e,bc,e1),
	HX_("colorMaskAlpha",ef,a8,ab,0f),
	HX_("culling",70,e2,87,53),
	HX_("depthCompareMode",65,5e,47,b5),
	HX_("depthMask",8f,9b,d9,9e),
	HX_("program",84,4a,f9,f3),
	HX_("renderToTexture",6a,5a,1d,b7),
	HX_("renderToTextureAntiAlias",c4,2e,27,75),
	HX_("renderToTextureDepthStencil",c3,08,d5,8a),
	HX_("renderToTextureSurfaceSelector",22,bf,22,b8),
	HX_("samplerStates",6a,88,27,8c),
	HX_("scissorEnabled",c5,7f,d4,e4),
	HX_("scissorRectangle",73,a8,68,0c),
	HX_("stencilCompareMode",0c,b2,9a,77),
	HX_("stencilDepthFail",e5,96,76,67),
	HX_("stencilFail",fa,51,af,40),
	HX_("stencilPass",ed,7c,4b,47),
	HX_("stencilReadMask",7e,f1,2b,e5),
	HX_("stencilReferenceValue",c2,1a,35,60),
	HX_("stencilTriangleFace",a1,b7,e8,53),
	HX_("stencilWriteMask",cf,b7,47,1e),
	HX_("textures",38,f7,ce,65),
	HX_("shader",25,bf,20,1d),
	HX_("__currentGLArrayBuffer",9b,60,91,80),
	HX_("__currentGLElementArrayBuffer",3b,c1,f2,45),
	HX_("__currentGLFramebuffer",0f,1e,fd,3c),
	HX_("__currentGLTexture2D",0f,3e,84,97),
	HX_("__currentGLTextureCubeMap",2a,25,61,d4),
	HX_("__enableGLBlend",a9,64,22,80),
	HX_("__enableGLCullFace",17,b2,c4,8b),
	HX_("__enableGLDepthTest",4d,ab,5b,64),
	HX_("__enableGLScissorTest",e6,a8,79,fe),
	HX_("__enableGLStencilTest",c6,ae,c6,e5),
	HX_("__frontFaceGLCCW",2c,60,32,bd),
	HX_("__glBlendEquation",78,8c,54,e0),
	HX_("__primaryGLFramebuffer",e6,38,3c,31),
	HX_("__rttDepthGLRenderbuffer",ac,d6,cf,01),
	HX_("__rttGLFramebuffer",36,14,43,13),
	HX_("__rttGLRenderbuffer",6d,ad,fa,4d),
	HX_("__rttStencilGLRenderbuffer",e5,14,ba,53),
	::String(null()) };

::hx::Class Context3DState_obj::__mClass;

void Context3DState_obj::__register()
{
	Context3DState_obj _hx_dummy;
	Context3DState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._internal.Context3DState",bc,cf,5e,09);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Context3DState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Context3DState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2647a1a4499da7d5_21_boot)
HXDLIN(  21)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
