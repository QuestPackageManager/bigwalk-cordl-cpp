#pragma once
// IWYU pragma private; include "Animancer/Units/DegreesPerSecondAttribute.hpp"
#include "Animancer/Units/zzzz__UnitsAttribute_impl.hpp"
#include "Animancer/Units/zzzz__DegreesPerSecondAttribute_def.hpp"
//  Writing Method size for method: ::Animancer::Units::DegreesPerSecondAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Units::DegreesPerSecondAttribute::*)()>(&::Animancer::Units::DegreesPerSecondAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::DegreesPerSecondAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::Units::DegreesPerSecondAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::DegreesPerSecondAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Units::DegreesPerSecondAttribute* Animancer::Units::DegreesPerSecondAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Units::DegreesPerSecondAttribute*>());
}
// Ctor Parameters []
constexpr ::Animancer::Units::DegreesPerSecondAttribute::DegreesPerSecondAttribute()   {
}
