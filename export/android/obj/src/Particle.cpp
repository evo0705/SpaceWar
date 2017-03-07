#include <hxcpp.h>

#ifndef INCLUDED_Particle
#include <Particle.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif

Void Particle_obj::__construct(Dynamic SimpleGraphic,int Width,int Height,Array< int > Frames,hx::Null< int >  __o_FrameRate,Dynamic __o_Alpha)
{
HX_STACK_FRAME("Particle","new",0x95e2c658,"Particle.new","Particle.hx",9,0x11e44c18)
HX_STACK_THIS(this)
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(Frames,"Frames")
HX_STACK_ARG(__o_FrameRate,"FrameRate")
HX_STACK_ARG(__o_Alpha,"Alpha")
int FrameRate = __o_FrameRate.Default(30);
Dynamic Alpha = __o_Alpha.Default(((Float).7));
{
	HX_STACK_LINE(12)
	this->duration = ((Float)0.5);
	HX_STACK_LINE(15)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(16)
	Dynamic tmp = SimpleGraphic;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	int tmp1 = Width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	int tmp2 = Height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	this->loadGraphic(tmp,true,tmp1,tmp2,null(),null());
	HX_STACK_LINE(17)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(17)
	int tmp4 = FrameRate;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(17)
	tmp3->add(HX_HCSTRING("kaboom","\xc1","\x64","\x29","\xe3"),Frames,tmp4,false);
	HX_STACK_LINE(18)
	Dynamic tmp5 = Alpha;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(18)
	this->set_alpha(tmp5);
	HX_STACK_LINE(19)
	this->set_exists(false);
}
;
	return null();
}

//Particle_obj::~Particle_obj() { }

Dynamic Particle_obj::__CreateEmpty() { return  new Particle_obj; }
hx::ObjectPtr< Particle_obj > Particle_obj::__new(Dynamic SimpleGraphic,int Width,int Height,Array< int > Frames,hx::Null< int >  __o_FrameRate,Dynamic __o_Alpha)
{  hx::ObjectPtr< Particle_obj > _result_ = new Particle_obj();
	_result_->__construct(SimpleGraphic,Width,Height,Frames,__o_FrameRate,__o_Alpha);
	return _result_;}

Dynamic Particle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Particle_obj > _result_ = new Particle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void Particle_obj::start( Float X,Float Y){
{
		HX_STACK_FRAME("Particle","start",0xd3bdd85a,"Particle.start","Particle.hx",22,0x11e44c18)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(23)
		Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		Float tmp1 = this->get_width();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		Float tmp3 = (tmp - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		this->set_x(tmp3);
		HX_STACK_LINE(24)
		Float tmp4 = Y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		Float tmp5 = this->get_height();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(24)
		this->set_y(tmp7);
		HX_STACK_LINE(25)
		this->set_exists(true);
		HX_STACK_LINE(26)
		::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(26)
		tmp8->play(HX_HCSTRING("kaboom","\xc1","\x64","\x29","\xe3"),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Particle_obj,start,(void))

Void Particle_obj::update( ){
{
		HX_STACK_FRAME("Particle","update",0xf36a9b11,"Particle.update","Particle.hx",29,0x11e44c18)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::update();
		HX_STACK_LINE(31)
		::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		bool tmp1 = tmp->get_finished();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		if ((tmp1)){
			HX_STACK_LINE(32)
			bool tmp2 = this->set_exists(false);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			this->set_alive(tmp2);
		}
	}
return null();
}



Particle_obj::Particle_obj()
{
}

Dynamic Particle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Particle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Particle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Particle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Particle_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Particle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Particle_obj::__mClass,"__mClass");
};

#endif

hx::Class Particle_obj::__mClass;

void Particle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Particle","\x66","\xfa","\x42","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Particle_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Particle_obj >;
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

