#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/UserPreLogoutCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__UserPreLogoutCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__UserPreLogoutCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::*)()>(&::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>)>(&::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18051e340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>"
constexpr  Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>* Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__IntegratedPlatform__UserPreLogoutCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlatformType", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalPlatformUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AccountId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::UserPreLogoutCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_PlatformType, ::System::IntPtr  m_LocalPlatformUserId, ::System::IntPtr  m_AccountId, ::System::IntPtr  m_ProductUserId) noexcept  {
this->m_ClientData = m_ClientData;
this->m_PlatformType = m_PlatformType;
this->m_LocalPlatformUserId = m_LocalPlatformUserId;
this->m_AccountId = m_AccountId;
this->m_ProductUserId = m_ProductUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::UserPreLogoutCallbackInfoInternal::UserPreLogoutCallbackInfoInternal()   {
}
