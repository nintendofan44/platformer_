#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#include <flixel/addons/editors/tiled/TiledTile.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b9e43ba1cece35d_7_new,"flixel.addons.editors.tiled.TiledTile","new",0xadac562d,"flixel.addons.editors.tiled.TiledTile.new","flixel/addons/editors/tiled/TiledTile.hx",7,0x237a79c5)
HX_LOCAL_STACK_FRAME(_hx_pos_2b9e43ba1cece35d_51_resolveFlipAndRotation,"flixel.addons.editors.tiled.TiledTile","resolveFlipAndRotation",0x184e8a4f,"flixel.addons.editors.tiled.TiledTile.resolveFlipAndRotation","flixel/addons/editors/tiled/TiledTile.hx",51,0x237a79c5)
HX_LOCAL_STACK_FRAME(_hx_pos_2b9e43ba1cece35d_85_resolveTilesetID,"flixel.addons.editors.tiled.TiledTile","resolveTilesetID",0x0ea8a396,"flixel.addons.editors.tiled.TiledTile.resolveTilesetID","flixel/addons/editors/tiled/TiledTile.hx",85,0x237a79c5)
HX_LOCAL_STACK_FRAME(_hx_pos_2b9e43ba1cece35d_9_boot,"flixel.addons.editors.tiled.TiledTile","boot",0x413811c5,"flixel.addons.editors.tiled.TiledTile.boot","flixel/addons/editors/tiled/TiledTile.hx",9,0x237a79c5)
HX_LOCAL_STACK_FRAME(_hx_pos_2b9e43ba1cece35d_10_boot,"flixel.addons.editors.tiled.TiledTile","boot",0x413811c5,"flixel.addons.editors.tiled.TiledTile.boot","flixel/addons/editors/tiled/TiledTile.hx",10,0x237a79c5)
HX_LOCAL_STACK_FRAME(_hx_pos_2b9e43ba1cece35d_11_boot,"flixel.addons.editors.tiled.TiledTile","boot",0x413811c5,"flixel.addons.editors.tiled.TiledTile.boot","flixel/addons/editors/tiled/TiledTile.hx",11,0x237a79c5)
HX_LOCAL_STACK_FRAME(_hx_pos_2b9e43ba1cece35d_13_boot,"flixel.addons.editors.tiled.TiledTile","boot",0x413811c5,"flixel.addons.editors.tiled.TiledTile.boot","flixel/addons/editors/tiled/TiledTile.hx",13,0x237a79c5)
HX_LOCAL_STACK_FRAME(_hx_pos_2b9e43ba1cece35d_14_boot,"flixel.addons.editors.tiled.TiledTile","boot",0x413811c5,"flixel.addons.editors.tiled.TiledTile.boot","flixel/addons/editors/tiled/TiledTile.hx",14,0x237a79c5)
HX_LOCAL_STACK_FRAME(_hx_pos_2b9e43ba1cece35d_15_boot,"flixel.addons.editors.tiled.TiledTile","boot",0x413811c5,"flixel.addons.editors.tiled.TiledTile.boot","flixel/addons/editors/tiled/TiledTile.hx",15,0x237a79c5)
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

void TiledTile_obj::__construct(int OriginalId){
            	HX_STACKFRAME(&_hx_pos_2b9e43ba1cece35d_7_new)
HXLINE(  35)		this->isFlipVertically = false;
HXLINE(  30)		this->isFlipHorizontally = false;
HXLINE(  44)		this->tileID = OriginalId;
HXLINE(  45)		this->tilesetID = (this->tileID & 536870911);
HXLINE(  46)		this->rotate = 0;
HXLINE(  47)		this->resolveFlipAndRotation();
            	}

Dynamic TiledTile_obj::__CreateEmpty() { return new TiledTile_obj; }

void *TiledTile_obj::_hx_vtable = 0;

Dynamic TiledTile_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TiledTile_obj > _hx_result = new TiledTile_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TiledTile_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d666665;
}

