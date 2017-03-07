#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_effects_FlxTrailArea
#include <flixel/addons/effects/FlxTrailArea.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FrameType
#include <flixel/system/layer/frames/FrameType.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace effects{

Void FlxTrailArea_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_AlphaMultiplier,hx::Null< int >  __o_Delay,hx::Null< bool >  __o_SimpleRender,hx::Null< bool >  __o_Antialiasing,::openfl::_legacy::display::BlendMode TrailBlendMode)
{
HX_STACK_FRAME("flixel.addons.effects.FlxTrailArea","new",0x21f8d728,"flixel.addons.effects.FlxTrailArea.new","flixel/addons/effects/FlxTrailArea.hx",21,0x94f04047)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(__o_Height,"Height")
HX_STACK_ARG(__o_AlphaMultiplier,"AlphaMultiplier")
HX_STACK_ARG(__o_Delay,"Delay")
HX_STACK_ARG(__o_SimpleRender,"SimpleRender")
HX_STACK_ARG(__o_Antialiasing,"Antialiasing")
HX_STACK_ARG(TrailBlendMode,"TrailBlendMode")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Width = __o_Width.Default(0);
int Height = __o_Height.Default(0);
Float AlphaMultiplier = __o_AlphaMultiplier.Default(((Float)0.8));
int Delay = __o_Delay.Default(2);
bool SimpleRender = __o_SimpleRender.Default(false);
bool Antialiasing = __o_Antialiasing.Default(false);
{
	HX_STACK_LINE(100)
	this->_height = ((Float)1);
	HX_STACK_LINE(94)
	this->_width = ((Float)1);
	HX_STACK_LINE(88)
	this->_counter = (int)0;
	HX_STACK_LINE(83)
	this->alphaOffset = ((Float)0);
	HX_STACK_LINE(78)
	this->blueOffset = ((Float)0);
	HX_STACK_LINE(73)
	this->greenOffset = ((Float)0);
	HX_STACK_LINE(68)
	this->redOffset = ((Float)0);
	HX_STACK_LINE(58)
	this->blueMultiplier = ((Float)1);
	HX_STACK_LINE(53)
	this->greenMultiplier = ((Float)1);
	HX_STACK_LINE(48)
	this->redMultiplier = ((Float)1);
	HX_STACK_LINE(38)
	this->blendMode = null();
	HX_STACK_LINE(32)
	this->simpleRender = false;
	HX_STACK_LINE(26)
	this->delay = (int)2;
	HX_STACK_LINE(117)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(119)
	int tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	int tmp3 = Height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(119)
	this->setSize(tmp2,tmp3);
	HX_STACK_LINE(121)
	::openfl::_legacy::display::BitmapData tmp4 = this->framePixels;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(121)
	this->set_pixels(tmp4);
	HX_STACK_LINE(123)
	::flixel::group::FlxTypedGroup tmp5 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(123)
	this->group = tmp5;
	HX_STACK_LINE(126)
	this->delay = Delay;
	HX_STACK_LINE(127)
	this->simpleRender = SimpleRender;
	HX_STACK_LINE(128)
	this->blendMode = TrailBlendMode;
	HX_STACK_LINE(129)
	this->antialiasing = Antialiasing;
	HX_STACK_LINE(130)
	this->alphaMultiplier = AlphaMultiplier;
}
;
	return null();
}

//FlxTrailArea_obj::~FlxTrailArea_obj() { }

Dynamic FlxTrailArea_obj::__CreateEmpty() { return  new FlxTrailArea_obj; }
hx::ObjectPtr< FlxTrailArea_obj > FlxTrailArea_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< Float >  __o_AlphaMultiplier,hx::Null< int >  __o_Delay,hx::Null< bool >  __o_SimpleRender,hx::Null< bool >  __o_Antialiasing,::openfl::_legacy::display::BlendMode TrailBlendMode)
{  hx::ObjectPtr< FlxTrailArea_obj > _result_ = new FlxTrailArea_obj();
	_result_->__construct(__o_X,__o_Y,__o_Width,__o_Height,__o_AlphaMultiplier,__o_Delay,__o_SimpleRender,__o_Antialiasing,TrailBlendMode);
	return _result_;}

Dynamic FlxTrailArea_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTrailArea_obj > _result_ = new FlxTrailArea_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _result_;}

