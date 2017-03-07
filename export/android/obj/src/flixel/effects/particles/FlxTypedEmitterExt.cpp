#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_Bounds
#include <flixel/effects/particles/Bounds.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitterExt
#include <flixel/effects/particles/FlxTypedEmitterExt.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxTypedEmitterExt_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Size)
{
HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitterExt","new",0x88969d7c,"flixel.effects.particles.FlxTypedEmitterExt.new","flixel/effects/particles/FlxTypedEmitterExt.hx",41,0x5968d511)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Size,"Size")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float Size = __o_Size.Default(0);
{
	HX_STACK_LINE(42)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	Float tmp2 = Size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	super::__construct(tmp,tmp1,tmp3);
	HX_STACK_LINE(45)
	this->setMotion((int)0,(int)0,((Float)0.5),(int)360,(int)100,((Float)1.5));
}
;
	return null();
}

//FlxTypedEmitterExt_obj::~FlxTypedEmitterExt_obj() { }

Dynamic FlxTypedEmitterExt_obj::__CreateEmpty() { return  new FlxTypedEmitterExt_obj; }
hx::ObjectPtr< FlxTypedEmitterExt_obj > FlxTypedEmitterExt_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Size)
{  hx::ObjectPtr< FlxTypedEmitterExt_obj > _result_ = new FlxTypedEmitterExt_obj();
	_result_->__construct(__o_X,__o_Y,__o_Size);
	return _result_;}

