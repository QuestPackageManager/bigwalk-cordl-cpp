#pragma once
// IWYU pragma private; include "UnityEngine/GradientUsageAttribute.hpp"
#include "UnityEngine/zzzz__ColorSpace_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__GradientUsageAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::GradientUsageAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GradientUsageAttribute::*)(bool)>(&::UnityEngine::GradientUsageAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182272b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GradientUsageAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::GradientUsageAttribute::__cordl_internal_get_hdr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hdr;
}
constexpr bool const& UnityEngine::GradientUsageAttribute::__cordl_internal_get_hdr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hdr;
}
constexpr void UnityEngine::GradientUsageAttribute::__cordl_internal_set_hdr(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hdr = value;
}
constexpr ::UnityEngine::ColorSpace& UnityEngine::GradientUsageAttribute::__cordl_internal_get_colorSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSpace;
}
constexpr ::UnityEngine::ColorSpace const& UnityEngine::GradientUsageAttribute::__cordl_internal_get_colorSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorSpace;
}
constexpr void UnityEngine::GradientUsageAttribute::__cordl_internal_set_colorSpace(::UnityEngine::ColorSpace  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorSpace = value;
}
inline void UnityEngine::GradientUsageAttribute::_ctor(bool  hdr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::GradientUsageAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hdr);
}
inline ::UnityEngine::GradientUsageAttribute* UnityEngine::GradientUsageAttribute::New_ctor(bool  hdr)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GradientUsageAttribute*>(hdr));
}
// Ctor Parameters []
constexpr ::UnityEngine::GradientUsageAttribute::GradientUsageAttribute()   {
}
