#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/IVoiceEncoder.hpp"
#include "Dissonance/Audio/Codecs/zzzz__IVoiceEncoder_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Codecs::IVoiceEncoder.set_PacketLoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::IVoiceEncoder::*)(float_t)>(&::Dissonance::Audio::Codecs::IVoiceEncoder::set_PacketLoss)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(),
                    {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::IVoiceEncoder.get_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::IVoiceEncoder::*)()>(&::Dissonance::Audio::Codecs::IVoiceEncoder::get_FrameSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(),
                    {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::IVoiceEncoder.get_SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Codecs::IVoiceEncoder::*)()>(&::Dissonance::Audio::Codecs::IVoiceEncoder::get_SampleRate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(),
                    {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::IVoiceEncoder.Encode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Dissonance::Audio::Codecs::IVoiceEncoder::*)(::System::ArraySegment_1<float_t>, ::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Audio::Codecs::IVoiceEncoder::Encode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(),
                    {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Codecs::IVoiceEncoder.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Codecs::IVoiceEncoder::*)()>(&::Dissonance::Audio::Codecs::IVoiceEncoder::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(),
                    {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Codecs::IVoiceEncoder::set_PacketLoss(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Dissonance::Audio::Codecs::IVoiceEncoder::get_FrameSize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Dissonance::Audio::Codecs::IVoiceEncoder::get_SampleRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::ArraySegment_1<uint8_t> Dissonance::Audio::Codecs::IVoiceEncoder::Encode(::System::ArraySegment_1<float_t>  samples, ::System::ArraySegment_1<uint8_t>  array)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(this, ___internal_method, samples, array);
}
inline void Dissonance::Audio::Codecs::IVoiceEncoder::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Codecs::IVoiceEncoder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Dissonance::Audio::Codecs::IVoiceEncoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Dissonance::Audio::Codecs::IVoiceEncoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
