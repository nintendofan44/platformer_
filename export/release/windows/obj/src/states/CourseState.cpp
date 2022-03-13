#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_helpers_AssetPaths
#include <helpers/AssetPaths.h>
#endif
#ifndef INCLUDED_objects_Player
#include <objects/Player.h>
#endif
#ifndef INCLUDED_states_CourseState
#include <states/CourseState.h>
#endif
#ifndef INCLUDED_states_MusicBeatState
#include <states/MusicBeatState.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5070eea04b42c1e9_15_new,"states.CourseState","new",0x2f63cfdc,"states.CourseState.new","states/CourseState.hx",15,0xe8ff7ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_5070eea04b42c1e9_25_createCourse,"states.CourseState","createCourse",0x375b69fb,"states.CourseState.createCourse","states/CourseState.hx",25,0xe8ff7ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_5070eea04b42c1e9_44_generateDoors,"states.CourseState","generateDoors",0xb4a2d24c,"states.CourseState.generateDoors","states/CourseState.hx",44,0xe8ff7ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_5070eea04b42c1e9_57_generateBrickBlocks,"states.CourseState","generateBrickBlocks",0x5143eb2e,"states.CourseState.generateBrickBlocks","states/CourseState.hx",57,0xe8ff7ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_5070eea04b42c1e9_70_generateWoodBlocks,"states.CourseState","generateWoodBlocks",0x75d1e52c,"states.CourseState.generateWoodBlocks","states/CourseState.hx",70,0xe8ff7ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_5070eea04b42c1e9_83_generatePlatforms,"states.CourseState","generatePlatforms",0x21abbce7,"states.CourseState.generatePlatforms","states/CourseState.hx",83,0xe8ff7ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_5070eea04b42c1e9_96_generateFloor,"states.CourseState","generateFloor",0xd97454d3,"states.CourseState.generateFloor","states/CourseState.hx",96,0xe8ff7ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_5070eea04b42c1e9_119_create,"states.CourseState","create",0xbfbf3d00,"states.CourseState.create","states/CourseState.hx",119,0xe8ff7ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_5070eea04b42c1e9_125_update,"states.CourseState","update",0xcab55c0d,"states.CourseState.update","states/CourseState.hx",125,0xe8ff7ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_5070eea04b42c1e9_138_beatHit,"states.CourseState","beatHit",0x6a3057f9,"states.CourseState.beatHit","states/CourseState.hx",138,0xe8ff7ed5)
HX_LOCAL_STACK_FRAME(_hx_pos_5070eea04b42c1e9_142_stepHit,"states.CourseState","stepHit",0x776d1be3,"states.CourseState.stepHit","states/CourseState.hx",142,0xe8ff7ed5)
namespace states{

void CourseState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_5070eea04b42c1e9_15_new)
HXDLIN(  15)		super::__construct(TransIn,TransOut);
            	}

Dynamic CourseState_obj::__CreateEmpty() { return new CourseState_obj; }

void *CourseState_obj::_hx_vtable = 0;

