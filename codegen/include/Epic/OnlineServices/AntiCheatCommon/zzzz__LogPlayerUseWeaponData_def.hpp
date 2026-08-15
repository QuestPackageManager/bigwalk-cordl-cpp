#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerUseWeaponData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogPlayerUseWeaponData)
namespace Epic::OnlineServices::AntiCheatCommon {
struct Quat;
}
namespace Epic::OnlineServices::AntiCheatCommon {
struct Vec3f;
}
namespace Epic::OnlineServices {
class Utf8String;
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
struct LogPlayerUseWeaponData;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerUseWeaponData");
// Dependencies Epic.OnlineServices.AntiCheatCommon.Quat, Epic.OnlineServices.AntiCheatCommon.Vec3f, System.IntPtr, System.Nullable`1<T>
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerUseWeaponData
struct CORDL_TYPE LogPlayerUseWeaponData {
public:
// Declarations
 __declspec(property(get=get_IsMeleeAttack, put=set_IsMeleeAttack)) bool  IsMeleeAttack;

 __declspec(property(get=get_IsPlayerViewZoomed, put=set_IsPlayerViewZoomed)) bool  IsPlayerViewZoomed;

 __declspec(property(get=get_PlayerHandle, put=set_PlayerHandle)) ::System::IntPtr  PlayerHandle;

 __declspec(property(get=get_PlayerPosition, put=set_PlayerPosition)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  PlayerPosition;

 __declspec(property(get=get_PlayerViewRotation, put=set_PlayerViewRotation)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  PlayerViewRotation;

 __declspec(property(get=get_WeaponName, put=set_WeaponName)) ::Epic::OnlineServices::Utf8String*  WeaponName;

/// @brief Method get_IsMeleeAttack, addr 0x18049ec40, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMeleeAttack() ;

/// @brief Method get_IsPlayerViewZoomed, addr 0x18049ec50, size 0x10, virtual false, abstract: false, final false
inline bool get_IsPlayerViewZoomed() ;

/// @brief Method get_PlayerHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_PlayerHandle() ;

/// @brief Method get_PlayerPosition, addr 0x18038fea0, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> get_PlayerPosition() ;

/// @brief Method get_PlayerViewRotation, addr 0x18051e8e0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> get_PlayerViewRotation() ;

/// @brief Method get_WeaponName, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_WeaponName() ;

/// @brief Method set_IsMeleeAttack, addr 0x18049ec60, size 0x10, virtual false, abstract: false, final false
inline void set_IsMeleeAttack(bool  value) ;

/// @brief Method set_IsPlayerViewZoomed, addr 0x18049ec70, size 0x10, virtual false, abstract: false, final false
inline void set_IsPlayerViewZoomed(bool  value) ;

/// @brief Method set_PlayerHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerHandle(::System::IntPtr  value) ;

/// @brief Method set_PlayerPosition, addr 0x18051e9e0, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value) ;

/// @brief Method set_PlayerViewRotation, addr 0x18051e9f0, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerViewRotation(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value) ;

/// @brief Method set_WeaponName, addr 0x1802d9830, size 0x10, virtual false, abstract: false, final false
inline void set_WeaponName(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerUseWeaponData() ;

// Ctor Parameters [CppParam { name: "_PlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_PlayerPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: None }, CppParam { name: "_PlayerViewRotation_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>", modifiers: "", def_value: None }, CppParam { name: "_IsPlayerViewZoomed_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_IsMeleeAttack_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_WeaponName_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr LogPlayerUseWeaponData(::System::IntPtr  _PlayerHandle_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _PlayerPosition_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _PlayerViewRotation_k__BackingField, bool  _IsPlayerViewZoomed_k__BackingField, bool  _IsMeleeAttack_k__BackingField, ::Epic::OnlineServices::Utf8String*  _WeaponName_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <PlayerHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _PlayerHandle_k__BackingField;

/// @brief Field <PlayerPosition>k__BackingField, offset: 0x8, size: 0x10, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _PlayerPosition_k__BackingField;

/// @brief Field <PlayerViewRotation>k__BackingField, offset: 0x18, size: 0x14, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _PlayerViewRotation_k__BackingField;

/// @brief Field <IsPlayerViewZoomed>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  _IsPlayerViewZoomed_k__BackingField;

/// @brief Field <IsMeleeAttack>k__BackingField, offset: 0x2d, size: 0x1, def value: None
 bool  _IsMeleeAttack_k__BackingField;

/// @brief Field <WeaponName>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _WeaponName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData, _PlayerHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData, _PlayerPosition_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData, _PlayerViewRotation_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData, _IsPlayerViewZoomed_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData, _IsMeleeAttack_k__BackingField) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData, _WeaponName_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerUseWeaponData) == 0x38, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
