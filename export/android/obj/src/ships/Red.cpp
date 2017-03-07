#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_bullets_RedFire
#include <bullets/RedFire.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_ships_Red
#include <ships/Red.h>
#endif
namespace ships{

Void Red_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("ships.Red","new",0x7747246c,"ships.Red.new","ships/Red.hx",18,0x9295c345)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(31)
	this->_keyShoot = false;
	HX_STACK_LINE(30)
	this->_keyRight = false;
	HX_STACK_LINE(29)
	this->_keyLeft = false;
	HX_STACK_LINE(28)
	this->_keyDown = false;
	HX_STACK_LINE(27)
	this->_keyUp = false;
	HX_STACK_LINE(26)
	this->_fireRateDelay = ((Float)0);
	HX_STACK_LINE(24)
	this->autoFire = false;
	HX_STACK_LINE(23)
	this->fireRate = ((Float)3);
	HX_STACK_LINE(22)
	this->bodyWeight = ((Float)500);
	HX_STACK_LINE(21)
	this->movingSpeed = ((Float)400);
	HX_STACK_LINE(35)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(36)
	this->makeGraphic((int)32,(int)32,(int)-65536,null(),null());
}
;
	return null();
}

//Red_obj::~Red_obj() { }

Dynamic Red_obj::__CreateEmpty() { return  new Red_obj; }
hx::ObjectPtr< Red_obj > Red_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Red_obj > _result_ = new Red_obj();
	_result_->__construct(__o_X,__o_Y);
	return _result_;}

Dynamic Red_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Red_obj > _result_ = new Red_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Red_obj::update( ){
{
		HX_STACK_FRAME("ships.Red","update",0x37cd417d,"ships.Red.update","ships/Red.hx",40,0x9295c345)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		this->movements();
		HX_STACK_LINE(42)
		this->shootings();
		HX_STACK_LINE(43)
		this->super::update();
	}
return null();
}


