#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_base_Conductor
#include <base/Conductor.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_helpers_AssetPaths
#include <helpers/AssetPaths.h>
#endif
#ifndef INCLUDED_states_CourseState
#include <states/CourseState.h>
#endif
#ifndef INCLUDED_states_MusicBeatState
#include <states/MusicBeatState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_TitleScreen
#include <states/TitleScreen.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_259e471d1dda8a5f_19_new,"states.TitleScreen","new",0xb4ae72ca,"states.TitleScreen.new","states/TitleScreen.hx",19,0xd05713a7)
static const ::String _hx_array_data_4aff05d8_1[] = {
	HX_("playButton",06,f3,a3,80),HX_("exitGame",30,fe,22,04),
};
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_45_create,"states.TitleScreen","create",0xd696a2d2,"states.TitleScreen.create","states/TitleScreen.hx",45,0xd05713a7)
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_97_create,"states.TitleScreen","create",0xd696a2d2,"states.TitleScreen.create","states/TitleScreen.hx",97,0xd05713a7)
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_104_create,"states.TitleScreen","create",0xd696a2d2,"states.TitleScreen.create","states/TitleScreen.hx",104,0xd05713a7)
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_136_update,"states.TitleScreen","update",0xe18cc1df,"states.TitleScreen.update","states/TitleScreen.hx",136,0xd05713a7)
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_207_beatHit,"states.TitleScreen","beatHit",0x4fd209e7,"states.TitleScreen.beatHit","states/TitleScreen.hx",207,0xd05713a7)
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_219_stepHit,"states.TitleScreen","stepHit",0x5d0ecdd1,"states.TitleScreen.stepHit","states/TitleScreen.hx",219,0xd05713a7)
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_225_selectButton,"states.TitleScreen","selectButton",0x6d2f1664,"states.TitleScreen.selectButton","states/TitleScreen.hx",225,0xd05713a7)
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_239_goToState,"states.TitleScreen","goToState",0x0ac4f338,"states.TitleScreen.goToState","states/TitleScreen.hx",239,0xd05713a7)
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_252_changeItem,"states.TitleScreen","changeItem",0xa609d979,"states.TitleScreen.changeItem","states/TitleScreen.hx",252,0xd05713a7)
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_21_boot,"states.TitleScreen","boot",0x5c0efe88,"states.TitleScreen.boot","states/TitleScreen.hx",21,0xd05713a7)
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_22_boot,"states.TitleScreen","boot",0x5c0efe88,"states.TitleScreen.boot","states/TitleScreen.hx",22,0xd05713a7)
HX_LOCAL_STACK_FRAME(_hx_pos_259e471d1dda8a5f_26_boot,"states.TitleScreen","boot",0x5c0efe88,"states.TitleScreen.boot","states/TitleScreen.hx",26,0xd05713a7)
namespace states{

void TitleScreen_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_259e471d1dda8a5f_19_new)
HXLINE( 222)		this->selected = false;
HXLINE( 133)		this->isUsingMouse = false;
HXLINE( 132)		this->canClick = true;
HXLINE(  42)		this->enableCamScroll = false;
HXLINE(  38)		this->anotherButtonArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  37)		this->buttonArray = ::Array_obj< ::String >::fromData( _hx_array_data_4aff05d8_1,2);
HXLINE(  36)		this->titleArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  33)		this->titleSize = 80;
HXLINE(  25)		this->scroll = ((Float)0);
HXLINE(  24)		this->curSelected = 0;
HXLINE(  19)		super::__construct(TransIn,TransOut);
            	}

Dynamic TitleScreen_obj::__CreateEmpty() { return new TitleScreen_obj; }

void *TitleScreen_obj::_hx_vtable = 0;

Dynamic TitleScreen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleScreen_obj > _hx_result = new TitleScreen_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TitleScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4cce7c1e) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3369ae9c || inClassId==(int)0x4cce7c1e;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void TitleScreen_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_259e471d1dda8a5f_45_create)
HXLINE(  46)		if ((this->buttonArray->length > 2)) {
HXLINE(  47)			this->enableCamScroll = true;
            		}
HXLINE(  49)		::haxe::Log_obj::trace(::states::TitleScreen_obj::state,::hx::SourceInfo(HX_("source/states/TitleScreen.hx",33,28,1e,0f),49,HX_("states.TitleScreen",d8,05,ff,4a),HX_("create",fc,66,0f,7c)));
HXLINE(  50)		::String library = null();
HXDLIN(  50)		this->sound = ::helpers::AssetPaths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("tea-time",ea,76,76,51)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library);
HXLINE(  51)		::flixel::FlxG_obj::sound->playMusic(this->sound,null(),null(),null());
HXLINE(  52)		::base::Conductor_obj::changeBPM(((Float)105.0));
HXLINE(  54)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  54)		int _hx_tmp1 = ::flixel::FlxG_obj::width;
HXDLIN(  54)		int _hx_tmp2 = ::flixel::FlxG_obj::height;
HXDLIN(  54)		int Alpha = 255;
HXDLIN(  54)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  54)		{
HXLINE(  54)			color = (color & -16711681);
HXDLIN(  54)			color = (color | 0);
            		}
