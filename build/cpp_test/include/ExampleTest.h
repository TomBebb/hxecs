// Generated by Haxe 3.4.7
#ifndef INCLUDED_ExampleTest
#define INCLUDED_ExampleTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ExampleTest)
HX_DECLARE_CLASS3(massive,munit,async,AsyncFactory)



class HXCPP_CLASS_ATTRIBUTES ExampleTest_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ExampleTest_obj OBJ_;
		ExampleTest_obj();

	public:
		enum { _hx_ClassId = 0x439695b4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ExampleTest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"ExampleTest"); }
		static hx::ObjectPtr< ExampleTest_obj > __new();
		static hx::ObjectPtr< ExampleTest_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExampleTest_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ExampleTest","\x7c","\xf1","\x08","\xe6"); }

		static void __boot();
		static  ::Dynamic __meta__;
		void beforeClass();
		::Dynamic beforeClass_dyn();

		void afterClass();
		::Dynamic afterClass_dyn();

		void setup();
		::Dynamic setup_dyn();

		void tearDown();
		::Dynamic tearDown_dyn();

		void testExample();
		::Dynamic testExample_dyn();

		void testAsyncExample( ::massive::munit::async::AsyncFactory factory);
		::Dynamic testAsyncExample_dyn();

		void onTestAsyncExampleComplete();
		::Dynamic onTestAsyncExampleComplete_dyn();

		void testExampleThatOnlyRunsWithDebugFlag();
		::Dynamic testExampleThatOnlyRunsWithDebugFlag_dyn();

};


#endif /* INCLUDED_ExampleTest */ 