Void Red_obj::movements( ){
{
		HX_STACK_FRAME("ships.Red","movements",0xdd88e970,"ships.Red.movements","ships/Red.hx",46,0x9295c345)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		::flixel::util::FlxPoint tmp = this->drag;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		Float tmp1 = this->bodyWeight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		tmp->set_x(tmp1);
		HX_STACK_LINE(48)
		::flixel::util::FlxPoint tmp2 = this->drag;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		Float tmp3 = this->bodyWeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		Float tmp4 = (tmp3 * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		tmp2->set_y(tmp4);
		HX_STACK_LINE(49)
		::flixel::input::keyboard::FlxKeyboard tmp5 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		bool tmp6 = tmp5->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")),(int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		this->_keyUp = tmp6;
		HX_STACK_LINE(50)
		::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		bool tmp8 = tmp7->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")),(int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		this->_keyDown = tmp8;
		HX_STACK_LINE(51)
		::flixel::input::keyboard::FlxKeyboard tmp9 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(51)
		bool tmp10 = tmp9->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		this->_keyLeft = tmp10;
		HX_STACK_LINE(52)
		::flixel::input::keyboard::FlxKeyboard tmp11 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(52)
		bool tmp12 = tmp11->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")),(int)1);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(52)
		this->_keyRight = tmp12;
		HX_STACK_LINE(53)
		bool tmp13 = this->_keyUp;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(53)
		if ((tmp13)){
			HX_STACK_LINE(53)
			::flixel::util::FlxPoint tmp14 = this->velocity;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(53)
			Float tmp15 = this->movingSpeed;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(53)
			Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(53)
			tmp14->set_y(tmp16);
		}
		HX_STACK_LINE(54)
		bool tmp14 = this->_keyDown;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(54)
		if ((tmp14)){
			HX_STACK_LINE(54)
			::flixel::util::FlxPoint tmp15 = this->velocity;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(54)
			Float tmp16 = this->movingSpeed;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(54)
			tmp15->set_y(tmp16);
		}
		HX_STACK_LINE(55)
		bool tmp15 = this->_keyLeft;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(55)
		if ((tmp15)){
			HX_STACK_LINE(55)
			::flixel::util::FlxPoint tmp16 = this->velocity;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(55)
			Float tmp17 = this->movingSpeed;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(55)
			Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(55)
			tmp16->set_x(tmp18);
		}
		HX_STACK_LINE(56)
		bool tmp16 = this->_keyRight;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(56)
		if ((tmp16)){
			HX_STACK_LINE(56)
			::flixel::util::FlxPoint tmp17 = this->velocity;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(56)
			Float tmp18 = this->movingSpeed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(56)
			tmp17->set_x(tmp18);
		}
		HX_STACK_LINE(59)
		bool tmp17 = this->_keyShoot;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(59)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(59)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(59)
		if ((tmp18)){
			HX_STACK_LINE(59)
			::flixel::input::mouse::FlxMouse tmp20 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(59)
			::flixel::input::mouse::FlxMouse tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(59)
			int tmp22 = tmp21->_leftButton->current;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(59)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(59)
			tmp19 = (tmp23 > (int)0);
		}
		else{
			HX_STACK_LINE(59)
			tmp19 = true;
		}
		HX_STACK_LINE(59)
		this->_keyShoot = tmp19;
		HX_STACK_LINE(60)
		::flixel::input::mouse::FlxMouse tmp20 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(60)
		int tmp21 = tmp20->_leftButton->current;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(60)
		bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(60)
		if ((tmp22)){
			HX_STACK_LINE(61)
			::flixel::input::mouse::FlxMouse tmp23 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(61)
			int tmp24 = tmp23->screenX;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(61)
			Float tmp25 = this->get_width();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(61)
			Float tmp26 = (Float(tmp25) / Float((int)2));		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(61)
			Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(61)
			::flixel::input::mouse::FlxMouse tmp28 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(61)
			int tmp29 = tmp28->screenY;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(61)
			Float tmp30 = this->get_height();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(61)
			Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(61)
			::flixel::util::FlxPoint tmp32 = ::flixel::util::FlxPoint_obj::__new(tmp27,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(61)
			::flixel::util::FlxPoint p = tmp32;		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(62)
			Float tmp33 = this->x;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(62)
			Float tmp34 = p->x;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(62)
			Float tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(62)
			Float tmp36 = ::Math_obj::abs(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(62)
			Dynamic tmp37 = hx::SourceInfo(HX_HCSTRING("Red.hx","\x2d","\xc6","\xf8","\x32"),62,HX_HCSTRING("ships.Red","\x7a","\xbe","\xf1","\x2a"),HX_HCSTRING("movements","\x64","\x04","\x5d","\x30"));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(62)
			::haxe::Log_obj::trace(tmp36,tmp37);
			HX_STACK_LINE(63)
			Float tmp38 = this->x;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(63)
			Float tmp39 = p->x;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(63)
			Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(63)
			Float tmp41 = ::Math_obj::abs(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(63)
			Float tmp42 = this->get_width();		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(63)
			Float tmp43 = (Float(tmp42) / Float((int)2));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(63)
			bool tmp44 = (tmp41 > tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(63)
			bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(63)
			bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(63)
			if ((tmp45)){
				HX_STACK_LINE(63)
				Float tmp47 = this->y;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(63)
				Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(63)
				Float tmp49 = p->y;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(63)
				Float tmp50 = (tmp48 - tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(63)
				Float tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(63)
				Float tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(63)
				Float tmp53 = ::Math_obj::abs(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(63)
				Float tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(63)
				Float tmp55 = this->get_height();		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(63)
				Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(63)
				Float tmp57 = (Float(tmp56) / Float(((Float)1.5)));		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(63)
				Float tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(63)
				tmp46 = (tmp54 > tmp58);
			}
			else{
				HX_STACK_LINE(63)
				tmp46 = true;
			}
			HX_STACK_LINE(63)
			bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(63)
			if ((tmp47)){
				HX_STACK_LINE(64)
				::flixel::util::FlxPoint tmp48 = p;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(64)
				::flixel::util::FlxVelocity_obj::moveTowardsPoint(hx::ObjectPtr<OBJ_>(this),tmp48,(int)1,(int)0);
			}
			else{
				HX_STACK_LINE(66)
				::flixel::util::FlxPoint tmp48 = p;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(66)
				Float tmp49 = this->movingSpeed;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(66)
				::flixel::util::FlxVelocity_obj::moveTowardsPoint(hx::ObjectPtr<OBJ_>(this),tmp48,tmp49,(int)0);
			}
		}
		HX_STACK_LINE(72)
		Float tmp23 = this->x;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(72)
		Float tmp24 = this->get_width();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(72)
		Float tmp25 = (Float(tmp24) / Float((int)2));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(72)
		Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(72)
		bool tmp27 = (tmp23 < tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(72)
		if ((tmp27)){
			HX_STACK_LINE(72)
			Float tmp28 = this->get_width();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(72)
			Float tmp29 = (Float(tmp28) / Float((int)2));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(72)
			Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(72)
			this->set_x(tmp30);
		}
		HX_STACK_LINE(73)
		Float tmp28 = this->x;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(73)
		int tmp29 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(73)
		Float tmp30 = this->get_width();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(73)
		Float tmp31 = (Float(tmp30) / Float((int)2));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(73)
		Float tmp32 = (tmp29 - tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(73)
		bool tmp33 = (tmp28 > tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(73)
		if ((tmp33)){
			HX_STACK_LINE(73)
			int tmp34 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(73)
			Float tmp35 = this->get_width();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(73)
			Float tmp36 = (Float(tmp35) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(73)
			Float tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(73)
			this->set_x(tmp37);
		}
		HX_STACK_LINE(75)
		Float tmp34 = this->y;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(75)
		Float tmp35 = this->get_height();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(75)
		Float tmp36 = (Float(tmp35) / Float((int)2));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(75)
		Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(75)
		bool tmp38 = (tmp34 < tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(75)
		if ((tmp38)){
			HX_STACK_LINE(75)
			Float tmp39 = this->get_height();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(75)
			Float tmp40 = (Float(tmp39) / Float((int)2));		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(75)
			Float tmp41 = -(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(75)
			this->set_y(tmp41);
		}
		HX_STACK_LINE(76)
		Float tmp39 = this->y;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(76)
		int tmp40 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(76)
		Float tmp41 = this->get_height();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(76)
		Float tmp42 = (Float(tmp41) / Float((int)2));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(76)
		Float tmp43 = (tmp40 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(76)
		bool tmp44 = (tmp39 > tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(76)
		if ((tmp44)){
			HX_STACK_LINE(76)
			int tmp45 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(76)
			Float tmp46 = this->get_height();		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(76)
			Float tmp47 = (Float(tmp46) / Float((int)2));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(76)
			Float tmp48 = (tmp45 - tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(76)
			this->set_y(tmp48);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Red_obj,movements,(void))

Void Red_obj::shootings( ){
{
		HX_STACK_FRAME("ships.Red","shootings",0x25be7bbc,"ships.Red.shootings","ships/Red.hx",79,0x9295c345)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		bool tmp1 = tmp->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff")).Add(HX_HCSTRING("X","\x58","\x00","\x00","\x00")),(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		if ((tmp2)){
			HX_STACK_LINE(80)
			tmp3 = this->autoFire;
		}
		else{
			HX_STACK_LINE(80)
			tmp3 = true;
		}
		HX_STACK_LINE(80)
		this->_keyShoot = tmp3;
		HX_STACK_LINE(82)
		bool tmp4 = this->_keyShoot;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		if ((tmp5)){
			HX_STACK_LINE(82)
			::flixel::input::mouse::FlxMouse tmp7 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(82)
			::flixel::input::mouse::FlxMouse tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(82)
			int tmp9 = tmp8->_leftButton->current;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(82)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			tmp6 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(82)
			tmp6 = true;
		}
		HX_STACK_LINE(82)
		this->_keyShoot = tmp6;
		HX_STACK_LINE(85)
		Float tmp7 = this->_fireRateDelay;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		if ((tmp8)){
			HX_STACK_LINE(85)
			(this->_fireRateDelay)--;
		}
		HX_STACK_LINE(86)
		bool tmp9 = this->_keyShoot;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(86)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(86)
		if ((tmp9)){
			HX_STACK_LINE(86)
			Float tmp11 = this->_fireRateDelay;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(86)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(86)
			tmp10 = (tmp12 <= (int)0);
		}
		else{
			HX_STACK_LINE(86)
			tmp10 = false;
		}
		HX_STACK_LINE(86)
		if ((tmp10)){
			HX_STACK_LINE(87)
			Float tmp11 = this->x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(87)
			Float tmp12 = (tmp11 + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(87)
			Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(87)
			Float tmp14 = this->get_height();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(87)
			Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(87)
			Float tmp16 = (tmp13 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(87)
			::bullets::RedFire tmp17 = ::bullets::RedFire_obj::__new(tmp12,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(87)
			::bullets::RedFire redFire1 = tmp17;		HX_STACK_VAR(redFire1,"redFire1");
			HX_STACK_LINE(88)
			Float tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(88)
			Float tmp19 = (tmp18 - (int)6);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(88)
			Float tmp20 = this->get_width();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(88)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(88)
			Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(88)
			Float tmp23 = this->get_height();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(88)
			Float tmp24 = (Float(tmp23) / Float((int)2));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(88)
			Float tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(88)
			::bullets::RedFire tmp26 = ::bullets::RedFire_obj::__new(tmp21,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(88)
			::bullets::RedFire redFire2 = tmp26;		HX_STACK_VAR(redFire2,"redFire2");
			HX_STACK_LINE(89)
			::flixel::FlxGame tmp27 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(89)
			::bullets::RedFire tmp28 = redFire1;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(89)
			tmp27->_state->add(tmp28);
			HX_STACK_LINE(90)
			::flixel::FlxGame tmp29 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(90)
			::bullets::RedFire tmp30 = redFire2;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(90)
			tmp29->_state->add(tmp30);
			HX_STACK_LINE(91)
			Float tmp31 = this->fireRate;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(91)
			Float tmp32 = (Float((int)60) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(91)
			this->_fireRateDelay = tmp32;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Red_obj,shootings,(void))

Void Red_obj::destroy( ){
{
		HX_STACK_FRAME("ships.Red","destroy",0x22827706,"ships.Red.destroy","ships/Red.hx",98,0x9295c345)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		this->super::destroy();
	}
return null();
}



Red_obj::Red_obj()
{
}

Dynamic Red_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_keyUp") ) { return _keyUp; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fireRate") ) { return fireRate; }
		if (HX_FIELD_EQ(inName,"autoFire") ) { return autoFire; }
		if (HX_FIELD_EQ(inName,"_keyDown") ) { return _keyDown; }
		if (HX_FIELD_EQ(inName,"_keyLeft") ) { return _keyLeft; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_keyRight") ) { return _keyRight; }
		if (HX_FIELD_EQ(inName,"_keyShoot") ) { return _keyShoot; }
		if (HX_FIELD_EQ(inName,"movements") ) { return movements_dyn(); }
		if (HX_FIELD_EQ(inName,"shootings") ) { return shootings_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bodyWeight") ) { return bodyWeight; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"movingSpeed") ) { return movingSpeed; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fireRateDelay") ) { return _fireRateDelay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Red_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_keyUp") ) { _keyUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fireRate") ) { fireRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoFire") ) { autoFire=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyDown") ) { _keyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyLeft") ) { _keyLeft=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_keyRight") ) { _keyRight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyShoot") ) { _keyShoot=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bodyWeight") ) { bodyWeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"movingSpeed") ) { movingSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_fireRateDelay") ) { _fireRateDelay=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Red_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("movingSpeed","\x19","\x12","\x87","\x11"));
	outFields->push(HX_HCSTRING("bodyWeight","\xba","\x05","\xc3","\x48"));
	outFields->push(HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"));
	outFields->push(HX_HCSTRING("autoFire","\xc5","\xc2","\xe1","\x26"));
	outFields->push(HX_HCSTRING("_fireRateDelay","\x2e","\x5e","\x7f","\x22"));
	outFields->push(HX_HCSTRING("_keyUp","\x1b","\x01","\xe6","\xda"));
	outFields->push(HX_HCSTRING("_keyDown","\x22","\xc3","\xff","\xd5"));
	outFields->push(HX_HCSTRING("_keyLeft","\xc7","\xd2","\x41","\xdb"));
	outFields->push(HX_HCSTRING("_keyRight","\x1c","\xa9","\x63","\x75"));
	outFields->push(HX_HCSTRING("_keyShoot","\x1f","\x1f","\x27","\x08"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Red_obj,movingSpeed),HX_HCSTRING("movingSpeed","\x19","\x12","\x87","\x11")},
	{hx::fsFloat,(int)offsetof(Red_obj,bodyWeight),HX_HCSTRING("bodyWeight","\xba","\x05","\xc3","\x48")},
	{hx::fsFloat,(int)offsetof(Red_obj,fireRate),HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb")},
	{hx::fsBool,(int)offsetof(Red_obj,autoFire),HX_HCSTRING("autoFire","\xc5","\xc2","\xe1","\x26")},
	{hx::fsFloat,(int)offsetof(Red_obj,_fireRateDelay),HX_HCSTRING("_fireRateDelay","\x2e","\x5e","\x7f","\x22")},
	{hx::fsBool,(int)offsetof(Red_obj,_keyUp),HX_HCSTRING("_keyUp","\x1b","\x01","\xe6","\xda")},
	{hx::fsBool,(int)offsetof(Red_obj,_keyDown),HX_HCSTRING("_keyDown","\x22","\xc3","\xff","\xd5")},
	{hx::fsBool,(int)offsetof(Red_obj,_keyLeft),HX_HCSTRING("_keyLeft","\xc7","\xd2","\x41","\xdb")},
	{hx::fsBool,(int)offsetof(Red_obj,_keyRight),HX_HCSTRING("_keyRight","\x1c","\xa9","\x63","\x75")},
	{hx::fsBool,(int)offsetof(Red_obj,_keyShoot),HX_HCSTRING("_keyShoot","\x1f","\x1f","\x27","\x08")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("movingSpeed","\x19","\x12","\x87","\x11"),
	HX_HCSTRING("bodyWeight","\xba","\x05","\xc3","\x48"),
	HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"),
	HX_HCSTRING("autoFire","\xc5","\xc2","\xe1","\x26"),
	HX_HCSTRING("_fireRateDelay","\x2e","\x5e","\x7f","\x22"),
	HX_HCSTRING("_keyUp","\x1b","\x01","\xe6","\xda"),
	HX_HCSTRING("_keyDown","\x22","\xc3","\xff","\xd5"),
	HX_HCSTRING("_keyLeft","\xc7","\xd2","\x41","\xdb"),
	HX_HCSTRING("_keyRight","\x1c","\xa9","\x63","\x75"),
	HX_HCSTRING("_keyShoot","\x1f","\x1f","\x27","\x08"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("movements","\x64","\x04","\x5d","\x30"),
	HX_HCSTRING("shootings","\xb0","\x96","\x92","\x78"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Red_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Red_obj::__mClass,"__mClass");
};

#endif

hx::Class Red_obj::__mClass;

void Red_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ships.Red","\x7a","\xbe","\xf1","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Red_obj >;
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

} // end namespace ships
