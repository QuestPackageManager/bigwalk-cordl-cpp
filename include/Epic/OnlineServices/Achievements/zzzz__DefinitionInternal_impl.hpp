#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/DefinitionInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__DefinitionInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__Definition_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::DefinitionInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::DefinitionInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::Definition>)>(&::Epic::OnlineServices::Achievements::DefinitionInternal::Get)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18052e240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::DefinitionInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::Definition>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::DefinitionInternal::Get(::by_ref<::Epic::OnlineServices::Achievements::Definition>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::DefinitionInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::Definition>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::Definition>"
constexpr  Epic::OnlineServices::Achievements::DefinitionInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::Definition>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::Definition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::Definition>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::Definition>* Epic::OnlineServices::Achievements::DefinitionInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__Definition_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::Definition>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Description", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LockedDisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LockedDescription", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HiddenDescription", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CompletionDescription", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UnlockedIconId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LockedIconId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsHidden", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatThresholdsCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatThresholds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::DefinitionInternal::DefinitionInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AchievementId, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_Description, ::System::IntPtr  m_LockedDisplayName, ::System::IntPtr  m_LockedDescription, ::System::IntPtr  m_HiddenDescription, ::System::IntPtr  m_CompletionDescription, ::System::IntPtr  m_UnlockedIconId, ::System::IntPtr  m_LockedIconId, int32_t  m_IsHidden, int32_t  m_StatThresholdsCount, ::System::IntPtr  m_StatThresholds) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AchievementId = m_AchievementId;
this->m_DisplayName = m_DisplayName;
this->m_Description = m_Description;
this->m_LockedDisplayName = m_LockedDisplayName;
this->m_LockedDescription = m_LockedDescription;
this->m_HiddenDescription = m_HiddenDescription;
this->m_CompletionDescription = m_CompletionDescription;
this->m_UnlockedIconId = m_UnlockedIconId;
this->m_LockedIconId = m_LockedIconId;
this->m_IsHidden = m_IsHidden;
this->m_StatThresholdsCount = m_StatThresholdsCount;
this->m_StatThresholds = m_StatThresholds;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::DefinitionInternal::DefinitionInternal()   {
}
