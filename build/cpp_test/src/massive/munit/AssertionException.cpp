// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b92483b1fa7f782_49_new,"massive.munit.AssertionException","new",0xc7bddb66,"massive.munit.AssertionException.new","massive/munit/AssertionException.hx",49,0xfa5e38c8)
namespace massive{
namespace munit{

void AssertionException_obj::__construct(::String msg, ::Dynamic info){
            	HX_STACKFRAME(&_hx_pos_3b92483b1fa7f782_49_new)
HXLINE(  50)		super::__construct(msg,info);
HXLINE(  51)		this->type = ( (::String)(::massive::haxe::util::ReflectUtil_obj::here(hx::SourceInfo(HX_("AssertionException.hx",91,6b,fd,f3),51,HX_("massive.munit.AssertionException",74,f0,4e,74),HX_("new",60,d0,53,00)))->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) );
            	}

Dynamic AssertionException_obj::__CreateEmpty() { return new AssertionException_obj; }

void *AssertionException_obj::_hx_vtable = 0;

Dynamic AssertionException_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssertionException_obj > _hx_result = new AssertionException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AssertionException_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6b60f4c9) {
		if (inClassId<=(int)0x3070ab22) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3070ab22;
		} else {
			return inClassId==(int)0x6b60f4c9;
		}
	} else {
		return inClassId==(int)0x7ce6b12b;
	}
}


hx::ObjectPtr< AssertionException_obj > AssertionException_obj::__new(::String msg, ::Dynamic info) {
	hx::ObjectPtr< AssertionException_obj > __this = new AssertionException_obj();
	__this->__construct(msg,info);
	return __this;
}

hx::ObjectPtr< AssertionException_obj > AssertionException_obj::__alloc(hx::Ctx *_hx_ctx,::String msg, ::Dynamic info) {
	AssertionException_obj *__this = (AssertionException_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AssertionException_obj), true, "massive.munit.AssertionException"));
	*(void **)__this = AssertionException_obj::_hx_vtable;
	__this->__construct(msg,info);
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
	__mClass->mName = HX_HCSTRING("massive.munit.AssertionException","\x74","\xf0","\x4e","\x74");
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

} // end namespace massive
} // end namespace munit
