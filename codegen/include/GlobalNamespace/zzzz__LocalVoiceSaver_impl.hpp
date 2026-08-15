#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalVoiceSaver.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LocalVoiceSaver_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneSubscriber_def.hpp"
#include "GlobalNamespace/zzzz__AudioSampleSaver_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceSaver.Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceSaver::*)()>(&::GlobalNamespace::LocalVoiceSaver::Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceSaver*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceSaver.Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceSaver::*)(::System::ArraySegment_1<float_t>, ::NAudio::Wave::WaveFormat*)>(&::GlobalNamespace::LocalVoiceSaver::Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x180394e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceSaver*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceSaver.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceSaver::*)()>(&::GlobalNamespace::LocalVoiceSaver::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180394f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceSaver*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalVoiceSaver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalVoiceSaver::*)()>(&::GlobalNamespace::LocalVoiceSaver::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180394fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceSaver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver>& GlobalNamespace::LocalVoiceSaver::__cordl_internal_get_saver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saver;
}
constexpr ::UnityW<::GlobalNamespace::AudioSampleSaver> const& GlobalNamespace::LocalVoiceSaver::__cordl_internal_get_saver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saver;
}
constexpr void GlobalNamespace::LocalVoiceSaver::__cordl_internal_set_saver(::UnityW<::GlobalNamespace::AudioSampleSaver>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saver = value;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>*& GlobalNamespace::LocalVoiceSaver::__cordl_internal_get__transferBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferBuffer;
}
constexpr ::System::Collections::Generic::Queue_1<float_t>* const& GlobalNamespace::LocalVoiceSaver::__cordl_internal_get__transferBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transferBuffer;
}
constexpr void GlobalNamespace::LocalVoiceSaver::__cordl_internal_set__transferBuffer(::System::Collections::Generic::Queue_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transferBuffer = value;
}
inline void GlobalNamespace::LocalVoiceSaver::Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceSaver*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoiceSaver::Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  buffer, ::NAudio::Wave::WaveFormat*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceSaver*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, format);
}
inline void GlobalNamespace::LocalVoiceSaver::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceSaver*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalVoiceSaver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalVoiceSaver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalVoiceSaver* GlobalNamespace::LocalVoiceSaver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalVoiceSaver*>());
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr  GlobalNamespace::LocalVoiceSaver::operator ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* GlobalNamespace::LocalVoiceSaver::i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalVoiceSaver::LocalVoiceSaver()   {
}
