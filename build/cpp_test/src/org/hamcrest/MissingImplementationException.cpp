// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
#ifndef INCLUDED_org_hamcrest_MissingImplementationException
#include <org/hamcrest/MissingImplementationException.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0efdbd8430773ae6_53_new,"org.hamcrest.MissingImplementationException","new",0x959d2a6a,"org.hamcrest.MissingImplementationException.new","org/hamcrest/Exception.hx",53,0x940281f0)
namespace org{
namespace hamcrest{

void MissingImplementationException_obj::__construct(::String __o_message, ::Dynamic cause, ::Dynamic info){
::String message = __o_message.Default(HX_HCSTRING("Abstract method not overridden.","\xcc","\x27","\xef","\xce"));
            	HX_STACKFRAME(&_hx_pos_0efdbd8430773ae6_53_new)
HXDLIN(  53)		super::__construct(message,cause,info);
            	}

Dynamic MissingImplementationException_obj::__CreateEmpty() { return new MissingImplementationException_obj; }

void *MissingImplementationException_obj::_hx_vtable = 0;

Dynamic MissingImplementationException_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MissingImplementationException_obj > _hx_result = new MissingImplementationException_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MissingImplementationException_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55a03fba) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x55a03fba;
	} else {
		return inClassId==(int)0x78188e08;
	}
}


hx::ObjectPtr< MissingImplementationException_obj > MissingImplementationException_obj::__new(::String __o_message, ::Dynamic cause, ::Dynamic info) {
	hx::ObjectPtr< MissingImplementationException_obj > __this = new MissingImplementationException_obj();
	__this->__construct(__o_message,cause,info);
	return __this;
}

hx::ObjectPtr< MissingImplementationException_obj > MissingImplementationException_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_message, ::Dynamic cause, ::Dynamic info) {
	MissingImplementationException_obj *__this = (MissingImplementationException_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MissingImplementationException_obj), true, "org.hamcrest.MissingImplementationException"));
	*(void **)__this = MissingImplementationException_obj::_hx_vtable;
	__this->__construct(__o_message,cause,info);
	return __this;
}

MissingImplementationException_obj::MissingImplementationException_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MissingImplementationException_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *MissingImplementationException_obj_sStaticStorageInfo = 0;
#endif

static void MissingImplementationException_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MissingImplementationException_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MissingImplementationException_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MissingImplementationException_obj::__mClass,"__mClass");
};

#endif

hx::Class MissingImplementationException_obj::__mClass;

void MissingImplementationException_obj::__register()
{
	hx::Object *dummy = new MissingImplementationException_obj;
	MissingImplementationException_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("org.hamcrest.MissingImplementationException","\x78","\x6d","\x11","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MissingImplementationException_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MissingImplementationException_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MissingImplementationException_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MissingImplementationException_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MissingImplementationException_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace org
} // end namespace hamcrest
