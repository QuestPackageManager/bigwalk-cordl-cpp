#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CopyLobbyDetailsHandleByInviteIdOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CopyLobbyDetailsHandleByInviteIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions.get_InviteId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions::*)()>(&::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions::get_InviteId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>(),
                        {"get_InviteId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions.set_InviteId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions::set_InviteId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>(),
                        {"set_InviteId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions::get_InviteId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>(),
                        {"get_InviteId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions::set_InviteId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>(),
                        {"set_InviteId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_InviteId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions::CopyLobbyDetailsHandleByInviteIdOptions(::Epic::OnlineServices::Utf8String*  _InviteId_k__BackingField) noexcept  {
this->_InviteId_k__BackingField = _InviteId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions::CopyLobbyDetailsHandleByInviteIdOptions()   {
}
