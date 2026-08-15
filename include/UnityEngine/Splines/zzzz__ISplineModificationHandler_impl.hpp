#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ISplineModificationHandler.hpp"
#include "UnityEngine/Splines/zzzz__ISplineModificationHandler_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineModificationData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::ISplineModificationHandler.OnSplineModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::ISplineModificationHandler::*)(::UnityEngine::Splines::SplineModificationData)>(&::UnityEngine::Splines::ISplineModificationHandler::OnSplineModified)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::ISplineModificationHandler*>(),
                    {::i2c::class_of<::UnityEngine::Splines::ISplineModificationHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::ISplineModificationHandler::OnSplineModified(::UnityEngine::Splines::SplineModificationData  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::ISplineModificationHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
