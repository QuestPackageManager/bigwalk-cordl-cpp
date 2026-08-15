#pragma once
// IWYU pragma private; include "Rewired/Dev/PlayerIdFieldInfoAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Rewired/Dev/zzzz__PlayerIdFieldInfoAttribute_def.hpp"
//  Writing Method size for method: ::Rewired::Dev::PlayerIdFieldInfoAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Dev::PlayerIdFieldInfoAttribute::*)()>(&::Rewired::Dev::PlayerIdFieldInfoAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Dev::PlayerIdFieldInfoAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Dev::PlayerIdFieldInfoAttribute::__cordl_internal_get_friendlyName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendlyName;
}
constexpr ::StringW const& Rewired::Dev::PlayerIdFieldInfoAttribute::__cordl_internal_get_friendlyName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendlyName;
}
constexpr void Rewired::Dev::PlayerIdFieldInfoAttribute::__cordl_internal_set_friendlyName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendlyName = value;
}
inline void Rewired::Dev::PlayerIdFieldInfoAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Dev::PlayerIdFieldInfoAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Dev::PlayerIdFieldInfoAttribute* Rewired::Dev::PlayerIdFieldInfoAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Dev::PlayerIdFieldInfoAttribute*>());
}
// Ctor Parameters []
constexpr ::Rewired::Dev::PlayerIdFieldInfoAttribute::PlayerIdFieldInfoAttribute()   {
}