void TiledTile_obj::resolveFlipAndRotation(){
            	HX_STACKFRAME(&_hx_pos_2b9e43ba1cece35d_51_resolveFlipAndRotation)
HXLINE(  52)		bool flipHorizontal = ((this->tileID & (int)-2147483648) != 0);
HXLINE(  53)		bool flipVertical = ((this->tileID & (int)1073741824) != 0);
HXLINE(  55)		if (((this->tileID & 536870912) != 0)) {
HXLINE(  57)			bool _hx_tmp;
HXDLIN(  57)			if (flipHorizontal) {
HXLINE(  57)				_hx_tmp = flipVertical;
            			}
            			else {
HXLINE(  57)				_hx_tmp = false;
            			}
HXDLIN(  57)			if (_hx_tmp) {
HXLINE(  59)				this->isFlipHorizontally = true;
HXLINE(  60)				this->rotate = 2;
            			}
            			else {
HXLINE(  62)				if (flipHorizontal) {
HXLINE(  64)					this->rotate = 1;
            				}
            				else {
HXLINE(  66)					if (flipVertical) {
HXLINE(  68)						this->rotate = 2;
            					}
            					else {
HXLINE(  72)						this->isFlipVertically = true;
HXLINE(  73)						this->rotate = 2;
            					}
            				}
            			}
            		}
            		else {
HXLINE(  78)			this->isFlipHorizontally = flipHorizontal;
HXLINE(  79)			this->isFlipVertically = flipVertical;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TiledTile_obj,resolveFlipAndRotation,(void))

int TiledTile_obj::resolveTilesetID(){
            	HX_STACKFRAME(&_hx_pos_2b9e43ba1cece35d_85_resolveTilesetID)
HXDLIN(  85)		return (this->tileID & 536870911);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TiledTile_obj,resolveTilesetID,return )

int TiledTile_obj::FLIPPED_HORIZONTAL;

int TiledTile_obj::FLIPPED_VERTICAL;

int TiledTile_obj::FLIPPED_DIAGONAL;

int TiledTile_obj::ROTATE_0;

int TiledTile_obj::ROTATE_90;

int TiledTile_obj::ROTATE_270;


TiledTile_obj::TiledTile_obj()
{
}

::hx::Val TiledTile_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { return ::hx::Val( tileID ); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return ::hx::Val( rotate ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesetID") ) { return ::hx::Val( tilesetID ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isFlipVertically") ) { return ::hx::Val( isFlipVertically ); }
		if (HX_FIELD_EQ(inName,"resolveTilesetID") ) { return ::hx::Val( resolveTilesetID_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isFlipHorizontally") ) { return ::hx::Val( isFlipHorizontally ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"resolveFlipAndRotation") ) { return ::hx::Val( resolveFlipAndRotation_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TiledTile_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotate") ) { rotate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesetID") ) { tilesetID=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isFlipVertically") ) { isFlipVertically=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isFlipHorizontally") ) { isFlipHorizontally=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tileID",89,b2,28,1e));
	outFields->push(HX_("tilesetID",0f,76,5d,72));
	outFields->push(HX_("isFlipHorizontally",c8,b6,9f,e1));
	outFields->push(HX_("isFlipVertically",1a,eb,3d,00));
	outFields->push(HX_("rotate",5b,46,20,cb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TiledTile_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TiledTile_obj,tileID),HX_("tileID",89,b2,28,1e)},
	{::hx::fsInt,(int)offsetof(TiledTile_obj,tilesetID),HX_("tilesetID",0f,76,5d,72)},
	{::hx::fsBool,(int)offsetof(TiledTile_obj,isFlipHorizontally),HX_("isFlipHorizontally",c8,b6,9f,e1)},
	{::hx::fsBool,(int)offsetof(TiledTile_obj,isFlipVertically),HX_("isFlipVertically",1a,eb,3d,00)},
	{::hx::fsInt,(int)offsetof(TiledTile_obj,rotate),HX_("rotate",5b,46,20,cb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TiledTile_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &TiledTile_obj::FLIPPED_HORIZONTAL,HX_("FLIPPED_HORIZONTAL",21,8d,4f,37)},
	{::hx::fsInt,(void *) &TiledTile_obj::FLIPPED_VERTICAL,HX_("FLIPPED_VERTICAL",73,ef,30,68)},
	{::hx::fsInt,(void *) &TiledTile_obj::FLIPPED_DIAGONAL,HX_("FLIPPED_DIAGONAL",f2,b7,b3,c4)},
	{::hx::fsInt,(void *) &TiledTile_obj::ROTATE_0,HX_("ROTATE_0",0c,d2,08,62)},
	{::hx::fsInt,(void *) &TiledTile_obj::ROTATE_90,HX_("ROTATE_90",7b,00,af,65)},
	{::hx::fsInt,(void *) &TiledTile_obj::ROTATE_270,HX_("ROTATE_270",a7,21,6c,93)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TiledTile_obj_sMemberFields[] = {
	HX_("tileID",89,b2,28,1e),
	HX_("tilesetID",0f,76,5d,72),
	HX_("isFlipHorizontally",c8,b6,9f,e1),
	HX_("isFlipVertically",1a,eb,3d,00),
	HX_("rotate",5b,46,20,cb),
	HX_("resolveFlipAndRotation",fc,1b,88,c6),
	HX_("resolveTilesetID",83,85,e4,41),
	::String(null()) };

static void TiledTile_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTile_obj::FLIPPED_HORIZONTAL,"FLIPPED_HORIZONTAL");
	HX_MARK_MEMBER_NAME(TiledTile_obj::FLIPPED_VERTICAL,"FLIPPED_VERTICAL");
	HX_MARK_MEMBER_NAME(TiledTile_obj::FLIPPED_DIAGONAL,"FLIPPED_DIAGONAL");
	HX_MARK_MEMBER_NAME(TiledTile_obj::ROTATE_0,"ROTATE_0");
	HX_MARK_MEMBER_NAME(TiledTile_obj::ROTATE_90,"ROTATE_90");
	HX_MARK_MEMBER_NAME(TiledTile_obj::ROTATE_270,"ROTATE_270");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TiledTile_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTile_obj::FLIPPED_HORIZONTAL,"FLIPPED_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::FLIPPED_VERTICAL,"FLIPPED_VERTICAL");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::FLIPPED_DIAGONAL,"FLIPPED_DIAGONAL");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::ROTATE_0,"ROTATE_0");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::ROTATE_90,"ROTATE_90");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::ROTATE_270,"ROTATE_270");
};

