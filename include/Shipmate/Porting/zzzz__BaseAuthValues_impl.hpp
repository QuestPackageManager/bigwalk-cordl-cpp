#pragma once
// IWYU pragma private; include "Shipmate/Porting/BaseAuthValues.hpp"
#include "Shipmate/Porting/zzzz__AuthTypes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Shipmate/Porting/zzzz__BaseAuthValues_def.hpp"
//  Writing Method size for method: ::Shipmate::Porting::BaseAuthValues._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Shipmate::Porting::BaseAuthValues::*)()>(&::Shipmate::Porting::BaseAuthValues::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::BaseAuthValues*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Shipmate::Porting::AuthTypes& Shipmate::Porting::BaseAuthValues::__cordl_internal_get_authType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authType;
}
constexpr ::Shipmate::Porting::AuthTypes const& Shipmate::Porting::BaseAuthValues::__cordl_internal_get_authType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authType;
}
constexpr void Shipmate::Porting::BaseAuthValues::__cordl_internal_set_authType(::Shipmate::Porting::AuthTypes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authType = value;
}
constexpr ::StringW& Shipmate::Porting::BaseAuthValues::__cordl_internal_get_token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr ::StringW const& Shipmate::Porting::BaseAuthValues::__cordl_internal_get_token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr void Shipmate::Porting::BaseAuthValues::__cordl_internal_set_token(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___token = value;
}
inline void Shipmate::Porting::BaseAuthValues::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Shipmate::Porting::BaseAuthValues*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Shipmate::Porting::BaseAuthValues* Shipmate::Porting::BaseAuthValues::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Shipmate::Porting::BaseAuthValues*>());
}
// Ctor Parameters []
constexpr ::Shipmate::Porting::BaseAuthValues::BaseAuthValues()   {
}
