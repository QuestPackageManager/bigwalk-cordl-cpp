#pragma once
// IWYU pragma private; include "Dissonance/Audio/Codecs/Opus/BandwidthExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Codecs/Opus/zzzz__BandwidthExtensions_def.hpp"
#include "Dissonance/Audio/Codecs/Opus/zzzz__OpusNative_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Codecs::Opus::BandwidthExtensions.SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth)>(&::Dissonance::Audio::Codecs::Opus::BandwidthExtensions::SampleRate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805f0670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::BandwidthExtensions*>(),
                        {"SampleRate", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Codecs::Opus::BandwidthExtensions::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Codecs::Opus::BandwidthExtensions*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Codecs::Opus::BandwidthExtensions::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Codecs::Opus::BandwidthExtensions*>();
}
inline int32_t Dissonance::Audio::Codecs::Opus::BandwidthExtensions::SampleRate(::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth  bandwidth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Codecs::Opus::BandwidthExtensions*>(),
                        {"SampleRate", {}, {::i2c::type_of<::Dissonance::Audio::Codecs::Opus::OpusNative_Bandwidth>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bandwidth);
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Codecs::Opus::BandwidthExtensions::BandwidthExtensions()   {
}
