#pragma once
// IWYU pragma private; include "Dissonance/Audio/AecDiagnostics.hpp"
#include "System/Runtime/InteropServices/zzzz__CallingConvention_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/Audio/zzzz__AecDiagnostics_def.hpp"
#include "Dissonance/Audio/zzzz__AecDiagnostics_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "DelayMedian", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DelayStdDev", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FractionPoorDelays", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EchoReturnLossAverage", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EchoReturnLossMin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EchoReturnLossMax", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EchoReturnLossEnhancementAverage", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EchoReturnLossEnhancementMin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EchoReturnLossEnhancementMax", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ResidualEchoLikelihood", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::AecDiagnostics_AecStats::AecDiagnostics_AecStats(float_t  DelayMedian, float_t  DelayStdDev, float_t  FractionPoorDelays, float_t  EchoReturnLossAverage, float_t  EchoReturnLossMin, float_t  EchoReturnLossMax, float_t  EchoReturnLossEnhancementAverage, float_t  EchoReturnLossEnhancementMin, float_t  EchoReturnLossEnhancementMax, float_t  ResidualEchoLikelihood) noexcept  {
this->DelayMedian = DelayMedian;
this->DelayStdDev = DelayStdDev;
this->FractionPoorDelays = FractionPoorDelays;
this->EchoReturnLossAverage = EchoReturnLossAverage;
this->EchoReturnLossMin = EchoReturnLossMin;
this->EchoReturnLossMax = EchoReturnLossMax;
this->EchoReturnLossEnhancementAverage = EchoReturnLossEnhancementAverage;
this->EchoReturnLossEnhancementMin = EchoReturnLossEnhancementMin;
this->EchoReturnLossEnhancementMax = EchoReturnLossEnhancementMax;
this->ResidualEchoLikelihood = ResidualEchoLikelihood;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::AecDiagnostics_AecStats::AecDiagnostics_AecStats()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Audio::AecDiagnostics_AecState::AecDiagnostics_AecState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::AecDiagnostics_AecState::AecDiagnostics_AecState()   {
}
constexpr ::Dissonance::Audio::AecDiagnostics_AecState  Dissonance::Audio::AecDiagnostics_AecState::FilterNotRunning{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Audio::AecDiagnostics_AecState  Dissonance::Audio::AecDiagnostics_AecState::FilterNoInstance{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::Audio::AecDiagnostics_AecState  Dissonance::Audio::AecDiagnostics_AecState::FilterNoSamplesSubmitted{static_cast<int32_t>(0x2)};
constexpr ::Dissonance::Audio::AecDiagnostics_AecState  Dissonance::Audio::AecDiagnostics_AecState::FilterOk{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Dissonance::Audio::AecDiagnostics.Dissonance_GetAecMetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::Dissonance::Audio::AecDiagnostics::Dissonance_GetAecMetrics)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d74f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AecDiagnostics*>(),
                        {"Dissonance_GetAecMetrics", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::AecDiagnostics.GetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::AecDiagnostics_AecState (*)()>(&::Dissonance::Audio::AecDiagnostics::GetState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d7580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AecDiagnostics*>(),
                        {"GetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Audio::AecDiagnostics.GetStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Audio::AecDiagnostics_AecStats (*)(::by_ref<::ArrayW<float_t>>)>(&::Dissonance::Audio::AecDiagnostics::GetStats)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1805d7590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AecDiagnostics*>(),
                        {"GetStats", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Audio::AecDiagnostics::Dissonance_GetAecMetrics(::System::IntPtr  buffer, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AecDiagnostics*>(),
                        {"Dissonance_GetAecMetrics", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, length);
}
inline ::Dissonance::Audio::AecDiagnostics_AecState Dissonance::Audio::AecDiagnostics::GetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AecDiagnostics*>(),
                        {"GetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::AecDiagnostics_AecState>(nullptr, ___internal_method);
}
inline ::Dissonance::Audio::AecDiagnostics_AecStats Dissonance::Audio::AecDiagnostics::GetStats(::by_ref<::ArrayW<float_t>>  temp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Audio::AecDiagnostics*>(),
                        {"GetStats", {}, {::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Audio::AecDiagnostics_AecStats>(nullptr, ___internal_method, temp);
}
// Ctor Parameters []
constexpr ::Dissonance::Audio::AecDiagnostics::AecDiagnostics()   {
}
constexpr ::System::Runtime::InteropServices::CallingConvention  Dissonance::Audio::AecDiagnostics::Convention{static_cast<int32_t>(0x2)};
