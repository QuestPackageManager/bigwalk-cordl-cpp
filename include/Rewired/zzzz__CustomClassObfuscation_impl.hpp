#pragma once
// IWYU pragma private; include "Rewired/CustomClassObfuscation.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Rewired/zzzz__CustomClassObfuscation_def.hpp"
//  Writing Method size for method: ::Rewired::CustomClassObfuscation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::CustomClassObfuscation::*)()>(&::Rewired::CustomClassObfuscation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18195c980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomClassObfuscation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::CustomClassObfuscation::__cordl_internal_get_renamePubIntMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renamePubIntMembers;
}
constexpr bool const& Rewired::CustomClassObfuscation::__cordl_internal_get_renamePubIntMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renamePubIntMembers;
}
constexpr void Rewired::CustomClassObfuscation::__cordl_internal_set_renamePubIntMembers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renamePubIntMembers = value;
}
constexpr bool& Rewired::CustomClassObfuscation::__cordl_internal_get_renamePrivateMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renamePrivateMembers;
}
constexpr bool const& Rewired::CustomClassObfuscation::__cordl_internal_get_renamePrivateMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renamePrivateMembers;
}
constexpr void Rewired::CustomClassObfuscation::__cordl_internal_set_renamePrivateMembers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renamePrivateMembers = value;
}
inline void Rewired::CustomClassObfuscation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::CustomClassObfuscation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::CustomClassObfuscation* Rewired::CustomClassObfuscation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::CustomClassObfuscation*>());
}
// Ctor Parameters []
constexpr ::Rewired::CustomClassObfuscation::CustomClassObfuscation()   {
}
