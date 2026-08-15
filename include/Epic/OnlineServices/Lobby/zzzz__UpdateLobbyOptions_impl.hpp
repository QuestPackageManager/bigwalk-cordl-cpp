#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/UpdateLobbyOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__UpdateLobbyOptions_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModification_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::UpdateLobbyOptions.get_LobbyModificationHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Lobby::LobbyModification* (::Epic::OnlineServices::Lobby::UpdateLobbyOptions::*)()>(&::Epic::OnlineServices::Lobby::UpdateLobbyOptions::get_LobbyModificationHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::UpdateLobbyOptions>(),
                        {"get_LobbyModificationHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::UpdateLobbyOptions.set_LobbyModificationHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::UpdateLobbyOptions::*)(::Epic::OnlineServices::Lobby::LobbyModification*)>(&::Epic::OnlineServices::Lobby::UpdateLobbyOptions::set_LobbyModificationHandle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::UpdateLobbyOptions>(),
                        {"set_LobbyModificationHandle", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyModification*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Lobby::LobbyModification* Epic::OnlineServices::Lobby::UpdateLobbyOptions::get_LobbyModificationHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::UpdateLobbyOptions>(),
                        {"get_LobbyModificationHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Lobby::LobbyModification*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::UpdateLobbyOptions::set_LobbyModificationHandle(::Epic::OnlineServices::Lobby::LobbyModification*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::UpdateLobbyOptions>(),
                        {"set_LobbyModificationHandle", {}, {::i2c::type_of<::Epic::OnlineServices::Lobby::LobbyModification*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_LobbyModificationHandle_k__BackingField", ty: "::Epic::OnlineServices::Lobby::LobbyModification*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::UpdateLobbyOptions::UpdateLobbyOptions(::Epic::OnlineServices::Lobby::LobbyModification*  _LobbyModificationHandle_k__BackingField) noexcept  {
this->_LobbyModificationHandle_k__BackingField = _LobbyModificationHandle_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::UpdateLobbyOptions::UpdateLobbyOptions()   {
}
