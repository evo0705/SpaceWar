#include <hxcpp.h>

#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Ship
#include <Ship.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_store_EnemyStore
#include <store/EnemyStore.h>
#endif

Void Enemy_obj::__construct()
{
HX_STACK_FRAME("Enemy","new",0x35d4571a,"Enemy.new","Enemy.hx",14,0xbda88996)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Enemy_obj::~Enemy_obj() { }

Dynamic Enemy_obj::__CreateEmpty() { return  new Enemy_obj; }
hx::ObjectPtr< Enemy_obj > Enemy_obj::__new()
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct();
	return _result_;}

Dynamic Enemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct();
	return _result_;}

Void Enemy_obj::makeEnemy( hx::Null< int >  __o_Quantity,::String __o_ShipName){
int Quantity = __o_Quantity.Default(0);
::String ShipName = __o_ShipName.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("Enemy","makeEnemy",0x0c54d7b4,"Enemy.makeEnemy","Enemy.hx",18,0xbda88996)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(ShipName,"ShipName")
{
		HX_STACK_LINE(19)
		::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		if ((tmp1)){
			HX_STACK_LINE(19)
			::flixel::group::FlxTypedGroup tmp2 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(19)
			this->group = tmp2;
		}
		HX_STACK_LINE(20)
		bool tmp2 = (ShipName != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(20)
		if ((tmp2)){
			HX_STACK_LINE(21)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(21)
			while((true)){
				HX_STACK_LINE(21)
				bool tmp3 = (_g < Quantity);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(21)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(21)
				if ((tmp4)){
					HX_STACK_LINE(21)
					break;
				}
				HX_STACK_LINE(21)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(21)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(22)
				::String tmp6 = ShipName;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(22)
				Dynamic tmp7 = ::Reflect_obj::field(hx::ClassOf< ::store::EnemyStore >(),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(22)
				Dynamic tmp8 = ::Reflect_obj::callMethod(hx::ClassOf< ::store::EnemyStore >(),tmp7,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(22)
				::Ship tempShip = tmp8;		HX_STACK_VAR(tempShip,"tempShip");
				HX_STACK_LINE(23)
				tempShip->set_exists(false);
				HX_STACK_LINE(24)
				::flixel::group::FlxTypedGroup tmp9 = this->group;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(24)
				::Ship tmp10 = tempShip;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(24)
				tmp9->add(tmp10);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Enemy_obj,makeEnemy,(void))

Void Enemy_obj::spawn( Float X,Float Y){
{
		HX_STACK_FRAME("Enemy","spawn",0x7d21c775,"Enemy.spawn","Enemy.hx",30,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(31)
		::Ship tmp = this->getFreeEnemy();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		::Ship freeEnemy = tmp;		HX_STACK_VAR(freeEnemy,"freeEnemy");
		HX_STACK_LINE(32)
		bool tmp1 = (freeEnemy != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		if ((tmp1)){
			HX_STACK_LINE(33)
			Float tmp2 = X;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			freeEnemy->set_x(tmp2);
			HX_STACK_LINE(33)
			Float tmp3 = Y;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			Float tmp4 = freeEnemy->get_height();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(33)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(33)
			freeEnemy->set_y(tmp5);
			HX_STACK_LINE(33)
			bool tmp6 = freeEnemy->set_exists(true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(33)
			freeEnemy->set_alive(tmp6);
			HX_STACK_LINE(33)
			freeEnemy->health = freeEnemy->maxHealth;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Enemy_obj,spawn,(void))

::Ship Enemy_obj::getFreeEnemy( ){
	HX_STACK_FRAME("Enemy","getFreeEnemy",0x2d02e48c,"Enemy.getFreeEnemy","Enemy.hx",38,0xbda88996)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	::Ship result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(41)
	::flixel::group::FlxTypedGroup tmp = this->group;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	if ((tmp2)){
		HX_STACK_LINE(41)
		::flixel::group::FlxTypedGroup tmp4 = this->group;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		::flixel::group::FlxTypedGroup tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		int tmp6 = tmp5->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		tmp3 = (tmp6 == (int)0);
	}
	else{
		HX_STACK_LINE(41)
		tmp3 = true;
	}
	HX_STACK_LINE(41)
	if ((tmp3)){
		HX_STACK_LINE(43)
		HX_STACK_DO_THROW(HX_HCSTRING("Enemy.hx cannot spawn an enemy until one has been created via a call to makeEnemy","\xcf","\xf7","\x9c","\xd0"));
		HX_STACK_LINE(44)
		return null();
	}
	HX_STACK_LINE(47)
	::Ship ship;		HX_STACK_VAR(ship,"ship");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(49)
		::flixel::group::FlxTypedGroup tmp4 = this->group;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		int tmp5 = tmp4->members->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		int _g = tmp5;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(49)
		while((true)){
			HX_STACK_LINE(49)
			bool tmp6 = (_g1 < _g);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			if ((tmp7)){
				HX_STACK_LINE(49)
				break;
			}
			HX_STACK_LINE(49)
			int tmp8 = (_g1)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(49)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(51)
			::flixel::group::FlxTypedGroup tmp9 = this->group;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(51)
			::Ship tmp10 = tmp9->members->__GetItem(i);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(51)
			ship = tmp10;
			HX_STACK_LINE(53)
			bool tmp11 = (ship->exists == false);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(53)
			if ((tmp11)){
				HX_STACK_LINE(55)
				result = ship;
				HX_STACK_LINE(56)
				break;
			}
		}
	}
	HX_STACK_LINE(60)
	::Ship tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,getFreeEnemy,return )


Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(group,"group");
	HX_MARK_END_CLASS();
}

void Enemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(group,"group");
}

Dynamic Enemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { return group; }
		if (HX_FIELD_EQ(inName,"spawn") ) { return spawn_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"makeEnemy") ) { return makeEnemy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFreeEnemy") ) { return getFreeEnemy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Enemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"group") ) { group=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Enemy_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	return false;
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(Enemy_obj,group),HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("group","\x3f","\xb3","\xf4","\x99"),
	HX_HCSTRING("makeEnemy","\x7a","\x89","\x13","\x44"),
	HX_HCSTRING("spawn","\x3b","\x9e","\x66","\x81"),
	HX_HCSTRING("getFreeEnemy","\x86","\x12","\xa9","\x61"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#endif

hx::Class Enemy_obj::__mClass;

void Enemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &Enemy_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Enemy_obj >;
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

