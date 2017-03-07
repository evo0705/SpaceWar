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
#ifndef INCLUDED_ShotPattern
#include <ShotPattern.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Weapon
#include <Weapon.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
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

Void Weapon_obj::__construct(::String Name,::flixel::FlxSprite ParentRef,::hx::Class BulletType,Dynamic __o_BulletID)
{
HX_STACK_FRAME("Weapon","new",0x467ad9ee,"Weapon.new","Weapon.hx",35,0xfcdf3d42)
HX_STACK_THIS(this)
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(ParentRef,"ParentRef")
HX_STACK_ARG(BulletType,"BulletType")
HX_STACK_ARG(__o_BulletID,"BulletID")
Dynamic BulletID = __o_BulletID.Default(0);
{
	HX_STACK_LINE(132)
	this->_bulletsFired = (int)0;
	HX_STACK_LINE(119)
	this->_lastFired = (int)0;
	HX_STACK_LINE(85)
	this->rndFactorLifeSpan = ((Float)0);
	HX_STACK_LINE(84)
	this->rndFactorSpeed = (int)0;
	HX_STACK_LINE(83)
	this->rndFactorAngle = (int)0;
	HX_STACK_LINE(81)
	this->bulletElasticity = ((Float)0);
	HX_STACK_LINE(79)
	this->bulletDamage = ((Float)1);
	HX_STACK_LINE(78)
	this->bulletLifeSpan = ((Float)0);
	HX_STACK_LINE(70)
	this->fireRate = (int)0;
	HX_STACK_LINE(69)
	this->nextFire = (int)0;
	HX_STACK_LINE(155)
	::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(155)
	{
		HX_STACK_LINE(155)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(155)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(155)
		::flixel::util::FlxPool tmp1 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		::flixel::util::FlxPoint tmp2 = tmp1->get();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		Float tmp3 = X;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		::flixel::util::FlxPoint tmp5 = tmp2->set(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		::flixel::util::FlxPoint point = tmp5;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(155)
		point->_inPool = false;
		HX_STACK_LINE(155)
		tmp = point;
	}
	HX_STACK_LINE(155)
	this->rndFactorPosition = tmp;
	HX_STACK_LINE(156)
	::flixel::util::FlxRect tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		::flixel::util::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			::flixel::util::FlxPool tmp3 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			::flixel::util::FlxRect tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			::flixel::util::FlxRect _this = tmp4;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(156)
			_this->x = (int)0;
			HX_STACK_LINE(156)
			_this->y = (int)0;
			HX_STACK_LINE(156)
			int tmp5 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			_this->width = tmp5;
			HX_STACK_LINE(156)
			int tmp6 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			_this->height = tmp6;
			HX_STACK_LINE(156)
			tmp2 = _this;
		}
		HX_STACK_LINE(156)
		::flixel::util::FlxRect rect = tmp2;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(156)
		rect->_inPool = false;
		HX_STACK_LINE(156)
		tmp1 = rect;
	}
	HX_STACK_LINE(156)
	this->bounds = tmp1;
	HX_STACK_LINE(157)
	::flixel::util::FlxPoint tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(157)
	{
		HX_STACK_LINE(157)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(157)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(157)
		::flixel::util::FlxPool tmp3 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(157)
		::flixel::util::FlxPoint tmp4 = tmp3->get();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(157)
		Float tmp5 = X;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		Float tmp6 = Y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		::flixel::util::FlxPoint tmp7 = tmp4->set(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(157)
		::flixel::util::FlxPoint point = tmp7;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(157)
		point->_inPool = false;
		HX_STACK_LINE(157)
		tmp2 = point;
	}
	HX_STACK_LINE(157)
	this->_positionOffset = tmp2;
	HX_STACK_LINE(158)
	::flixel::util::FlxPoint tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(158)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(158)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(158)
		::flixel::util::FlxPool tmp4 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(158)
		::flixel::util::FlxPoint tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(158)
		Float tmp6 = X;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		Float tmp7 = Y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(158)
		::flixel::util::FlxPoint tmp8 = tmp5->set(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(158)
		::flixel::util::FlxPoint point = tmp8;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(158)
		point->_inPool = false;
		HX_STACK_LINE(158)
		tmp3 = point;
	}
	HX_STACK_LINE(158)
	this->_velocity = tmp3;
	HX_STACK_LINE(160)
	this->name = Name;
	HX_STACK_LINE(162)
	bool tmp4 = (BulletType == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(162)
	if ((tmp4)){
		HX_STACK_LINE(163)
		BulletType = hx::ClassOf< ::Bullet >();
	}
	HX_STACK_LINE(165)
	this->bulletType = BulletType;
	HX_STACK_LINE(166)
	this->bulletID = BulletID;
	HX_STACK_LINE(168)
	bool tmp5 = (ParentRef != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(168)
	if ((tmp5)){
		HX_STACK_LINE(170)
		::flixel::FlxSprite tmp6 = ParentRef;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		this->setParent(tmp6,null(),null(),null());
	}
}
;
	return null();
}

//Weapon_obj::~Weapon_obj() { }

Dynamic Weapon_obj::__CreateEmpty() { return  new Weapon_obj; }
hx::ObjectPtr< Weapon_obj > Weapon_obj::__new(::String Name,::flixel::FlxSprite ParentRef,::hx::Class BulletType,Dynamic __o_BulletID)
{  hx::ObjectPtr< Weapon_obj > _result_ = new Weapon_obj();
	_result_->__construct(Name,ParentRef,BulletType,__o_BulletID);
	return _result_;}

Dynamic Weapon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Weapon_obj > _result_ = new Weapon_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Weapon_obj::makeBullet( int Quantity,::BulletProperties BulletProp,bool Looped,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY){
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
	HX_STACK_FRAME("Weapon","makeBullet",0x8317cb02,"Weapon.makeBullet","Weapon.hx",272,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(BulletProp,"BulletProp")
	HX_STACK_ARG(Looped,"Looped")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
{
		HX_STACK_LINE(273)
		::flixel::group::FlxTypedGroup tmp = ::flixel::group::FlxTypedGroup_obj::__new(Quantity);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(273)
		this->group = tmp;
		HX_STACK_LINE(274)
		::flixel::group::FlxTypedGroup tmp1 = ::flixel::group::FlxTypedGroup_obj::__new(Quantity);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		this->groupParticle = tmp1;
		HX_STACK_LINE(275)
		this->bulletProperties = BulletProp;
		HX_STACK_LINE(276)
		::flixel::util::FlxRect tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(276)
		{
			HX_STACK_LINE(276)
			::flixel::util::FlxRect tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(276)
			{
				HX_STACK_LINE(276)
				::flixel::util::FlxPool tmp4 = ::flixel::util::FlxRect_obj::_pool;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(276)
				::flixel::util::FlxRect tmp5 = tmp4->get();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(276)
				::flixel::util::FlxRect _this = tmp5;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(276)
				_this->x = (int)0;
				HX_STACK_LINE(276)
				::BulletProperties tmp6 = this->bulletProperties;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(276)
				int tmp7 = tmp6->frameHeight;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(276)
				int tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(276)
				_this->y = tmp8;
				HX_STACK_LINE(276)
				int tmp9 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(276)
				_this->width = tmp9;
				HX_STACK_LINE(276)
				int tmp10 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(276)
				::BulletProperties tmp11 = this->bulletProperties;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(276)
				int tmp12 = tmp11->frameHeight;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(276)
				int tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(276)
				_this->height = tmp13;
				HX_STACK_LINE(276)
				tmp3 = _this;
			}
			HX_STACK_LINE(276)
			::flixel::util::FlxRect rect = tmp3;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(276)
			rect->_inPool = false;
			HX_STACK_LINE(276)
			tmp2 = rect;
		}
		HX_STACK_LINE(276)
		this->bounds = tmp2;
		HX_STACK_LINE(278)
		{
			HX_STACK_LINE(278)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(278)
			while((true)){
				HX_STACK_LINE(278)
				bool tmp3 = (_g < Quantity);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(278)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(278)
				if ((tmp4)){
					HX_STACK_LINE(278)
					break;
				}
				HX_STACK_LINE(278)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(278)
				int b = tmp5;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(280)
				::hx::Class tmp6 = this->bulletType;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(280)
				int tmp7 = this->bulletID;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(280)
				::BulletProperties tmp8 = BulletProp;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(280)
				::Bullet tmp9 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new().Add(hx::ObjectPtr<OBJ_>(this)).Add(tmp7).Add(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(280)
				::Bullet tempBullet = tmp9;		HX_STACK_VAR(tempBullet,"tempBullet");
				HX_STACK_LINE(282)
				Dynamic tmp10 = BulletProp->simpleGraphic;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(282)
				int tmp11 = BulletProp->frameWidth;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(282)
				int tmp12 = BulletProp->frameHeight;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(282)
				tempBullet->loadGraphic(tmp10,true,tmp11,tmp12,null(),null());
				HX_STACK_LINE(283)
				int tmp13 = BulletProp->frameRate;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(283)
				bool tmp14 = Looped;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(283)
				tempBullet->addAnimation(HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),BulletProp->frames,tmp13,tmp14);
				HX_STACK_LINE(285)
				Float tmp15 = BulletProp->alpha;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(285)
				tempBullet->set_alpha(tmp15);
				HX_STACK_LINE(286)
				::flixel::group::FlxTypedGroup tmp16 = this->group;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(286)
				::Bullet tmp17 = tempBullet;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(286)
				tmp16->add(tmp17);
				HX_STACK_LINE(288)
				::Particle tmp18 = ::Particle_obj::__new(HX_HCSTRING("assets/images/particle_0001.png","\x0a","\xbe","\x1b","\xd6"),(int)64,(int)64,Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7).Add((int)8).Add((int)9),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(288)
				::Particle tempParticle = tmp18;		HX_STACK_VAR(tempParticle,"tempParticle");
				HX_STACK_LINE(289)
				::flixel::group::FlxTypedGroup tmp19 = this->groupParticle;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(289)
				::Particle tmp20 = tempParticle;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(289)
				tmp19->add(tmp20);
			}
		}
		HX_STACK_LINE(292)
		::flixel::util::FlxPoint tmp3 = this->_positionOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(292)
		int tmp4 = OffsetX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(292)
		tmp3->set_x(tmp4);
		HX_STACK_LINE(293)
		::flixel::util::FlxPoint tmp5 = this->_positionOffset;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(293)
		int tmp6 = OffsetY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(293)
		tmp5->set_y(tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Weapon_obj,makeBullet,(void))

bool Weapon_obj::runFire( int Method,hx::Null< int >  __o_X,hx::Null< int >  __o_Y,::flixel::FlxSprite Target,hx::Null< int >  __o_Angle){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Angle = __o_Angle.Default(0);
	HX_STACK_FRAME("Weapon","runFire",0x14bed12f,"Weapon.runFire","Weapon.hx",306,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Method,"Method")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(Angle,"Angle")
{
		HX_STACK_LINE(307)
		int tmp = this->fireRate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(307)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(307)
		if ((tmp1)){
			HX_STACK_LINE(307)
			::flixel::FlxGame tmp3 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(307)
			::flixel::FlxGame tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(307)
			int tmp5 = tmp4->ticks;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(307)
			int tmp6 = this->nextFire;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(307)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(307)
			tmp2 = (tmp5 < tmp7);
		}
		else{
			HX_STACK_LINE(307)
			tmp2 = false;
		}
		HX_STACK_LINE(307)
		if ((tmp2)){
			HX_STACK_LINE(309)
			return false;
		}
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(312)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(312)
			::BulletProperties tmp3 = this->bulletProperties;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(312)
			int tmp4 = tmp3->shotPattern->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(312)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(312)
			while((true)){
				HX_STACK_LINE(312)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(312)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(312)
				if ((tmp6)){
					HX_STACK_LINE(312)
					break;
				}
				HX_STACK_LINE(312)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(312)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(314)
				::Bullet tmp8 = this->getFreeBullet();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(314)
				this->currentBullet = tmp8;
				HX_STACK_LINE(316)
				::Bullet tmp9 = this->currentBullet;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(316)
				bool tmp10 = (tmp9 == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(316)
				if ((tmp10)){
					HX_STACK_LINE(318)
					return false;
				}
				HX_STACK_LINE(321)
				Dynamic tmp11 = this->onPreFireCallback_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(321)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(321)
				if ((tmp12)){
					HX_STACK_LINE(323)
					this->onPreFireCallback();
				}
				HX_STACK_LINE(327)
				::flixel::_system::FlxSound tmp13 = this->onPreFireSound;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(327)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(327)
				if ((tmp14)){
					HX_STACK_LINE(329)
					::flixel::_system::FlxSound tmp15 = this->onPreFireSound;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(329)
					tmp15->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
				}
				HX_STACK_LINE(334)
				::Bullet tmp15 = this->currentBullet;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(334)
				tmp15->velocity->set_x((int)0);
				HX_STACK_LINE(335)
				::Bullet tmp16 = this->currentBullet;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(335)
				tmp16->velocity->set_y((int)0);
				HX_STACK_LINE(337)
				::flixel::FlxGame tmp17 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(337)
				this->_lastFired = tmp17->ticks;
				HX_STACK_LINE(338)
				::flixel::FlxGame tmp18 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(338)
				int tmp19 = tmp18->ticks;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(338)
				int tmp20 = this->fireRate;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(338)
				Float tmp21 = ::flixel::FlxG_obj::timeScale;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(338)
				Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(338)
				int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(338)
				int tmp24 = (tmp19 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(338)
				this->nextFire = tmp24;
				HX_STACK_LINE(342)
				::flixel::util::FlxPoint tmp25 = this->_positionOffset;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(342)
				Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(342)
				::BulletProperties tmp27 = this->bulletProperties;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(342)
				::ShotPattern tmp28 = tmp27->shotPattern->__get(i).StaticCast< ::ShotPattern >();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(342)
				Float tmp29 = tmp28->offsetX;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(342)
				Float tmp30 = (tmp26 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(342)
				Float launchX = tmp30;		HX_STACK_VAR(launchX,"launchX");
				HX_STACK_LINE(343)
				::flixel::util::FlxPoint tmp31 = this->_positionOffset;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(343)
				Float tmp32 = tmp31->y;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(343)
				::BulletProperties tmp33 = this->bulletProperties;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(343)
				::ShotPattern tmp34 = tmp33->shotPattern->__get(i).StaticCast< ::ShotPattern >();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(343)
				Float tmp35 = tmp34->offsetY;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(343)
				Float tmp36 = (tmp32 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(343)
				Float launchY = tmp36;		HX_STACK_VAR(launchY,"launchY");
				HX_STACK_LINE(345)
				bool tmp37 = this->_fireFromParent;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(345)
				if ((tmp37)){
					HX_STACK_LINE(347)
					::flixel::FlxSprite tmp38 = this->parent;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(347)
					hx::AddEq(launchX,tmp38->x);
					HX_STACK_LINE(348)
					::flixel::FlxSprite tmp39 = this->parent;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(348)
					hx::AddEq(launchY,tmp39->y);
				}
				else{
					HX_STACK_LINE(350)
					bool tmp38 = this->_fireFromPosition;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(350)
					if ((tmp38)){
						HX_STACK_LINE(352)
						int tmp39 = this->_fireX;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(352)
						hx::AddEq(launchX,tmp39);
						HX_STACK_LINE(353)
						int tmp40 = this->_fireY;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(353)
						hx::AddEq(launchY,tmp40);
					}
				}
				HX_STACK_LINE(356)
				bool tmp38 = this->_directionFromParent;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(356)
				if ((tmp38)){
					HX_STACK_LINE(358)
					::flixel::FlxSprite tmp39 = this->parent;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(358)
					::BulletProperties tmp40 = this->bulletProperties;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(358)
					int tmp41 = tmp40->speed;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(358)
					::flixel::util::FlxPoint tmp42 = ::flixel::util::FlxVelocity_obj::velocityFromFacing(tmp39,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(358)
					this->_velocity = tmp42;
				}
				HX_STACK_LINE(362)
				bool tmp39 = (Method == (int)0);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(362)
				if ((tmp39)){
					HX_STACK_LINE(364)
					::Bullet tmp40 = this->currentBullet;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(364)
					Float tmp41 = launchX;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(364)
					Float tmp42 = launchY;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(364)
					::flixel::util::FlxPoint tmp43 = this->_velocity;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(364)
					Float tmp44 = tmp43->x;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(364)
					::flixel::util::FlxPoint tmp45 = this->_velocity;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(364)
					Float tmp46 = tmp45->y;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(364)
					tmp40->fire(tmp41,tmp42,tmp44,tmp46);
				}
				else{
					HX_STACK_LINE(366)
					bool tmp40 = (Method == (int)2);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(366)
					if ((tmp40)){
						HX_STACK_LINE(368)
						::Bullet tmp41 = this->currentBullet;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(368)
						Float tmp42 = launchX;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(368)
						Float tmp43 = launchY;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(368)
						int tmp44 = X;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(368)
						int tmp45 = Y;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(368)
						::BulletProperties tmp46 = this->bulletProperties;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(368)
						int tmp47 = tmp46->speed;		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(368)
						tmp41->fireAtPosition(tmp42,tmp43,tmp44,tmp45,tmp47);
					}
					else{
						HX_STACK_LINE(370)
						bool tmp41 = (Method == (int)3);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(370)
						if ((tmp41)){
							HX_STACK_LINE(372)
							::Bullet tmp42 = this->currentBullet;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(372)
							Float tmp43 = launchX;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(372)
							Float tmp44 = launchY;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(372)
							::flixel::FlxSprite tmp45 = Target;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(372)
							::BulletProperties tmp46 = this->bulletProperties;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(372)
							int tmp47 = tmp46->speed;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(372)
							tmp42->fireAtTarget(tmp43,tmp44,tmp45,tmp47);
						}
						else{
							HX_STACK_LINE(374)
							bool tmp42 = (Method == (int)4);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(374)
							if ((tmp42)){
								HX_STACK_LINE(376)
								::Bullet tmp43 = this->currentBullet;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(376)
								int tmp44 = Angle;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(376)
								::BulletProperties tmp45 = this->bulletProperties;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(376)
								::ShotPattern tmp46 = tmp45->shotPattern->__get(i).StaticCast< ::ShotPattern >();		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(376)
								int tmp47 = tmp46->offsetAngle;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(376)
								int tmp48 = (tmp44 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(376)
								int tmp49 = ::Math_obj::floor(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(376)
								tmp43->set_angle(tmp49);
								HX_STACK_LINE(377)
								::Bullet tmp50 = this->currentBullet;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(377)
								Float tmp51 = launchX;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(377)
								Float tmp52 = launchY;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(377)
								int tmp53 = Angle;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(377)
								::BulletProperties tmp54 = this->bulletProperties;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(377)
								::ShotPattern tmp55 = tmp54->shotPattern->__get(i).StaticCast< ::ShotPattern >();		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(377)
								int tmp56 = tmp55->offsetAngle;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(377)
								int tmp57 = (tmp53 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(377)
								::BulletProperties tmp58 = this->bulletProperties;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(377)
								int tmp59 = tmp58->speed;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(377)
								tmp50->fireFromAngle(tmp51,tmp52,tmp57,tmp59);
							}
							else{
								HX_STACK_LINE(379)
								bool tmp43 = (Method == (int)5);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(379)
								if ((tmp43)){
									HX_STACK_LINE(381)
									::Bullet tmp44 = this->currentBullet;		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(381)
									::flixel::FlxSprite tmp45 = this->parent;		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(381)
									Float tmp46 = tmp45->angle;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(381)
									::BulletProperties tmp47 = this->bulletProperties;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(381)
									::ShotPattern tmp48 = tmp47->shotPattern->__get(i).StaticCast< ::ShotPattern >();		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(381)
									int tmp49 = tmp48->offsetAngle;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(381)
									Float tmp50 = (tmp46 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(381)
									int tmp51 = ::Math_obj::floor(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(381)
									tmp44->set_angle(tmp51);
									HX_STACK_LINE(382)
									::Bullet tmp52 = this->currentBullet;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(382)
									Float tmp53 = launchX;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(382)
									Float tmp54 = launchY;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(382)
									::flixel::FlxSprite tmp55 = this->parent;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(382)
									Float tmp56 = tmp55->angle;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(382)
									::BulletProperties tmp57 = this->bulletProperties;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(382)
									::ShotPattern tmp58 = tmp57->shotPattern->__get(i).StaticCast< ::ShotPattern >();		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(382)
									int tmp59 = tmp58->offsetAngle;		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(382)
									Float tmp60 = (tmp56 + tmp59);		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(382)
									Float tmp61 = (tmp60 - (int)90);		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(382)
									int tmp62 = ::Math_obj::floor(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(382)
									::BulletProperties tmp63 = this->bulletProperties;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(382)
									int tmp64 = tmp63->speed;		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(382)
									tmp52->fireFromAngle(tmp53,tmp54,tmp62,tmp64);
								}
								else{
									HX_STACK_LINE(385)
									bool tmp44 = (Method == (int)6);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(385)
									if ((tmp44)){
										HX_STACK_LINE(387)
										::flixel::input::touch::FlxTouch tmp45 = this->_touchTarget;		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(387)
										bool tmp46 = (tmp45 != null());		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(387)
										if ((tmp46)){
											HX_STACK_LINE(388)
											::Bullet tmp47 = this->currentBullet;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(388)
											Float tmp48 = launchX;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(388)
											Float tmp49 = launchY;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(388)
											::flixel::input::touch::FlxTouch tmp50 = this->_touchTarget;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(388)
											::BulletProperties tmp51 = this->bulletProperties;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(388)
											int tmp52 = tmp51->speed;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(388)
											tmp47->fireAtTouch(tmp48,tmp49,tmp50,tmp52,null());
										}
									}
									else{
										HX_STACK_LINE(392)
										bool tmp45 = (Method == (int)1);		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(392)
										if ((tmp45)){
											HX_STACK_LINE(394)
											::Bullet tmp46 = this->currentBullet;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(394)
											Float tmp47 = launchX;		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(394)
											Float tmp48 = launchY;		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(394)
											::BulletProperties tmp49 = this->bulletProperties;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(394)
											int tmp50 = tmp49->speed;		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(394)
											tmp46->fireAtMouse(tmp47,tmp48,tmp50,null());
										}
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(397)
				Dynamic tmp40 = this->onPostFireCallback_dyn();		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(397)
				bool tmp41 = (tmp40 != null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(397)
				if ((tmp41)){
					HX_STACK_LINE(399)
					this->onPostFireCallback();
				}
				HX_STACK_LINE(403)
				::flixel::_system::FlxSound tmp42 = this->onPostFireSound;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(403)
				bool tmp43 = (tmp42 != null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(403)
				if ((tmp43)){
					HX_STACK_LINE(405)
					::flixel::_system::FlxSound tmp44 = this->onPostFireSound;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(405)
					tmp44->__Field(HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"), hx::paccDynamic )(null());
				}
				HX_STACK_LINE(409)
				(this->_bulletsFired)++;
			}
		}
		HX_STACK_LINE(412)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Weapon_obj,runFire,return )

bool Weapon_obj::fire( ){
	HX_STACK_FRAME("Weapon","fire",0x5fbd2668,"Weapon.fire","Weapon.hx",421,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(422)
	bool tmp = this->runFire((int)0,null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Weapon_obj,fire,return )

bool Weapon_obj::fireAtMouse( ){
	HX_STACK_FRAME("Weapon","fireAtMouse",0x0b3d7eaa,"Weapon.fireAtMouse","Weapon.hx",432,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(433)
	bool tmp = this->runFire((int)1,null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(433)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Weapon_obj,fireAtMouse,return )

bool Weapon_obj::fireAtTouch( ::flixel::input::touch::FlxTouch Touch){
	HX_STACK_FRAME("Weapon","fireAtTouch",0x130b8044,"Weapon.fireAtTouch","Weapon.hx",445,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_LINE(446)
	bool tmp = (Touch == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(446)
	if ((tmp)){
		HX_STACK_LINE(448)
		::flixel::input::touch::FlxTouchManager tmp1 = ::flixel::FlxG_obj::touches;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(448)
		::flixel::input::touch::FlxTouch tmp2 = tmp1->getFirst();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(448)
		this->_touchTarget = tmp2;
	}
	else{
		HX_STACK_LINE(452)
		this->_touchTarget = Touch;
	}
	HX_STACK_LINE(455)
	bool fired = false;		HX_STACK_VAR(fired,"fired");
	HX_STACK_LINE(457)
	::flixel::input::touch::FlxTouch tmp1 = this->_touchTarget;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(457)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(457)
	if ((tmp2)){
		HX_STACK_LINE(459)
		bool tmp3 = this->runFire((int)6,null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(459)
		fired = tmp3;
		HX_STACK_LINE(460)
		this->_touchTarget = null();
	}
	HX_STACK_LINE(463)
	bool tmp3 = fired;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(463)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Weapon_obj,fireAtTouch,return )

bool Weapon_obj::fireAtPosition( int X,int Y){
	HX_STACK_FRAME("Weapon","fireAtPosition",0xb93c9944,"Weapon.fireAtPosition","Weapon.hx",475,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(476)
	int tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(476)
	int tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(476)
	bool tmp2 = this->runFire((int)2,tmp,tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(476)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Weapon_obj,fireAtPosition,return )

bool Weapon_obj::fireAtTarget( ::flixel::FlxSprite Target){
	HX_STACK_FRAME("Weapon","fireAtTarget",0x856fff2c,"Weapon.fireAtTarget","Weapon.hx",486,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Target,"Target")
	HX_STACK_LINE(487)
	::flixel::FlxSprite tmp = Target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(487)
	bool tmp1 = this->runFire((int)3,(int)0,(int)0,tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(487)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Weapon_obj,fireAtTarget,return )

bool Weapon_obj::fireFromAngle( int Angle){
	HX_STACK_FRAME("Weapon","fireFromAngle",0xe5ecda81,"Weapon.fireFromAngle","Weapon.hx",497,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_LINE(498)
	int tmp = Angle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(498)
	bool tmp1 = this->runFire((int)4,(int)0,(int)0,null(),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(498)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Weapon_obj,fireFromAngle,return )

bool Weapon_obj::fireFromParentAngle( ){
	HX_STACK_FRAME("Weapon","fireFromParentAngle",0x31528377,"Weapon.fireFromParentAngle","Weapon.hx",507,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(508)
	bool tmp = this->runFire((int)5,null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(508)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Weapon_obj,fireFromParentAngle,return )

Void Weapon_obj::setParent( ::flixel::FlxSprite ParentRef,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY,hx::Null< bool >  __o_UseDirection){
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
bool UseDirection = __o_UseDirection.Default(false);
	HX_STACK_FRAME("Weapon","setParent",0x7ca1227a,"Weapon.setParent","Weapon.hx",520,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ParentRef,"ParentRef")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
	HX_STACK_ARG(UseDirection,"UseDirection")
{
		HX_STACK_LINE(521)
		bool tmp = (ParentRef != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(521)
		if ((tmp)){
			HX_STACK_LINE(523)
			this->_fireFromParent = true;
			HX_STACK_LINE(525)
			this->parent = ParentRef;
			HX_STACK_LINE(527)
			::flixel::util::FlxPoint tmp1 = this->_positionOffset;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(527)
			int tmp2 = OffsetX;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(527)
			tmp1->set_x(tmp2);
			HX_STACK_LINE(528)
			::flixel::util::FlxPoint tmp3 = this->_positionOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(528)
			int tmp4 = OffsetY;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(528)
			tmp3->set_y(tmp4);
			HX_STACK_LINE(530)
			this->_directionFromParent = UseDirection;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Weapon_obj,setParent,(void))

Void Weapon_obj::setFiringPosition( int X,int Y,hx::Null< int >  __o_OffsetX,hx::Null< int >  __o_OffsetY){
int OffsetX = __o_OffsetX.Default(0);
int OffsetY = __o_OffsetY.Default(0);
	HX_STACK_FRAME("Weapon","setFiringPosition",0xa1c18b8c,"Weapon.setFiringPosition","Weapon.hx",544,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(OffsetX,"OffsetX")
	HX_STACK_ARG(OffsetY,"OffsetY")
{
		HX_STACK_LINE(545)
		this->_fireFromPosition = true;
		HX_STACK_LINE(546)
		this->_fireX = X;
		HX_STACK_LINE(547)
		this->_fireY = Y;
		HX_STACK_LINE(549)
		::flixel::util::FlxPoint tmp = this->_positionOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(549)
		int tmp1 = OffsetX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(549)
		tmp->set_x(tmp1);
		HX_STACK_LINE(550)
		::flixel::util::FlxPoint tmp2 = this->_positionOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(550)
		int tmp3 = OffsetY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(550)
		tmp2->set_y(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Weapon_obj,setFiringPosition,(void))

Void Weapon_obj::setBulletSpeed( int Speed){
{
		HX_STACK_FRAME("Weapon","setBulletSpeed",0x3c43a695,"Weapon.setBulletSpeed","Weapon.hx",560,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(561)
		::BulletProperties tmp = this->bulletProperties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(561)
		tmp->speed = Speed;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Weapon_obj,setBulletSpeed,(void))

int Weapon_obj::getBulletSpeed( ){
	HX_STACK_FRAME("Weapon","getBulletSpeed",0x1c23be21,"Weapon.getBulletSpeed","Weapon.hx",570,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(571)
	::BulletProperties tmp = this->bulletProperties;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(571)
	int tmp1 = tmp->speed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(571)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Weapon_obj,getBulletSpeed,return )

Void Weapon_obj::setFireRate( int Rate){
{
		HX_STACK_FRAME("Weapon","setFireRate",0xbf2d7706,"Weapon.setFireRate","Weapon.hx",582,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Rate,"Rate")
		HX_STACK_LINE(582)
		this->fireRate = Rate;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Weapon_obj,setFireRate,(void))

Void Weapon_obj::setBulletBounds( ::flixel::util::FlxRect Bounds){
{
		HX_STACK_FRAME("Weapon","setBulletBounds",0x2a10a3a7,"Weapon.setBulletBounds","Weapon.hx",593,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Bounds,"Bounds")
		HX_STACK_LINE(593)
		this->bounds = Bounds;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Weapon_obj,setBulletBounds,(void))

Void Weapon_obj::setBulletDirection( int Angle,int Speed){
{
		HX_STACK_FRAME("Weapon","setBulletDirection",0x526a104d,"Weapon.setBulletDirection","Weapon.hx",605,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Angle,"Angle")
		HX_STACK_ARG(Speed,"Speed")
		HX_STACK_LINE(606)
		::flixel::util::FlxPoint tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(606)
		{
			HX_STACK_LINE(606)
			int tmp1 = Angle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(606)
			Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(606)
			Float tmp3 = (Float(tmp2) / Float((int)180));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(606)
			Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(606)
			Float a = tmp4;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(606)
			::flixel::util::FlxPoint tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(606)
			{
				HX_STACK_LINE(606)
				Float X = (int)0;		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(606)
				Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(606)
				::flixel::util::FlxPool tmp6 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(606)
				::flixel::util::FlxPoint tmp7 = tmp6->get();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(606)
				Float tmp8 = X;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(606)
				Float tmp9 = Y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(606)
				::flixel::util::FlxPoint tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(606)
				::flixel::util::FlxPoint point = tmp10;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(606)
				point->_inPool = false;
				HX_STACK_LINE(606)
				tmp5 = point;
			}
			HX_STACK_LINE(606)
			::flixel::util::FlxPoint result = tmp5;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(606)
			Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(606)
			Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(606)
			int tmp8 = Speed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(606)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(606)
			result->set_x(tmp9);
			HX_STACK_LINE(606)
			Float tmp10 = a;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(606)
			Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(606)
			int tmp12 = Speed;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(606)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(606)
			result->set_y(tmp13);
			HX_STACK_LINE(606)
			tmp = result;
		}
		HX_STACK_LINE(606)
		this->_velocity = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Weapon_obj,setBulletDirection,(void))

Void Weapon_obj::setBulletGravity( int ForceX,int ForceY){
{
		HX_STACK_FRAME("Weapon","setBulletGravity",0x28c5dcdc,"Weapon.setBulletGravity","Weapon.hx",617,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ForceX,"ForceX")
		HX_STACK_ARG(ForceY,"ForceY")
		HX_STACK_LINE(618)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,int,ForceY,int,ForceX)
		int __ArgCount() const { return 1; }
		Void run(::Bullet b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","Weapon.hx",618,0xfcdf3d42)
			HX_STACK_ARG(b,"b")
			{
				HX_STACK_LINE(619)
				int tmp1 = ForceX;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(619)
				b->acceleration->set_x(tmp1);
				HX_STACK_LINE(620)
				int tmp2 = ForceY;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(620)
				b->acceleration->set_y(tmp2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(618)
		tmp->forEach( Dynamic(new _Function_1_1(ForceY,ForceX)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Weapon_obj,setBulletGravity,(void))

Void Weapon_obj::setBulletAcceleration( int AccelerationX,int AccelerationY,int SpeedMaxX,int SpeedMaxY){
{
		HX_STACK_FRAME("Weapon","setBulletAcceleration",0x64390ef2,"Weapon.setBulletAcceleration","Weapon.hx",635,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(AccelerationX,"AccelerationX")
		HX_STACK_ARG(AccelerationY,"AccelerationY")
		HX_STACK_ARG(SpeedMaxX,"SpeedMaxX")
		HX_STACK_ARG(SpeedMaxY,"SpeedMaxY")
		HX_STACK_LINE(636)
		bool tmp = (AccelerationX == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(636)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(636)
		if ((tmp)){
			HX_STACK_LINE(636)
			tmp1 = (AccelerationY == (int)0);
		}
		else{
			HX_STACK_LINE(636)
			tmp1 = false;
		}
		HX_STACK_LINE(636)
		if ((tmp1)){
			HX_STACK_LINE(638)
			::flixel::group::FlxTypedGroup tmp2 = this->group;		HX_STACK_VAR(tmp2,"tmp2");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			int __ArgCount() const { return 1; }
			Void run(::Bullet b){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Weapon.hx",639,0xfcdf3d42)
				HX_STACK_ARG(b,"b")
				{
					HX_STACK_LINE(639)
					b->accelerates = false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(638)
			tmp2->forEach( Dynamic(new _Function_2_1()));
		}
		else{
			HX_STACK_LINE(644)
			::flixel::group::FlxTypedGroup tmp2 = this->group;		HX_STACK_VAR(tmp2,"tmp2");

			HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_2_1,int,AccelerationY,int,SpeedMaxX,int,AccelerationX,int,SpeedMaxY)
			int __ArgCount() const { return 1; }
			Void run(::Bullet b){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","Weapon.hx",644,0xfcdf3d42)
				HX_STACK_ARG(b,"b")
				{
					HX_STACK_LINE(645)
					b->accelerates = true;
					HX_STACK_LINE(646)
					b->xAcceleration = AccelerationX;
					HX_STACK_LINE(647)
					b->yAcceleration = AccelerationY;
					HX_STACK_LINE(648)
					int tmp3 = SpeedMaxX;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(648)
					b->maxVelocity->set_x(tmp3);
					HX_STACK_LINE(649)
					int tmp4 = SpeedMaxY;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(649)
					b->maxVelocity->set_y(tmp4);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(644)
			tmp2->forEach( Dynamic(new _Function_2_1(AccelerationY,SpeedMaxX,AccelerationX,SpeedMaxY)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Weapon_obj,setBulletAcceleration,(void))

Void Weapon_obj::setBulletOffset( Float OffsetX,Float OffsetY){
{
		HX_STACK_FRAME("Weapon","setBulletOffset",0x2432b4c5,"Weapon.setBulletOffset","Weapon.hx",663,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(OffsetX,"OffsetX")
		HX_STACK_ARG(OffsetY,"OffsetY")
		HX_STACK_LINE(664)
		::flixel::util::FlxPoint tmp = this->_positionOffset;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(664)
		Float tmp1 = OffsetX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(664)
		tmp->set_x(tmp1);
		HX_STACK_LINE(665)
		::flixel::util::FlxPoint tmp2 = this->_positionOffset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(665)
		Float tmp3 = OffsetY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(665)
		tmp2->set_y(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Weapon_obj,setBulletOffset,(void))

Void Weapon_obj::setBulletRandomFactor( hx::Null< int >  __o_RandomAngle,hx::Null< int >  __o_RandomSpeed,::flixel::util::FlxPoint RandomPosition,hx::Null< Float >  __o_RandomLifeSpan){
int RandomAngle = __o_RandomAngle.Default(0);
int RandomSpeed = __o_RandomSpeed.Default(0);
Float RandomLifeSpan = __o_RandomLifeSpan.Default(0);
	HX_STACK_FRAME("Weapon","setBulletRandomFactor",0x85cf21e4,"Weapon.setBulletRandomFactor","Weapon.hx",677,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RandomAngle,"RandomAngle")
	HX_STACK_ARG(RandomSpeed,"RandomSpeed")
	HX_STACK_ARG(RandomPosition,"RandomPosition")
	HX_STACK_ARG(RandomLifeSpan,"RandomLifeSpan")
{
		HX_STACK_LINE(678)
		this->rndFactorAngle = RandomAngle;
		HX_STACK_LINE(679)
		this->rndFactorSpeed = RandomSpeed;
		HX_STACK_LINE(681)
		bool tmp = (RandomPosition != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(681)
		if ((tmp)){
			HX_STACK_LINE(683)
			this->rndFactorPosition = RandomPosition;
		}
		HX_STACK_LINE(686)
		bool tmp1 = (RandomLifeSpan < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(686)
		Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(686)
		if ((tmp1)){
			HX_STACK_LINE(686)
			Float tmp3 = RandomLifeSpan;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(686)
			tmp2 = -(tmp3);
		}
		else{
			HX_STACK_LINE(686)
			tmp2 = RandomLifeSpan;
		}
		HX_STACK_LINE(686)
		this->rndFactorLifeSpan = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Weapon_obj,setBulletRandomFactor,(void))

Void Weapon_obj::setBulletLifeSpan( Float Lifespan){
{
		HX_STACK_FRAME("Weapon","setBulletLifeSpan",0x53819398,"Weapon.setBulletLifeSpan","Weapon.hx",697,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Lifespan,"Lifespan")
		HX_STACK_LINE(697)
		this->bulletLifeSpan = Lifespan;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Weapon_obj,setBulletLifeSpan,(void))

Void Weapon_obj::setBulletElasticity( Float Elasticity){
{
		HX_STACK_FRAME("Weapon","setBulletElasticity",0xf002c1ab,"Weapon.setBulletElasticity","Weapon.hx",707,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Elasticity,"Elasticity")
		HX_STACK_LINE(707)
		this->bulletElasticity = Elasticity;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Weapon_obj,setBulletElasticity,(void))

::Bullet Weapon_obj::getFreeBullet( ){
	HX_STACK_FRAME("Weapon","getFreeBullet",0x55ae8f52,"Weapon.getFreeBullet","Weapon.hx",716,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(717)
	::Bullet result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(719)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(719)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(719)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(719)
	if ((tmp2)){
		HX_STACK_LINE(719)
		::flixel::group::FlxTypedGroup tmp4 = this->group;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(719)
		::flixel::group::FlxTypedGroup tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(719)
		int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(719)
		tmp3 = (tmp6 == (int)0);
	}
	else{
		HX_STACK_LINE(719)
		tmp3 = true;
	}
	HX_STACK_LINE(719)
	if ((tmp3)){
		HX_STACK_LINE(721)
		HX_STACK_DO_THROW(HX_HCSTRING("Weapon.as cannot fire a bullet until one has been created via a call to makePixelBullet or makeImageBullet","\x20","\xfd","\xba","\xb2"));
		HX_STACK_LINE(722)
		return null();
	}
	HX_STACK_LINE(725)
	::Bullet bullet;		HX_STACK_VAR(bullet,"bullet");
	HX_STACK_LINE(727)
	{
		HX_STACK_LINE(727)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(727)
		::flixel::group::FlxTypedGroup tmp4 = this->group;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(727)
		int tmp5 = tmp4->members->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(727)
		int _g = tmp5;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(727)
		while((true)){
			HX_STACK_LINE(727)
			bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(727)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(727)
			if ((tmp7)){
				HX_STACK_LINE(727)
				break;
			}
			HX_STACK_LINE(727)
			int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(727)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(729)
			::flixel::group::FlxTypedGroup tmp9 = this->group;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(729)
			::Bullet tmp10 = tmp9->members->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(729)
			bullet = tmp10;
			HX_STACK_LINE(731)
			bool tmp11 = (bullet->exists == false);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(731)
			if ((tmp11)){
				HX_STACK_LINE(733)
				result = bullet;
				HX_STACK_LINE(734)
				break;
			}
		}
	}
	HX_STACK_LINE(738)
	::Bullet tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(738)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Weapon_obj,getFreeBullet,return )

::Particle Weapon_obj::getFreeParticle( ){
	HX_STACK_FRAME("Weapon","getFreeParticle",0xeef49f56,"Weapon.getFreeParticle","Weapon.hx",747,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_LINE(748)
	::Particle result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(750)
	::flixel::group::FlxTypedGroup tmp = this->groupParticle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(750)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(750)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(750)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(750)
	if ((tmp2)){
		HX_STACK_LINE(750)
		::flixel::group::FlxTypedGroup tmp4 = this->groupParticle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(750)
		::flixel::group::FlxTypedGroup tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(750)
		int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(750)
		tmp3 = (tmp6 == (int)0);
	}
	else{
		HX_STACK_LINE(750)
		tmp3 = true;
	}
	HX_STACK_LINE(750)
	if ((tmp3)){
		HX_STACK_LINE(752)
		HX_STACK_DO_THROW(HX_HCSTRING("Particle.as cannot fire a bullet until one has been created via a call to makePixelBullet or makeImageBullet","\x8a","\xa1","\xc8","\xb3"));
		HX_STACK_LINE(753)
		return null();
	}
	HX_STACK_LINE(756)
	::Particle particle;		HX_STACK_VAR(particle,"particle");
	HX_STACK_LINE(758)
	{
		HX_STACK_LINE(758)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(758)
		::flixel::group::FlxTypedGroup tmp4 = this->groupParticle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(758)
		int tmp5 = tmp4->members->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(758)
		int _g = tmp5;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(758)
		while((true)){
			HX_STACK_LINE(758)
			bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(758)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(758)
			if ((tmp7)){
				HX_STACK_LINE(758)
				break;
			}
			HX_STACK_LINE(758)
			int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(758)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(760)
			::flixel::group::FlxTypedGroup tmp9 = this->groupParticle;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(760)
			::Particle tmp10 = tmp9->members->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(760)
			particle = tmp10;
			HX_STACK_LINE(762)
			bool tmp11 = (particle->exists == false);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(762)
			if ((tmp11)){
				HX_STACK_LINE(764)
				result = particle;
				HX_STACK_LINE(765)
				break;
			}
		}
	}
	HX_STACK_LINE(769)
	::Particle tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(769)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Weapon_obj,getFreeParticle,return )

Void Weapon_obj::setPreFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound){
{
		HX_STACK_FRAME("Weapon","setPreFireCallback",0xe83f5d0e,"Weapon.setPreFireCallback","Weapon.hx",779,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(780)
		this->onPreFireCallback = Callback;
		HX_STACK_LINE(781)
		this->onPreFireSound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Weapon_obj,setPreFireCallback,(void))

Void Weapon_obj::setFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound){
{
		HX_STACK_FRAME("Weapon","setFireCallback",0x392bc8eb,"Weapon.setFireCallback","Weapon.hx",791,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(792)
		this->onFireCallback = Callback;
		HX_STACK_LINE(793)
		this->onFireSound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Weapon_obj,setFireCallback,(void))

Void Weapon_obj::setPostFireCallback( Dynamic Callback,::flixel::_system::FlxSound Sound){
{
		HX_STACK_FRAME("Weapon","setPostFireCallback",0x467e916b,"Weapon.setPostFireCallback","Weapon.hx",803,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Callback,"Callback")
		HX_STACK_ARG(Sound,"Sound")
		HX_STACK_LINE(804)
		this->onPostFireCallback = Callback;
		HX_STACK_LINE(805)
		this->onPostFireSound = Sound;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Weapon_obj,setPostFireCallback,(void))

Void Weapon_obj::bulletsOverlap( ::flixel::FlxBasic ObjectOrGroup,Dynamic NotifyCallBack,hx::Null< bool >  __o_SkipParent){
bool SkipParent = __o_SkipParent.Default(true);
	HX_STACK_FRAME("Weapon","bulletsOverlap",0x7cfcb8c8,"Weapon.bulletsOverlap","Weapon.hx",816,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(NotifyCallBack,"NotifyCallBack")
	HX_STACK_ARG(SkipParent,"SkipParent")
{
		HX_STACK_LINE(817)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(817)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(817)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(817)
		if ((tmp1)){
			HX_STACK_LINE(817)
			::flixel::group::FlxTypedGroup tmp3 = this->group;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(817)
			::flixel::group::FlxTypedGroup tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(817)
			int tmp5 = tmp4->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(817)
			tmp2 = (tmp5 > (int)0);
		}
		else{
			HX_STACK_LINE(817)
			tmp2 = false;
		}
		HX_STACK_LINE(817)
		if ((tmp2)){
			HX_STACK_LINE(819)
			this->_skipParentCollision = SkipParent;
			HX_STACK_LINE(820)
			::flixel::FlxBasic tmp3 = ObjectOrGroup;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(820)
			::flixel::group::FlxTypedGroup tmp4 = this->group;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(820)
			bool tmp5 = (NotifyCallBack != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(820)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(820)
			if ((tmp5)){
				HX_STACK_LINE(820)
				tmp6 = NotifyCallBack;
			}
			else{
				HX_STACK_LINE(820)
				tmp6 = this->onBulletHit_dyn();
			}
			HX_STACK_LINE(820)
			Dynamic tmp7 = this->shouldBulletHit_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(820)
			::flixel::FlxG_obj::overlap(tmp3,tmp4,tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Weapon_obj,bulletsOverlap,(void))

bool Weapon_obj::shouldBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet){
	HX_STACK_FRAME("Weapon","shouldBulletHit",0x5769010c,"Weapon.shouldBulletHit","Weapon.hx",825,0xfcdf3d42)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Bullet,"Bullet")
	HX_STACK_LINE(826)
	::flixel::FlxSprite tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(826)
	::flixel::FlxObject tmp1 = Object;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(826)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(826)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(826)
	if ((tmp2)){
		HX_STACK_LINE(826)
		tmp3 = this->_skipParentCollision;
	}
	else{
		HX_STACK_LINE(826)
		tmp3 = false;
	}
	HX_STACK_LINE(826)
	if ((tmp3)){
		HX_STACK_LINE(828)
		return false;
	}
	HX_STACK_LINE(831)
	::flixel::FlxObject tmp4 = Object;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(831)
	bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::flixel::tile::FlxTilemap >());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(831)
	if ((tmp5)){
		HX_STACK_LINE(833)
		::flixel::tile::FlxTilemap tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(833)
		tmp6 = hx::TCast< ::flixel::tile::FlxTilemap >::cast(Object);
		HX_STACK_LINE(833)
		::flixel::FlxObject tmp7 = Bullet;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(833)
		bool tmp8 = tmp6->overlapsWithCallback(tmp7,null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(833)
		return tmp8;
	}
	else{
		HX_STACK_LINE(837)
		return true;
	}
	HX_STACK_LINE(831)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Weapon_obj,shouldBulletHit,return )

Void Weapon_obj::onBulletHit( ::flixel::FlxObject Object,::flixel::FlxObject Bullet){
{
		HX_STACK_FRAME("Weapon","onBulletHit",0xf870eba0,"Weapon.onBulletHit","Weapon.hx",843,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_ARG(Bullet,"Bullet")
		HX_STACK_LINE(843)
		Bullet->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Weapon_obj,onBulletHit,(void))

int Weapon_obj::BULLET_UP;

int Weapon_obj::BULLET_DOWN;

int Weapon_obj::BULLET_LEFT;

int Weapon_obj::BULLET_RIGHT;

int Weapon_obj::BULLET_NORTH_EAST;

int Weapon_obj::BULLET_NORTH_WEST;

int Weapon_obj::BULLET_SOUTH_EAST;

int Weapon_obj::BULLET_SOUTH_WEST;

int Weapon_obj::FIRE;

int Weapon_obj::FIRE_AT_MOUSE;

int Weapon_obj::FIRE_AT_POSITION;

int Weapon_obj::FIRE_AT_TARGET;

int Weapon_obj::FIRE_FROM_ANGLE;

int Weapon_obj::FIRE_FROM_PARENT_ANGLE;

int Weapon_obj::FIRE_AT_TOUCH;


Weapon_obj::Weapon_obj()
{
}

void Weapon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Weapon);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_MEMBER_NAME(groupParticle,"groupParticle");
	HX_MARK_MEMBER_NAME(bulletType,"bulletType");
	HX_MARK_MEMBER_NAME(bulletID,"bulletID");
	HX_MARK_MEMBER_NAME(nextFire,"nextFire");
	HX_MARK_MEMBER_NAME(fireRate,"fireRate");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(bulletProperties,"bulletProperties");
	HX_MARK_MEMBER_NAME(bulletLifeSpan,"bulletLifeSpan");
	HX_MARK_MEMBER_NAME(bulletDamage,"bulletDamage");
	HX_MARK_MEMBER_NAME(bulletElasticity,"bulletElasticity");
	HX_MARK_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_MARK_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_MARK_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_MARK_MEMBER_NAME(rndFactorPosition,"rndFactorPosition");
	HX_MARK_MEMBER_NAME(currentBullet,"currentBullet");
	HX_MARK_MEMBER_NAME(onPreFireCallback,"onPreFireCallback");
	HX_MARK_MEMBER_NAME(onFireCallback,"onFireCallback");
	HX_MARK_MEMBER_NAME(onPostFireCallback,"onPostFireCallback");
	HX_MARK_MEMBER_NAME(onPreFireSound,"onPreFireSound");
	HX_MARK_MEMBER_NAME(onFireSound,"onFireSound");
	HX_MARK_MEMBER_NAME(onPostFireSound,"onPostFireSound");
	HX_MARK_MEMBER_NAME(_rotateToAngle,"_rotateToAngle");
	HX_MARK_MEMBER_NAME(_velocity,"_velocity");
	HX_MARK_MEMBER_NAME(_fireFromPosition,"_fireFromPosition");
	HX_MARK_MEMBER_NAME(_fireX,"_fireX");
	HX_MARK_MEMBER_NAME(_fireY,"_fireY");
	HX_MARK_MEMBER_NAME(_lastFired,"_lastFired");
	HX_MARK_MEMBER_NAME(_touchTarget,"_touchTarget");
	HX_MARK_MEMBER_NAME(_fireFromParent,"_fireFromParent");
	HX_MARK_MEMBER_NAME(_positionOffset,"_positionOffset");
	HX_MARK_MEMBER_NAME(_directionFromParent,"_directionFromParent");
	HX_MARK_MEMBER_NAME(_angleFromParent,"_angleFromParent");
	HX_MARK_MEMBER_NAME(_bulletsFired,"_bulletsFired");
	HX_MARK_MEMBER_NAME(_currentMagazine,"_currentMagazine");
	HX_MARK_MEMBER_NAME(_magazineCount,"_magazineCount");
	HX_MARK_MEMBER_NAME(_bulletsPerMagazine,"_bulletsPerMagazine");
	HX_MARK_MEMBER_NAME(_magazineSwapDelay,"_magazineSwapDelay");
	HX_MARK_MEMBER_NAME(_skipParentCollision,"_skipParentCollision");
	HX_MARK_MEMBER_NAME(_magazineSwapCallback,"_magazineSwapCallback");
	HX_MARK_MEMBER_NAME(_magazineSwapSound,"_magazineSwapSound");
	HX_MARK_END_CLASS();
}

void Weapon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(group,"group");
	HX_VISIT_MEMBER_NAME(groupParticle,"groupParticle");
	HX_VISIT_MEMBER_NAME(bulletType,"bulletType");
	HX_VISIT_MEMBER_NAME(bulletID,"bulletID");
	HX_VISIT_MEMBER_NAME(nextFire,"nextFire");
	HX_VISIT_MEMBER_NAME(fireRate,"fireRate");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(bulletProperties,"bulletProperties");
	HX_VISIT_MEMBER_NAME(bulletLifeSpan,"bulletLifeSpan");
	HX_VISIT_MEMBER_NAME(bulletDamage,"bulletDamage");
	HX_VISIT_MEMBER_NAME(bulletElasticity,"bulletElasticity");
	HX_VISIT_MEMBER_NAME(rndFactorAngle,"rndFactorAngle");
	HX_VISIT_MEMBER_NAME(rndFactorSpeed,"rndFactorSpeed");
	HX_VISIT_MEMBER_NAME(rndFactorLifeSpan,"rndFactorLifeSpan");
	HX_VISIT_MEMBER_NAME(rndFactorPosition,"rndFactorPosition");
	HX_VISIT_MEMBER_NAME(currentBullet,"currentBullet");
	HX_VISIT_MEMBER_NAME(onPreFireCallback,"onPreFireCallback");
	HX_VISIT_MEMBER_NAME(onFireCallback,"onFireCallback");
	HX_VISIT_MEMBER_NAME(onPostFireCallback,"onPostFireCallback");
	HX_VISIT_MEMBER_NAME(onPreFireSound,"onPreFireSound");
	HX_VISIT_MEMBER_NAME(onFireSound,"onFireSound");
	HX_VISIT_MEMBER_NAME(onPostFireSound,"onPostFireSound");
	HX_VISIT_MEMBER_NAME(_rotateToAngle,"_rotateToAngle");
	HX_VISIT_MEMBER_NAME(_velocity,"_velocity");
	HX_VISIT_MEMBER_NAME(_fireFromPosition,"_fireFromPosition");
	HX_VISIT_MEMBER_NAME(_fireX,"_fireX");
	HX_VISIT_MEMBER_NAME(_fireY,"_fireY");
	HX_VISIT_MEMBER_NAME(_lastFired,"_lastFired");
	HX_VISIT_MEMBER_NAME(_touchTarget,"_touchTarget");
	HX_VISIT_MEMBER_NAME(_fireFromParent,"_fireFromParent");
	HX_VISIT_MEMBER_NAME(_positionOffset,"_positionOffset");
	HX_VISIT_MEMBER_NAME(_directionFromParent,"_directionFromParent");
	HX_VISIT_MEMBER_NAME(_angleFromParent,"_angleFromParent");
	HX_VISIT_MEMBER_NAME(_bulletsFired,"_bulletsFired");
	HX_VISIT_MEMBER_NAME(_currentMagazine,"_currentMagazine");
	HX_VISIT_MEMBER_NAME(_magazineCount,"_magazineCount");
	HX_VISIT_MEMBER_NAME(_bulletsPerMagazine,"_bulletsPerMagazine");
	HX_VISIT_MEMBER_NAME(_magazineSwapDelay,"_magazineSwapDelay");
	HX_VISIT_MEMBER_NAME(_skipParentCollision,"_skipParentCollision");
	HX_VISIT_MEMBER_NAME(_magazineSwapCallback,"_magazineSwapCallback");
	HX_VISIT_MEMBER_NAME(_magazineSwapSound,"_magazineSwapSound");
}

Dynamic Weapon_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"fire") ) { return fire_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"_fireX") ) { return _fireX; }
		if (HX_FIELD_EQ(inName,"_fireY") ) { return _fireY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runFire") ) { return runFire_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bulletID") ) { return bulletID; }
		if (HX_FIELD_EQ(inName,"nextFire") ) { return nextFire; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { return fireRate; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_velocity") ) { return _velocity; }
		if (HX_FIELD_EQ(inName,"setParent") ) { return setParent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletType") ) { return bulletType; }
		if (HX_FIELD_EQ(inName,"_lastFired") ) { return _lastFired; }
		if (HX_FIELD_EQ(inName,"makeBullet") ) { return makeBullet_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFireSound") ) { return onFireSound; }
		if (HX_FIELD_EQ(inName,"fireAtMouse") ) { return fireAtMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"fireAtTouch") ) { return fireAtTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"setFireRate") ) { return setFireRate_dyn(); }
		if (HX_FIELD_EQ(inName,"onBulletHit") ) { return onBulletHit_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bulletDamage") ) { return bulletDamage; }
		if (HX_FIELD_EQ(inName,"_touchTarget") ) { return _touchTarget; }
		if (HX_FIELD_EQ(inName,"fireAtTarget") ) { return fireAtTarget_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"groupParticle") ) { return groupParticle; }
		if (HX_FIELD_EQ(inName,"currentBullet") ) { return currentBullet; }
		if (HX_FIELD_EQ(inName,"_bulletsFired") ) { return _bulletsFired; }
		if (HX_FIELD_EQ(inName,"fireFromAngle") ) { return fireFromAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"getFreeBullet") ) { return getFreeBullet_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bulletLifeSpan") ) { return bulletLifeSpan; }
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { return rndFactorAngle; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { return rndFactorSpeed; }
		if (HX_FIELD_EQ(inName,"onFireCallback") ) { return onFireCallback; }
		if (HX_FIELD_EQ(inName,"onPreFireSound") ) { return onPreFireSound; }
		if (HX_FIELD_EQ(inName,"_rotateToAngle") ) { return _rotateToAngle; }
		if (HX_FIELD_EQ(inName,"_magazineCount") ) { return _magazineCount; }
		if (HX_FIELD_EQ(inName,"fireAtPosition") ) { return fireAtPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletSpeed") ) { return setBulletSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"getBulletSpeed") ) { return getBulletSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"bulletsOverlap") ) { return bulletsOverlap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onPostFireSound") ) { return onPostFireSound; }
		if (HX_FIELD_EQ(inName,"_fireFromParent") ) { return _fireFromParent; }
		if (HX_FIELD_EQ(inName,"_positionOffset") ) { return _positionOffset; }
		if (HX_FIELD_EQ(inName,"setBulletBounds") ) { return setBulletBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletOffset") ) { return setBulletOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getFreeParticle") ) { return getFreeParticle_dyn(); }
		if (HX_FIELD_EQ(inName,"setFireCallback") ) { return setFireCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"shouldBulletHit") ) { return shouldBulletHit_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bulletProperties") ) { return bulletProperties; }
		if (HX_FIELD_EQ(inName,"bulletElasticity") ) { return bulletElasticity; }
		if (HX_FIELD_EQ(inName,"_angleFromParent") ) { return _angleFromParent; }
		if (HX_FIELD_EQ(inName,"_currentMagazine") ) { return _currentMagazine; }
		if (HX_FIELD_EQ(inName,"setBulletGravity") ) { return setBulletGravity_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { return rndFactorLifeSpan; }
		if (HX_FIELD_EQ(inName,"rndFactorPosition") ) { return rndFactorPosition; }
		if (HX_FIELD_EQ(inName,"onPreFireCallback") ) { return onPreFireCallback; }
		if (HX_FIELD_EQ(inName,"_fireFromPosition") ) { return _fireFromPosition; }
		if (HX_FIELD_EQ(inName,"setFiringPosition") ) { return setFiringPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletLifeSpan") ) { return setBulletLifeSpan_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onPostFireCallback") ) { return onPostFireCallback; }
		if (HX_FIELD_EQ(inName,"_magazineSwapDelay") ) { return _magazineSwapDelay; }
		if (HX_FIELD_EQ(inName,"_magazineSwapSound") ) { return _magazineSwapSound; }
		if (HX_FIELD_EQ(inName,"setBulletDirection") ) { return setBulletDirection_dyn(); }
		if (HX_FIELD_EQ(inName,"setPreFireCallback") ) { return setPreFireCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_bulletsPerMagazine") ) { return _bulletsPerMagazine; }
		if (HX_FIELD_EQ(inName,"fireFromParentAngle") ) { return fireFromParentAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletElasticity") ) { return setBulletElasticity_dyn(); }
		if (HX_FIELD_EQ(inName,"setPostFireCallback") ) { return setPostFireCallback_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_directionFromParent") ) { return _directionFromParent; }
		if (HX_FIELD_EQ(inName,"_skipParentCollision") ) { return _skipParentCollision; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_magazineSwapCallback") ) { return _magazineSwapCallback; }
		if (HX_FIELD_EQ(inName,"setBulletAcceleration") ) { return setBulletAcceleration_dyn(); }
		if (HX_FIELD_EQ(inName,"setBulletRandomFactor") ) { return setBulletRandomFactor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Weapon_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireX") ) { _fireX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireY") ) { _fireY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bulletID") ) { bulletID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextFire") ) { nextFire=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fireRate") ) { fireRate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_velocity") ) { _velocity=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletType") ) { bulletType=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastFired") ) { _lastFired=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onFireSound") ) { onFireSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bulletDamage") ) { bulletDamage=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_touchTarget") ) { _touchTarget=inValue.Cast< ::flixel::input::touch::FlxTouch >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"groupParticle") ) { groupParticle=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentBullet") ) { currentBullet=inValue.Cast< ::Bullet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bulletsFired") ) { _bulletsFired=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bulletLifeSpan") ) { bulletLifeSpan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorAngle") ) { rndFactorAngle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorSpeed") ) { rndFactorSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFireCallback") ) { onFireCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPreFireSound") ) { onPreFireSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rotateToAngle") ) { _rotateToAngle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_magazineCount") ) { _magazineCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onPostFireSound") ) { onPostFireSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireFromParent") ) { _fireFromParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_positionOffset") ) { _positionOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bulletProperties") ) { bulletProperties=inValue.Cast< ::BulletProperties >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletElasticity") ) { bulletElasticity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angleFromParent") ) { _angleFromParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentMagazine") ) { _currentMagazine=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rndFactorLifeSpan") ) { rndFactorLifeSpan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rndFactorPosition") ) { rndFactorPosition=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPreFireCallback") ) { onPreFireCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fireFromPosition") ) { _fireFromPosition=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onPostFireCallback") ) { onPostFireCallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_magazineSwapDelay") ) { _magazineSwapDelay=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_magazineSwapSound") ) { _magazineSwapSound=inValue.Cast< ::flixel::_system::FlxSound >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_bulletsPerMagazine") ) { _bulletsPerMagazine=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_directionFromParent") ) { _directionFromParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skipParentCollision") ) { _skipParentCollision=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_magazineSwapCallback") ) { _magazineSwapCallback=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Weapon_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Weapon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	outFields->push(HX_HCSTRING("groupParticle","\xa5","\x84","\x0b","\xaa"));
	outFields->push(HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15"));
	outFields->push(HX_HCSTRING("bulletID","\x9d","\x66","\x8b","\x87"));
	outFields->push(HX_HCSTRING("nextFire","\x49","\x7a","\x88","\xef"));
	outFields->push(HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"));
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("bulletProperties","\xd5","\xb8","\xd2","\x92"));
	outFields->push(HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25"));
	outFields->push(HX_HCSTRING("bulletDamage","\x51","\xb4","\x4b","\xe9"));
	outFields->push(HX_HCSTRING("bulletElasticity","\x5b","\xe0","\x77","\x7f"));
	outFields->push(HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42"));
	outFields->push(HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1"));
	outFields->push(HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14"));
	outFields->push(HX_HCSTRING("rndFactorPosition","\xe0","\x07","\x2b","\x89"));
	outFields->push(HX_HCSTRING("currentBullet","\x5b","\x13","\xed","\xb7"));
	outFields->push(HX_HCSTRING("onPreFireSound","\x55","\x38","\x64","\x4c"));
	outFields->push(HX_HCSTRING("onFireSound","\x1a","\xd8","\xb7","\x9e"));
	outFields->push(HX_HCSTRING("onPostFireSound","\x1a","\x2c","\xac","\xb1"));
	outFields->push(HX_HCSTRING("_rotateToAngle","\x7e","\xb3","\x0c","\xf4"));
	outFields->push(HX_HCSTRING("_velocity","\x7c","\xf9","\x93","\x66"));
	outFields->push(HX_HCSTRING("_fireFromPosition","\x68","\x43","\x24","\x7a"));
	outFields->push(HX_HCSTRING("_fireX","\x23","\xb3","\x84","\xfc"));
	outFields->push(HX_HCSTRING("_fireY","\x24","\xb3","\x84","\xfc"));
	outFields->push(HX_HCSTRING("_lastFired","\x79","\x15","\xed","\xa8"));
	outFields->push(HX_HCSTRING("_touchTarget","\x71","\x06","\x2d","\x52"));
	outFields->push(HX_HCSTRING("_fireFromParent","\x29","\x2a","\xd5","\xbc"));
	outFields->push(HX_HCSTRING("_positionOffset","\xbb","\x59","\x92","\xfe"));
	outFields->push(HX_HCSTRING("_directionFromParent","\x54","\x6c","\xd7","\xe2"));
	outFields->push(HX_HCSTRING("_angleFromParent","\x68","\xba","\x18","\xd1"));
	outFields->push(HX_HCSTRING("_bulletsFired","\x1c","\x9d","\x16","\x08"));
	outFields->push(HX_HCSTRING("_currentMagazine","\xee","\x15","\xe2","\x34"));
	outFields->push(HX_HCSTRING("_magazineCount","\x5c","\x82","\x16","\xab"));
	outFields->push(HX_HCSTRING("_bulletsPerMagazine","\xbf","\x17","\x63","\xfa"));
	outFields->push(HX_HCSTRING("_magazineSwapDelay","\xfd","\x6f","\xe9","\x23"));
	outFields->push(HX_HCSTRING("_skipParentCollision","\x2a","\xbd","\xfb","\x1f"));
	outFields->push(HX_HCSTRING("_magazineSwapCallback","\x8b","\x09","\x97","\xe0"));
	outFields->push(HX_HCSTRING("_magazineSwapSound","\x49","\x25","\x8f","\xcd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Weapon_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(Weapon_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(Weapon_obj,groupParticle),HX_HCSTRING("groupParticle","\xa5","\x84","\x0b","\xaa")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(Weapon_obj,bulletType),HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15")},
	{hx::fsInt,(int)offsetof(Weapon_obj,bulletID),HX_HCSTRING("bulletID","\x9d","\x66","\x8b","\x87")},
	{hx::fsInt,(int)offsetof(Weapon_obj,nextFire),HX_HCSTRING("nextFire","\x49","\x7a","\x88","\xef")},
	{hx::fsInt,(int)offsetof(Weapon_obj,fireRate),HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb")},
	{hx::fsObject /*::flixel::util::FlxRect*/ ,(int)offsetof(Weapon_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Weapon_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::BulletProperties*/ ,(int)offsetof(Weapon_obj,bulletProperties),HX_HCSTRING("bulletProperties","\xd5","\xb8","\xd2","\x92")},
	{hx::fsFloat,(int)offsetof(Weapon_obj,bulletLifeSpan),HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25")},
	{hx::fsFloat,(int)offsetof(Weapon_obj,bulletDamage),HX_HCSTRING("bulletDamage","\x51","\xb4","\x4b","\xe9")},
	{hx::fsFloat,(int)offsetof(Weapon_obj,bulletElasticity),HX_HCSTRING("bulletElasticity","\x5b","\xe0","\x77","\x7f")},
	{hx::fsInt,(int)offsetof(Weapon_obj,rndFactorAngle),HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42")},
	{hx::fsInt,(int)offsetof(Weapon_obj,rndFactorSpeed),HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1")},
	{hx::fsFloat,(int)offsetof(Weapon_obj,rndFactorLifeSpan),HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Weapon_obj,rndFactorPosition),HX_HCSTRING("rndFactorPosition","\xe0","\x07","\x2b","\x89")},
	{hx::fsObject /*::Bullet*/ ,(int)offsetof(Weapon_obj,currentBullet),HX_HCSTRING("currentBullet","\x5b","\x13","\xed","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Weapon_obj,onPreFireCallback),HX_HCSTRING("onPreFireCallback","\xff","\x65","\xde","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Weapon_obj,onFireCallback),HX_HCSTRING("onFireCallback","\x5a","\x2f","\x8f","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Weapon_obj,onPostFireCallback),HX_HCSTRING("onPostFireCallback","\x5a","\x5b","\x07","\x2e")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Weapon_obj,onPreFireSound),HX_HCSTRING("onPreFireSound","\x55","\x38","\x64","\x4c")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Weapon_obj,onFireSound),HX_HCSTRING("onFireSound","\x1a","\xd8","\xb7","\x9e")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Weapon_obj,onPostFireSound),HX_HCSTRING("onPostFireSound","\x1a","\x2c","\xac","\xb1")},
	{hx::fsBool,(int)offsetof(Weapon_obj,_rotateToAngle),HX_HCSTRING("_rotateToAngle","\x7e","\xb3","\x0c","\xf4")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Weapon_obj,_velocity),HX_HCSTRING("_velocity","\x7c","\xf9","\x93","\x66")},
	{hx::fsBool,(int)offsetof(Weapon_obj,_fireFromPosition),HX_HCSTRING("_fireFromPosition","\x68","\x43","\x24","\x7a")},
	{hx::fsInt,(int)offsetof(Weapon_obj,_fireX),HX_HCSTRING("_fireX","\x23","\xb3","\x84","\xfc")},
	{hx::fsInt,(int)offsetof(Weapon_obj,_fireY),HX_HCSTRING("_fireY","\x24","\xb3","\x84","\xfc")},
	{hx::fsInt,(int)offsetof(Weapon_obj,_lastFired),HX_HCSTRING("_lastFired","\x79","\x15","\xed","\xa8")},
	{hx::fsObject /*::flixel::input::touch::FlxTouch*/ ,(int)offsetof(Weapon_obj,_touchTarget),HX_HCSTRING("_touchTarget","\x71","\x06","\x2d","\x52")},
	{hx::fsBool,(int)offsetof(Weapon_obj,_fireFromParent),HX_HCSTRING("_fireFromParent","\x29","\x2a","\xd5","\xbc")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Weapon_obj,_positionOffset),HX_HCSTRING("_positionOffset","\xbb","\x59","\x92","\xfe")},
	{hx::fsBool,(int)offsetof(Weapon_obj,_directionFromParent),HX_HCSTRING("_directionFromParent","\x54","\x6c","\xd7","\xe2")},
	{hx::fsBool,(int)offsetof(Weapon_obj,_angleFromParent),HX_HCSTRING("_angleFromParent","\x68","\xba","\x18","\xd1")},
	{hx::fsInt,(int)offsetof(Weapon_obj,_bulletsFired),HX_HCSTRING("_bulletsFired","\x1c","\x9d","\x16","\x08")},
	{hx::fsInt,(int)offsetof(Weapon_obj,_currentMagazine),HX_HCSTRING("_currentMagazine","\xee","\x15","\xe2","\x34")},
	{hx::fsInt,(int)offsetof(Weapon_obj,_magazineCount),HX_HCSTRING("_magazineCount","\x5c","\x82","\x16","\xab")},
	{hx::fsInt,(int)offsetof(Weapon_obj,_bulletsPerMagazine),HX_HCSTRING("_bulletsPerMagazine","\xbf","\x17","\x63","\xfa")},
	{hx::fsInt,(int)offsetof(Weapon_obj,_magazineSwapDelay),HX_HCSTRING("_magazineSwapDelay","\xfd","\x6f","\xe9","\x23")},
	{hx::fsBool,(int)offsetof(Weapon_obj,_skipParentCollision),HX_HCSTRING("_skipParentCollision","\x2a","\xbd","\xfb","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Weapon_obj,_magazineSwapCallback),HX_HCSTRING("_magazineSwapCallback","\x8b","\x09","\x97","\xe0")},
	{hx::fsObject /*::flixel::_system::FlxSound*/ ,(int)offsetof(Weapon_obj,_magazineSwapSound),HX_HCSTRING("_magazineSwapSound","\x49","\x25","\x8f","\xcd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Weapon_obj::BULLET_UP,HX_HCSTRING("BULLET_UP","\x78","\xf7","\xef","\x0d")},
	{hx::fsInt,(void *) &Weapon_obj::BULLET_DOWN,HX_HCSTRING("BULLET_DOWN","\xbf","\xae","\x39","\x58")},
	{hx::fsInt,(void *) &Weapon_obj::BULLET_LEFT,HX_HCSTRING("BULLET_LEFT","\x64","\xbe","\x7b","\x5d")},
	{hx::fsInt,(void *) &Weapon_obj::BULLET_RIGHT,HX_HCSTRING("BULLET_RIGHT","\xbf","\xe6","\xd7","\xe5")},
	{hx::fsInt,(void *) &Weapon_obj::BULLET_NORTH_EAST,HX_HCSTRING("BULLET_NORTH_EAST","\x34","\x6f","\x31","\x6f")},
	{hx::fsInt,(void *) &Weapon_obj::BULLET_NORTH_WEST,HX_HCSTRING("BULLET_NORTH_WEST","\x66","\x4f","\x1a","\x7b")},
	{hx::fsInt,(void *) &Weapon_obj::BULLET_SOUTH_EAST,HX_HCSTRING("BULLET_SOUTH_EAST","\xec","\x1c","\x3d","\xdc")},
	{hx::fsInt,(void *) &Weapon_obj::BULLET_SOUTH_WEST,HX_HCSTRING("BULLET_SOUTH_WEST","\x1e","\xfd","\x25","\xe8")},
	{hx::fsInt,(void *) &Weapon_obj::FIRE,HX_HCSTRING("FIRE","\xb6","\x9b","\x7c","\x2e")},
	{hx::fsInt,(void *) &Weapon_obj::FIRE_AT_MOUSE,HX_HCSTRING("FIRE_AT_MOUSE","\x62","\xbb","\x33","\xe6")},
	{hx::fsInt,(void *) &Weapon_obj::FIRE_AT_POSITION,HX_HCSTRING("FIRE_AT_POSITION","\x6c","\xbb","\x5a","\xbe")},
	{hx::fsInt,(void *) &Weapon_obj::FIRE_AT_TARGET,HX_HCSTRING("FIRE_AT_TARGET","\x54","\xe3","\xee","\x41")},
	{hx::fsInt,(void *) &Weapon_obj::FIRE_FROM_ANGLE,HX_HCSTRING("FIRE_FROM_ANGLE","\x07","\x1d","\xf3","\x0d")},
	{hx::fsInt,(void *) &Weapon_obj::FIRE_FROM_PARENT_ANGLE,HX_HCSTRING("FIRE_FROM_PARENT_ANGLE","\xca","\xa0","\xc9","\x3f")},
	{hx::fsInt,(void *) &Weapon_obj::FIRE_AT_TOUCH,HX_HCSTRING("FIRE_AT_TOUCH","\xfc","\xbc","\x01","\xee")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("groupParticle","\xa5","\x84","\x0b","\xaa"),
	HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15"),
	HX_HCSTRING("bulletID","\x9d","\x66","\x8b","\x87"),
	HX_HCSTRING("nextFire","\x49","\x7a","\x88","\xef"),
	HX_HCSTRING("fireRate","\xb6","\x65","\x0c","\xcb"),
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("bulletProperties","\xd5","\xb8","\xd2","\x92"),
	HX_HCSTRING("bulletLifeSpan","\x48","\xa6","\x08","\x25"),
	HX_HCSTRING("bulletDamage","\x51","\xb4","\x4b","\xe9"),
	HX_HCSTRING("bulletElasticity","\x5b","\xe0","\x77","\x7f"),
	HX_HCSTRING("rndFactorAngle","\x3c","\x44","\x79","\x42"),
	HX_HCSTRING("rndFactorSpeed","\xf0","\x97","\x00","\xa1"),
	HX_HCSTRING("rndFactorLifeSpan","\x1d","\xad","\xd7","\x14"),
	HX_HCSTRING("rndFactorPosition","\xe0","\x07","\x2b","\x89"),
	HX_HCSTRING("currentBullet","\x5b","\x13","\xed","\xb7"),
	HX_HCSTRING("onPreFireCallback","\xff","\x65","\xde","\x2b"),
	HX_HCSTRING("onFireCallback","\x5a","\x2f","\x8f","\x6a"),
	HX_HCSTRING("onPostFireCallback","\x5a","\x5b","\x07","\x2e"),
	HX_HCSTRING("onPreFireSound","\x55","\x38","\x64","\x4c"),
	HX_HCSTRING("onFireSound","\x1a","\xd8","\xb7","\x9e"),
	HX_HCSTRING("onPostFireSound","\x1a","\x2c","\xac","\xb1"),
	HX_HCSTRING("_rotateToAngle","\x7e","\xb3","\x0c","\xf4"),
	HX_HCSTRING("_velocity","\x7c","\xf9","\x93","\x66"),
	HX_HCSTRING("_fireFromPosition","\x68","\x43","\x24","\x7a"),
	HX_HCSTRING("_fireX","\x23","\xb3","\x84","\xfc"),
	HX_HCSTRING("_fireY","\x24","\xb3","\x84","\xfc"),
	HX_HCSTRING("_lastFired","\x79","\x15","\xed","\xa8"),
	HX_HCSTRING("_touchTarget","\x71","\x06","\x2d","\x52"),
	HX_HCSTRING("_fireFromParent","\x29","\x2a","\xd5","\xbc"),
	HX_HCSTRING("_positionOffset","\xbb","\x59","\x92","\xfe"),
	HX_HCSTRING("_directionFromParent","\x54","\x6c","\xd7","\xe2"),
	HX_HCSTRING("_angleFromParent","\x68","\xba","\x18","\xd1"),
	HX_HCSTRING("_bulletsFired","\x1c","\x9d","\x16","\x08"),
	HX_HCSTRING("_currentMagazine","\xee","\x15","\xe2","\x34"),
	HX_HCSTRING("_magazineCount","\x5c","\x82","\x16","\xab"),
	HX_HCSTRING("_bulletsPerMagazine","\xbf","\x17","\x63","\xfa"),
	HX_HCSTRING("_magazineSwapDelay","\xfd","\x6f","\xe9","\x23"),
	HX_HCSTRING("_skipParentCollision","\x2a","\xbd","\xfb","\x1f"),
	HX_HCSTRING("_magazineSwapCallback","\x8b","\x09","\x97","\xe0"),
	HX_HCSTRING("_magazineSwapSound","\x49","\x25","\x8f","\xcd"),
	HX_HCSTRING("makeBullet","\xd0","\x66","\x60","\x26"),
	HX_HCSTRING("runFire","\xa1","\xe8","\xf8","\xd0"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	HX_HCSTRING("fireAtMouse","\x1c","\x37","\x7d","\x47"),
	HX_HCSTRING("fireAtTouch","\xb6","\x38","\x4b","\x4f"),
	HX_HCSTRING("fireAtPosition","\x12","\x34","\xfa","\x58"),
	HX_HCSTRING("fireAtTarget","\x7a","\xaa","\xf1","\x00"),
	HX_HCSTRING("fireFromAngle","\x73","\x13","\xe1","\x7b"),
	HX_HCSTRING("fireFromParentAngle","\xe9","\xfd","\x8a","\xb7"),
	HX_HCSTRING("setParent","\x6c","\x7a","\x25","\x4d"),
	HX_HCSTRING("setFiringPosition","\x7e","\x25","\x2a","\x09"),
	HX_HCSTRING("setBulletSpeed","\x63","\x41","\x01","\xdc"),
	HX_HCSTRING("getBulletSpeed","\xef","\x58","\xe1","\xbb"),
	HX_HCSTRING("setFireRate","\x78","\x2f","\x6d","\xfb"),
	HX_HCSTRING("setBulletBounds","\x19","\x7d","\x3a","\x50"),
	HX_HCSTRING("setBulletDirection","\x1b","\x2a","\x88","\x66"),
	HX_HCSTRING("setBulletGravity","\x2a","\x47","\x3a","\x67"),
	HX_HCSTRING("setBulletAcceleration","\xe4","\x89","\x5a","\x45"),
	HX_HCSTRING("setBulletOffset","\x37","\x8e","\x5c","\x4a"),
	HX_HCSTRING("setBulletRandomFactor","\xd6","\x9c","\xf0","\x66"),
	HX_HCSTRING("setBulletLifeSpan","\x8a","\x2d","\xea","\xba"),
	HX_HCSTRING("setBulletElasticity","\x1d","\x3c","\x3b","\x76"),
	HX_HCSTRING("getFreeBullet","\x44","\xc8","\xa2","\xeb"),
	HX_HCSTRING("getFreeParticle","\xc8","\x78","\x1e","\x15"),
	HX_HCSTRING("setPreFireCallback","\xdc","\x76","\x5d","\xfc"),
	HX_HCSTRING("setFireCallback","\x5d","\xa2","\x55","\x5f"),
	HX_HCSTRING("setPostFireCallback","\xdd","\x0b","\xb7","\xcc"),
	HX_HCSTRING("bulletsOverlap","\x96","\x53","\xba","\x1c"),
	HX_HCSTRING("shouldBulletHit","\x7e","\xda","\x92","\x7d"),
	HX_HCSTRING("onBulletHit","\x12","\xa4","\xb0","\x34"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Weapon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Weapon_obj::BULLET_UP,"BULLET_UP");
	HX_MARK_MEMBER_NAME(Weapon_obj::BULLET_DOWN,"BULLET_DOWN");
	HX_MARK_MEMBER_NAME(Weapon_obj::BULLET_LEFT,"BULLET_LEFT");
	HX_MARK_MEMBER_NAME(Weapon_obj::BULLET_RIGHT,"BULLET_RIGHT");
	HX_MARK_MEMBER_NAME(Weapon_obj::BULLET_NORTH_EAST,"BULLET_NORTH_EAST");
	HX_MARK_MEMBER_NAME(Weapon_obj::BULLET_NORTH_WEST,"BULLET_NORTH_WEST");
	HX_MARK_MEMBER_NAME(Weapon_obj::BULLET_SOUTH_EAST,"BULLET_SOUTH_EAST");
	HX_MARK_MEMBER_NAME(Weapon_obj::BULLET_SOUTH_WEST,"BULLET_SOUTH_WEST");
	HX_MARK_MEMBER_NAME(Weapon_obj::FIRE,"FIRE");
	HX_MARK_MEMBER_NAME(Weapon_obj::FIRE_AT_MOUSE,"FIRE_AT_MOUSE");
	HX_MARK_MEMBER_NAME(Weapon_obj::FIRE_AT_POSITION,"FIRE_AT_POSITION");
	HX_MARK_MEMBER_NAME(Weapon_obj::FIRE_AT_TARGET,"FIRE_AT_TARGET");
	HX_MARK_MEMBER_NAME(Weapon_obj::FIRE_FROM_ANGLE,"FIRE_FROM_ANGLE");
	HX_MARK_MEMBER_NAME(Weapon_obj::FIRE_FROM_PARENT_ANGLE,"FIRE_FROM_PARENT_ANGLE");
	HX_MARK_MEMBER_NAME(Weapon_obj::FIRE_AT_TOUCH,"FIRE_AT_TOUCH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Weapon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Weapon_obj::BULLET_UP,"BULLET_UP");
	HX_VISIT_MEMBER_NAME(Weapon_obj::BULLET_DOWN,"BULLET_DOWN");
	HX_VISIT_MEMBER_NAME(Weapon_obj::BULLET_LEFT,"BULLET_LEFT");
	HX_VISIT_MEMBER_NAME(Weapon_obj::BULLET_RIGHT,"BULLET_RIGHT");
	HX_VISIT_MEMBER_NAME(Weapon_obj::BULLET_NORTH_EAST,"BULLET_NORTH_EAST");
	HX_VISIT_MEMBER_NAME(Weapon_obj::BULLET_NORTH_WEST,"BULLET_NORTH_WEST");
	HX_VISIT_MEMBER_NAME(Weapon_obj::BULLET_SOUTH_EAST,"BULLET_SOUTH_EAST");
	HX_VISIT_MEMBER_NAME(Weapon_obj::BULLET_SOUTH_WEST,"BULLET_SOUTH_WEST");
	HX_VISIT_MEMBER_NAME(Weapon_obj::FIRE,"FIRE");
	HX_VISIT_MEMBER_NAME(Weapon_obj::FIRE_AT_MOUSE,"FIRE_AT_MOUSE");
	HX_VISIT_MEMBER_NAME(Weapon_obj::FIRE_AT_POSITION,"FIRE_AT_POSITION");
	HX_VISIT_MEMBER_NAME(Weapon_obj::FIRE_AT_TARGET,"FIRE_AT_TARGET");
	HX_VISIT_MEMBER_NAME(Weapon_obj::FIRE_FROM_ANGLE,"FIRE_FROM_ANGLE");
	HX_VISIT_MEMBER_NAME(Weapon_obj::FIRE_FROM_PARENT_ANGLE,"FIRE_FROM_PARENT_ANGLE");
	HX_VISIT_MEMBER_NAME(Weapon_obj::FIRE_AT_TOUCH,"FIRE_AT_TOUCH");
};

#endif

hx::Class Weapon_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BULLET_UP","\x78","\xf7","\xef","\x0d"),
	HX_HCSTRING("BULLET_DOWN","\xbf","\xae","\x39","\x58"),
	HX_HCSTRING("BULLET_LEFT","\x64","\xbe","\x7b","\x5d"),
	HX_HCSTRING("BULLET_RIGHT","\xbf","\xe6","\xd7","\xe5"),
	HX_HCSTRING("BULLET_NORTH_EAST","\x34","\x6f","\x31","\x6f"),
	HX_HCSTRING("BULLET_NORTH_WEST","\x66","\x4f","\x1a","\x7b"),
	HX_HCSTRING("BULLET_SOUTH_EAST","\xec","\x1c","\x3d","\xdc"),
	HX_HCSTRING("BULLET_SOUTH_WEST","\x1e","\xfd","\x25","\xe8"),
	HX_HCSTRING("FIRE","\xb6","\x9b","\x7c","\x2e"),
	HX_HCSTRING("FIRE_AT_MOUSE","\x62","\xbb","\x33","\xe6"),
	HX_HCSTRING("FIRE_AT_POSITION","\x6c","\xbb","\x5a","\xbe"),
	HX_HCSTRING("FIRE_AT_TARGET","\x54","\xe3","\xee","\x41"),
	HX_HCSTRING("FIRE_FROM_ANGLE","\x07","\x1d","\xf3","\x0d"),
	HX_HCSTRING("FIRE_FROM_PARENT_ANGLE","\xca","\xa0","\xc9","\x3f"),
	HX_HCSTRING("FIRE_AT_TOUCH","\xfc","\xbc","\x01","\xee"),
	::String(null()) };

void Weapon_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Weapon","\xfc","\x0a","\xf8","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Weapon_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Weapon_obj >;
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

void Weapon_obj::__boot()
{
	BULLET_UP= (int)-90;
	BULLET_DOWN= (int)90;
	BULLET_LEFT= (int)180;
	BULLET_RIGHT= (int)0;
	BULLET_NORTH_EAST= (int)-45;
	BULLET_NORTH_WEST= (int)-135;
	BULLET_SOUTH_EAST= (int)45;
	BULLET_SOUTH_WEST= (int)135;
	FIRE= (int)0;
	FIRE_AT_MOUSE= (int)1;
	FIRE_AT_POSITION= (int)2;
	FIRE_AT_TARGET= (int)3;
	FIRE_FROM_ANGLE= (int)4;
	FIRE_FROM_PARENT_ANGLE= (int)5;
	FIRE_AT_TOUCH= (int)6;
}