Void FlxTrailArea_obj::setSize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.addons.effects.FlxTrailArea","setSize",0xf99bec4b,"flixel.addons.effects.FlxTrailArea.setSize","flixel/addons/effects/FlxTrailArea.hx",140,0x94f04047)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(141)
		bool tmp = (Width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		if ((tmp)){
			HX_STACK_LINE(142)
			int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(142)
			Width = tmp1;
		}
		HX_STACK_LINE(144)
		bool tmp1 = (Height <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(144)
		if ((tmp1)){
			HX_STACK_LINE(145)
			int tmp2 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			Height = tmp2;
		}
		HX_STACK_LINE(147)
		Float tmp2 = Width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		Float tmp3 = this->_width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		bool tmp4 = (tmp2 != tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(147)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		if ((tmp5)){
			HX_STACK_LINE(147)
			Float tmp7 = Height;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			Float tmp8 = this->_height;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(147)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(147)
			tmp6 = (tmp7 != tmp9);
		}
		else{
			HX_STACK_LINE(147)
			tmp6 = true;
		}
		HX_STACK_LINE(147)
		if ((tmp6)){
			HX_STACK_LINE(148)
			this->_width = Width;
			HX_STACK_LINE(149)
			this->_height = Height;
			HX_STACK_LINE(150)
			Float tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(150)
			Float tmp9 = this->_height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(150)
			int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(150)
			::openfl::_legacy::display::BitmapData tmp11 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp8,tmp10,true,(int)0,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(150)
			this->framePixels = tmp11;
		}
	}
return null();
}


Void FlxTrailArea_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.effects.FlxTrailArea","destroy",0x0c4a37c2,"flixel.addons.effects.FlxTrailArea.destroy","flixel/addons/effects/FlxTrailArea.hx",155,0x94f04047)
		HX_STACK_THIS(this)
		HX_STACK_LINE(156)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		::flixel::group::FlxTypedGroup tmp1 = ::flixel::util::FlxDestroyUtil_obj::destroy(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		this->group = tmp1;
		HX_STACK_LINE(157)
		this->blendMode = null();
		HX_STACK_LINE(159)
		this->super::destroy();
	}
return null();
}


