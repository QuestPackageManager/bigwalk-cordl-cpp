#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationSetInvitesAllowedOptionsInternal.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetInvitesAllowedOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__LobbyModificationSetInvitesAllowedOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>)>(&::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804f2a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>"
constexpr  Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>* Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__LobbyModificationSetInvitesAllowedOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InvitesAllowed", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::LobbyModificationSetInvitesAllowedOptionsInternal(int32_t  m_ApiVersion, int32_t  m_InvitesAllowed) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_InvitesAllowed = m_InvitesAllowed;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::LobbyModificationSetInvitesAllowedOptionsInternal::LobbyModificationSetInvitesAllowedOptionsInternal()   {
}
