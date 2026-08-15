#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/QueryUserInfoByDisplayNameCallbackInfoInternal.hpp"
#include "Epic/OnlineServices/zzzz__Result_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoByDisplayNameCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoByDisplayNameCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::*)()>(&::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>)>(&::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804e00d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>"
constexpr  Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>* Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__UserInfo__QueryUserInfoByDisplayNameCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ResultCode", ty: "::Epic::OnlineServices::Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::QueryUserInfoByDisplayNameCallbackInfoInternal(::Epic::OnlineServices::Result  m_ResultCode, ::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_TargetUserId, ::System::IntPtr  m_DisplayName) noexcept  {
this->m_ResultCode = m_ResultCode;
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_TargetUserId = m_TargetUserId;
this->m_DisplayName = m_DisplayName;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfoInternal::QueryUserInfoByDisplayNameCallbackInfoInternal()   {
}
