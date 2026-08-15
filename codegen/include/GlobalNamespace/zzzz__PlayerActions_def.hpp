#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerActions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerActions)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class PlayerPose;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerActions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerActions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerActions*, "", "PlayerActions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerActions
class CORDL_TYPE PlayerActions : public ::System::Object {
public:
// Declarations
/// @brief Field heldActionNumber, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_heldActionNumber, put=__cordl_internal_set_heldActionNumber)) int32_t  heldActionNumber;

/// @brief Field heldSwitchActionNumber, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_heldSwitchActionNumber, put=__cordl_internal_set_heldSwitchActionNumber)) int32_t  heldSwitchActionNumber;

/// @brief Field logVerbose, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field poseActionNumber, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_poseActionNumber, put=__cordl_internal_set_poseActionNumber)) int32_t  poseActionNumber;

/// @brief Field predicitvePoses, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_predicitvePoses, put=__cordl_internal_set_predicitvePoses)) bool  predicitvePoses;

/// @brief Field predictiveDrop, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_predictiveDrop, put=__cordl_internal_set_predictiveDrop)) bool  predictiveDrop;

/// @brief Field predictivePickup, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_predictivePickup, put=__cordl_internal_set_predictivePickup)) bool  predictivePickup;

/// @brief Field switchActionNumber, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_switchActionNumber, put=__cordl_internal_set_switchActionNumber)) int32_t  switchActionNumber;

/// @brief Method ActionDropPlayer, addr 0x18045ab00, size 0x30, virtual false, abstract: false, final false
inline void ActionDropPlayer() ;

/// @brief Method ActionDropPropOrPlayer, addr 0x18045ab30, size 0x320, virtual false, abstract: false, final false
inline void ActionDropPropOrPlayer() ;

/// @brief Method ActionDudUseHeld, addr 0x18045ae50, size 0x60, virtual false, abstract: false, final false
inline void ActionDudUseHeld() ;

/// @brief Method ActionEnterPose, addr 0x18045aeb0, size 0xb0, virtual false, abstract: false, final false
inline void ActionEnterPose(::GlobalNamespace::PlayerPose*  pose) ;

/// @brief Method ActionExitPose, addr 0x18045af60, size 0x80, virtual false, abstract: false, final false
inline void ActionExitPose() ;

/// @brief Method ActionPickUpPlayer, addr 0x18045afe0, size 0x30, virtual false, abstract: false, final false
inline void ActionPickUpPlayer(::GlobalNamespace::PlayerCharacter*  pickedUpCharacter) ;

/// @brief Method ActionPickUpProp, addr 0x18045b010, size 0x130, virtual false, abstract: false, final false
inline void ActionPickUpProp(::GlobalNamespace::Prop*  prop, ::UnityEngine::Vector3  casterPosition) ;

/// @brief Method ActionPlaceHeldPlayerInPose, addr 0x18045b140, size 0x50, virtual false, abstract: false, final false
inline void ActionPlaceHeldPlayerInPose(::GlobalNamespace::PlayerPose*  pose) ;

/// @brief Method ActionPlaceInHome, addr 0x18045b190, size 0xa0, virtual false, abstract: false, final false
inline void ActionPlaceInHome(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::PropHome*  propHome) ;

/// @brief Method ActionReleaseWorldSwitch, addr 0x18045b230, size 0x80, virtual false, abstract: false, final false
inline void ActionReleaseWorldSwitch(::GlobalNamespace::PeckSwitch*  peckSwitch, ::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method ActionUseHeldAsKey, addr 0x18045b2b0, size 0xf0, virtual false, abstract: false, final false
inline void ActionUseHeldAsKey() ;

/// @brief Method ActionUseHeldSwitch, addr 0x18045b3a0, size 0x190, virtual false, abstract: false, final false
inline void ActionUseHeldSwitch() ;

/// @brief Method ActionUseHeldUpSwitch, addr 0x18045b530, size 0x190, virtual false, abstract: false, final false
inline void ActionUseHeldUpSwitch() ;

/// @brief Method ActionUseWorldSwitch, addr 0x18045b6c0, size 0xe0, virtual false, abstract: false, final false
inline void ActionUseWorldSwitch(::GlobalNamespace::PeckContext  peckContext, ::GlobalNamespace::PeckSwitch*  peckSwitch) ;

/// @brief Method Initialize, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerActions* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_heldActionNumber() const;

constexpr int32_t& __cordl_internal_get_heldActionNumber() ;

constexpr int32_t const& __cordl_internal_get_heldSwitchActionNumber() const;

constexpr int32_t& __cordl_internal_get_heldSwitchActionNumber() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr int32_t const& __cordl_internal_get_poseActionNumber() const;

constexpr int32_t& __cordl_internal_get_poseActionNumber() ;

constexpr bool const& __cordl_internal_get_predicitvePoses() const;

constexpr bool& __cordl_internal_get_predicitvePoses() ;

constexpr bool const& __cordl_internal_get_predictiveDrop() const;

constexpr bool& __cordl_internal_get_predictiveDrop() ;

constexpr bool const& __cordl_internal_get_predictivePickup() const;

constexpr bool& __cordl_internal_get_predictivePickup() ;

constexpr int32_t const& __cordl_internal_get_switchActionNumber() const;

constexpr int32_t& __cordl_internal_get_switchActionNumber() ;

constexpr void __cordl_internal_set_heldActionNumber(int32_t  value) ;

constexpr void __cordl_internal_set_heldSwitchActionNumber(int32_t  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_poseActionNumber(int32_t  value) ;

constexpr void __cordl_internal_set_predicitvePoses(bool  value) ;

constexpr void __cordl_internal_set_predictiveDrop(bool  value) ;

constexpr void __cordl_internal_set_predictivePickup(bool  value) ;

constexpr void __cordl_internal_set_switchActionNumber(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerActions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerActions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerActions(PlayerActions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerActions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerActions(PlayerActions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5437};

/// @brief Field predictivePickup, offset: 0x10, size: 0x1, def value: None
 bool  ___predictivePickup;

/// @brief Field predictiveDrop, offset: 0x11, size: 0x1, def value: None
 bool  ___predictiveDrop;

/// @brief Field predicitvePoses, offset: 0x12, size: 0x1, def value: None
 bool  ___predicitvePoses;

/// @brief Field logVerbose, offset: 0x13, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field playerCharacter, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field heldActionNumber, offset: 0x20, size: 0x4, def value: None
 int32_t  ___heldActionNumber;

/// @brief Field poseActionNumber, offset: 0x24, size: 0x4, def value: None
 int32_t  ___poseActionNumber;

/// @brief Field switchActionNumber, offset: 0x28, size: 0x4, def value: None
 int32_t  ___switchActionNumber;

/// @brief Field heldSwitchActionNumber, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___heldSwitchActionNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerActions, ___predictivePickup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActions, ___predictiveDrop) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActions, ___predicitvePoses) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActions, ___logVerbose) == 0x13, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActions, ___playerCharacter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActions, ___heldActionNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActions, ___poseActionNumber) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActions, ___switchActionNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerActions, ___heldSwitchActionNumber) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerActions) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
