#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitterExt
#include <flixel/effects/particles/FlxEmitterExt.h>
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
namespace flixel{
namespace effects{
namespace particles{

Void FlxEmitterExt_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{
HX_STACK_FRAME("flixel.effects.particles.FlxEmitterExt","new",0x1c23f838,"flixel.effects.particles.FlxEmitterExt.new","flixel/effects/particles/FlxEmitterExt.hx",20,0xe4b5ebbb)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Size,"Size")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Size = __o_Size.Default(0);
{
	HX_STACK_LINE(21)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	int tmp2 = Size;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//FlxEmitterExt_obj::~FlxEmitterExt_obj() { }

Dynamic FlxEmitterExt_obj::__CreateEmpty() { return  new FlxEmitterExt_obj; }
hx::ObjectPtr< FlxEmitterExt_obj > FlxEmitterExt_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{  hx::ObjectPtr< FlxEmitterExt_obj > _result_ = new FlxEmitterExt_obj();
	_result_->__construct(__o_X,__o_Y,__o_Size);
	return _result_;}

Dynamic FlxEmitterExt_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxEmitterExt_obj > _result_ = new FlxEmitterExt_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}


FlxEmitterExt_obj::FlxEmitterExt_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEmitterExt_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEmitterExt_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxEmitterExt_obj::__mClass;

void FlxEmitterExt_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.effects.particles.FlxEmitterExt","\x46","\xbc","\xcd","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxEmitterExt_obj >;
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
