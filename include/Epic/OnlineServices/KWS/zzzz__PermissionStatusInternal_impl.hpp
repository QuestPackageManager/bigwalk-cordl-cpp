#pragma once
// IWYU pragma private; include "Epic/OnlineServices/KWS/PermissionStatusInternal.hpp"
#include "Epic/OnlineServices/KWS/zzzz__KWSPermissionStatus_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/KWS/zzzz__PermissionStatusInternal_def.hpp"
#include "Epic/OnlineServices/KWS/zzzz__PermissionStatus_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::KWS::PermissionStatusInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::KWS::PermissionStatusInternal::*)(::by_ref<::Epic::OnlineServices::KWS::PermissionStatus>)>(&::Epic::OnlineServices::KWS::PermissionStatusInternal::Get)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180517910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionStatusInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::PermissionStatus>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::KWS::PermissionStatusInternal::Get(::by_ref<::Epic::OnlineServices::KWS::PermissionStatus>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::KWS::PermissionStatusInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::KWS::PermissionStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionStatus>"
constexpr  Epic::OnlineServices::KWS::PermissionStatusInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionStatus>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionStatus>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionStatus>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionStatus>* Epic::OnlineServices::KWS::PermissionStatusInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__KWS__PermissionStatus_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::KWS::PermissionStatus>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Status", ty: "::Epic::OnlineServices::KWS::KWSPermissionStatus", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::KWS::PermissionStatusInternal::PermissionStatusInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Name, ::Epic::OnlineServices::KWS::KWSPermissionStatus  m_Status) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Name = m_Name;
this->m_Status = m_Status;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::KWS::PermissionStatusInternal::PermissionStatusInternal()   {
}
