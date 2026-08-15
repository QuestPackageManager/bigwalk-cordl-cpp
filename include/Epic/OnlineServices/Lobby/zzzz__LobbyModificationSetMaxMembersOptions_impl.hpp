#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationSetMaxMembersOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetMaxMembersOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions.get_MaxMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions::*)()>(&::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions::get_MaxMembers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions>(),
                        {"get_MaxMembers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions.set_MaxMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions::*)(uint32_t)>(&::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions::set_MaxMembers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions>(),
                        {"set_MaxMembers", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions::get_MaxMembers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions>(),
                        {"get_MaxMembers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions::set_MaxMembers(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions>(),
                        {"set_MaxMembers", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_MaxMembers_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions::LobbyModificationSetMaxMembersOptions(uint32_t  _MaxMembers_k__BackingField) noexcept  {
this->_MaxMembers_k__BackingField = _MaxMembers_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetMaxMembersOptions::LobbyModificationSetMaxMembersOptions()   {
}
