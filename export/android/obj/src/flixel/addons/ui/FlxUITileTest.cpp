#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITileTest
#include <flixel/addons/ui/FlxUITileTest.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUITileTest_obj::__construct(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUITileTest","new",0xc2e05f87,"flixel.addons.ui.FlxUITileTest.new","flixel/addons/ui/FlxUITileTest.hx",12,0xbeb161aa)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(TileWidth,"TileWidth")
HX_STACK_ARG(TileHeight,"TileHeight")
HX_STACK_ARG(tilesWide,"tilesWide")
HX_STACK_ARG(tilesTall,"tilesTall")
HX_STACK_ARG(__o_color1,"color1")
HX_STACK_ARG(__o_color2,"color2")
int color1 = __o_color1.Default(-8355712);
int color2 = __o_color2.Default(-3881788);
{
	HX_STACK_LINE(27)
	this->floorToEven = true;
	HX_STACK_LINE(25)
	this->_color2 = (int)0;
	HX_STACK_LINE(24)
	this->_color1 = (int)0;
	HX_STACK_LINE(23)
	this->_tilesTall = (int)2;
	HX_STACK_LINE(22)
	this->_tilesWide = (int)2;
	HX_STACK_LINE(31)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(33)
	this->tileWidth = TileWidth;
	HX_STACK_LINE(34)
	this->tileHeight = TileHeight;
	HX_STACK_LINE(36)
	this->_tilesWide = tilesWide;
	HX_STACK_LINE(37)
	this->_tilesTall = tilesTall;
	HX_STACK_LINE(38)
	this->_color1 = color1;
	HX_STACK_LINE(39)
	this->_color2 = color2;
	HX_STACK_LINE(41)
	int tmp2 = this->tileWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	int tmp3 = this->tileHeight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	int tmp4 = this->_tilesWide;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	int tmp5 = this->_tilesTall;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	int tmp6 = this->_color1;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	int tmp7 = this->_color2;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	this->makeTiles(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);
}
;
	return null();
}

//FlxUITileTest_obj::~FlxUITileTest_obj() { }

Dynamic FlxUITileTest_obj::__CreateEmpty() { return  new FlxUITileTest_obj; }
hx::ObjectPtr< FlxUITileTest_obj > FlxUITileTest_obj::__new(Float X,Float Y,int TileWidth,int TileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2)
{  hx::ObjectPtr< FlxUITileTest_obj > _result_ = new FlxUITileTest_obj();
	_result_->__construct(X,Y,TileWidth,TileHeight,tilesWide,tilesTall,__o_color1,__o_color2);
	return _result_;}

Dynamic FlxUITileTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUITileTest_obj > _result_ = new FlxUITileTest_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

hx::Object *FlxUITileTest_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

FlxUITileTest_obj::operator ::flixel::interfaces::IFlxSprite_obj *()
	{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUITileTest_obj >(this); }
FlxUITileTest_obj::operator ::flixel::interfaces::IFlxBasic_obj *()
	{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUITileTest_obj >(this); }
FlxUITileTest_obj::operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
	{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUITileTest_obj >(this); }
FlxUITileTest_obj::operator ::flixel::addons::ui::interfaces::IResizable_obj *()
	{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUITileTest_obj >(this); }
