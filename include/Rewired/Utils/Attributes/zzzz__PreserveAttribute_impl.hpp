#pragma once
// IWYU pragma private; include "Rewired/Utils/Attributes/PreserveAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Rewired/Utils/Attributes/zzzz__PreserveAttribute_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Attributes::PreserveAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Attributes::PreserveAttribute::*)()>(&::Rewired::Utils::Attributes::PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Attributes::PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Attributes::PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Attributes::PreserveAttribute* Rewired::Utils::Attributes::PreserveAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Attributes::PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Attributes::PreserveAttribute::PreserveAttribute()   {
}
