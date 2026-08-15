#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionModificationSetInvitesAllowedOptions.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionModificationSetInvitesAllowedOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions.get_InvitesAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions::*)()>(&::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions::get_InvitesAllowed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions>(),
                        {"get_InvitesAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions.set_InvitesAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions::*)(bool)>(&::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions::set_InvitesAllowed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions>(),
                        {"set_InvitesAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions::get_InvitesAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions>(),
                        {"get_InvitesAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions::set_InvitesAllowed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions>(),
                        {"set_InvitesAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_InvitesAllowed_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions::SessionModificationSetInvitesAllowedOptions(bool  _InvitesAllowed_k__BackingField) noexcept  {
this->_InvitesAllowed_k__BackingField = _InvitesAllowed_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionModificationSetInvitesAllowedOptions::SessionModificationSetInvitesAllowedOptions()   {
}
