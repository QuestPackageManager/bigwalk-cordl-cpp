#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IMicrophoneCapture.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneCapture_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneSubscriber_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::IMicrophoneCapture.get_IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::IMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::IMicrophoneCapture::get_IsRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::IMicrophoneCapture.get_Device
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Audio::Capture::IMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::IMicrophoneCapture::get_Device)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::IMicrophoneCapture.get_Latency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::Dissonance::Audio::Capture::IMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::IMicrophoneCapture::get_Latency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::IMicrophoneCapture.StartCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::Dissonance::Audio::Capture::IMicrophoneCapture::*)(::StringW)>(&::Dissonance::Audio::Capture::IMicrophoneCapture::StartCapture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::IMicrophoneCapture.StopCapture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::IMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::IMicrophoneCapture::StopCapture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::IMicrophoneCapture.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::IMicrophoneCapture::*)(::Dissonance::Audio::Capture::IMicrophoneSubscriber*)>(&::Dissonance::Audio::Capture::IMicrophoneCapture::Subscribe)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::IMicrophoneCapture.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::IMicrophoneCapture::*)(::Dissonance::Audio::Capture::IMicrophoneSubscriber*)>(&::Dissonance::Audio::Capture::IMicrophoneCapture::Unsubscribe)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::IMicrophoneCapture.UpdateSubscribers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::IMicrophoneCapture::*)()>(&::Dissonance::Audio::Capture::IMicrophoneCapture::UpdateSubscribers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 7}
                ));
    return ___internal_method;
  }
};
inline bool Dissonance::Audio::Capture::IMicrophoneCapture::get_IsRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Dissonance::Audio::Capture::IMicrophoneCapture::get_Device()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::TimeSpan Dissonance::Audio::Capture::IMicrophoneCapture::get_Latency()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* Dissonance::Audio::Capture::IMicrophoneCapture::StartCapture(::StringW  name)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method, name);
}
inline void Dissonance::Audio::Capture::IMicrophoneCapture::StopCapture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::IMicrophoneCapture::Subscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline bool Dissonance::Audio::Capture::IMicrophoneCapture::Unsubscribe(::Dissonance::Audio::Capture::IMicrophoneSubscriber*  listener)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, listener);
}
inline bool Dissonance::Audio::Capture::IMicrophoneCapture::UpdateSubscribers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneCapture*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