Void FlxTrailArea_obj::draw( ){
{
		HX_STACK_FRAME("flixel.addons.effects.FlxTrailArea","draw",0x9131143c,"flixel.addons.effects.FlxTrailArea.draw","flixel/addons/effects/FlxTrailArea.hx",163,0x94f04047)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		(this->_counter)++;
		HX_STACK_LINE(167)
		int tmp = this->_counter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(167)
		int tmp1 = this->delay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(167)
		if ((tmp2)){
			HX_STACK_LINE(169)
			this->_counter = (int)0;
			HX_STACK_LINE(170)
			::openfl::_legacy::display::BitmapData tmp3 = this->framePixels;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(170)
			tmp3->lock();
			HX_STACK_LINE(172)
			Float tmp4 = this->redMultiplier;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(172)
			Float tmp5 = this->greenMultiplier;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			Float tmp6 = this->blueMultiplier;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			Float tmp7 = this->alphaMultiplier;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			Float tmp8 = this->redOffset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			Float tmp9 = this->greenOffset;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(172)
			Float tmp10 = this->blueOffset;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(172)
			Float tmp11 = this->alphaOffset;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(172)
			::openfl::_legacy::geom::ColorTransform tmp12 = ::openfl::_legacy::geom::ColorTransform_obj::__new(tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(172)
			::openfl::_legacy::geom::ColorTransform cTrans = tmp12;		HX_STACK_VAR(cTrans,"cTrans");
			HX_STACK_LINE(173)
			::openfl::_legacy::display::BitmapData tmp13 = this->framePixels;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(173)
			::openfl::_legacy::display::BitmapData tmp14 = this->framePixels;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(173)
			int tmp15 = tmp14->get_width();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(173)
			::openfl::_legacy::display::BitmapData tmp16 = this->framePixels;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(173)
			int tmp17 = tmp16->get_height();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(173)
			::openfl::_legacy::geom::Rectangle tmp18 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(173)
			::openfl::_legacy::geom::ColorTransform tmp19 = cTrans;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(173)
			tmp13->colorTransform(tmp18,tmp19);
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(176)
				::flixel::group::FlxTypedGroup tmp20 = this->group;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(176)
				Array< ::Dynamic > _g1 = tmp20->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(176)
				while((true)){
					HX_STACK_LINE(176)
					bool tmp21 = (_g < _g1->length);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(176)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(176)
					if ((tmp22)){
						HX_STACK_LINE(176)
						break;
					}
					HX_STACK_LINE(176)
					::flixel::FlxSprite tmp23 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(176)
					::flixel::FlxSprite member = tmp23;		HX_STACK_VAR(member,"member");
					HX_STACK_LINE(176)
					++(_g);
					HX_STACK_LINE(178)
					bool tmp24 = member->exists;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(178)
					if ((tmp24)){
						HX_STACK_LINE(180)
						bool tmp25 = this->simpleRender;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(180)
						if ((tmp25)){
							HX_STACK_LINE(182)
							::openfl::_legacy::display::BitmapData tmp26 = this->framePixels;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(182)
							::openfl::_legacy::display::BitmapData tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(182)
							{
								HX_STACK_LINE(182)
								bool tmp28 = (member->frame != null());		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(182)
								bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(182)
								if ((tmp28)){
									HX_STACK_LINE(182)
									tmp29 = member->dirty;
								}
								else{
									HX_STACK_LINE(182)
									tmp29 = false;
								}
								HX_STACK_LINE(182)
								if ((tmp29)){
									HX_STACK_LINE(182)
									bool tmp30 = member->flipX;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(182)
									bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(182)
									bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(182)
									bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(182)
									bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(182)
									if ((tmp33)){
										HX_STACK_LINE(182)
										bool tmp35 = member->flipY;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(182)
										bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(182)
										bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(182)
										tmp34 = !(tmp37);
									}
									else{
										HX_STACK_LINE(182)
										tmp34 = false;
									}
									HX_STACK_LINE(182)
									bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(182)
									if ((tmp34)){
										HX_STACK_LINE(182)
										::flixel::_system::layer::frames::FrameType tmp36 = member->frame->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(182)
										::flixel::_system::layer::frames::FrameType tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(182)
										tmp35 = (tmp37 == ::flixel::_system::layer::frames::FrameType_obj::REGULAR);
									}
									else{
										HX_STACK_LINE(182)
										tmp35 = false;
									}
									HX_STACK_LINE(182)
									if ((tmp35)){
										HX_STACK_LINE(182)
										::openfl::_legacy::display::BitmapData tmp36 = member->framePixels;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(182)
										::openfl::_legacy::display::BitmapData tmp37 = member->frame->__Field(HX_HCSTRING("paintOnBitmap","\x2c","\x48","\xc7","\x28"), hx::paccDynamic )(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(182)
										member->framePixels = tmp37;
									}
									else{
										HX_STACK_LINE(182)
										::openfl::_legacy::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
										HX_STACK_LINE(182)
										bool tmp36 = member->flipX;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(182)
										bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(182)
										if ((tmp36)){
											HX_STACK_LINE(182)
											tmp37 = member->flipY;
										}
										else{
											HX_STACK_LINE(182)
											tmp37 = false;
										}
										HX_STACK_LINE(182)
										if ((tmp37)){
											HX_STACK_LINE(182)
											::openfl::_legacy::display::BitmapData tmp38 = member->frame->__Field(HX_HCSTRING("getHVReversedBitmap","\xd5","\x52","\x37","\x11"), hx::paccDynamic )();		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(182)
											frameBmd = tmp38;
										}
										else{
											HX_STACK_LINE(182)
											bool tmp38 = member->flipX;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(182)
											if ((tmp38)){
												HX_STACK_LINE(182)
												::openfl::_legacy::display::BitmapData tmp39 = member->frame->__Field(HX_HCSTRING("getHReversedBitmap","\x23","\x11","\xf7","\x97"), hx::paccDynamic )();		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(182)
												frameBmd = tmp39;
											}
											else{
												HX_STACK_LINE(182)
												bool tmp39 = member->flipY;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(182)
												if ((tmp39)){
													HX_STACK_LINE(182)
													::openfl::_legacy::display::BitmapData tmp40 = member->frame->__Field(HX_HCSTRING("getVReversedBitmap","\xb1","\xcd","\xb9","\xbd"), hx::paccDynamic )();		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(182)
													frameBmd = tmp40;
												}
												else{
													HX_STACK_LINE(182)
													::openfl::_legacy::display::BitmapData tmp40 = member->frame->__Field(HX_HCSTRING("getBitmap","\x25","\x99","\x62","\x6d"), hx::paccDynamic )();		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(182)
													frameBmd = tmp40;
												}
											}
										}
										HX_STACK_LINE(182)
										bool tmp38 = (member->framePixels == null());		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(182)
										bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(182)
										bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(182)
										bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(182)
										if ((tmp40)){
											HX_STACK_LINE(182)
											int tmp42 = member->framePixels->get_width();		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(182)
											int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(182)
											int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(182)
											int tmp45 = member->frameWidth;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(182)
											tmp41 = (tmp44 != tmp45);
										}
										else{
											HX_STACK_LINE(182)
											tmp41 = true;
										}
										HX_STACK_LINE(182)
										bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(182)
										bool tmp43;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(182)
										if ((tmp42)){
											HX_STACK_LINE(182)
											int tmp44 = member->framePixels->get_height();		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(182)
											int tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(182)
											int tmp46 = member->frameHeight;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(182)
											tmp43 = (tmp45 != tmp46);
										}
										else{
											HX_STACK_LINE(182)
											tmp43 = true;
										}
										HX_STACK_LINE(182)
										if ((tmp43)){
											HX_STACK_LINE(182)
											bool tmp44 = (member->framePixels != null());		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(182)
											if ((tmp44)){
												HX_STACK_LINE(182)
												member->framePixels->dispose();
											}
											HX_STACK_LINE(182)
											::flixel::util::FlxPoint tmp45 = member->frame->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic );		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(182)
											Float tmp46 = tmp45->x;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(182)
											int tmp47 = ::Std_obj::_int(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(182)
											::flixel::util::FlxPoint tmp48 = member->frame->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic );		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(182)
											Float tmp49 = tmp48->y;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(182)
											int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(182)
											::openfl::_legacy::display::BitmapData tmp51 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp47,tmp50,null(),null(),null());		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(182)
											member->framePixels = tmp51;
										}
										HX_STACK_LINE(182)
										::openfl::_legacy::display::BitmapData tmp44 = frameBmd;		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(182)
										::openfl::_legacy::geom::Rectangle tmp45 = member->_flashRect;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(182)
										::openfl::_legacy::geom::Point tmp46 = member->_flashPointZero;		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(182)
										member->framePixels->copyPixels(tmp44,tmp45,tmp46,null(),null(),null());
									}
									HX_STACK_LINE(182)
									bool tmp36 = member->useColorTransform;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(182)
									if ((tmp36)){
										HX_STACK_LINE(182)
										::openfl::_legacy::geom::Rectangle tmp37 = member->_flashRect;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(182)
										::openfl::_legacy::geom::ColorTransform tmp38 = member->colorTransform;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(182)
										member->framePixels->colorTransform(tmp37,tmp38);
									}
									HX_STACK_LINE(182)
									member->dirty = false;
								}
								HX_STACK_LINE(182)
								tmp27 = member->framePixels;
							}
							HX_STACK_LINE(183)
							::openfl::_legacy::geom::Rectangle tmp28 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,member->frameWidth,member->frameHeight);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(184)
							Float tmp29 = member->x;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(184)
							Float tmp30 = this->x;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(184)
							Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(184)
							Float tmp32 = member->y;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(184)
							Float tmp33 = this->y;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(184)
							Float tmp34 = (tmp32 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(184)
							::openfl::_legacy::geom::Point tmp35 = ::openfl::_legacy::geom::Point_obj::__new(tmp31,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(182)
							tmp26->copyPixels(tmp27,tmp28,tmp35,null(),null(),true);
						}
						else{
							HX_STACK_LINE(188)
							Float tmp26 = member->scale->x;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(188)
							bool tmp27 = (tmp26 != (int)1);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(188)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(188)
							bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(188)
							if ((tmp28)){
								HX_STACK_LINE(188)
								Float tmp30 = member->scale->y;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(188)
								Float tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(188)
								tmp29 = (tmp31 != (int)1);
							}
							else{
								HX_STACK_LINE(188)
								tmp29 = true;
							}
							HX_STACK_LINE(188)
							bool scaled = tmp29;		HX_STACK_VAR(scaled,"scaled");
							HX_STACK_LINE(189)
							bool tmp30 = (member->angle != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(189)
							bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(189)
							if ((tmp30)){
								HX_STACK_LINE(189)
								tmp31 = (member->bakedRotationAngle <= (int)0);
							}
							else{
								HX_STACK_LINE(189)
								tmp31 = false;
							}
							HX_STACK_LINE(189)
							bool rotated = tmp31;		HX_STACK_VAR(rotated,"rotated");
							HX_STACK_LINE(190)
							::openfl::_legacy::geom::Matrix tmp32 = this->_matrix;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(190)
							tmp32->identity();
							HX_STACK_LINE(191)
							bool tmp33 = rotated;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(191)
							bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(191)
							bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(191)
							if ((tmp34)){
								HX_STACK_LINE(191)
								tmp35 = scaled;
							}
							else{
								HX_STACK_LINE(191)
								tmp35 = true;
							}
							HX_STACK_LINE(191)
							if ((tmp35)){
								HX_STACK_LINE(193)
								::openfl::_legacy::geom::Matrix tmp36 = this->_matrix;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(193)
								Float tmp37 = member->origin->x;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(193)
								Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(193)
								Float tmp39 = member->origin->y;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(193)
								Float tmp40 = -(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(193)
								tmp36->translate(tmp38,tmp40);
								HX_STACK_LINE(194)
								bool tmp41 = scaled;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(194)
								if ((tmp41)){
									HX_STACK_LINE(196)
									::openfl::_legacy::geom::Matrix tmp42 = this->_matrix;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(196)
									Float tmp43 = member->scale->x;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(196)
									Float tmp44 = member->scale->y;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(196)
									tmp42->scale(tmp43,tmp44);
								}
								HX_STACK_LINE(198)
								bool tmp42 = rotated;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(198)
								if ((tmp42)){
									HX_STACK_LINE(200)
									::openfl::_legacy::geom::Matrix tmp43 = this->_matrix;		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(200)
									Float tmp44 = member->angle;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(200)
									Float tmp45 = ::Math_obj::PI;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(200)
									Float tmp46 = (Float(tmp45) / Float((int)180));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(200)
									Float tmp47 = (tmp44 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(200)
									tmp43->rotate(tmp47);
								}
								HX_STACK_LINE(202)
								::openfl::_legacy::geom::Matrix tmp43 = this->_matrix;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(202)
								Float tmp44 = member->origin->x;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(202)
								Float tmp45 = member->origin->y;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(202)
								tmp43->translate(tmp44,tmp45);
							}
							HX_STACK_LINE(204)
							::openfl::_legacy::geom::Matrix tmp36 = this->_matrix;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(204)
							Float tmp37 = member->x;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(204)
							Float tmp38 = this->x;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(204)
							Float tmp39 = (tmp37 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(204)
							Float tmp40 = member->y;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(204)
							Float tmp41 = this->y;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(204)
							Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(204)
							tmp36->translate(tmp39,tmp42);
							HX_STACK_LINE(205)
							::openfl::_legacy::display::BitmapData tmp43 = this->framePixels;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(205)
							::openfl::_legacy::display::BitmapData tmp44;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(205)
							{
								HX_STACK_LINE(205)
								bool tmp45 = (member->frame != null());		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(205)
								bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(205)
								if ((tmp45)){
									HX_STACK_LINE(205)
									tmp46 = member->dirty;
								}
								else{
									HX_STACK_LINE(205)
									tmp46 = false;
								}
								HX_STACK_LINE(205)
								if ((tmp46)){
									HX_STACK_LINE(205)
									bool tmp47 = member->flipX;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(205)
									bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(205)
									bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(205)
									bool tmp50 = tmp49;		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(205)
									bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(205)
									if ((tmp50)){
										HX_STACK_LINE(205)
										bool tmp52 = member->flipY;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(205)
										bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(205)
										bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(205)
										tmp51 = !(tmp54);
									}
									else{
										HX_STACK_LINE(205)
										tmp51 = false;
									}
									HX_STACK_LINE(205)
									bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(205)
									if ((tmp51)){
										HX_STACK_LINE(205)
										::flixel::_system::layer::frames::FrameType tmp53 = member->frame->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic );		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(205)
										::flixel::_system::layer::frames::FrameType tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(205)
										tmp52 = (tmp54 == ::flixel::_system::layer::frames::FrameType_obj::REGULAR);
									}
									else{
										HX_STACK_LINE(205)
										tmp52 = false;
									}
									HX_STACK_LINE(205)
									if ((tmp52)){
										HX_STACK_LINE(205)
										::openfl::_legacy::display::BitmapData tmp53 = member->framePixels;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(205)
										::openfl::_legacy::display::BitmapData tmp54 = member->frame->__Field(HX_HCSTRING("paintOnBitmap","\x2c","\x48","\xc7","\x28"), hx::paccDynamic )(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(205)
										member->framePixels = tmp54;
									}
									else{
										HX_STACK_LINE(205)
										::openfl::_legacy::display::BitmapData frameBmd = null();		HX_STACK_VAR(frameBmd,"frameBmd");
										HX_STACK_LINE(205)
										bool tmp53 = member->flipX;		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(205)
										bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(205)
										if ((tmp53)){
											HX_STACK_LINE(205)
											tmp54 = member->flipY;
										}
										else{
											HX_STACK_LINE(205)
											tmp54 = false;
										}
										HX_STACK_LINE(205)
										if ((tmp54)){
											HX_STACK_LINE(205)
											::openfl::_legacy::display::BitmapData tmp55 = member->frame->__Field(HX_HCSTRING("getHVReversedBitmap","\xd5","\x52","\x37","\x11"), hx::paccDynamic )();		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(205)
											frameBmd = tmp55;
										}
										else{
											HX_STACK_LINE(205)
											bool tmp55 = member->flipX;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(205)
											if ((tmp55)){
												HX_STACK_LINE(205)
												::openfl::_legacy::display::BitmapData tmp56 = member->frame->__Field(HX_HCSTRING("getHReversedBitmap","\x23","\x11","\xf7","\x97"), hx::paccDynamic )();		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(205)
												frameBmd = tmp56;
											}
											else{
												HX_STACK_LINE(205)
												bool tmp56 = member->flipY;		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(205)
												if ((tmp56)){
													HX_STACK_LINE(205)
													::openfl::_legacy::display::BitmapData tmp57 = member->frame->__Field(HX_HCSTRING("getVReversedBitmap","\xb1","\xcd","\xb9","\xbd"), hx::paccDynamic )();		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(205)
													frameBmd = tmp57;
												}
												else{
													HX_STACK_LINE(205)
													::openfl::_legacy::display::BitmapData tmp57 = member->frame->__Field(HX_HCSTRING("getBitmap","\x25","\x99","\x62","\x6d"), hx::paccDynamic )();		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(205)
													frameBmd = tmp57;
												}
											}
										}
										HX_STACK_LINE(205)
										bool tmp55 = (member->framePixels == null());		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(205)
										bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(205)
										bool tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(205)
										bool tmp58;		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(205)
										if ((tmp57)){
											HX_STACK_LINE(205)
											int tmp59 = member->framePixels->get_width();		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(205)
											int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(205)
											int tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(205)
											int tmp62 = member->frameWidth;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(205)
											tmp58 = (tmp61 != tmp62);
										}
										else{
											HX_STACK_LINE(205)
											tmp58 = true;
										}
										HX_STACK_LINE(205)
										bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(205)
										bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(205)
										if ((tmp59)){
											HX_STACK_LINE(205)
											int tmp61 = member->framePixels->get_height();		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(205)
											int tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(205)
											int tmp63 = member->frameHeight;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(205)
											tmp60 = (tmp62 != tmp63);
										}
										else{
											HX_STACK_LINE(205)
											tmp60 = true;
										}
										HX_STACK_LINE(205)
										if ((tmp60)){
											HX_STACK_LINE(205)
											bool tmp61 = (member->framePixels != null());		HX_STACK_VAR(tmp61,"tmp61");
											HX_STACK_LINE(205)
											if ((tmp61)){
												HX_STACK_LINE(205)
												member->framePixels->dispose();
											}
											HX_STACK_LINE(205)
											::flixel::util::FlxPoint tmp62 = member->frame->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic );		HX_STACK_VAR(tmp62,"tmp62");
											HX_STACK_LINE(205)
											Float tmp63 = tmp62->x;		HX_STACK_VAR(tmp63,"tmp63");
											HX_STACK_LINE(205)
											int tmp64 = ::Std_obj::_int(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
											HX_STACK_LINE(205)
											::flixel::util::FlxPoint tmp65 = member->frame->__Field(HX_HCSTRING("sourceSize","\x3c","\x87","\xb7","\x74"), hx::paccDynamic );		HX_STACK_VAR(tmp65,"tmp65");
											HX_STACK_LINE(205)
											Float tmp66 = tmp65->y;		HX_STACK_VAR(tmp66,"tmp66");
											HX_STACK_LINE(205)
											int tmp67 = ::Std_obj::_int(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
											HX_STACK_LINE(205)
											::openfl::_legacy::display::BitmapData tmp68 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp64,tmp67,null(),null(),null());		HX_STACK_VAR(tmp68,"tmp68");
											HX_STACK_LINE(205)
											member->framePixels = tmp68;
										}
										HX_STACK_LINE(205)
										::openfl::_legacy::display::BitmapData tmp61 = frameBmd;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(205)
										::openfl::_legacy::geom::Rectangle tmp62 = member->_flashRect;		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(205)
										::openfl::_legacy::geom::Point tmp63 = member->_flashPointZero;		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(205)
										member->framePixels->copyPixels(tmp61,tmp62,tmp63,null(),null(),null());
									}
									HX_STACK_LINE(205)
									bool tmp53 = member->useColorTransform;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(205)
									if ((tmp53)){
										HX_STACK_LINE(205)
										::openfl::_legacy::geom::Rectangle tmp54 = member->_flashRect;		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(205)
										::openfl::_legacy::geom::ColorTransform tmp55 = member->colorTransform;		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(205)
										member->framePixels->colorTransform(tmp54,tmp55);
									}
									HX_STACK_LINE(205)
									member->dirty = false;
								}
								HX_STACK_LINE(205)
								tmp44 = member->framePixels;
							}
							HX_STACK_LINE(205)
							::openfl::_legacy::geom::Matrix tmp45 = this->_matrix;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(205)
							::openfl::_legacy::geom::ColorTransform tmp46 = member->colorTransform;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(205)
							::openfl::_legacy::display::BlendMode tmp47 = this->blendMode;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(205)
							bool tmp48 = this->antialiasing;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(205)
							tmp43->draw(tmp44,tmp45,tmp46,tmp47,null(),tmp48);
						}
					}
				}
			}
			HX_STACK_LINE(211)
			::openfl::_legacy::display::BitmapData tmp20 = this->framePixels;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(211)
			tmp20->unlock(null());
			HX_STACK_LINE(213)
			::openfl::_legacy::display::BitmapData tmp21 = this->framePixels;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(213)
			this->set_pixels(tmp21);
		}
		HX_STACK_LINE(215)
		this->super::draw();
	}
return null();
}


Void FlxTrailArea_obj::resetTrail( ){
{
		HX_STACK_FRAME("flixel.addons.effects.FlxTrailArea","resetTrail",0x69ccadaf,"flixel.addons.effects.FlxTrailArea.resetTrail","flixel/addons/effects/FlxTrailArea.hx",222,0x94f04047)
		HX_STACK_THIS(this)
		HX_STACK_LINE(223)
		::openfl::_legacy::display::BitmapData tmp = this->framePixels;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		::openfl::_legacy::display::BitmapData tmp1 = this->framePixels;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		int tmp2 = tmp1->get_width();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		::openfl::_legacy::display::BitmapData tmp3 = this->framePixels;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		int tmp4 = tmp3->get_height();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		::openfl::_legacy::geom::Rectangle tmp5 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(223)
		tmp->fillRect(tmp5,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTrailArea_obj,resetTrail,(void))

::flixel::FlxSprite FlxTrailArea_obj::add( ::flixel::FlxSprite Sprite){
	HX_STACK_FRAME("flixel.addons.effects.FlxTrailArea","add",0x21eef8e9,"flixel.addons.effects.FlxTrailArea.add","flixel/addons/effects/FlxTrailArea.hx",234,0x94f04047)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_LINE(235)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(235)
	::flixel::FlxSprite tmp1 = Sprite;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(235)
	::flixel::FlxSprite tmp2 = tmp->add(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrailArea_obj,add,return )

Float FlxTrailArea_obj::get_width( ){
	HX_STACK_FRAME("flixel.addons.effects.FlxTrailArea","get_width",0x76fe5f25,"flixel.addons.effects.FlxTrailArea.get_width","flixel/addons/effects/FlxTrailArea.hx",242,0x94f04047)
	HX_STACK_THIS(this)
	HX_STACK_LINE(243)
	Float tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(243)
	return tmp;
}


Float FlxTrailArea_obj::set_width( Float Width){
	HX_STACK_FRAME("flixel.addons.effects.FlxTrailArea","set_width",0x5a4f4b31,"flixel.addons.effects.FlxTrailArea.set_width","flixel/addons/effects/FlxTrailArea.hx",250,0x94f04047)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_LINE(251)
	bool tmp = (Width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	if ((tmp)){
		HX_STACK_LINE(252)
		int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		Width = tmp1;
	}
	HX_STACK_LINE(254)
	Float tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(254)
	Float tmp2 = this->_width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(254)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(254)
	if ((tmp3)){
		HX_STACK_LINE(255)
		Float tmp4 = Width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(255)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(255)
		Float tmp6 = this->_height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(255)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(255)
		::openfl::_legacy::display::BitmapData tmp8 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp5,tmp7,true,(int)0,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(255)
		this->framePixels = tmp8;
	}
	HX_STACK_LINE(257)
	Float tmp4 = this->_width = Width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(257)
	return tmp4;
}


Float FlxTrailArea_obj::get_height( ){
	HX_STACK_FRAME("flixel.addons.effects.FlxTrailArea","get_height",0x5de459e8,"flixel.addons.effects.FlxTrailArea.get_height","flixel/addons/effects/FlxTrailArea.hx",264,0x94f04047)
	HX_STACK_THIS(this)
	HX_STACK_LINE(265)
	Float tmp = this->_height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(265)
	return tmp;
}


Float FlxTrailArea_obj::set_height( Float Height){
	HX_STACK_FRAME("flixel.addons.effects.FlxTrailArea","set_height",0x6161f85c,"flixel.addons.effects.FlxTrailArea.set_height","flixel/addons/effects/FlxTrailArea.hx",272,0x94f04047)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Height,"Height")
	HX_STACK_LINE(273)
	bool tmp = (Height <= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	if ((tmp)){
		HX_STACK_LINE(274)
		int tmp1 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		Height = tmp1;
	}
	HX_STACK_LINE(276)
	Float tmp1 = Height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(276)
	Float tmp2 = this->_height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(276)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(276)
	if ((tmp3)){
		HX_STACK_LINE(277)
		Float tmp4 = this->_width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(277)
		Float tmp6 = Height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(277)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(277)
		::openfl::_legacy::display::BitmapData tmp8 = ::openfl::_legacy::display::BitmapData_obj::__new(tmp5,tmp7,true,(int)0,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(277)
		this->framePixels = tmp8;
	}
	HX_STACK_LINE(279)
	Float tmp4 = this->_height = Height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(279)
	return tmp4;
}



FlxTrailArea_obj::FlxTrailArea_obj()
{
}

void FlxTrailArea_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTrailArea);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(simpleRender,"simpleRender");
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(redMultiplier,"redMultiplier");
	HX_MARK_MEMBER_NAME(greenMultiplier,"greenMultiplier");
	HX_MARK_MEMBER_NAME(blueMultiplier,"blueMultiplier");
	HX_MARK_MEMBER_NAME(alphaMultiplier,"alphaMultiplier");
	HX_MARK_MEMBER_NAME(redOffset,"redOffset");
	HX_MARK_MEMBER_NAME(greenOffset,"greenOffset");
	HX_MARK_MEMBER_NAME(blueOffset,"blueOffset");
	HX_MARK_MEMBER_NAME(alphaOffset,"alphaOffset");
	HX_MARK_MEMBER_NAME(_counter,"_counter");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTrailArea_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(simpleRender,"simpleRender");
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(redMultiplier,"redMultiplier");
	HX_VISIT_MEMBER_NAME(greenMultiplier,"greenMultiplier");
	HX_VISIT_MEMBER_NAME(blueMultiplier,"blueMultiplier");
	HX_VISIT_MEMBER_NAME(alphaMultiplier,"alphaMultiplier");
	HX_VISIT_MEMBER_NAME(redOffset,"redOffset");
	HX_VISIT_MEMBER_NAME(greenOffset,"greenOffset");
	HX_VISIT_MEMBER_NAME(blueOffset,"blueOffset");
	HX_VISIT_MEMBER_NAME(alphaOffset,"alphaOffset");
	HX_VISIT_MEMBER_NAME(_counter,"_counter");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTrailArea_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_counter") ) { return _counter; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"redOffset") ) { return redOffset; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return blueOffset; }
		if (HX_FIELD_EQ(inName,"resetTrail") ) { return resetTrail_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return greenOffset; }
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return alphaOffset; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleRender") ) { return simpleRender; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return redMultiplier; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return blueMultiplier; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return greenMultiplier; }
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return alphaMultiplier; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTrailArea_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { blendMode=inValue.Cast< ::openfl::_legacy::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleRender") ) { simpleRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTrailArea_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("simpleRender","\x28","\x15","\x89","\x50"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"));
	outFields->push(HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"));
	outFields->push(HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"));
	outFields->push(HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"));
	outFields->push(HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"));
	outFields->push(HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"));
	outFields->push(HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"));
	outFields->push(HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"));
	outFields->push(HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxTrailArea_obj,delay),HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7")},
	{hx::fsBool,(int)offsetof(FlxTrailArea_obj,simpleRender),HX_HCSTRING("simpleRender","\x28","\x15","\x89","\x50")},
	{hx::fsObject /*::openfl::_legacy::display::BlendMode*/ ,(int)offsetof(FlxTrailArea_obj,blendMode),HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(FlxTrailArea_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsFloat,(int)offsetof(FlxTrailArea_obj,redMultiplier),HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e")},
	{hx::fsFloat,(int)offsetof(FlxTrailArea_obj,greenMultiplier),HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f")},
	{hx::fsFloat,(int)offsetof(FlxTrailArea_obj,blueMultiplier),HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf")},
	{hx::fsFloat,(int)offsetof(FlxTrailArea_obj,alphaMultiplier),HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a")},
	{hx::fsFloat,(int)offsetof(FlxTrailArea_obj,redOffset),HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53")},
	{hx::fsFloat,(int)offsetof(FlxTrailArea_obj,greenOffset),HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7")},
	{hx::fsFloat,(int)offsetof(FlxTrailArea_obj,blueOffset),HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb")},
	{hx::fsFloat,(int)offsetof(FlxTrailArea_obj,alphaOffset),HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0")},
	{hx::fsInt,(int)offsetof(FlxTrailArea_obj,_counter),HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57")},
	{hx::fsFloat,(int)offsetof(FlxTrailArea_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsFloat,(int)offsetof(FlxTrailArea_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("simpleRender","\x28","\x15","\x89","\x50"),
	HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"),
	HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"),
	HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"),
	HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"),
	HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"),
	HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"),
	HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"),
	HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"),
	HX_HCSTRING("_counter","\x7d","\x08","\x12","\x57"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("setSize","\x83","\xe1","\xd7","\x11"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("resetTrail","\x77","\xcb","\xbb","\xfe"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTrailArea_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTrailArea_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTrailArea_obj::__mClass;

void FlxTrailArea_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.effects.FlxTrailArea","\x36","\x63","\x2c","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTrailArea_obj >;
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
} // end namespace effects
