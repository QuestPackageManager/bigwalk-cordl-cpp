#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/AudioPluginDissonanceNative.hpp"
#include "System/Runtime/InteropServices/zzzz__CallingConvention_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/Capture/zzzz__AudioPluginDissonanceNative_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__AecSuppressionLevels_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__AecmRoutingMode_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__AudioPluginDissonanceNative_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__NoiseSuppressionLevels_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__VadSensitivityLevels_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates::AudioPluginDissonanceNative_SampleRates(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates::AudioPluginDissonanceNative_SampleRates()   {
}
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates  Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates::SampleRate8KHz{static_cast<int32_t>(0x1f40)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates  Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates::SampleRate16KHz{static_cast<int32_t>(0x3e80)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates  Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates::SampleRate32KHz{static_cast<int32_t>(0x7d00)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates  Dissonance::Audio::Capture::AudioPluginDissonanceNative_SampleRates::SampleRate48KHz{static_cast<int32_t>(0xbb80)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::AudioPluginDissonanceNative_ProcessorErrors(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::AudioPluginDissonanceNative_ProcessorErrors()   {
}
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::Ok{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::Unspecified{static_cast<int32_t>(0xffffffff)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::CreationFailed{static_cast<int32_t>(0xfffffffe)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::UnsupportedComponent{static_cast<int32_t>(0xfffffffd)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::UnsupportedFunction{static_cast<int32_t>(0xfffffffc)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::NullPointer{static_cast<int32_t>(0xfffffffb)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::BadParameter{static_cast<int32_t>(0xfffffffa)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::BadSampleRate{static_cast<int32_t>(0xfffffff9)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::BadDataLength{static_cast<int32_t>(0xfffffff8)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::BadNumberChannels{static_cast<int32_t>(0xfffffff7)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::FileError{static_cast<int32_t>(0xfffffff6)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::StreamParameterNotSet{static_cast<int32_t>(0xfffffff5)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors  Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors::NotEnabled{static_cast<int32_t>(0xfffffff4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState::AudioPluginDissonanceNative_FilterState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState::AudioPluginDissonanceNative_FilterState()   {
}
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState  Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState::FilterNotRunning{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState  Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState::FilterNoInstance{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState  Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState::FilterNoSamplesSubmitted{static_cast<int32_t>(0x2)};
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState  Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState::FilterOk{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.GetAecFilterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState (*)()>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::GetAecFilterState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805f0570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"GetAecFilterState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_SetMinBandGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_SetMinBandGain)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805f04e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_SetMinBandGain", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_CreateRnnoiseState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_CreateRnnoiseState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805efe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_CreateRnnoiseState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_DestroyRnnoiseState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_DestroyRnnoiseState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805eff80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_DestroyRnnoiseState", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_RnnoiseProcessFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, int32_t, ::ArrayW<float_t>, ::ArrayW<float_t>)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_RnnoiseProcessFrame)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805f0380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_RnnoiseProcessFrame", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_RnnoiseGetGains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, int32_t)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_RnnoiseGetGains)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805f02e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_RnnoiseGetGains", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_CreatePreprocessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Dissonance::Audio::Capture::NoiseSuppressionLevels, ::Dissonance::Audio::Capture::AecSuppressionLevels, bool, bool, bool, ::Dissonance::Audio::Capture::AecmRoutingMode, bool)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_CreatePreprocessor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805efdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_CreatePreprocessor", {}, {::i2c::type_of<::Dissonance::Audio::Capture::NoiseSuppressionLevels>(), ::i2c::type_of<::Dissonance::Audio::Capture::AecSuppressionLevels>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Dissonance::Audio::Capture::AecmRoutingMode>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_DestroyPreprocessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_DestroyPreprocessor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805eff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_DestroyPreprocessor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_ConfigureNoiseSuppression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Dissonance::Audio::Capture::NoiseSuppressionLevels)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_ConfigureNoiseSuppression)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805efca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_ConfigureNoiseSuppression", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Capture::NoiseSuppressionLevels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_ConfigureVadSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Dissonance::Audio::Capture::VadSensitivityLevels)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_ConfigureVadSensitivity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805efd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_ConfigureVadSensitivity", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Capture::VadSensitivityLevels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_ConfigureAecSuppression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Dissonance::Audio::Capture::AecSuppressionLevels, ::Dissonance::Audio::Capture::AecmRoutingMode)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_ConfigureAecSuppression)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805efc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_ConfigureAecSuppression", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Capture::AecSuppressionLevels>(), ::i2c::type_of<::Dissonance::Audio::Capture::AecmRoutingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_GetVadSpeechState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_GetVadSpeechState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805f0100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_GetVadSpeechState", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_PreprocessCaptureFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors (*)(::System::IntPtr, int32_t, ::ArrayW<float_t>, ::ArrayW<float_t>, int32_t)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_PreprocessCaptureFrame)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805f0180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_PreprocessCaptureFrame", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_PreprocessorExchangeInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_PreprocessorExchangeInstance)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805f0250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_PreprocessorExchangeInstance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_GetFilterState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_GetFilterState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805f0090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_GetFilterState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_GetAecMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_GetAecMetrics)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805f0000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_GetAecMetrics", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::Capture::AudioPluginDissonanceNative.Dissonance_SetAgcIsOutputMutedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_SetAgcIsOutputMutedState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805f0450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_SetAgcIsOutputMutedState", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::Capture::AudioPluginDissonanceNative::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Audio::Capture::AudioPluginDissonanceNative::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>();
}
inline ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState Dissonance::Audio::Capture::AudioPluginDissonanceNative::GetAecFilterState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"GetAecFilterState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::AudioPluginDissonanceNative_FilterState>(nullptr, ___internal_method);
}
inline void Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_SetMinBandGain(::System::IntPtr  state, float_t  min_band_gain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_SetMinBandGain", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state, min_band_gain);
}
inline ::System::IntPtr Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_CreateRnnoiseState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_CreateRnnoiseState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_DestroyRnnoiseState(::System::IntPtr  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_DestroyRnnoiseState", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline bool Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_RnnoiseProcessFrame(::System::IntPtr  state, int32_t  count, int32_t  sampleRate, ::ArrayW<float_t>  input, ::ArrayW<float_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_RnnoiseProcessFrame", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state, count, sampleRate, input, output);
}
inline int32_t Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_RnnoiseGetGains(::System::IntPtr  state, ::ArrayW<float_t>  output, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_RnnoiseGetGains", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, state, output, length);
}
inline ::System::IntPtr Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_CreatePreprocessor(::Dissonance::Audio::Capture::NoiseSuppressionLevels  nsLevel, ::Dissonance::Audio::Capture::AecSuppressionLevels  aecLevel, bool  aecDelayAgnostic, bool  aecExtended, bool  aecRefined, ::Dissonance::Audio::Capture::AecmRoutingMode  aecmRoutingMode, bool  aecmComfortNoise)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_CreatePreprocessor", {}, {::i2c::type_of<::Dissonance::Audio::Capture::NoiseSuppressionLevels>(), ::i2c::type_of<::Dissonance::Audio::Capture::AecSuppressionLevels>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Dissonance::Audio::Capture::AecmRoutingMode>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, nsLevel, aecLevel, aecDelayAgnostic, aecExtended, aecRefined, aecmRoutingMode, aecmComfortNoise);
}
inline void Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_DestroyPreprocessor(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_DestroyPreprocessor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline void Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_ConfigureNoiseSuppression(::System::IntPtr  handle, ::Dissonance::Audio::Capture::NoiseSuppressionLevels  nsLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_ConfigureNoiseSuppression", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Capture::NoiseSuppressionLevels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, nsLevel);
}
inline void Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_ConfigureVadSensitivity(::System::IntPtr  handle, ::Dissonance::Audio::Capture::VadSensitivityLevels  nsLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_ConfigureVadSensitivity", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Capture::VadSensitivityLevels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, nsLevel);
}
inline void Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_ConfigureAecSuppression(::System::IntPtr  handle, ::Dissonance::Audio::Capture::AecSuppressionLevels  aecLevel, ::Dissonance::Audio::Capture::AecmRoutingMode  aecmRouting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_ConfigureAecSuppression", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Dissonance::Audio::Capture::AecSuppressionLevels>(), ::i2c::type_of<::Dissonance::Audio::Capture::AecmRoutingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, aecLevel, aecmRouting);
}
inline bool Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_GetVadSpeechState(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_GetVadSpeechState", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
inline ::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_PreprocessCaptureFrame(::System::IntPtr  handle, int32_t  sampleRate, ::ArrayW<float_t>  input, ::ArrayW<float_t>  output, int32_t  streamDelay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_PreprocessCaptureFrame", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::Capture::AudioPluginDissonanceNative_ProcessorErrors>(nullptr, ___internal_method, handle, sampleRate, input, output, streamDelay);
}
inline bool Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_PreprocessorExchangeInstance(::System::IntPtr  previous, ::System::IntPtr  replacement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_PreprocessorExchangeInstance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, previous, replacement);
}
inline int32_t Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_GetFilterState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_GetFilterState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_GetAecMetrics(::System::IntPtr  floatBuffer, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_GetAecMetrics", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, floatBuffer, bufferLength);
}
inline void Dissonance::Audio::Capture::AudioPluginDissonanceNative::Dissonance_SetAgcIsOutputMutedState(::System::IntPtr  handle, bool  isMuted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::Capture::AudioPluginDissonanceNative*>(),
                        {"Dissonance_SetAgcIsOutputMutedState", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle, isMuted);
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::Capture::AudioPluginDissonanceNative::AudioPluginDissonanceNative()   {
}
constexpr ::System::Runtime::InteropServices::CallingConvention  Dissonance::Audio::Capture::AudioPluginDissonanceNative::Convention{static_cast<int32_t>(0x2)};
