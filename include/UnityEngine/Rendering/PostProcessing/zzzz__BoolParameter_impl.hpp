#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/BoolParameter.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ParameterOverride_1_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__BoolParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::BoolParameter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::BoolParameter::*)()>(&::UnityEngine::Rendering::PostProcessing::BoolParameter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fbf130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::BoolParameter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::BoolParameter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::BoolParameter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::BoolParameter* UnityEngine::Rendering::PostProcessing::BoolParameter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::BoolParameter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter::BoolParameter()   {
}
