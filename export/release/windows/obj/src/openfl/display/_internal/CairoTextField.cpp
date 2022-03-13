#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_CairoGlyph
#include <lime/graphics/cairo/CairoGlyph.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoDisplayObject
#include <openfl/display/_internal/CairoDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoGraphics
#include <openfl/display/_internal/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CairoTextField
#include <openfl/display/_internal/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text__internal_GlyphPosition
#include <openfl/text/_internal/GlyphPosition.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextEngine
#include <openfl/text/_internal/TextEngine.h>
#endif
#ifndef INCLUDED_openfl_text__internal_TextLayoutGroup
#include <openfl/text/_internal/TextLayoutGroup.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_32_render,"openfl.display._internal.CairoTextField","render",0x63933503,"openfl.display._internal.CairoTextField.render","openfl/display/_internal/CairoTextField.hx",32,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_434_renderDrawable,"openfl.display._internal.CairoTextField","renderDrawable",0x65cf17c1,"openfl.display._internal.CairoTextField.renderDrawable","openfl/display/_internal/CairoTextField.hx",434,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_454_renderDrawableMask,"openfl.display._internal.CairoTextField","renderDrawableMask",0x842bf94d,"openfl.display._internal.CairoTextField.renderDrawableMask","openfl/display/_internal/CairoTextField.hx",454,0xd777675a)
HX_LOCAL_STACK_FRAME(_hx_pos_a654946cfcca811d_29_boot,"openfl.display._internal.CairoTextField","boot",0x2185989f,"openfl.display._internal.CairoTextField.boot","openfl/display/_internal/CairoTextField.hx",29,0xd777675a)
namespace openfl{
namespace display{
namespace _internal{

void CairoTextField_obj::__construct() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return new CairoTextField_obj; }

void *CairoTextField_obj::_hx_vtable = 0;

Dynamic CairoTextField_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoTextField_obj > _hx_result = new CairoTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6fd3cbef;
}

void CairoTextField_obj::render( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer, ::openfl::geom::Matrix transform){
            	HX_GC_STACKFRAME(&_hx_pos_a654946cfcca811d_32_render)
HXLINE(  34)		 ::openfl::text::_internal::TextEngine textEngine = textField->_hx___textEngine;
HXLINE(  37)		bool useTextBounds;
HXDLIN(  37)		if (!(textEngine->background)) {
HXLINE(  37)			useTextBounds = textEngine->border;
            		}
            		else {
HXLINE(  37)			useTextBounds = true;
            		}
HXDLIN(  37)		bool useTextBounds1 = !(useTextBounds);
HXLINE(  38)		 ::openfl::geom::Rectangle bounds;
HXDLIN(  38)		if (useTextBounds1) {
HXLINE(  38)			bounds = textEngine->textBounds;
            		}
            		else {
HXLINE(  38)			bounds = textEngine->bounds;
            		}
HXLINE(  39)		 ::openfl::display::Graphics graphics = textField->_hx___graphics;
HXLINE(  40)		 ::lime::graphics::cairo::Cairo cairo = graphics->_hx___cairo;
HXLINE(  41)		Float cursorOffsetX = ((Float)0.0);
HXLINE(  43)		if (textField->_hx___dirty) {
HXLINE(  45)			textField->_hx___updateLayout();
HXLINE(  47)			if (::hx::IsNull( graphics->_hx___bounds )) {
HXLINE(  49)				graphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXLINE(  52)			if ((textField->get_text().length == 0)) {
HXLINE(  54)				Float boundsWidth = (textEngine->bounds->width - ( (Float)(4) ));
HXLINE(  55)				 ::Dynamic align = textField->get_defaultTextFormat()->align;
HXLINE(  56)				if (::hx::IsEq( align,3 )) {
HXLINE(  56)					cursorOffsetX = ( (Float)(0) );
            				}
            				else {
HXLINE(  56)					if (::hx::IsEq( align,4 )) {
HXLINE(  56)						cursorOffsetX = boundsWidth;
            					}
            					else {
HXLINE(  56)						cursorOffsetX = (boundsWidth / ( (Float)(2) ));
            					}
            				}
HXLINE(  57)				 ::Dynamic _hx_switch_0 = align;
            				if (  (_hx_switch_0==0) ){
HXLINE(  66)					cursorOffsetX = (cursorOffsetX + (( (Float)(textField->get_defaultTextFormat()->leftMargin) ) / ( (Float)(2) )));
HXLINE(  67)					cursorOffsetX = (cursorOffsetX - (( (Float)(textField->get_defaultTextFormat()->rightMargin) ) / ( (Float)(2) )));
HXLINE(  68)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  69)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  65)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==1) ){
HXLINE(  76)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==2) ){
HXLINE(  73)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->leftMargin);
HXLINE(  74)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  75)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  72)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==3) ){
HXLINE(  60)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->leftMargin);
HXLINE(  61)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->indent);
HXLINE(  62)					cursorOffsetX = (cursorOffsetX + textField->get_defaultTextFormat()->blockIndent);
HXLINE(  59)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==4) ){
HXLINE(  64)					cursorOffsetX = (cursorOffsetX - ( (Float)(textField->get_defaultTextFormat()->rightMargin) ));
HXDLIN(  64)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==5) ){
HXLINE(  70)					goto _hx_goto_0;
            				}
            				_hx_goto_0:;
