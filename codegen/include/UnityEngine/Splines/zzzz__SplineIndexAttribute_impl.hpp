#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineIndexAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineIndexAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineIndexAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineIndexAttribute::*)(::StringW)>(&::UnityEngine::Splines::SplineIndexAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818382a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineIndexAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Splines::SplineIndexAttribute::__cordl_internal_get_SplineContainerProperty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplineContainerProperty;
}
constexpr ::StringW const& UnityEngine::Splines::SplineIndexAttribute::__cordl_internal_get_SplineContainerProperty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplineContainerProperty;
}
constexpr void UnityEngine::Splines::SplineIndexAttribute::__cordl_internal_set_SplineContainerProperty(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SplineContainerProperty = value;
}
inline void UnityEngine::Splines::SplineIndexAttribute::_ctor(::StringW  splineContainerProperty)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineIndexAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, splineContainerProperty);
}
inline ::UnityEngine::Splines::SplineIndexAttribute* UnityEngine::Splines::SplineIndexAttribute::New_ctor(::StringW  splineContainerProperty)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineIndexAttribute*>(splineContainerProperty));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineIndexAttribute::SplineIndexAttribute()   {
}
