#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerTakeDamageOptionsInternal.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageResult_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageSource_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerTakeDamageOptionsInternal_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerTakeDamageOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::*)(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>)>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x180525800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::*)()>(&::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180525790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>"
constexpr  Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>* Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogPlayerTakeDamageOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_VictimPlayerHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_VictimPlayerPosition", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_VictimPlayerViewRotation", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AttackerPlayerHandle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AttackerPlayerPosition", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AttackerPlayerViewRotation", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsHitscanAttack", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HasLineOfSight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsCriticalHit", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HitBoneId_DEPRECATED", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DamageTaken", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HealthRemaining", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DamageSource", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DamageType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DamageResult", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_PlayerUseWeaponData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TimeSincePlayerUseWeaponMs", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DamagePosition", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AttackerPlayerViewPosition", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::LogPlayerTakeDamageOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_VictimPlayerHandle, ::System::IntPtr  m_VictimPlayerPosition, ::System::IntPtr  m_VictimPlayerViewRotation, ::System::IntPtr  m_AttackerPlayerHandle, ::System::IntPtr  m_AttackerPlayerPosition, ::System::IntPtr  m_AttackerPlayerViewRotation, int32_t  m_IsHitscanAttack, int32_t  m_HasLineOfSight, int32_t  m_IsCriticalHit, uint32_t  m_HitBoneId_DEPRECATED, float_t  m_DamageTaken, float_t  m_HealthRemaining, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  m_DamageSource, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  m_DamageType, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  m_DamageResult, ::System::IntPtr  m_PlayerUseWeaponData, uint32_t  m_TimeSincePlayerUseWeaponMs, ::System::IntPtr  m_DamagePosition, ::System::IntPtr  m_AttackerPlayerViewPosition) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_VictimPlayerHandle = m_VictimPlayerHandle;
this->m_VictimPlayerPosition = m_VictimPlayerPosition;
this->m_VictimPlayerViewRotation = m_VictimPlayerViewRotation;
this->m_AttackerPlayerHandle = m_AttackerPlayerHandle;
this->m_AttackerPlayerPosition = m_AttackerPlayerPosition;
this->m_AttackerPlayerViewRotation = m_AttackerPlayerViewRotation;
this->m_IsHitscanAttack = m_IsHitscanAttack;
this->m_HasLineOfSight = m_HasLineOfSight;
this->m_IsCriticalHit = m_IsCriticalHit;
this->m_HitBoneId_DEPRECATED = m_HitBoneId_DEPRECATED;
this->m_DamageTaken = m_DamageTaken;
this->m_HealthRemaining = m_HealthRemaining;
this->m_DamageSource = m_DamageSource;
this->m_DamageType = m_DamageType;
this->m_DamageResult = m_DamageResult;
this->m_PlayerUseWeaponData = m_PlayerUseWeaponData;
this->m_TimeSincePlayerUseWeaponMs = m_TimeSincePlayerUseWeaponMs;
this->m_DamagePosition = m_DamagePosition;
this->m_AttackerPlayerViewPosition = m_AttackerPlayerViewPosition;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal::LogPlayerTakeDamageOptionsInternal()   {
}