HXLINE(  79)				if (useTextBounds1) {
HXLINE(  81)					bounds->y = textEngine->bounds->y;
HXLINE(  82)					bounds->x = cursorOffsetX;
            				}
            			}
HXLINE(  86)			graphics->_hx___bounds->copyFrom(bounds);
            		}
HXLINE(  92)		graphics->_hx___update(renderer->_hx___worldTransform);
HXLINE(  94)		int width = graphics->_hx___width;
HXLINE(  95)		int height = graphics->_hx___height;
HXLINE(  97)		bool renderable;
HXDLIN(  97)		bool renderable1;
HXDLIN(  97)		if (!(textEngine->border)) {
HXLINE(  97)			renderable1 = textEngine->background;
            		}
            		else {
HXLINE(  97)			renderable1 = true;
            		}
HXDLIN(  97)		if (!(renderable1)) {
HXLINE(  97)			renderable = ::hx::IsNotNull( textEngine->text );
            		}
            		else {
HXLINE(  97)			renderable = true;
            		}
HXLINE(  98)		bool needsUpscaling = false;
HXLINE( 100)		if (::hx::IsNotNull( cairo )) {
HXLINE( 103)			 ::Dynamic surface = graphics->_hx___bitmap->getSurface();
HXLINE( 105)			bool _hx_tmp;
HXDLIN( 105)			if (graphics->_hx___softwareDirty) {
HXLINE( 105)				if ((width <= ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(surface))) {
HXLINE( 105)					_hx_tmp = (height > ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(surface));
            				}
            				else {
HXLINE( 105)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 105)				_hx_tmp = false;
            			}
HXDLIN( 105)			if (_hx_tmp) {
HXLINE( 107)				needsUpscaling = true;
            			}
HXLINE( 110)			bool _hx_tmp1;
HXDLIN( 110)			if (renderable) {
HXLINE( 110)				_hx_tmp1 = needsUpscaling;
            			}
            			else {
HXLINE( 110)				_hx_tmp1 = true;
            			}
HXDLIN( 110)			if (_hx_tmp1) {
HXLINE( 112)				graphics->_hx___cairo = null();
HXLINE( 113)				graphics->_hx___bitmap = null();
HXLINE( 114)				graphics->_hx___visible = false;
HXLINE( 115)				cairo = null();
            			}
            		}
HXLINE( 119)		bool _hx_tmp;
HXDLIN( 119)		bool _hx_tmp1;
HXDLIN( 119)		bool _hx_tmp2;
HXDLIN( 119)		if ((width > 0)) {
HXLINE( 119)			_hx_tmp2 = (height <= 0);
            		}
            		else {
HXLINE( 119)			_hx_tmp2 = true;
            		}
HXDLIN( 119)		if (!(_hx_tmp2)) {
HXLINE( 121)			bool _hx_tmp;
HXDLIN( 121)			if (!(textField->_hx___dirty)) {
HXLINE( 121)				_hx_tmp = !(graphics->_hx___softwareDirty);
            			}
            			else {
HXLINE( 121)				_hx_tmp = false;
            			}
HXDLIN( 121)			if (_hx_tmp) {
HXLINE( 121)				if (graphics->_hx___visible) {
HXLINE( 119)					_hx_tmp1 = ::hx::IsNotNull( graphics->_hx___bitmap );
            				}
            				else {
HXLINE( 119)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 119)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 119)			_hx_tmp1 = true;
            		}
HXDLIN( 119)		if (!(_hx_tmp1)) {
HXLINE( 119)			_hx_tmp = !(renderable);
            		}
            		else {
HXLINE( 119)			_hx_tmp = true;
            		}
HXDLIN( 119)		if (_hx_tmp) {
HXLINE( 124)			textField->_hx___dirty = false;
HXLINE( 125)			return;
            		}
