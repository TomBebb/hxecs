// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_org_hamcrest_AssertionException
#include <org/hamcrest/AssertionException.h>
#endif
#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6224640c8b7182b7_12_new,"org.hamcrest.AssertionException","new",0x059f6420,"org.hamcrest.AssertionException.new","org/hamcrest/AssertionException.hx",12,0xacddbb70)
namespace org{
namespace hamcrest{

void AssertionException_obj::__construct(::String __o_message, ::Dynamic cause, ::Dynamic info){
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_6224640c8b7182b7_12_new)
HXDLIN(  12)		super::__construct(message,cause,info);
            	}

Dynamic AssertionException_obj::__CreateEmpty() { return new AssertionException_obj; }

void *AssertionException_obj::_hx_vtable = 0;

Dynamic AssertionException_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssertionException_obj > _hx_result = new AssertionException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AssertionException_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2130c454) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2130c454;
	} else {
		return inClassId==(int)0x78188e08;
	}
}


hx::ObjectPtr< AssertionException_obj > AssertionException_obj::__new(::String __o_message, ::Dynamic cause, ::Dynamic info) {
	hx::ObjectPtr< AssertionException_obj > __this = new AssertionException_obj();
	__this->__construct(__o_message,cause,info);
	return __this;
}

hx::ObjectPtr< AssertionException_obj > AssertionException_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_message, ::Dynamic cause, ::Dynamic info) {
	AssertionException_obj *__this = (AssertionException_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssertionException_obj), true, "org.hamcrest.AssertionException"));
	*(void **)__this = AssertionException_obj::_hx_vtable;
	__this->__construct(__o_message,cause,info);
	return __this;
}

AssertionException_obj::AssertionException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AssertionException_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AssertionException_obj_sStaticStorageInfo = 0;
#endif

static void AssertionException_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssertionException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssertionException_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssertionException_obj::__mClass,"__mClass");
};

#endif

hx::Class AssertionException_obj::__mClass;

void AssertionException_obj::__register()
{
	hx::Object *dummy = new AssertionException_obj;
	AssertionException_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.hamcrest.AssertionException","\x2e","\x14","\x5b","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssertionException_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssertionException_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssertionException_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssertionException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssertionException_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace org
} // end namespace hamcrest
