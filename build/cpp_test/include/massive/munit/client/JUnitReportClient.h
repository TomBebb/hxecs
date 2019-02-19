// Generated by Haxe 3.4.7
#ifndef INCLUDED_massive_munit_client_JUnitReportClient
#define INCLUDED_massive_munit_client_JUnitReportClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS2(massive,munit,TestResult)
HX_DECLARE_CLASS3(massive,munit,client,JUnitReportClient)

namespace massive{
namespace munit{
namespace client{


class HXCPP_CLASS_ATTRIBUTES JUnitReportClient_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef JUnitReportClient_obj OBJ_;
		JUnitReportClient_obj();

	public:
		enum { _hx_ClassId = 0x603648b1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="massive.munit.client.JUnitReportClient")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"massive.munit.client.JUnitReportClient"); }
		static hx::ObjectPtr< JUnitReportClient_obj > __new();
		static hx::ObjectPtr< JUnitReportClient_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JUnitReportClient_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("JUnitReportClient","\x2d","\x57","\x4e","\x83"); }

		static void __boot();
		static ::String DEFAULT_ID;
		::String id;
		 ::Dynamic completionHandler;
		Dynamic completionHandler_dyn() { return completionHandler;}
		 ::Dynamic get_completionHandler();
		::Dynamic get_completionHandler_dyn();

		 ::Dynamic set_completionHandler( ::Dynamic value);
		::Dynamic set_completionHandler_dyn();

		::String newline;
		 ::StringBuf xml;
		 ::StringBuf testSuiteXML;
		::String currentTestClass;
		int suitePassCount;
		int suiteFailCount;
		int suiteErrorCount;
		Float suiteExecutionTime;
		void setCurrentTestClass(::String className);
		::Dynamic setCurrentTestClass_dyn();

		void addPass( ::massive::munit::TestResult result);
		::Dynamic addPass_dyn();

		void addFail( ::massive::munit::TestResult result);
		::Dynamic addFail_dyn();

		void addError( ::massive::munit::TestResult result);
		::Dynamic addError_dyn();

		void addIgnore( ::massive::munit::TestResult result);
		::Dynamic addIgnore_dyn();

		 ::Dynamic reportFinalStatistics(int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time);
		::Dynamic reportFinalStatistics_dyn();

		void startTestSuite();
		::Dynamic startTestSuite_dyn();

		void endTestSuite();
		::Dynamic endTestSuite_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace client

#endif /* INCLUDED_massive_munit_client_JUnitReportClient */ 