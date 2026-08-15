#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/DecoderFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Playback/zzzz__DecoderFactory_def.hpp"
#include "Dissonance/Audio/Codecs/zzzz__IVoiceDecoder_def.hpp"
#include "Dissonance/Audio/Playback/zzzz__FrameFormat_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderFactory.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Codecs::IVoiceDecoder* (*)(::Dissonance::Audio::Playback::FrameFormat)>(&::Dissonance::Audio::Playback::DecoderFactory::Create)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1805db860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderFactory*>(),
                        {"Create", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Playback::DecoderFactory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Playback::DecoderFactory::*)()>(&::Dissonance::Audio::Playback::DecoderFactory::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderFactory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Playback::DecoderFactory::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::DecoderFactory*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Playback::DecoderFactory::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Playback::DecoderFactory*>();
}
inline ::Dissonance::Audio::Codecs::IVoiceDecoder* Dissonance::Audio::Playback::DecoderFactory::Create(::Dissonance::Audio::Playback::FrameFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderFactory*>(),
                        {"Create", {}, {::i2c::type_of<::Dissonance::Audio::Playback::FrameFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Codecs::IVoiceDecoder*>(nullptr, ___internal_method, format);
}
inline void Dissonance::Audio::Playback::DecoderFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Playback::DecoderFactory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Dissonance::Audio::Playback::DecoderFactory* Dissonance::Audio::Playback::DecoderFactory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Playback::DecoderFactory*>());
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Playback::DecoderFactory::DecoderFactory()   {
}