Dynamic CourseState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CourseState_obj > _hx_result = new CourseState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CourseState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5bfc754c) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3369ae9c || inClassId==(int)0x5bfc754c;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void CourseState_obj::createCourse(::String levelName, ::Dynamic playerSpawn){
            	HX_GC_STACKFRAME(&_hx_pos_5070eea04b42c1e9_25_createCourse)
HXLINE(  26)		 ::flixel::addons::editors::tiled::TiledMap map =  ::flixel::addons::editors::tiled::TiledMap_obj::__alloc( HX_CTX ,::helpers::AssetPaths_obj::getPath(((HX_("data/",c5,0e,88,d4) + (HX_("",00,00,00,00) + levelName)) + HX_(".tmx",71,35,c0,1e)),HX_("TEXT",ad,94,ba,37),HX_("levels",6f,be,4f,a4)),null());
HXLINE(  28)		this->generateFloor(map);
HXLINE(  29)		this->generateWoodBlocks(map);
HXLINE(  30)		this->generateBrickBlocks(map);
HXLINE(  31)		this->generateDoors(map);
HXLINE(  32)		this->generatePlatforms(map);
HXLINE(  34)		Float playerSpawn1 = ( (Float)(playerSpawn->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN(  34)		Float playerSpawn2 = ( (Float)(playerSpawn->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN(  34)		this->player =  ::objects::Player_obj::__alloc( HX_CTX ,playerSpawn1,playerSpawn2,::flixel::FlxG_obj::random->_hx_int(1,3,null()));
HXLINE(  35)		this->add(this->player);
HXLINE(  37)		this->levelBounds = ::flixel::util::FlxCollision_obj::createCameraWall(::flixel::FlxG_obj::camera,true,1,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(CourseState_obj,createCourse,(void))

void CourseState_obj::generateDoors( ::flixel::addons::editors::tiled::TiledMap map){
            	HX_GC_STACKFRAME(&_hx_pos_5070eea04b42c1e9_44_generateDoors)
HXLINE(  45)		 ::flixel::addons::editors::tiled::TiledObjectLayer doorLayer = ( ( ::flixel::addons::editors::tiled::TiledObjectLayer)(map->getLayer(HX_("Door",8e,1d,47,2d))) );
HXLINE(  46)		this->doorGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  48)		{
HXLINE(  48)			int _g = 0;
HXDLIN(  48)			::Array< ::Dynamic> _g1 = doorLayer->objects;
HXDLIN(  48)			while((_g < _g1->length)){
HXLINE(  48)				 ::flixel::addons::editors::tiled::TiledObject door = _g1->__get(_g).StaticCast<  ::flixel::addons::editors::tiled::TiledObject >();
HXDLIN(  48)				_g = (_g + 1);
HXLINE(  49)				 ::flixel::FlxSprite doorFromSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,door->x,door->y,null());
HXLINE(  50)				doorFromSprite->loadGraphic(::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("building/door",29,ee,0d,f6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("textures",38,f7,ce,65)),false,16,32,null(),null());
HXLINE(  51)				doorFromSprite->set_immovable(true);
HXLINE(  52)				this->doorGroup->add(doorFromSprite).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  54)		this->add(this->doorGroup);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CourseState_obj,generateDoors,(void))

void CourseState_obj::generateBrickBlocks( ::flixel::addons::editors::tiled::TiledMap map){
            	HX_GC_STACKFRAME(&_hx_pos_5070eea04b42c1e9_57_generateBrickBlocks)
HXLINE(  58)		 ::flixel::addons::editors::tiled::TiledObjectLayer brickLayer = ( ( ::flixel::addons::editors::tiled::TiledObjectLayer)(map->getLayer(HX_("Bricks",f2,d5,ee,4c))) );
HXLINE(  59)		this->brickGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  61)		{
HXLINE(  61)			int _g = 0;
HXDLIN(  61)			::Array< ::Dynamic> _g1 = brickLayer->objects;
HXDLIN(  61)			while((_g < _g1->length)){
HXLINE(  61)				 ::flixel::addons::editors::tiled::TiledObject brick = _g1->__get(_g).StaticCast<  ::flixel::addons::editors::tiled::TiledObject >();
HXDLIN(  61)				_g = (_g + 1);
HXLINE(  62)				 ::flixel::FlxSprite brickFromSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,brick->x,brick->y,null());
HXLINE(  63)				brickFromSprite->loadGraphic(::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("building/bricks",4d,43,7f,f1)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("textures",38,f7,ce,65)),false,16,16,null(),null());
HXLINE(  64)				brickFromSprite->set_immovable(true);
HXLINE(  65)				this->brickGroup->add(brickFromSprite).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  67)		this->add(this->brickGroup);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CourseState_obj,generateBrickBlocks,(void))

void CourseState_obj::generateWoodBlocks( ::flixel::addons::editors::tiled::TiledMap map){
            	HX_GC_STACKFRAME(&_hx_pos_5070eea04b42c1e9_70_generateWoodBlocks)
HXLINE(  71)		 ::flixel::addons::editors::tiled::TiledObjectLayer woodLayer = ( ( ::flixel::addons::editors::tiled::TiledObjectLayer)(map->getLayer(HX_("Wood",4d,2b,d6,39))) );
HXLINE(  72)		this->woodGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  74)		{
HXLINE(  74)			int _g = 0;
HXDLIN(  74)			::Array< ::Dynamic> _g1 = woodLayer->objects;
HXDLIN(  74)			while((_g < _g1->length)){
HXLINE(  74)				 ::flixel::addons::editors::tiled::TiledObject wood = _g1->__get(_g).StaticCast<  ::flixel::addons::editors::tiled::TiledObject >();
HXDLIN(  74)				_g = (_g + 1);
HXLINE(  75)				 ::flixel::FlxSprite woodFromSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,wood->x,wood->y,null());
HXLINE(  76)				woodFromSprite->loadGraphic(::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("building/wood planks",09,41,df,7e)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("textures",38,f7,ce,65)),false,16,16,null(),null());
HXLINE(  77)				woodFromSprite->set_immovable(true);
HXLINE(  78)				this->woodGroup->add(woodFromSprite).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  80)		this->add(this->woodGroup);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CourseState_obj,generateWoodBlocks,(void))

void CourseState_obj::generatePlatforms( ::flixel::addons::editors::tiled::TiledMap map){
            	HX_GC_STACKFRAME(&_hx_pos_5070eea04b42c1e9_83_generatePlatforms)
HXLINE(  84)		 ::flixel::addons::editors::tiled::TiledObjectLayer platformLayer = ( ( ::flixel::addons::editors::tiled::TiledObjectLayer)(map->getLayer(HX_("Platforms",40,8a,55,34))) );
HXLINE(  85)		this->platformGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  87)		{
HXLINE(  87)			int _g = 0;
HXDLIN(  87)			::Array< ::Dynamic> _g1 = platformLayer->objects;
HXDLIN(  87)			while((_g < _g1->length)){
HXLINE(  87)				 ::flixel::addons::editors::tiled::TiledObject platform = _g1->__get(_g).StaticCast<  ::flixel::addons::editors::tiled::TiledObject >();
HXDLIN(  87)				_g = (_g + 1);
HXLINE(  88)				 ::flixel::FlxSprite platformFromSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,platform->x,platform->y,null());
HXLINE(  89)				platformFromSprite->loadGraphic(::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("building/wood platform",eb,19,0f,d7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("textures",38,f7,ce,65)),false,128,16,null(),null());
HXLINE(  90)				platformFromSprite->set_immovable(true);
HXLINE(  91)				this->platformGroup->add(platformFromSprite).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  93)		this->add(this->platformGroup);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CourseState_obj,generatePlatforms,(void))

