#pragma once
// IWYU pragma private; include "Epic/OnlineServices/IntegratedPlatform/SetUserLoginStatusOptionsInternal.hpp"
#include "Epic/OnlineServices/zzzz__LoginStatus_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__SetUserLoginStatusOptionsInternal_def.hpp"
#include "Epic/OnlineServices/IntegratedPlatform/zzzz__SetUserLoginStatusOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::*)(::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>)>(&::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180515cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::*)()>(&::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::Set(::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>"
constexpr  Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>* Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__IntegratedPlatform__SetUserLoginStatusOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlatformType", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalPlatformUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentLoginStatus", ty: "::Epic::OnlineServices::LoginStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::SetUserLoginStatusOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_PlatformType, ::System::IntPtr  m_LocalPlatformUserId, ::Epic::OnlineServices::LoginStatus  m_CurrentLoginStatus) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_PlatformType = m_PlatformType;
this->m_LocalPlatformUserId = m_LocalPlatformUserId;
this->m_CurrentLoginStatus = m_CurrentLoginStatus;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::IntegratedPlatform::SetUserLoginStatusOptionsInternal::SetUserLoginStatusOptionsInternal()   {
}
