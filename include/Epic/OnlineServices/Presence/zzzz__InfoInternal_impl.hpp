#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/InfoInternal.hpp"
#include "Epic/OnlineServices/Presence/zzzz__Status_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Presence/zzzz__InfoInternal_def.hpp"
#include "Epic/OnlineServices/Presence/zzzz__Info_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Presence::InfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Presence::InfoInternal::*)(::by_ref<::Epic::OnlineServices::Presence::Info>)>(&::Epic::OnlineServices::Presence::InfoInternal::Get)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1804f79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::InfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::Info>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Presence::InfoInternal::Get(::by_ref<::Epic::OnlineServices::Presence::Info>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Presence::InfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Presence::Info>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::Info>"
constexpr  Epic::OnlineServices::Presence::InfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::Info>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::Info>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::Info>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::Info>* Epic::OnlineServices::Presence::InfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Presence__Info_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Presence::Info>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Status", ty: "::Epic::OnlineServices::Presence::Status", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductVersion", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Platform", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RichText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RecordsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Records", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ProductName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IntegratedPlatform", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::InfoInternal::InfoInternal(int32_t  m_ApiVersion, ::Epic::OnlineServices::Presence::Status  m_Status, ::System::IntPtr  m_UserId, ::System::IntPtr  m_ProductId, ::System::IntPtr  m_ProductVersion, ::System::IntPtr  m_Platform, ::System::IntPtr  m_RichText, int32_t  m_RecordsCount, ::System::IntPtr  m_Records, ::System::IntPtr  m_ProductName, ::System::IntPtr  m_IntegratedPlatform) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Status = m_Status;
this->m_UserId = m_UserId;
this->m_ProductId = m_ProductId;
this->m_ProductVersion = m_ProductVersion;
this->m_Platform = m_Platform;
this->m_RichText = m_RichText;
this->m_RecordsCount = m_RecordsCount;
this->m_Records = m_Records;
this->m_ProductName = m_ProductName;
this->m_IntegratedPlatform = m_IntegratedPlatform;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::InfoInternal::InfoInternal()   {
}