void CourseState_obj::generateFloor( ::flixel::addons::editors::tiled::TiledMap map){
            	HX_GC_STACKFRAME(&_hx_pos_5070eea04b42c1e9_96_generateFloor)
HXLINE(  97)		 ::flixel::addons::editors::tiled::TiledObjectLayer groundLayer = ( ( ::flixel::addons::editors::tiled::TiledObjectLayer)(map->getLayer(HX_("Grass",d6,81,17,2d))) );
HXLINE(  98)		 ::flixel::addons::editors::tiled::TiledObjectLayer dirtLayer = ( ( ::flixel::addons::editors::tiled::TiledObjectLayer)(map->getLayer(HX_("Dirt",a7,92,42,2d))) );
HXLINE(  99)		this->groundGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 100)		this->dirtGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 102)		{
HXLINE( 102)			int _g = 0;
HXDLIN( 102)			::Array< ::Dynamic> _g1 = groundLayer->objects;
HXDLIN( 102)			while((_g < _g1->length)){
HXLINE( 102)				 ::flixel::addons::editors::tiled::TiledObject grass = _g1->__get(_g).StaticCast<  ::flixel::addons::editors::tiled::TiledObject >();
HXDLIN( 102)				_g = (_g + 1);
HXLINE( 103)				 ::flixel::FlxSprite grassFromSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,grass->x,grass->y,null());
HXLINE( 104)				grassFromSprite->loadGraphic(::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("terrain/ground",e1,54,47,19)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("textures",38,f7,ce,65)),false,128,16,null(),null());
HXLINE( 105)				grassFromSprite->set_immovable(true);
HXLINE( 106)				this->groundGroup->add(grassFromSprite).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE( 109)		{
HXLINE( 109)			int _g2 = 0;
HXDLIN( 109)			::Array< ::Dynamic> _g3 = dirtLayer->objects;
HXDLIN( 109)			while((_g2 < _g3->length)){
HXLINE( 109)				 ::flixel::addons::editors::tiled::TiledObject dirt = _g3->__get(_g2).StaticCast<  ::flixel::addons::editors::tiled::TiledObject >();
HXDLIN( 109)				_g2 = (_g2 + 1);
HXLINE( 110)				 ::flixel::FlxSprite dirtFromSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,dirt->x,dirt->y,null());
HXLINE( 111)				dirtFromSprite->loadGraphic(::helpers::AssetPaths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("terrain/dirt",61,6e,13,3b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),HX_("textures",38,f7,ce,65)),false,128,16,null(),null());
HXLINE( 112)				dirtFromSprite->set_immovable(true);
HXLINE( 113)				this->dirtGroup->add(dirtFromSprite).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE( 115)		this->add(this->dirtGroup);
HXLINE( 116)		this->add(this->groundGroup);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CourseState_obj,generateFloor,(void))

