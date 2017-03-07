#include <hxcpp.h>

#ifndef INCLUDED_TestRope
#include <TestRope.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif

Void TestRope_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("TestRope","new",0xc98b6376,"TestRope.new","TestRope.hx",10,0x46ee3cba)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(10)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	super::__construct(tmp);
}
;
	return null();
}

//TestRope_obj::~TestRope_obj() { }

Dynamic TestRope_obj::__CreateEmpty() { return  new TestRope_obj; }
hx::ObjectPtr< TestRope_obj > TestRope_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< TestRope_obj > _result_ = new TestRope_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic TestRope_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestRope_obj > _result_ = new TestRope_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void TestRope_obj::create( ){
{
		HX_STACK_FRAME("TestRope","create",0x482065a6,"TestRope.create","TestRope.hx",15,0x46ee3cba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		this->super::create();
		HX_STACK_LINE(17)
		int tmp = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		::flixel::FlxSprite tmp2 = ::flixel::FlxSprite_obj::__new(tmp1,(int)0,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		this->rope = tmp2;
		HX_STACK_LINE(18)
		::flixel::FlxSprite tmp3 = this->rope;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		int tmp4 = ::flixel::FlxG_obj::height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(18)
		tmp3->makeGraphic((int)10,tmp4,(int)-65536,null(),null());
		HX_STACK_LINE(19)
		::flixel::FlxSprite tmp5 = this->rope;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(19)
		this->add(tmp5);
	}
return null();
}


Void TestRope_obj::dragLeft( ){
{
		HX_STACK_FRAME("TestRope","dragLeft",0xd6fde745,"TestRope.dragLeft","TestRope.hx",22,0x46ee3cba)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestRope_obj,dragLeft,(void))

Void TestRope_obj::dragRight( ){
{
		HX_STACK_FRAME("TestRope","dragRight",0xbe3982de,"TestRope.dragRight","TestRope.hx",26,0x46ee3cba)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestRope_obj,dragRight,(void))

Void TestRope_obj::update( ){
{
		HX_STACK_FRAME("TestRope","update",0x531684b3,"TestRope.update","TestRope.hx",30,0x46ee3cba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		this->super::update();
		HX_STACK_LINE(33)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::flixel::input::keyboard::FlxKeyboard tmp1 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		int tmp2 = tmp1->pressed->checkStatus;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		bool tmp4 = tmp->checkStatus((int)37,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		if ((tmp4)){
			HX_STACK_LINE(33)
			::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(33)
			::flixel::input::keyboard::FlxKeyboard tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(33)
			::flixel::input::keyboard::FlxKeyboard tmp8 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(33)
			::flixel::input::keyboard::FlxKeyboard tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(33)
			int tmp10 = tmp9->pressed->checkStatus;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(33)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(33)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(33)
			bool tmp13 = tmp7->checkStatus((int)39,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(33)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(33)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(33)
			tmp5 = !(tmp15);
		}
		else{
			HX_STACK_LINE(33)
			tmp5 = false;
		}
		HX_STACK_LINE(33)
		if ((tmp5)){
			HX_STACK_LINE(34)
			::flixel::FlxSprite tmp6 = this->rope;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(34)
			::flixel::FlxSprite _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(34)
			Float _g1 = _g->x;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(34)
			Float tmp7 = (_g1 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(34)
			_g->set_x(tmp7);
			HX_STACK_LINE(34)
			_g1;
		}
		HX_STACK_LINE(36)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(36)
		::flixel::input::keyboard::FlxKeyboard tmp7 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(36)
		int tmp8 = tmp7->pressed->checkStatus;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(36)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(36)
		bool tmp10 = tmp6->checkStatus((int)39,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(36)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(36)
		if ((tmp10)){
			HX_STACK_LINE(36)
			::flixel::input::keyboard::FlxKeyboard tmp12 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(36)
			::flixel::input::keyboard::FlxKeyboard tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(36)
			::flixel::input::keyboard::FlxKeyboard tmp14 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(36)
			::flixel::input::keyboard::FlxKeyboard tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(36)
			int tmp16 = tmp15->pressed->checkStatus;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(36)
			int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(36)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(36)
			bool tmp19 = tmp13->checkStatus((int)37,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(36)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(36)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(36)
			tmp11 = !(tmp21);
		}
		else{
			HX_STACK_LINE(36)
			tmp11 = false;
		}
		HX_STACK_LINE(36)
		if ((tmp11)){
			HX_STACK_LINE(37)
			::flixel::FlxSprite tmp12 = this->rope;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(37)
			::flixel::FlxSprite _g = tmp12;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			Float _g1 = _g->x;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(37)
			Float tmp13 = (_g1 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(37)
			_g->set_x(tmp13);
			HX_STACK_LINE(37)
			_g1;
		}
	}
return null();
}


Void TestRope_obj::destroy( ){
{
		HX_STACK_FRAME("TestRope","destroy",0xe7540310,"TestRope.destroy","TestRope.hx",42,0x46ee3cba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->super::destroy();
	}
return null();
}



TestRope_obj::TestRope_obj()
{
}

void TestRope_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestRope);
	HX_MARK_MEMBER_NAME(rope,"rope");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TestRope_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rope,"rope");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TestRope_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rope") ) { return rope; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dragLeft") ) { return dragLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragRight") ) { return dragRight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestRope_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rope") ) { rope=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestRope_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("rope","\xf2","\xee","\xae","\x4b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(TestRope_obj,rope),HX_HCSTRING("rope","\xf2","\xee","\xae","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("rope","\xf2","\xee","\xae","\x4b"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("dragLeft","\x1b","\x6a","\xb0","\x25"),
	HX_HCSTRING("dragRight","\x48","\x7b","\xb9","\x4b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestRope_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestRope_obj::__mClass,"__mClass");
};

#endif

hx::Class TestRope_obj::__mClass;

void TestRope_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TestRope","\x84","\x30","\x93","\x28");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestRope_obj >;
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

