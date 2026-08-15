#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationSetPermissionLevelOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetPermissionLevelOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyPermissionLevel_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions.get_PermissionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyPermissionLevel (::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions::*)()>(&::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions::get_PermissionLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>(),
                        {"get_PermissionLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions.set_PermissionLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions::*)(::Epic::OnlineServices::Lobby::LobbyPermissionLevel)>(&::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions::set_PermissionLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>(),
                        {"set_PermissionLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyPermissionLevel>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Lobby::LobbyPermissionLevel Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions::get_PermissionLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>(),
                        {"get_PermissionLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyPermissionLevel>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions::set_PermissionLevel(::Epic::OnlineServices::Lobby::LobbyPermissionLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions>(),
                        {"set_PermissionLevel", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyPermissionLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_PermissionLevel_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyPermissionLevel", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions::LobbyModificationSetPermissionLevelOptions(::Epic::OnlineServices::Lobby::LobbyPermissionLevel  _PermissionLevel_k__BackingField) noexcept  {
this->_PermissionLevel_k__BackingField = _PermissionLevel_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetPermissionLevelOptions::LobbyModificationSetPermissionLevelOptions()   {
}
