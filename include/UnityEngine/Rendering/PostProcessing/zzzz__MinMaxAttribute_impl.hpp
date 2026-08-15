#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MinMaxAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MinMaxAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MinMaxAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MinMaxAttribute::*)(float_t, float_t)>(&::UnityEngine::Rendering::PostProcessing::MinMaxAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fb7900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MinMaxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::PostProcessing::MinMaxAttribute::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::MinMaxAttribute::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void UnityEngine::Rendering::PostProcessing::MinMaxAttribute::__cordl_internal_set_min(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr float_t& UnityEngine::Rendering::PostProcessing::MinMaxAttribute::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr float_t const& UnityEngine::Rendering::PostProcessing::MinMaxAttribute::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void UnityEngine::Rendering::PostProcessing::MinMaxAttribute::__cordl_internal_set_max(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
inline void UnityEngine::Rendering::PostProcessing::MinMaxAttribute::_ctor(float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MinMaxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max);
}
inline ::UnityEngine::Rendering::PostProcessing::MinMaxAttribute* UnityEngine::Rendering::PostProcessing::MinMaxAttribute::New_ctor(float_t  min, float_t  max)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::MinMaxAttribute*>(min, max));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::MinMaxAttribute::MinMaxAttribute()   {
}
