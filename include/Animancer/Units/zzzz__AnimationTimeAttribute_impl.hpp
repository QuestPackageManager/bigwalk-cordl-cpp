#pragma once
// IWYU pragma private; include "Animancer/Units/AnimationTimeAttribute.hpp"
#include "Animancer/Units/zzzz__UnitsAttribute_impl.hpp"
#include "Animancer/Units/zzzz__AnimationTimeAttribute_def.hpp"
#include "Animancer/Units/zzzz__AnimationTimeAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::Units::AnimationTimeAttribute_Units::AnimationTimeAttribute_Units(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::Units::AnimationTimeAttribute_Units::AnimationTimeAttribute_Units()   {
}
constexpr ::Animancer::Units::AnimationTimeAttribute_Units  Animancer::Units::AnimationTimeAttribute_Units::Normalized{static_cast<int32_t>(0x0)};
constexpr ::Animancer::Units::AnimationTimeAttribute_Units  Animancer::Units::AnimationTimeAttribute_Units::Seconds{static_cast<int32_t>(0x1)};
constexpr ::Animancer::Units::AnimationTimeAttribute_Units  Animancer::Units::AnimationTimeAttribute_Units::Frames{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Animancer::Units::AnimationTimeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Units::AnimationTimeAttribute::*)(::Animancer::Units::AnimationTimeAttribute_Units)>(&::Animancer::Units::AnimationTimeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::AnimationTimeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::Units::AnimationTimeAttribute_Units>()}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::Units::AnimationTimeAttribute::_ctor(::Animancer::Units::AnimationTimeAttribute_Units  units)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::AnimationTimeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Animancer::Units::AnimationTimeAttribute_Units>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, units);
}
inline ::Animancer::Units::AnimationTimeAttribute* Animancer::Units::AnimationTimeAttribute::New_ctor(::Animancer::Units::AnimationTimeAttribute_Units  units)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Units::AnimationTimeAttribute*>(units));
}
// Ctor Parameters []
constexpr ::Animancer::Units::AnimationTimeAttribute::AnimationTimeAttribute()   {
}
