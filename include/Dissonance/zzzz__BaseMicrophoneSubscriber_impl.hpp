#pragma once
// IWYU pragma private; include "Dissonance/BaseMicrophoneSubscriber.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/zzzz__BaseMicrophoneSubscriber_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IMicrophoneSubscriber_def.hpp"
#include "Dissonance/Datastructures/zzzz__TransferBuffer_1_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::BaseMicrophoneSubscriber.Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseMicrophoneSubscriber::*)(::System::ArraySegment_1<float_t>, ::NAudio::Wave::WaveFormat*)>(&::Dissonance::BaseMicrophoneSubscriber::Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805c5120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseMicrophoneSubscriber.Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseMicrophoneSubscriber::*)()>(&::Dissonance::BaseMicrophoneSubscriber::Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805c5200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseMicrophoneSubscriber.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseMicrophoneSubscriber::*)()>(&::Dissonance::BaseMicrophoneSubscriber::Update)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805c5230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(),
                    {::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseMicrophoneSubscriber.ProcessAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseMicrophoneSubscriber::*)(::System::ArraySegment_1<float_t>)>(&::Dissonance::BaseMicrophoneSubscriber::ProcessAudio)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(),
                    {::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseMicrophoneSubscriber.ResetAudioStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseMicrophoneSubscriber::*)(::NAudio::Wave::WaveFormat*)>(&::Dissonance::BaseMicrophoneSubscriber::ResetAudioStream)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(),
                    {::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::BaseMicrophoneSubscriber._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::BaseMicrophoneSubscriber::*)()>(&::Dissonance::BaseMicrophoneSubscriber::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805c5360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::NAudio::Wave::WaveFormat*& Dissonance::BaseMicrophoneSubscriber::__cordl_internal_get__format()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr ::NAudio::Wave::WaveFormat* const& Dissonance::BaseMicrophoneSubscriber::__cordl_internal_get__format() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____format;
}
constexpr void Dissonance::BaseMicrophoneSubscriber::__cordl_internal_set__format(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____format = value;
}
constexpr ::Dissonance::Datastructures::TransferBuffer_1<float_t>*& Dissonance::BaseMicrophoneSubscriber::__cordl_internal_get__transfer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transfer;
}
constexpr ::Dissonance::Datastructures::TransferBuffer_1<float_t>* const& Dissonance::BaseMicrophoneSubscriber::__cordl_internal_get__transfer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transfer;
}
constexpr void Dissonance::BaseMicrophoneSubscriber::__cordl_internal_set__transfer(::Dissonance::Datastructures::TransferBuffer_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transfer = value;
}
constexpr bool& Dissonance::BaseMicrophoneSubscriber::__cordl_internal_get__resetPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetPending;
}
constexpr bool const& Dissonance::BaseMicrophoneSubscriber::__cordl_internal_get__resetPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetPending;
}
constexpr void Dissonance::BaseMicrophoneSubscriber::__cordl_internal_set__resetPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetPending = value;
}
constexpr int32_t& Dissonance::BaseMicrophoneSubscriber::__cordl_internal_get__lostSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lostSamples;
}
constexpr int32_t const& Dissonance::BaseMicrophoneSubscriber::__cordl_internal_get__lostSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lostSamples;
}
constexpr void Dissonance::BaseMicrophoneSubscriber::__cordl_internal_set__lostSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lostSamples = value;
}
constexpr ::ArrayW<float_t>& Dissonance::BaseMicrophoneSubscriber::__cordl_internal_get__temporary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temporary;
}
constexpr ::ArrayW<float_t> const& Dissonance::BaseMicrophoneSubscriber::__cordl_internal_get__temporary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____temporary;
}
constexpr void Dissonance::BaseMicrophoneSubscriber::__cordl_internal_set__temporary(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____temporary = value;
}
inline void Dissonance::BaseMicrophoneSubscriber::Dissonance_Audio_Capture_IMicrophoneSubscriber_ReceiveMicrophoneData(::System::ArraySegment_1<float_t>  buffer, ::NAudio::Wave::WaveFormat*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.ReceiveMicrophoneData", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, format);
}
inline void Dissonance::BaseMicrophoneSubscriber::Dissonance_Audio_Capture_IMicrophoneSubscriber_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(),
                        {"Dissonance.Audio.Capture.IMicrophoneSubscriber.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::BaseMicrophoneSubscriber::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::BaseMicrophoneSubscriber::ProcessAudio(::System::ArraySegment_1<float_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Dissonance::BaseMicrophoneSubscriber::ResetAudioStream(::NAudio::Wave::WaveFormat*  waveFormat)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, waveFormat);
}
inline void Dissonance::BaseMicrophoneSubscriber::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::BaseMicrophoneSubscriber*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::BaseMicrophoneSubscriber* Dissonance::BaseMicrophoneSubscriber::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::BaseMicrophoneSubscriber*>());
}
/// @brief Convert operator to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr  Dissonance::BaseMicrophoneSubscriber::operator ::Dissonance::Audio::Capture::IMicrophoneSubscriber*() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Capture::IMicrophoneSubscriber"
constexpr ::Dissonance::Audio::Capture::IMicrophoneSubscriber* Dissonance::BaseMicrophoneSubscriber::i___Dissonance__Audio__Capture__IMicrophoneSubscriber() noexcept {
return static_cast<::Dissonance::Audio::Capture::IMicrophoneSubscriber*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::BaseMicrophoneSubscriber::BaseMicrophoneSubscriber()   {
}
