#pragma once
// IWYU pragma private; include "Animancer/PolymorphicAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Animancer/zzzz__PolymorphicAttribute_def.hpp"
//  Writing Method size for method: ::Animancer::PolymorphicAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::PolymorphicAttribute::*)()>(&::Animancer::PolymorphicAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PolymorphicAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::PolymorphicAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::PolymorphicAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::PolymorphicAttribute* Animancer::PolymorphicAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::PolymorphicAttribute*>());
}
// Ctor Parameters []
constexpr ::Animancer::PolymorphicAttribute::PolymorphicAttribute()   {
}
