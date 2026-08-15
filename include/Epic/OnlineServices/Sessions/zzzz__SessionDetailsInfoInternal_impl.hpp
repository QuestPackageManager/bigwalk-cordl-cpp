#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionDetailsInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsInfoInternal_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionDetailsInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsInfo>)>(&::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal::Get)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x1804f2080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::SessionDetailsInfoInternal::Get(::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Sessions::SessionDetailsInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>"
constexpr  Epic::OnlineServices::Sessions::SessionDetailsInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>* Epic::OnlineServices::Sessions::SessionDetailsInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Sessions__SessionDetailsInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Sessions::SessionDetailsInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SessionId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HostAddress", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NumOpenPublicConnections", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Settings", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OwnerUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_OwnerServerClientId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal::SessionDetailsInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_SessionId, ::System::IntPtr  m_HostAddress, uint32_t  m_NumOpenPublicConnections, ::System::IntPtr  m_Settings, ::System::IntPtr  m_OwnerUserId, ::System::IntPtr  m_OwnerServerClientId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_SessionId = m_SessionId;
this->m_HostAddress = m_HostAddress;
this->m_NumOpenPublicConnections = m_NumOpenPublicConnections;
this->m_Settings = m_Settings;
this->m_OwnerUserId = m_OwnerUserId;
this->m_OwnerServerClientId = m_OwnerServerClientId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionDetailsInfoInternal::SessionDetailsInfoInternal()   {
}