void CourseState_obj::create(){
            	HX_STACKFRAME(&_hx_pos_5070eea04b42c1e9_119_create)
HXLINE( 120)		this->super::create();
HXLINE( 122)		this->set_bgColor(-8355712);
            	}


void CourseState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5070eea04b42c1e9_125_update)
HXLINE( 126)		this->super::update(elapsed);
HXLINE( 128)		{
HXLINE( 128)			 ::Dynamic NotifyCallback = null();
HXDLIN( 128)			::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->player) ),( ( ::flixel::FlxBasic)(this->levelBounds) ),NotifyCallback,::flixel::FlxObject_obj::separate_dyn());
            		}
HXLINE( 129)		{
HXLINE( 129)			 ::Dynamic NotifyCallback1 = null();
HXDLIN( 129)			::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->player) ),( ( ::flixel::FlxBasic)(this->dirtGroup) ),NotifyCallback1,::flixel::FlxObject_obj::separate_dyn());
            		}
HXLINE( 130)		{
HXLINE( 130)			 ::Dynamic NotifyCallback2 = null();
HXDLIN( 130)			::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->player) ),( ( ::flixel::FlxBasic)(this->groundGroup) ),NotifyCallback2,::flixel::FlxObject_obj::separate_dyn());
            		}
HXLINE( 131)		{
HXLINE( 131)			 ::Dynamic NotifyCallback3 = null();
HXDLIN( 131)			::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->player) ),( ( ::flixel::FlxBasic)(this->woodGroup) ),NotifyCallback3,::flixel::FlxObject_obj::separate_dyn());
            		}
HXLINE( 132)		{
HXLINE( 132)			 ::Dynamic NotifyCallback4 = null();
HXDLIN( 132)			::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->player) ),( ( ::flixel::FlxBasic)(this->brickGroup) ),NotifyCallback4,::flixel::FlxObject_obj::separate_dyn());
            		}
HXLINE( 134)		{
HXLINE( 134)			 ::Dynamic NotifyCallback5 = null();
HXDLIN( 134)			::flixel::FlxG_obj::overlap(( ( ::flixel::FlxBasic)(this->player) ),( ( ::flixel::FlxBasic)(this->platformGroup) ),NotifyCallback5,::flixel::FlxObject_obj::separate_dyn());
            		}
            	}


void CourseState_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_5070eea04b42c1e9_138_beatHit)
HXDLIN( 138)		this->super::beatHit();
            	}


void CourseState_obj::stepHit(){
            	HX_STACKFRAME(&_hx_pos_5070eea04b42c1e9_142_stepHit)
HXDLIN( 142)		this->super::stepHit();
            	}



::hx::ObjectPtr< CourseState_obj > CourseState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< CourseState_obj > __this = new CourseState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< CourseState_obj > CourseState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	CourseState_obj *__this = (CourseState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CourseState_obj), true, "states.CourseState"));
	*(void **)__this = CourseState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

CourseState_obj::CourseState_obj()
{
}