HXDLIN(  54)		{
HXLINE(  54)			color = (color & -65281);
HXDLIN(  54)			color = (color | 42496);
            		}
HXDLIN(  54)		{
HXLINE(  54)			color = (color & -256);
HXDLIN(  54)			color = (color | 255);
            		}
HXDLIN(  54)		{
HXLINE(  54)			color = (color & 16777215);
HXDLIN(  54)			int color1;
HXDLIN(  54)			if ((Alpha > 255)) {
HXLINE(  54)				color1 = 255;
            			}
            			else {
HXLINE(  54)				if ((Alpha < 0)) {
HXLINE(  54)					color1 = 0;
            				}
            				else {
HXLINE(  54)					color1 = Alpha;
            				}
            			}
HXDLIN(  54)			color = (color | (color1 << 24));
            		}
HXDLIN(  54)		this->bg = _hx_tmp->makeGraphic(_hx_tmp1,_hx_tmp2,color,null(),null());
HXLINE(  55)		{
HXLINE(  55)			 ::flixel::FlxSprite _this = this->bg;
HXDLIN(  55)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  55)			bool _hx_tmp3;
HXDLIN(  55)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  55)					_hx_tmp3 = true;
            				}
            				break;
            				default:{
HXLINE(  55)					_hx_tmp3 = false;
            				}
            			}
HXDLIN(  55)			if (_hx_tmp3) {
HXLINE(  55)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  55)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  55)			bool _hx_tmp4;
HXDLIN(  55)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  55)					_hx_tmp4 = true;
            				}
            				break;
            				default:{
HXLINE(  55)					_hx_tmp4 = false;
            				}
            			}
HXDLIN(  55)			if (_hx_tmp4) {
HXLINE(  55)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  55)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  56)		this->bg->scrollFactor->set(null(),null());
HXLINE(  57)		this->add(this->bg);
HXLINE(  59)		if (this->enableCamScroll) {
HXLINE(  60)			this->camFollowPos =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  61)			this->add(this->camFollowPos);
HXLINE(  63)			 ::flixel::FlxObject _hx_tmp = this->camFollowPos;
HXDLIN(  63)			Float _hx_tmp1 = this->bg->getGraphicMidpoint(null())->x;
HXDLIN(  63)			_hx_tmp->setPosition(_hx_tmp1,(this->scroll * ( (Float)(30) )));
            		}
HXLINE(  66)		this->titleShadow =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,::states::TitleScreen_obj::gameName,this->titleSize,null());
HXLINE(  67)		 ::flixel::text::FlxText _hx_tmp5 = this->titleShadow;
HXDLIN(  67)		int _hx_tmp6 = this->titleSize;
HXDLIN(  67)		int Alpha1 = 255;
HXDLIN(  67)		int color2 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  67)		{
HXLINE(  67)			color2 = (color2 & -16711681);
HXDLIN(  67)			color2 = (color2 | 0);
            		}
HXDLIN(  67)		{
HXLINE(  67)			color2 = (color2 & -65281);
HXDLIN(  67)			color2 = (color2 | 0);
            		}
HXDLIN(  67)		{
HXLINE(  67)			color2 = (color2 & -256);
HXDLIN(  67)			color2 = (color2 | 0);
            		}
HXDLIN(  67)		{
HXLINE(  67)			color2 = (color2 & 16777215);
HXDLIN(  67)			int color3;
HXDLIN(  67)			if ((Alpha1 > 255)) {
HXLINE(  67)				color3 = 255;
            			}
            			else {
HXLINE(  67)				if ((Alpha1 < 0)) {
HXLINE(  67)					color3 = 0;
            				}
            				else {
HXLINE(  67)					color3 = Alpha1;
            				}
            			}
HXDLIN(  67)			color2 = (color2 | (color3 << 24));
            		}
HXDLIN(  67)		_hx_tmp5->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("DotGothic16-Regular.ttf",0b,df,6b,62)),_hx_tmp6,color2,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::NONE_dyn(),null(),null());
HXLINE(  69)		this->title =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,::states::TitleScreen_obj::gameName,this->titleSize,null());
HXLINE(  70)		 ::flixel::text::FlxText _hx_tmp7 = this->title;
HXDLIN(  70)		int _hx_tmp8 = this->titleSize;
HXDLIN(  70)		int Alpha2 = 255;
HXDLIN(  70)		int color4 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  70)		{
HXLINE(  70)			color4 = (color4 & -16711681);
HXDLIN(  70)			color4 = (color4 | 16711680);
            		}
