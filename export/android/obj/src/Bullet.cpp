#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_BulletProperties
#include <BulletProperties.h>
#endif
#ifndef INCLUDED_Particle
#include <Particle.h>
#endif
#ifndef INCLUDED_Ship
#include <Ship.h>
#endif
#ifndef INCLUDED_Weapon
#include <Weapon.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAngle
#include <flixel/util/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxMath
#include <flixel/util/FlxMath.h>
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
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif

Void Bullet_obj::__construct(::Weapon Weapon,int WeaponID,::BulletProperties BulletProp)
{
HX_STACK_FRAME("Bullet","new",0xf3208054,"Bullet.new","Bullet.hx",25,0xb42ce59c)
HX_STACK_THIS(this)
HX_STACK_ARG(Weapon,"Weapon")
HX_STACK_ARG(WeaponID,"WeaponID")
HX_STACK_ARG(BulletProp,"BulletProp")
{
	HX_STACK_LINE(43)
	this->_damagable = true;
	HX_STACK_LINE(42)
	this->_bulletSpeed = (int)0;
	HX_STACK_LINE(41)
	this->_animated = false;
	HX_STACK_LINE(38)
	this->debrisSize = (int)3;
	HX_STACK_LINE(28)
	this->accelerates = false;
	HX_STACK_LINE(47)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(48)
	this->_weapon = Weapon;
	HX_STACK_LINE(49)
	this->ID = WeaponID;
	HX_STACK_LINE(50)
	this->bulletProperties = BulletProp;
	HX_STACK_LINE(52)
	this->set_exists(false);
}
;
	return null();
}

//Bullet_obj::~Bullet_obj() { }

Dynamic Bullet_obj::__CreateEmpty() { return  new Bullet_obj; }
hx::ObjectPtr< Bullet_obj > Bullet_obj::__new(::Weapon Weapon,int WeaponID,::BulletProperties BulletProp)
{  hx::ObjectPtr< Bullet_obj > _result_ = new Bullet_obj();
	_result_->__construct(Weapon,WeaponID,BulletProp);
	return _result_;}

