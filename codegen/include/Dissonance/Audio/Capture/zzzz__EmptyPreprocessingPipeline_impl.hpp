#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/EmptyPreprocessingPipeline.hpp"
#include "Dissonance/Audio/Capture/zzzz__BasePreprocessingPipeline_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__EmptyPreprocessingPipeline_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
//  Writing Method size for method: ::Dissonance::Audio::Capture::EmptyPreprocessingPipeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::EmptyPreprocessingPipeline::*)(::NAudio::Wave::WaveFormat*)>(&::Dissonance::Audio::Capture::EmptyPreprocessingPipeline::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805f4ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EmptyPreprocessingPipeline.set_IsOutputMuted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::EmptyPreprocessingPipeline::*)(bool)>(&::Dissonance::Audio::Capture::EmptyPreprocessingPipeline::set_IsOutputMuted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EmptyPreprocessingPipeline.get_VadIsSpeechDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Audio::Capture::EmptyPreprocessingPipeline::*)()>(&::Dissonance::Audio::Capture::EmptyPreprocessingPipeline::get_VadIsSpeechDetected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::EmptyPreprocessingPipeline.PreprocessAudioFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Audio::Capture::EmptyPreprocessingPipeline::*)(::ArrayW<float_t>)>(&::Dissonance::Audio::Capture::EmptyPreprocessingPipeline::PreprocessAudioFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f4eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(),
                    {::i2c::class_of<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(), 23}
                ));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Capture::EmptyPreprocessingPipeline::_ctor(::NAudio::Wave::WaveFormat*  inputFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(),
                        {".ctor", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputFormat);
}
inline void Dissonance::Audio::Capture::EmptyPreprocessingPipeline::set_IsOutputMuted(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Dissonance::Audio::Capture::EmptyPreprocessingPipeline::get_VadIsSpeechDetected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Dissonance::Audio::Capture::EmptyPreprocessingPipeline::PreprocessAudioFrame(::ArrayW<float_t>  frame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline ::Dissonance::Audio::Capture::EmptyPreprocessingPipeline* Dissonance::Audio::Capture::EmptyPreprocessingPipeline::New_ctor(::NAudio::Wave::WaveFormat*  inputFormat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Audio::Capture::EmptyPreprocessingPipeline*>(inputFormat));
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::EmptyPreprocessingPipeline::EmptyPreprocessingPipeline()   {
}
