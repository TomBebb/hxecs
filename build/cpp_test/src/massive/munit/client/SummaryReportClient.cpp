// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ICoverageTestResultClient
#include <massive/munit/ICoverageTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_SummaryReportClient
#include <massive/munit/client/SummaryReportClient.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e3917b5ff1503776_64_new,"massive.munit.client.SummaryReportClient","new",0xb25e143b,"massive.munit.client.SummaryReportClient.new","massive/munit/client/SummaryReportClient.hx",64,0xf2eda854)
HX_LOCAL_STACK_FRAME(_hx_pos_e3917b5ff1503776_70_printFinalStatistics,"massive.munit.client.SummaryReportClient","printFinalStatistics",0x2a090a51,"massive.munit.client.SummaryReportClient.printFinalStatistics","massive/munit/client/SummaryReportClient.hx",70,0xf2eda854)
static const ::String _hx_array_data_84a2dac9_3[] = {
	HX_("\n",0a,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_e3917b5ff1503776_96_printOverallResult,"massive.munit.client.SummaryReportClient","printOverallResult",0x98567322,"massive.munit.client.SummaryReportClient.printOverallResult","massive/munit/client/SummaryReportClient.hx",96,0xf2eda854)
HX_LOCAL_STACK_FRAME(_hx_pos_e3917b5ff1503776_99_printReports,"massive.munit.client.SummaryReportClient","printReports",0xc839a957,"massive.munit.client.SummaryReportClient.printReports","massive/munit/client/SummaryReportClient.hx",99,0xf2eda854)
HX_LOCAL_STACK_FRAME(_hx_pos_e3917b5ff1503776_61_boot,"massive.munit.client.SummaryReportClient","boot",0x580c9ff7,"massive.munit.client.SummaryReportClient.boot","massive/munit/client/SummaryReportClient.hx",61,0xf2eda854)
namespace massive{
namespace munit{
namespace client{

void SummaryReportClient_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e3917b5ff1503776_64_new)
HXLINE(  65)		super::__construct();
HXLINE(  66)		this->id = HX_("summary",26,0b,e9,80);
            	}

Dynamic SummaryReportClient_obj::__CreateEmpty() { return new SummaryReportClient_obj; }

void *SummaryReportClient_obj::_hx_vtable = 0;

Dynamic SummaryReportClient_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SummaryReportClient_obj > _hx_result = new SummaryReportClient_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SummaryReportClient_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0097fcd8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0097fcd8;
	} else {
		return inClassId==(int)0x01fa82ad;
	}
}

void SummaryReportClient_obj::printFinalStatistics(bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
            	HX_GC_STACKFRAME(&_hx_pos_e3917b5ff1503776_70_printFinalStatistics)
HXLINE(  71)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE(  72)		{
HXLINE(  72)			::String x = (HX_("result:",bd,58,57,6b) + ::Std_obj::string(result));
HXDLIN(  72)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE(  72)				sb->flush();
            			}
HXDLIN(  72)			if (hx::IsNull( sb->b )) {
HXLINE(  72)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  72)				::Array< ::String > sb1 = sb->b;
HXDLIN(  72)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXLINE(  73)		{
HXLINE(  73)			::String x1 = (HX_("\ncount:",15,94,4f,6c) + testCount);
HXDLIN(  73)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE(  73)				sb->flush();
            			}
HXDLIN(  73)			if (hx::IsNull( sb->b )) {
HXLINE(  73)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE(  73)				::Array< ::String > sb2 = sb->b;
HXDLIN(  73)				sb2->push(::Std_obj::string(x1));
            			}
            		}
HXLINE(  74)		{
HXLINE(  74)			::String x2 = (HX_("\npass:",ff,ed,e7,bc) + passCount);
HXDLIN(  74)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE(  74)				sb->flush();
            			}
HXDLIN(  74)			if (hx::IsNull( sb->b )) {
HXLINE(  74)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            			}
            			else {
HXLINE(  74)				::Array< ::String > sb3 = sb->b;
HXDLIN(  74)				sb3->push(::Std_obj::string(x2));
            			}
            		}
HXLINE(  75)		{
HXLINE(  75)			::String x3 = (HX_("\nfail:",52,84,de,fa) + failCount);
HXDLIN(  75)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE(  75)				sb->flush();
            			}
HXDLIN(  75)			if (hx::IsNull( sb->b )) {
HXLINE(  75)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            			}
            			else {
HXLINE(  75)				::Array< ::String > sb4 = sb->b;
HXDLIN(  75)				sb4->push(::Std_obj::string(x3));
            			}
            		}
HXLINE(  76)		{
HXLINE(  76)			::String x4 = (HX_("\nerror:",fc,26,3f,f1) + errorCount);
HXDLIN(  76)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE(  76)				sb->flush();
            			}
HXDLIN(  76)			if (hx::IsNull( sb->b )) {
HXLINE(  76)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x4));
            			}
            			else {
HXLINE(  76)				::Array< ::String > sb5 = sb->b;
HXDLIN(  76)				sb5->push(::Std_obj::string(x4));
            			}
            		}
HXLINE(  77)		{
HXLINE(  77)			::String x5 = (HX_("\nignore:",1e,ac,d1,18) + ignoreCount);
HXDLIN(  77)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE(  77)				sb->flush();
            			}
HXDLIN(  77)			if (hx::IsNull( sb->b )) {
HXLINE(  77)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x5));
            			}
            			else {
HXLINE(  77)				::Array< ::String > sb6 = sb->b;
HXDLIN(  77)				sb6->push(::Std_obj::string(x5));
            			}
            		}
HXLINE(  78)		{
HXLINE(  78)			::String x6 = (HX_("\ntime:",43,5b,c7,0f) + time);
HXDLIN(  78)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE(  78)				sb->flush();
            			}
