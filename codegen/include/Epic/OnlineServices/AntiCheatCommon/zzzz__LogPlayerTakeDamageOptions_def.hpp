#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerTakeDamageOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageResult_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageSource_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerTakeDamageType_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__LogPlayerUseWeaponData_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LogPlayerTakeDamageOptions)
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonPlayerTakeDamageResult;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonPlayerTakeDamageSource;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonPlayerTakeDamageType;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerUseWeaponData;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct Quat;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct Vec3f;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatCommon {
struct LogPlayerTakeDamageOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerTakeDamageOptions");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerTakeDamageResult, Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerTakeDamageSource, Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerTakeDamageType, Epic.OnlineServices.AntiCheatCommon.LogPlayerUseWeaponData, Epic.OnlineServices.AntiCheatCommon.Quat, Epic.OnlineServices.AntiCheatCommon.Vec3f, System.IntPtr, System.Nullable`1<T>
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerTakeDamageOptions
struct CORDL_TYPE LogPlayerTakeDamageOptions {
public:
// Declarations
 __declspec(property(get=get_AttackerPlayerHandle, put=set_AttackerPlayerHandle)) ::System::IntPtr  AttackerPlayerHandle;

 __declspec(property(get=get_AttackerPlayerPosition, put=set_AttackerPlayerPosition)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  AttackerPlayerPosition;

 __declspec(property(get=get_AttackerPlayerViewPosition, put=set_AttackerPlayerViewPosition)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  AttackerPlayerViewPosition;

 __declspec(property(get=get_AttackerPlayerViewRotation, put=set_AttackerPlayerViewRotation)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  AttackerPlayerViewRotation;

 __declspec(property(get=get_DamagePosition, put=set_DamagePosition)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  DamagePosition;

 __declspec(property(get=get_DamageResult, put=set_DamageResult)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  DamageResult;

 __declspec(property(get=get_DamageSource, put=set_DamageSource)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  DamageSource;

 __declspec(property(get=get_DamageTaken, put=set_DamageTaken)) float_t  DamageTaken;

 __declspec(property(get=get_DamageType, put=set_DamageType)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  DamageType;

 __declspec(property(get=get_HasLineOfSight, put=set_HasLineOfSight)) bool  HasLineOfSight;

 __declspec(property(get=get_HealthRemaining, put=set_HealthRemaining)) float_t  HealthRemaining;

 __declspec(property(get=get_HitBoneId_DEPRECATED, put=set_HitBoneId_DEPRECATED)) uint32_t  HitBoneId_DEPRECATED;

 __declspec(property(get=get_IsCriticalHit, put=set_IsCriticalHit)) bool  IsCriticalHit;

 __declspec(property(get=get_IsHitscanAttack, put=set_IsHitscanAttack)) bool  IsHitscanAttack;

 __declspec(property(get=get_PlayerUseWeaponData, put=set_PlayerUseWeaponData)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  PlayerUseWeaponData;

 __declspec(property(get=get_TimeSincePlayerUseWeaponMs, put=set_TimeSincePlayerUseWeaponMs)) uint32_t  TimeSincePlayerUseWeaponMs;

 __declspec(property(get=get_VictimPlayerHandle, put=set_VictimPlayerHandle)) ::System::IntPtr  VictimPlayerHandle;

 __declspec(property(get=get_VictimPlayerPosition, put=set_VictimPlayerPosition)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  VictimPlayerPosition;

 __declspec(property(get=get_VictimPlayerViewRotation, put=set_VictimPlayerViewRotation)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  VictimPlayerViewRotation;

/// @brief Method get_AttackerPlayerHandle, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_AttackerPlayerHandle() ;

/// @brief Method get_AttackerPlayerPosition, addr 0x18051e850, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> get_AttackerPlayerPosition() ;

/// @brief Method get_AttackerPlayerViewPosition, addr 0x18051e860, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> get_AttackerPlayerViewPosition() ;

/// @brief Method get_AttackerPlayerViewRotation, addr 0x18051e870, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> get_AttackerPlayerViewRotation() ;

/// @brief Method get_DamagePosition, addr 0x18051e890, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> get_DamagePosition() ;

/// @brief Method get_DamageResult, addr 0x18051e7a0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult get_DamageResult() ;

/// @brief Method get_DamageSource, addr 0x1803fa750, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource get_DamageSource() ;

/// @brief Method get_DamageTaken, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DamageTaken() ;

/// @brief Method get_DamageType, addr 0x1803fa740, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType get_DamageType() ;

/// @brief Method get_HasLineOfSight, addr 0x1802e09e0, size 0x10, virtual false, abstract: false, final false
inline bool get_HasLineOfSight() ;

/// @brief Method get_HealthRemaining, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_HealthRemaining() ;

/// @brief Method get_HitBoneId_DEPRECATED, addr 0x18039fc60, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_HitBoneId_DEPRECATED() ;

/// @brief Method get_IsCriticalHit, addr 0x18051e8a0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCriticalHit() ;

/// @brief Method get_IsHitscanAttack, addr 0x1802e09d0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsHitscanAttack() ;

/// @brief Method get_PlayerUseWeaponData, addr 0x18051e8b0, size 0x30, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData> get_PlayerUseWeaponData() ;

/// @brief Method get_TimeSincePlayerUseWeaponMs, addr 0x1803b2c60, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_TimeSincePlayerUseWeaponMs() ;

/// @brief Method get_VictimPlayerHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_VictimPlayerHandle() ;

/// @brief Method get_VictimPlayerPosition, addr 0x18038fea0, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> get_VictimPlayerPosition() ;

/// @brief Method get_VictimPlayerViewRotation, addr 0x18051e8e0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> get_VictimPlayerViewRotation() ;

/// @brief Method set_AttackerPlayerHandle, addr 0x1803c8fa0, size 0x10, virtual false, abstract: false, final false
inline void set_AttackerPlayerHandle(::System::IntPtr  value) ;

/// @brief Method set_AttackerPlayerPosition, addr 0x18051e900, size 0x10, virtual false, abstract: false, final false
inline void set_AttackerPlayerPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value) ;

/// @brief Method set_AttackerPlayerViewPosition, addr 0x18051e910, size 0x10, virtual false, abstract: false, final false
inline void set_AttackerPlayerViewPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value) ;

/// @brief Method set_AttackerPlayerViewRotation, addr 0x18051e920, size 0x10, virtual false, abstract: false, final false
inline void set_AttackerPlayerViewRotation(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value) ;

/// @brief Method set_DamagePosition, addr 0x18051e930, size 0x10, virtual false, abstract: false, final false
inline void set_DamagePosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value) ;

/// @brief Method set_DamageResult, addr 0x18051e940, size 0x10, virtual false, abstract: false, final false
inline void set_DamageResult(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  value) ;

/// @brief Method set_DamageSource, addr 0x1804a5a80, size 0x10, virtual false, abstract: false, final false
inline void set_DamageSource(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  value) ;

/// @brief Method set_DamageTaken, addr 0x18046fb10, size 0x10, virtual false, abstract: false, final false
inline void set_DamageTaken(float_t  value) ;

/// @brief Method set_DamageType, addr 0x18051e950, size 0x10, virtual false, abstract: false, final false
inline void set_DamageType(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  value) ;

/// @brief Method set_HasLineOfSight, addr 0x18051e960, size 0x10, virtual false, abstract: false, final false
inline void set_HasLineOfSight(bool  value) ;

/// @brief Method set_HealthRemaining, addr 0x180474c80, size 0x10, virtual false, abstract: false, final false
inline void set_HealthRemaining(float_t  value) ;

/// @brief Method set_HitBoneId_DEPRECATED, addr 0x1804f67b0, size 0x10, virtual false, abstract: false, final false
inline void set_HitBoneId_DEPRECATED(uint32_t  value) ;

/// @brief Method set_IsCriticalHit, addr 0x18051e970, size 0x10, virtual false, abstract: false, final false
inline void set_IsCriticalHit(bool  value) ;

/// @brief Method set_IsHitscanAttack, addr 0x18051e980, size 0x10, virtual false, abstract: false, final false
inline void set_IsHitscanAttack(bool  value) ;

/// @brief Method set_PlayerUseWeaponData, addr 0x18051e990, size 0x40, virtual false, abstract: false, final false
inline void set_PlayerUseWeaponData(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  value) ;

/// @brief Method set_TimeSincePlayerUseWeaponMs, addr 0x18051e9d0, size 0x10, virtual false, abstract: false, final false
inline void set_TimeSincePlayerUseWeaponMs(uint32_t  value) ;

/// @brief Method set_VictimPlayerHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_VictimPlayerHandle(::System::IntPtr  value) ;

/// @brief Method set_VictimPlayerPosition, addr 0x18051e9e0, size 0x10, virtual false, abstract: false, final false
inline void set_VictimPlayerPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value) ;

/// @brief Method set_VictimPlayerViewRotation, addr 0x18051e9f0, size 0x10, virtual false, abstract: false, final false
inline void set_VictimPlayerViewRotation(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerTakeDamageOptions() ;

// Ctor Parameters [CppParam { name: "_VictimPlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_VictimPlayerPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: None }, CppParam { name: "_VictimPlayerViewRotation_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>", modifiers: "", def_value: None }, CppParam { name: "_AttackerPlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_AttackerPlayerPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: None }, CppParam { name: "_AttackerPlayerViewRotation_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>", modifiers: "", def_value: None }, CppParam { name: "_IsHitscanAttack_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_HasLineOfSight_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_IsCriticalHit_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_HitBoneId_DEPRECATED_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_DamageTaken_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_HealthRemaining_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_DamageSource_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource", modifiers: "", def_value: None }, CppParam { name: "_DamageType_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType", modifiers: "", def_value: None }, CppParam { name: "_DamageResult_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult", modifiers: "", def_value: None }, CppParam { name: "_PlayerUseWeaponData_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>", modifiers: "", def_value: None }, CppParam { name: "_TimeSincePlayerUseWeaponMs_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_DamagePosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: None }, CppParam { name: "_AttackerPlayerViewPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: None }]
constexpr LogPlayerTakeDamageOptions(::System::IntPtr  _VictimPlayerHandle_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _VictimPlayerPosition_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _VictimPlayerViewRotation_k__BackingField, ::System::IntPtr  _AttackerPlayerHandle_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _AttackerPlayerPosition_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _AttackerPlayerViewRotation_k__BackingField, bool  _IsHitscanAttack_k__BackingField, bool  _HasLineOfSight_k__BackingField, bool  _IsCriticalHit_k__BackingField, uint32_t  _HitBoneId_DEPRECATED_k__BackingField, float_t  _DamageTaken_k__BackingField, float_t  _HealthRemaining_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  _DamageSource_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  _DamageType_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  _DamageResult_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  _PlayerUseWeaponData_k__BackingField, uint32_t  _TimeSincePlayerUseWeaponMs_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _DamagePosition_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _AttackerPlayerViewPosition_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9364};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe0};

/// @brief Field <VictimPlayerHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _VictimPlayerHandle_k__BackingField;

/// @brief Field <VictimPlayerPosition>k__BackingField, offset: 0x8, size: 0x10, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _VictimPlayerPosition_k__BackingField;

/// @brief Field <VictimPlayerViewRotation>k__BackingField, offset: 0x18, size: 0x14, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _VictimPlayerViewRotation_k__BackingField;

/// @brief Field <AttackerPlayerHandle>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::IntPtr  _AttackerPlayerHandle_k__BackingField;

/// @brief Field <AttackerPlayerPosition>k__BackingField, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _AttackerPlayerPosition_k__BackingField;

/// @brief Field <AttackerPlayerViewRotation>k__BackingField, offset: 0x48, size: 0x14, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _AttackerPlayerViewRotation_k__BackingField;

/// @brief Field <IsHitscanAttack>k__BackingField, offset: 0x5c, size: 0x1, def value: None
 bool  _IsHitscanAttack_k__BackingField;

/// @brief Field <HasLineOfSight>k__BackingField, offset: 0x5d, size: 0x1, def value: None
 bool  _HasLineOfSight_k__BackingField;

/// @brief Field <IsCriticalHit>k__BackingField, offset: 0x5e, size: 0x1, def value: None
 bool  _IsCriticalHit_k__BackingField;

/// @brief Field <HitBoneId_DEPRECATED>k__BackingField, offset: 0x60, size: 0x4, def value: None
 uint32_t  _HitBoneId_DEPRECATED_k__BackingField;

/// @brief Field <DamageTaken>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  _DamageTaken_k__BackingField;

/// @brief Field <HealthRemaining>k__BackingField, offset: 0x68, size: 0x4, def value: None
 float_t  _HealthRemaining_k__BackingField;

/// @brief Field <DamageSource>k__BackingField, offset: 0x6c, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageSource  _DamageSource_k__BackingField;

/// @brief Field <DamageType>k__BackingField, offset: 0x70, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageType  _DamageType_k__BackingField;

/// @brief Field <DamageResult>k__BackingField, offset: 0x74, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerTakeDamageResult  _DamageResult_k__BackingField;

/// @brief Field <PlayerUseWeaponData>k__BackingField, offset: 0x78, size: 0x40, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData>  _PlayerUseWeaponData_k__BackingField;

/// @brief Field <TimeSincePlayerUseWeaponMs>k__BackingField, offset: 0xb8, size: 0x4, def value: None
 uint32_t  _TimeSincePlayerUseWeaponMs_k__BackingField;

/// @brief Field <DamagePosition>k__BackingField, offset: 0xbc, size: 0x10, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _DamagePosition_k__BackingField;

/// @brief Field <AttackerPlayerViewPosition>k__BackingField, offset: 0xcc, size: 0x10, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _AttackerPlayerViewPosition_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _VictimPlayerHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _VictimPlayerPosition_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _VictimPlayerViewRotation_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _AttackerPlayerHandle_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _AttackerPlayerPosition_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _AttackerPlayerViewRotation_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _IsHitscanAttack_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _HasLineOfSight_k__BackingField) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _IsCriticalHit_k__BackingField) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _HitBoneId_DEPRECATED_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _DamageTaken_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _HealthRemaining_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _DamageSource_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _DamageType_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _DamageResult_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _PlayerUseWeaponData_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _TimeSincePlayerUseWeaponMs_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _DamagePosition_k__BackingField) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions, _AttackerPlayerViewPosition_k__BackingField) == 0xcc, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTakeDamageOptions) == 0xe0, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
