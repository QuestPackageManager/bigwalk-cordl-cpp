#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MinAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MinAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MinAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MinAttribute::*)(float_t)>(&::UnityEngine::Rendering::PostProcessing::MinAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180346aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MinAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::PostProcessing::MinAttribute::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::MinAttribute::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void UnityEngine::Rendering::PostProcessing::MinAttribute::__cordl_internal_set_min(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
inline void UnityEngine::Rendering::PostProcessing::MinAttribute::_ctor(float_t  min)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MinAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min);
}
inline ::UnityEngine::Rendering::PostProcessing::MinAttribute* UnityEngine::Rendering::PostProcessing::MinAttribute::New_ctor(float_t  min)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::MinAttribute*>(min));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::MinAttribute::MinAttribute()   {
}
