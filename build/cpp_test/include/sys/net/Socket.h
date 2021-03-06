// Generated by Haxe 3.4.7
#ifndef INCLUDED_sys_net_Socket
#define INCLUDED_sys_net_Socket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(sys,net,Host)
HX_DECLARE_CLASS2(sys,net,Socket)

namespace sys{
namespace net{


class HXCPP_CLASS_ATTRIBUTES Socket_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Socket_obj OBJ_;
		Socket_obj();

	public:
		enum { _hx_ClassId = 0x109f852f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.net.Socket")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"sys.net.Socket"); }
		static hx::ObjectPtr< Socket_obj > __new();
		static hx::ObjectPtr< Socket_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Socket_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Socket","\xd3","\xff","\xda","\x5a"); }

		static  ::Dynamic select(::Array< ::Dynamic> read,::Array< ::Dynamic> write,::Array< ::Dynamic> others, ::Dynamic timeout);
		static ::Dynamic select_dyn();

		 ::Dynamic __s;
		 ::haxe::io::Input input;
		 ::haxe::io::Output output;
		virtual void init();
		::Dynamic init_dyn();

		virtual void close();
		::Dynamic close_dyn();

		virtual void write(::String content);
		::Dynamic write_dyn();

		virtual void connect( ::sys::net::Host host,int port);
		::Dynamic connect_dyn();

		void shutdown(bool read,bool write);
		::Dynamic shutdown_dyn();

		void setTimeout(Float timeout);
		::Dynamic setTimeout_dyn();

};

} // end namespace sys
} // end namespace net

#endif /* INCLUDED_sys_net_Socket */ 