HXDLIN(  70)		{
HXLINE(  70)			color4 = (color4 & -65281);
HXDLIN(  70)			color4 = (color4 | 65280);
            		}
HXDLIN(  70)		{
HXLINE(  70)			color4 = (color4 & -256);
HXDLIN(  70)			color4 = (color4 | 255);
            		}
HXDLIN(  70)		{
HXLINE(  70)			color4 = (color4 & 16777215);
HXDLIN(  70)			int color5;
HXDLIN(  70)			if ((Alpha2 > 255)) {
HXLINE(  70)				color5 = 255;
            			}
            			else {
HXLINE(  70)				if ((Alpha2 < 0)) {
HXLINE(  70)					color5 = 0;
            				}
            				else {
HXLINE(  70)					color5 = Alpha2;
            				}
            			}
HXDLIN(  70)			color4 = (color4 | (color5 << 24));
            		}
HXDLIN(  70)		_hx_tmp7->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("DotGothic16-Regular.ttf",0b,df,6b,62)),_hx_tmp8,color4,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::NONE_dyn(),null(),null());
HXLINE(  71)		{
HXLINE(  71)			 ::flixel::text::FlxText _this1 = this->title;
HXDLIN(  71)			 ::flixel::util::FlxAxes axes1 = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  71)			bool _hx_tmp9;
HXDLIN(  71)			switch((int)(axes1->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  71)					_hx_tmp9 = true;
            				}
            				break;
            				default:{
HXLINE(  71)					_hx_tmp9 = false;
            				}
            			}
HXDLIN(  71)			if (_hx_tmp9) {
HXLINE(  71)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  71)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  71)			bool _hx_tmp10;
HXDLIN(  71)			switch((int)(axes1->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  71)					_hx_tmp10 = true;
            				}
            				break;
            				default:{
HXLINE(  71)					_hx_tmp10 = false;
            				}
            			}
HXDLIN(  71)			if (_hx_tmp10) {
HXLINE(  71)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  71)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  72)		 ::flixel::text::FlxText fh = this->title;
HXDLIN(  72)		fh->set_y((fh->y - ( (Float)(190) )));
HXLINE(  74)		this->titleOuterShadow =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,::states::TitleScreen_obj::gameName,this->titleSize,null());
HXLINE(  75)		 ::flixel::text::FlxText _hx_tmp11 = this->titleOuterShadow;
HXDLIN(  75)		int _hx_tmp12 = this->titleSize;
HXDLIN(  75)		int Alpha3 = 255;
HXDLIN(  75)		int color6 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  75)		{
HXLINE(  75)			color6 = (color6 & -16711681);
HXDLIN(  75)			color6 = (color6 | 3801088);
            		}
HXDLIN(  75)		{
HXLINE(  75)			color6 = (color6 & -65281);
HXDLIN(  75)			color6 = (color6 | 14848);
            		}
HXDLIN(  75)		{
HXLINE(  75)			color6 = (color6 & -256);
HXDLIN(  75)			color6 = (color6 | 58);
            		}
HXDLIN(  75)		{
HXLINE(  75)			color6 = (color6 & 16777215);
HXDLIN(  75)			int color7;
HXDLIN(  75)			if ((Alpha3 > 255)) {
HXLINE(  75)				color7 = 255;
            			}
            			else {
HXLINE(  75)				if ((Alpha3 < 0)) {
HXLINE(  75)					color7 = 0;
            				}
            				else {
HXLINE(  75)					color7 = Alpha3;
            				}
            			}
HXDLIN(  75)			color6 = (color6 | (color7 << 24));
            		}
HXDLIN(  75)		_hx_tmp11->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("DotGothic16-Regular.ttf",0b,df,6b,62)),_hx_tmp12,color6,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::NONE_dyn(),null(),null());
HXLINE(  77)		{
HXLINE(  77)			int _g = 0;
HXDLIN(  77)			int _g1 = this->buttonArray->length;
HXDLIN(  77)			while((_g < _g1)){
HXLINE(  77)				_g = (_g + 1);
HXDLIN(  77)				int i = (_g - 1);
HXLINE(  78)				 ::flixel::FlxSprite button =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.6)),null());
HXLINE(  79)				button->ID = i;
HXLINE(  80)				::String key = (HX_("menu/",b0,a5,c3,05) + this->buttonArray->__get(i));
HXDLIN(  80)				::String library = null();
HXDLIN(  80)				::String _hx_tmp = ::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  80)				button->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  81)				button->animation->addByPrefix(HX_("idle",14,a7,b3,45),(this->buttonArray->__get(i) + HX_("Idle",34,d3,8c,30)),24,true,null(),null());
HXLINE(  82)				button->animation->addByPrefix(HX_("hover",bc,e5,64,2b),(this->buttonArray->__get(i) + HX_("Hover",9c,55,92,be)),24,true,null(),null());
HXLINE(  83)				button->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  84)				button->set_antialiasing(true);
HXLINE(  85)				button->updateHitbox();
HXLINE(  86)				{
HXLINE(  86)					 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN(  86)					if (::hx::IsNull( axes )) {
HXLINE(  86)						axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            					}
HXDLIN(  86)					bool _hx_tmp1;
HXDLIN(  86)					switch((int)(axes->_hx_getIndex())){
            						case (int)0: case (int)2: {
HXLINE(  86)							_hx_tmp1 = true;
            						}
            						break;
            						default:{
HXLINE(  86)							_hx_tmp1 = false;
            						}
            					}
HXDLIN(  86)					if (_hx_tmp1) {
HXLINE(  86)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  86)						button->set_x(((( (Float)(_hx_tmp) ) - button->get_width()) / ( (Float)(2) )));
            					}
