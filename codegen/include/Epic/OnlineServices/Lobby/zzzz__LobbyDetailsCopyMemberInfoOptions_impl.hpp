#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsCopyMemberInfoOptions.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyDetailsCopyMemberInfoOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions.get_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions::*)()>(&::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions::get_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions.set_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions::set_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions::get_TargetUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions::set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions::LobbyDetailsCopyMemberInfoOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField) noexcept  {
this->_TargetUserId_k__BackingField = _TargetUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions::LobbyDetailsCopyMemberInfoOptions()   {
}
