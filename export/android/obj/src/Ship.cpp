#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Ship
#include <Ship.h>
#endif
#ifndef INCLUDED_WeaponHost
#include <WeaponHost.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_util_DamageText
#include <util/DamageText.h>
#endif
#ifndef INCLUDED_util_EnemyHealthBar
#include <util/EnemyHealthBar.h>
#endif
#ifndef INCLUDED_util_PlayerHUD
#include <util/PlayerHUD.h>
#endif

Void Ship_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic,hx::Null< bool >  __o_IsPlayer,hx::Null< bool >  __o_IsEnemy,hx::Null< bool >  __o_IsBoss,hx::Null< Float >  __o_MaxHealth)
{
HX_STACK_FRAME("Ship","new",0x0728bace,"Ship.new","Ship.hx",18,0xcfd11862)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
HX_STACK_ARG(__o_IsPlayer,"IsPlayer")
HX_STACK_ARG(__o_IsEnemy,"IsEnemy")
HX_STACK_ARG(__o_IsBoss,"IsBoss")
HX_STACK_ARG(__o_MaxHealth,"MaxHealth")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool IsPlayer = __o_IsPlayer.Default(false);
bool IsEnemy = __o_IsEnemy.Default(false);
bool IsBoss = __o_IsBoss.Default(false);
Float MaxHealth = __o_MaxHealth.Default(1);
{
	HX_STACK_LINE(43)
	this->damageText = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(42)
	this->_aiMovementDelay = ((Float)0);
	HX_STACK_LINE(41)
	this->_keyMouseElapsed = ((Float)0);
	HX_STACK_LINE(40)
	this->_keyRightElapsed = ((Float)0);
	HX_STACK_LINE(39)
	this->_keyLeftElapsed = ((Float)0);
	HX_STACK_LINE(38)
	this->_keyDownElapsed = ((Float)0);
	HX_STACK_LINE(37)
	this->_keyUpElapsed = ((Float)0);
	HX_STACK_LINE(36)
	this->_keyShoot = false;
	HX_STACK_LINE(35)
	this->_keyRight = false;
	HX_STACK_LINE(34)
	this->_keyLeft = false;
	HX_STACK_LINE(33)
	this->_keyDown = false;
	HX_STACK_LINE(32)
	this->_keyUp = false;
	HX_STACK_LINE(27)
	this->maxHealth = ((Float)1);
	HX_STACK_LINE(26)
	this->isDamagable = false;
	HX_STACK_LINE(25)
	this->isBoss = false;
	HX_STACK_LINE(24)
	this->isEnemy = false;
	HX_STACK_LINE(23)
	this->isPlayer = false;
	HX_STACK_LINE(22)
	this->movingSpeed = ((Float)400);
	HX_STACK_LINE(47)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(49)
	Dynamic tmp2 = SimpleGraphic;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	this->loadGraphic(tmp2,true,(int)64,(int)64,null(),null());
	HX_STACK_LINE(51)
	this->health = (int)99999;
	HX_STACK_LINE(52)
	::List tmp3 = ::List_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	this->weapons = tmp3;
	HX_STACK_LINE(53)
	this->isPlayer = IsPlayer;
	HX_STACK_LINE(54)
	this->isEnemy = IsEnemy;
	HX_STACK_LINE(55)
	this->isBoss = IsBoss;
	HX_STACK_LINE(56)
	this->isDamagable = true;
	HX_STACK_LINE(57)
	Float tmp4 = this->maxHealth = MaxHealth;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	this->health = tmp4;
	HX_STACK_LINE(60)
	bool tmp5 = this->isEnemy;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	if ((tmp5)){
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			::Ship _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			Float tmp6 = (_g->angle + (int)180);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(61)
			_g->set_angle(tmp6);
		}
		HX_STACK_LINE(62)
		::util::EnemyHealthBar tmp6 = ::util::EnemyHealthBar_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		this->enemyHealthBar = tmp6;
	}
	HX_STACK_LINE(64)
	bool tmp6 = this->isPlayer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(64)
	if ((tmp6)){
		HX_STACK_LINE(65)
		::util::PlayerHUD tmp7 = ::util::PlayerHUD_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		this->playerHud = tmp7;
	}
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		bool tmp7 = this->isBoss;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(68)
		if ((tmp8)){
			HX_STACK_LINE(68)
			bool tmp10 = this->isEnemy;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(68)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(68)
			tmp9 = true;
		}
		HX_STACK_LINE(68)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(68)
		if ((tmp9)){
			HX_STACK_LINE(68)
			tmp10 = (int)15;
		}
		else{
			HX_STACK_LINE(68)
			tmp10 = (int)5;
		}
		HX_STACK_LINE(68)
		int _g = tmp10;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		while((true)){
			HX_STACK_LINE(68)
			bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(68)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			if ((tmp12)){
				HX_STACK_LINE(68)
				break;
			}
			HX_STACK_LINE(68)
			int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			int i = tmp13;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(69)
			bool tmp14 = this->isEnemy;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(69)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(69)
			Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(69)
			if ((tmp15)){
				HX_STACK_LINE(69)
				tmp16 = (int)-65536;
			}
			else{
				HX_STACK_LINE(69)
				tmp16 = (int)-1;
			}
			HX_STACK_LINE(69)
			bool tmp17 = this->isEnemy;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(69)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(69)
			Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(69)
			if ((tmp18)){
				HX_STACK_LINE(69)
				tmp19 = (int)0;
			}
			else{
				HX_STACK_LINE(69)
				tmp19 = (int)-13421773;
			}
			HX_STACK_LINE(69)
			::util::DamageText tmp20 = ::util::DamageText_obj::__new(hx::ObjectPtr<OBJ_>(this),HX_HCSTRING("","\x00","\x00","\x00","\x00"),(int)0,tmp16,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(69)
			::util::DamageText tmpDmgTxt = tmp20;		HX_STACK_VAR(tmpDmgTxt,"tmpDmgTxt");
			HX_STACK_LINE(70)
			tmpDmgTxt->damageText->kill();
			HX_STACK_LINE(71)
			::util::DamageText tmp21 = tmpDmgTxt;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(71)
			this->damageText->push(tmp21);
		}
	}
}
;
	return null();
}