HXDLIN(  86)					bool _hx_tmp2;
HXDLIN(  86)					switch((int)(axes->_hx_getIndex())){
            						case (int)1: case (int)2: {
HXLINE(  86)							_hx_tmp2 = true;
            						}
            						break;
            						default:{
HXLINE(  86)							_hx_tmp2 = false;
            						}
            					}
HXDLIN(  86)					if (_hx_tmp2) {
HXLINE(  86)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  86)						button->set_y(((( (Float)(_hx_tmp) ) - button->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  87)				this->add(button);
HXLINE(  88)				Float scr = (( (Float)(this->buttonArray->length) ) * ((Float)0.135));
HXLINE(  89)				if ((this->buttonArray->length < 1)) {
HXLINE(  89)					scr = ( (Float)(0) );
            				}
HXLINE(  90)				button->scrollFactor->set(0,scr);
HXLINE(  91)				button->set_antialiasing(true);
HXLINE(  92)				this->anotherButtonArray->push(button);
HXLINE(  93)				if (this->enableCamScroll) {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            					void _hx_run( ::flixel::tweens::FlxTween flxTween){
            						HX_GC_STACKFRAME(&_hx_pos_259e471d1dda8a5f_97_create)
HXLINE(  97)						::states::TitleScreen_obj::moved = true;
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  94)					 ::Dynamic _hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("y",79,00,00,00),((this->titleOuterShadow->get_height() + 120) + (i * 200))));
HXDLIN(  94)					::flixel::tweens::FlxTween_obj::tween(button,_hx_tmp,(1 + (( (Float)(i) ) * ((Float)0.25))), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())
            						->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0()))));
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            					void _hx_run( ::flixel::tweens::FlxTween flxTween){
            						HX_GC_STACKFRAME(&_hx_pos_259e471d1dda8a5f_104_create)
HXLINE( 104)						::states::TitleScreen_obj::moved = true;
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 101)					 ::Dynamic _hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(1)
            						->setFixed(0,HX_("y",79,00,00,00),((this->titleOuterShadow->get_height() + 220) + (i * 200))));
HXDLIN( 101)					::flixel::tweens::FlxTween_obj::tween(button,_hx_tmp,(1 + (( (Float)(i) ) * ((Float)0.25))), ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::expoInOut_dyn())
            						->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1()))));
            				}
            			}
            		}
HXLINE( 110)		this->add(this->titleShadow);
HXLINE( 111)		this->titleArray->push(this->titleShadow);
HXLINE( 112)		this->add(this->title);
HXLINE( 113)		this->titleArray->push(this->title);
HXLINE( 114)		this->add(this->titleOuterShadow);
HXLINE( 115)		this->titleArray->push(this->titleOuterShadow);
HXLINE( 117)		this->titleShadow->scrollFactor->set(null(),null());
HXLINE( 118)		this->title->scrollFactor->set(null(),null());
HXLINE( 119)		this->titleOuterShadow->scrollFactor->set(null(),null());
HXLINE( 121)		this->titleShadow->setPosition((this->title->x - ( (Float)(5) )),this->title->y);
HXLINE( 122)		this->titleOuterShadow->setPosition((this->title->x + 1),this->title->y);
HXLINE( 124)		if (this->enableCamScroll) {
HXLINE( 125)			::flixel::FlxG_obj::camera->follow(this->camFollowPos,null(),1);
            		}
HXLINE( 127)		this->changeItem(null());
HXLINE( 129)		this->super::create();
            	}


void TitleScreen_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_259e471d1dda8a5f_136_update)
HXLINE( 137)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE( 138)			::base::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
HXLINE( 140)		if (this->enableCamScroll) {
HXLINE( 141)			if ((this->scroll < 0)) {
HXLINE( 142)				this->scroll = ( (Float)(0) );
            			}
HXLINE( 144)			if ((::flixel::FlxG_obj::mouse->wheel > 0)) {
HXLINE( 145)				 ::states::TitleScreen _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 145)				_hx_tmp->scroll = (_hx_tmp->scroll + (::flixel::FlxG_obj::mouse->wheel * 30));
HXLINE( 146)				 ::flixel::FlxObject _hx_tmp1 = this->camFollowPos;
HXDLIN( 146)				_hx_tmp1->setPosition(this->bg->getGraphicMidpoint(null())->x,this->scroll);
            			}
