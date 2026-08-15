#pragma once
// IWYU pragma private; include "Animancer/ThresholdLabelAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Animancer/zzzz__ThresholdLabelAttribute_def.hpp"
//  Writing Method size for method: ::Animancer::ThresholdLabelAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ThresholdLabelAttribute::*)(::StringW)>(&::Animancer::ThresholdLabelAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ThresholdLabelAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::ThresholdLabelAttribute::_ctor(::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ThresholdLabelAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline ::Animancer::ThresholdLabelAttribute* Animancer::ThresholdLabelAttribute::New_ctor(::StringW  label)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ThresholdLabelAttribute*>(label));
}
// Ctor Parameters []
constexpr ::Animancer::ThresholdLabelAttribute::ThresholdLabelAttribute()   {
}
