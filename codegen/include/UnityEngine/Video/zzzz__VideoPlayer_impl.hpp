#pragma once
// IWYU pragma private; include "UnityEngine/Video/VideoPlayer.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_EventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_EventHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer_EventHandler::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer_EventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_EventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_EventHandler::*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer_EventHandler::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Video::VideoPlayer_EventHandler*>(),
                    {::i2c::class_of<::UnityEngine::Video::VideoPlayer_EventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_EventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer_EventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_EventHandler::Invoke(::UnityEngine::Video::VideoPlayer*  source)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Video::VideoPlayer_EventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::UnityEngine::Video::VideoPlayer_EventHandler* UnityEngine::Video::VideoPlayer_EventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Video::VideoPlayer_EventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler::VideoPlayer_EventHandler()   {
}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_ErrorEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_ErrorEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer_ErrorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181c92f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_ErrorEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_ErrorEventHandler::*)(::UnityEngine::Video::VideoPlayer*, ::StringW)>(&::UnityEngine::Video::VideoPlayer_ErrorEventHandler::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(),
                    {::i2c::class_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_ErrorEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_ErrorEventHandler::Invoke(::UnityEngine::Video::VideoPlayer*  source, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, message);
}
inline ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* UnityEngine::Video::VideoPlayer_ErrorEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Video::VideoPlayer_ErrorEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler::VideoPlayer_ErrorEventHandler()   {
}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181c92f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::*)(::UnityEngine::Video::VideoPlayer*, int64_t)>(&::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(),
                    {::i2c::class_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::Invoke(::UnityEngine::Video::VideoPlayer*  source, int64_t  frameIdx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, frameIdx);
}
inline ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler::VideoPlayer_FrameReadyEventHandler()   {
}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_TimeEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_TimeEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer_TimeEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xf30;
  constexpr static std::size_t addrs = 0x1810e6120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer_TimeEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer_TimeEventHandler::*)(::UnityEngine::Video::VideoPlayer*, double_t)>(&::UnityEngine::Video::VideoPlayer_TimeEventHandler::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(),
                    {::i2c::class_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Video::VideoPlayer_TimeEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Video::VideoPlayer_TimeEventHandler::Invoke(::UnityEngine::Video::VideoPlayer*  source, double_t  seconds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, seconds);
}
inline ::UnityEngine::Video::VideoPlayer_TimeEventHandler* UnityEngine::Video::VideoPlayer_TimeEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Video::VideoPlayer_TimeEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler::VideoPlayer_TimeEventHandler()   {
}
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Play)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18254d9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::Stop)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18254da70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"Stop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_isPlaying)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18254dab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"get_isPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::get_time)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18254daf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"get_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(double_t)>(&::UnityEngine::Video::VideoPlayer::set_time)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18254db30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"set_time", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetTargetAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::UnityEngine::Video::VideoPlayer::*)(uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetTargetAudioSource)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18254d820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"GetTargetAudioSource", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetTargetAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)(uint16_t, ::UnityEngine::AudioSource*)>(&::UnityEngine::Video::VideoPlayer::SetTargetAudioSource)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18254da00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"SetTargetAudioSource", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokePrepareCompletedCallback_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokePrepareCompletedCallback_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822b79b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokePrepareCompletedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeFrameReadyCallback_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, int64_t)>(&::UnityEngine::Video::VideoPlayer::InvokeFrameReadyCallback_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18254d960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeFrameReadyCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeLoopPointReachedCallback_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokeLoopPointReachedCallback_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822b7990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeLoopPointReachedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeStartedCallback_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokeStartedCallback_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822b79d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeStartedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeFrameDroppedCallback_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokeFrameDroppedCallback_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18254d940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeFrameDroppedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeErrorReceivedCallback_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, ::StringW)>(&::UnityEngine::Video::VideoPlayer::InvokeErrorReceivedCallback_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18254d910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeErrorReceivedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeSeekCompletedCallback_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*)>(&::UnityEngine::Video::VideoPlayer::InvokeSeekCompletedCallback_Internal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18254d990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeSeekCompletedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.InvokeClockResyncOccurredCallback_Internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Video::VideoPlayer*, double_t)>(&::UnityEngine::Video::VideoPlayer::InvokeClockResyncOccurredCallback_Internal)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18254d8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeClockResyncOccurredCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Video::VideoPlayer::*)()>(&::UnityEngine::Video::VideoPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Play_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::Play_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18254d9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"Play_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.Stop_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::Stop_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18254da60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"Stop_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_isPlaying_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_isPlaying_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18254daa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"get_isPlaying_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.get_time_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::get_time_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18254dae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"get_time_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.set_time_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::Video::VideoPlayer::set_time_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18254db20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"set_time_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.GetTargetAudioSource_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, uint16_t)>(&::UnityEngine::Video::VideoPlayer::GetTargetAudioSource_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18254d810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"GetTargetAudioSource_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Video::VideoPlayer.SetTargetAudioSource_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint16_t, ::System::IntPtr)>(&::UnityEngine::Video::VideoPlayer::SetTargetAudioSource_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18254d9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"SetTargetAudioSource_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_prepareCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prepareCompleted;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_prepareCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prepareCompleted;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_prepareCompleted(::UnityEngine::Video::VideoPlayer_EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prepareCompleted = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_loopPointReached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopPointReached;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_loopPointReached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopPointReached;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_loopPointReached(::UnityEngine::Video::VideoPlayer_EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopPointReached = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___started;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___started;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_started(::UnityEngine::Video::VideoPlayer_EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___started = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_frameDropped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameDropped;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_frameDropped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameDropped;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_frameDropped(::UnityEngine::Video::VideoPlayer_EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameDropped = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_errorReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorReceived;
}
constexpr ::UnityEngine::Video::VideoPlayer_ErrorEventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_errorReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorReceived;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_errorReceived(::UnityEngine::Video::VideoPlayer_ErrorEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorReceived = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_seekCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekCompleted;
}
constexpr ::UnityEngine::Video::VideoPlayer_EventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_seekCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekCompleted;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_seekCompleted(::UnityEngine::Video::VideoPlayer_EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seekCompleted = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_clockResyncOccurred()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockResyncOccurred;
}
constexpr ::UnityEngine::Video::VideoPlayer_TimeEventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_clockResyncOccurred() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockResyncOccurred;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_clockResyncOccurred(::UnityEngine::Video::VideoPlayer_TimeEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clockResyncOccurred = value;
}
constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*& UnityEngine::Video::VideoPlayer::__cordl_internal_get_frameReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameReady;
}
constexpr ::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* const& UnityEngine::Video::VideoPlayer::__cordl_internal_get_frameReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameReady;
}
constexpr void UnityEngine::Video::VideoPlayer::__cordl_internal_set_frameReady(::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameReady = value;
}
inline void UnityEngine::Video::VideoPlayer::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"get_isPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline double_t UnityEngine::Video::VideoPlayer::get_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"get_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::set_time(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"set_time", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioSource> UnityEngine::Video::VideoPlayer::GetTargetAudioSource(uint16_t  trackIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"GetTargetAudioSource", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetTargetAudioSource(uint16_t  trackIndex, ::UnityEngine::AudioSource*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"SetTargetAudioSource", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trackIndex, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokePrepareCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokePrepareCompletedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeFrameReadyCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, int64_t  frameIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeFrameReadyCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, frameIdx);
}
inline void UnityEngine::Video::VideoPlayer::InvokeLoopPointReachedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeLoopPointReachedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeStartedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeStartedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeFrameDroppedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeFrameDroppedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeErrorReceivedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, ::StringW  errorStr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeErrorReceivedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, errorStr);
}
inline void UnityEngine::Video::VideoPlayer::InvokeSeekCompletedCallback_Internal(::UnityEngine::Video::VideoPlayer*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeSeekCompletedCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source);
}
inline void UnityEngine::Video::VideoPlayer::InvokeClockResyncOccurredCallback_Internal(::UnityEngine::Video::VideoPlayer*  source, double_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"InvokeClockResyncOccurredCallback_Internal", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, seconds);
}
inline void UnityEngine::Video::VideoPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Video::VideoPlayer::Play_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"Play_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::Stop_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"Stop_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Video::VideoPlayer::get_isPlaying_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"get_isPlaying_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline double_t UnityEngine::Video::VideoPlayer::get_time_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"get_time_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Video::VideoPlayer::set_time_Injected(::System::IntPtr  _unity_self, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"set_time_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Video::VideoPlayer::GetTargetAudioSource_Injected(::System::IntPtr  _unity_self, uint16_t  trackIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"GetTargetAudioSource_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, trackIndex);
}
inline void UnityEngine::Video::VideoPlayer::SetTargetAudioSource_Injected(::System::IntPtr  _unity_self, uint16_t  trackIndex, ::System::IntPtr  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Video::VideoPlayer*>(),
                        {"SetTargetAudioSource_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, trackIndex, source);
}
inline ::UnityEngine::Video::VideoPlayer* UnityEngine::Video::VideoPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Video::VideoPlayer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Video::VideoPlayer::VideoPlayer()   {
}