HXLINE( 149)			if ((::flixel::FlxG_obj::mouse->wheel < 0)) {
HXLINE( 150)				 ::states::TitleScreen _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 150)				_hx_tmp->scroll = (_hx_tmp->scroll + (::flixel::FlxG_obj::mouse->wheel * 30));
HXLINE( 151)				 ::flixel::FlxObject _hx_tmp1 = this->camFollowPos;
HXDLIN( 151)				_hx_tmp1->setPosition(this->bg->getGraphicMidpoint(null())->x,this->scroll);
            			}
            		}
HXLINE( 157)		this->super::update(elapsed);
HXLINE( 159)		{
HXLINE( 159)			int _g = 0;
HXDLIN( 159)			int _g1 = this->anotherButtonArray->length;
HXDLIN( 159)			while((_g < _g1)){
HXLINE( 159)				_g = (_g + 1);
HXDLIN( 159)				int i = (_g - 1);
HXLINE( 160)				if (this->isUsingMouse) {
HXLINE( 162)					if (!(::flixel::FlxG_obj::mouse->overlaps(this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >(),null()))) {
HXLINE( 163)						this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            					}
            				}
HXLINE( 166)				this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->centerOffsets(null());
HXLINE( 167)				{
HXLINE( 167)					 ::flixel::FlxSprite _this = this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 167)					_this->origin->set((( (Float)(_this->frameWidth) ) * ((Float)0.5)),(( (Float)(_this->frameHeight) ) * ((Float)0.5)));
            				}
HXLINE( 169)				Float multX = (1 + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(9) ))))) * (this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->scale->x - ( (Float)(1) ))));
HXLINE( 170)				Float multY = (1 + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(9) ))))) * (this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->scale->y - ( (Float)(1) ))));
HXLINE( 171)				this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->scale->set(multX,multY);
HXLINE( 172)				this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->updateHitbox();
HXLINE( 174)				if (::flixel::FlxG_obj::mouse->overlaps(this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >(),null())) {
HXLINE( 176)					if (this->canClick) {
HXLINE( 178)						this->curSelected = this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->ID;
HXLINE( 179)						this->isUsingMouse = true;
HXLINE( 180)						this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("hover",bc,e5,64,2b),null(),null(),null());
HXLINE( 182)						if ((i == this->curSelected)) {
HXLINE( 183)							Float multX = (((Float)1.1) + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(((Float)1.1),(((Float)1.1) - (elapsed * ( (Float)(9) ))))) * (this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->scale->x - ((Float)1.1))));
HXLINE( 184)							Float multY = (((Float)1.1) + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(((Float)1.1),(((Float)1.1) - (elapsed * ( (Float)(9) ))))) * (this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->scale->y - ((Float)1.1))));
HXLINE( 185)							this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->scale->set(multX,multY);
HXLINE( 186)							this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->updateHitbox();
            						}
            					}
HXLINE( 190)					bool _hx_tmp;
HXDLIN( 190)					 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 190)					bool _hx_tmp1;
HXDLIN( 190)					if ((_this->current != 1)) {
HXLINE( 190)						_hx_tmp1 = (_this->current == 2);
            					}
            					else {
HXLINE( 190)						_hx_tmp1 = true;
            					}
HXDLIN( 190)					if (_hx_tmp1) {
HXLINE( 190)						_hx_tmp = this->canClick;
            					}
            					else {
HXLINE( 190)						_hx_tmp = false;
            					}
HXDLIN( 190)					if (_hx_tmp) {
HXLINE( 192)						this->selectButton();
            					}
            				}
HXLINE( 196)				this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->updateHitbox();
            			}
            		}
HXLINE( 199)		{
HXLINE( 199)			int _g2 = 0;
HXDLIN( 199)			int _g3 = this->titleArray->length;
HXDLIN( 199)			while((_g2 < _g3)){
HXLINE( 199)				_g2 = (_g2 + 1);
HXDLIN( 199)				int i = (_g2 - 1);
HXLINE( 200)				Float multX = (1 + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(9) ))))) * (this->titleArray->__get(i).StaticCast<  ::flixel::text::FlxText >()->scale->x - ( (Float)(1) ))));
HXLINE( 201)				Float multY = (1 + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(9) ))))) * (this->titleArray->__get(i).StaticCast<  ::flixel::text::FlxText >()->scale->y - ( (Float)(1) ))));
HXLINE( 202)				this->titleArray->__get(i).StaticCast<  ::flixel::text::FlxText >()->scale->set(multX,multY);
HXLINE( 203)				this->titleArray->__get(i).StaticCast<  ::flixel::text::FlxText >()->updateHitbox();
            			}
            		}
            	}


