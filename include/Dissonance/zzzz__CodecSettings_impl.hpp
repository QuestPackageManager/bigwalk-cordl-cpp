#pragma once
// IWYU pragma private; include "Dissonance/CodecSettings.hpp"
#include "Dissonance/Audio/Codecs/zzzz__Codec_impl.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__Codec_def.hpp"
//  Writing Method size for method: ::Dissonance::CodecSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::CodecSettings::*)(::Dissonance::Audio::Codecs::Codec, uint32_t, int32_t)>(&::Dissonance::CodecSettings::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805c6c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettings>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Codec>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::CodecSettings.get_Codec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Codecs::Codec (::Dissonance::CodecSettings::*)()>(&::Dissonance::CodecSettings::get_Codec)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettings>(),
                        {"get_Codec", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::CodecSettings.get_FrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::CodecSettings::*)()>(&::Dissonance::CodecSettings::get_FrameSize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18038fe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettings>(),
                        {"get_FrameSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::CodecSettings.get_SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Dissonance::CodecSettings::*)()>(&::Dissonance::CodecSettings::get_SampleRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettings>(),
                        {"get_SampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::CodecSettings.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::CodecSettings::*)()>(&::Dissonance::CodecSettings::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805c6bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::CodecSettings>(),
                    {::i2c::class_of<::Dissonance::CodecSettings>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::CodecSettings::_ctor(::Dissonance::Audio::Codecs::Codec  codec, uint32_t  frameSize, int32_t  sampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettings>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Codec>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, codec, frameSize, sampleRate);
}
inline ::Dissonance::Audio::Codecs::Codec Dissonance::CodecSettings::get_Codec()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettings>(),
                        {"get_Codec", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Codecs::Codec>(*this, ___internal_method);
}
inline uint32_t Dissonance::CodecSettings::get_FrameSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettings>(),
                        {"get_FrameSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline int32_t Dissonance::CodecSettings::get_SampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::CodecSettings>(),
                        {"get_SampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Dissonance::CodecSettings::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::CodecSettings>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_codec", ty: "::Dissonance::Audio::Codecs::Codec", modifiers: "", def_value: Some("{}") }, CppParam { name: "_frameSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sampleRate", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::CodecSettings::CodecSettings(::Dissonance::Audio::Codecs::Codec  _codec, uint32_t  _frameSize, int32_t  _sampleRate) noexcept  {
this->_codec = _codec;
this->_frameSize = _frameSize;
this->_sampleRate = _sampleRate;
}
// Ctor Parameters []
constexpr ::Dissonance::CodecSettings::CodecSettings()   {
}