int FlxUITileTest_obj::get_widthInTiles( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITileTest","get_widthInTiles",0xe8fe62fc,"flixel.addons.ui.FlxUITileTest.get_widthInTiles","flixel/addons/ui/FlxUITileTest.hx",19,0xbeb161aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	int tmp = this->_tilesWide;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITileTest_obj,get_widthInTiles,return )

int FlxUITileTest_obj::get_heightInTiles( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITileTest","get_heightInTiles",0x7da8fef7,"flixel.addons.ui.FlxUITileTest.get_heightInTiles","flixel/addons/ui/FlxUITileTest.hx",20,0xbeb161aa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	int tmp = this->_tilesTall;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITileTest_obj,get_heightInTiles,return )

Void FlxUITileTest_obj::makeTiles( int tileWidth,int tileHeight,int tilesWide,int tilesTall,hx::Null< int >  __o_color1,hx::Null< int >  __o_color2){
int color1 = __o_color1.Default(-8355712);
int color2 = __o_color2.Default(-3881788);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITileTest","makeTiles",0xea745b1e,"flixel.addons.ui.FlxUITileTest.makeTiles","flixel/addons/ui/FlxUITileTest.hx",45,0xbeb161aa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileWidth,"tileWidth")
	HX_STACK_ARG(tileHeight,"tileHeight")
	HX_STACK_ARG(tilesWide,"tilesWide")
	HX_STACK_ARG(tilesTall,"tilesTall")
	HX_STACK_ARG(color1,"color1")
	HX_STACK_ARG(color2,"color2")
{
		HX_STACK_LINE(46)
		int tmp = (tileWidth * tilesWide);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		int tmp1 = (tileHeight * tilesTall);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		int tmp2 = color1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(46)
		this->makeGraphic(tmp,tmp1,tmp2,null(),null());
		HX_STACK_LINE(48)
		::openfl::_legacy::display::BitmapData tmp3 = ::openfl::_legacy::display::BitmapData_obj::__new(tileWidth,tileHeight,true,color2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		::openfl::_legacy::display::BitmapData brush = tmp3;		HX_STACK_VAR(brush,"brush");
		HX_STACK_LINE(49)
		::openfl::_legacy::display::BitmapData tmp4 = this->get_pixels();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		::openfl::_legacy::display::BitmapData canvas = tmp4;		HX_STACK_VAR(canvas,"canvas");
		HX_STACK_LINE(51)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(52)
		::openfl::_legacy::geom::Point tmp5 = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		::openfl::_legacy::geom::Point pt = tmp5;		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(53)
			while((true)){
				HX_STACK_LINE(53)
				bool tmp6 = (_g < tilesWide);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(53)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(53)
				if ((tmp7)){
					HX_STACK_LINE(53)
					break;
				}
				HX_STACK_LINE(53)
				int tmp8 = (_g)++;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				int ix = tmp8;		HX_STACK_VAR(ix,"ix");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(54)
					while((true)){
						HX_STACK_LINE(54)
						bool tmp9 = (_g1 < tilesTall);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(54)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(54)
						if ((tmp10)){
							HX_STACK_LINE(54)
							break;
						}
						HX_STACK_LINE(54)
						int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(54)
						int iy = tmp11;		HX_STACK_VAR(iy,"iy");
						HX_STACK_LINE(55)
						int tmp12 = hx::Mod(j,(int)2);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(55)
						bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(55)
						if ((tmp13)){
							HX_STACK_LINE(56)
							int tmp14 = (ix * tileWidth);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(56)
							pt->x = tmp14;
							HX_STACK_LINE(57)
							int tmp15 = (iy * tileHeight);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(57)
							pt->y = tmp15;
							HX_STACK_LINE(58)
							::openfl::_legacy::display::BitmapData tmp16 = brush;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(58)
							::openfl::_legacy::geom::Rectangle tmp17 = brush->get_rect();		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(58)
							::openfl::_legacy::geom::Point tmp18 = pt;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(58)
							canvas->copyPixels(tmp16,tmp17,tmp18,null(),null(),null());
						}
						HX_STACK_LINE(60)
						(j)++;
					}
				}
				HX_STACK_LINE(62)
				int tmp9 = hx::Mod(tilesWide,(int)2);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				bool tmp10 = (tmp9 != (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				if ((tmp10)){
					HX_STACK_LINE(63)
					(j)++;
				}
			}
		}
		HX_STACK_LINE(67)
		pt = null();
		HX_STACK_LINE(68)
		::openfl::_legacy::display::BitmapData tmp6 = canvas;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		this->set_pixels(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxUITileTest_obj,makeTiles,(void))

Void FlxUITileTest_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITileTest","resize",0x04b97d2d,"flixel.addons.ui.FlxUITileTest.resize","flixel/addons/ui/FlxUITileTest.hx",71,0xbeb161aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(72)
		Float tmp = w;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		int tmp1 = this->_tilesWide;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		this->tileWidth = tmp3;
		HX_STACK_LINE(73)
		Float tmp4 = h;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		int tmp5 = this->_tilesTall;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(73)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(73)
		this->tileHeight = tmp7;
		HX_STACK_LINE(75)
		int tmp8 = this->tileWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		int tmp9 = this->tileHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(75)
		bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(75)
		if ((tmp10)){
			HX_STACK_LINE(75)
			int tmp11 = this->tileWidth;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(75)
			this->tileHeight = tmp11;
		}
		else{
			HX_STACK_LINE(76)
			int tmp11 = this->tileHeight;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(76)
			int tmp12 = this->tileWidth;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(76)
			bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(76)
			if ((tmp13)){
				HX_STACK_LINE(76)
				int tmp14 = this->tileHeight;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(76)
				this->tileWidth = tmp14;
			}
		}
		HX_STACK_LINE(78)
		bool tmp11 = this->floorToEven;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(78)
		if ((tmp11)){
			HX_STACK_LINE(79)
			int tmp12 = this->tileWidth;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(79)
			int tmp13 = hx::Mod(tmp12,(int)2);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(79)
			bool tmp14 = (tmp13 == (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(79)
			if ((tmp14)){
				HX_STACK_LINE(80)
				hx::SubEq(this->tileWidth,(int)1);
				HX_STACK_LINE(81)
				int tmp15 = this->tileWidth;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(81)
				this->tileHeight = tmp15;
			}
		}
		HX_STACK_LINE(85)
		int tmp12 = this->tileWidth;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(85)
		int tmp13 = this->tileHeight;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(85)
		int tmp14 = this->_tilesWide;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(85)
		int tmp15 = this->_tilesTall;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(85)
		int tmp16 = this->_color1;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(85)
		int tmp17 = this->_color2;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(85)
		this->makeTiles(tmp12,tmp13,tmp14,tmp15,tmp16,tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITileTest_obj,resize,(void))


FlxUITileTest_obj::FlxUITileTest_obj()
{
}

Dynamic FlxUITileTest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_color1") ) { return _color1; }
		if (HX_FIELD_EQ(inName,"_color2") ) { return _color2; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"makeTiles") ) { return makeTiles_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"_tilesWide") ) { return _tilesWide; }
		if (HX_FIELD_EQ(inName,"_tilesTall") ) { return _tilesTall; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floorToEven") ) { return floorToEven; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return inCallProp == hx::paccAlways ? get_widthInTiles() : widthInTiles; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return inCallProp == hx::paccAlways ? get_heightInTiles() : heightInTiles; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_widthInTiles") ) { return get_widthInTiles_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_heightInTiles") ) { return get_heightInTiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUITileTest_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_color1") ) { _color1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color2") ) { _color2=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesWide") ) { _tilesWide=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tilesTall") ) { _tilesTall=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floorToEven") ) { floorToEven=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUITileTest_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxUITileTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4"));
	outFields->push(HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("_tilesWide","\xf9","\xb3","\xb6","\xc4"));
	outFields->push(HX_HCSTRING("_tilesTall","\x13","\x05","\xb5","\xc2"));
	outFields->push(HX_HCSTRING("_color1","\x0d","\xd7","\xfd","\x34"));
	outFields->push(HX_HCSTRING("_color2","\x0e","\xd7","\xfd","\x34"));
	outFields->push(HX_HCSTRING("floorToEven","\x21","\x81","\x8e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,widthInTiles),HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,heightInTiles),HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,tileWidth),HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,tileHeight),HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_tilesWide),HX_HCSTRING("_tilesWide","\xf9","\xb3","\xb6","\xc4")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_tilesTall),HX_HCSTRING("_tilesTall","\x13","\x05","\xb5","\xc2")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_color1),HX_HCSTRING("_color1","\x0d","\xd7","\xfd","\x34")},
	{hx::fsInt,(int)offsetof(FlxUITileTest_obj,_color2),HX_HCSTRING("_color2","\x0e","\xd7","\xfd","\x34")},
	{hx::fsBool,(int)offsetof(FlxUITileTest_obj,floorToEven),HX_HCSTRING("floorToEven","\x21","\x81","\x8e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("widthInTiles","\xfa","\xb1","\x71","\xd4"),
	HX_HCSTRING("heightInTiles","\x39","\xce","\x1a","\x97"),
	HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"),
	HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"),
	HX_HCSTRING("get_widthInTiles","\x83","\x9e","\x10","\xd9"),
	HX_HCSTRING("get_heightInTiles","\x90","\xd9","\x8a","\x9d"),
	HX_HCSTRING("_tilesWide","\xf9","\xb3","\xb6","\xc4"),
	HX_HCSTRING("_tilesTall","\x13","\x05","\xb5","\xc2"),
	HX_HCSTRING("_color1","\x0d","\xd7","\xfd","\x34"),
	HX_HCSTRING("_color2","\x0e","\xd7","\xfd","\x34"),
	HX_HCSTRING("floorToEven","\x21","\x81","\x8e","\xed"),
	HX_HCSTRING("makeTiles","\xb7","\x74","\xcd","\xe3"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUITileTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUITileTest_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUITileTest_obj::__mClass;

void FlxUITileTest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUITileTest","\x15","\x90","\x32","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxUITileTest_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUITileTest_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
