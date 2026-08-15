#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Identity/IdentityEncoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Codecs/Identity/zzzz__IdentityEncoder_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__IVoiceEncoder_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityEncoder.set_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Identity::IdentityEncoder::*)(float_t)>(&::Dissonance::Audio::Codecs::Identity::IdentityEncoder::set_PacketLoss)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"set_PacketLoss", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityEncoder.get_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::Identity::IdentityEncoder::*)()>(&::Dissonance::Audio::Codecs::Identity::IdentityEncoder::get_FrameSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"get_FrameSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityEncoder.get_SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::Identity::IdentityEncoder::*)()>(&::Dissonance::Audio::Codecs::Identity::IdentityEncoder::get_SampleRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"get_SampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityEncoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Identity::IdentityEncoder::*)(int32_t, int32_t)>(&::Dissonance::Audio::Codecs::Identity::IdentityEncoder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f5cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityEncoder.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Dissonance::Audio::Codecs::Identity::IdentityEncoder::*)(::System::ArraySegment_1<float_t>, ::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Audio::Codecs::Identity::IdentityEncoder::Encode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805f5bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"Encode", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityEncoder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Identity::IdentityEncoder::*)()>(&::Dissonance::Audio::Codecs::Identity::IdentityEncoder::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Identity::IdentityEncoder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::Identity::IdentityEncoder::*)()>(&::Dissonance::Audio::Codecs::Identity::IdentityEncoder::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Dissonance::Audio::Codecs::Identity::IdentityEncoder::__cordl_internal_get__sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr int32_t const& Dissonance::Audio::Codecs::Identity::IdentityEncoder::__cordl_internal_get__sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr void Dissonance::Audio::Codecs::Identity::IdentityEncoder::__cordl_internal_set__sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleRate = value;
}
constexpr int32_t& Dissonance::Audio::Codecs::Identity::IdentityEncoder::__cordl_internal_get__frameSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr int32_t const& Dissonance::Audio::Codecs::Identity::IdentityEncoder::__cordl_internal_get__frameSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameSize;
}
constexpr void Dissonance::Audio::Codecs::Identity::IdentityEncoder::__cordl_internal_set__frameSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameSize = value;
}
inline void Dissonance::Audio::Codecs::Identity::IdentityEncoder::set_PacketLoss(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"set_PacketLoss", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Dissonance::Audio::Codecs::Identity::IdentityEncoder::get_FrameSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"get_FrameSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Dissonance::Audio::Codecs::Identity::IdentityEncoder::get_SampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"get_SampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Identity::IdentityEncoder::_ctor(int32_t  sampleRate, int32_t  frameSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleRate, frameSize);
}
inline ::System::ArraySegment_1<uint8_t> Dissonance::Audio::Codecs::Identity::IdentityEncoder::Encode(::System::ArraySegment_1<float_t>  samples, ::System::ArraySegment_1<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"Encode", {}, {::i2c::type_of<::System::ArraySegment_1<float_t>>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method, samples, array);
}
inline void Dissonance::Audio::Codecs::Identity::IdentityEncoder::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Dissonance::Audio::Codecs::Identity::IdentityEncoder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Codecs::Identity::IdentityEncoder* Dissonance::Audio::Codecs::Identity::IdentityEncoder::New_ctor(int32_t  sampleRate, int32_t  frameSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Codecs::Identity::IdentityEncoder*>(sampleRate, frameSize));
}
/// @brief Convert operator to "::Dissonance::Audio::Codecs::IVoiceEncoder"
constexpr  Dissonance::Audio::Codecs::Identity::IdentityEncoder::operator ::Dissonance::Audio::Codecs::IVoiceEncoder*() noexcept {
return static_cast<::Dissonance::Audio::Codecs::IVoiceEncoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Audio::Codecs::IVoiceEncoder"
constexpr ::Dissonance::Audio::Codecs::IVoiceEncoder* Dissonance::Audio::Codecs::Identity::IdentityEncoder::i___Dissonance__Audio__Codecs__IVoiceEncoder() noexcept {
return static_cast<::Dissonance::Audio::Codecs::IVoiceEncoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Codecs::Identity::IdentityEncoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Codecs::Identity::IdentityEncoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Identity::IdentityEncoder::IdentityEncoder()   {
}