void TitleScreen_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_259e471d1dda8a5f_207_beatHit)
HXLINE( 208)		this->super::beatHit();
HXLINE( 210)		if ((::hx::Mod(this->curBeat,1) == 0)) {
HXLINE( 211)			int _g = 0;
HXDLIN( 211)			int _g1 = this->titleArray->length;
HXDLIN( 211)			while((_g < _g1)){
HXLINE( 211)				_g = (_g + 1);
HXDLIN( 211)				int i = (_g - 1);
HXLINE( 212)				this->titleArray->__get(i).StaticCast<  ::flixel::text::FlxText >()->scale->set(((Float)1.05),((Float)1.05));
HXLINE( 213)				this->titleArray->__get(i).StaticCast<  ::flixel::text::FlxText >()->updateHitbox();
            			}
            		}
            	}


void TitleScreen_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_259e471d1dda8a5f_219_stepHit)
HXDLIN( 219)		this->super::stepHit();
            	}


void TitleScreen_obj::selectButton(){
            	HX_STACKFRAME(&_hx_pos_259e471d1dda8a5f_225_selectButton)
HXLINE( 226)		this->selected = true;
HXLINE( 228)		this->canClick = false;
HXLINE( 230)		{
HXLINE( 230)			int _g = 0;
HXDLIN( 230)			int _g1 = this->anotherButtonArray->length;
HXDLIN( 230)			while((_g < _g1)){
HXLINE( 230)				_g = (_g + 1);
HXDLIN( 230)				int i = (_g - 1);
HXLINE( 231)				if ((this->curSelected == this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->ID)) {
HXLINE( 233)					this->goToState();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleScreen_obj,selectButton,(void))

void TitleScreen_obj::goToState(){
            	HX_GC_STACKFRAME(&_hx_pos_259e471d1dda8a5f_239_goToState)
HXLINE( 240)		::String stateToGo = this->buttonArray->__get(this->curSelected);
HXLINE( 242)		::String _hx_switch_0 = stateToGo;
            		if (  (_hx_switch_0==HX_("exitGame",30,fe,22,04)) ){
HXLINE( 247)			::Sys_obj::exit(0);
HXDLIN( 247)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("playButton",06,f3,a3,80)) ){
HXLINE( 245)			::states::MusicBeatState_obj::switchState( ::states::PlayState_obj::__alloc( HX_CTX ,null(),null()));
HXDLIN( 245)			goto _hx_goto_14;
            		}
            		_hx_goto_14:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleScreen_obj,goToState,(void))

void TitleScreen_obj::changeItem(::hx::Null< int >  __o_huh){
            		int huh = __o_huh.Default(0);
            	HX_STACKFRAME(&_hx_pos_259e471d1dda8a5f_252_changeItem)
HXLINE( 253)		if (::states::TitleScreen_obj::moved) {
HXLINE( 254)			 ::states::TitleScreen _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 254)			_hx_tmp->curSelected = (_hx_tmp->curSelected + huh);
HXLINE( 256)			if ((this->curSelected >= this->anotherButtonArray->length)) {
HXLINE( 257)				this->curSelected = 0;
            			}
HXLINE( 258)			if ((this->curSelected < 0)) {
HXLINE( 259)				this->curSelected = (this->anotherButtonArray->length - 1);
            			}
            		}
HXLINE( 262)		{
HXLINE( 262)			int _g = 0;
HXDLIN( 262)			int _g1 = this->anotherButtonArray->length;
HXDLIN( 262)			while((_g < _g1)){
HXLINE( 262)				_g = (_g + 1);
HXDLIN( 262)				int i = (_g - 1);
HXLINE( 263)				this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 265)				bool _hx_tmp;
HXDLIN( 265)				if ((this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->ID == this->curSelected)) {
HXLINE( 265)					_hx_tmp = ::states::TitleScreen_obj::moved;
            				}
            				else {
HXLINE( 265)					_hx_tmp = false;
            				}
HXDLIN( 265)				if (_hx_tmp) {
HXLINE( 267)					this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->animation->play(HX_("hover",bc,e5,64,2b),null(),null(),null());
            				}
HXLINE( 270)				this->anotherButtonArray->__get(i).StaticCast<  ::flixel::FlxSprite >()->updateHitbox();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleScreen_obj,changeItem,(void))

::String TitleScreen_obj::state;

::String TitleScreen_obj::gameName;

bool TitleScreen_obj::moved;


::hx::ObjectPtr< TitleScreen_obj > TitleScreen_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< TitleScreen_obj > __this = new TitleScreen_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< TitleScreen_obj > TitleScreen_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	TitleScreen_obj *__this = (TitleScreen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleScreen_obj), true, "states.TitleScreen"));
	*(void **)__this = TitleScreen_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

