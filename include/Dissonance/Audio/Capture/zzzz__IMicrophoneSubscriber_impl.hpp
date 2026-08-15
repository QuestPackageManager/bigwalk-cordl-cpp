#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/IMicrophoneSubscriber.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneSubscriber_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::IMicrophoneSubscriber.ReceiveMicrophoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::IMicrophoneSubscriber::*)(::System::ArraySegment_1<float_t>, ::NAudio::Wave::WaveFormat*)>(&::Dissonance::Audio::Capture::IMicrophoneSubscriber::ReceiveMicrophoneData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::IMicrophoneSubscriber.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::IMicrophoneSubscriber::*)()>(&::Dissonance::Audio::Capture::IMicrophoneSubscriber::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Capture::IMicrophoneSubscriber::ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  buffer, ::NAudio::Wave::WaveFormat*  format)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, format);
}
inline void Dissonance::Audio::Capture::IMicrophoneSubscriber::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
