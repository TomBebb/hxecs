// Generated by Haxe 3.4.7
#ifndef INCLUDED_massive_munit_TestRunner
#define INCLUDED_massive_munit_TestRunner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS2(massive,munit,TestClassHelper)
HX_DECLARE_CLASS2(massive,munit,TestRunner)
HX_DECLARE_CLASS2(massive,munit,TestSuite)
HX_DECLARE_CLASS3(massive,munit,async,AsyncDelegate)
HX_DECLARE_CLASS3(massive,munit,async,AsyncFactory)
HX_DECLARE_CLASS3(massive,munit,async,IAsyncDelegateObserver)

namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES TestRunner_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TestRunner_obj OBJ_;
		TestRunner_obj();

	public:
		enum { _hx_ClassId = 0x0b198f73 };

		void __construct(::Dynamic resultClient);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="massive.munit.TestRunner")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"massive.munit.TestRunner"); }
		static hx::ObjectPtr< TestRunner_obj > __new(::Dynamic resultClient);
		static hx::ObjectPtr< TestRunner_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic resultClient);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TestRunner_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("TestRunner","\x02","\x94","\x3f","\x4b"); }

		static void __boot();
		static ::cpp::VirtualArray emptyParams;
		static  ::Dynamic tryCallMethod( ::Dynamic o, ::Dynamic func,::cpp::VirtualArray args);
		static ::Dynamic tryCallMethod_dyn();

		 ::Dynamic completionHandler;
		Dynamic completionHandler_dyn() { return completionHandler;}
		int clientCount;
		int get_clientCount();
		::Dynamic get_clientCount_dyn();

		bool running;
		int testCount;
		int failCount;
		int errorCount;
		int passCount;
		int ignoreCount;
		int clientCompleteCount;
		::Array< ::Dynamic> clients;
		 ::massive::munit::TestClassHelper activeHelper;
		::Array< ::Dynamic> testSuites;
		bool asyncPending;
		 ::massive::munit::async::AsyncDelegate asyncDelegate;
		int suiteIndex;
		 ::massive::munit::async::AsyncFactory asyncFactory;
		 ::massive::munit::async::AsyncFactory set_asyncFactory( ::massive::munit::async::AsyncFactory value);
		::Dynamic set_asyncFactory_dyn();

		Float startTime;
		Float testStartTime;
		bool isDebug;
		void addResultClient(::Dynamic resultClient);
		::Dynamic addResultClient_dyn();

		void debug(::Array< ::Dynamic> testSuiteClasses);
		::Dynamic debug_dyn();

		void run(::Array< ::Dynamic> testSuiteClasses);
		::Dynamic run_dyn();

		void execute();
		::Dynamic execute_dyn();

		void executeTestCases();
		::Dynamic executeTestCases_dyn();

		void executeTestCase( ::Dynamic testCaseData,bool async);
		::Dynamic executeTestCase_dyn();

		void clientCompletionHandler(::Dynamic resultClient);
		::Dynamic clientCompletionHandler_dyn();

		void asyncResponseHandler( ::massive::munit::async::AsyncDelegate delegate);
		::Dynamic asyncResponseHandler_dyn();

		void asyncTimeoutHandler( ::massive::munit::async::AsyncDelegate delegate);
		::Dynamic asyncTimeoutHandler_dyn();

		void asyncDelegateCreatedHandler( ::massive::munit::async::AsyncDelegate delegate);
		::Dynamic asyncDelegateCreatedHandler_dyn();

		 ::massive::munit::async::AsyncFactory createAsyncFactory();
		::Dynamic createAsyncFactory_dyn();

};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_TestRunner */ 
