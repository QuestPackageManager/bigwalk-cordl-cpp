#pragma once
// IWYU pragma private; include "Rewired/CustomObfuscation.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Rewired/zzzz__CustomObfuscation_def.hpp"
//  Writing Method size for method: ::Rewired::CustomObfuscation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomObfuscation::*)()>(&::Rewired::CustomObfuscation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomObfuscation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::CustomObfuscation::__cordl_internal_get_rename()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rename;
}
constexpr bool const& Rewired::CustomObfuscation::__cordl_internal_get_rename() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rename;
}
constexpr void Rewired::CustomObfuscation::__cordl_internal_set_rename(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rename = value;
}
inline void Rewired::CustomObfuscation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomObfuscation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::CustomObfuscation* Rewired::CustomObfuscation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CustomObfuscation*>());
}
// Ctor Parameters []
constexpr ::Rewired::CustomObfuscation::CustomObfuscation()   {
}
