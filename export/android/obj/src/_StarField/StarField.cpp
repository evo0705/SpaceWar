#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__StarField_ClsStar
#include <_StarField/ClsStar.h>
#endif
#ifndef INCLUDED__StarField_StarField
#include <_StarField/StarField.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace _StarField{

Void StarField_obj::__construct(int X,int Y,int Width,int Height,int StarAmount)
{
HX_STACK_FRAME("_StarField.StarField","new",0xf0689055,"_StarField.StarField.new","StarField.hx",106,0x0738ec56)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(StarAmount,"StarAmount")
{
	HX_STACK_LINE(108)
	this->bgColor = (int)-16777216;
	HX_STACK_LINE(117)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(118)
	bool tmp2 = (Width <= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(118)
	if ((tmp2)){
		HX_STACK_LINE(118)
		tmp3 = ::flixel::FlxG_obj::width;
	}
	else{
		HX_STACK_LINE(118)
		tmp3 = Width;
	}
	HX_STACK_LINE(118)
	Width = tmp3;
	HX_STACK_LINE(119)
	bool tmp4 = (Height <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(119)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(119)
	if ((tmp4)){
		HX_STACK_LINE(119)
		tmp5 = ::flixel::FlxG_obj::height;
	}
	else{
		HX_STACK_LINE(119)
		tmp5 = Height;
	}
	HX_STACK_LINE(119)
	Height = tmp5;
	HX_STACK_LINE(120)
	int tmp6 = Width;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(120)
	int tmp7 = Height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(120)
	int tmp8 = this->bgColor;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(120)
	this->makeGraphic(tmp6,tmp7,tmp8,true,null());
	HX_STACK_LINE(121)
	this->_stars = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(123)
	{
		HX_STACK_LINE(123)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(123)
		while((true)){
			HX_STACK_LINE(123)
			bool tmp9 = (_g < StarAmount);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(123)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(123)
			if ((tmp10)){
				HX_STACK_LINE(123)
				break;
			}
			HX_STACK_LINE(123)
			int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(123)
			int i = tmp11;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(125)
			::_StarField::ClsStar tmp12 = ::_StarField::ClsStar_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(125)
			::_StarField::ClsStar star = tmp12;		HX_STACK_VAR(star,"star");
			HX_STACK_LINE(126)
			star->index = i;
			HX_STACK_LINE(127)
			int tmp13 = Width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(127)
			int tmp14 = ::flixel::util::FlxRandom_obj::intRanged((int)0,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			star->x = tmp14;
			HX_STACK_LINE(128)
			int tmp15 = Height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(128)
			int tmp16 = ::flixel::util::FlxRandom_obj::intRanged((int)0,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(128)
			star->y = tmp16;
			HX_STACK_LINE(129)
			star->d = (int)1;
			HX_STACK_LINE(130)
			int tmp17 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(130)
			int tmp18 = (tmp17 * (int)48271);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(130)
			int tmp19 = hx::Mod(tmp18,(int)2147483647);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(130)
			int tmp20 = (int(tmp19) & int((int)2147483647));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(130)
			int tmp21 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(130)
			Float tmp22 = (Float(tmp21) / Float((int)2147483647));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(130)
			Float tmp23 = ::Math_obj::PI;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(130)
			Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(130)
			Float tmp25 = (tmp24 * (int)2);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(130)
			star->r = tmp25;
			HX_STACK_LINE(131)
			::_StarField::ClsStar tmp26 = star;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(131)
			this->_stars->push(tmp26);
		}
	}
}
;
	return null();
}

//StarField_obj::~StarField_obj() { }

Dynamic StarField_obj::__CreateEmpty() { return  new StarField_obj; }
hx::ObjectPtr< StarField_obj > StarField_obj::__new(int X,int Y,int Width,int Height,int StarAmount)
{  hx::ObjectPtr< StarField_obj > _result_ = new StarField_obj();
	_result_->__construct(X,Y,Width,Height,StarAmount);
	return _result_;}

Dynamic StarField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StarField_obj > _result_ = new StarField_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void StarField_obj::destroy( ){
{
		HX_STACK_FRAME("_StarField.StarField","destroy",0x48928b6f,"_StarField.StarField.destroy","StarField.hx",136,0x0738ec56)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			Array< ::Dynamic > _g1 = this->_stars;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(137)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(137)
				if ((tmp1)){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(137)
				::_StarField::ClsStar tmp2 = _g1->__get(_g).StaticCast< ::_StarField::ClsStar >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(137)
				::_StarField::ClsStar star = tmp2;		HX_STACK_VAR(star,"star");
				HX_STACK_LINE(137)
				++(_g);
				HX_STACK_LINE(139)
				star = null();
			}
		}
		HX_STACK_LINE(141)
		this->_stars = null();
		HX_STACK_LINE(142)
		this->_depthColors = null();
		HX_STACK_LINE(143)
		this->super::destroy();
	}
return null();
}


Void StarField_obj::draw( ){
{
		HX_STACK_FRAME("_StarField.StarField","draw",0x6483626f,"_StarField.StarField.draw","StarField.hx",147,0x0738ec56)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		::openfl::_legacy::display::BitmapData tmp = this->get_pixels();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		tmp->lock();
		HX_STACK_LINE(149)
		::openfl::_legacy::display::BitmapData tmp1 = this->get_pixels();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		::openfl::_legacy::geom::Rectangle tmp2 = this->_flashRect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		int tmp3 = this->bgColor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		tmp1->fillRect(tmp2,tmp3);
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			Array< ::Dynamic > _g1 = this->_stars;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(151)
			while((true)){
				HX_STACK_LINE(151)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(151)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(151)
				if ((tmp5)){
					HX_STACK_LINE(151)
					break;
				}
				HX_STACK_LINE(151)
				::_StarField::ClsStar tmp6 = _g1->__get(_g).StaticCast< ::_StarField::ClsStar >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(151)
				::_StarField::ClsStar star = tmp6;		HX_STACK_VAR(star,"star");
				HX_STACK_LINE(151)
				++(_g);
				HX_STACK_LINE(153)
				Float tmp7 = star->speed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(153)
				Float tmp8 = this->_minSpeed;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(153)
				Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(153)
				Float tmp10 = this->_maxSpeed;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(153)
				Float tmp11 = this->_minSpeed;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(153)
				Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(153)
				Float tmp13 = (Float(tmp9) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(153)
				int tmp14 = this->_depthColors->length;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(153)
				Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(153)
				int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(153)
				int colorIndex = tmp16;		HX_STACK_VAR(colorIndex,"colorIndex");
				HX_STACK_LINE(154)
				::openfl::_legacy::display::BitmapData tmp17 = this->get_pixels();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(154)
				Float tmp18 = star->x;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(154)
				int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(154)
				Float tmp20 = star->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(154)
				int tmp21 = ::Std_obj::_int(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(154)
				int tmp22 = this->_depthColors->__get(colorIndex);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(154)
				tmp17->setPixel32(tmp19,tmp21,tmp22);
				HX_STACK_LINE(155)
				::openfl::_legacy::display::BitmapData tmp23 = this->get_pixels();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(155)
				Float tmp24 = star->x;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(155)
				int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(155)
				Float tmp26 = (star->y + (int)1);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(155)
				int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(155)
				int tmp28 = this->_depthColors->__get(colorIndex);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(155)
				tmp23->setPixel32(tmp25,tmp27,tmp28);
				HX_STACK_LINE(156)
				::openfl::_legacy::display::BitmapData tmp29 = this->get_pixels();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(156)
				Float tmp30 = star->x;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(156)
				int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(156)
				Float tmp32 = (star->y + (int)2);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(156)
				int tmp33 = ::Std_obj::_int(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(156)
				int tmp34 = this->_depthColors->__get(colorIndex);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(156)
				tmp29->setPixel32(tmp31,tmp33,tmp34);
				HX_STACK_LINE(157)
				::openfl::_legacy::display::BitmapData tmp35 = this->get_pixels();		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(157)
				Float tmp36 = (star->x + (int)1);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(157)
				int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(157)
				Float tmp38 = star->y;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(157)
				int tmp39 = ::Std_obj::_int(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(157)
				int tmp40 = this->_depthColors->__get(colorIndex);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(157)
				tmp35->setPixel32(tmp37,tmp39,tmp40);
				HX_STACK_LINE(158)
				::openfl::_legacy::display::BitmapData tmp41 = this->get_pixels();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(158)
				Float tmp42 = (star->x + (int)1);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(158)
				int tmp43 = ::Std_obj::_int(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(158)
				Float tmp44 = (star->y + (int)1);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(158)
				int tmp45 = ::Std_obj::_int(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(158)
				int tmp46 = this->_depthColors->__get(colorIndex);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(158)
				tmp41->setPixel32(tmp43,tmp45,tmp46);
				HX_STACK_LINE(159)
				::openfl::_legacy::display::BitmapData tmp47 = this->get_pixels();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(159)
				Float tmp48 = (star->x + (int)1);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(159)
				int tmp49 = ::Std_obj::_int(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(159)
				Float tmp50 = (star->y + (int)2);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(159)
				int tmp51 = ::Std_obj::_int(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(159)
				int tmp52 = this->_depthColors->__get(colorIndex);		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(159)
				tmp47->setPixel32(tmp49,tmp51,tmp52);
				HX_STACK_LINE(160)
				::openfl::_legacy::display::BitmapData tmp53 = this->get_pixels();		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(160)
				Float tmp54 = (star->x + (int)2);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(160)
				int tmp55 = ::Std_obj::_int(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(160)
				Float tmp56 = star->y;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(160)
				int tmp57 = ::Std_obj::_int(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(160)
				int tmp58 = this->_depthColors->__get(colorIndex);		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(160)
				tmp53->setPixel32(tmp55,tmp57,tmp58);
				HX_STACK_LINE(161)
				::openfl::_legacy::display::BitmapData tmp59 = this->get_pixels();		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(161)
				Float tmp60 = (star->x + (int)2);		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(161)
				int tmp61 = ::Std_obj::_int(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(161)
				Float tmp62 = (star->y + (int)1);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(161)
				int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(161)
				int tmp64 = this->_depthColors->__get(colorIndex);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(161)
				tmp59->setPixel32(tmp61,tmp63,tmp64);
				HX_STACK_LINE(162)
				::openfl::_legacy::display::BitmapData tmp65 = this->get_pixels();		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(162)
				Float tmp66 = (star->x + (int)2);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(162)
				int tmp67 = ::Std_obj::_int(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(162)
				Float tmp68 = (star->y + (int)2);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(162)
				int tmp69 = ::Std_obj::_int(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(162)
				int tmp70 = this->_depthColors->__get(colorIndex);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(162)
				tmp65->setPixel32(tmp67,tmp69,tmp70);
			}
		}
		HX_STACK_LINE(165)
		::openfl::_legacy::display::BitmapData tmp4 = this->get_pixels();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		tmp4->unlock(null());
		HX_STACK_LINE(166)
		::openfl::_legacy::display::BitmapData tmp5 = this->get_pixels();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		this->framePixels = tmp5;
		HX_STACK_LINE(167)
		this->super::draw();
	}
return null();
}


Void StarField_obj::setStarDepthColors( int Depth,hx::Null< int >  __o_LowestColor,hx::Null< int >  __o_HighestColor){
int LowestColor = __o_LowestColor.Default(267933784);
int HighestColor = __o_HighestColor.Default(-723724);
	HX_STACK_FRAME("_StarField.StarField","setStarDepthColors",0x6b2a1e8a,"_StarField.StarField.setStarDepthColors","StarField.hx",178,0x0738ec56)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Depth,"Depth")
	HX_STACK_ARG(LowestColor,"LowestColor")
	HX_STACK_ARG(HighestColor,"HighestColor")
{
		HX_STACK_LINE(179)
		int tmp = Depth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(179)
		this->_depthColors = ::flixel::util::FlxGradient_obj::createGradientArray((int)1,tmp,Array_obj< int >::__new().Add(LowestColor).Add(HighestColor),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(StarField_obj,setStarDepthColors,(void))

Void StarField_obj::setStarSpeed( int Min,int Max){
{
		HX_STACK_FRAME("_StarField.StarField","setStarSpeed",0x40a5e3be,"_StarField.StarField.setStarSpeed","StarField.hx",183,0x0738ec56)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Min,"Min")
		HX_STACK_ARG(Max,"Max")
		HX_STACK_LINE(184)
		this->_minSpeed = Min;
		HX_STACK_LINE(185)
		this->_maxSpeed = Max;
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(187)
			Array< ::Dynamic > _g1 = this->_stars;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(187)
			while((true)){
				HX_STACK_LINE(187)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(187)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(187)
				if ((tmp1)){
					HX_STACK_LINE(187)
					break;
				}
				HX_STACK_LINE(187)
				::_StarField::ClsStar tmp2 = _g1->__get(_g).StaticCast< ::_StarField::ClsStar >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(187)
				::_StarField::ClsStar star = tmp2;		HX_STACK_VAR(star,"star");
				HX_STACK_LINE(187)
				++(_g);
				HX_STACK_LINE(189)
				int tmp3 = Min;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(189)
				int tmp4 = Max;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(189)
				Float tmp5 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(189)
				star->speed = tmp5;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StarField_obj,setStarSpeed,(void))


StarField_obj::StarField_obj()
{
}

void StarField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StarField);
	HX_MARK_MEMBER_NAME(bgColor,"bgColor");
	HX_MARK_MEMBER_NAME(_stars,"_stars");
	HX_MARK_MEMBER_NAME(_depthColors,"_depthColors");
	HX_MARK_MEMBER_NAME(_minSpeed,"_minSpeed");
	HX_MARK_MEMBER_NAME(_maxSpeed,"_maxSpeed");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StarField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bgColor,"bgColor");
	HX_VISIT_MEMBER_NAME(_stars,"_stars");
	HX_VISIT_MEMBER_NAME(_depthColors,"_depthColors");
	HX_VISIT_MEMBER_NAME(_minSpeed,"_minSpeed");
	HX_VISIT_MEMBER_NAME(_maxSpeed,"_maxSpeed");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StarField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stars") ) { return _stars; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { return bgColor; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_minSpeed") ) { return _minSpeed; }
		if (HX_FIELD_EQ(inName,"_maxSpeed") ) { return _maxSpeed; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_depthColors") ) { return _depthColors; }
		if (HX_FIELD_EQ(inName,"setStarSpeed") ) { return setStarSpeed_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setStarDepthColors") ) { return setStarDepthColors_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StarField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stars") ) { _stars=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgColor") ) { bgColor=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_minSpeed") ) { _minSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxSpeed") ) { _maxSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_depthColors") ) { _depthColors=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StarField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void StarField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"));
	outFields->push(HX_HCSTRING("_stars","\xa2","\xbb","\xf2","\x7f"));
	outFields->push(HX_HCSTRING("_depthColors","\x14","\xfd","\x99","\xae"));
	outFields->push(HX_HCSTRING("_minSpeed","\xf4","\xfb","\x36","\xc0"));
	outFields->push(HX_HCSTRING("_maxSpeed","\xa2","\xe1","\x1c","\x73"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(StarField_obj,bgColor),HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(StarField_obj,_stars),HX_HCSTRING("_stars","\xa2","\xbb","\xf2","\x7f")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(StarField_obj,_depthColors),HX_HCSTRING("_depthColors","\x14","\xfd","\x99","\xae")},
	{hx::fsFloat,(int)offsetof(StarField_obj,_minSpeed),HX_HCSTRING("_minSpeed","\xf4","\xfb","\x36","\xc0")},
	{hx::fsFloat,(int)offsetof(StarField_obj,_maxSpeed),HX_HCSTRING("_maxSpeed","\xa2","\xe1","\x1c","\x73")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bgColor","\x5e","\x81","\x83","\xf7"),
	HX_HCSTRING("_stars","\xa2","\xbb","\xf2","\x7f"),
	HX_HCSTRING("_depthColors","\x14","\xfd","\x99","\xae"),
	HX_HCSTRING("_minSpeed","\xf4","\xfb","\x36","\xc0"),
	HX_HCSTRING("_maxSpeed","\xa2","\xe1","\x1c","\x73"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("setStarDepthColors","\xdf","\xa2","\xf8","\x94"),
	HX_HCSTRING("setStarSpeed","\x53","\xca","\x85","\x3c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StarField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StarField_obj::__mClass,"__mClass");
};

#endif

hx::Class StarField_obj::__mClass;

void StarField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("_StarField.StarField","\xe3","\xc1","\xc2","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &StarField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StarField_obj >;
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

} // end namespace _StarField
