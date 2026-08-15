#pragma once
// IWYU pragma private; include "Rowlan/Genesis/MinMaxAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Rowlan/Genesis/zzzz__MinMaxAttribute_def.hpp"
//  Writing Method size for method: ::Rowlan::Genesis::MinMaxAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::Genesis::MinMaxAttribute::*)(float_t, float_t, bool, int32_t)>(&::Rowlan::Genesis::MinMaxAttribute::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abecd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::MinMaxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Rowlan::Genesis::MinMaxAttribute::__cordl_internal_get_min()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr float_t const& Rowlan::Genesis::MinMaxAttribute::__cordl_internal_get_min() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___min;
}
constexpr void Rowlan::Genesis::MinMaxAttribute::__cordl_internal_set_min(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___min = value;
}
constexpr float_t& Rowlan::Genesis::MinMaxAttribute::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr float_t const& Rowlan::Genesis::MinMaxAttribute::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void Rowlan::Genesis::MinMaxAttribute::__cordl_internal_set_max(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
constexpr bool& Rowlan::Genesis::MinMaxAttribute::__cordl_internal_get_useGuiContentFix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGuiContentFix;
}
constexpr bool const& Rowlan::Genesis::MinMaxAttribute::__cordl_internal_get_useGuiContentFix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGuiContentFix;
}
constexpr void Rowlan::Genesis::MinMaxAttribute::__cordl_internal_set_useGuiContentFix(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useGuiContentFix = value;
}
constexpr int32_t& Rowlan::Genesis::MinMaxAttribute::__cordl_internal_get_maxDigits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDigits;
}
constexpr int32_t const& Rowlan::Genesis::MinMaxAttribute::__cordl_internal_get_maxDigits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDigits;
}
constexpr void Rowlan::Genesis::MinMaxAttribute::__cordl_internal_set_maxDigits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDigits = value;
}
inline void Rowlan::Genesis::MinMaxAttribute::_ctor(float_t  min, float_t  max, bool  useGuiContentFix, int32_t  maxDigits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::Genesis::MinMaxAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max, useGuiContentFix, maxDigits);
}
inline ::Rowlan::Genesis::MinMaxAttribute* Rowlan::Genesis::MinMaxAttribute::New_ctor(float_t  min, float_t  max, bool  useGuiContentFix, int32_t  maxDigits)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::Genesis::MinMaxAttribute*>(min, max, useGuiContentFix, maxDigits));
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::MinMaxAttribute::MinMaxAttribute()   {
}
