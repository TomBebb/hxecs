// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
#ifndef INCLUDED_org_hamcrest_UnsupportedOperationException
#include <org/hamcrest/UnsupportedOperationException.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_571249a33d4d8c7f_61_new,"org.hamcrest.UnsupportedOperationException","new",0xfc132ace,"org.hamcrest.UnsupportedOperationException.new","org/hamcrest/Exception.hx",61,0x940281f0)
namespace org{
namespace hamcrest{

void UnsupportedOperationException_obj::__construct(::String __o_message, ::Dynamic cause, ::Dynamic info){
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_571249a33d4d8c7f_61_new)
HXDLIN(  61)		super::__construct(message,cause,info);
            	}

Dynamic UnsupportedOperationException_obj::__CreateEmpty() { return new UnsupportedOperationException_obj; }

void *UnsupportedOperationException_obj::_hx_vtable = 0;

Dynamic UnsupportedOperationException_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< UnsupportedOperationException_obj > _hx_result = new UnsupportedOperationException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool UnsupportedOperationException_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5a310176) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x5a310176;
	} else {
		return inClassId==(int)0x78188e08;
	}
}


hx::ObjectPtr< UnsupportedOperationException_obj > UnsupportedOperationException_obj::__new(::String __o_message, ::Dynamic cause, ::Dynamic info) {
	hx::ObjectPtr< UnsupportedOperationException_obj > __this = new UnsupportedOperationException_obj();
	__this->__construct(__o_message,cause,info);
	return __this;
}

hx::ObjectPtr< UnsupportedOperationException_obj > UnsupportedOperationException_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_message, ::Dynamic cause, ::Dynamic info) {
	UnsupportedOperationException_obj *__this = (UnsupportedOperationException_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(UnsupportedOperationException_obj), true, "org.hamcrest.UnsupportedOperationException"));
	*(void **)__this = UnsupportedOperationException_obj::_hx_vtable;
	__this->__construct(__o_message,cause,info);
	return __this;
}

UnsupportedOperationException_obj::UnsupportedOperationException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *UnsupportedOperationException_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *UnsupportedOperationException_obj_sStaticStorageInfo = 0;
#endif

static void UnsupportedOperationException_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UnsupportedOperationException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UnsupportedOperationException_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UnsupportedOperationException_obj::__mClass,"__mClass");
};

#endif

hx::Class UnsupportedOperationException_obj::__mClass;

void UnsupportedOperationException_obj::__register()
{
	hx::Object *dummy = new UnsupportedOperationException_obj;
	UnsupportedOperationException_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.hamcrest.UnsupportedOperationException","\xdc","\x6b","\x1e","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UnsupportedOperationException_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< UnsupportedOperationException_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UnsupportedOperationException_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UnsupportedOperationException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UnsupportedOperationException_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace org
} // end namespace hamcrest
