#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SampleFlowHelper.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__SampleHelper_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleFlowHelper_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleFlowHelper.Sample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::SampleFlowHelper::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector2>, float_t)>(&::WaveHarmonic::Crest::SampleFlowHelper::Sample)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18257dd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleFlowHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::SampleFlowHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::SampleFlowHelper::*)()>(&::WaveHarmonic::Crest::SampleFlowHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18257dd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleFlowHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool WaveHarmonic::Crest::SampleFlowHelper::Sample(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector2>  flow, float_t  minimumLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleFlowHelper*>(),
                        {"Sample", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, position, flow, minimumLength);
}
inline void WaveHarmonic::Crest::SampleFlowHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::SampleFlowHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::SampleFlowHelper* WaveHarmonic::Crest::SampleFlowHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::SampleFlowHelper*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::SampleFlowHelper::SampleFlowHelper()   {
}
