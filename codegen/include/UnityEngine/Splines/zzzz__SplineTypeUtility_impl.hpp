#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineTypeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineTypeUtility_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineType_def.hpp"
#include "UnityEngine/Splines/zzzz__TangentMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineTypeUtility.GetTangentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::TangentMode (*)(::UnityEngine::Splines::SplineType)>(&::UnityEngine::Splines::SplineTypeUtility::GetTangentMode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18217cef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineTypeUtility*>(),
                        {"GetTangentMode", {}, {::i2c::type_of<::UnityEngine::Splines::SplineType>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Splines::TangentMode UnityEngine::Splines::SplineTypeUtility::GetTangentMode(::UnityEngine::Splines::SplineType  splineType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineTypeUtility*>(),
                        {"GetTangentMode", {}, {::i2c::type_of<::UnityEngine::Splines::SplineType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::TangentMode>(nullptr, ___internal_method, splineType);
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineTypeUtility::SplineTypeUtility()   {
}
