#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineDataHandleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineDataHandleAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineDataHandleAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineDataHandleAttribute::*)()>(&::UnityEngine::Splines::SplineDataHandleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataHandleAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::SplineDataHandleAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineDataHandleAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::SplineDataHandleAttribute* UnityEngine::Splines::SplineDataHandleAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineDataHandleAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineDataHandleAttribute::SplineDataHandleAttribute()   {
}
