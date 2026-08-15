#pragma once
// IWYU pragma private; include "Animancer/SelfDrawerAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Animancer/zzzz__SelfDrawerAttribute_def.hpp"
//  Writing Method size for method: ::Animancer::SelfDrawerAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::SelfDrawerAttribute::*)()>(&::Animancer::SelfDrawerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180303f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SelfDrawerAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::SelfDrawerAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::SelfDrawerAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::SelfDrawerAttribute* Animancer::SelfDrawerAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::SelfDrawerAttribute*>());
}
// Ctor Parameters []
constexpr ::Animancer::SelfDrawerAttribute::SelfDrawerAttribute()   {
}
