#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationSetInvitesAllowedOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetInvitesAllowedOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions.get_InvitesAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions::*)()>(&::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions::get_InvitesAllowed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>(),
                        {"get_InvitesAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions.set_InvitesAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions::*)(bool)>(&::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions::set_InvitesAllowed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bda60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>(),
                        {"set_InvitesAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions::get_InvitesAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>(),
                        {"get_InvitesAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions::set_InvitesAllowed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>(),
                        {"set_InvitesAllowed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_InvitesAllowed_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions::LobbyModificationSetInvitesAllowedOptions(bool  _InvitesAllowed_k__BackingField) noexcept  {
this->_InvitesAllowed_k__BackingField = _InvitesAllowed_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions::LobbyModificationSetInvitesAllowedOptions()   {
}