Dynamic Bullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bullet_obj > _result_ = new Bullet_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Bullet_obj::addAnimation( ::String Name,Array< int > Frames,hx::Null< int >  __o_FrameRate,hx::Null< bool >  __o_Looped){
int FrameRate = __o_FrameRate.Default(0);
bool Looped = __o_Looped.Default(true);
	HX_STACK_FRAME("Bullet","addAnimation",0xcd28c22f,"Bullet.addAnimation","Bullet.hx",64,0xb42ce59c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_ARG(Frames,"Frames")
	HX_STACK_ARG(FrameRate,"FrameRate")
	HX_STACK_ARG(Looped,"Looped")
{
		HX_STACK_LINE(65)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::String tmp1 = Name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		int tmp2 = FrameRate;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		bool tmp3 = Looped;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		tmp->add(tmp1,Frames,tmp2,tmp3);
		HX_STACK_LINE(67)
		this->_animated = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Bullet_obj,addAnimation,(void))

Void Bullet_obj::fire( Float FromX,Float FromY,Float VelX,Float VelY){
{
		HX_STACK_FRAME("Bullet","fire",0xc4091942,"Bullet.fire","Bullet.hx",71,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(VelX,"VelX")
		HX_STACK_ARG(VelY,"VelY")
		HX_STACK_LINE(72)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		::Weapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(72)
		::Weapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(72)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(72)
		this->set_x(tmp7);
		HX_STACK_LINE(73)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(73)
		::Weapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(73)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(73)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(73)
		::Weapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(73)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(73)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(73)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(73)
		this->set_y(tmp15);
		HX_STACK_LINE(75)
		bool tmp16 = this->accelerates;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(75)
		if ((tmp16)){
			HX_STACK_LINE(77)
			::flixel::util::FlxPoint tmp17 = this->acceleration;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(77)
			int tmp18 = this->xAcceleration;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(77)
			::Weapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(77)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(77)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(77)
			::Weapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(77)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(77)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(77)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(77)
			tmp17->set_x(tmp25);
			HX_STACK_LINE(78)
			::flixel::util::FlxPoint tmp26 = this->acceleration;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(78)
			int tmp27 = this->yAcceleration;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(78)
			::Weapon tmp28 = this->_weapon;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(78)
			int tmp29 = tmp28->rndFactorSpeed;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(78)
			int tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(78)
			::Weapon tmp31 = this->_weapon;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(78)
			int tmp32 = tmp31->rndFactorSpeed;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(78)
			int tmp33 = ::flixel::util::FlxRandom_obj::intRanged(tmp30,tmp32,null());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(78)
			int tmp34 = (tmp27 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(78)
			tmp26->set_y(tmp34);
		}
		else{
			HX_STACK_LINE(82)
			::flixel::util::FlxPoint tmp17 = this->velocity;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(82)
			Float tmp18 = VelX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(82)
			::Weapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(82)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(82)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(82)
			::Weapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(82)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(82)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(82)
			Float tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(82)
			tmp17->set_x(tmp25);
			HX_STACK_LINE(83)
			::flixel::util::FlxPoint tmp26 = this->velocity;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(83)
			Float tmp27 = VelY;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(83)
			::Weapon tmp28 = this->_weapon;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(83)
			int tmp29 = tmp28->rndFactorSpeed;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(83)
			int tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(83)
			::Weapon tmp31 = this->_weapon;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(83)
			int tmp32 = tmp31->rndFactorSpeed;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(83)
			int tmp33 = ::flixel::util::FlxRandom_obj::intRanged(tmp30,tmp32,null());		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(83)
			Float tmp34 = (tmp27 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(83)
			tmp26->set_y(tmp34);
		}
		HX_STACK_LINE(86)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Bullet_obj,fire,(void))

Void Bullet_obj::fireAtMouse( Float FromX,Float FromY,int Speed,hx::Null< bool >  __o_RotateBulletTowards){
bool RotateBulletTowards = __o_RotateBulletTowards.Default(true);
	HX_STACK_FRAME("Bullet","fireAtMouse",0xfb28fb10,"Bullet.fireAtMouse","Bullet.hx",91,0xb42ce59c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(RotateBulletTowards,"RotateBulletTowards")
{
		HX_STACK_LINE(92)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(92)
		::Weapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::Weapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(92)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(92)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		this->set_x(tmp7);
		HX_STACK_LINE(93)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		::Weapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(93)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		::Weapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(93)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(93)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(93)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(93)
		this->set_y(tmp15);
		HX_STACK_LINE(95)
		bool tmp16 = this->accelerates;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(95)
		if ((tmp16)){
			HX_STACK_LINE(97)
			int tmp17 = Speed;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(97)
			::Weapon tmp18 = this->_weapon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(97)
			int tmp19 = tmp18->rndFactorSpeed;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(97)
			int tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(97)
			::Weapon tmp21 = this->_weapon;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(97)
			int tmp22 = tmp21->rndFactorSpeed;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(97)
			int tmp23 = ::flixel::util::FlxRandom_obj::intRanged(tmp20,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(97)
			int tmp24 = (tmp17 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(97)
			::flixel::util::FlxPoint tmp25 = this->maxVelocity;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(97)
			Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(97)
			int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(97)
			::flixel::util::FlxPoint tmp28 = this->maxVelocity;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(97)
			Float tmp29 = tmp28->y;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(97)
			int tmp30 = ::Math_obj::floor(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(97)
			::flixel::util::FlxVelocity_obj::accelerateTowardsMouse(hx::ObjectPtr<OBJ_>(this),tmp24,tmp27,tmp30);
		}
		else{
			HX_STACK_LINE(101)
			int tmp17 = Speed;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(101)
			::Weapon tmp18 = this->_weapon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(101)
			int tmp19 = tmp18->rndFactorSpeed;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(101)
			int tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(101)
			::Weapon tmp21 = this->_weapon;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(101)
			int tmp22 = tmp21->rndFactorSpeed;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(101)
			int tmp23 = ::flixel::util::FlxRandom_obj::intRanged(tmp20,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(101)
			int tmp24 = (tmp17 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(101)
			::flixel::util::FlxVelocity_obj::moveTowardsMouse(hx::ObjectPtr<OBJ_>(this),tmp24,null());
		}
		HX_STACK_LINE(104)
		bool tmp17 = RotateBulletTowards;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(104)
		if ((tmp17)){
			HX_STACK_LINE(106)
			::Weapon tmp18 = this->_weapon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(106)
			::flixel::FlxSprite tmp19 = tmp18->parent;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(106)
			Float tmp20 = ::flixel::util::FlxAngle_obj::angleBetweenMouse(tmp19,true);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(106)
			this->set_angle(tmp20);
		}
		HX_STACK_LINE(109)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Bullet_obj,fireAtMouse,(void))

Void Bullet_obj::fireAtTouch( Float FromX,Float FromY,::flixel::input::touch::FlxTouch Touch,int Speed,hx::Null< bool >  __o_RotateBulletTowards){
bool RotateBulletTowards = __o_RotateBulletTowards.Default(true);
	HX_STACK_FRAME("Bullet","fireAtTouch",0x02f6fcaa,"Bullet.fireAtTouch","Bullet.hx",115,0xb42ce59c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(FromX,"FromX")
	HX_STACK_ARG(FromY,"FromY")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(RotateBulletTowards,"RotateBulletTowards")
{
		HX_STACK_LINE(116)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		::Weapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		::Weapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(116)
		this->set_x(tmp7);
		HX_STACK_LINE(117)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(117)
		::Weapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(117)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(117)
		::Weapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(117)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(117)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(117)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(117)
		this->set_y(tmp15);
		HX_STACK_LINE(119)
		bool tmp16 = this->accelerates;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(119)
		if ((tmp16)){
			HX_STACK_LINE(121)
			::flixel::input::touch::FlxTouch tmp17 = Touch;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(121)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(121)
			::Weapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(121)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(121)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(121)
			::Weapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(121)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(121)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(121)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(121)
			::flixel::util::FlxPoint tmp26 = this->maxVelocity;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(121)
			Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(121)
			int tmp28 = ::Math_obj::floor(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(121)
			::flixel::util::FlxPoint tmp29 = this->maxVelocity;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(121)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(121)
			int tmp31 = ::Math_obj::floor(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(121)
			::flixel::util::FlxVelocity_obj::accelerateTowardsTouch(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,tmp28,tmp31);
		}
		else{
			HX_STACK_LINE(125)
			::flixel::input::touch::FlxTouch tmp17 = Touch;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(125)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(125)
			::Weapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(125)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(125)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(125)
			::Weapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(125)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(125)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(125)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(125)
			::flixel::util::FlxVelocity_obj::moveTowardsTouch(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,null());
		}
		HX_STACK_LINE(128)
		bool tmp17 = RotateBulletTowards;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(128)
		if ((tmp17)){
			HX_STACK_LINE(130)
			Float tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(130)
			{
				HX_STACK_LINE(130)
				::Weapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(130)
				::flixel::util::FlxPoint tmp20 = tmp19->parent->getScreenXY(null(),null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(130)
				::flixel::util::FlxPoint p = tmp20;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(130)
				Float tmp21 = (Touch->screenX - p->x);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(130)
				Float dx = tmp21;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(130)
				Float tmp22 = (Touch->screenY - p->y);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(130)
				Float dy = tmp22;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					Float tmp23 = dy;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(130)
					Float tmp24 = dx;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(130)
					Float tmp25 = ::Math_obj::atan2(tmp23,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(130)
					Float radians = tmp25;		HX_STACK_VAR(radians,"radians");
					HX_STACK_LINE(130)
					Float tmp26 = radians;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(130)
					Float tmp27 = ::Math_obj::PI;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(130)
					Float tmp28 = (Float((int)180) / Float(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(130)
					tmp18 = (tmp26 * tmp28);
				}
			}
			HX_STACK_LINE(130)
			this->set_angle(tmp18);
		}
		HX_STACK_LINE(133)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Bullet_obj,fireAtTouch,(void))

Void Bullet_obj::fireAtPosition( Float FromX,Float FromY,Float ToX,Float ToY,int Speed){
{
		HX_STACK_FRAME("Bullet","fireAtPosition",0x8812609e,"Bullet.fireAtPosition","Bullet.hx",138,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(ToX,"ToX")
		HX_STACK_ARG(ToY,"ToY")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(139)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		::Weapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(139)
		::Weapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(139)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(139)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(139)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(139)
		this->set_x(tmp7);
		HX_STACK_LINE(140)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		::Weapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(140)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(140)
		::Weapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(140)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(140)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(140)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(140)
		this->set_y(tmp15);
		HX_STACK_LINE(142)
		bool tmp16 = this->accelerates;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(142)
		if ((tmp16)){
			HX_STACK_LINE(144)
			::flixel::util::FlxPoint tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(144)
			{
				HX_STACK_LINE(144)
				::flixel::util::FlxPool tmp18 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(144)
				::flixel::util::FlxPoint tmp19 = tmp18->get();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(144)
				Float tmp20 = ToX;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(144)
				Float tmp21 = ToY;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(144)
				::flixel::util::FlxPoint tmp22 = tmp19->set(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(144)
				::flixel::util::FlxPoint point = tmp22;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(144)
				point->_inPool = false;
				HX_STACK_LINE(144)
				tmp17 = point;
			}
			HX_STACK_LINE(144)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(144)
			::Weapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(144)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(144)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(144)
			::Weapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(144)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(144)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(144)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(144)
			::flixel::util::FlxPoint tmp26 = this->maxVelocity;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(144)
			Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(144)
			int tmp28 = ::Math_obj::floor(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(144)
			::flixel::util::FlxPoint tmp29 = this->maxVelocity;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(144)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(144)
			int tmp31 = ::Math_obj::floor(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(144)
			::flixel::util::FlxVelocity_obj::accelerateTowardsPoint(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,tmp28,tmp31);
		}
		else{
			HX_STACK_LINE(148)
			::flixel::util::FlxPoint tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(148)
			{
				HX_STACK_LINE(148)
				::flixel::util::FlxPool tmp18 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(148)
				::flixel::util::FlxPoint tmp19 = tmp18->get();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(148)
				Float tmp20 = ToX;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(148)
				Float tmp21 = ToY;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(148)
				::flixel::util::FlxPoint tmp22 = tmp19->set(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(148)
				::flixel::util::FlxPoint point = tmp22;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(148)
				point->_inPool = false;
				HX_STACK_LINE(148)
				tmp17 = point;
			}
			HX_STACK_LINE(148)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(148)
			::Weapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(148)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(148)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(148)
			::Weapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(148)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(148)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(148)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(148)
			::flixel::util::FlxVelocity_obj::moveTowardsPoint(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,null());
		}
		HX_STACK_LINE(151)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Bullet_obj,fireAtPosition,(void))

Void Bullet_obj::fireAtTarget( Float FromX,Float FromY,::flixel::FlxSprite Target,int Speed){
{
		HX_STACK_FRAME("Bullet","fireAtTarget",0x83915c06,"Bullet.fireAtTarget","Bullet.hx",155,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(Target,"Target")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(156)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		::Weapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		::Weapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		this->set_x(tmp7);
		HX_STACK_LINE(157)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(157)
		::Weapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(157)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(157)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(157)
		::Weapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(157)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(157)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(157)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(157)
		this->set_y(tmp15);
		HX_STACK_LINE(159)
		bool tmp16 = this->accelerates;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(159)
		if ((tmp16)){
			HX_STACK_LINE(161)
			::flixel::FlxSprite tmp17 = Target;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(161)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(161)
			::Weapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(161)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(161)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(161)
			::Weapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(161)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(161)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(161)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(161)
			::flixel::util::FlxPoint tmp26 = this->maxVelocity;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(161)
			Float tmp27 = tmp26->x;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(161)
			int tmp28 = ::Math_obj::floor(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(161)
			::flixel::util::FlxPoint tmp29 = this->maxVelocity;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(161)
			Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(161)
			int tmp31 = ::Math_obj::floor(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(161)
			::flixel::util::FlxVelocity_obj::accelerateTowardsObject(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,tmp28,tmp31);
		}
		else{
			HX_STACK_LINE(165)
			::flixel::FlxSprite tmp17 = Target;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(165)
			int tmp18 = Speed;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(165)
			::Weapon tmp19 = this->_weapon;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(165)
			int tmp20 = tmp19->rndFactorSpeed;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(165)
			int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(165)
			::Weapon tmp22 = this->_weapon;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(165)
			int tmp23 = tmp22->rndFactorSpeed;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(165)
			int tmp24 = ::flixel::util::FlxRandom_obj::intRanged(tmp21,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(165)
			int tmp25 = (tmp18 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(165)
			::flixel::util::FlxVelocity_obj::moveTowardsObject(hx::ObjectPtr<OBJ_>(this),tmp17,tmp25,null());
		}
		HX_STACK_LINE(168)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Bullet_obj,fireAtTarget,(void))

Void Bullet_obj::fireFromAngle( Float FromX,Float FromY,int FireAngle,int Speed){
{
		HX_STACK_FRAME("Bullet","fireFromAngle",0x44fcbc67,"Bullet.fireFromAngle","Bullet.hx",172,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FromX,"FromX")
		HX_STACK_ARG(FromY,"FromY")
		HX_STACK_ARG(FireAngle,"FireAngle")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(173)
		Float tmp = FromX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		::Weapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		Float tmp2 = tmp1->rndFactorPosition->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(173)
		::Weapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		Float tmp5 = tmp4->rndFactorPosition->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(173)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(173)
		Float tmp7 = (tmp + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(173)
		this->set_x(tmp7);
		HX_STACK_LINE(174)
		Float tmp8 = FromY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(174)
		::Weapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(174)
		Float tmp10 = tmp9->rndFactorPosition->y;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(174)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(174)
		::Weapon tmp12 = this->_weapon;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(174)
		Float tmp13 = tmp12->rndFactorPosition->y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(174)
		Float tmp14 = ::flixel::util::FlxRandom_obj::floatRanged(tmp11,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(174)
		Float tmp15 = (tmp8 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(174)
		this->set_y(tmp15);
		HX_STACK_LINE(176)
		::flixel::util::FlxPoint tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			int tmp17 = FireAngle;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(176)
			::Weapon tmp18 = this->_weapon;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(176)
			int tmp19 = tmp18->rndFactorAngle;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(176)
			int tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(176)
			::Weapon tmp21 = this->_weapon;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(176)
			int tmp22 = tmp21->rndFactorAngle;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(176)
			int tmp23 = ::flixel::util::FlxRandom_obj::intRanged(tmp20,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(176)
			int tmp24 = (tmp17 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(176)
			Float Angle = tmp24;		HX_STACK_VAR(Angle,"Angle");
			HX_STACK_LINE(176)
			int tmp25 = Speed;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(176)
			::Weapon tmp26 = this->_weapon;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(176)
			int tmp27 = tmp26->rndFactorSpeed;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(176)
			int tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(176)
			::Weapon tmp29 = this->_weapon;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(176)
			int tmp30 = tmp29->rndFactorSpeed;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(176)
			int tmp31 = ::flixel::util::FlxRandom_obj::intRanged(tmp28,tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(176)
			int tmp32 = (tmp25 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(176)
			Float Speed1 = tmp32;		HX_STACK_VAR(Speed1,"Speed1");
			HX_STACK_LINE(176)
			Float tmp33 = Angle;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(176)
			Float tmp34 = ::Math_obj::PI;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(176)
			Float tmp35 = (Float(tmp34) / Float((int)180));		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(176)
			Float tmp36 = (tmp33 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(176)
			Float a = tmp36;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(176)
			::flixel::util::FlxPoint tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(176)
			{
				HX_STACK_LINE(176)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(176)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(176)
				::flixel::util::FlxPool tmp38 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(176)
				::flixel::util::FlxPoint tmp39 = tmp38->get();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(176)
				Float tmp40 = X;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(176)
				Float tmp41 = Y;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(176)
				::flixel::util::FlxPoint tmp42 = tmp39->set(tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(176)
				::flixel::util::FlxPoint point = tmp42;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(176)
				point->_inPool = false;
				HX_STACK_LINE(176)
				tmp37 = point;
			}
			HX_STACK_LINE(176)
			::flixel::util::FlxPoint result = tmp37;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(176)
			Float tmp38 = a;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(176)
			Float tmp39 = ::Math_obj::cos(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(176)
			Float tmp40 = Speed1;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(176)
			Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(176)
			result->set_x(tmp41);
			HX_STACK_LINE(176)
			Float tmp42 = a;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(176)
			Float tmp43 = ::Math_obj::sin(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(176)
			Float tmp44 = Speed1;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(176)
			Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(176)
			result->set_y(tmp45);
			HX_STACK_LINE(176)
			tmp16 = result;
		}
		HX_STACK_LINE(176)
		::flixel::util::FlxPoint newVelocity = tmp16;		HX_STACK_VAR(newVelocity,"newVelocity");
		HX_STACK_LINE(178)
		bool tmp17 = this->accelerates;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(178)
		if ((tmp17)){
			HX_STACK_LINE(180)
			::flixel::util::FlxPoint tmp18 = this->acceleration;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(180)
			Float tmp19 = newVelocity->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(180)
			tmp18->set_x(tmp19);
			HX_STACK_LINE(181)
			::flixel::util::FlxPoint tmp20 = this->acceleration;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(181)
			Float tmp21 = newVelocity->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(181)
			tmp20->set_y(tmp21);
		}
		else{
			HX_STACK_LINE(185)
			::flixel::util::FlxPoint tmp18 = this->velocity;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(185)
			Float tmp19 = newVelocity->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(185)
			tmp18->set_x(tmp19);
			HX_STACK_LINE(186)
			::flixel::util::FlxPoint tmp20 = this->velocity;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(186)
			Float tmp21 = newVelocity->y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(186)
			tmp20->set_y(tmp21);
		}
		HX_STACK_LINE(189)
		this->postFire();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Bullet_obj,fireFromAngle,(void))

Void Bullet_obj::postFire( ){
{
		HX_STACK_FRAME("Bullet","postFire",0x6ee82fc2,"Bullet.postFire","Bullet.hx",193,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		this->_damagable = true;
		HX_STACK_LINE(195)
		bool tmp = this->_animated;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		if ((tmp)){
			HX_STACK_LINE(197)
			::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(197)
			tmp1->play(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),null(),null());
		}
		HX_STACK_LINE(200)
		::Weapon tmp1 = this->_weapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		Float tmp2 = tmp1->bulletElasticity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		if ((tmp3)){
			HX_STACK_LINE(202)
			::Weapon tmp4 = this->_weapon;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			this->elasticity = tmp4->bulletElasticity;
		}
		HX_STACK_LINE(205)
		this->set_exists(true);
		HX_STACK_LINE(208)
		::flixel::util::FlxPoint tmp4 = this->last;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		Float tmp5 = this->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(208)
		tmp4->set_x(tmp5);
		HX_STACK_LINE(209)
		::flixel::util::FlxPoint tmp6 = this->last;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(209)
		Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(209)
		tmp6->set_y(tmp7);
		HX_STACK_LINE(211)
		::Weapon tmp8 = this->_weapon;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(211)
		Float tmp9 = tmp8->bulletLifeSpan;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(211)
		bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(211)
		if ((tmp10)){
			HX_STACK_LINE(213)
			::Weapon tmp11 = this->_weapon;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(213)
			Float tmp12 = tmp11->bulletLifeSpan;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(213)
			::Weapon tmp13 = this->_weapon;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(213)
			Float tmp14 = tmp13->rndFactorLifeSpan;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(213)
			Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(213)
			::Weapon tmp16 = this->_weapon;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(213)
			Float tmp17 = tmp16->rndFactorLifeSpan;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(213)
			Float tmp18 = ::flixel::util::FlxRandom_obj::floatRanged(tmp15,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(213)
			Float tmp19 = (tmp12 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(213)
			this->lifespan = tmp19;
		}
		HX_STACK_LINE(216)
		::Weapon tmp11 = this->_weapon;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(216)
		Dynamic tmp12 = tmp11->onFireCallback;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(216)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(216)
		if ((tmp13)){
			HX_STACK_LINE(218)
			::Weapon tmp14 = this->_weapon;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(218)
			tmp14->onFireCallback();
		}
		HX_STACK_LINE(222)
		::Weapon tmp14 = this->_weapon;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(222)
		::flixel::_system::FlxSound tmp15 = tmp14->onFireSound;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(222)
		bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(222)
		if ((tmp16)){
			HX_STACK_LINE(224)
			::Weapon tmp17 = this->_weapon;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(224)
			tmp17->onFireSound->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bullet_obj,postFire,(void))

Void Bullet_obj::update( ){
{
		HX_STACK_FRAME("Bullet","update",0xa9584695,"Bullet.update","Bullet.hx",230,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(231)
		Float tmp = this->lifespan;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(231)
		if ((tmp1)){
			HX_STACK_LINE(233)
			Float tmp2 = ::flixel::FlxG_obj::elapsed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(233)
			hx::SubEq(this->lifespan,tmp2);
			HX_STACK_LINE(235)
			Float tmp3 = this->lifespan;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(235)
			bool tmp4 = (tmp3 <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			if ((tmp4)){
				HX_STACK_LINE(237)
				this->kill();
			}
		}
		HX_STACK_LINE(241)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(241)
		int tmp3 = ::Math_obj::floor(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(241)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(241)
		int tmp5 = ::Math_obj::floor(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(241)
		::Weapon tmp6 = this->_weapon;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(241)
		::flixel::util::FlxRect tmp7 = tmp6->bounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(241)
		bool tmp8 = ::flixel::util::FlxMath_obj::pointInFlxRect(tmp3,tmp5,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(241)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(241)
		if ((tmp9)){
			HX_STACK_LINE(243)
			this->kill();
		}
		HX_STACK_LINE(246)
		this->super::update();
	}
return null();
}


int Bullet_obj::hitObject( ::Ship Victim){
	HX_STACK_FRAME("Bullet","hitObject",0x2bc05866,"Bullet.hitObject","Bullet.hx",249,0xb42ce59c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Victim,"Victim")
	HX_STACK_LINE(250)
	int damage = (int)0;		HX_STACK_VAR(damage,"damage");
	HX_STACK_LINE(251)
	bool tmp = this->_damagable;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	if ((tmp)){
		HX_STACK_LINE(251)
		tmp1 = Victim->isDamagable;
	}
	else{
		HX_STACK_LINE(251)
		tmp1 = false;
	}
	HX_STACK_LINE(251)
	if ((tmp1)){
		HX_STACK_LINE(252)
		::BulletProperties tmp2 = this->bulletProperties;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		Float tmp3 = tmp2->minDamage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		::BulletProperties tmp4 = this->bulletProperties;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		Float tmp5 = tmp4->maxDamage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		Float tmp6 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(252)
		int tmp7 = ::Math_obj::round(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(252)
		damage = tmp7;
		HX_STACK_LINE(253)
		int tmp8 = damage;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(253)
		Victim->hit(tmp8,null());
		HX_STACK_LINE(254)
		this->_damagable = false;
		HX_STACK_LINE(256)
		::Weapon tmp9 = this->_weapon;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(256)
		::Particle tmp10 = tmp9->getFreeParticle();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(256)
		::Particle particle = tmp10;		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(257)
		bool tmp11 = (particle != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(257)
		if ((tmp11)){
			HX_STACK_LINE(258)
			Float tmp12 = this->angle;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(258)
			int tmp13 = (int)-90;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(258)
			bool tmp14 = (tmp12 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(258)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(258)
			if ((tmp14)){
				HX_STACK_LINE(258)
				Float tmp16 = this->angle;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(258)
				Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(258)
				tmp15 = (tmp17 <= (int)90);
			}
			else{
				HX_STACK_LINE(258)
				tmp15 = false;
			}
			HX_STACK_LINE(258)
			if ((tmp15)){
				HX_STACK_LINE(259)
				Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(259)
				Float tmp17 = this->get_width();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(259)
				Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(259)
				Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(259)
				Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(259)
				particle->start(tmp19,tmp20);
			}
			else{
				HX_STACK_LINE(261)
				Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(261)
				Float tmp17 = this->get_width();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(261)
				Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(261)
				Float tmp19 = (tmp16 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(261)
				Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(261)
				Float tmp21 = this->get_height();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(261)
				Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(261)
				particle->start(tmp19,tmp22);
			}
		}
		HX_STACK_LINE(265)
		bool tmp12 = (Victim->health <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(265)
		if ((tmp12)){
			HX_STACK_LINE(266)
			::Weapon tmp13 = this->_weapon;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(266)
			::Particle tmp14 = tmp13->getFreeParticle();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(266)
			Float tmp15 = Victim->x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(266)
			Float tmp16 = Victim->get_width();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(266)
			Float tmp17 = (Float(tmp16) / Float((int)2));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(266)
			Float tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(266)
			Float tmp19 = Victim->y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(266)
			Float tmp20 = Victim->get_height();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(266)
			Float tmp21 = (Float(tmp20) / Float((int)2));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(266)
			Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(266)
			tmp14->start(tmp18,tmp22);
		}
	}
	HX_STACK_LINE(269)
	this->kill();
	HX_STACK_LINE(270)
	int tmp2 = damage;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(270)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Bullet_obj,hitObject,return )


Bullet_obj::Bullet_obj()
{
}

void Bullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bullet);
	HX_MARK_MEMBER_NAME(accelerates,"accelerates");
	HX_MARK_MEMBER_NAME(xAcceleration,"xAcceleration");
	HX_MARK_MEMBER_NAME(yAcceleration,"yAcceleration");
	HX_MARK_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_MARK_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_MARK_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(bulletProperties,"bulletProperties");
	HX_MARK_MEMBER_NAME(particleGraphic,"particleGraphic");
	HX_MARK_MEMBER_NAME(debrisSize,"debrisSize");
	HX_MARK_MEMBER_NAME(_weapon,"_weapon");
	HX_MARK_MEMBER_NAME(_animated,"_animated");
	HX_MARK_MEMBER_NAME(_bulletSpeed,"_bulletSpeed");
	HX_MARK_MEMBER_NAME(_damagable,"_damagable");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(accelerates,"accelerates");
	HX_VISIT_MEMBER_NAME(xAcceleration,"xAcceleration");
	HX_VISIT_MEMBER_NAME(yAcceleration,"yAcceleration");
	HX_VISIT_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_VISIT_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_VISIT_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(bulletProperties,"bulletProperties");
	HX_VISIT_MEMBER_NAME(particleGraphic,"particleGraphic");
	HX_VISIT_MEMBER_NAME(debrisSize,"debrisSize");
	HX_VISIT_MEMBER_NAME(_weapon,"_weapon");
	HX_VISIT_MEMBER_NAME(_animated,"_animated");
	HX_VISIT_MEMBER_NAME(_bulletSpeed,"_bulletSpeed");
	HX_VISIT_MEMBER_NAME(_damagable,"_damagable");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_weapon") ) { return _weapon; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		if (HX_FIELD_EQ(inName,"postFire") ) { return postFire_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animated") ) { return _animated; }
		if (HX_FIELD_EQ(inName,"hitObject") ) { return hitObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debrisSize") ) { return debrisSize; }
		if (HX_FIELD_EQ(inName,"_damagable") ) { return _damagable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accelerates") ) { return accelerates; }
		if (HX_FIELD_EQ(inName,"fireAtMouse") ) { return fireAtMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"fireAtTouch") ) { return fireAtTouch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bulletSpeed") ) { return _bulletSpeed; }
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"fireAtTarget") ) { return fireAtTarget_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"xAcceleration") ) { return xAcceleration; }
		if (HX_FIELD_EQ(inName,"yAcceleration") ) { return yAcceleration; }
		if (HX_FIELD_EQ(inName,"fireFromAngle") ) { return fireFromAngle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { return rndFactorAngle; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { return rndFactorSpeed; }
		if (HX_FIELD_EQ(inName,"fireAtPosition") ) { return fireAtPosition_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"particleGraphic") ) { return particleGraphic; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bulletProperties") ) { return bulletProperties; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { return rndFactorLifeSpan; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_weapon") ) { _weapon=inValue.Cast< ::Weapon >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_animated") ) { _animated=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debrisSize") ) { debrisSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_damagable") ) { _damagable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accelerates") ) { accelerates=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_bulletSpeed") ) { _bulletSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"xAcceleration") ) { xAcceleration=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAcceleration") ) { yAcceleration=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { rndFactorAngle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { rndFactorSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"particleGraphic") ) { particleGraphic=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bulletProperties") ) { bulletProperties=inValue.Cast< ::BulletProperties >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { rndFactorLifeSpan=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Bullet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Bullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("accelerates","\xf6","\x5c","\x93","\x26"));
	outFields->push(HX_HCSTRING("xAcceleration","\xd8","\x20","\xae","\x14"));
	outFields->push(HX_HCSTRING("yAcceleration","\x59","\x9e","\x6e","\x5a"));
	outFields->push(HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42"));
	outFields->push(HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1"));
	outFields->push(HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14"));
	outFields->push(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"));
	outFields->push(HX_HCSTRING("bulletProperties","\xd5","\xb8","\xd2","\x92"));
	outFields->push(HX_HCSTRING("particleGraphic","\x02","\x39","\x56","\xd4"));
	outFields->push(HX_HCSTRING("debrisSize","\x1c","\x38","\xee","\x29"));
	outFields->push(HX_HCSTRING("_weapon","\x7b","\xa8","\xda","\x6a"));
	outFields->push(HX_HCSTRING("_animated","\x02","\x6a","\x88","\xd0"));
	outFields->push(HX_HCSTRING("_bulletSpeed","\xe6","\xb3","\x4c","\x9a"));
	outFields->push(HX_HCSTRING("_damagable","\x91","\x7b","\xfc","\x79"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Bullet_obj,accelerates),HX_HCSTRING("accelerates","\xf6","\x5c","\x93","\x26")},
	{hx::fsInt,(int)offsetof(Bullet_obj,xAcceleration),HX_HCSTRING("xAcceleration","\xd8","\x20","\xae","\x14")},
	{hx::fsInt,(int)offsetof(Bullet_obj,yAcceleration),HX_HCSTRING("yAcceleration","\x59","\x9e","\x6e","\x5a")},
	{hx::fsInt,(int)offsetof(Bullet_obj,rndFactorAngle),HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42")},
	{hx::fsInt,(int)offsetof(Bullet_obj,rndFactorSpeed),HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1")},
	{hx::fsInt,(int)offsetof(Bullet_obj,rndFactorLifeSpan),HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14")},
	{hx::fsFloat,(int)offsetof(Bullet_obj,lifespan),HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")},
	{hx::fsObject /*::BulletProperties*/ ,(int)offsetof(Bullet_obj,bulletProperties),HX_HCSTRING("bulletProperties","\xd5","\xb8","\xd2","\x92")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bullet_obj,particleGraphic),HX_HCSTRING("particleGraphic","\x02","\x39","\x56","\xd4")},
	{hx::fsInt,(int)offsetof(Bullet_obj,debrisSize),HX_HCSTRING("debrisSize","\x1c","\x38","\xee","\x29")},
	{hx::fsObject /*::Weapon*/ ,(int)offsetof(Bullet_obj,_weapon),HX_HCSTRING("_weapon","\x7b","\xa8","\xda","\x6a")},
	{hx::fsBool,(int)offsetof(Bullet_obj,_animated),HX_HCSTRING("_animated","\x02","\x6a","\x88","\xd0")},
	{hx::fsInt,(int)offsetof(Bullet_obj,_bulletSpeed),HX_HCSTRING("_bulletSpeed","\xe6","\xb3","\x4c","\x9a")},
	{hx::fsBool,(int)offsetof(Bullet_obj,_damagable),HX_HCSTRING("_damagable","\x91","\x7b","\xfc","\x79")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("accelerates","\xf6","\x5c","\x93","\x26"),
	HX_HCSTRING("xAcceleration","\xd8","\x20","\xae","\x14"),
	HX_HCSTRING("yAcceleration","\x59","\x9e","\x6e","\x5a"),
	HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42"),
	HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1"),
	HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14"),
	HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b"),
	HX_HCSTRING("bulletProperties","\xd5","\xb8","\xd2","\x92"),
	HX_HCSTRING("particleGraphic","\x02","\x39","\x56","\xd4"),
	HX_HCSTRING("debrisSize","\x1c","\x38","\xee","\x29"),
	HX_HCSTRING("_weapon","\x7b","\xa8","\xda","\x6a"),
	HX_HCSTRING("_animated","\x02","\x6a","\x88","\xd0"),
	HX_HCSTRING("_bulletSpeed","\xe6","\xb3","\x4c","\x9a"),
	HX_HCSTRING("_damagable","\x91","\x7b","\xfc","\x79"),
	HX_HCSTRING("addAnimation","\xa3","\x10","\x89","\x4a"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	HX_HCSTRING("fireAtMouse","\x1c","\x37","\x7d","\x47"),
	HX_HCSTRING("fireAtTouch","\xb6","\x38","\x4b","\x4f"),
	HX_HCSTRING("fireAtPosition","\x12","\x34","\xfa","\x58"),
	HX_HCSTRING("fireAtTarget","\x7a","\xaa","\xf1","\x00"),
	HX_HCSTRING("fireFromAngle","\x73","\x13","\xe1","\x7b"),
	HX_HCSTRING("postFire","\x36","\x34","\xfb","\x01"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("hitObject","\x72","\x39","\x51","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#endif

hx::Class Bullet_obj::__mClass;

void Bullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Bullet","\x62","\x06","\x25","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Bullet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bullet_obj >;
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