//Ship_obj::~Ship_obj() { }

Dynamic Ship_obj::__CreateEmpty() { return  new Ship_obj; }
hx::ObjectPtr< Ship_obj > Ship_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic,hx::Null< bool >  __o_IsPlayer,hx::Null< bool >  __o_IsEnemy,hx::Null< bool >  __o_IsBoss,hx::Null< Float >  __o_MaxHealth)
{  hx::ObjectPtr< Ship_obj > _result_ = new Ship_obj();
	_result_->__construct(__o_X,__o_Y,SimpleGraphic,__o_IsPlayer,__o_IsEnemy,__o_IsBoss,__o_MaxHealth);
	return _result_;}

Dynamic Ship_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ship_obj > _result_ = new Ship_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

Void Ship_obj::update( ){
{
		HX_STACK_FRAME("Ship","update",0x7154545b,"Ship.update","Ship.hx",75,0xcfd11862)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		::util::EnemyHealthBar tmp = this->enemyHealthBar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		if ((tmp1)){
			HX_STACK_LINE(77)
			::util::EnemyHealthBar tmp2 = this->enemyHealthBar;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			bool tmp3 = this->exists;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			tmp2->bar->set_exists(tmp3);
		}
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::List tmp2 = this->weapons;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			::_List::ListIterator tmp3 = ::_List::ListIterator_obj::__new(tmp2->h);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			::_List::ListIterator _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			while((true)){
				HX_STACK_LINE(78)
				bool tmp4 = (_g->head != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(78)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(78)
				if ((tmp5)){
					HX_STACK_LINE(78)
					break;
				}
				HX_STACK_LINE(78)
				Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(78)
				{
					HX_STACK_LINE(78)
					Dynamic tmp7 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(78)
					_g->val = tmp7;
					HX_STACK_LINE(78)
					Dynamic tmp8 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(78)
					_g->head = tmp8;
					HX_STACK_LINE(78)
					tmp6 = _g->val;
				}
				HX_STACK_LINE(78)
				::WeaponHost weap = ((::WeaponHost)(tmp6));		HX_STACK_VAR(weap,"weap");
				HX_STACK_LINE(79)
				::WeaponHost tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(79)
				tmp7 = hx::TCast< ::WeaponHost >::cast(weap);
				HX_STACK_LINE(79)
				bool tmp8 = this->exists;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(79)
				tmp7->set_exists(tmp8);
			}
		}
		HX_STACK_LINE(82)
		bool tmp2 = this->isEnemy;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		if ((tmp3)){
			HX_STACK_LINE(83)
			this->movements();
		}
		else{
			HX_STACK_LINE(85)
			this->ai();
		}
		HX_STACK_LINE(87)
		Float tmp4 = this->alpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		bool tmp5 = (tmp4 < (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		if ((tmp5)){
			HX_STACK_LINE(87)
			::Ship _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			Float tmp6 = (_g->alpha + ((Float)0.05));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			_g->set_alpha(tmp6);
		}
		HX_STACK_LINE(89)
		this->super::update();
	}
return null();
}


Void Ship_obj::movements( ){
{
		HX_STACK_FRAME("Ship","movements",0x8af67552,"Ship.movements","Ship.hx",92,0xcfd11862)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint tmp = this->drag;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		::flixel::util::FlxPoint tmp1 = this->drag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		Float tmp2 = tmp1->set_y((int)2000);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		tmp->set_x(tmp2);
		HX_STACK_LINE(95)
		::flixel::input::keyboard::FlxKeyboard tmp3 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		bool tmp4 = tmp3->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")),(int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		this->_keyUp = tmp4;
		HX_STACK_LINE(96)
		::flixel::input::keyboard::FlxKeyboard tmp5 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		bool tmp6 = tmp5->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")),(int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		this->_keyDown = tmp6;
		HX_STACK_LINE(97)
		::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		bool tmp8 = tmp7->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")),(int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(97)
		this->_keyLeft = tmp8;
		HX_STACK_LINE(98)
		::flixel::input::keyboard::FlxKeyboard tmp9 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(98)
		bool tmp10 = tmp9->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")),(int)1);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(98)
		this->_keyRight = tmp10;
		HX_STACK_LINE(101)
		bool isLimitedX = false;		HX_STACK_VAR(isLimitedX,"isLimitedX");
		HX_STACK_LINE(102)
		bool isLimitedY = false;		HX_STACK_VAR(isLimitedY,"isLimitedY");
		HX_STACK_LINE(103)
		Float tmp11 = this->x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(103)
		bool tmp12 = (tmp11 <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(103)
		if ((tmp12)){
			HX_STACK_LINE(103)
			this->set_x((int)0);
			HX_STACK_LINE(103)
			this->_keyLeft = false;
			HX_STACK_LINE(103)
			::flixel::util::FlxPoint tmp13 = this->velocity;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(103)
			tmp13->set_x((int)0);
		}
		HX_STACK_LINE(104)
		Float tmp13 = this->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(104)
		bool tmp14 = (tmp13 <= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(104)
		if ((tmp14)){
			HX_STACK_LINE(104)
			this->set_y((int)0);
			HX_STACK_LINE(104)
			this->_keyUp = false;
			HX_STACK_LINE(104)
			::flixel::util::FlxPoint tmp15 = this->velocity;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(104)
			tmp15->set_y((int)0);
		}
		HX_STACK_LINE(105)
		Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(105)
		int tmp16 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(105)
		Float tmp17 = this->get_width();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(105)
		Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(105)
		bool tmp19 = (tmp15 >= tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(105)
		if ((tmp19)){
			HX_STACK_LINE(105)
			int tmp20 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(105)
			Float tmp21 = this->get_width();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(105)
			Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(105)
			this->set_x(tmp22);
			HX_STACK_LINE(105)
			this->_keyRight = false;
			HX_STACK_LINE(105)
			::flixel::util::FlxPoint tmp23 = this->velocity;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(105)
			tmp23->set_x((int)0);
		}
		HX_STACK_LINE(106)
		Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(106)
		int tmp21 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(106)
		Float tmp22 = this->get_height();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(106)
		Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(106)
		bool tmp24 = (tmp20 >= tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(106)
		if ((tmp24)){
			HX_STACK_LINE(106)
			int tmp25 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(106)
			Float tmp26 = this->get_height();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(106)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(106)
			this->set_y(tmp27);
			HX_STACK_LINE(106)
			this->_keyDown = false;
			HX_STACK_LINE(106)
			::flixel::util::FlxPoint tmp28 = this->velocity;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(106)
			tmp28->set_y((int)0);
		}
		HX_STACK_LINE(109)
		bool tmp25 = this->_keyUp;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(109)
		if ((tmp25)){
			HX_STACK_LINE(110)
			Float tmp26 = this->_keyUpElapsed;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(110)
			bool tmp27 = (tmp26 > ((Float)0.9));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(110)
			if ((tmp27)){
				HX_STACK_LINE(110)
				this->_keyUpElapsed = ((Float)0.9);
			}
			HX_STACK_LINE(111)
			::flixel::util::FlxPoint tmp28 = this->velocity;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(111)
			Float tmp29 = this->movingSpeed;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(111)
			Float tmp30 = (Float(tmp29) / Float((int)10));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(111)
			Float tmp31 = this->movingSpeed;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(111)
			Float tmp32 = (Float(tmp31) / Float(((Float)1.5)));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(111)
			Float tmp33 = this->_keyUpElapsed;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(111)
			Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(111)
			Float tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(111)
			Float tmp36 = -(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(111)
			tmp28->set_y(tmp36);
			HX_STACK_LINE(112)
			Float tmp37 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(112)
			Float tmp38 = (tmp37 * (int)3);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(112)
			hx::AddEq(this->_keyUpElapsed,tmp38);
		}
		HX_STACK_LINE(114)
		bool tmp26 = this->_keyDown;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(114)
		if ((tmp26)){
			HX_STACK_LINE(115)
			Float tmp27 = this->_keyDownElapsed;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(115)
			bool tmp28 = (tmp27 > ((Float)0.9));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(115)
			if ((tmp28)){
				HX_STACK_LINE(115)
				this->_keyDownElapsed = ((Float)0.9);
			}
			HX_STACK_LINE(116)
			::flixel::util::FlxPoint tmp29 = this->velocity;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(116)
			Float tmp30 = this->movingSpeed;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(116)
			Float tmp31 = (Float(tmp30) / Float((int)10));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(116)
			Float tmp32 = this->movingSpeed;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(116)
			Float tmp33 = (Float(tmp32) / Float(((Float)1.5)));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(116)
			Float tmp34 = this->_keyDownElapsed;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(116)
			Float tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(116)
			Float tmp36 = (tmp31 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(116)
			tmp29->set_y(tmp36);
			HX_STACK_LINE(117)
			Float tmp37 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(117)
			Float tmp38 = (tmp37 * (int)3);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(117)
			hx::AddEq(this->_keyDownElapsed,tmp38);
		}
		HX_STACK_LINE(119)
		bool tmp27 = this->_keyLeft;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(119)
		bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(119)
		if ((tmp27)){
			HX_STACK_LINE(119)
			tmp28 = this->_keyRight;
		}
		else{
			HX_STACK_LINE(119)
			tmp28 = false;
		}
		HX_STACK_LINE(119)
		bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(119)
		if ((tmp29)){
			HX_STACK_LINE(120)
			bool tmp30 = this->_keyLeft;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(120)
			if ((tmp30)){
				HX_STACK_LINE(121)
				Float tmp31 = this->_keyLeftElapsed;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(121)
				bool tmp32 = (tmp31 > ((Float)0.9));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(121)
				if ((tmp32)){
					HX_STACK_LINE(121)
					this->_keyLeftElapsed = ((Float)0.9);
				}
				HX_STACK_LINE(122)
				::flixel::util::FlxPoint tmp33 = this->velocity;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(122)
				Float tmp34 = this->movingSpeed;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(122)
				Float tmp35 = (Float(tmp34) / Float((int)10));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(122)
				Float tmp36 = this->movingSpeed;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(122)
				Float tmp37 = this->_keyLeftElapsed;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(122)
				Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(122)
				Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(122)
				Float tmp40 = -(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(122)
				tmp33->set_x(tmp40);
				HX_STACK_LINE(123)
				Float tmp41 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(123)
				Float tmp42 = (tmp41 * (int)3);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(123)
				hx::AddEq(this->_keyLeftElapsed,tmp42);
			}
			HX_STACK_LINE(125)
			bool tmp31 = this->_keyRight;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(125)
			if ((tmp31)){
				HX_STACK_LINE(126)
				Float tmp32 = this->_keyRightElapsed;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(126)
				bool tmp33 = (tmp32 > ((Float)0.9));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(126)
				if ((tmp33)){
					HX_STACK_LINE(126)
					this->_keyRightElapsed = ((Float)0.9);
				}
				HX_STACK_LINE(127)
				::flixel::util::FlxPoint tmp34 = this->velocity;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(127)
				Float tmp35 = this->movingSpeed;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(127)
				Float tmp36 = (Float(tmp35) / Float((int)10));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(127)
				Float tmp37 = this->movingSpeed;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(127)
				Float tmp38 = this->_keyRightElapsed;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(127)
				Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(127)
				Float tmp40 = (tmp36 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(127)
				tmp34->set_x(tmp40);
				HX_STACK_LINE(128)
				Float tmp41 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(128)
				Float tmp42 = (tmp41 * (int)3);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(128)
				hx::AddEq(this->_keyRightElapsed,tmp42);
			}
		}
		HX_STACK_LINE(131)
		bool tmp30 = this->_keyUp;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(131)
		bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(131)
		if ((tmp31)){
			HX_STACK_LINE(131)
			this->_keyUpElapsed = (int)0;
		}
		HX_STACK_LINE(132)
		bool tmp32 = this->_keyDown;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(132)
		bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(132)
		if ((tmp33)){
			HX_STACK_LINE(132)
			this->_keyDownElapsed = (int)0;
		}
		HX_STACK_LINE(133)
		bool tmp34 = this->_keyLeft;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(133)
		bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(133)
		if ((tmp35)){
			HX_STACK_LINE(133)
			this->_keyLeftElapsed = (int)0;
		}
		HX_STACK_LINE(134)
		bool tmp36 = this->_keyRight;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(134)
		bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(134)
		if ((tmp37)){
			HX_STACK_LINE(134)
			this->_keyRightElapsed = (int)0;
		}
		HX_STACK_LINE(137)
		::flixel::input::mouse::FlxMouse tmp38 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(137)
		int tmp39 = tmp38->_leftButton->current;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(137)
		bool tmp40 = (tmp39 > (int)0);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(137)
		if ((tmp40)){
			HX_STACK_LINE(138)
			Float tmp41 = this->_keyMouseElapsed;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(138)
			bool tmp42 = (tmp41 > ((Float)0.9));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(138)
			if ((tmp42)){
				HX_STACK_LINE(138)
				this->_keyMouseElapsed = ((Float)0.9);
			}
			HX_STACK_LINE(140)
			::flixel::input::mouse::FlxMouse tmp43 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(140)
			Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(140)
			Float tmp45 = this->x;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(140)
			Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(140)
			Float tmp47 = this->get_width();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(140)
			Float tmp48 = (Float(tmp47) / Float((int)2));		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(140)
			Float tmp49 = (tmp46 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(140)
			Float distanceX = tmp49;		HX_STACK_VAR(distanceX,"distanceX");
			HX_STACK_LINE(141)
			::flixel::input::mouse::FlxMouse tmp50 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(141)
			Float tmp51 = tmp50->y;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(141)
			Float tmp52 = this->y;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(141)
			Float tmp53 = (tmp51 - tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(141)
			Float tmp54 = this->get_height();		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(141)
			Float tmp55 = (tmp53 - tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(141)
			Float distanceY = tmp55;		HX_STACK_VAR(distanceY,"distanceY");
			HX_STACK_LINE(142)
			Float tmp56 = this->movingSpeed;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(142)
			Float tmp57 = (Float(tmp56) / Float((int)10));		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(142)
			Float tmp58 = this->movingSpeed;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(142)
			Float tmp59 = this->_keyMouseElapsed;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(142)
			Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(142)
			Float tmp61 = (tmp57 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(142)
			Float speed = tmp61;		HX_STACK_VAR(speed,"speed");
			HX_STACK_LINE(144)
			::flixel::util::FlxPoint tmp62 = this->velocity;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(144)
			Float tmp63 = distanceX;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(144)
			Float tmp64 = (Float(speed) / Float((int)200));		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(144)
			Float tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(144)
			tmp62->set_x(tmp65);
			HX_STACK_LINE(145)
			::flixel::util::FlxPoint tmp66 = this->velocity;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(145)
			Float tmp67 = distanceY;		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(145)
			Float tmp68 = (Float(speed) / Float((int)200));		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(145)
			Float tmp69 = (Float(tmp68) / Float(((Float)1.5)));		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(145)
			Float tmp70 = (tmp67 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(145)
			tmp66->set_y(tmp70);
			HX_STACK_LINE(147)
			Float tmp71 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(147)
			Float tmp72 = (tmp71 * (int)2);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(147)
			hx::AddEq(this->_keyMouseElapsed,tmp72);
		}
		else{
			HX_STACK_LINE(149)
			this->_keyMouseElapsed = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,movements,(void))

Void Ship_obj::hit( Float Damage,Dynamic __o_DisplayDamage){
Dynamic DisplayDamage = __o_DisplayDamage.Default(true);
	HX_STACK_FRAME("Ship","hit",0x072430c1,"Ship.hit","Ship.hx",154,0xcfd11862)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Damage,"Damage")
	HX_STACK_ARG(DisplayDamage,"DisplayDamage")
{
		HX_STACK_LINE(155)
		bool tmp = this->isDamagable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		if ((tmp)){
			HX_STACK_LINE(156)
			Float tmp1 = Damage;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(156)
			this->hurt(tmp1);
			HX_STACK_LINE(157)
			Dynamic tmp2 = DisplayDamage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			if ((tmp2)){
				HX_STACK_LINE(158)
				::util::DamageText tmp3 = this->damageText->__get((int)0).StaticCast< ::util::DamageText >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(158)
				::util::DamageText tmpTxt = tmp3;		HX_STACK_VAR(tmpTxt,"tmpTxt");
				HX_STACK_LINE(159)
				::util::DamageText tmp4 = tmpTxt;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(159)
				this->damageText->remove(tmp4);
				HX_STACK_LINE(160)
				::util::DamageText tmp5 = tmpTxt;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(160)
				this->damageText->push(tmp5);
				HX_STACK_LINE(161)
				Float tmp6 = Damage;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(161)
				int tmp7 = ::Math_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(161)
				Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(161)
				Float tmp9 = this->get_width();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(161)
				Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(161)
				Float tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(161)
				Float tmp12 = this->y;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(161)
				Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(161)
				Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(161)
				Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(161)
				tmpTxt->showDamage(HX_HCSTRING("","\x00","\x00","\x00","\x00"),tmp7,tmp11,tmp15);
			}
			HX_STACK_LINE(163)
			::flixel::tweens::FlxTween_obj::color(hx::ObjectPtr<OBJ_>(this),((Float)0.1),(int)12268339,(int)16777215,((Float).9),(int)1,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Ship_obj,hit,(void))

Void Ship_obj::ai( ){
{
		HX_STACK_FRAME("Ship","ai",0xcfd1123a,"Ship.ai","Ship.hx",168,0xcfd11862)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		::flixel::util::FlxPoint tmp = this->drag;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(169)
		::flixel::util::FlxPoint tmp1 = this->drag;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		Float tmp2 = tmp1->set_y((int)200);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		tmp->set_x(tmp2);
		HX_STACK_LINE(171)
		Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		int tmp4 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		Float tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		bool tmp7 = (tmp3 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(171)
		if ((tmp7)){
			HX_STACK_LINE(171)
			this->kill();
		}
		HX_STACK_LINE(173)
		::flixel::util::FlxPoint tmp8 = this->velocity;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(173)
		Float tmp9 = this->movingSpeed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(173)
		Float tmp10 = (Float(tmp9) / Float((int)6));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(173)
		tmp8->set_y(tmp10);
		HX_STACK_LINE(175)
		Float tmp11 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		hx::SubEq(this->_aiMovementDelay,tmp11);
		HX_STACK_LINE(176)
		::flixel::util::FlxPoint tmp12 = this->velocity;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(176)
		Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(176)
		bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(176)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(176)
		if ((tmp14)){
			HX_STACK_LINE(176)
			Float tmp16 = this->_aiMovementDelay;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(176)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(176)
			tmp15 = (tmp17 <= (int)0);
		}
		else{
			HX_STACK_LINE(176)
			tmp15 = false;
		}
		HX_STACK_LINE(176)
		if ((tmp15)){
			HX_STACK_LINE(177)
			Float tmp16 = ::flixel::util::FlxRandom_obj::floatRanged((int)2,(int)5,null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(177)
			this->_aiMovementDelay = tmp16;
			HX_STACK_LINE(178)
			::flixel::util::FlxPoint tmp17 = this->velocity;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(178)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				Float Chance = (int)50;		HX_STACK_VAR(Chance,"Chance");
				HX_STACK_LINE(178)
				Float tmp19 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(178)
				Float tmp20 = Chance;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(178)
				tmp18 = (tmp19 < tmp20);
			}
			HX_STACK_LINE(178)
			int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(178)
			if ((tmp18)){
				HX_STACK_LINE(178)
				tmp19 = (int)-1;
			}
			else{
				HX_STACK_LINE(178)
				tmp19 = (int)1;
			}
			HX_STACK_LINE(178)
			Float tmp20 = this->movingSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(178)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(178)
			Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(178)
			tmp17->set_x(tmp22);
		}
		HX_STACK_LINE(181)
		bool tmp16 = this->isEnemy;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(181)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(181)
		if ((tmp17)){
		}
		HX_STACK_LINE(186)
		Float tmp18 = this->x;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(186)
		bool tmp19 = (tmp18 <= (int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(186)
		if ((tmp19)){
			HX_STACK_LINE(186)
			this->set_x((int)0);
			HX_STACK_LINE(186)
			::flixel::util::FlxPoint tmp20 = this->velocity;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(186)
			tmp20->set_x((int)0);
		}
		HX_STACK_LINE(187)
		Float tmp20 = this->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(187)
		int tmp21 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(187)
		Float tmp22 = this->get_width();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(187)
		Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(187)
		bool tmp24 = (tmp20 >= tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(187)
		if ((tmp24)){
			HX_STACK_LINE(187)
			int tmp25 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(187)
			Float tmp26 = this->get_width();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(187)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(187)
			this->set_x(tmp27);
			HX_STACK_LINE(187)
			::flixel::util::FlxPoint tmp28 = this->velocity;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(187)
			tmp28->set_x((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ship_obj,ai,(void))

Void Ship_obj::kill( ){
{
		HX_STACK_FRAME("Ship","kill",0x3a821570,"Ship.kill","Ship.hx",190,0xcfd11862)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		this->super::kill();
		HX_STACK_LINE(192)
		::util::EnemyHealthBar tmp = this->enemyHealthBar;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		if ((tmp1)){
			HX_STACK_LINE(193)
			::util::EnemyHealthBar tmp2 = this->enemyHealthBar;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			tmp2->bar->set_exists(false);
		}
	}
return null();
}



Ship_obj::Ship_obj()
{
}

void Ship_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ship);
	HX_MARK_MEMBER_NAME(weapons,"weapons");
	HX_MARK_MEMBER_NAME(movingSpeed,"movingSpeed");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(isEnemy,"isEnemy");
	HX_MARK_MEMBER_NAME(isBoss,"isBoss");
	HX_MARK_MEMBER_NAME(isDamagable,"isDamagable");
	HX_MARK_MEMBER_NAME(maxHealth,"maxHealth");
	HX_MARK_MEMBER_NAME(playerHud,"playerHud");
	HX_MARK_MEMBER_NAME(enemyHealthBar,"enemyHealthBar");
	HX_MARK_MEMBER_NAME(_keyUp,"_keyUp");
	HX_MARK_MEMBER_NAME(_keyDown,"_keyDown");
	HX_MARK_MEMBER_NAME(_keyLeft,"_keyLeft");
	HX_MARK_MEMBER_NAME(_keyRight,"_keyRight");
	HX_MARK_MEMBER_NAME(_keyShoot,"_keyShoot");
	HX_MARK_MEMBER_NAME(_keyUpElapsed,"_keyUpElapsed");
	HX_MARK_MEMBER_NAME(_keyDownElapsed,"_keyDownElapsed");
	HX_MARK_MEMBER_NAME(_keyLeftElapsed,"_keyLeftElapsed");
	HX_MARK_MEMBER_NAME(_keyRightElapsed,"_keyRightElapsed");
	HX_MARK_MEMBER_NAME(_keyMouseElapsed,"_keyMouseElapsed");
	HX_MARK_MEMBER_NAME(_aiMovementDelay,"_aiMovementDelay");
	HX_MARK_MEMBER_NAME(damageText,"damageText");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ship_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(weapons,"weapons");
	HX_VISIT_MEMBER_NAME(movingSpeed,"movingSpeed");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(isEnemy,"isEnemy");
	HX_VISIT_MEMBER_NAME(isBoss,"isBoss");
	HX_VISIT_MEMBER_NAME(isDamagable,"isDamagable");
	HX_VISIT_MEMBER_NAME(maxHealth,"maxHealth");
	HX_VISIT_MEMBER_NAME(playerHud,"playerHud");
	HX_VISIT_MEMBER_NAME(enemyHealthBar,"enemyHealthBar");
	HX_VISIT_MEMBER_NAME(_keyUp,"_keyUp");
	HX_VISIT_MEMBER_NAME(_keyDown,"_keyDown");
	HX_VISIT_MEMBER_NAME(_keyLeft,"_keyLeft");
	HX_VISIT_MEMBER_NAME(_keyRight,"_keyRight");
	HX_VISIT_MEMBER_NAME(_keyShoot,"_keyShoot");
	HX_VISIT_MEMBER_NAME(_keyUpElapsed,"_keyUpElapsed");
	HX_VISIT_MEMBER_NAME(_keyDownElapsed,"_keyDownElapsed");
	HX_VISIT_MEMBER_NAME(_keyLeftElapsed,"_keyLeftElapsed");
	HX_VISIT_MEMBER_NAME(_keyRightElapsed,"_keyRightElapsed");
	HX_VISIT_MEMBER_NAME(_keyMouseElapsed,"_keyMouseElapsed");
	HX_VISIT_MEMBER_NAME(_aiMovementDelay,"_aiMovementDelay");
	HX_VISIT_MEMBER_NAME(damageText,"damageText");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Ship_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ai") ) { return ai_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hit") ) { return hit_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isBoss") ) { return isBoss; }
		if (HX_FIELD_EQ(inName,"_keyUp") ) { return _keyUp; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"weapons") ) { return weapons; }
		if (HX_FIELD_EQ(inName,"isEnemy") ) { return isEnemy; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return isPlayer; }
		if (HX_FIELD_EQ(inName,"_keyDown") ) { return _keyDown; }
		if (HX_FIELD_EQ(inName,"_keyLeft") ) { return _keyLeft; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHealth") ) { return maxHealth; }
		if (HX_FIELD_EQ(inName,"playerHud") ) { return playerHud; }
		if (HX_FIELD_EQ(inName,"_keyRight") ) { return _keyRight; }
		if (HX_FIELD_EQ(inName,"_keyShoot") ) { return _keyShoot; }
		if (HX_FIELD_EQ(inName,"movements") ) { return movements_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"damageText") ) { return damageText; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"movingSpeed") ) { return movingSpeed; }
		if (HX_FIELD_EQ(inName,"isDamagable") ) { return isDamagable; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_keyUpElapsed") ) { return _keyUpElapsed; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enemyHealthBar") ) { return enemyHealthBar; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_keyDownElapsed") ) { return _keyDownElapsed; }
		if (HX_FIELD_EQ(inName,"_keyLeftElapsed") ) { return _keyLeftElapsed; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_keyRightElapsed") ) { return _keyRightElapsed; }
		if (HX_FIELD_EQ(inName,"_keyMouseElapsed") ) { return _keyMouseElapsed; }
		if (HX_FIELD_EQ(inName,"_aiMovementDelay") ) { return _aiMovementDelay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ship_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isBoss") ) { isBoss=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyUp") ) { _keyUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"weapons") ) { weapons=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isEnemy") ) { isEnemy=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyDown") ) { _keyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyLeft") ) { _keyLeft=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHealth") ) { maxHealth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playerHud") ) { playerHud=inValue.Cast< ::util::PlayerHUD >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyRight") ) { _keyRight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyShoot") ) { _keyShoot=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"damageText") ) { damageText=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"movingSpeed") ) { movingSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDamagable") ) { isDamagable=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_keyUpElapsed") ) { _keyUpElapsed=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enemyHealthBar") ) { enemyHealthBar=inValue.Cast< ::util::EnemyHealthBar >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_keyDownElapsed") ) { _keyDownElapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyLeftElapsed") ) { _keyLeftElapsed=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_keyRightElapsed") ) { _keyRightElapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyMouseElapsed") ) { _keyMouseElapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_aiMovementDelay") ) { _aiMovementDelay=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Ship_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Ship_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("weapons","\x17","\x6a","\xc0","\xda"));
	outFields->push(HX_HCSTRING("movingSpeed","\x19","\x12","\x87","\x11"));
	outFields->push(HX_HCSTRING("isPlayer","\xeb","\x86","\x22","\x90"));
	outFields->push(HX_HCSTRING("isEnemy","\xfe","\xb5","\x00","\x0d"));
	outFields->push(HX_HCSTRING("isBoss","\xb7","\x4c","\x82","\x5e"));
	outFields->push(HX_HCSTRING("isDamagable","\x86","\xb6","\xda","\xfc"));
	outFields->push(HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"));
	outFields->push(HX_HCSTRING("playerHud","\xd6","\xaf","\xc0","\x00"));
	outFields->push(HX_HCSTRING("enemyHealthBar","\x2f","\xcf","\xe9","\x5d"));
	outFields->push(HX_HCSTRING("_keyUp","\x1b","\x01","\xe6","\xda"));
	outFields->push(HX_HCSTRING("_keyDown","\x22","\xc3","\xff","\xd5"));
	outFields->push(HX_HCSTRING("_keyLeft","\xc7","\xd2","\x41","\xdb"));
	outFields->push(HX_HCSTRING("_keyRight","\x1c","\xa9","\x63","\x75"));
	outFields->push(HX_HCSTRING("_keyShoot","\x1f","\x1f","\x27","\x08"));
	outFields->push(HX_HCSTRING("_keyUpElapsed","\x61","\xe8","\xaf","\xb0"));
	outFields->push(HX_HCSTRING("_keyDownElapsed","\x3a","\x85","\x93","\x05"));
	outFields->push(HX_HCSTRING("_keyLeftElapsed","\x35","\xe4","\xc4","\xde"));
	outFields->push(HX_HCSTRING("_keyRightElapsed","\x80","\xb2","\xe9","\x63"));
	outFields->push(HX_HCSTRING("_keyMouseElapsed","\x57","\x73","\xe0","\x5a"));
	outFields->push(HX_HCSTRING("_aiMovementDelay","\x4d","\xe4","\xbe","\x03"));
	outFields->push(HX_HCSTRING("damageText","\xbc","\xec","\xb9","\xb4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::List*/ ,(int)offsetof(Ship_obj,weapons),HX_HCSTRING("weapons","\x17","\x6a","\xc0","\xda")},
	{hx::fsFloat,(int)offsetof(Ship_obj,movingSpeed),HX_HCSTRING("movingSpeed","\x19","\x12","\x87","\x11")},
	{hx::fsBool,(int)offsetof(Ship_obj,isPlayer),HX_HCSTRING("isPlayer","\xeb","\x86","\x22","\x90")},
	{hx::fsBool,(int)offsetof(Ship_obj,isEnemy),HX_HCSTRING("isEnemy","\xfe","\xb5","\x00","\x0d")},
	{hx::fsBool,(int)offsetof(Ship_obj,isBoss),HX_HCSTRING("isBoss","\xb7","\x4c","\x82","\x5e")},
	{hx::fsBool,(int)offsetof(Ship_obj,isDamagable),HX_HCSTRING("isDamagable","\x86","\xb6","\xda","\xfc")},
	{hx::fsFloat,(int)offsetof(Ship_obj,maxHealth),HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c")},
	{hx::fsObject /*::util::PlayerHUD*/ ,(int)offsetof(Ship_obj,playerHud),HX_HCSTRING("playerHud","\xd6","\xaf","\xc0","\x00")},
	{hx::fsObject /*::util::EnemyHealthBar*/ ,(int)offsetof(Ship_obj,enemyHealthBar),HX_HCSTRING("enemyHealthBar","\x2f","\xcf","\xe9","\x5d")},
	{hx::fsBool,(int)offsetof(Ship_obj,_keyUp),HX_HCSTRING("_keyUp","\x1b","\x01","\xe6","\xda")},
	{hx::fsBool,(int)offsetof(Ship_obj,_keyDown),HX_HCSTRING("_keyDown","\x22","\xc3","\xff","\xd5")},
	{hx::fsBool,(int)offsetof(Ship_obj,_keyLeft),HX_HCSTRING("_keyLeft","\xc7","\xd2","\x41","\xdb")},
	{hx::fsBool,(int)offsetof(Ship_obj,_keyRight),HX_HCSTRING("_keyRight","\x1c","\xa9","\x63","\x75")},
	{hx::fsBool,(int)offsetof(Ship_obj,_keyShoot),HX_HCSTRING("_keyShoot","\x1f","\x1f","\x27","\x08")},
	{hx::fsFloat,(int)offsetof(Ship_obj,_keyUpElapsed),HX_HCSTRING("_keyUpElapsed","\x61","\xe8","\xaf","\xb0")},
	{hx::fsFloat,(int)offsetof(Ship_obj,_keyDownElapsed),HX_HCSTRING("_keyDownElapsed","\x3a","\x85","\x93","\x05")},
	{hx::fsFloat,(int)offsetof(Ship_obj,_keyLeftElapsed),HX_HCSTRING("_keyLeftElapsed","\x35","\xe4","\xc4","\xde")},
	{hx::fsFloat,(int)offsetof(Ship_obj,_keyRightElapsed),HX_HCSTRING("_keyRightElapsed","\x80","\xb2","\xe9","\x63")},
	{hx::fsFloat,(int)offsetof(Ship_obj,_keyMouseElapsed),HX_HCSTRING("_keyMouseElapsed","\x57","\x73","\xe0","\x5a")},
	{hx::fsFloat,(int)offsetof(Ship_obj,_aiMovementDelay),HX_HCSTRING("_aiMovementDelay","\x4d","\xe4","\xbe","\x03")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Ship_obj,damageText),HX_HCSTRING("damageText","\xbc","\xec","\xb9","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("weapons","\x17","\x6a","\xc0","\xda"),
	HX_HCSTRING("movingSpeed","\x19","\x12","\x87","\x11"),
	HX_HCSTRING("isPlayer","\xeb","\x86","\x22","\x90"),
	HX_HCSTRING("isEnemy","\xfe","\xb5","\x00","\x0d"),
	HX_HCSTRING("isBoss","\xb7","\x4c","\x82","\x5e"),
	HX_HCSTRING("isDamagable","\x86","\xb6","\xda","\xfc"),
	HX_HCSTRING("maxHealth","\x60","\x3a","\x91","\x2c"),
	HX_HCSTRING("playerHud","\xd6","\xaf","\xc0","\x00"),
	HX_HCSTRING("enemyHealthBar","\x2f","\xcf","\xe9","\x5d"),
	HX_HCSTRING("_keyUp","\x1b","\x01","\xe6","\xda"),
	HX_HCSTRING("_keyDown","\x22","\xc3","\xff","\xd5"),
	HX_HCSTRING("_keyLeft","\xc7","\xd2","\x41","\xdb"),
	HX_HCSTRING("_keyRight","\x1c","\xa9","\x63","\x75"),
	HX_HCSTRING("_keyShoot","\x1f","\x1f","\x27","\x08"),
	HX_HCSTRING("_keyUpElapsed","\x61","\xe8","\xaf","\xb0"),
	HX_HCSTRING("_keyDownElapsed","\x3a","\x85","\x93","\x05"),
	HX_HCSTRING("_keyLeftElapsed","\x35","\xe4","\xc4","\xde"),
	HX_HCSTRING("_keyRightElapsed","\x80","\xb2","\xe9","\x63"),
	HX_HCSTRING("_keyMouseElapsed","\x57","\x73","\xe0","\x5a"),
	HX_HCSTRING("_aiMovementDelay","\x4d","\xe4","\xbe","\x03"),
	HX_HCSTRING("damageText","\xbc","\xec","\xb9","\xb4"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("movements","\x64","\x04","\x5d","\x30"),
	HX_HCSTRING("hit","\x53","\x46","\x4f","\x00"),
	HX_HCSTRING("ai","\xe8","\x54","\x00","\x00"),
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ship_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ship_obj::__mClass,"__mClass");
};

#endif

hx::Class Ship_obj::__mClass;

void Ship_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Ship","\xdc","\xfb","\x2b","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Ship_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Ship_obj >;
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

