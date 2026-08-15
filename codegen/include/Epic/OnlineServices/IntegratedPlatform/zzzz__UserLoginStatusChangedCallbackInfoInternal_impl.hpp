#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/UserLoginStatusChangedCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__LoginStatus_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__UserLoginStatusChangedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__UserLoginStatusChangedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>)>(&::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18051e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>"
constexpr  Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>* Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__IntegratedPlatform__UserLoginStatusChangedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlatformType", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalPlatformUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PreviousLoginStatus", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentLoginStatus", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::UserLoginStatusChangedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_PlatformType, ::System::IntPtr  m_LocalPlatformUserId, ::System::IntPtr  m_AccountId, ::System::IntPtr  m_ProductUserId, ::Epic::OnlineServices::LoginStatus  m_PreviousLoginStatus, ::Epic::OnlineServices::LoginStatus  m_CurrentLoginStatus) noexcept  {
this->m_ClientData = m_ClientData;
this->m_PlatformType = m_PlatformType;
this->m_LocalPlatformUserId = m_LocalPlatformUserId;
this->m_AccountId = m_AccountId;
this->m_ProductUserId = m_ProductUserId;
this->m_PreviousLoginStatus = m_PreviousLoginStatus;
this->m_CurrentLoginStatus = m_CurrentLoginStatus;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::UserLoginStatusChangedCallbackInfoInternal::UserLoginStatusChangedCallbackInfoInternal()   {
}
