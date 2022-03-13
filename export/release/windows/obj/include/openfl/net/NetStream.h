#ifndef INCLUDED_openfl_net_NetStream
#define INCLUDED_openfl_net_NetStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
HX_DECLARE_CLASS2(openfl,net,NetConnection)
HX_DECLARE_CLASS2(openfl,net,NetStream)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES NetStream_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef NetStream_obj OBJ_;
		NetStream_obj();

	public:
		enum { _hx_ClassId = 0x1d851db0 };

		void __construct( ::openfl::net::NetConnection connection,::String peerID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.net.NetStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.net.NetStream"); }
		static ::hx::ObjectPtr< NetStream_obj > __new( ::openfl::net::NetConnection connection,::String peerID);
		static ::hx::ObjectPtr< NetStream_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::net::NetConnection connection,::String peerID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NetStream_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NetStream",9d,5c,f0,f3); }

		static void __boot();
		static  ::Dynamic __meta__;
		int audioCodec;
		Float bufferLength;
		Float bufferTime;
		int bytesLoaded;
		int bytesTotal;
		bool checkPolicyFile;
		 ::Dynamic client;
		Float currentFPS;
		int decodedFrames;
		Float liveDelay;
		int objectEncoding;
		Float time;
		int videoCode;
		bool _hx___closed;
		 ::openfl::net::NetConnection _hx___connection;
		 ::openfl::media::SoundTransform _hx___soundTransform;
		 ::haxe::Timer _hx___timer;
		void close();
		::Dynamic close_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void pause();
		::Dynamic pause_dyn();

		void play(::String url, ::Dynamic p1, ::Dynamic p2, ::Dynamic p3, ::Dynamic p4, ::Dynamic p5);
		::Dynamic play_dyn();

		void requestVideoStatus();
		::Dynamic requestVideoStatus_dyn();

		void resume();
		::Dynamic resume_dyn();

		void seek(Float time);
		::Dynamic seek_dyn();

		void togglePause();
		::Dynamic togglePause_dyn();

		void _hx___dispatchStatus(::String code);
		::Dynamic _hx___dispatchStatus_dyn();

		void _hx___playStatus(::String code);
		::Dynamic _hx___playStatus_dyn();

		void video_onCanPlay( ::Dynamic event);
		::Dynamic video_onCanPlay_dyn();

		void video_onCanPlayThrough( ::Dynamic event);
		::Dynamic video_onCanPlayThrough_dyn();

		void video_onDurationChanged( ::Dynamic event);
		::Dynamic video_onDurationChanged_dyn();

		void video_onEnd( ::Dynamic event);
		::Dynamic video_onEnd_dyn();

		void video_onError( ::Dynamic event);
		::Dynamic video_onError_dyn();

		void video_onLoadMetaData( ::Dynamic event);
		::Dynamic video_onLoadMetaData_dyn();

		void video_onLoadStart( ::Dynamic event);
		::Dynamic video_onLoadStart_dyn();

		void video_onPause( ::Dynamic event);
		::Dynamic video_onPause_dyn();

		void video_onPlaying( ::Dynamic event);
		::Dynamic video_onPlaying_dyn();

		void video_onSeeking( ::Dynamic event);
		::Dynamic video_onSeeking_dyn();

		void video_onStalled( ::Dynamic event);
		::Dynamic video_onStalled_dyn();

		void video_onTimeUpdate( ::Dynamic event);
		::Dynamic video_onTimeUpdate_dyn();

		void video_onWaiting( ::Dynamic event);
		::Dynamic video_onWaiting_dyn();

		 ::openfl::media::SoundTransform get_soundTransform();
		::Dynamic get_soundTransform_dyn();

		 ::openfl::media::SoundTransform set_soundTransform( ::openfl::media::SoundTransform value);
		::Dynamic set_soundTransform_dyn();

		Float get_speed();
		::Dynamic get_speed_dyn();

		Float set_speed(Float value);
		::Dynamic set_speed_dyn();

};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_NetStream */ 
