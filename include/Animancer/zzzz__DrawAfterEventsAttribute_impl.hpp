#pragma once
// IWYU pragma private; include "Animancer/DrawAfterEventsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Animancer/zzzz__DrawAfterEventsAttribute_def.hpp"
//  Writing Method size for method: ::Animancer::DrawAfterEventsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DrawAfterEventsAttribute::*)()>(&::Animancer::DrawAfterEventsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DrawAfterEventsAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::DrawAfterEventsAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DrawAfterEventsAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::DrawAfterEventsAttribute* Animancer::DrawAfterEventsAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::DrawAfterEventsAttribute*>());
}
// Ctor Parameters []
constexpr ::Animancer::DrawAfterEventsAttribute::DrawAfterEventsAttribute()   {
}
