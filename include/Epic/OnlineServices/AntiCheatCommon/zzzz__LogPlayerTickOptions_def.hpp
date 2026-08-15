#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatCommon/LogPlayerTickOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__AntiCheatCommonPlayerMovementState_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Quat_def.hpp"
#include "Epic/OnlineServices/AntiCheatCommon/zzzz__Vec3f_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LogPlayerTickOptions)
namespace Epic::OnlineServices::AntiCheatCommon {
struct AntiCheatCommonPlayerMovementState;
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
struct LogPlayerTickOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions, "Epic.OnlineServices.AntiCheatCommon", "LogPlayerTickOptions");
// Dependencies Epic.OnlineServices.AntiCheatCommon.AntiCheatCommonPlayerMovementState, Epic.OnlineServices.AntiCheatCommon.Quat, Epic.OnlineServices.AntiCheatCommon.Vec3f, System.IntPtr, System.Nullable`1<T>
namespace Epic::OnlineServices::AntiCheatCommon {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatCommon.LogPlayerTickOptions
struct CORDL_TYPE LogPlayerTickOptions {
public:
// Declarations
 __declspec(property(get=get_IsPlayerViewZoomed, put=set_IsPlayerViewZoomed)) bool  IsPlayerViewZoomed;

 __declspec(property(get=get_PlayerHandle, put=set_PlayerHandle)) ::System::IntPtr  PlayerHandle;

 __declspec(property(get=get_PlayerHealth, put=set_PlayerHealth)) float_t  PlayerHealth;

 __declspec(property(get=get_PlayerMovementState, put=set_PlayerMovementState)) ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  PlayerMovementState;

 __declspec(property(get=get_PlayerPosition, put=set_PlayerPosition)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  PlayerPosition;

 __declspec(property(get=get_PlayerViewPosition, put=set_PlayerViewPosition)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  PlayerViewPosition;

 __declspec(property(get=get_PlayerViewRotation, put=set_PlayerViewRotation)) ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  PlayerViewRotation;

/// @brief Method get_IsPlayerViewZoomed, addr 0x18049ec50, size 0x10, virtual false, abstract: false, final false
inline bool get_IsPlayerViewZoomed() ;

/// @brief Method get_PlayerHandle, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::System::IntPtr get_PlayerHandle() ;

/// @brief Method get_PlayerHealth, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_PlayerHealth() ;

/// @brief Method get_PlayerMovementState, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState get_PlayerMovementState() ;

/// @brief Method get_PlayerPosition, addr 0x18038fea0, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> get_PlayerPosition() ;

/// @brief Method get_PlayerViewPosition, addr 0x18051e850, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f> get_PlayerViewPosition() ;

/// @brief Method get_PlayerViewRotation, addr 0x18051e8e0, size 0x20, virtual false, abstract: false, final false
inline ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat> get_PlayerViewRotation() ;

/// @brief Method set_IsPlayerViewZoomed, addr 0x18049ec70, size 0x10, virtual false, abstract: false, final false
inline void set_IsPlayerViewZoomed(bool  value) ;

/// @brief Method set_PlayerHandle, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerHandle(::System::IntPtr  value) ;

/// @brief Method set_PlayerHealth, addr 0x18046fb30, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerHealth(float_t  value) ;

/// @brief Method set_PlayerMovementState, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerMovementState(::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  value) ;

/// @brief Method set_PlayerPosition, addr 0x18051e9e0, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value) ;

/// @brief Method set_PlayerViewPosition, addr 0x18051e900, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerViewPosition(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  value) ;

/// @brief Method set_PlayerViewRotation, addr 0x18051e9f0, size 0x10, virtual false, abstract: false, final false
inline void set_PlayerViewRotation(::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogPlayerTickOptions() ;

// Ctor Parameters [CppParam { name: "_PlayerHandle_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "_PlayerPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: None }, CppParam { name: "_PlayerViewRotation_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>", modifiers: "", def_value: None }, CppParam { name: "_IsPlayerViewZoomed_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_PlayerHealth_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_PlayerMovementState_k__BackingField", ty: "::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState", modifiers: "", def_value: None }, CppParam { name: "_PlayerViewPosition_k__BackingField", ty: "::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>", modifiers: "", def_value: None }]
constexpr LogPlayerTickOptions(::System::IntPtr  _PlayerHandle_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _PlayerPosition_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _PlayerViewRotation_k__BackingField, bool  _IsPlayerViewZoomed_k__BackingField, float_t  _PlayerHealth_k__BackingField, ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  _PlayerMovementState_k__BackingField, ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _PlayerViewPosition_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9366};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <PlayerHandle>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  _PlayerHandle_k__BackingField;

/// @brief Field <PlayerPosition>k__BackingField, offset: 0x8, size: 0x10, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _PlayerPosition_k__BackingField;

/// @brief Field <PlayerViewRotation>k__BackingField, offset: 0x18, size: 0x14, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Quat>  _PlayerViewRotation_k__BackingField;

/// @brief Field <IsPlayerViewZoomed>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  _IsPlayerViewZoomed_k__BackingField;

/// @brief Field <PlayerHealth>k__BackingField, offset: 0x30, size: 0x4, def value: None
 float_t  _PlayerHealth_k__BackingField;

/// @brief Field <PlayerMovementState>k__BackingField, offset: 0x34, size: 0x4, def value: None
 ::Epic::OnlineServices::AntiCheatCommon::AntiCheatCommonPlayerMovementState  _PlayerMovementState_k__BackingField;

/// @brief Field <PlayerViewPosition>k__BackingField, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::Epic::OnlineServices::AntiCheatCommon::Vec3f>  _PlayerViewPosition_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions, _PlayerHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions, _PlayerPosition_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions, _PlayerViewRotation_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions, _IsPlayerViewZoomed_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions, _PlayerHealth_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions, _PlayerMovementState_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions, _PlayerViewPosition_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatCommon::LogPlayerTickOptions) == 0x48, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatCommon
