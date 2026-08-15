#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LightProbeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LightProbeUtility_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
inline void WaveHarmonic::Crest::LightProbeUtility::setStaticF_s_SHA(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_SHA", ::WaveHarmonic::Crest::LightProbeUtility*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> WaveHarmonic::Crest::LightProbeUtility::getStaticF_s_SHA()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_SHA", ::WaveHarmonic::Crest::LightProbeUtility*>();
}
inline void WaveHarmonic::Crest::LightProbeUtility::setStaticF_s_SHB(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_SHB", ::WaveHarmonic::Crest::LightProbeUtility*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> WaveHarmonic::Crest::LightProbeUtility::getStaticF_s_SHB()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_SHB", ::WaveHarmonic::Crest::LightProbeUtility*>();
}
inline void WaveHarmonic::Crest::LightProbeUtility::setStaticF_s_SHC(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_SHC", ::WaveHarmonic::Crest::LightProbeUtility*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::LightProbeUtility::getStaticF_s_SHC()  {
return ::cordl_internals::getStaticField<int32_t, "s_SHC", ::WaveHarmonic::Crest::LightProbeUtility*>();
}
template<typename T>
inline void WaveHarmonic::Crest::LightProbeUtility::SetSHCoefficients(T  properties, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LightProbeUtility*>(),
                    {"SetSHCoefficients", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, properties, position);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LightProbeUtility::LightProbeUtility()   {
}
