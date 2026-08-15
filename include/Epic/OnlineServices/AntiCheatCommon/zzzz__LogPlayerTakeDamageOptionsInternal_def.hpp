#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerTakeDamageOptionsInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageResult_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageSource_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogPlayerTakeDamageOptionsInternal)
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerTakeDamageOptions;
}
namespace Epic::OnlineServices {
template<typename T>
class ISettable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerTakeDamageOptionsInternal;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerTakeDamageOptionsInternal");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerTakeDamageResult, Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerTakeDamageSource, Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerTakeDamageType, System.IntPtr
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerTakeDamageOptionsInternal
struct CORDL_TYPE LogPlayerTakeDamageOptionsInternal {
public:
// Declarations
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>"
constexpr operator  ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x180525790, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Set, addr 0x180525800, size 0x570, virtual true, abstract: false, final true
inline void Set(::by_ref<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>  other) ;

/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions>* i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__AntiCheatCommon__LogPlayerTakeDamageOptions_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerTakeDamageOptionsInternal() ;

// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_VictimPlayerHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_VictimPlayerPosition", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_VictimPlayerViewRotation", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AttackerPlayerHandle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AttackerPlayerPosition", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AttackerPlayerViewRotation", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_IsHitscanAttack", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_HasLineOfSight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_IsCriticalHit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_HitBoneId_DEPRECATED", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_DamageTaken", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_HealthRemaining", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_DamageSource", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource", modifiers: "", def_value: None }, CppParam { name: "m_DamageType", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType", modifiers: "", def_value: None }, CppParam { name: "m_DamageResult", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult", modifiers: "", def_value: None }, CppParam { name: "m_PlayerUseWeaponData", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_TimeSincePlayerUseWeaponMs", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_DamagePosition", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_AttackerPlayerViewPosition", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr LogPlayerTakeDamageOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_VictimPlayerHandle, ::System::IntPtr  m_VictimPlayerPosition, ::System::IntPtr  m_VictimPlayerViewRotation, ::System::IntPtr  m_AttackerPlayerHandle, ::System::IntPtr  m_AttackerPlayerPosition, ::System::IntPtr  m_AttackerPlayerViewRotation, int32_t  m_IsHitscanAttack, int32_t  m_HasLineOfSight, int32_t  m_IsCriticalHit, uint32_t  m_HitBoneId_DEPRECATED, float_t  m_DamageTaken, float_t  m_HealthRemaining, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  m_DamageSource, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  m_DamageType, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  m_DamageResult, ::System::IntPtr  m_PlayerUseWeaponData, uint32_t  m_TimeSincePlayerUseWeaponMs, ::System::IntPtr  m_DamagePosition, ::System::IntPtr  m_AttackerPlayerViewPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9365};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field m_ApiVersion, offset: 0x0, size: 0x4, def value: None
 int32_t  m_ApiVersion;

/// @brief Field m_VictimPlayerHandle, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  m_VictimPlayerHandle;

/// @brief Field m_VictimPlayerPosition, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  m_VictimPlayerPosition;

/// @brief Field m_VictimPlayerViewRotation, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  m_VictimPlayerViewRotation;

/// @brief Field m_AttackerPlayerHandle, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  m_AttackerPlayerHandle;

/// @brief Field m_AttackerPlayerPosition, offset: 0x28, size: 0x8, def value: None
 ::System::IntPtr  m_AttackerPlayerPosition;

/// @brief Field m_AttackerPlayerViewRotation, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  m_AttackerPlayerViewRotation;

/// @brief Field m_IsHitscanAttack, offset: 0x38, size: 0x4, def value: None
 int32_t  m_IsHitscanAttack;

/// @brief Field m_HasLineOfSight, offset: 0x3c, size: 0x4, def value: None
 int32_t  m_HasLineOfSight;

/// @brief Field m_IsCriticalHit, offset: 0x40, size: 0x4, def value: None
 int32_t  m_IsCriticalHit;

/// @brief Field m_HitBoneId_DEPRECATED, offset: 0x44, size: 0x4, def value: None
 uint32_t  m_HitBoneId_DEPRECATED;

/// @brief Field m_DamageTaken, offset: 0x48, size: 0x4, def value: None
 float_t  m_DamageTaken;

/// @brief Field m_HealthRemaining, offset: 0x4c, size: 0x4, def value: None
 float_t  m_HealthRemaining;

/// @brief Field m_DamageSource, offset: 0x50, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  m_DamageSource;

/// @brief Field m_DamageType, offset: 0x54, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  m_DamageType;

/// @brief Field m_DamageResult, offset: 0x58, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  m_DamageResult;

/// @brief Field m_PlayerUseWeaponData, offset: 0x60, size: 0x8, def value: None
 ::System::IntPtr  m_PlayerUseWeaponData;

/// @brief Field m_TimeSincePlayerUseWeaponMs, offset: 0x68, size: 0x4, def value: None
 uint32_t  m_TimeSincePlayerUseWeaponMs;

/// @brief Field m_DamagePosition, offset: 0x70, size: 0x8, def value: None
 ::System::IntPtr  m_DamagePosition;

/// @brief Field m_AttackerPlayerViewPosition, offset: 0x78, size: 0x8, def value: None
 ::System::IntPtr  m_AttackerPlayerViewPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_ApiVersion) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_VictimPlayerHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_VictimPlayerPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_VictimPlayerViewRotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_AttackerPlayerHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_AttackerPlayerPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_AttackerPlayerViewRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_IsHitscanAttack) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_HasLineOfSight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_IsCriticalHit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_HitBoneId_DEPRECATED) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_DamageTaken) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_HealthRemaining) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_DamageSource) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_DamageType) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_DamageResult) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_PlayerUseWeaponData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_TimeSincePlayerUseWeaponMs) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_DamagePosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal, m_AttackerPlayerViewPosition) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptionsInternal) == 0x80, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
