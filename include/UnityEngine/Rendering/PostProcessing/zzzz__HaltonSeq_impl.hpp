#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/HaltonSeq.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__HaltonSeq_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::HaltonSeq.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::PostProcessing::HaltonSeq::Get)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fc0000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HaltonSeq*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Rendering::PostProcessing::HaltonSeq::Get(int32_t  index, int32_t  radix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::HaltonSeq*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, index, radix);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::HaltonSeq::HaltonSeq()   {
}
