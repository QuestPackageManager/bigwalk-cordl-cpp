#pragma once
// IWYU pragma private; include "Animancer/Units/MetersAttribute.hpp"
#include "Animancer/Units/zzzz__UnitsAttribute_impl.hpp"
#include "Animancer/Units/zzzz__MetersAttribute_def.hpp"
//  Writing Method size for method: ::Animancer::Units::MetersAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Units::MetersAttribute::*)()>(&::Animancer::Units::MetersAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::MetersAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::Units::MetersAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Units::MetersAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Units::MetersAttribute* Animancer::Units::MetersAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Units::MetersAttribute*>());
}
// Ctor Parameters []
constexpr ::Animancer::Units::MetersAttribute::MetersAttribute()   {
}
