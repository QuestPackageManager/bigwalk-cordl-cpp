#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/PermissionsUpdateReceivedCallbackInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__PermissionsUpdateReceivedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__PermissionsUpdateReceivedCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::*)()>(&::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::*)(::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo>)>(&::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::Get)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18051cfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::Get(::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo>"
constexpr  Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo>* Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__KWS__PermissionsUpdateReceivedCallbackInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_KWSUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DateOfBirth", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsMinor", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ParentEmail", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::PermissionsUpdateReceivedCallbackInfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_KWSUserId, ::System::IntPtr  m_DateOfBirth, int32_t  m_IsMinor, ::System::IntPtr  m_ParentEmail) noexcept  {
this->m_ClientData = m_ClientData;
this->m_LocalUserId = m_LocalUserId;
this->m_KWSUserId = m_KWSUserId;
this->m_DateOfBirth = m_DateOfBirth;
this->m_IsMinor = m_IsMinor;
this->m_ParentEmail = m_ParentEmail;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::PermissionsUpdateReceivedCallbackInfoInternal::PermissionsUpdateReceivedCallbackInfoInternal()   {
}
