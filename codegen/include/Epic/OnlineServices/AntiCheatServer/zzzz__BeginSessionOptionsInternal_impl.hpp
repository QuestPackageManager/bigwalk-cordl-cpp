#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatServer/BeginSessionOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__BeginSessionOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatServer/zzzz__BeginSessionOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>)>(&::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180521e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e7630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>"
constexpr  Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>* Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatServer__BeginSessionOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatServer::BeginSessionOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RegisterTimeoutSeconds", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ServerName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EnableGameplayData", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::BeginSessionOptionsInternal(int32_t  m_ApiVersion, uint32_t  m_RegisterTimeoutSeconds, ::System::IntPtr  m_ServerName, int32_t  m_EnableGameplayData, ::System::IntPtr  m_LocalUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_RegisterTimeoutSeconds = m_RegisterTimeoutSeconds;
this->m_ServerName = m_ServerName;
this->m_EnableGameplayData = m_EnableGameplayData;
this->m_LocalUserId = m_LocalUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatServer::BeginSessionOptionsInternal::BeginSessionOptionsInternal()   {
}
