#include <hxcpp.h>

#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_BulletProperties
#include <BulletProperties.h>
#endif
#ifndef INCLUDED_ClsStarField2D
#include <ClsStarField2D.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Ship
#include <Ship.h>
#endif
#ifndef INCLUDED_Weapon
#include <Weapon.h>
#endif
#ifndef INCLUDED_WeaponHost
#include <WeaponHost.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED__StarField_StarField
#include <_StarField/StarField.h>
#endif
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
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_store_BulletStore
#include <store/BulletStore.h>
#endif
#ifndef INCLUDED_util_DamageText
#include <util/DamageText.h>
#endif
#ifndef INCLUDED_util_EnemyHealthBar
#include <util/EnemyHealthBar.h>
#endif
#ifndef INCLUDED_util_FPS
#include <util/FPS.h>
#endif
#ifndef INCLUDED_util_PlayerHUD
#include <util/PlayerHUD.h>
#endif

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",37,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(61)
	this->_ticks = ((Float)0);
	HX_STACK_LINE(58)
	this->_seconds = ((Float)0);
	HX_STACK_LINE(56)
	this->_framesUntilHeavyProcess = (int)2;
	HX_STACK_LINE(55)
	this->FramesPerHeavyProcess = (int)2;
	HX_STACK_LINE(53)
	this->_sortableGroup = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(52)
	this->_enemyBarGroup = ::flixel::group::FlxGroup_obj::__new(null());
	HX_STACK_LINE(51)
	this->_enemyDamageGroup = ::flixel::group::FlxGroup_obj::__new(null());
	HX_STACK_LINE(50)
	this->_enemyBulletParticleGroup = ::flixel::group::FlxGroup_obj::__new(null());
	HX_STACK_LINE(49)
	this->_enemyBulletGroup = ::flixel::group::FlxGroup_obj::__new(null());
	HX_STACK_LINE(48)
	this->_enemyGroup = ::flixel::group::FlxGroup_obj::__new(null());
	HX_STACK_LINE(47)
	this->_playerHUDGroup = ::flixel::group::FlxGroup_obj::__new(null());
	HX_STACK_LINE(46)
	this->_playerDamageGroup = ::flixel::group::FlxGroup_obj::__new(null());
	HX_STACK_LINE(45)
	this->_playerBulletParticleGroup = ::flixel::group::FlxGroup_obj::__new(null());
	HX_STACK_LINE(44)
	this->_playerBulletGroup = ::flixel::group::FlxGroup_obj::__new(null());
	HX_STACK_LINE(43)
	this->_playerGroup = ::flixel::group::FlxGroup_obj::__new(null());
	HX_STACK_LINE(37)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	super::__construct(tmp);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",63,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->super::create();
		HX_STACK_LINE(66)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		int tmp1 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(66)
			::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(66)
			::flixel::util::FlxPoint tmp5 = tmp4->set((int)0,(int)3);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(66)
			::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(66)
			point->_inPool = false;
			HX_STACK_LINE(66)
			tmp2 = point;
		}
		HX_STACK_LINE(66)
		::ClsStarField2D tmp3 = ::ClsStarField2D_obj::__new((int)0,(int)0,tmp,tmp1,(int)30,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		::ClsStarField2D _tmpStar = tmp3;		HX_STACK_VAR(_tmpStar,"_tmpStar");
		HX_STACK_LINE(67)
		_tmpStar->setStarSpeed((int)100,(int)200);
		HX_STACK_LINE(68)
		::ClsStarField2D tmp4 = _tmpStar;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		this->add(tmp4);
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(70)
			while((true)){
				HX_STACK_LINE(70)
				bool tmp5 = (_g < (int)1);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(70)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(70)
				if ((tmp6)){
					HX_STACK_LINE(70)
					break;
				}
				HX_STACK_LINE(70)
				int tmp7 = (_g)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(70)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(71)
				::Ship tmp8 = ::Ship_obj::__new((int)0,(int)0,HX_HCSTRING("assets/images/red.png","\xc1","\x56","\x57","\x8b"),true,false,false,(int)1000);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(71)
				::Ship ship = tmp8;		HX_STACK_VAR(ship,"ship");
				HX_STACK_LINE(72)
				int tmp9 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(72)
				Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(72)
				Float tmp11 = ship->get_width();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(72)
				Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(72)
				Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(72)
				ship->set_x(tmp13);
				HX_STACK_LINE(73)
				int tmp14 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				Float tmp15 = ship->get_height();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(73)
				Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(73)
				Float tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(73)
				ship->set_y(tmp17);
				HX_STACK_LINE(74)
				::Ship tmp18 = ship;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(74)
				::flixel::util::FlxPoint tmp19 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)16);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(74)
				::WeaponHost tmp20 = ::WeaponHost_obj::__new(HX_HCSTRING("Gun","\x60","\x46","\x36","\x00"),tmp18,HX_HCSTRING("assets/images/empty_host.png","\xc0","\x90","\xa5","\xd7"),tmp19,true);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(74)
				::WeaponHost weaponHost = tmp20;		HX_STACK_VAR(weaponHost,"weaponHost");
				HX_STACK_LINE(75)
				Dynamic tmp21 = ::Reflect_obj::field(hx::ClassOf< ::store::BulletStore >(),HX_HCSTRING("TurboBlaster","\x07","\xce","\x37","\xb4"));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(75)
				Dynamic tmp22 = ::Reflect_obj::callMethod(hx::ClassOf< ::store::BulletStore >(),tmp21,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(75)
				weaponHost->setWeaponBullet(tmp22);
				HX_STACK_LINE(76)
				::WeaponHost tmp23 = weaponHost;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(76)
				ship->weapons->add(tmp23);
				HX_STACK_LINE(77)
				::flixel::group::FlxGroup tmp24 = this->_playerGroup;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(77)
				::Ship tmp25 = ship;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(77)
				tmp24->add(tmp25);
				HX_STACK_LINE(78)
				::flixel::group::FlxGroup tmp26 = this->_playerHUDGroup;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(78)
				::util::PlayerHUD tmp27 = ship->playerHud;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(78)
				tmp26->add(tmp27);
				HX_STACK_LINE(79)
				::flixel::group::FlxTypedGroup tmp28 = this->_sortableGroup;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(79)
				::Ship tmp29 = ship;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(79)
				tmp28->add(tmp29);
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(80)
					Array< ::Dynamic > _g2 = ship->damageText;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(80)
					while((true)){
						HX_STACK_LINE(80)
						bool tmp30 = (_g1 < _g2->length);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(80)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(80)
						if ((tmp31)){
							HX_STACK_LINE(80)
							break;
						}
						HX_STACK_LINE(80)
						::util::DamageText tmp32 = _g2->__get(_g1).StaticCast< ::util::DamageText >();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(80)
						::util::DamageText txt = tmp32;		HX_STACK_VAR(txt,"txt");
						HX_STACK_LINE(80)
						++(_g1);
						HX_STACK_LINE(81)
						::flixel::group::FlxGroup tmp33 = this->_playerDamageGroup;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(81)
						::util::DamageText tmp34 = txt;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(81)
						tmp33->add(tmp34);
					}
				}
				HX_STACK_LINE(82)
				{
					HX_STACK_LINE(82)
					::_List::ListIterator tmp30 = ::_List::ListIterator_obj::__new(ship->weapons->h);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(82)
					::_List::ListIterator _g1 = tmp30;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(82)
					while((true)){
						HX_STACK_LINE(82)
						bool tmp31 = (_g1->head != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(82)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(82)
						if ((tmp32)){
							HX_STACK_LINE(82)
							break;
						}
						HX_STACK_LINE(82)
						Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(82)
						{
							HX_STACK_LINE(82)
							Dynamic tmp34 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(82)
							_g1->val = tmp34;
							HX_STACK_LINE(82)
							Dynamic tmp35 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(82)
							_g1->head = tmp35;
							HX_STACK_LINE(82)
							tmp33 = _g1->val;
						}
						HX_STACK_LINE(82)
						::WeaponHost w = ((::WeaponHost)(tmp33));		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(83)
						::flixel::group::FlxGroup tmp34 = this->_playerBulletGroup;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(83)
						::WeaponHost tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(83)
						tmp35 = hx::TCast< ::WeaponHost >::cast(w);
						HX_STACK_LINE(83)
						::flixel::group::FlxTypedGroup tmp36 = tmp35->weapon->group;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(83)
						tmp34->add(tmp36);
						HX_STACK_LINE(84)
						::flixel::group::FlxGroup tmp37 = this->_playerBulletParticleGroup;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(84)
						::WeaponHost tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(84)
						tmp38 = hx::TCast< ::WeaponHost >::cast(w);
						HX_STACK_LINE(84)
						::flixel::group::FlxTypedGroup tmp39 = tmp38->weapon->groupParticle;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(84)
						tmp37->add(tmp39);
					}
				}
				HX_STACK_LINE(86)
				{
					HX_STACK_LINE(86)
					::_List::ListIterator tmp30 = ::_List::ListIterator_obj::__new(ship->weapons->h);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(86)
					::_List::ListIterator _g1 = tmp30;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(86)
					while((true)){
						HX_STACK_LINE(86)
						bool tmp31 = (_g1->head != null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(86)
						bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(86)
						if ((tmp32)){
							HX_STACK_LINE(86)
							break;
						}
						HX_STACK_LINE(86)
						Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(86)
						{
							HX_STACK_LINE(86)
							Dynamic tmp34 = _g1->head->__GetItem((int)0);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(86)
							_g1->val = tmp34;
							HX_STACK_LINE(86)
							Dynamic tmp35 = _g1->head->__GetItem((int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(86)
							_g1->head = tmp35;
							HX_STACK_LINE(86)
							tmp33 = _g1->val;
						}
						HX_STACK_LINE(86)
						::WeaponHost w = ((::WeaponHost)(tmp33));		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(87)
						::flixel::group::FlxGroup tmp34 = this->_playerGroup;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(87)
						::WeaponHost tmp35;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(87)
						tmp35 = hx::TCast< ::WeaponHost >::cast(w);
						HX_STACK_LINE(87)
						tmp34->add(tmp35);
					}
				}
			}
		}
		HX_STACK_LINE(90)
		::Enemy tmp5 = ::Enemy_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(90)
		this->_enemies = tmp5;
		HX_STACK_LINE(91)
		::Enemy tmp6 = this->_enemies;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		tmp6->makeEnemy((int)5,HX_HCSTRING("Rhino","\xd4","\xce","\xe9","\x7b"));
		HX_STACK_LINE(92)
		::Enemy tmp7 = this->_enemies;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		tmp7->makeEnemy((int)5,HX_HCSTRING("Wolf","\xb2","\x28","\xd6","\x39"));
		HX_STACK_LINE(93)
		::Enemy tmp8 = this->_enemies;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		::flixel::group::FlxTypedGroupIterator tmp9 = ::flixel::group::FlxTypedGroupIterator_obj::__new(tmp8->group->members,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		for(::cpp::FastIterator_obj< ::Ship > *__it = ::cpp::CreateFastIterator< ::Ship >(tmp9);  __it->hasNext(); ){
			::Ship e = __it->next();
			{
				HX_STACK_LINE(94)
				::Ship tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(94)
				tmp10 = hx::TCast< ::Ship >::cast(e);
				HX_STACK_LINE(94)
				::Ship ship = tmp10;		HX_STACK_VAR(ship,"ship");
				HX_STACK_LINE(95)
				::flixel::group::FlxGroup tmp11 = this->_enemyGroup;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(95)
				::Ship tmp12 = ship;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(95)
				tmp11->add(tmp12);
				HX_STACK_LINE(96)
				::flixel::group::FlxTypedGroup tmp13 = this->_sortableGroup;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(96)
				::Ship tmp14 = ship;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(96)
				tmp13->add(tmp14);
				HX_STACK_LINE(97)
				{
					HX_STACK_LINE(97)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(97)
					Array< ::Dynamic > _g1 = ship->damageText;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(97)
					while((true)){
						HX_STACK_LINE(97)
						bool tmp15 = (_g < _g1->length);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(97)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(97)
						if ((tmp16)){
							HX_STACK_LINE(97)
							break;
						}
						HX_STACK_LINE(97)
						::util::DamageText tmp17 = _g1->__get(_g).StaticCast< ::util::DamageText >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(97)
						::util::DamageText txt = tmp17;		HX_STACK_VAR(txt,"txt");
						HX_STACK_LINE(97)
						++(_g);
						HX_STACK_LINE(98)
						::flixel::group::FlxGroup tmp18 = this->_enemyDamageGroup;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(98)
						::util::DamageText tmp19 = txt;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(98)
						tmp18->add(tmp19);
					}
				}
				HX_STACK_LINE(99)
				{
					HX_STACK_LINE(99)
					::_List::ListIterator tmp15 = ::_List::ListIterator_obj::__new(ship->weapons->h);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(99)
					::_List::ListIterator _g = tmp15;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(99)
					while((true)){
						HX_STACK_LINE(99)
						bool tmp16 = (_g->head != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(99)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(99)
						if ((tmp17)){
							HX_STACK_LINE(99)
							break;
						}
						HX_STACK_LINE(99)
						Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(99)
						{
							HX_STACK_LINE(99)
							Dynamic tmp19 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(99)
							_g->val = tmp19;
							HX_STACK_LINE(99)
							Dynamic tmp20 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(99)
							_g->head = tmp20;
							HX_STACK_LINE(99)
							tmp18 = _g->val;
						}
						HX_STACK_LINE(99)
						::WeaponHost w = ((::WeaponHost)(tmp18));		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(100)
						::flixel::group::FlxGroup tmp19 = this->_enemyBulletGroup;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(100)
						::WeaponHost tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(100)
						tmp20 = hx::TCast< ::WeaponHost >::cast(w);
						HX_STACK_LINE(100)
						::flixel::group::FlxTypedGroup tmp21 = tmp20->weapon->group;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(100)
						tmp19->add(tmp21);
						HX_STACK_LINE(101)
						::flixel::group::FlxGroup tmp22 = this->_enemyBulletParticleGroup;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(101)
						::WeaponHost tmp23;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(101)
						tmp23 = hx::TCast< ::WeaponHost >::cast(w);
						HX_STACK_LINE(101)
						::flixel::group::FlxTypedGroup tmp24 = tmp23->weapon->groupParticle;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(101)
						tmp22->add(tmp24);
					}
				}
				HX_STACK_LINE(103)
				{
					HX_STACK_LINE(103)
					::_List::ListIterator tmp15 = ::_List::ListIterator_obj::__new(ship->weapons->h);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(103)
					::_List::ListIterator _g = tmp15;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(103)
					while((true)){
						HX_STACK_LINE(103)
						bool tmp16 = (_g->head != null());		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(103)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(103)
						if ((tmp17)){
							HX_STACK_LINE(103)
							break;
						}
						HX_STACK_LINE(103)
						Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(103)
						{
							HX_STACK_LINE(103)
							Dynamic tmp19 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(103)
							_g->val = tmp19;
							HX_STACK_LINE(103)
							Dynamic tmp20 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(103)
							_g->head = tmp20;
							HX_STACK_LINE(103)
							tmp18 = _g->val;
						}
						HX_STACK_LINE(103)
						::WeaponHost w = ((::WeaponHost)(tmp18));		HX_STACK_VAR(w,"w");
						HX_STACK_LINE(104)
						::flixel::group::FlxGroup tmp19 = this->_enemyGroup;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(104)
						::WeaponHost tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(104)
						tmp20 = hx::TCast< ::WeaponHost >::cast(w);
						HX_STACK_LINE(104)
						tmp19->add(tmp20);
					}
				}
				HX_STACK_LINE(106)
				::flixel::group::FlxGroup tmp15 = this->_enemyBarGroup;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(106)
				::flixel::ui::FlxBar tmp16 = ship->enemyHealthBar->bar;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(106)
				tmp15->add(tmp16);
			}
;
		}
		HX_STACK_LINE(109)
		::flixel::group::FlxTypedGroup tmp10 = this->_sortableGroup;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(109)
		this->add(tmp10);
		HX_STACK_LINE(110)
		::flixel::group::FlxGroup tmp11 = this->_enemyGroup;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(110)
		this->add(tmp11);
		HX_STACK_LINE(111)
		::flixel::group::FlxGroup tmp12 = this->_playerGroup;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(111)
		this->add(tmp12);
		HX_STACK_LINE(112)
		::flixel::group::FlxGroup tmp13 = this->_enemyBulletGroup;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(112)
		this->add(tmp13);
		HX_STACK_LINE(113)
		::flixel::group::FlxGroup tmp14 = this->_playerBulletGroup;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(113)
		this->add(tmp14);
		HX_STACK_LINE(114)
		::flixel::group::FlxGroup tmp15 = this->_enemyBulletParticleGroup;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(114)
		this->add(tmp15);
		HX_STACK_LINE(115)
		::flixel::group::FlxGroup tmp16 = this->_playerBulletParticleGroup;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(115)
		this->add(tmp16);
		HX_STACK_LINE(116)
		::flixel::group::FlxGroup tmp17 = this->_enemyDamageGroup;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(116)
		this->add(tmp17);
		HX_STACK_LINE(117)
		::flixel::group::FlxGroup tmp18 = this->_playerDamageGroup;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(117)
		this->add(tmp18);
		HX_STACK_LINE(118)
		::flixel::group::FlxGroup tmp19 = this->_enemyBarGroup;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(118)
		this->add(tmp19);
		HX_STACK_LINE(119)
		::flixel::group::FlxGroup tmp20 = this->_playerHUDGroup;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(119)
		this->add(tmp20);
		HX_STACK_LINE(121)
		::util::FPS tmp21 = ::util::FPS_obj::__new((int)10,(int)10,(int)16777215);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(121)
		::util::FPS fps_mem = tmp21;		HX_STACK_VAR(fps_mem,"fps_mem");
		HX_STACK_LINE(122)
		::util::FPS tmp22 = fps_mem;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(122)
		this->add(tmp22);
		HX_STACK_LINE(124)
		Array< ::String > btnLabels = Array_obj< ::String >::__new().Add(HX_HCSTRING("Buy","\x26","\x7b","\x32","\x00")).Add(HX_HCSTRING("Sell","\xb2","\xb7","\x29","\x37")).Add(HX_HCSTRING("Upgrade","\x7c","\xdc","\x82","\x30")).Add(HX_HCSTRING("Tune","\x18","\x14","\xdf","\x37")).Add(HX_HCSTRING("Leave","\xd7","\xa4","\x80","\x05"));		HX_STACK_VAR(btnLabels,"btnLabels");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(125)
			while((true)){
				HX_STACK_LINE(125)
				bool tmp23 = (_g < (int)5);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(125)
				bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(125)
				if ((tmp24)){
					HX_STACK_LINE(125)
					break;
				}
				HX_STACK_LINE(125)
				int tmp25 = (_g)++;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(125)
				int i = tmp25;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(126)
				int tmp26 = ((int)72 * i);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(126)
				int tmp27 = ((int)100 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(126)
				::flixel::addons::ui::FlxUISpriteButton tmp28 = ::flixel::addons::ui::FlxUISpriteButton_obj::__new((int)100,tmp27,null(),null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(126)
				::flixel::addons::ui::FlxUISpriteButton myButton9Slice2 = tmp28;		HX_STACK_VAR(myButton9Slice2,"myButton9Slice2");
				HX_STACK_LINE(127)
				::String _graphic_sheet = HX_HCSTRING("assets/images/button-0001.png","\x6c","\xeb","\x84","\x4d");		HX_STACK_VAR(_graphic_sheet,"_graphic_sheet");
				HX_STACK_LINE(128)
				myButton9Slice2->loadGraphicSlice9(Array_obj< ::String >::__new().Add(_graphic_sheet),(int)260,(int)70,Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)16).Add((int)16).Add((int)32).Add((int)32)),(int)0,(int)-1,false,(int)48,(int)48,null());
				HX_STACK_LINE(129)
				::String tmp29 = btnLabels->__get(i);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(129)
				::flixel::text::FlxText tmp30 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)260,tmp29,null(),null());		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(129)
				::flixel::text::FlxText btnTxt = tmp30;		HX_STACK_VAR(btnTxt,"btnTxt");
				HX_STACK_LINE(130)
				btnTxt->setFormat(HX_HCSTRING("assets/fonts/space.ttf","\x27","\x85","\xd5","\x09"),(int)30,(int)16777215,HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),null(),null(),null());
				HX_STACK_LINE(131)
				btnTxt->antialiasing = true;
				HX_STACK_LINE(132)
				::flixel::text::FlxText tmp31 = btnTxt;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(132)
				myButton9Slice2->set_label(tmp31);
				HX_STACK_LINE(133)
				myButton9Slice2->setAllLabelOffsets((int)0,(int)14);
				HX_STACK_LINE(134)
				::flixel::addons::ui::FlxUISpriteButton tmp32 = myButton9Slice2;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(134)
				this->add(tmp32);
			}
		}
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",150,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(150)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",157,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(156)
		::MenuState _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(158)
		this->super::update();
		HX_STACK_LINE(160)
		(this->_framesUntilHeavyProcess)--;
		HX_STACK_LINE(161)
		int tmp = this->_framesUntilHeavyProcess;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		if ((tmp1)){
			HX_STACK_LINE(162)
			int tmp2 = this->FramesPerHeavyProcess;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			this->_framesUntilHeavyProcess = tmp2;
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(164)
				::flixel::group::FlxTypedGroup tmp3 = this->_sortableGroup;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(164)
				Dynamic tmp4 = this->sortByY_dyn();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(164)
				Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(164)
				{
					HX_STACK_LINE(164)
					Dynamic f = tmp4;		HX_STACK_VAR(f,"f");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_1,Dynamic,f)
					int __ArgCount() const { return 2; }
					int run(::Ship a2,::Ship a3){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","MenuState.hx",164,0xdfbcb22c)
						HX_STACK_ARG(a2,"a2")
						HX_STACK_ARG(a3,"a3")
						{
							HX_STACK_LINE(164)
							int tmp6 = (int)-1;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(164)
							::Ship tmp7 = a2;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(164)
							::Ship tmp8 = a3;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(164)
							int tmp9 = f(tmp6,tmp7,tmp8).Cast< int >();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(164)
							return tmp9;
						}
						return null();
					}
					HX_END_LOCAL_FUNC2(return)

					HX_STACK_LINE(164)
					tmp5 =  Dynamic(new _Function_4_1(f));
				}
				HX_STACK_LINE(164)
				tmp3->members->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp5);
			}
			HX_STACK_LINE(166)
			::flixel::group::FlxGroup tmp3 = this->_enemyGroup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			::flixel::group::FlxGroup tmp4 = this->_playerBulletGroup;		HX_STACK_VAR(tmp4,"tmp4");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 2; }
			Void run(::Ship victim,::Bullet hitBy){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","MenuState.hx",166,0xdfbcb22c)
				HX_STACK_ARG(victim,"victim")
				HX_STACK_ARG(hitBy,"hitBy")
				{
					HX_STACK_LINE(167)
					::Ship tmp5 = victim;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(167)
					int tmp6 = hitBy->hitObject(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(167)
					int damage = tmp6;		HX_STACK_VAR(damage,"damage");
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))


			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
			int __ArgCount() const { return 2; }
			bool run(::Ship victim,::Bullet hitBy){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","MenuState.hx",168,0xdfbcb22c)
				HX_STACK_ARG(victim,"victim")
				HX_STACK_ARG(hitBy,"hitBy")
				{
					HX_STACK_LINE(169)
					bool tmp5 = (victim == null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(169)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(169)
					bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(169)
					if ((tmp6)){
						HX_STACK_LINE(169)
						tmp7 = (hitBy == null());
					}
					else{
						HX_STACK_LINE(169)
						tmp7 = true;
					}
					HX_STACK_LINE(169)
					if ((tmp7)){
						HX_STACK_LINE(169)
						return false;
					}
					else{
						HX_STACK_LINE(170)
						::Ship tmp8 = victim;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(170)
						::Bullet tmp9 = hitBy;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(170)
						bool tmp10 = ::flixel::util::FlxCollision_obj::pixelPerfectCheck(tmp8,tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(170)
						return tmp10;
					}
					HX_STACK_LINE(169)
					return false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(166)
			::flixel::FlxG_obj::overlap(tmp3,tmp4, Dynamic(new _Function_2_1()), Dynamic(new _Function_2_2()));
			HX_STACK_LINE(173)
			::flixel::group::FlxGroup tmp5 = this->_playerGroup;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			::flixel::group::FlxGroup tmp6 = this->_enemyBulletGroup;		HX_STACK_VAR(tmp6,"tmp6");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_3)
			int __ArgCount() const { return 2; }
			Void run(::Ship victim,::Bullet hitBy){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","MenuState.hx",173,0xdfbcb22c)
				HX_STACK_ARG(victim,"victim")
				HX_STACK_ARG(hitBy,"hitBy")
				{
					HX_STACK_LINE(174)
					::Ship tmp7 = victim;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(174)
					int tmp8 = hitBy->hitObject(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(174)
					int damage = tmp8;		HX_STACK_VAR(damage,"damage");
					HX_STACK_LINE(175)
					::flixel::FlxCamera tmp9 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(175)
					tmp9->shake(((Float)0.01),((Float)0.1),null(),null(),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))


			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_4)
			int __ArgCount() const { return 2; }
			bool run(::Ship victim,::Bullet hitBy){
				HX_STACK_FRAME("*","_Function_2_4",0x5201af7b,"*._Function_2_4","MenuState.hx",176,0xdfbcb22c)
				HX_STACK_ARG(victim,"victim")
				HX_STACK_ARG(hitBy,"hitBy")
				{
					HX_STACK_LINE(177)
					bool tmp7 = (victim == null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(177)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(177)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(177)
					if ((tmp8)){
						HX_STACK_LINE(177)
						tmp9 = (hitBy == null());
					}
					else{
						HX_STACK_LINE(177)
						tmp9 = true;
					}
					HX_STACK_LINE(177)
					if ((tmp9)){
						HX_STACK_LINE(177)
						return false;
					}
					else{
						HX_STACK_LINE(178)
						::Ship tmp10 = victim;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(178)
						::Bullet tmp11 = hitBy;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(178)
						bool tmp12 = ::flixel::util::FlxCollision_obj::pixelPerfectCheck(tmp10,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(178)
						return tmp12;
					}
					HX_STACK_LINE(177)
					return false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_STACK_LINE(173)
			::flixel::FlxG_obj::overlap(tmp5,tmp6, Dynamic(new _Function_2_3()), Dynamic(new _Function_2_4()));
		}
		HX_STACK_LINE(182)
		Float tmp2 = this->_ticks;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		bool tmp3 = (tmp2 <= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		if ((tmp3)){
			HX_STACK_LINE(183)
			this->_ticks = ((Float).25);
		}
		HX_STACK_LINE(185)
		Float tmp4 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		hx::SubEq(this->_ticks,tmp4);
		HX_STACK_LINE(187)
		::flixel::group::FlxGroup tmp5 = this->_playerGroup;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(187)
		::flixel::group::FlxGroup tmp6 = this->_enemyGroup;		HX_STACK_VAR(tmp6,"tmp6");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::MenuState,_g)
		int __ArgCount() const { return 2; }
		Void run(::Ship player,::Ship enemy){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","MenuState.hx",187,0xdfbcb22c)
			HX_STACK_ARG(player,"player")
			HX_STACK_ARG(enemy,"enemy")
			{
				HX_STACK_LINE(188)
				bool tmp7 = (_g->_ticks <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(188)
				if ((tmp7)){
					HX_STACK_LINE(189)
					bool tmp8 = player->isDamagable;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(189)
					if ((tmp8)){
						HX_STACK_LINE(189)
						player->hit((int)1,false);
					}
					HX_STACK_LINE(190)
					bool tmp9 = enemy->isDamagable;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(190)
					if ((tmp9)){
						HX_STACK_LINE(190)
						enemy->hit((int)1,false);
					}
					HX_STACK_LINE(191)
					::flixel::FlxCamera tmp10 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(191)
					tmp10->shake(((Float)0.01),((Float)0.1),null(),null(),null());
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))


		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		int __ArgCount() const { return 2; }
		bool run(::Ship player,::Ship enemy){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","MenuState.hx",193,0xdfbcb22c)
			HX_STACK_ARG(player,"player")
			HX_STACK_ARG(enemy,"enemy")
			{
				HX_STACK_LINE(194)
				bool tmp7 = (player == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(194)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				if ((tmp8)){
					HX_STACK_LINE(194)
					tmp9 = (enemy == null());
				}
				else{
					HX_STACK_LINE(194)
					tmp9 = true;
				}
				HX_STACK_LINE(194)
				if ((tmp9)){
					HX_STACK_LINE(194)
					return false;
				}
				else{
					HX_STACK_LINE(195)
					::Ship tmp10 = player;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(195)
					::Ship tmp11 = enemy;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(195)
					bool tmp12 = ::flixel::util::FlxCollision_obj::pixelPerfectCheck(tmp10,tmp11,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(195)
					return tmp12;
				}
				HX_STACK_LINE(194)
				return false;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(187)
		::flixel::FlxG_obj::overlap(tmp5,tmp6, Dynamic(new _Function_1_1(_g)), Dynamic(new _Function_1_2()));
		HX_STACK_LINE(198)
		Float tmp7 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(198)
		bool tmp8 = (tmp7 < (int)5);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		if ((tmp8)){
			HX_STACK_LINE(199)
			::Enemy tmp9 = this->_enemies;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(199)
			int tmp10 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(199)
			Float tmp11 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(199)
			tmp9->spawn(tmp11,(int)0);
		}
	}
return null();
}


int MenuState_obj::sortByY( int order,::flixel::FlxObject o1,::flixel::FlxObject o2){
	HX_STACK_FRAME("MenuState","sortByY",0xd5752948,"MenuState.sortByY","MenuState.hx",204,0xdfbcb22c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(order,"order")
	HX_STACK_ARG(o1,"o1")
	HX_STACK_ARG(o2,"o2")
	HX_STACK_LINE(205)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	{
		HX_STACK_LINE(205)
		Float tmp1 = o1->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		Float tmp2 = o1->get_height();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		Float Value1 = tmp3;		HX_STACK_VAR(Value1,"Value1");
		HX_STACK_LINE(205)
		Float tmp4 = o2->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		Float tmp5 = o2->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(205)
		Float Value2 = tmp6;		HX_STACK_VAR(Value2,"Value2");
		HX_STACK_LINE(205)
		int result = (int)0;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(205)
		bool tmp7 = (Value1 < Value2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(205)
		if ((tmp7)){
			HX_STACK_LINE(205)
			result = order;
		}
		else{
			HX_STACK_LINE(205)
			bool tmp8 = (Value1 > Value2);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(205)
			if ((tmp8)){
				HX_STACK_LINE(205)
				int tmp9 = order;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(205)
				int tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(205)
				result = tmp10;
			}
		}
		HX_STACK_LINE(205)
		tmp = result;
	}
	HX_STACK_LINE(205)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(MenuState_obj,sortByY,return )


MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(_playerGroup,"_playerGroup");
	HX_MARK_MEMBER_NAME(_playerBulletGroup,"_playerBulletGroup");
	HX_MARK_MEMBER_NAME(_playerBulletParticleGroup,"_playerBulletParticleGroup");
	HX_MARK_MEMBER_NAME(_playerDamageGroup,"_playerDamageGroup");
	HX_MARK_MEMBER_NAME(_playerHUDGroup,"_playerHUDGroup");
	HX_MARK_MEMBER_NAME(_enemyGroup,"_enemyGroup");
	HX_MARK_MEMBER_NAME(_enemyBulletGroup,"_enemyBulletGroup");
	HX_MARK_MEMBER_NAME(_enemyBulletParticleGroup,"_enemyBulletParticleGroup");
	HX_MARK_MEMBER_NAME(_enemyDamageGroup,"_enemyDamageGroup");
	HX_MARK_MEMBER_NAME(_enemyBarGroup,"_enemyBarGroup");
	HX_MARK_MEMBER_NAME(_sortableGroup,"_sortableGroup");
	HX_MARK_MEMBER_NAME(FramesPerHeavyProcess,"FramesPerHeavyProcess");
	HX_MARK_MEMBER_NAME(_framesUntilHeavyProcess,"_framesUntilHeavyProcess");
	HX_MARK_MEMBER_NAME(_seconds,"_seconds");
	HX_MARK_MEMBER_NAME(_enemies,"_enemies");
	HX_MARK_MEMBER_NAME(_ticks,"_ticks");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_playerGroup,"_playerGroup");
	HX_VISIT_MEMBER_NAME(_playerBulletGroup,"_playerBulletGroup");
	HX_VISIT_MEMBER_NAME(_playerBulletParticleGroup,"_playerBulletParticleGroup");
	HX_VISIT_MEMBER_NAME(_playerDamageGroup,"_playerDamageGroup");
	HX_VISIT_MEMBER_NAME(_playerHUDGroup,"_playerHUDGroup");
	HX_VISIT_MEMBER_NAME(_enemyGroup,"_enemyGroup");
	HX_VISIT_MEMBER_NAME(_enemyBulletGroup,"_enemyBulletGroup");
	HX_VISIT_MEMBER_NAME(_enemyBulletParticleGroup,"_enemyBulletParticleGroup");
	HX_VISIT_MEMBER_NAME(_enemyDamageGroup,"_enemyDamageGroup");
	HX_VISIT_MEMBER_NAME(_enemyBarGroup,"_enemyBarGroup");
	HX_VISIT_MEMBER_NAME(_sortableGroup,"_sortableGroup");
	HX_VISIT_MEMBER_NAME(FramesPerHeavyProcess,"FramesPerHeavyProcess");
	HX_VISIT_MEMBER_NAME(_framesUntilHeavyProcess,"_framesUntilHeavyProcess");
	HX_VISIT_MEMBER_NAME(_seconds,"_seconds");
	HX_VISIT_MEMBER_NAME(_enemies,"_enemies");
	HX_VISIT_MEMBER_NAME(_ticks,"_ticks");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_ticks") ) { return _ticks; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"sortByY") ) { return sortByY_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_seconds") ) { return _seconds; }
		if (HX_FIELD_EQ(inName,"_enemies") ) { return _enemies; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_enemyGroup") ) { return _enemyGroup; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_playerGroup") ) { return _playerGroup; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_enemyBarGroup") ) { return _enemyBarGroup; }
		if (HX_FIELD_EQ(inName,"_sortableGroup") ) { return _sortableGroup; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_playerHUDGroup") ) { return _playerHUDGroup; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_enemyBulletGroup") ) { return _enemyBulletGroup; }
		if (HX_FIELD_EQ(inName,"_enemyDamageGroup") ) { return _enemyDamageGroup; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_playerBulletGroup") ) { return _playerBulletGroup; }
		if (HX_FIELD_EQ(inName,"_playerDamageGroup") ) { return _playerDamageGroup; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FramesPerHeavyProcess") ) { return FramesPerHeavyProcess; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_framesUntilHeavyProcess") ) { return _framesUntilHeavyProcess; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_enemyBulletParticleGroup") ) { return _enemyBulletParticleGroup; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_playerBulletParticleGroup") ) { return _playerBulletParticleGroup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_ticks") ) { _ticks=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_seconds") ) { _seconds=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enemies") ) { _enemies=inValue.Cast< ::Enemy >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_enemyGroup") ) { _enemyGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_playerGroup") ) { _playerGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_enemyBarGroup") ) { _enemyBarGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sortableGroup") ) { _sortableGroup=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_playerHUDGroup") ) { _playerHUDGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_enemyBulletGroup") ) { _enemyBulletGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enemyDamageGroup") ) { _enemyDamageGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_playerBulletGroup") ) { _playerBulletGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_playerDamageGroup") ) { _playerDamageGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FramesPerHeavyProcess") ) { FramesPerHeavyProcess=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_framesUntilHeavyProcess") ) { _framesUntilHeavyProcess=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_enemyBulletParticleGroup") ) { _enemyBulletParticleGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"_playerBulletParticleGroup") ) { _playerBulletParticleGroup=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_playerGroup","\x1f","\x06","\xdd","\x06"));
	outFields->push(HX_HCSTRING("_playerBulletGroup","\x7d","\xdc","\x87","\x9a"));
	outFields->push(HX_HCSTRING("_playerBulletParticleGroup","\x57","\xfe","\x26","\xbc"));
	outFields->push(HX_HCSTRING("_playerDamageGroup","\x30","\x5b","\x0a","\x48"));
	outFields->push(HX_HCSTRING("_playerHUDGroup","\x28","\x30","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("_enemyGroup","\xf6","\x98","\x81","\x27"));
	outFields->push(HX_HCSTRING("_enemyBulletGroup","\x94","\xaa","\x6c","\xf8"));
	outFields->push(HX_HCSTRING("_enemyBulletParticleGroup","\x6e","\x3b","\x3a","\xd4"));
	outFields->push(HX_HCSTRING("_enemyDamageGroup","\x47","\x29","\xef","\xa5"));
	outFields->push(HX_HCSTRING("_enemyBarGroup","\x15","\x3b","\x89","\xb1"));
	outFields->push(HX_HCSTRING("_sortableGroup","\x68","\x14","\x99","\x87"));
	outFields->push(HX_HCSTRING("FramesPerHeavyProcess","\x7f","\x71","\x49","\xb2"));
	outFields->push(HX_HCSTRING("_framesUntilHeavyProcess","\xe1","\x20","\x09","\x24"));
	outFields->push(HX_HCSTRING("_seconds","\x00","\x10","\x46","\x94"));
	outFields->push(HX_HCSTRING("_enemies","\x27","\xc2","\xc6","\x0c"));
	outFields->push(HX_HCSTRING("_ticks","\xb7","\x75","\x15","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(MenuState_obj,_playerGroup),HX_HCSTRING("_playerGroup","\x1f","\x06","\xdd","\x06")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(MenuState_obj,_playerBulletGroup),HX_HCSTRING("_playerBulletGroup","\x7d","\xdc","\x87","\x9a")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(MenuState_obj,_playerBulletParticleGroup),HX_HCSTRING("_playerBulletParticleGroup","\x57","\xfe","\x26","\xbc")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(MenuState_obj,_playerDamageGroup),HX_HCSTRING("_playerDamageGroup","\x30","\x5b","\x0a","\x48")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(MenuState_obj,_playerHUDGroup),HX_HCSTRING("_playerHUDGroup","\x28","\x30","\x2c","\xc4")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(MenuState_obj,_enemyGroup),HX_HCSTRING("_enemyGroup","\xf6","\x98","\x81","\x27")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(MenuState_obj,_enemyBulletGroup),HX_HCSTRING("_enemyBulletGroup","\x94","\xaa","\x6c","\xf8")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(MenuState_obj,_enemyBulletParticleGroup),HX_HCSTRING("_enemyBulletParticleGroup","\x6e","\x3b","\x3a","\xd4")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(MenuState_obj,_enemyDamageGroup),HX_HCSTRING("_enemyDamageGroup","\x47","\x29","\xef","\xa5")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(MenuState_obj,_enemyBarGroup),HX_HCSTRING("_enemyBarGroup","\x15","\x3b","\x89","\xb1")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(MenuState_obj,_sortableGroup),HX_HCSTRING("_sortableGroup","\x68","\x14","\x99","\x87")},
	{hx::fsInt,(int)offsetof(MenuState_obj,FramesPerHeavyProcess),HX_HCSTRING("FramesPerHeavyProcess","\x7f","\x71","\x49","\xb2")},
	{hx::fsInt,(int)offsetof(MenuState_obj,_framesUntilHeavyProcess),HX_HCSTRING("_framesUntilHeavyProcess","\xe1","\x20","\x09","\x24")},
	{hx::fsFloat,(int)offsetof(MenuState_obj,_seconds),HX_HCSTRING("_seconds","\x00","\x10","\x46","\x94")},
	{hx::fsObject /*::Enemy*/ ,(int)offsetof(MenuState_obj,_enemies),HX_HCSTRING("_enemies","\x27","\xc2","\xc6","\x0c")},
	{hx::fsFloat,(int)offsetof(MenuState_obj,_ticks),HX_HCSTRING("_ticks","\xb7","\x75","\x15","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_playerGroup","\x1f","\x06","\xdd","\x06"),
	HX_HCSTRING("_playerBulletGroup","\x7d","\xdc","\x87","\x9a"),
	HX_HCSTRING("_playerBulletParticleGroup","\x57","\xfe","\x26","\xbc"),
	HX_HCSTRING("_playerDamageGroup","\x30","\x5b","\x0a","\x48"),
	HX_HCSTRING("_playerHUDGroup","\x28","\x30","\x2c","\xc4"),
	HX_HCSTRING("_enemyGroup","\xf6","\x98","\x81","\x27"),
	HX_HCSTRING("_enemyBulletGroup","\x94","\xaa","\x6c","\xf8"),
	HX_HCSTRING("_enemyBulletParticleGroup","\x6e","\x3b","\x3a","\xd4"),
	HX_HCSTRING("_enemyDamageGroup","\x47","\x29","\xef","\xa5"),
	HX_HCSTRING("_enemyBarGroup","\x15","\x3b","\x89","\xb1"),
	HX_HCSTRING("_sortableGroup","\x68","\x14","\x99","\x87"),
	HX_HCSTRING("FramesPerHeavyProcess","\x7f","\x71","\x49","\xb2"),
	HX_HCSTRING("_framesUntilHeavyProcess","\xe1","\x20","\x09","\x24"),
	HX_HCSTRING("_seconds","\x00","\x10","\x46","\x94"),
	HX_HCSTRING("_enemies","\x27","\xc2","\xc6","\x0c"),
	HX_HCSTRING("_ticks","\xb7","\x75","\x15","\x0c"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("sortByY","\xe4","\xc5","\x4e","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &MenuState_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
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