void CourseState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CourseState);
	HX_MARK_MEMBER_NAME(levelBounds,"levelBounds");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(platformGroup,"platformGroup");
	HX_MARK_MEMBER_NAME(doorGroup,"doorGroup");
	HX_MARK_MEMBER_NAME(brickGroup,"brickGroup");
	HX_MARK_MEMBER_NAME(woodGroup,"woodGroup");
	HX_MARK_MEMBER_NAME(groundGroup,"groundGroup");
	HX_MARK_MEMBER_NAME(dirtGroup,"dirtGroup");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CourseState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(levelBounds,"levelBounds");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(platformGroup,"platformGroup");
	HX_VISIT_MEMBER_NAME(doorGroup,"doorGroup");
	HX_VISIT_MEMBER_NAME(brickGroup,"brickGroup");
	HX_VISIT_MEMBER_NAME(woodGroup,"woodGroup");
	HX_VISIT_MEMBER_NAME(groundGroup,"groundGroup");
	HX_VISIT_MEMBER_NAME(dirtGroup,"dirtGroup");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CourseState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return ::hx::Val( player ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		if (HX_FIELD_EQ(inName,"stepHit") ) { return ::hx::Val( stepHit_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"doorGroup") ) { return ::hx::Val( doorGroup ); }
		if (HX_FIELD_EQ(inName,"woodGroup") ) { return ::hx::Val( woodGroup ); }
		if (HX_FIELD_EQ(inName,"dirtGroup") ) { return ::hx::Val( dirtGroup ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"brickGroup") ) { return ::hx::Val( brickGroup ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"levelBounds") ) { return ::hx::Val( levelBounds ); }
		if (HX_FIELD_EQ(inName,"groundGroup") ) { return ::hx::Val( groundGroup ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCourse") ) { return ::hx::Val( createCourse_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformGroup") ) { return ::hx::Val( platformGroup ); }
		if (HX_FIELD_EQ(inName,"generateDoors") ) { return ::hx::Val( generateDoors_dyn() ); }
		if (HX_FIELD_EQ(inName,"generateFloor") ) { return ::hx::Val( generateFloor_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"generatePlatforms") ) { return ::hx::Val( generatePlatforms_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generateWoodBlocks") ) { return ::hx::Val( generateWoodBlocks_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"generateBrickBlocks") ) { return ::hx::Val( generateBrickBlocks_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CourseState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast<  ::objects::Player >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"doorGroup") ) { doorGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"woodGroup") ) { woodGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirtGroup") ) { dirtGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"brickGroup") ) { brickGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"levelBounds") ) { levelBounds=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"groundGroup") ) { groundGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformGroup") ) { platformGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CourseState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("levelBounds",19,0b,24,2d));
	outFields->push(HX_("player",61,eb,b8,37));
	outFields->push(HX_("platformGroup",8c,c7,a4,56));
	outFields->push(HX_("doorGroup",f1,42,cc,fc));
	outFields->push(HX_("brickGroup",fe,1f,d2,0b));
	outFields->push(HX_("woodGroup",d2,00,b8,0b));
	outFields->push(HX_("groundGroup",38,77,6c,1c));
	outFields->push(HX_("dirtGroup",38,b3,14,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CourseState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CourseState_obj,levelBounds),HX_("levelBounds",19,0b,24,2d)},
	{::hx::fsObject /*  ::objects::Player */ ,(int)offsetof(CourseState_obj,player),HX_("player",61,eb,b8,37)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CourseState_obj,platformGroup),HX_("platformGroup",8c,c7,a4,56)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CourseState_obj,doorGroup),HX_("doorGroup",f1,42,cc,fc)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CourseState_obj,brickGroup),HX_("brickGroup",fe,1f,d2,0b)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CourseState_obj,woodGroup),HX_("woodGroup",d2,00,b8,0b)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CourseState_obj,groundGroup),HX_("groundGroup",38,77,6c,1c)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CourseState_obj,dirtGroup),HX_("dirtGroup",38,b3,14,ef)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CourseState_obj_sStaticStorageInfo = 0;
#endif

static ::String CourseState_obj_sMemberFields[] = {
	HX_("levelBounds",19,0b,24,2d),
	HX_("player",61,eb,b8,37),
	HX_("platformGroup",8c,c7,a4,56),
	HX_("doorGroup",f1,42,cc,fc),
	HX_("brickGroup",fe,1f,d2,0b),
	HX_("woodGroup",d2,00,b8,0b),
	HX_("groundGroup",38,77,6c,1c),
	HX_("dirtGroup",38,b3,14,ef),
	HX_("createCourse",f7,38,d1,ee),
	HX_("generateDoors",d0,1f,42,84),
	HX_("generateBrickBlocks",b2,33,ec,87),
	HX_("generateWoodBlocks",28,19,b7,e7),
	HX_("generatePlatforms",6b,1c,5a,88),
	HX_("generateFloor",57,a2,13,a9),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("stepHit",67,ae,41,81),
	::String(null()) };

::hx::Class CourseState_obj::__mClass;

void CourseState_obj::__register()
{
	CourseState_obj _hx_dummy;
	CourseState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.CourseState",ea,f1,97,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CourseState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CourseState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CourseState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CourseState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