Dynamic FlxTypedEmitterExt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedEmitterExt_obj > _result_ = new FlxTypedEmitterExt_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FlxTypedEmitterExt_obj::setMotion( Float Angle,Float Distance,Float Lifespan,hx::Null< Float >  __o_AngleRange,hx::Null< Float >  __o_DistanceRange,hx::Null< Float >  __o_LifespanRange){
Float AngleRange = __o_AngleRange.Default(0);
Float DistanceRange = __o_DistanceRange.Default(0);
Float LifespanRange = __o_LifespanRange.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitterExt","setMotion",0x8d388594,"flixel.effects.particles.FlxTypedEmitterExt.setMotion","flixel/effects/particles/FlxTypedEmitterExt.hx",59,0x5968d511)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(Lifespan,"Lifespan")
	HX_STACK_ARG(AngleRange,"AngleRange")
	HX_STACK_ARG(DistanceRange,"DistanceRange")
	HX_STACK_ARG(LifespanRange,"LifespanRange")
{
		HX_STACK_LINE(60)
		Float tmp = (Angle * ((Float)0.017453293));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		this->angle = tmp;
		HX_STACK_LINE(61)
		this->distance = Distance;
		HX_STACK_LINE(62)
		::flixel::effects::particles::Bounds tmp1 = this->life;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		tmp1->min = Lifespan;
		HX_STACK_LINE(63)
		Float tmp2 = (Lifespan + LifespanRange);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		::flixel::effects::particles::Bounds tmp3 = this->life;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		tmp3->max = tmp2;
		HX_STACK_LINE(64)
		Float tmp4 = (AngleRange * ((Float)0.017453293));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		this->angleRange = tmp4;
		HX_STACK_LINE(65)
		this->distanceRange = DistanceRange;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(FlxTypedEmitterExt_obj,setMotion,(void))

Void FlxTypedEmitterExt_obj::setParticleMotion( Dynamic Particle,Float Angle,Float Distance,hx::Null< Float >  __o_AngleRange,hx::Null< Float >  __o_DistanceRange){
Float AngleRange = __o_AngleRange.Default(0);
Float DistanceRange = __o_DistanceRange.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitterExt","setParticleMotion",0x58fabe7a,"flixel.effects.particles.FlxTypedEmitterExt.setParticleMotion","flixel/effects/particles/FlxTypedEmitterExt.hx",80,0x5968d511)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Particle,"Particle")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(Distance,"Distance")
	HX_STACK_ARG(AngleRange,"AngleRange")
	HX_STACK_ARG(DistanceRange,"DistanceRange")
{
		HX_STACK_LINE(82)
		Float tmp = Angle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		Float tmp1 = (Angle + AngleRange);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		Float tmp2 = ::flixel::util::FlxRandom_obj::floatRanged(tmp,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		Float a = tmp2;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(83)
		Float tmp3 = Distance;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		Float tmp4 = (Distance + DistanceRange);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		Float tmp5 = ::flixel::util::FlxRandom_obj::floatRanged(tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		Float d = tmp5;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(85)
		Float tmp6 = a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		Float tmp7 = ::Math_obj::cos(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		Float tmp8 = d;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(85)
		Particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp9);
		HX_STACK_LINE(86)
		Float tmp10 = a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(86)
		Float tmp11 = ::Math_obj::sin(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(86)
		Float tmp12 = d;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(86)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(86)
		Particle->__Field(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTypedEmitterExt_obj,setParticleMotion,(void))

Void FlxTypedEmitterExt_obj::start( hx::Null< bool >  __o_Explode,hx::Null< Float >  __o_Lifespan,hx::Null< Float >  __o_Frequency,hx::Null< int >  __o_Quantity,hx::Null< Float >  __o_LifespanRange){
bool Explode = __o_Explode.Default(true);
Float Lifespan = __o_Lifespan.Default(0);
Float Frequency = __o_Frequency.Default(((Float)0.1));
int Quantity = __o_Quantity.Default(0);
Float LifespanRange = __o_LifespanRange.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitterExt","start",0xbc70c07e,"flixel.effects.particles.FlxTypedEmitterExt.start","flixel/effects/particles/FlxTypedEmitterExt.hx",99,0x5968d511)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Explode,"Explode")
	HX_STACK_ARG(Lifespan,"Lifespan")
	HX_STACK_ARG(Frequency,"Frequency")
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(LifespanRange,"LifespanRange")
{
		HX_STACK_LINE(100)
		bool tmp = Explode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		Float tmp1 = Lifespan;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		Float tmp2 = Frequency;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		int tmp3 = Quantity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		Float tmp4 = LifespanRange;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(100)
		this->super::start(tmp,tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(104)
		bool tmp5 = Explode;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(104)
		if ((tmp5)){
			HX_STACK_LINE(106)
			this->on = false;
			HX_STACK_LINE(108)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(109)
			int tmp6 = this->_quantity;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(109)
			int l = tmp6;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(111)
			bool tmp7 = (l <= (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(111)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(111)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(111)
			if ((tmp8)){
				HX_STACK_LINE(111)
				int tmp10 = l;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(111)
				int tmp11 = this->members->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(111)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(111)
				tmp9 = (tmp10 > tmp12);
			}
			else{
				HX_STACK_LINE(111)
				tmp9 = true;
			}
			HX_STACK_LINE(111)
			if ((tmp9)){
				HX_STACK_LINE(113)
				int tmp10 = this->members->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(113)
				l = tmp10;
			}
			HX_STACK_LINE(116)
			while((true)){
				HX_STACK_LINE(116)
				bool tmp10 = (i < l);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(116)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(116)
				if ((tmp11)){
					HX_STACK_LINE(116)
					break;
				}
				HX_STACK_LINE(118)
				this->emitParticle();
				HX_STACK_LINE(119)
				(i)++;
			}
			HX_STACK_LINE(122)
			this->_quantity = (int)0;
		}
	}
return null();
}


Void FlxTypedEmitterExt_obj::emitParticle( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitterExt","emitParticle",0x930c531d,"flixel.effects.particles.FlxTypedEmitterExt.emitParticle","flixel/effects/particles/FlxTypedEmitterExt.hx",130,0x5968d511)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		::hx::Class tmp = this->_particleClass;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(131)
		::hx::Class tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(131)
		Dynamic tmp2 = this->recycle(tmp1,null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(131)
		Dynamic particle = tmp2;		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(132)
		Float tmp3 = this->bounce;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(132)
		particle->__FieldRef(HX_HCSTRING("elasticity","\x79","\x23","\xb4","\x4d")) = tmp3;
		HX_STACK_LINE(134)
		Float tmp4 = this->get_x();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		Float tmp5 = particle->__Field(HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(134)
		int tmp7 = (int(tmp6) >> int((int)1));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(134)
		Float tmp8 = (tmp4 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(134)
		int tmp9 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(134)
		int tmp10 = (tmp9 * (int)48271);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(134)
		int tmp11 = hx::Mod(tmp10,(int)2147483647);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(134)
		int tmp12 = (int(tmp11) & int((int)2147483647));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(134)
		int tmp13 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(134)
		Float tmp14 = (Float(tmp13) / Float((int)2147483647));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(134)
		Float tmp15 = this->get_width();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(134)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(134)
		Float tmp17 = (tmp8 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(134)
		Float tmp18 = this->get_y();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(134)
		Float tmp19 = particle->__Field(HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"), hx::paccDynamic )();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(134)
		int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(134)
		int tmp21 = (int(tmp20) >> int((int)1));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(134)
		Float tmp22 = (tmp18 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(134)
		int tmp23 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(134)
		int tmp24 = (tmp23 * (int)48271);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(134)
		int tmp25 = hx::Mod(tmp24,(int)2147483647);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(134)
		int tmp26 = (int(tmp25) & int((int)2147483647));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(134)
		int tmp27 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(134)
		Float tmp28 = (Float(tmp27) / Float((int)2147483647));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(134)
		Float tmp29 = this->get_height();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(134)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(134)
		Float tmp31 = (tmp22 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(134)
		particle->__Field(HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"), hx::paccDynamic )(tmp17,tmp31);
		HX_STACK_LINE(135)
		particle->__Field(HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"), hx::paccDynamic )(true);
		HX_STACK_LINE(137)
		::flixel::effects::particles::Bounds tmp32 = this->life;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(137)
		Float tmp33 = tmp32->min;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(137)
		::flixel::effects::particles::Bounds tmp34 = this->life;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(137)
		Float tmp35 = tmp34->max;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(137)
		bool tmp36 = (tmp33 != tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(137)
		if ((tmp36)){
			HX_STACK_LINE(139)
			::flixel::effects::particles::Bounds tmp37 = this->life;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(139)
			Float tmp38 = tmp37->min;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(139)
			int tmp39 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(139)
			int tmp40 = (tmp39 * (int)48271);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(139)
			int tmp41 = hx::Mod(tmp40,(int)2147483647);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(139)
			int tmp42 = (int(tmp41) & int((int)2147483647));		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(139)
			int tmp43 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(139)
			Float tmp44 = (Float(tmp43) / Float((int)2147483647));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(139)
			::flixel::effects::particles::Bounds tmp45 = this->life;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(139)
			Float tmp46 = tmp45->max;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(139)
			::flixel::effects::particles::Bounds tmp47 = this->life;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(139)
			Float tmp48 = tmp47->min;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(139)
			Float tmp49 = (tmp46 - tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(139)
			Float tmp50 = (tmp44 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(139)
			Float tmp51 = (tmp38 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(139)
			Float tmp52 = particle->__FieldRef(HX_HCSTRING("maxLifespan","\x8a","\x24","\x94","\xe1")) = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(139)
			particle->__FieldRef(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")) = tmp52;
		}
		else{
			HX_STACK_LINE(143)
			::flixel::effects::particles::Bounds tmp37 = this->life;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(143)
			Float tmp38 = particle->__FieldRef(HX_HCSTRING("maxLifespan","\x8a","\x24","\x94","\xe1")) = tmp37->min;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(143)
			particle->__FieldRef(HX_HCSTRING("lifespan","\xc6","\x19","\xce","\x6b")) = tmp38;
		}
		HX_STACK_LINE(146)
		::flixel::effects::particles::Bounds tmp37 = this->startAlpha;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(146)
		Float tmp38 = tmp37->min;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(146)
		::flixel::effects::particles::Bounds tmp39 = this->startAlpha;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(146)
		Float tmp40 = tmp39->max;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(146)
		bool tmp41 = (tmp38 != tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(146)
		if ((tmp41)){
			HX_STACK_LINE(148)
			::flixel::effects::particles::Bounds tmp42 = this->startAlpha;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(148)
			Float tmp43 = tmp42->min;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(148)
			int tmp44 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(148)
			int tmp45 = (tmp44 * (int)48271);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(148)
			int tmp46 = hx::Mod(tmp45,(int)2147483647);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(148)
			int tmp47 = (int(tmp46) & int((int)2147483647));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(148)
			int tmp48 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(148)
			Float tmp49 = (Float(tmp48) / Float((int)2147483647));		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(148)
			::flixel::effects::particles::Bounds tmp50 = this->startAlpha;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(148)
			Float tmp51 = tmp50->max;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(148)
			::flixel::effects::particles::Bounds tmp52 = this->startAlpha;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(148)
			Float tmp53 = tmp52->min;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(148)
			Float tmp54 = (tmp51 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(148)
			Float tmp55 = (tmp49 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(148)
			Float tmp56 = (tmp43 + tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(148)
			particle->__FieldRef(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d")) = tmp56;
		}
		else{
			HX_STACK_LINE(152)
			::flixel::effects::particles::Bounds tmp42 = this->startAlpha;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(152)
			particle->__FieldRef(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d")) = tmp42->min;
		}
		HX_STACK_LINE(154)
		Float tmp42 = particle->__Field(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d"), hx::paccDynamic );		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(154)
		particle->__Field(HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"), hx::paccDynamic )(tmp42);
		HX_STACK_LINE(156)
		::flixel::effects::particles::Bounds tmp43 = this->endAlpha;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(156)
		Float particleEndAlpha = tmp43->min;		HX_STACK_VAR(particleEndAlpha,"particleEndAlpha");
		HX_STACK_LINE(157)
		::flixel::effects::particles::Bounds tmp44 = this->endAlpha;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(157)
		Float tmp45 = tmp44->min;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(157)
		::flixel::effects::particles::Bounds tmp46 = this->endAlpha;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(157)
		Float tmp47 = tmp46->max;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(157)
		bool tmp48 = (tmp45 != tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(157)
		if ((tmp48)){
			HX_STACK_LINE(159)
			::flixel::effects::particles::Bounds tmp49 = this->endAlpha;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(159)
			Float tmp50 = tmp49->min;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(159)
			int tmp51 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(159)
			int tmp52 = (tmp51 * (int)48271);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(159)
			int tmp53 = hx::Mod(tmp52,(int)2147483647);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(159)
			int tmp54 = (int(tmp53) & int((int)2147483647));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(159)
			int tmp55 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(159)
			Float tmp56 = (Float(tmp55) / Float((int)2147483647));		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(159)
			::flixel::effects::particles::Bounds tmp57 = this->endAlpha;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(159)
			Float tmp58 = tmp57->max;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(159)
			::flixel::effects::particles::Bounds tmp59 = this->endAlpha;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(159)
			Float tmp60 = tmp59->min;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(159)
			Float tmp61 = (tmp58 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(159)
			Float tmp62 = (tmp56 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(159)
			Float tmp63 = (tmp50 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(159)
			particleEndAlpha = tmp63;
		}
		HX_STACK_LINE(162)
		bool tmp49 = (particleEndAlpha != particle->__Field(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d"), hx::paccDynamic ));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(162)
		if ((tmp49)){
			HX_STACK_LINE(164)
			particle->__FieldRef(HX_HCSTRING("useFading","\x60","\x05","\x39","\x9b")) = true;
			HX_STACK_LINE(165)
			Float tmp50 = (particleEndAlpha - particle->__Field(HX_HCSTRING("startAlpha","\x9c","\x7f","\xad","\x3d"), hx::paccDynamic ));		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(165)
			particle->__FieldRef(HX_HCSTRING("rangeAlpha","\x61","\x84","\x41","\xf4")) = tmp50;
		}
		else{
			HX_STACK_LINE(169)
			particle->__FieldRef(HX_HCSTRING("useFading","\x60","\x05","\x39","\x9b")) = false;
			HX_STACK_LINE(170)
			particle->__FieldRef(HX_HCSTRING("rangeAlpha","\x61","\x84","\x41","\xf4")) = (int)0;
		}
		HX_STACK_LINE(174)
		::flixel::effects::particles::Bounds tmp50 = this->startRed;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(174)
		Float tmp51 = particle->__FieldRef(HX_HCSTRING("startRed","\x0f","\x86","\x9a","\x42")) = tmp50->min;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(174)
		Float startRedComp = tmp51;		HX_STACK_VAR(startRedComp,"startRedComp");
		HX_STACK_LINE(175)
		::flixel::effects::particles::Bounds tmp52 = this->startGreen;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(175)
		Float tmp53 = particle->__FieldRef(HX_HCSTRING("startGreen","\x01","\xe7","\x03","\xb6")) = tmp52->min;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(175)
		Float startGreenComp = tmp53;		HX_STACK_VAR(startGreenComp,"startGreenComp");
		HX_STACK_LINE(176)
		::flixel::effects::particles::Bounds tmp54 = this->startBlue;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(176)
		Float tmp55 = particle->__FieldRef(HX_HCSTRING("startBlue","\x1c","\xbc","\x0c","\xfa")) = tmp54->min;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(176)
		Float startBlueComp = tmp55;		HX_STACK_VAR(startBlueComp,"startBlueComp");
		HX_STACK_LINE(178)
		::flixel::effects::particles::Bounds tmp56 = this->endRed;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(178)
		Float endRedComp = tmp56->min;		HX_STACK_VAR(endRedComp,"endRedComp");
		HX_STACK_LINE(179)
		::flixel::effects::particles::Bounds tmp57 = this->endGreen;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(179)
		Float endGreenComp = tmp57->min;		HX_STACK_VAR(endGreenComp,"endGreenComp");
		HX_STACK_LINE(180)
		::flixel::effects::particles::Bounds tmp58 = this->endBlue;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(180)
		Float endBlueComp = tmp58->min;		HX_STACK_VAR(endBlueComp,"endBlueComp");
		HX_STACK_LINE(182)
		::flixel::effects::particles::Bounds tmp59 = this->startRed;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(182)
		Float tmp60 = tmp59->min;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(182)
		::flixel::effects::particles::Bounds tmp61 = this->startRed;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(182)
		Float tmp62 = tmp61->max;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(182)
		bool tmp63 = (tmp60 != tmp62);		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(182)
		if ((tmp63)){
			HX_STACK_LINE(184)
			::flixel::effects::particles::Bounds tmp64 = this->startRed;		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(184)
			Float tmp65 = tmp64->min;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(184)
			int tmp66 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(184)
			int tmp67 = (tmp66 * (int)48271);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(184)
			int tmp68 = hx::Mod(tmp67,(int)2147483647);		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(184)
			int tmp69 = (int(tmp68) & int((int)2147483647));		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(184)
			int tmp70 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp69;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(184)
			Float tmp71 = (Float(tmp70) / Float((int)2147483647));		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(184)
			::flixel::effects::particles::Bounds tmp72 = this->startRed;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(184)
			Float tmp73 = tmp72->max;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(184)
			::flixel::effects::particles::Bounds tmp74 = this->startRed;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(184)
			Float tmp75 = tmp74->min;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(184)
			Float tmp76 = (tmp73 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(184)
			Float tmp77 = (tmp71 * tmp76);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(184)
			Float tmp78 = (tmp65 + tmp77);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(184)
			Float tmp79 = startRedComp = tmp78;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(184)
			particle->__FieldRef(HX_HCSTRING("startRed","\x0f","\x86","\x9a","\x42")) = tmp79;
		}
		HX_STACK_LINE(186)
		::flixel::effects::particles::Bounds tmp64 = this->startGreen;		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(186)
		Float tmp65 = tmp64->min;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(186)
		::flixel::effects::particles::Bounds tmp66 = this->startGreen;		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(186)
		Float tmp67 = tmp66->max;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(186)
		bool tmp68 = (tmp65 != tmp67);		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(186)
		if ((tmp68)){
			HX_STACK_LINE(188)
			::flixel::effects::particles::Bounds tmp69 = this->startGreen;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(188)
			Float tmp70 = tmp69->min;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(188)
			int tmp71 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(188)
			int tmp72 = (tmp71 * (int)48271);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(188)
			int tmp73 = hx::Mod(tmp72,(int)2147483647);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(188)
			int tmp74 = (int(tmp73) & int((int)2147483647));		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(188)
			int tmp75 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp74;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(188)
			Float tmp76 = (Float(tmp75) / Float((int)2147483647));		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(188)
			::flixel::effects::particles::Bounds tmp77 = this->startGreen;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(188)
			Float tmp78 = tmp77->max;		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(188)
			::flixel::effects::particles::Bounds tmp79 = this->startGreen;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(188)
			Float tmp80 = tmp79->min;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(188)
			Float tmp81 = (tmp78 - tmp80);		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(188)
			Float tmp82 = (tmp76 * tmp81);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(188)
			Float tmp83 = (tmp70 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(188)
			Float tmp84 = startGreenComp = tmp83;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(188)
			particle->__FieldRef(HX_HCSTRING("startGreen","\x01","\xe7","\x03","\xb6")) = tmp84;
		}
		HX_STACK_LINE(190)
		::flixel::effects::particles::Bounds tmp69 = this->startBlue;		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(190)
		Float tmp70 = tmp69->min;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(190)
		::flixel::effects::particles::Bounds tmp71 = this->startBlue;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(190)
		Float tmp72 = tmp71->max;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(190)
		bool tmp73 = (tmp70 != tmp72);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(190)
		if ((tmp73)){
			HX_STACK_LINE(192)
			::flixel::effects::particles::Bounds tmp74 = this->startBlue;		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(192)
			Float tmp75 = tmp74->min;		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(192)
			int tmp76 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(192)
			int tmp77 = (tmp76 * (int)48271);		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(192)
			int tmp78 = hx::Mod(tmp77,(int)2147483647);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(192)
			int tmp79 = (int(tmp78) & int((int)2147483647));		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(192)
			int tmp80 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp79;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(192)
			Float tmp81 = (Float(tmp80) / Float((int)2147483647));		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(192)
			::flixel::effects::particles::Bounds tmp82 = this->startBlue;		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(192)
			Float tmp83 = tmp82->max;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(192)
			::flixel::effects::particles::Bounds tmp84 = this->startBlue;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(192)
			Float tmp85 = tmp84->min;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(192)
			Float tmp86 = (tmp83 - tmp85);		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(192)
			Float tmp87 = (tmp81 * tmp86);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(192)
			Float tmp88 = (tmp75 + tmp87);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(192)
			Float tmp89 = startBlueComp = tmp88;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(192)
			particle->__FieldRef(HX_HCSTRING("startBlue","\x1c","\xbc","\x0c","\xfa")) = tmp89;
		}
		HX_STACK_LINE(195)
		::flixel::effects::particles::Bounds tmp74 = this->endRed;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(195)
		Float tmp75 = tmp74->min;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(195)
		::flixel::effects::particles::Bounds tmp76 = this->endRed;		HX_STACK_VAR(tmp76,"tmp76");
		HX_STACK_LINE(195)
		Float tmp77 = tmp76->max;		HX_STACK_VAR(tmp77,"tmp77");
		HX_STACK_LINE(195)
		bool tmp78 = (tmp75 != tmp77);		HX_STACK_VAR(tmp78,"tmp78");
		HX_STACK_LINE(195)
		if ((tmp78)){
			HX_STACK_LINE(197)
			::flixel::effects::particles::Bounds tmp79 = this->endRed;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(197)
			Float tmp80 = tmp79->min;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(197)
			int tmp81 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(197)
			int tmp82 = (tmp81 * (int)48271);		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(197)
			int tmp83 = hx::Mod(tmp82,(int)2147483647);		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(197)
			int tmp84 = (int(tmp83) & int((int)2147483647));		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(197)
			int tmp85 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp84;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(197)
			Float tmp86 = (Float(tmp85) / Float((int)2147483647));		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(197)
			::flixel::effects::particles::Bounds tmp87 = this->endRed;		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(197)
			Float tmp88 = tmp87->max;		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(197)
			::flixel::effects::particles::Bounds tmp89 = this->endRed;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(197)
			Float tmp90 = tmp89->min;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(197)
			Float tmp91 = (tmp88 - tmp90);		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(197)
			Float tmp92 = (tmp86 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(197)
			Float tmp93 = (tmp80 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(197)
			endRedComp = tmp93;
		}
		HX_STACK_LINE(200)
		::flixel::effects::particles::Bounds tmp79 = this->endGreen;		HX_STACK_VAR(tmp79,"tmp79");
		HX_STACK_LINE(200)
		Float tmp80 = tmp79->min;		HX_STACK_VAR(tmp80,"tmp80");
		HX_STACK_LINE(200)
		::flixel::effects::particles::Bounds tmp81 = this->endGreen;		HX_STACK_VAR(tmp81,"tmp81");
		HX_STACK_LINE(200)
		Float tmp82 = tmp81->max;		HX_STACK_VAR(tmp82,"tmp82");
		HX_STACK_LINE(200)
		bool tmp83 = (tmp80 != tmp82);		HX_STACK_VAR(tmp83,"tmp83");
		HX_STACK_LINE(200)
		if ((tmp83)){
			HX_STACK_LINE(202)
			::flixel::effects::particles::Bounds tmp84 = this->endGreen;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(202)
			Float tmp85 = tmp84->min;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(202)
			int tmp86 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp86,"tmp86");
			HX_STACK_LINE(202)
			int tmp87 = (tmp86 * (int)48271);		HX_STACK_VAR(tmp87,"tmp87");
			HX_STACK_LINE(202)
			int tmp88 = hx::Mod(tmp87,(int)2147483647);		HX_STACK_VAR(tmp88,"tmp88");
			HX_STACK_LINE(202)
			int tmp89 = (int(tmp88) & int((int)2147483647));		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(202)
			int tmp90 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp89;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(202)
			Float tmp91 = (Float(tmp90) / Float((int)2147483647));		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(202)
			::flixel::effects::particles::Bounds tmp92 = this->endGreen;		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(202)
			Float tmp93 = tmp92->max;		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(202)
			::flixel::effects::particles::Bounds tmp94 = this->endGreen;		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(202)
			Float tmp95 = tmp94->min;		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(202)
			Float tmp96 = (tmp93 - tmp95);		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(202)
			Float tmp97 = (tmp91 * tmp96);		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(202)
			Float tmp98 = (tmp85 + tmp97);		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(202)
			endGreenComp = tmp98;
		}
		HX_STACK_LINE(205)
		::flixel::effects::particles::Bounds tmp84 = this->endBlue;		HX_STACK_VAR(tmp84,"tmp84");
		HX_STACK_LINE(205)
		Float tmp85 = tmp84->min;		HX_STACK_VAR(tmp85,"tmp85");
		HX_STACK_LINE(205)
		::flixel::effects::particles::Bounds tmp86 = this->endBlue;		HX_STACK_VAR(tmp86,"tmp86");
		HX_STACK_LINE(205)
		Float tmp87 = tmp86->max;		HX_STACK_VAR(tmp87,"tmp87");
		HX_STACK_LINE(205)
		bool tmp88 = (tmp85 != tmp87);		HX_STACK_VAR(tmp88,"tmp88");
		HX_STACK_LINE(205)
		if ((tmp88)){
			HX_STACK_LINE(207)
			::flixel::effects::particles::Bounds tmp89 = this->endBlue;		HX_STACK_VAR(tmp89,"tmp89");
			HX_STACK_LINE(207)
			Float tmp90 = tmp89->min;		HX_STACK_VAR(tmp90,"tmp90");
			HX_STACK_LINE(207)
			int tmp91 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp91,"tmp91");
			HX_STACK_LINE(207)
			int tmp92 = (tmp91 * (int)48271);		HX_STACK_VAR(tmp92,"tmp92");
			HX_STACK_LINE(207)
			int tmp93 = hx::Mod(tmp92,(int)2147483647);		HX_STACK_VAR(tmp93,"tmp93");
			HX_STACK_LINE(207)
			int tmp94 = (int(tmp93) & int((int)2147483647));		HX_STACK_VAR(tmp94,"tmp94");
			HX_STACK_LINE(207)
			int tmp95 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp94;		HX_STACK_VAR(tmp95,"tmp95");
			HX_STACK_LINE(207)
			Float tmp96 = (Float(tmp95) / Float((int)2147483647));		HX_STACK_VAR(tmp96,"tmp96");
			HX_STACK_LINE(207)
			::flixel::effects::particles::Bounds tmp97 = this->endBlue;		HX_STACK_VAR(tmp97,"tmp97");
			HX_STACK_LINE(207)
			Float tmp98 = tmp97->max;		HX_STACK_VAR(tmp98,"tmp98");
			HX_STACK_LINE(207)
			::flixel::effects::particles::Bounds tmp99 = this->endBlue;		HX_STACK_VAR(tmp99,"tmp99");
			HX_STACK_LINE(207)
			Float tmp100 = tmp99->min;		HX_STACK_VAR(tmp100,"tmp100");
			HX_STACK_LINE(207)
			Float tmp101 = (tmp98 - tmp100);		HX_STACK_VAR(tmp101,"tmp101");
			HX_STACK_LINE(207)
			Float tmp102 = (tmp96 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
			HX_STACK_LINE(207)
			Float tmp103 = (tmp90 + tmp102);		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(207)
			endBlueComp = tmp103;
		}
		HX_STACK_LINE(210)
		Float tmp89 = (endRedComp - startRedComp);		HX_STACK_VAR(tmp89,"tmp89");
		HX_STACK_LINE(210)
		particle->__FieldRef(HX_HCSTRING("rangeRed","\x94","\x5f","\xa1","\xc6")) = tmp89;
		HX_STACK_LINE(211)
		Float tmp90 = (endGreenComp - startGreenComp);		HX_STACK_VAR(tmp90,"tmp90");
		HX_STACK_LINE(211)
		particle->__FieldRef(HX_HCSTRING("rangeGreen","\xc6","\xeb","\x97","\x6c")) = tmp90;
		HX_STACK_LINE(212)
		Float tmp91 = (endBlueComp - startBlueComp);		HX_STACK_VAR(tmp91,"tmp91");
		HX_STACK_LINE(212)
		particle->__FieldRef(HX_HCSTRING("rangeBlue","\xf7","\x36","\x04","\xfc")) = tmp91;
		HX_STACK_LINE(214)
		particle->__FieldRef(HX_HCSTRING("useColoring","\xc6","\x62","\x0b","\xe4")) = false;
		HX_STACK_LINE(216)
		bool tmp92 = (particle->__Field(HX_HCSTRING("rangeRed","\x94","\x5f","\xa1","\xc6"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp92,"tmp92");
		HX_STACK_LINE(216)
		bool tmp93 = !(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
		HX_STACK_LINE(216)
		bool tmp94 = tmp93;		HX_STACK_VAR(tmp94,"tmp94");
		HX_STACK_LINE(216)
		bool tmp95;		HX_STACK_VAR(tmp95,"tmp95");
		HX_STACK_LINE(216)
		if ((tmp94)){
			HX_STACK_LINE(216)
			tmp95 = (particle->__Field(HX_HCSTRING("rangeGreen","\xc6","\xeb","\x97","\x6c"), hx::paccDynamic ) != (int)0);
		}
		else{
			HX_STACK_LINE(216)
			tmp95 = true;
		}
		HX_STACK_LINE(216)
		bool tmp96 = !(tmp95);		HX_STACK_VAR(tmp96,"tmp96");
		HX_STACK_LINE(216)
		bool tmp97;		HX_STACK_VAR(tmp97,"tmp97");
		HX_STACK_LINE(216)
		if ((tmp96)){
			HX_STACK_LINE(216)
			tmp97 = (particle->__Field(HX_HCSTRING("rangeBlue","\xf7","\x36","\x04","\xfc"), hx::paccDynamic ) != (int)0);
		}
		else{
			HX_STACK_LINE(216)
			tmp97 = true;
		}
		HX_STACK_LINE(216)
		if ((tmp97)){
			HX_STACK_LINE(218)
			particle->__FieldRef(HX_HCSTRING("useColoring","\xc6","\x62","\x0b","\xe4")) = true;
		}
		HX_STACK_LINE(222)
		::flixel::effects::particles::Bounds tmp98 = this->startScale;		HX_STACK_VAR(tmp98,"tmp98");
		HX_STACK_LINE(222)
		Float tmp99 = tmp98->min;		HX_STACK_VAR(tmp99,"tmp99");
		HX_STACK_LINE(222)
		::flixel::effects::particles::Bounds tmp100 = this->startScale;		HX_STACK_VAR(tmp100,"tmp100");
		HX_STACK_LINE(222)
		Float tmp101 = tmp100->max;		HX_STACK_VAR(tmp101,"tmp101");
		HX_STACK_LINE(222)
		bool tmp102 = (tmp99 != tmp101);		HX_STACK_VAR(tmp102,"tmp102");
		HX_STACK_LINE(222)
		if ((tmp102)){
			HX_STACK_LINE(224)
			::flixel::effects::particles::Bounds tmp103 = this->startScale;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(224)
			Float tmp104 = tmp103->min;		HX_STACK_VAR(tmp104,"tmp104");
			HX_STACK_LINE(224)
			int tmp105 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp105,"tmp105");
			HX_STACK_LINE(224)
			int tmp106 = (tmp105 * (int)48271);		HX_STACK_VAR(tmp106,"tmp106");
			HX_STACK_LINE(224)
			int tmp107 = hx::Mod(tmp106,(int)2147483647);		HX_STACK_VAR(tmp107,"tmp107");
			HX_STACK_LINE(224)
			int tmp108 = (int(tmp107) & int((int)2147483647));		HX_STACK_VAR(tmp108,"tmp108");
			HX_STACK_LINE(224)
			int tmp109 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp108;		HX_STACK_VAR(tmp109,"tmp109");
			HX_STACK_LINE(224)
			Float tmp110 = (Float(tmp109) / Float((int)2147483647));		HX_STACK_VAR(tmp110,"tmp110");
			HX_STACK_LINE(224)
			::flixel::effects::particles::Bounds tmp111 = this->startScale;		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(224)
			Float tmp112 = tmp111->max;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(224)
			::flixel::effects::particles::Bounds tmp113 = this->startScale;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(224)
			Float tmp114 = tmp113->min;		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(224)
			Float tmp115 = (tmp112 - tmp114);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(224)
			Float tmp116 = (tmp110 * tmp115);		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(224)
			Float tmp117 = (tmp104 + tmp116);		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(224)
			particle->__FieldRef(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94")) = tmp117;
		}
		else{
			HX_STACK_LINE(228)
			::flixel::effects::particles::Bounds tmp103 = this->startScale;		HX_STACK_VAR(tmp103,"tmp103");
			HX_STACK_LINE(228)
			particle->__FieldRef(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94")) = tmp103->min;
		}
		HX_STACK_LINE(230)
		Float tmp103 = particle->__Field(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94"), hx::paccDynamic );		HX_STACK_VAR(tmp103,"tmp103");
		HX_STACK_LINE(230)
		Float tmp104 = particle->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
		HX_STACK_LINE(230)
		particle->__Field(HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"), hx::paccDynamic )->__Field(HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"), hx::paccDynamic )(tmp104);
		HX_STACK_LINE(232)
		::flixel::effects::particles::Bounds tmp105 = this->endScale;		HX_STACK_VAR(tmp105,"tmp105");
		HX_STACK_LINE(232)
		Float particleEndScale = tmp105->min;		HX_STACK_VAR(particleEndScale,"particleEndScale");
		HX_STACK_LINE(234)
		::flixel::effects::particles::Bounds tmp106 = this->endScale;		HX_STACK_VAR(tmp106,"tmp106");
		HX_STACK_LINE(234)
		Float tmp107 = tmp106->min;		HX_STACK_VAR(tmp107,"tmp107");
		HX_STACK_LINE(234)
		::flixel::effects::particles::Bounds tmp108 = this->endScale;		HX_STACK_VAR(tmp108,"tmp108");
		HX_STACK_LINE(234)
		Float tmp109 = tmp108->max;		HX_STACK_VAR(tmp109,"tmp109");
		HX_STACK_LINE(234)
		bool tmp110 = (tmp107 != tmp109);		HX_STACK_VAR(tmp110,"tmp110");
		HX_STACK_LINE(234)
		if ((tmp110)){
			HX_STACK_LINE(236)
			::flixel::effects::particles::Bounds tmp111 = this->endScale;		HX_STACK_VAR(tmp111,"tmp111");
			HX_STACK_LINE(236)
			Float tmp112 = tmp111->min;		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(236)
			int tmp113 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp113,"tmp113");
			HX_STACK_LINE(236)
			int tmp114 = (tmp113 * (int)48271);		HX_STACK_VAR(tmp114,"tmp114");
			HX_STACK_LINE(236)
			int tmp115 = hx::Mod(tmp114,(int)2147483647);		HX_STACK_VAR(tmp115,"tmp115");
			HX_STACK_LINE(236)
			int tmp116 = (int(tmp115) & int((int)2147483647));		HX_STACK_VAR(tmp116,"tmp116");
			HX_STACK_LINE(236)
			int tmp117 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp116;		HX_STACK_VAR(tmp117,"tmp117");
			HX_STACK_LINE(236)
			Float tmp118 = (Float(tmp117) / Float((int)2147483647));		HX_STACK_VAR(tmp118,"tmp118");
			HX_STACK_LINE(236)
			::flixel::effects::particles::Bounds tmp119 = this->endScale;		HX_STACK_VAR(tmp119,"tmp119");
			HX_STACK_LINE(236)
			Float tmp120 = tmp119->max;		HX_STACK_VAR(tmp120,"tmp120");
			HX_STACK_LINE(236)
			::flixel::effects::particles::Bounds tmp121 = this->endScale;		HX_STACK_VAR(tmp121,"tmp121");
			HX_STACK_LINE(236)
			Float tmp122 = tmp121->min;		HX_STACK_VAR(tmp122,"tmp122");
			HX_STACK_LINE(236)
			Float tmp123 = (tmp120 - tmp122);		HX_STACK_VAR(tmp123,"tmp123");
			HX_STACK_LINE(236)
			Float tmp124 = (tmp118 * tmp123);		HX_STACK_VAR(tmp124,"tmp124");
			HX_STACK_LINE(236)
			int tmp125 = ::Std_obj::_int(tmp124);		HX_STACK_VAR(tmp125,"tmp125");
			HX_STACK_LINE(236)
			Float tmp126 = (tmp112 + tmp125);		HX_STACK_VAR(tmp126,"tmp126");
			HX_STACK_LINE(236)
			particleEndScale = tmp126;
		}
		HX_STACK_LINE(239)
		bool tmp111 = (particleEndScale != particle->__Field(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94"), hx::paccDynamic ));		HX_STACK_VAR(tmp111,"tmp111");
		HX_STACK_LINE(239)
		if ((tmp111)){
			HX_STACK_LINE(241)
			particle->__FieldRef(HX_HCSTRING("useScaling","\xc0","\x90","\xbd","\x67")) = true;
			HX_STACK_LINE(242)
			Float tmp112 = (particleEndScale - particle->__Field(HX_HCSTRING("startScale","\xc8","\xa6","\xe5","\x94"), hx::paccDynamic ));		HX_STACK_VAR(tmp112,"tmp112");
			HX_STACK_LINE(242)
			particle->__FieldRef(HX_HCSTRING("rangeScale","\x8d","\xab","\x79","\x4b")) = tmp112;
		}
		else{
			HX_STACK_LINE(246)
			particle->__FieldRef(HX_HCSTRING("useScaling","\xc0","\x90","\xbd","\x67")) = false;
			HX_STACK_LINE(247)
			particle->__FieldRef(HX_HCSTRING("rangeScale","\x8d","\xab","\x79","\x4b")) = (int)0;
		}
		HX_STACK_LINE(250)
		::openfl::_legacy::display::BlendMode tmp112 = this->blend;		HX_STACK_VAR(tmp112,"tmp112");
		HX_STACK_LINE(250)
		particle->__Field(HX_HCSTRING("set_blend","\xb4","\x30","\xef","\xdb"), hx::paccDynamic )(tmp112);
		HX_STACK_LINE(253)
		Dynamic tmp113 = particle;		HX_STACK_VAR(tmp113,"tmp113");
		HX_STACK_LINE(253)
		Float tmp114 = this->angle;		HX_STACK_VAR(tmp114,"tmp114");
		HX_STACK_LINE(253)
		Float tmp115 = this->distance;		HX_STACK_VAR(tmp115,"tmp115");
		HX_STACK_LINE(253)
		Float tmp116 = this->angleRange;		HX_STACK_VAR(tmp116,"tmp116");
		HX_STACK_LINE(253)
		Float tmp117 = this->distanceRange;		HX_STACK_VAR(tmp117,"tmp117");
		HX_STACK_LINE(253)
		this->setParticleMotion(tmp113,tmp114,tmp115,tmp116,tmp117);
		HX_STACK_LINE(254)
		::flixel::util::FlxPoint tmp118 = this->acceleration;		HX_STACK_VAR(tmp118,"tmp118");
		HX_STACK_LINE(254)
		Float tmp119 = tmp118->x;		HX_STACK_VAR(tmp119,"tmp119");
		HX_STACK_LINE(254)
		::flixel::util::FlxPoint tmp120 = this->acceleration;		HX_STACK_VAR(tmp120,"tmp120");
		HX_STACK_LINE(254)
		Float tmp121 = tmp120->y;		HX_STACK_VAR(tmp121,"tmp121");
		HX_STACK_LINE(254)
		particle->__Field(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp119,tmp121);
		HX_STACK_LINE(256)
		::flixel::effects::particles::Bounds tmp122 = this->rotation;		HX_STACK_VAR(tmp122,"tmp122");
		HX_STACK_LINE(256)
		Float tmp123 = tmp122->min;		HX_STACK_VAR(tmp123,"tmp123");
		HX_STACK_LINE(256)
		::flixel::effects::particles::Bounds tmp124 = this->rotation;		HX_STACK_VAR(tmp124,"tmp124");
		HX_STACK_LINE(256)
		Float tmp125 = tmp124->max;		HX_STACK_VAR(tmp125,"tmp125");
		HX_STACK_LINE(256)
		bool tmp126 = (tmp123 != tmp125);		HX_STACK_VAR(tmp126,"tmp126");
		HX_STACK_LINE(256)
		if ((tmp126)){
			HX_STACK_LINE(258)
			::flixel::effects::particles::Bounds tmp127 = this->rotation;		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(258)
			Float tmp128 = tmp127->min;		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(258)
			int tmp129 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(258)
			int tmp130 = (tmp129 * (int)48271);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(258)
			int tmp131 = hx::Mod(tmp130,(int)2147483647);		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(258)
			int tmp132 = (int(tmp131) & int((int)2147483647));		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(258)
			int tmp133 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp132;		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(258)
			Float tmp134 = (Float(tmp133) / Float((int)2147483647));		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(258)
			::flixel::effects::particles::Bounds tmp135 = this->rotation;		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(258)
			Float tmp136 = tmp135->max;		HX_STACK_VAR(tmp136,"tmp136");
			HX_STACK_LINE(258)
			::flixel::effects::particles::Bounds tmp137 = this->rotation;		HX_STACK_VAR(tmp137,"tmp137");
			HX_STACK_LINE(258)
			Float tmp138 = tmp137->min;		HX_STACK_VAR(tmp138,"tmp138");
			HX_STACK_LINE(258)
			Float tmp139 = (tmp136 - tmp138);		HX_STACK_VAR(tmp139,"tmp139");
			HX_STACK_LINE(258)
			Float tmp140 = (tmp134 * tmp139);		HX_STACK_VAR(tmp140,"tmp140");
			HX_STACK_LINE(258)
			Float tmp141 = (tmp128 + tmp140);		HX_STACK_VAR(tmp141,"tmp141");
			HX_STACK_LINE(258)
			particle->__FieldRef(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")) = tmp141;
		}
		else{
			HX_STACK_LINE(262)
			::flixel::effects::particles::Bounds tmp127 = this->rotation;		HX_STACK_VAR(tmp127,"tmp127");
			HX_STACK_LINE(262)
			particle->__FieldRef(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58")) = tmp127->min;
		}
		HX_STACK_LINE(264)
		bool tmp127 = (particle->__Field(HX_HCSTRING("angularVelocity","\x1f","\x1f","\xfe","\x58"), hx::paccDynamic ) != (int)0);		HX_STACK_VAR(tmp127,"tmp127");
		HX_STACK_LINE(264)
		if ((tmp127)){
			HX_STACK_LINE(266)
			int tmp128 = ::flixel::util::FlxRandom_obj::_internalSeed;		HX_STACK_VAR(tmp128,"tmp128");
			HX_STACK_LINE(266)
			int tmp129 = (tmp128 * (int)48271);		HX_STACK_VAR(tmp129,"tmp129");
			HX_STACK_LINE(266)
			int tmp130 = hx::Mod(tmp129,(int)2147483647);		HX_STACK_VAR(tmp130,"tmp130");
			HX_STACK_LINE(266)
			int tmp131 = (int(tmp130) & int((int)2147483647));		HX_STACK_VAR(tmp131,"tmp131");
			HX_STACK_LINE(266)
			int tmp132 = ::flixel::util::FlxRandom_obj::_internalSeed = tmp131;		HX_STACK_VAR(tmp132,"tmp132");
			HX_STACK_LINE(266)
			Float tmp133 = (Float(tmp132) / Float((int)2147483647));		HX_STACK_VAR(tmp133,"tmp133");
			HX_STACK_LINE(266)
			Float tmp134 = (tmp133 * (int)360);		HX_STACK_VAR(tmp134,"tmp134");
			HX_STACK_LINE(266)
			Float tmp135 = (tmp134 - (int)180);		HX_STACK_VAR(tmp135,"tmp135");
			HX_STACK_LINE(266)
			particle->__Field(HX_HCSTRING("set_angle","\x36","\x8c","\xdc","\x49"), hx::paccDynamic )(tmp135);
		}
		HX_STACK_LINE(269)
		::flixel::util::FlxPoint tmp128 = this->particleDrag;		HX_STACK_VAR(tmp128,"tmp128");
		HX_STACK_LINE(269)
		Float tmp129 = tmp128->x;		HX_STACK_VAR(tmp129,"tmp129");
		HX_STACK_LINE(269)
		::flixel::util::FlxPoint tmp130 = this->particleDrag;		HX_STACK_VAR(tmp130,"tmp130");
		HX_STACK_LINE(269)
		Float tmp131 = tmp130->y;		HX_STACK_VAR(tmp131,"tmp131");
		HX_STACK_LINE(269)
		particle->__Field(HX_HCSTRING("drag","\xf4","\x2b","\x70","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"), hx::paccDynamic )(tmp129,tmp131);
		HX_STACK_LINE(270)
		particle->__Field(HX_HCSTRING("onEmit","\x12","\xa7","\x9f","\xe5"), hx::paccDynamic )();
	}
return null();
}



FlxTypedEmitterExt_obj::FlxTypedEmitterExt_obj()
{
}

Dynamic FlxTypedEmitterExt_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return setMotion_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleRange") ) { return angleRange; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"emitParticle") ) { return emitParticle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceRange") ) { return distanceRange; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setParticleMotion") ) { return setParticleMotion_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedEmitterExt_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleRange") ) { angleRange=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceRange") ) { distanceRange=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTypedEmitterExt_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void FlxTypedEmitterExt_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("angleRange","\xea","\x14","\xa5","\xe7"));
	outFields->push(HX_HCSTRING("distanceRange","\x48","\xc2","\xa8","\xab"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxTypedEmitterExt_obj,angle),HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitterExt_obj,distance),HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitterExt_obj,angleRange),HX_HCSTRING("angleRange","\xea","\x14","\xa5","\xe7")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitterExt_obj,distanceRange),HX_HCSTRING("distanceRange","\x48","\xc2","\xa8","\xab")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("angleRange","\xea","\x14","\xa5","\xe7"),
	HX_HCSTRING("distanceRange","\x48","\xc2","\xa8","\xab"),
	HX_HCSTRING("setMotion","\x78","\xfb","\x04","\x2b"),
	HX_HCSTRING("setParticleMotion","\x5e","\xb8","\xc5","\xd6"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("emitParticle","\xb9","\xa3","\x6b","\x89"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedEmitterExt_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedEmitterExt_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTypedEmitterExt_obj::__mClass;

void FlxTypedEmitterExt_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.particles.FlxTypedEmitterExt","\x8a","\x6f","\xab","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &FlxTypedEmitterExt_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTypedEmitterExt_obj >;
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
} // end namespace effects
} // end namespace particles
