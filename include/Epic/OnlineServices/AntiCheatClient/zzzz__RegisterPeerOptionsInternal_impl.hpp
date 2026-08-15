#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/RegisterPeerOptionsInternal.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientPlatform_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__RegisterPeerOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__RegisterPeerOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>)>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805335c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180533580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>"
constexpr  Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>* Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatClient__RegisterPeerOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PeerHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientPlatform", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AuthenticationTimeout", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IpAddress", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PeerProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::RegisterPeerOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PeerHandle, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  m_ClientType, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  m_ClientPlatform, uint32_t  m_AuthenticationTimeout, ::System::IntPtr  m_AccountId_DEPRECATED, ::System::IntPtr  m_IpAddress, ::System::IntPtr  m_PeerProductUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_PeerHandle = m_PeerHandle;
this->m_ClientType = m_ClientType;
this->m_ClientPlatform = m_ClientPlatform;
this->m_AuthenticationTimeout = m_AuthenticationTimeout;
this->m_AccountId_DEPRECATED = m_AccountId_DEPRECATED;
this->m_IpAddress = m_IpAddress;
this->m_PeerProductUserId = m_PeerProductUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::RegisterPeerOptionsInternal::RegisterPeerOptionsInternal()   {
}
