#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_BulletProperties
#include <BulletProperties.h>
#endif
#ifndef INCLUDED_Ship
#include <Ship.h>
#endif
#ifndef INCLUDED_ShotPattern
#include <ShotPattern.h>
#endif
#ifndef INCLUDED_Weapon
#include <Weapon.h>
#endif
#ifndef INCLUDED_WeaponHost
#include <WeaponHost.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void WeaponHost_obj::__construct(::String Name,::Ship ParentRef,Dynamic SimpleGraphic,::flixel::util::FlxPoint Offset,Dynamic __o_AutoFire)
{
HX_STACK_FRAME("WeaponHost","new",0xfef56776,"WeaponHost.new","WeaponHost.hx",12,0x3bb0b8ba)
HX_STACK_THIS(this)
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(ParentRef,"ParentRef")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
HX_STACK_ARG(Offset,"Offset")
HX_STACK_ARG(__o_AutoFire,"AutoFire")
Dynamic AutoFire = __o_AutoFire.Default(false);
{
	HX_STACK_LINE(19)
	this->_maxDamage = ((Float)1);
	HX_STACK_LINE(18)
	this->_minDamage = ((Float)1);
	HX_STACK_LINE(15)
	this->autoFire = false;
	HX_STACK_LINE(30)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(31)
	bool tmp = (SimpleGraphic != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	if ((tmp)){
		HX_STACK_LINE(31)
		Dynamic tmp1 = SimpleGraphic;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		this->loadGraphic(tmp1,null(),null(),null(),null(),null());
	}
	HX_STACK_LINE(32)
	bool tmp1 = (Offset != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	if ((tmp1)){
		HX_STACK_LINE(32)
		this->offset = Offset;
	}
	HX_STACK_LINE(33)
	bool tmp2 = ParentRef->isEnemy;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	if ((tmp2)){
		HX_STACK_LINE(33)
		::flixel::util::FlxPoint tmp3 = this->offset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		int tmp4 = (int)-1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		::flixel::util::FlxPoint tmp5 = this->offset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		Float tmp6 = tmp5->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		tmp3->set_y(tmp7);
	}
	HX_STACK_LINE(35)
	::Weapon tmp3 = ::Weapon_obj::__new(Name,hx::ObjectPtr<OBJ_>(this),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	this->weapon = tmp3;
	HX_STACK_LINE(36)
	this->_parent = ParentRef;
	HX_STACK_LINE(37)
	{
		HX_STACK_LINE(37)
		::WeaponHost _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		Float tmp4 = _g->angle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		::Ship tmp5 = this->_parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		Float tmp6 = tmp5->angle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		Float tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		_g->set_angle(tmp7);
	}
	HX_STACK_LINE(38)
	this->autoFire = AutoFire;
	HX_STACK_LINE(39)
	this->set_exists(false);
}
;
	return null();
}

//WeaponHost_obj::~WeaponHost_obj() { }

Dynamic WeaponHost_obj::__CreateEmpty() { return  new WeaponHost_obj; }
hx::ObjectPtr< WeaponHost_obj > WeaponHost_obj::__new(::String Name,::Ship ParentRef,Dynamic SimpleGraphic,::flixel::util::FlxPoint Offset,Dynamic __o_AutoFire)
{  hx::ObjectPtr< WeaponHost_obj > _result_ = new WeaponHost_obj();
	_result_->__construct(Name,ParentRef,SimpleGraphic,Offset,__o_AutoFire);
	return _result_;}

Dynamic WeaponHost_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeaponHost_obj > _result_ = new WeaponHost_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

::Ship WeaponHost_obj::getParent( ){
	HX_STACK_FRAME("WeaponHost","getParent",0x531999f6,"WeaponHost.getParent","WeaponHost.hx",42,0x3bb0b8ba)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::Ship tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(WeaponHost_obj,getParent,return )

Void WeaponHost_obj::setWeaponBullet( ::BulletProperties BulletProp){
{
		HX_STACK_FRAME("WeaponHost","setWeaponBullet",0xd537dd16,"WeaponHost.setWeaponBullet","WeaponHost.hx",46,0x3bb0b8ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(BulletProp,"BulletProp")
		HX_STACK_LINE(47)
		this->_bulletProp = BulletProp;
		HX_STACK_LINE(48)
		::Weapon tmp = this->weapon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		int tmp1 = BulletProp->fireRate;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		tmp->setFireRate(tmp1);
		HX_STACK_LINE(49)
		::Weapon tmp2 = this->weapon;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		int tmp3 = BulletProp->randomAngle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		int tmp4 = BulletProp->randomSpeed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		tmp2->setBulletRandomFactor(tmp3,tmp4,null(),null());
		HX_STACK_LINE(50)
		int tmp5 = BulletProp->shotPattern->length;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		int tmp6 = BulletProp->shotPattern->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		int tmp7 = BulletProp->speed;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		Float tmp8 = (Float(tmp6) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		int tmp9 = BulletProp->fireRate;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(50)
		Float tmp11 = (tmp10 * (int)1000000);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(50)
		int tmp12 = ::Math_obj::round(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(50)
		int tmp13 = (tmp5 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(50)
		int estimatedQuantity = tmp13;		HX_STACK_VAR(estimatedQuantity,"estimatedQuantity");
		HX_STACK_LINE(51)
		::Weapon tmp14 = this->weapon;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(51)
		int tmp15 = estimatedQuantity;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(51)
		::BulletProperties tmp16 = BulletProp;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(51)
		tmp14->makeBullet(tmp15,tmp16,true,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WeaponHost_obj,setWeaponBullet,(void))

Void WeaponHost_obj::setAngle( hx::Null< Float >  __o_Angle){
Float Angle = __o_Angle.Default(0);
	HX_STACK_FRAME("WeaponHost","setAngle",0x3a2ba5fb,"WeaponHost.setAngle","WeaponHost.hx",58,0x3bb0b8ba)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
{
		HX_STACK_LINE(59)
		Float tmp = Angle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		this->set_angle(tmp);
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::WeaponHost _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(60)
			Float tmp1 = _g->angle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(60)
			::Ship tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			Float tmp3 = tmp2->angle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			Float tmp4 = (tmp1 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(60)
			_g->set_angle(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(WeaponHost_obj,setAngle,(void))

Void WeaponHost_obj::hurt( Float Damage){
{
		HX_STACK_FRAME("WeaponHost","hurt",0x13d9f839,"WeaponHost.hurt","WeaponHost.hx",64,0x3bb0b8ba)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Damage,"Damage")
		HX_STACK_LINE(64)
		this->super::hurt((int)0);
	}
return null();
}


Void WeaponHost_obj::update( ){
{
		HX_STACK_FRAME("WeaponHost","update",0x80c700b3,"WeaponHost.update","WeaponHost.hx",67,0x3bb0b8ba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		::Ship tmp = this->_parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		bool tmp1 = tmp->exists;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		this->set_exists(tmp1);
		HX_STACK_LINE(71)
		::Ship tmp2 = this->_parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		Float tmp3 = tmp2->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		::Ship tmp4 = this->_parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		Float tmp5 = tmp4->get_width();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(71)
		Float tmp8 = this->get_width();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(71)
		Float tmp9 = (Float(tmp8) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(71)
		Float tmp10 = (tmp7 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(71)
		this->set_x(tmp10);
		HX_STACK_LINE(72)
		::Ship tmp11 = this->_parent;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(72)
		Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(72)
		Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(72)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(72)
		this->set_y(tmp14);
		HX_STACK_LINE(73)
		::Ship tmp15 = this->_parent;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(73)
		bool tmp16 = tmp15->isEnemy;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(73)
		if ((tmp16)){
			HX_STACK_LINE(74)
			::WeaponHost _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(74)
			Float tmp17 = _g->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(74)
			::Ship tmp18 = this->_parent;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(74)
			Float tmp19 = tmp18->get_height();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(74)
			Float tmp20 = this->get_height();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(74)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(74)
			Float tmp22 = (tmp17 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(74)
			_g->set_y(tmp22);
		}
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::WeaponHost _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			Float tmp17 = _g->angle;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(77)
			::BulletProperties tmp18 = this->_bulletProp;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(77)
			Float tmp19 = tmp18->rotation;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(77)
			Float tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(77)
			_g->set_angle(tmp20);
		}
		HX_STACK_LINE(79)
		::Weapon tmp17 = this->weapon;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(79)
		Float tmp18 = this->get_width();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(79)
		Float tmp19 = (Float(tmp18) / Float((int)2));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(79)
		::BulletProperties tmp20 = this->_bulletProp;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(79)
		int tmp21 = tmp20->frameWidth;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(79)
		Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(79)
		Float tmp23 = (tmp19 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(79)
		::flixel::util::FlxPoint tmp24 = this->offset;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(79)
		Float tmp25 = tmp24->x;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(79)
		Float tmp26 = (tmp23 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(79)
		int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(79)
		::flixel::util::FlxPoint tmp28 = this->offset;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(79)
		Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(79)
		Float tmp30 = this->get_height();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(79)
		Float tmp31 = (Float(tmp30) / Float((int)2));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(79)
		Float tmp32 = (tmp29 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(79)
		int tmp33 = ::Math_obj::round(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(79)
		int tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(79)
		tmp17->setFiringPosition((int)0,(int)0,tmp27,tmp34);
		HX_STACK_LINE(80)
		bool tmp35 = this->autoFire;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(80)
		if ((tmp35)){
			HX_STACK_LINE(80)
			::Weapon tmp36 = this->weapon;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(80)
			tmp36->runFire((int)5,null(),null(),null(),null());
		}
		HX_STACK_LINE(81)
		this->super::update();
	}
return null();
}


Void WeaponHost_obj::fire( ){
{
		HX_STACK_FRAME("WeaponHost","fire",0x127e6fe0,"WeaponHost.fire","WeaponHost.hx",84,0x3bb0b8ba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		::Weapon tmp = this->weapon;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		::BulletProperties tmp3 = this->_bulletProp;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		int tmp4 = tmp3->frameWidth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		::flixel::util::FlxPoint tmp7 = this->offset;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		Float tmp8 = tmp7->x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		Float tmp9 = (tmp6 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(85)
		::flixel::util::FlxPoint tmp11 = this->offset;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(85)
		Float tmp12 = tmp11->y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(85)
		Float tmp13 = this->get_height();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(85)
		Float tmp14 = (Float(tmp13) / Float((int)2));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(85)
		Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(85)
		int tmp16 = ::Math_obj::round(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(85)
		int tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(85)
		tmp->setFiringPosition((int)0,(int)0,tmp10,tmp17);
		HX_STACK_LINE(86)
		::Weapon tmp18 = this->weapon;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(86)
		tmp18->runFire((int)5,null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(WeaponHost_obj,fire,(void))


WeaponHost_obj::WeaponHost_obj()
{
}

void WeaponHost_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeaponHost);
	HX_MARK_MEMBER_NAME(weapon,"weapon");
	HX_MARK_MEMBER_NAME(autoFire,"autoFire");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_bulletProp,"_bulletProp");
	HX_MARK_MEMBER_NAME(_minDamage,"_minDamage");
	HX_MARK_MEMBER_NAME(_maxDamage,"_maxDamage");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WeaponHost_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(weapon,"weapon");
	HX_VISIT_MEMBER_NAME(autoFire,"autoFire");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_bulletProp,"_bulletProp");
	HX_VISIT_MEMBER_NAME(_minDamage,"_minDamage");
	HX_VISIT_MEMBER_NAME(_maxDamage,"_maxDamage");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic WeaponHost_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hurt") ) { return hurt_dyn(); }
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"weapon") ) { return weapon; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoFire") ) { return autoFire; }
		if (HX_FIELD_EQ(inName,"setAngle") ) { return setAngle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getParent") ) { return getParent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_minDamage") ) { return _minDamage; }
		if (HX_FIELD_EQ(inName,"_maxDamage") ) { return _maxDamage; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bulletProp") ) { return _bulletProp; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setWeaponBullet") ) { return setWeaponBullet_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WeaponHost_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"weapon") ) { weapon=inValue.Cast< ::Weapon >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::Ship >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoFire") ) { autoFire=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_minDamage") ) { _minDamage=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxDamage") ) { _maxDamage=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bulletProp") ) { _bulletProp=inValue.Cast< ::BulletProperties >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WeaponHost_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void WeaponHost_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("weapon","\xdc","\x96","\x63","\xfc"));
	outFields->push(HX_HCSTRING("autoFire","\xc5","\xc2","\xe1","\x26"));
	outFields->push(HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"));
	outFields->push(HX_HCSTRING("_bulletProp","\x24","\x9c","\x75","\xe5"));
	outFields->push(HX_HCSTRING("_minDamage","\x62","\x0b","\xcf","\xd2"));
	outFields->push(HX_HCSTRING("_maxDamage","\xf4","\x1d","\x12","\xa9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Weapon*/ ,(int)offsetof(WeaponHost_obj,weapon),HX_HCSTRING("weapon","\xdc","\x96","\x63","\xfc")},
	{hx::fsBool,(int)offsetof(WeaponHost_obj,autoFire),HX_HCSTRING("autoFire","\xc5","\xc2","\xe1","\x26")},
	{hx::fsObject /*::Ship*/ ,(int)offsetof(WeaponHost_obj,_parent),HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b")},
	{hx::fsObject /*::BulletProperties*/ ,(int)offsetof(WeaponHost_obj,_bulletProp),HX_HCSTRING("_bulletProp","\x24","\x9c","\x75","\xe5")},
	{hx::fsFloat,(int)offsetof(WeaponHost_obj,_minDamage),HX_HCSTRING("_minDamage","\x62","\x0b","\xcf","\xd2")},
	{hx::fsFloat,(int)offsetof(WeaponHost_obj,_maxDamage),HX_HCSTRING("_maxDamage","\xf4","\x1d","\x12","\xa9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("weapon","\xdc","\x96","\x63","\xfc"),
	HX_HCSTRING("autoFire","\xc5","\xc2","\xe1","\x26"),
	HX_HCSTRING("_parent","\xc9","\x16","\xf5","\x5b"),
	HX_HCSTRING("_bulletProp","\x24","\x9c","\x75","\xe5"),
	HX_HCSTRING("_minDamage","\x62","\x0b","\xcf","\xd2"),
	HX_HCSTRING("_maxDamage","\xf4","\x1d","\x12","\xa9"),
	HX_HCSTRING("getParent","\x60","\x8e","\xd4","\x69"),
	HX_HCSTRING("setWeaponBullet","\x00","\xfd","\x84","\x60"),
	HX_HCSTRING("setAngle","\xd1","\xac","\x16","\x31"),
	HX_HCSTRING("hurt","\x0f","\x5c","\x17","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeaponHost_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeaponHost_obj::__mClass,"__mClass");
};

#endif

hx::Class WeaponHost_obj::__mClass;

void WeaponHost_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("WeaponHost","\x84","\x34","\xab","\x57");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &WeaponHost_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeaponHost_obj >;
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

