#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/CreateSessionModificationOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CreateSessionModificationOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__CreateSessionModificationOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>)>(&::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1804d7d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::*)()>(&::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804d7c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>"
constexpr  Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>* Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Sessions__CreateSessionModificationOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Sessions::CreateSessionModificationOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_MaxPlayers", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PresenceEnabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SanctionsEnabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowedPlatformIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllowedPlatformIdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::CreateSessionModificationOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionName, ::System::IntPtr  m_BucketId, uint32_t  m_MaxPlayers, ::System::IntPtr  m_LocalUserId, int32_t  m_PresenceEnabled, ::System::IntPtr  m_SessionId, int32_t  m_SanctionsEnabled, ::System::IntPtr  m_AllowedPlatformIds, uint32_t  m_AllowedPlatformIdsCount) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SessionName = m_SessionName;
this->m_BucketId = m_BucketId;
this->m_MaxPlayers = m_MaxPlayers;
this->m_LocalUserId = m_LocalUserId;
this->m_PresenceEnabled = m_PresenceEnabled;
this->m_SessionId = m_SessionId;
this->m_SanctionsEnabled = m_SanctionsEnabled;
this->m_AllowedPlatformIds = m_AllowedPlatformIds;
this->m_AllowedPlatformIdsCount = m_AllowedPlatformIdsCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::CreateSessionModificationOptionsInternal::CreateSessionModificationOptionsInternal()   {
}
