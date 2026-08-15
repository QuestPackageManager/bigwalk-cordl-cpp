#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/RegisterClientOptionsInternal.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientPlatform_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonClientType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__RegisterClientOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__RegisterClientOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>)>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18052b6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18052b670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>"
constexpr  Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>* Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatServer__RegisterClientOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::RegisterClientOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientPlatform", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId_DEPRECATED", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IpAddress", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Reserved01", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::RegisterClientOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ClientHandle, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientType  m_ClientType, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonClientPlatform  m_ClientPlatform, ::System::IntPtr  m_AccountId_DEPRECATED, ::System::IntPtr  m_IpAddress, ::System::IntPtr  m_UserId, int32_t  m_Reserved01) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_ClientHandle = m_ClientHandle;
this->m_ClientType = m_ClientType;
this->m_ClientPlatform = m_ClientPlatform;
this->m_AccountId_DEPRECATED = m_AccountId_DEPRECATED;
this->m_IpAddress = m_IpAddress;
this->m_UserId = m_UserId;
this->m_Reserved01 = m_Reserved01;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::RegisterClientOptionsInternal::RegisterClientOptionsInternal()   {
}