HXLINE( 128)		if (::hx::IsNull( cairo )) {
HXLINE( 130)			int bitmapWidth;
HXDLIN( 130)			if (needsUpscaling) {
HXLINE( 130)				bitmapWidth = ::Std_obj::_hx_int((( (Float)(width) ) * ((Float)1.25)));
            			}
            			else {
HXLINE( 130)				bitmapWidth = width;
            			}
HXLINE( 131)			int bitmapHeight;
HXDLIN( 131)			if (needsUpscaling) {
HXLINE( 131)				bitmapHeight = ::Std_obj::_hx_int((( (Float)(height) ) * ((Float)1.25)));
            			}
            			else {
HXLINE( 131)				bitmapHeight = height;
            			}
HXLINE( 133)			bool _hx_tmp;
HXDLIN( 133)			if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureWidth )) {
HXLINE( 133)				_hx_tmp = ::hx::IsGreater( bitmapWidth,::openfl::display::Graphics_obj::maxTextureWidth );
            			}
            			else {
HXLINE( 133)				_hx_tmp = false;
            			}
HXDLIN( 133)			if (_hx_tmp) {
HXLINE( 135)				bitmapWidth = ( (int)(::openfl::display::Graphics_obj::maxTextureWidth) );
            			}
HXLINE( 138)			bool _hx_tmp1;
HXDLIN( 138)			if (::hx::IsNotNull( ::openfl::display::Graphics_obj::maxTextureHeight )) {
HXLINE( 138)				_hx_tmp1 = ::hx::IsGreater( bitmapHeight,::openfl::display::Graphics_obj::maxTextureHeight );
            			}
            			else {
HXLINE( 138)				_hx_tmp1 = false;
            			}
HXDLIN( 138)			if (_hx_tmp1) {
HXLINE( 140)				bitmapHeight = ( (int)(::openfl::display::Graphics_obj::maxTextureHeight) );
            			}
HXLINE( 143)			 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapWidth,bitmapHeight,true,0);
HXLINE( 144)			 ::Dynamic surface = bitmap->getSurface();
HXLINE( 145)			graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface);
HXLINE( 146)			graphics->_hx___visible = true;
HXLINE( 147)			graphics->_hx___managed = true;
HXLINE( 149)			graphics->_hx___bitmap = bitmap;
HXLINE( 151)			cairo = graphics->_hx___cairo;
HXLINE( 153)			 ::Dynamic options = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::_new();
HXLINE( 155)			bool _hx_tmp2;
HXDLIN( 155)			if (::hx::IsEq( textEngine->antiAliasType,0 )) {
HXLINE( 155)				_hx_tmp2 = (textEngine->sharpness == 400);
            			}
            			else {
HXLINE( 155)				_hx_tmp2 = false;
            			}
HXDLIN( 155)			if (_hx_tmp2) {
HXLINE( 157)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,1);
HXLINE( 158)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,1);
HXLINE( 159)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,1);
            			}
            			else {
HXLINE( 163)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,2);
HXLINE( 164)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,1);
HXLINE( 165)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,5);
            			}
HXLINE( 168)			cairo->set_fontOptions(options);
            		}
            		else {
HXLINE( 172)			cairo->identityMatrix();
HXLINE( 173)			cairo->resetClip();
HXLINE( 175)			cairo->setOperator(0);
HXLINE( 176)			cairo->paint();
HXLINE( 177)			cairo->setOperator(2);
            		}
HXLINE( 180)		renderer->applyMatrix(graphics->_hx___renderTransform,cairo);
HXLINE( 182)		if (textEngine->border) {
HXLINE( 184)			int _hx_tmp = ::Std_obj::_hx_int((bounds->width - ( (Float)(1) )));
HXDLIN( 184)			cairo->rectangle(((Float)0.5),((Float)0.5),( (Float)(_hx_tmp) ),( (Float)(::Std_obj::_hx_int((bounds->height - ( (Float)(1) )))) ));
            		}
            		else {
HXLINE( 188)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),bounds->width,bounds->height);
            		}
