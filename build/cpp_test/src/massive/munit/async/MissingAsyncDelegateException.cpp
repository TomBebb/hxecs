// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_async_MissingAsyncDelegateException
#include <massive/munit/async/MissingAsyncDelegateException.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1736ecc982ec5281_47_new,"massive.munit.async.MissingAsyncDelegateException","new",0xcec4300d,"massive.munit.async.MissingAsyncDelegateException.new","massive/munit/async/MissingAsyncDelegateException.hx",47,0x3fd83046)
namespace massive{
namespace munit{
namespace async{

void MissingAsyncDelegateException_obj::__construct(::String message, ::Dynamic info){
            	HX_STACKFRAME(&_hx_pos_1736ecc982ec5281_47_new)
HXLINE(  48)		super::__construct(message,info);
HXLINE(  49)		this->type = ( (::String)(::massive::haxe::util::ReflectUtil_obj::here(hx::SourceInfo(HX_("MissingAsyncDelegateException.hx",ea,49,67,b9),49,HX_("massive.munit.async.MissingAsyncDelegateException",9b,25,76,2a),HX_("new",60,d0,53,00)))->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) );
            	}

Dynamic MissingAsyncDelegateException_obj::__CreateEmpty() { return new MissingAsyncDelegateException_obj; }

void *MissingAsyncDelegateException_obj::_hx_vtable = 0;

Dynamic MissingAsyncDelegateException_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MissingAsyncDelegateException_obj > _hx_result = new MissingAsyncDelegateException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MissingAsyncDelegateException_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6b60f4c9) {
		if (inClassId<=(int)0x098645ed) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x098645ed;
		} else {
			return inClassId==(int)0x6b60f4c9;
		}
	} else {
		return inClassId==(int)0x7ce6b12b;
	}
}


hx::ObjectPtr< MissingAsyncDelegateException_obj > MissingAsyncDelegateException_obj::__new(::String message, ::Dynamic info) {
	hx::ObjectPtr< MissingAsyncDelegateException_obj > __this = new MissingAsyncDelegateException_obj();
	__this->__construct(message,info);
	return __this;
}

hx::ObjectPtr< MissingAsyncDelegateException_obj > MissingAsyncDelegateException_obj::__alloc(hx::Ctx *_hx_ctx,::String message, ::Dynamic info) {
	MissingAsyncDelegateException_obj *__this = (MissingAsyncDelegateException_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MissingAsyncDelegateException_obj), true, "massive.munit.async.MissingAsyncDelegateException"));
	*(void **)__this = MissingAsyncDelegateException_obj::_hx_vtable;
	__this->__construct(message,info);
	return __this;
}

MissingAsyncDelegateException_obj::MissingAsyncDelegateException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MissingAsyncDelegateException_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *MissingAsyncDelegateException_obj_sStaticStorageInfo = 0;
#endif

static void MissingAsyncDelegateException_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MissingAsyncDelegateException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MissingAsyncDelegateException_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MissingAsyncDelegateException_obj::__mClass,"__mClass");
};

#endif

hx::Class MissingAsyncDelegateException_obj::__mClass;

void MissingAsyncDelegateException_obj::__register()
{
	hx::Object *dummy = new MissingAsyncDelegateException_obj;
	MissingAsyncDelegateException_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.async.MissingAsyncDelegateException","\x9b","\x25","\x76","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MissingAsyncDelegateException_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MissingAsyncDelegateException_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MissingAsyncDelegateException_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MissingAsyncDelegateException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MissingAsyncDelegateException_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace massive
} // end namespace munit
} // end namespace async