#endif

::hx::Class TiledTile_obj::__mClass;

static ::String TiledTile_obj_sStaticFields[] = {
	HX_("FLIPPED_HORIZONTAL",21,8d,4f,37),
	HX_("FLIPPED_VERTICAL",73,ef,30,68),
	HX_("FLIPPED_DIAGONAL",f2,b7,b3,c4),
	HX_("ROTATE_0",0c,d2,08,62),
	HX_("ROTATE_90",7b,00,af,65),
	HX_("ROTATE_270",a7,21,6c,93),
	::String(null())
};

void TiledTile_obj::__register()
{
	TiledTile_obj _hx_dummy;
	TiledTile_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.editors.tiled.TiledTile",bb,bb,88,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TiledTile_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TiledTile_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TiledTile_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TiledTile_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TiledTile_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TiledTile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TiledTile_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TiledTile_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2b9e43ba1cece35d_9_boot)
HXDLIN(   9)		FLIPPED_HORIZONTAL = (int)-2147483648;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2b9e43ba1cece35d_10_boot)
HXDLIN(  10)		FLIPPED_VERTICAL = (int)1073741824;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2b9e43ba1cece35d_11_boot)
HXDLIN(  11)		FLIPPED_DIAGONAL = 536870912;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2b9e43ba1cece35d_13_boot)
HXDLIN(  13)		ROTATE_0 = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2b9e43ba1cece35d_14_boot)
HXDLIN(  14)		ROTATE_90 = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2b9e43ba1cece35d_15_boot)
HXDLIN(  15)		ROTATE_270 = 2;
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
