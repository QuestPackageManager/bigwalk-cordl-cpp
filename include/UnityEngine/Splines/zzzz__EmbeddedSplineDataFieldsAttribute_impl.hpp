#pragma once
// IWYU pragma private; include "UnityEngine/Splines/EmbeddedSplineDataFieldsAttribute.hpp"
#include "UnityEngine/Splines/zzzz__EmbeddedSplineDataField_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Splines/zzzz__EmbeddedSplineDataFieldsAttribute_def.hpp"
#include "UnityEngine/Splines/zzzz__EmbeddedSplineDataField_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute::*)(::UnityEngine::Splines::EmbeddedSplineDataField)>(&::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804bd4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::EmbeddedSplineDataField>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Splines::EmbeddedSplineDataField& UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute::__cordl_internal_get_Fields()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Fields;
}
constexpr ::UnityEngine::Splines::EmbeddedSplineDataField const& UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute::__cordl_internal_get_Fields() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Fields;
}
constexpr void UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute::__cordl_internal_set_Fields(::UnityEngine::Splines::EmbeddedSplineDataField  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Fields = value;
}
inline void UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute::_ctor(::UnityEngine::Splines::EmbeddedSplineDataField  fields)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Splines::EmbeddedSplineDataField>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fields);
}
inline ::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute* UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute::New_ctor(::UnityEngine::Splines::EmbeddedSplineDataField  fields)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute*>(fields));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::EmbeddedSplineDataFieldsAttribute::EmbeddedSplineDataFieldsAttribute()   {
}