HXDLIN(  78)			if (hx::IsNull( sb->b )) {
HXLINE(  78)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x6));
            			}
            			else {
HXLINE(  78)				::Array< ::String > sb7 = sb->b;
HXDLIN(  78)				sb7->push(::Std_obj::string(x6));
            			}
            		}
HXLINE(  79)		{
HXLINE(  79)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE(  79)				sb->flush();
            			}
HXDLIN(  79)			if (hx::IsNull( sb->b )) {
HXLINE(  79)				sb->b = ::Array_obj< ::String >::fromData( _hx_array_data_84a2dac9_3,1);
            			}
            			else {
HXLINE(  79)				sb->b->push(HX_("\n",0a,00,00,00));
            			}
            		}
HXLINE(  80)		int resultCount = (int)0;
HXLINE(  81)		while(true){
HXLINE(  81)			bool _hx_tmp;
HXDLIN(  81)			if ((this->totalResults->length > (int)0)) {
HXLINE(  81)				_hx_tmp = (resultCount < (int)10);
            			}
            			else {
HXLINE(  81)				_hx_tmp = false;
            			}
HXDLIN(  81)			if (!(_hx_tmp)) {
HXLINE(  81)				goto _hx_goto_1;
            			}
HXLINE(  83)			 ::massive::munit::TestResult result1 = this->totalResults->shift().StaticCast<  ::massive::munit::TestResult >();
HXLINE(  84)			if (!(result1->passed)) {
HXLINE(  86)				{
HXLINE(  86)					::String x7 = (HX_("\n# ",27,b5,07,00) + result1->get_location());
HXDLIN(  86)					if (hx::IsNotNull( sb->charBuf )) {
HXLINE(  86)						sb->flush();
            					}
HXDLIN(  86)					if (hx::IsNull( sb->b )) {
HXLINE(  86)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x7));
            					}
            					else {
HXLINE(  86)						::Array< ::String > sb8 = sb->b;
HXDLIN(  86)						sb8->push(::Std_obj::string(x7));
            					}
            				}
HXLINE(  87)				resultCount = (resultCount + (int)1);
            			}
            		}
            		_hx_goto_1:;
HXLINE(  90)		int remainder = ((failCount + errorCount) - resultCount);
HXLINE(  91)		if ((remainder > (int)0)) {
HXLINE(  91)			::String x8 = ((HX_("# ... plus ",97,17,0d,df) + remainder) + HX_(" more",b5,6f,33,b5));
HXDLIN(  91)			if (hx::IsNotNull( sb->charBuf )) {
HXLINE(  91)				sb->flush();
            			}
HXDLIN(  91)			if (hx::IsNull( sb->b )) {
HXLINE(  91)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x8));
            			}
            			else {
HXLINE(  91)				::Array< ::String > sb9 = sb->b;
HXDLIN(  91)				sb9->push(::Std_obj::string(x8));
            			}
            		}
HXLINE(  92)		this->output = sb->toString();
            	}


void SummaryReportClient_obj::printOverallResult(bool result){
            	HX_STACKFRAME(&_hx_pos_e3917b5ff1503776_96_printOverallResult)
            	}


void SummaryReportClient_obj::printReports(){
            	HX_STACKFRAME(&_hx_pos_e3917b5ff1503776_99_printReports)
            	}


::String SummaryReportClient_obj::DEFAULT_ID;


hx::ObjectPtr< SummaryReportClient_obj > SummaryReportClient_obj::__new() {
	hx::ObjectPtr< SummaryReportClient_obj > __this = new SummaryReportClient_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SummaryReportClient_obj > SummaryReportClient_obj::__alloc(hx::Ctx *_hx_ctx) {
	SummaryReportClient_obj *__this = (SummaryReportClient_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SummaryReportClient_obj), true, "massive.munit.client.SummaryReportClient"));
	*(void **)__this = SummaryReportClient_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SummaryReportClient_obj::SummaryReportClient_obj()
{
}

hx::Val SummaryReportClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"printReports") ) { return hx::Val( printReports_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return hx::Val( printOverallResult_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"printFinalStatistics") ) { return hx::Val( printFinalStatistics_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SummaryReportClient_obj_sMemberStorageInfo = 0;
static hx::StaticInfo SummaryReportClient_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &SummaryReportClient_obj::DEFAULT_ID,HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String SummaryReportClient_obj_sMemberFields[] = {
	HX_HCSTRING("printFinalStatistics","\x8c","\x54","\x51","\xe4"),
	HX_HCSTRING("printOverallResult","\x9d","\x28","\x2a","\x6e"),
	HX_HCSTRING("printReports","\x92","\xc0","\x6f","\x0e"),
	::String(null()) };

static void SummaryReportClient_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SummaryReportClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SummaryReportClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SummaryReportClient_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SummaryReportClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SummaryReportClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

hx::Class SummaryReportClient_obj::__mClass;

static ::String SummaryReportClient_obj_sStaticFields[] = {
	HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18"),
	::String(null())
};

void SummaryReportClient_obj::__register()
{
	hx::Object *dummy = new SummaryReportClient_obj;
	SummaryReportClient_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.SummaryReportClient","\xc9","\xda","\xa2","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SummaryReportClient_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SummaryReportClient_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SummaryReportClient_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SummaryReportClient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SummaryReportClient_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SummaryReportClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SummaryReportClient_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SummaryReportClient_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e3917b5ff1503776_61_boot)
HXDLIN(  61)		DEFAULT_ID = HX_("summary",26,0b,e9,80);
            	}
}

} // end namespace massive
} // end namespace munit
} // end namespace client
