#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CopyLobbyDetailsHandleByInviteIdOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CopyLobbyDetailsHandleByInviteIdOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Lobby/zzzz__CopyLobbyDetailsHandleByInviteIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>)>(&::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804f0f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::*)()>(&::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804e6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>"
constexpr  Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>* Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Lobby__CopyLobbyDetailsHandleByInviteIdOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_InviteId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::CopyLobbyDetailsHandleByInviteIdOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_InviteId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_InviteId = m_InviteId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptionsInternal::CopyLobbyDetailsHandleByInviteIdOptionsInternal()   {
}
