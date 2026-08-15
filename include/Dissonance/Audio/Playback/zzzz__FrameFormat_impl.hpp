#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/FrameFormat.hpp"
#include "Dissonance/Audio/Codecs/zzzz__Codec_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__FrameFormat_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__Codec_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::FrameFormat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::FrameFormat::*)(::Dissonance::Audio::Codecs::Codec, ::NAudio::Wave::WaveFormat*, uint32_t)>(&::Dissonance::Audio::Playback::FrameFormat::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805e0790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameFormat>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Codec>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::FrameFormat.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::Audio::Playback::FrameFormat::*)()>(&::Dissonance::Audio::Playback::FrameFormat::GetHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e0720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::FrameFormat>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::FrameFormat>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::FrameFormat.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::FrameFormat::*)(::Dissonance::Audio::Playback::FrameFormat)>(&::Dissonance::Audio::Playback::FrameFormat::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e0610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameFormat>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::FrameFormat.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Playback::FrameFormat::*)(::System::Object*)>(&::Dissonance::Audio::Playback::FrameFormat::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805e0680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Playback::FrameFormat>(),
                    {::i2c::class_of<::Dissonance::Audio::Playback::FrameFormat>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Playback::FrameFormat::_ctor(::Dissonance::Audio::Codecs::Codec  codec, ::NAudio::Wave::WaveFormat*  waveFormat, uint32_t  frameSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameFormat>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Codec>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, codec, waveFormat, frameSize);
}
inline int32_t Dissonance::Audio::Playback::FrameFormat::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::FrameFormat>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Dissonance::Audio::Playback::FrameFormat::Equals(::Dissonance::Audio::Playback::FrameFormat  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::FrameFormat>(),
                        {"Equals", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Dissonance::Audio::Playback::FrameFormat::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Playback::FrameFormat>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::Audio::Playback::FrameFormat>"
constexpr  Dissonance::Audio::Playback::FrameFormat::operator ::System::IEquatable_1<::Dissonance::Audio::Playback::FrameFormat>*()  {
return static_cast<::System::IEquatable_1<::Dissonance::Audio::Playback::FrameFormat>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Dissonance::Audio::Playback::FrameFormat>"
constexpr ::System::IEquatable_1<::Dissonance::Audio::Playback::FrameFormat>* Dissonance::Audio::Playback::FrameFormat::i___System__IEquatable_1___Dissonance__Audio__Playback__FrameFormat_()  {
return static_cast<::System::IEquatable_1<::Dissonance::Audio::Playback::FrameFormat>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Codec", ty: "::Dissonance::Audio::Codecs::Codec", modifiers: "", def_value: Some("{}") }, CppParam { name: "WaveFormat", ty: "::NAudio::Wave::WaveFormat*", modifiers: "", def_value: Some("{}") }, CppParam { name: "FrameSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Playback::FrameFormat::FrameFormat(::Dissonance::Audio::Codecs::Codec  Codec, ::NAudio::Wave::WaveFormat*  WaveFormat, uint32_t  FrameSize) noexcept  {
this->Codec = Codec;
this->WaveFormat = WaveFormat;
this->FrameSize = FrameSize;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::FrameFormat::FrameFormat()   {
}