HXLINE( 191)		if (textEngine->background) {
HXLINE( 193)			int color = textEngine->backgroundColor;
HXLINE( 194)			Float r = (( (Float)(::hx::UShr((color & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 195)			Float g = (( (Float)(::hx::UShr((color & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 196)			Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 198)			cairo->setSourceRGB(r,g,b);
HXLINE( 199)			cairo->fillPreserve();
            		}
HXLINE( 202)		if (textEngine->border) {
HXLINE( 204)			int color = textEngine->borderColor;
HXLINE( 205)			Float r = (( (Float)(::hx::UShr((color & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 206)			Float g = (( (Float)(::hx::UShr((color & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 207)			Float b = (( (Float)((color & 255)) ) / ( (Float)(255) ));
HXLINE( 209)			cairo->setSourceRGB(r,g,b);
HXLINE( 210)			cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 211)			cairo->stroke();
            		}
HXLINE( 214)		bool _hx_tmp3;
HXDLIN( 214)		if (::hx::IsNotNull( textEngine->text )) {
HXLINE( 214)			_hx_tmp3 = (textEngine->text != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 214)			_hx_tmp3 = false;
            		}
HXDLIN( 214)		if (_hx_tmp3) {
HXLINE( 216)			Float bounds1 = bounds->width;
HXDLIN( 216)			int _hx_tmp;
HXDLIN( 216)			if (textField->get_border()) {
HXLINE( 216)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 216)				_hx_tmp = 0;
            			}
HXDLIN( 216)			Float bounds2 = bounds->height;
HXDLIN( 216)			int _hx_tmp1;
HXDLIN( 216)			if (textField->get_border()) {
HXLINE( 216)				_hx_tmp1 = 1;
            			}
            			else {
HXLINE( 216)				_hx_tmp1 = 0;
            			}
HXDLIN( 216)			cairo->rectangle(( (Float)(0) ),( (Float)(0) ),(bounds1 - ( (Float)(_hx_tmp) )),(bounds2 - ( (Float)(_hx_tmp1) )));
HXLINE( 217)			cairo->clip();
HXLINE( 219)			::String text = textEngine->text;
HXLINE( 221)			int scrollX = -(textField->get_scrollH());
HXLINE( 222)			Float scrollY = ((Float)0.0);
HXLINE( 224)			{
HXLINE( 224)				int _g = 0;
HXDLIN( 224)				int _g1 = (textField->get_scrollV() - 1);
HXDLIN( 224)				while((_g < _g1)){
HXLINE( 224)					_g = (_g + 1);
HXDLIN( 224)					int i = (_g - 1);
HXLINE( 226)					scrollY = (scrollY - textEngine->lineHeights->get(i));
            				}
            			}
HXLINE( 229)			 ::Dynamic color;
HXDLIN( 229)			Float r;
HXDLIN( 229)			Float g;
HXDLIN( 229)			Float b;
HXDLIN( 229)			 ::openfl::text::Font font;
HXDLIN( 229)			int size;
HXDLIN( 229)			Float advance;
HXLINE( 231)			{
HXLINE( 231)				 ::Dynamic group = textEngine->layoutGroups->iterator();
HXDLIN( 231)				while(( (bool)(group->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 231)					 ::openfl::text::_internal::TextLayoutGroup group1 = ( ( ::openfl::text::_internal::TextLayoutGroup)(group->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 233)					int group2 = group1->lineIndex;
HXDLIN( 233)					if ((group2 < (textField->get_scrollV() - 1))) {
HXLINE( 233)						continue;
            					}
HXLINE( 234)					int group3 = group1->lineIndex;
HXDLIN( 234)					if ((group3 > (textEngine->get_bottomScrollV() - 1))) {
HXLINE( 234)						goto _hx_goto_2;
            					}
HXLINE( 236)					color = group1->format->color;
HXLINE( 237)					r = (( (Float)(::hx::UShr((( (int)(color) ) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 238)					g = (( (Float)(::hx::UShr((( (int)(color) ) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 239)					b = (( (Float)((( (int)(color) ) & 255)) ) / ( (Float)(255) ));
HXLINE( 241)					cairo->setSourceRGB(r,g,b);
HXLINE( 243)					font = ::openfl::text::_internal::TextEngine_obj::getFontInstance(group1->format);
HXLINE( 245)					bool _hx_tmp;
HXDLIN( 245)					if (::hx::IsNotNull( font )) {
HXLINE( 245)						_hx_tmp = ::hx::IsNotNull( group1->format->size );
            					}
            					else {
HXLINE( 245)						_hx_tmp = false;
            					}
HXDLIN( 245)					if (_hx_tmp) {
HXLINE( 247)						if (::hx::IsNotNull( textEngine->_hx___cairoFont )) {
HXLINE( 249)							if (::hx::IsInstanceNotEq( textEngine->_hx___font,font )) {
HXLINE( 251)								textEngine->_hx___cairoFont = null();
            							}
            						}
HXLINE( 255)						if (::hx::IsNull( textEngine->_hx___cairoFont )) {
HXLINE( 257)							textEngine->_hx___font = font;
HXLINE( 258)							textEngine->_hx___cairoFont = ::lime::graphics::cairo::_CairoFTFontFace::CairoFTFontFace_Impl__obj::create(font,0);
            						}
HXLINE( 261)						cairo->set_fontFace(textEngine->_hx___cairoFont);
HXLINE( 263)						size = ::Std_obj::_hx_int(( (Float)(group1->format->size) ));
HXLINE( 264)						cairo->setFontSize(( (Float)(size) ));
HXLINE( 266)						cairo->moveTo(((group1->offsetX + scrollX) - bounds->x),(((group1->offsetY + group1->ascent) + scrollY) - bounds->y));
HXLINE( 273)						cairo->translate(( (Float)(0) ),( (Float)(0) ));
HXLINE( 275)						::Array< ::Dynamic> glyphs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 276)						Float x = ((group1->offsetX + scrollX) - bounds->x);
HXLINE( 277)						Float y = (((group1->offsetY + group1->ascent) + scrollY) - bounds->y);
HXLINE( 279)						{
HXLINE( 279)							int _g = 0;
HXDLIN( 279)							::Array< ::Dynamic> _g1 = group1->positions;
HXDLIN( 279)							while((_g < _g1->length)){
HXLINE( 279)								 ::openfl::text::_internal::GlyphPosition position = _g1->__get(_g).StaticCast<  ::openfl::text::_internal::GlyphPosition >();
HXDLIN( 279)								_g = (_g + 1);
HXLINE( 281)								bool _hx_tmp;
HXDLIN( 281)								if (::hx::IsNotNull( position )) {
HXLINE( 281)									_hx_tmp = (position->glyph == 0);
            								}
            								else {
HXLINE( 281)									_hx_tmp = true;
            								}
HXDLIN( 281)								if (_hx_tmp) {
HXLINE( 281)									continue;
            								}
HXLINE( 282)								glyphs->push( ::lime::graphics::cairo::CairoGlyph_obj::__alloc( HX_CTX ,position->glyph,((x + position->offset->x) + ((Float)0.5)),((y - position->offset->y) + ((Float)0.5))));
HXLINE( 283)								x = (x + position->advance->x);
HXLINE( 284)								y = (y - position->advance->y);
            							}
            						}
HXLINE( 287)						cairo->showGlyphs(glyphs);
HXLINE( 290)						bool _hx_tmp;
HXDLIN( 290)						if ((textField->_hx___caretIndex > -1)) {
HXLINE( 290)							_hx_tmp = textEngine->selectable;
            						}
            						else {
HXLINE( 290)							_hx_tmp = false;
            						}
HXDLIN( 290)						if (_hx_tmp) {
HXLINE( 292)							if ((textField->_hx___selectionIndex == textField->_hx___caretIndex)) {
HXLINE( 294)								bool _hx_tmp;
HXDLIN( 294)								bool _hx_tmp1;
HXDLIN( 294)								if (textField->_hx___showCursor) {
HXLINE( 294)									_hx_tmp1 = (group1->startIndex <= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 294)									_hx_tmp1 = false;
            								}
HXDLIN( 294)								if (_hx_tmp1) {
HXLINE( 294)									_hx_tmp = (group1->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 294)									_hx_tmp = false;
            								}
HXDLIN( 294)								if (_hx_tmp) {
HXLINE( 298)									advance = ((Float)0.0);
HXLINE( 300)									{
HXLINE( 300)										int _g = 0;
HXDLIN( 300)										int _g1 = (textField->_hx___caretIndex - group1->startIndex);
HXDLIN( 300)										while((_g < _g1)){
HXLINE( 300)											_g = (_g + 1);
HXDLIN( 300)											int i = (_g - 1);
HXLINE( 302)											if ((group1->positions->length <= i)) {
HXLINE( 302)												goto _hx_goto_4;
            											}
HXLINE( 303)											Float advance1;
HXDLIN( 303)											bool advance2;
HXDLIN( 303)											if ((i >= 0)) {
HXLINE( 303)												advance2 = (i < group1->positions->length);
            											}
            											else {
HXLINE( 303)												advance2 = false;
            											}
HXDLIN( 303)											if (advance2) {
HXLINE( 303)												advance1 = group1->positions->__get(i).StaticCast<  ::openfl::text::_internal::GlyphPosition >()->advance->x;
            											}
            											else {
HXLINE( 303)												advance1 = ( (Float)(0) );
            											}
HXDLIN( 303)											advance = (advance + advance1);
            										}
            										_hx_goto_4:;
            									}
HXLINE( 306)									Float scrollY = ((Float)0.0);
HXLINE( 308)									{
HXLINE( 308)										int _g2 = textField->get_scrollV();
HXDLIN( 308)										int _g3 = (group1->lineIndex + 1);
HXDLIN( 308)										while((_g2 < _g3)){
HXLINE( 308)											_g2 = (_g2 + 1);
HXDLIN( 308)											int i = (_g2 - 1);
HXLINE( 310)											scrollY = (scrollY + textEngine->lineHeights->get((i - 1)));
            										}
            									}
HXLINE( 313)									Float _hx_tmp = (::Math_obj::floor((group1->offsetX + advance)) + ((Float)0.5));
HXDLIN( 313)									Float _hx_tmp1 = (_hx_tmp - ( (Float)(textField->get_scrollH()) ));
HXDLIN( 313)									cairo->moveTo((_hx_tmp1 - bounds->x),((scrollY + ((Float)2.5)) - bounds->y));
HXLINE( 314)									cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 315)									Float _hx_tmp2 = (::Math_obj::floor((group1->offsetX + advance)) + ((Float)0.5));
HXDLIN( 315)									Float _hx_tmp3 = (_hx_tmp2 - ( (Float)(textField->get_scrollH()) ));
HXDLIN( 315)									Float _hx_tmp4 = (_hx_tmp3 - bounds->x);
HXLINE( 319)									Float _hx_tmp5 = ((scrollY + ::openfl::text::_internal::TextEngine_obj::getFormatHeight(textField->get_defaultTextFormat())) - ( (Float)(1) ));
HXLINE( 315)									cairo->lineTo(_hx_tmp4,(_hx_tmp5 - bounds->y));
HXLINE( 323)									cairo->stroke();
            								}
            							}
            							else {
HXLINE( 326)								bool _hx_tmp;
HXDLIN( 326)								bool _hx_tmp1;
HXDLIN( 326)								bool _hx_tmp2;
HXDLIN( 326)								bool _hx_tmp3;
HXDLIN( 326)								if ((group1->startIndex <= textField->_hx___caretIndex)) {
HXLINE( 326)									_hx_tmp3 = (group1->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 326)									_hx_tmp3 = false;
            								}
HXDLIN( 326)								if (!(_hx_tmp3)) {
HXLINE( 327)									if ((group1->startIndex <= textField->_hx___selectionIndex)) {
HXLINE( 326)										_hx_tmp2 = (group1->endIndex >= textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 326)										_hx_tmp2 = false;
            									}
            								}
            								else {
HXLINE( 326)									_hx_tmp2 = true;
            								}
HXDLIN( 326)								if (!(_hx_tmp2)) {
HXLINE( 328)									if ((group1->startIndex > textField->_hx___caretIndex)) {
HXLINE( 326)										_hx_tmp1 = (group1->endIndex < textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 326)										_hx_tmp1 = false;
            									}
            								}
            								else {
HXLINE( 326)									_hx_tmp1 = true;
            								}
HXDLIN( 326)								if (!(_hx_tmp1)) {
HXLINE( 329)									if ((group1->startIndex > textField->_hx___selectionIndex)) {
HXLINE( 326)										_hx_tmp = (group1->endIndex < textField->_hx___caretIndex);
            									}
            									else {
HXLINE( 326)										_hx_tmp = false;
            									}
            								}
            								else {
HXLINE( 326)									_hx_tmp = true;
            								}
HXDLIN( 326)								if (_hx_tmp) {
HXLINE( 331)									int selectionStart = ::Std_obj::_hx_int(::Math_obj::min(( (Float)(textField->_hx___selectionIndex) ),( (Float)(textField->_hx___caretIndex) )));
HXLINE( 332)									int selectionEnd = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(textField->_hx___selectionIndex) ),( (Float)(textField->_hx___caretIndex) )));
HXLINE( 334)									if ((group1->startIndex > selectionStart)) {
HXLINE( 336)										selectionStart = group1->startIndex;
            									}
HXLINE( 339)									if ((group1->endIndex < selectionEnd)) {
HXLINE( 341)										selectionEnd = group1->endIndex;
            									}
HXLINE( 344)									 ::openfl::geom::Rectangle end;
HXDLIN( 344)									 ::openfl::geom::Rectangle start = textField->getCharBoundaries(selectionStart);
HXLINE( 348)									if ((selectionEnd >= group1->endIndex)) {
HXLINE( 350)										end = textField->getCharBoundaries((group1->endIndex - 1));
HXLINE( 352)										if (::hx::IsNotNull( end )) {
HXLINE( 354)											 ::openfl::geom::Rectangle end1 = end;
HXDLIN( 354)											end1->x = (end1->x + (end->width + 2));
            										}
            									}
            									else {
HXLINE( 359)										end = textField->getCharBoundaries(selectionEnd);
            									}
HXLINE( 362)									bool _hx_tmp;
HXDLIN( 362)									if (::hx::IsNotNull( start )) {
HXLINE( 362)										_hx_tmp = ::hx::IsNotNull( end );
            									}
            									else {
HXLINE( 362)										_hx_tmp = false;
            									}
HXDLIN( 362)									if (_hx_tmp) {
HXLINE( 364)										cairo->setSourceRGB(( (Float)(0) ),( (Float)(0) ),( (Float)(0) ));
HXLINE( 365)										cairo->rectangle(((scrollX + start->x) - bounds->x),(start->y + scrollY),(end->x - start->x),group1->height);
HXLINE( 366)										cairo->fill();
HXLINE( 367)										cairo->setSourceRGB(( (Float)(1) ),( (Float)(1) ),( (Float)(1) ));
HXLINE( 371)										::Array< ::Dynamic> selectedGylphs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 373)										selectionStart = (selectionStart - group1->startIndex);
HXLINE( 374)										selectionEnd = (selectionEnd - group1->startIndex);
HXLINE( 375)										{
HXLINE( 375)											int _g = selectionStart;
HXDLIN( 375)											int _g1 = selectionEnd;
HXDLIN( 375)											while((_g < _g1)){
HXLINE( 375)												_g = (_g + 1);
HXDLIN( 375)												int i = (_g - 1);
HXLINE( 376)												selectedGylphs->push(glyphs->__get(i).StaticCast<  ::lime::graphics::cairo::CairoGlyph >());
            											}
            										}
HXLINE( 377)										cairo->showGlyphs(selectedGylphs);
            									}
            								}
            							}
            						}
HXLINE( 384)						if (( (bool)(group1->format->underline) )) {
HXLINE( 388)							cairo->newPath();
HXLINE( 389)							cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 390)							Float x = ((group1->offsetX + scrollX) - bounds->x);
HXLINE( 391)							Float y = (::Math_obj::floor((((group1->offsetY + scrollY) + group1->ascent) - bounds->y)) + ((Float)0.5));
HXLINE( 392)							cairo->moveTo(x,y);
HXLINE( 393)							cairo->lineTo((x + group1->width),y);
HXLINE( 394)							cairo->stroke();
HXLINE( 395)							cairo->closePath();
            						}
            					}
            				}
            				_hx_goto_2:;
            			}
            		}
            		else {
HXLINE( 400)			bool _hx_tmp;
HXDLIN( 400)			bool _hx_tmp1;
HXDLIN( 400)			if ((textField->_hx___caretIndex > -1)) {
HXLINE( 400)				_hx_tmp1 = textEngine->selectable;
            			}
            			else {
HXLINE( 400)				_hx_tmp1 = false;
            			}
HXDLIN( 400)			if (_hx_tmp1) {
HXLINE( 400)				_hx_tmp = textField->_hx___showCursor;
            			}
            			else {
HXLINE( 400)				_hx_tmp = false;
            			}
HXDLIN( 400)			if (_hx_tmp) {
HXLINE( 402)				Float scrollX;
HXDLIN( 402)				if (useTextBounds1) {
HXLINE( 402)					scrollX = ( (Float)(0) );
            				}
            				else {
HXLINE( 402)					scrollX = cursorOffsetX;
            				}
HXDLIN( 402)				Float scrollX1 = (-(textField->get_scrollH()) + scrollX);
HXLINE( 403)				Float scrollY = ((Float)0.0);
HXLINE( 405)				{
HXLINE( 405)					int _g = 0;
HXDLIN( 405)					int _g1 = (textField->get_scrollV() - 1);
HXDLIN( 405)					while((_g < _g1)){
HXLINE( 405)						_g = (_g + 1);
HXDLIN( 405)						int i = (_g - 1);
HXLINE( 407)						scrollY = (scrollY + textEngine->lineHeights->get(i));
            					}
            				}
HXLINE( 410)				 ::Dynamic color = textField->get_defaultTextFormat()->color;
HXLINE( 411)				Float r = (( (Float)(::hx::UShr((( (int)(color) ) & 16711680),16)) ) / ( (Float)(255) ));
HXLINE( 412)				Float g = (( (Float)(::hx::UShr((( (int)(color) ) & 65280),8)) ) / ( (Float)(255) ));
HXLINE( 413)				Float b = (( (Float)((( (int)(color) ) & 255)) ) / ( (Float)(255) ));
HXLINE( 415)				cairo->setSourceRGB(r,g,b);
HXLINE( 417)				cairo->newPath();
HXLINE( 418)				cairo->moveTo((scrollX1 + ((Float)2.5)),(scrollY + ((Float)2.5)));
HXLINE( 419)				cairo->set_lineWidth(( (Float)(1) ));
HXLINE( 420)				cairo->lineTo((scrollX1 + ((Float)2.5)),((scrollY + ::openfl::text::_internal::TextEngine_obj::getFormatHeight(textField->get_defaultTextFormat())) - ( (Float)(1) )));
HXLINE( 421)				cairo->stroke();
HXLINE( 422)				cairo->closePath();
            			}
            		}
HXLINE( 425)		graphics->_hx___bitmap->image->dirty = true;
HXLINE( 426)		graphics->_hx___bitmap->image->version++;
HXLINE( 427)		textField->_hx___dirty = false;
HXLINE( 428)		graphics->_hx___softwareDirty = false;
HXLINE( 429)		graphics->set___dirty(false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,render,(void))

void CairoTextField_obj::renderDrawable( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_434_renderDrawable)
HXLINE( 436)		renderer->_hx___updateCacheBitmap(textField,textField->_hx___dirty);
HXLINE( 438)		bool _hx_tmp;
HXDLIN( 438)		if (::hx::IsNotNull( textField->_hx___cacheBitmap )) {
HXLINE( 438)			_hx_tmp = !(textField->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 438)			_hx_tmp = false;
            		}
HXDLIN( 438)		if (_hx_tmp) {
HXLINE( 440)			 ::openfl::display::Bitmap bitmap = textField->_hx___cacheBitmap;
HXDLIN( 440)			if (bitmap->_hx___renderable) {
HXLINE( 440)				Float alpha = renderer->_hx___getAlpha(bitmap->_hx___worldAlpha);
HXDLIN( 440)				bool _hx_tmp;
HXDLIN( 440)				bool _hx_tmp1;
HXDLIN( 440)				if ((alpha > 0)) {
HXLINE( 440)					_hx_tmp1 = ::hx::IsNotNull( bitmap->_hx___bitmapData );
            				}
            				else {
HXLINE( 440)					_hx_tmp1 = false;
            				}
HXDLIN( 440)				if (_hx_tmp1) {
HXLINE( 440)					_hx_tmp = bitmap->_hx___bitmapData->_hx___isValid;
            				}
            				else {
HXLINE( 440)					_hx_tmp = false;
            				}
HXDLIN( 440)				if (_hx_tmp) {
HXLINE( 440)					 ::lime::graphics::cairo::Cairo cairo = renderer->cairo;
HXDLIN( 440)					renderer->_hx___setBlendMode(bitmap->_hx___worldBlendMode);
HXDLIN( 440)					renderer->_hx___pushMaskObject(bitmap,null());
HXDLIN( 440)					renderer->applyMatrix(bitmap->_hx___renderTransform,cairo);
HXDLIN( 440)					 ::Dynamic surface = bitmap->_hx___bitmapData->getSurface();
HXDLIN( 440)					if (::hx::IsNotNull( surface )) {
HXLINE( 440)						 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 440)						int _hx_tmp;
HXDLIN( 440)						bool _hx_tmp1;
HXDLIN( 440)						if (renderer->_hx___allowSmoothing) {
HXLINE( 440)							_hx_tmp1 = bitmap->smoothing;
            						}
            						else {
HXLINE( 440)							_hx_tmp1 = false;
            						}
HXDLIN( 440)						if (_hx_tmp1) {
HXLINE( 440)							_hx_tmp = 1;
            						}
            						else {
HXLINE( 440)							_hx_tmp = 3;
            						}
HXDLIN( 440)						::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp);
HXDLIN( 440)						cairo->set_source(pattern);
HXDLIN( 440)						if ((alpha == 1)) {
HXLINE( 440)							cairo->paint();
            						}
            						else {
HXLINE( 440)							cairo->paintWithAlpha(alpha);
            						}
            					}
HXDLIN( 440)					renderer->_hx___popMaskObject(bitmap,null());
HXDLIN( 440)					renderer->_hx___setBlendMode(10);
            				}
            			}
            		}
            		else {
HXLINE( 444)			::openfl::display::_internal::CairoTextField_obj::render(textField,renderer,textField->_hx___worldTransform);
HXLINE( 445)			::openfl::display::_internal::CairoDisplayObject_obj::render(textField,renderer);
            		}
HXLINE( 448)		renderer->_hx___renderEvent(textField);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,renderDrawable,(void))

void CairoTextField_obj::renderDrawableMask( ::openfl::text::TextField textField, ::openfl::display::CairoRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_454_renderDrawableMask)
HXDLIN( 454)		if (::hx::IsNotNull( textField->_hx___graphics )) {
HXDLIN( 454)			::openfl::display::_internal::CairoGraphics_obj::renderMask(textField->_hx___graphics,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoTextField_obj,renderDrawableMask,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoTextField_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CairoTextField_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CairoTextField_obj::__mClass;

static ::String CairoTextField_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CairoTextField_obj::__register()
{
	CairoTextField_obj _hx_dummy;
	CairoTextField_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CairoTextField",21,a3,1c,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoTextField_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoTextField_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoTextField_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoTextField_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a654946cfcca811d_29_boot)
HXDLIN(  29)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