TitleScreen_obj::TitleScreen_obj()
{
}

void TitleScreen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleScreen);
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(scroll,"scroll");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(titleShadow,"titleShadow");
	HX_MARK_MEMBER_NAME(titleOuterShadow,"titleOuterShadow");
	HX_MARK_MEMBER_NAME(titleSize,"titleSize");
	HX_MARK_MEMBER_NAME(titleArray,"titleArray");
	HX_MARK_MEMBER_NAME(buttonArray,"buttonArray");
	HX_MARK_MEMBER_NAME(anotherButtonArray,"anotherButtonArray");
	HX_MARK_MEMBER_NAME(camFollowPos,"camFollowPos");
	HX_MARK_MEMBER_NAME(enableCamScroll,"enableCamScroll");
	HX_MARK_MEMBER_NAME(canClick,"canClick");
	HX_MARK_MEMBER_NAME(isUsingMouse,"isUsingMouse");
	HX_MARK_MEMBER_NAME(selected,"selected");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleScreen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(scroll,"scroll");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(titleShadow,"titleShadow");
	HX_VISIT_MEMBER_NAME(titleOuterShadow,"titleOuterShadow");
	HX_VISIT_MEMBER_NAME(titleSize,"titleSize");
	HX_VISIT_MEMBER_NAME(titleArray,"titleArray");
	HX_VISIT_MEMBER_NAME(buttonArray,"buttonArray");
	HX_VISIT_MEMBER_NAME(anotherButtonArray,"anotherButtonArray");
	HX_VISIT_MEMBER_NAME(camFollowPos,"camFollowPos");
	HX_VISIT_MEMBER_NAME(enableCamScroll,"enableCamScroll");
	HX_VISIT_MEMBER_NAME(canClick,"canClick");
	HX_VISIT_MEMBER_NAME(isUsingMouse,"isUsingMouse");
	HX_VISIT_MEMBER_NAME(selected,"selected");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleScreen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return ::hx::Val( sound ); }
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( title ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scroll") ) { return ::hx::Val( scroll ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canClick") ) { return ::hx::Val( canClick ); }
		if (HX_FIELD_EQ(inName,"selected") ) { return ::hx::Val( selected ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleSize") ) { return ::hx::Val( titleSize ); }
		if (HX_FIELD_EQ(inName,"goToState") ) { return ::hx::Val( goToState_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"titleArray") ) { return ::hx::Val( titleArray ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"titleShadow") ) { return ::hx::Val( titleShadow ); }
		if (HX_FIELD_EQ(inName,"buttonArray") ) { return ::hx::Val( buttonArray ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"camFollowPos") ) { return ::hx::Val( camFollowPos ); }
		if (HX_FIELD_EQ(inName,"isUsingMouse") ) { return ::hx::Val( isUsingMouse ); }
		if (HX_FIELD_EQ(inName,"selectButton") ) { return ::hx::Val( selectButton_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enableCamScroll") ) { return ::hx::Val( enableCamScroll ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"titleOuterShadow") ) { return ::hx::Val( titleOuterShadow ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"anotherButtonArray") ) { return ::hx::Val( anotherButtonArray ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleScreen_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { outValue = ( state ); return true; }
		if (HX_FIELD_EQ(inName,"moved") ) { outValue = ( moved ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameName") ) { outValue = ( gameName ); return true; }
	}
	return false;
}

::hx::Val TitleScreen_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scroll") ) { scroll=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canClick") ) { canClick=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selected") ) { selected=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"titleSize") ) { titleSize=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"titleArray") ) { titleArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"titleShadow") ) { titleShadow=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buttonArray") ) { buttonArray=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"camFollowPos") ) { camFollowPos=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isUsingMouse") ) { isUsingMouse=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"enableCamScroll") ) { enableCamScroll=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"titleOuterShadow") ) { titleOuterShadow=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"anotherButtonArray") ) { anotherButtonArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleScreen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"moved") ) { moved=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameName") ) { gameName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void TitleScreen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sound",cf,8c,cc,80));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("scroll",0d,d8,64,47));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("titleShadow",98,93,ac,b3));
	outFields->push(HX_("titleOuterShadow",03,bc,86,94));
	outFields->push(HX_("titleSize",79,8e,fe,6f));
	outFields->push(HX_("titleArray",e1,80,74,37));
	outFields->push(HX_("buttonArray",47,2e,3a,73));
	outFields->push(HX_("anotherButtonArray",44,f0,8e,56));
	outFields->push(HX_("camFollowPos",94,32,de,8d));
	outFields->push(HX_("enableCamScroll",79,7e,16,54));
	outFields->push(HX_("canClick",18,be,f1,b6));
	outFields->push(HX_("isUsingMouse",cb,a2,d8,98));
	outFields->push(HX_("selected",5b,2a,6d,b1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleScreen_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TitleScreen_obj,sound),HX_("sound",cf,8c,cc,80)},
	{::hx::fsInt,(int)offsetof(TitleScreen_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsFloat,(int)offsetof(TitleScreen_obj,scroll),HX_("scroll",0d,d8,64,47)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleScreen_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(TitleScreen_obj,title),HX_("title",98,15,3b,10)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(TitleScreen_obj,titleShadow),HX_("titleShadow",98,93,ac,b3)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(TitleScreen_obj,titleOuterShadow),HX_("titleOuterShadow",03,bc,86,94)},
	{::hx::fsInt,(int)offsetof(TitleScreen_obj,titleSize),HX_("titleSize",79,8e,fe,6f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TitleScreen_obj,titleArray),HX_("titleArray",e1,80,74,37)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleScreen_obj,buttonArray),HX_("buttonArray",47,2e,3a,73)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(TitleScreen_obj,anotherButtonArray),HX_("anotherButtonArray",44,f0,8e,56)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(TitleScreen_obj,camFollowPos),HX_("camFollowPos",94,32,de,8d)},
	{::hx::fsBool,(int)offsetof(TitleScreen_obj,enableCamScroll),HX_("enableCamScroll",79,7e,16,54)},
	{::hx::fsBool,(int)offsetof(TitleScreen_obj,canClick),HX_("canClick",18,be,f1,b6)},
	{::hx::fsBool,(int)offsetof(TitleScreen_obj,isUsingMouse),HX_("isUsingMouse",cb,a2,d8,98)},
	{::hx::fsBool,(int)offsetof(TitleScreen_obj,selected),HX_("selected",5b,2a,6d,b1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleScreen_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &TitleScreen_obj::state,HX_("state",11,76,0b,84)},
	{::hx::fsString,(void *) &TitleScreen_obj::gameName,HX_("gameName",5d,73,25,b5)},
	{::hx::fsBool,(void *) &TitleScreen_obj::moved,HX_("moved",33,cc,65,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleScreen_obj_sMemberFields[] = {
	HX_("sound",cf,8c,cc,80),
	HX_("curSelected",fb,eb,ab,32),
	HX_("scroll",0d,d8,64,47),
	HX_("bg",c5,55,00,00),
	HX_("title",98,15,3b,10),
	HX_("titleShadow",98,93,ac,b3),
	HX_("titleOuterShadow",03,bc,86,94),
	HX_("titleSize",79,8e,fe,6f),
	HX_("titleArray",e1,80,74,37),
	HX_("buttonArray",47,2e,3a,73),
	HX_("anotherButtonArray",44,f0,8e,56),
	HX_("camFollowPos",94,32,de,8d),
	HX_("enableCamScroll",79,7e,16,54),
	HX_("create",fc,66,0f,7c),
	HX_("canClick",18,be,f1,b6),
	HX_("isUsingMouse",cb,a2,d8,98),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("stepHit",67,ae,41,81),
	HX_("selected",5b,2a,6d,b1),
	HX_("selectButton",0e,56,18,be),
	HX_("goToState",4e,a5,e1,c9),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

static void TitleScreen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleScreen_obj::state,"state");
	HX_MARK_MEMBER_NAME(TitleScreen_obj::gameName,"gameName");
	HX_MARK_MEMBER_NAME(TitleScreen_obj::moved,"moved");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleScreen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleScreen_obj::state,"state");
	HX_VISIT_MEMBER_NAME(TitleScreen_obj::gameName,"gameName");
	HX_VISIT_MEMBER_NAME(TitleScreen_obj::moved,"moved");
};

#endif

::hx::Class TitleScreen_obj::__mClass;

static ::String TitleScreen_obj_sStaticFields[] = {
	HX_("state",11,76,0b,84),
	HX_("gameName",5d,73,25,b5),
	HX_("moved",33,cc,65,0c),
	::String(null())
};

void TitleScreen_obj::__register()
{
	TitleScreen_obj _hx_dummy;
	TitleScreen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.TitleScreen",d8,05,ff,4a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleScreen_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleScreen_obj::__SetStatic;
	__mClass->mMarkFunc = TitleScreen_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleScreen_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleScreen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleScreen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleScreen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleScreen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TitleScreen_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_259e471d1dda8a5f_21_boot)
HXDLIN(  21)		state = HX_("started",41,29,1b,35);
            	}
{
            	HX_STACKFRAME(&_hx_pos_259e471d1dda8a5f_22_boot)
HXDLIN(  22)		gameName = HX_("Basic Platformer",52,3e,ea,fc);
            	}
{
            	HX_STACKFRAME(&_hx_pos_259e471d1dda8a5f_26_boot)
HXDLIN(  26)		moved = false;
            	}
}

} // end namespace states
