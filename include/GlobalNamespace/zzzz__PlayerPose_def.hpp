#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerColliderState_def.hpp"
#include "GlobalNamespace/zzzz__PlayerEyeMood_def.hpp"
#include "GlobalNamespace/zzzz__PropGroup_def.hpp"
#include "GlobalNamespace/zzzz__SeaShell_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPose)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioScatterContainer;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
struct PlayerEyeMood;
}
namespace GlobalNamespace {
struct PlayerPose_LeftRightLimits;
}
namespace GlobalNamespace {
struct PlayerPose_LimitOverride;
}
namespace GlobalNamespace {
struct PlayerPose_TaggedPropLimits;
}
namespace GlobalNamespace {
class Prop;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
namespace LobbyNetworking {
class ITicketed;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerPose;
}
namespace GlobalNamespace {
struct PlayerPose_LeftRightLimits;
}
namespace GlobalNamespace {
struct PlayerPose_LimitOverride;
}
namespace GlobalNamespace {
struct PlayerPose_TaggedPropLimits;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerPose*);
MARK_VAL_T(::GlobalNamespace::PlayerPose_LeftRightLimits);
MARK_VAL_T(::GlobalNamespace::PlayerPose_LimitOverride);
MARK_VAL_T(::GlobalNamespace::PlayerPose_TaggedPropLimits);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerPose*, "", "PlayerPose");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerPose_LeftRightLimits, "", "PlayerPose/LeftRightLimits");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerPose_LimitOverride, "", "PlayerPose/LimitOverride");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerPose_TaggedPropLimits, "", "PlayerPose/TaggedPropLimits");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerPose/LimitOverride
struct CORDL_TYPE PlayerPose_LimitOverride {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPose_LimitOverride() ;

// Ctor Parameters [CppParam { name: "mask", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None }]
constexpr PlayerPose_LimitOverride(bool  mask, float_t  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5511};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field mask, offset: 0x0, size: 0x1, def value: None
 bool  mask;

/// @brief Field value, offset: 0x4, size: 0x4, def value: None
 float_t  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerPose_LimitOverride, mask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose_LimitOverride, value) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerPose_LimitOverride) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerPose::LimitOverride
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerPose/LeftRightLimits
struct CORDL_TYPE PlayerPose_LeftRightLimits {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPose_LeftRightLimits() ;

// Ctor Parameters [CppParam { name: "leftLimit", ty: "::GlobalNamespace::PlayerPose_LimitOverride", modifiers: "", def_value: None }, CppParam { name: "rightLimit", ty: "::GlobalNamespace::PlayerPose_LimitOverride", modifiers: "", def_value: None }]
constexpr PlayerPose_LeftRightLimits(::GlobalNamespace::PlayerPose_LimitOverride  leftLimit, ::GlobalNamespace::PlayerPose_LimitOverride  rightLimit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5512};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field leftLimit, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::PlayerPose_LimitOverride  leftLimit;

/// @brief Field rightLimit, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::PlayerPose_LimitOverride  rightLimit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerPose_LeftRightLimits, leftLimit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose_LeftRightLimits, rightLimit) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerPose_LeftRightLimits) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerPose::LeftRightLimits, PropGroup
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerPose/TaggedPropLimits
struct CORDL_TYPE PlayerPose_TaggedPropLimits {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPose_TaggedPropLimits() ;

// Ctor Parameters [CppParam { name: "PropGroup", ty: "::GlobalNamespace::PropGroup", modifiers: "", def_value: None }, CppParam { name: "limits", ty: "::GlobalNamespace::PlayerPose_LeftRightLimits", modifiers: "", def_value: None }]
constexpr PlayerPose_TaggedPropLimits(::GlobalNamespace::PropGroup  PropGroup, ::GlobalNamespace::PlayerPose_LeftRightLimits  limits) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5513};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field PropGroup, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PropGroup  PropGroup;

/// @brief Field limits, offset: 0x4, size: 0x10, def value: None
 ::GlobalNamespace::PlayerPose_LeftRightLimits  limits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerPose_TaggedPropLimits, PropGroup) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose_TaggedPropLimits, limits) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerPose_TaggedPropLimits) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerColliderState, PlayerEyeMood, PlayerPose::LeftRightLimits, PlayerPose::TaggedPropLimits, SeaShell::ShellReference, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerPose
class CORDL_TYPE PlayerPose : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LeftRightLimits = ::GlobalNamespace::PlayerPose_LeftRightLimits;

using LimitOverride = ::GlobalNamespace::PlayerPose_LimitOverride;

using TaggedPropLimits = ::GlobalNamespace::PlayerPose_TaggedPropLimits;

/// @brief Field <ticket>k__BackingField, offset 0x174, size 0x2 
 __declspec(property(get=__cordl_internal_get__ticket_k__BackingField, put=__cordl_internal_set__ticket_k__BackingField)) uint16_t  _ticket_k__BackingField;

/// @brief Field allowKicking, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowKicking, put=__cordl_internal_set_allowKicking)) bool  allowKicking;

/// @brief Field allowSitting, offset 0x27, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowSitting, put=__cordl_internal_set_allowSitting)) bool  allowSitting;

/// @brief Field animatorPoseId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_animatorPoseId, put=__cordl_internal_set_animatorPoseId)) int32_t  animatorPoseId;

/// @brief Field audioIdentifier, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioIdentifier, put=__cordl_internal_set_audioIdentifier)) ::StringW  audioIdentifier;

/// @brief Field cameraOffset, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_cameraOffset, put=__cordl_internal_set_cameraOffset)) ::UnityEngine::Vector3  cameraOffset;

/// @brief Field cameraOffsetCrouching, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_cameraOffsetCrouching, put=__cordl_internal_set_cameraOffsetCrouching)) ::UnityEngine::Vector3  cameraOffsetCrouching;

/// @brief Field chosenPlayer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_chosenPlayer, put=__cordl_internal_set_chosenPlayer)) ::UnityW<::GlobalNamespace::PlayerCharacter>  chosenPlayer;

/// @brief Field colliderState, offset 0xbc, size 0x1c 
 __declspec(property(get=__cordl_internal_get_colliderState, put=__cordl_internal_set_colliderState)) ::GlobalNamespace::PlayerColliderState  colliderState;

/// @brief Field crouchingColliderState, offset 0xdc, size 0x1c 
 __declspec(property(get=__cordl_internal_get_crouchingColliderState, put=__cordl_internal_set_crouchingColliderState)) ::GlobalNamespace::PlayerColliderState  crouchingColliderState;

/// @brief Field defaultPropLimits, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultPropLimits, put=__cordl_internal_set_defaultPropLimits)) ::GlobalNamespace::PlayerPose_LeftRightLimits  defaultPropLimits;

/// @brief Field directSystemControl, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_directSystemControl, put=__cordl_internal_set_directSystemControl)) ::UnityW<::GlobalNamespace::TrackedPeckState>  directSystemControl;

/// @brief Field dropSound, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_dropSound, put=__cordl_internal_set_dropSound)) ::UnityW<::GlobalNamespace::AudioAsset>  dropSound;

/// @brief Field emptyAllPockets, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_emptyAllPockets, put=__cordl_internal_set_emptyAllPockets)) bool  emptyAllPockets;

/// @brief Field emptyNonBlindfoldPockets, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_emptyNonBlindfoldPockets, put=__cordl_internal_set_emptyNonBlindfoldPockets)) bool  emptyNonBlindfoldPockets;

/// @brief Field enterSound, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_enterSound, put=__cordl_internal_set_enterSound)) ::UnityW<::GlobalNamespace::AudioAsset>  enterSound;

/// @brief Field entryIsBlocked, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_entryIsBlocked, put=__cordl_internal_set_entryIsBlocked)) bool  entryIsBlocked;

/// @brief Field exitSound, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitSound, put=__cordl_internal_set_exitSound)) ::UnityW<::GlobalNamespace::AudioAsset>  exitSound;

/// @brief Field eyeMood, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeMood, put=__cordl_internal_set_eyeMood)) ::GlobalNamespace::PlayerEyeMood  eyeMood;

 __declspec(property(get=get_eyeMoodRight)) ::GlobalNamespace::PlayerEyeMood  eyeMoodRight;

/// @brief Field hasCustomColliderState, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCustomColliderState, put=__cordl_internal_set_hasCustomColliderState)) bool  hasCustomColliderState;

/// @brief Field hasCustomCrouchingColliderState, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCustomCrouchingColliderState, put=__cordl_internal_set_hasCustomCrouchingColliderState)) bool  hasCustomCrouchingColliderState;

/// @brief Field hasCustomSittingColliderState, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCustomSittingColliderState, put=__cordl_internal_set_hasCustomSittingColliderState)) bool  hasCustomSittingColliderState;

/// @brief Field hasDifferentRightEye, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasDifferentRightEye, put=__cordl_internal_set_hasDifferentRightEye)) bool  hasDifferentRightEye;

/// @brief Field hasFootsteps, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasFootsteps, put=__cordl_internal_set_hasFootsteps)) bool  hasFootsteps;

/// @brief Field idleSound, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_idleSound, put=__cordl_internal_set_idleSound)) ::UnityW<::GlobalNamespace::AudioScatterContainer>  idleSound;

/// @brief Field isCarryPoseOfCharacter, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_isCarryPoseOfCharacter, put=__cordl_internal_set_isCarryPoseOfCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  isCarryPoseOfCharacter;

/// @brief Field leaveIfNotUpright, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_leaveIfNotUpright, put=__cordl_internal_set_leaveIfNotUpright)) bool  leaveIfNotUpright;

/// @brief Field leaveWithJump, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_leaveWithJump, put=__cordl_internal_set_leaveWithJump)) bool  leaveWithJump;

/// @brief Field leaveWithUseAction, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_leaveWithUseAction, put=__cordl_internal_set_leaveWithUseAction)) bool  leaveWithUseAction;

/// @brief Field legWiggleSound, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_legWiggleSound, put=__cordl_internal_set_legWiggleSound)) bool  legWiggleSound;

/// @brief Field localBumOffset, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_localBumOffset, put=__cordl_internal_set_localBumOffset)) ::UnityEngine::Vector3  localBumOffset;

/// @brief Field localBumOffsetSitting, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_localBumOffsetSitting, put=__cordl_internal_set_localBumOffsetSitting)) ::UnityEngine::Vector3  localBumOffsetSitting;

/// @brief Field noCameraDampening, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_noCameraDampening, put=__cordl_internal_set_noCameraDampening)) bool  noCameraDampening;

/// @brief Field noCrouching, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_noCrouching, put=__cordl_internal_set_noCrouching)) bool  noCrouching;

/// @brief Field noHolding, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_noHolding, put=__cordl_internal_set_noHolding)) bool  noHolding;

/// @brief Field noPlacingOthers, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_noPlacingOthers, put=__cordl_internal_set_noPlacingOthers)) bool  noPlacingOthers;

/// @brief Field occupant, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_occupant, put=__cordl_internal_set_occupant)) ::UnityW<::GlobalNamespace::PlayerCharacter>  occupant;

/// @brief Field onEnterAction, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnterAction, put=__cordl_internal_set_onEnterAction)) ::System::Action*  onEnterAction;

/// @brief Field onEnterSwitch, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnterSwitch, put=__cordl_internal_set_onEnterSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onEnterSwitch;

/// @brief Field onExitSwitch, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_onExitSwitch, put=__cordl_internal_set_onExitSwitch)) ::UnityW<::GlobalNamespace::PeckSwitch>  onExitSwitch;

/// @brief Field parentProp, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentProp, put=__cordl_internal_set_parentProp)) ::UnityW<::GlobalNamespace::Prop>  parentProp;

/// @brief Field seperateRightEye, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_seperateRightEye, put=__cordl_internal_set_seperateRightEye)) ::GlobalNamespace::PlayerEyeMood  seperateRightEye;

/// @brief Field shellReference, offset 0x168, size 0xc 
 __declspec(property(get=__cordl_internal_get_shellReference, put=__cordl_internal_set_shellReference)) ::GlobalNamespace::SeaShell_ShellReference  shellReference;

/// @brief Field sittingColliderState, offset 0xfc, size 0x1c 
 __declspec(property(get=__cordl_internal_get_sittingColliderState, put=__cordl_internal_set_sittingColliderState)) ::GlobalNamespace::PlayerColliderState  sittingColliderState;

/// @brief Field slideSound, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_slideSound, put=__cordl_internal_set_slideSound)) ::UnityW<::GlobalNamespace::AudioAsset>  slideSound;

/// @brief Field taggedPropLimits, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_taggedPropLimits, put=__cordl_internal_set_taggedPropLimits)) ::ArrayW<::GlobalNamespace::PlayerPose_TaggedPropLimits>  taggedPropLimits;

 __declspec(property(get=get_ticket, put=set_ticket)) uint16_t  ticket;

/// @brief Field useFullRetractions, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_useFullRetractions, put=__cordl_internal_set_useFullRetractions)) bool  useFullRetractions;

/// @brief Convert operator to "::LobbyNetworking::ITicketed"
constexpr operator  ::LobbyNetworking::ITicketed*() noexcept;

/// @brief Method Evict, addr 0x18037ff60, size 0x70, virtual false, abstract: false, final false
inline void Evict() ;

/// @brief Method GetLimits, addr 0x18037ffd0, size 0xb0, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerPose_LeftRightLimits GetLimits(::GlobalNamespace::Prop*  prop) ;

static inline ::GlobalNamespace::PlayerPose* New_ctor() ;

/// @brief Method OnDisable, addr 0x180380080, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180380090, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr uint16_t const& __cordl_internal_get__ticket_k__BackingField() const;

constexpr uint16_t& __cordl_internal_get__ticket_k__BackingField() ;

constexpr bool const& __cordl_internal_get_allowKicking() const;

constexpr bool& __cordl_internal_get_allowKicking() ;

constexpr bool const& __cordl_internal_get_allowSitting() const;

constexpr bool& __cordl_internal_get_allowSitting() ;

constexpr int32_t const& __cordl_internal_get_animatorPoseId() const;

constexpr int32_t& __cordl_internal_get_animatorPoseId() ;

constexpr ::StringW const& __cordl_internal_get_audioIdentifier() const;

constexpr ::StringW& __cordl_internal_get_audioIdentifier() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cameraOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cameraOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cameraOffsetCrouching() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cameraOffsetCrouching() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_chosenPlayer() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_chosenPlayer() ;

constexpr ::GlobalNamespace::PlayerColliderState const& __cordl_internal_get_colliderState() const;

constexpr ::GlobalNamespace::PlayerColliderState& __cordl_internal_get_colliderState() ;

constexpr ::GlobalNamespace::PlayerColliderState const& __cordl_internal_get_crouchingColliderState() const;

constexpr ::GlobalNamespace::PlayerColliderState& __cordl_internal_get_crouchingColliderState() ;

constexpr ::GlobalNamespace::PlayerPose_LeftRightLimits const& __cordl_internal_get_defaultPropLimits() const;

constexpr ::GlobalNamespace::PlayerPose_LeftRightLimits& __cordl_internal_get_defaultPropLimits() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_directSystemControl() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_directSystemControl() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_dropSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_dropSound() ;

constexpr bool const& __cordl_internal_get_emptyAllPockets() const;

constexpr bool& __cordl_internal_get_emptyAllPockets() ;

constexpr bool const& __cordl_internal_get_emptyNonBlindfoldPockets() const;

constexpr bool& __cordl_internal_get_emptyNonBlindfoldPockets() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_enterSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_enterSound() ;

constexpr bool const& __cordl_internal_get_entryIsBlocked() const;

constexpr bool& __cordl_internal_get_entryIsBlocked() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_exitSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_exitSound() ;

constexpr ::GlobalNamespace::PlayerEyeMood const& __cordl_internal_get_eyeMood() const;

constexpr ::GlobalNamespace::PlayerEyeMood& __cordl_internal_get_eyeMood() ;

constexpr bool const& __cordl_internal_get_hasCustomColliderState() const;

constexpr bool& __cordl_internal_get_hasCustomColliderState() ;

constexpr bool const& __cordl_internal_get_hasCustomCrouchingColliderState() const;

constexpr bool& __cordl_internal_get_hasCustomCrouchingColliderState() ;

constexpr bool const& __cordl_internal_get_hasCustomSittingColliderState() const;

constexpr bool& __cordl_internal_get_hasCustomSittingColliderState() ;

constexpr bool const& __cordl_internal_get_hasDifferentRightEye() const;

constexpr bool& __cordl_internal_get_hasDifferentRightEye() ;

constexpr bool const& __cordl_internal_get_hasFootsteps() const;

constexpr bool& __cordl_internal_get_hasFootsteps() ;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer> const& __cordl_internal_get_idleSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioScatterContainer>& __cordl_internal_get_idleSound() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_isCarryPoseOfCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_isCarryPoseOfCharacter() ;

constexpr bool const& __cordl_internal_get_leaveIfNotUpright() const;

constexpr bool& __cordl_internal_get_leaveIfNotUpright() ;

constexpr bool const& __cordl_internal_get_leaveWithJump() const;

constexpr bool& __cordl_internal_get_leaveWithJump() ;

constexpr bool const& __cordl_internal_get_leaveWithUseAction() const;

constexpr bool& __cordl_internal_get_leaveWithUseAction() ;

constexpr bool const& __cordl_internal_get_legWiggleSound() const;

constexpr bool& __cordl_internal_get_legWiggleSound() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localBumOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localBumOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localBumOffsetSitting() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localBumOffsetSitting() ;

constexpr bool const& __cordl_internal_get_noCameraDampening() const;

constexpr bool& __cordl_internal_get_noCameraDampening() ;

constexpr bool const& __cordl_internal_get_noCrouching() const;

constexpr bool& __cordl_internal_get_noCrouching() ;

constexpr bool const& __cordl_internal_get_noHolding() const;

constexpr bool& __cordl_internal_get_noHolding() ;

constexpr bool const& __cordl_internal_get_noPlacingOthers() const;

constexpr bool& __cordl_internal_get_noPlacingOthers() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_occupant() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_occupant() ;

constexpr ::System::Action* const& __cordl_internal_get_onEnterAction() const;

constexpr ::System::Action*& __cordl_internal_get_onEnterAction() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onEnterSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onEnterSwitch() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onExitSwitch() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onExitSwitch() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_parentProp() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_parentProp() ;

constexpr ::GlobalNamespace::PlayerEyeMood const& __cordl_internal_get_seperateRightEye() const;

constexpr ::GlobalNamespace::PlayerEyeMood& __cordl_internal_get_seperateRightEye() ;

constexpr ::GlobalNamespace::SeaShell_ShellReference const& __cordl_internal_get_shellReference() const;

constexpr ::GlobalNamespace::SeaShell_ShellReference& __cordl_internal_get_shellReference() ;

constexpr ::GlobalNamespace::PlayerColliderState const& __cordl_internal_get_sittingColliderState() const;

constexpr ::GlobalNamespace::PlayerColliderState& __cordl_internal_get_sittingColliderState() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_slideSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_slideSound() ;

constexpr ::ArrayW<::GlobalNamespace::PlayerPose_TaggedPropLimits> const& __cordl_internal_get_taggedPropLimits() const;

constexpr ::ArrayW<::GlobalNamespace::PlayerPose_TaggedPropLimits>& __cordl_internal_get_taggedPropLimits() ;

constexpr bool const& __cordl_internal_get_useFullRetractions() const;

constexpr bool& __cordl_internal_get_useFullRetractions() ;

constexpr void __cordl_internal_set__ticket_k__BackingField(uint16_t  value) ;

constexpr void __cordl_internal_set_allowKicking(bool  value) ;

constexpr void __cordl_internal_set_allowSitting(bool  value) ;

constexpr void __cordl_internal_set_animatorPoseId(int32_t  value) ;

constexpr void __cordl_internal_set_audioIdentifier(::StringW  value) ;

constexpr void __cordl_internal_set_cameraOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cameraOffsetCrouching(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_chosenPlayer(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_colliderState(::GlobalNamespace::PlayerColliderState  value) ;

constexpr void __cordl_internal_set_crouchingColliderState(::GlobalNamespace::PlayerColliderState  value) ;

constexpr void __cordl_internal_set_defaultPropLimits(::GlobalNamespace::PlayerPose_LeftRightLimits  value) ;

constexpr void __cordl_internal_set_directSystemControl(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_dropSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_emptyAllPockets(bool  value) ;

constexpr void __cordl_internal_set_emptyNonBlindfoldPockets(bool  value) ;

constexpr void __cordl_internal_set_enterSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_entryIsBlocked(bool  value) ;

constexpr void __cordl_internal_set_exitSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_eyeMood(::GlobalNamespace::PlayerEyeMood  value) ;

constexpr void __cordl_internal_set_hasCustomColliderState(bool  value) ;

constexpr void __cordl_internal_set_hasCustomCrouchingColliderState(bool  value) ;

constexpr void __cordl_internal_set_hasCustomSittingColliderState(bool  value) ;

constexpr void __cordl_internal_set_hasDifferentRightEye(bool  value) ;

constexpr void __cordl_internal_set_hasFootsteps(bool  value) ;

constexpr void __cordl_internal_set_idleSound(::UnityW<::GlobalNamespace::AudioScatterContainer>  value) ;

constexpr void __cordl_internal_set_isCarryPoseOfCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_leaveIfNotUpright(bool  value) ;

constexpr void __cordl_internal_set_leaveWithJump(bool  value) ;

constexpr void __cordl_internal_set_leaveWithUseAction(bool  value) ;

constexpr void __cordl_internal_set_legWiggleSound(bool  value) ;

constexpr void __cordl_internal_set_localBumOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localBumOffsetSitting(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_noCameraDampening(bool  value) ;

constexpr void __cordl_internal_set_noCrouching(bool  value) ;

constexpr void __cordl_internal_set_noHolding(bool  value) ;

constexpr void __cordl_internal_set_noPlacingOthers(bool  value) ;

constexpr void __cordl_internal_set_occupant(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_onEnterAction(::System::Action*  value) ;

constexpr void __cordl_internal_set_onEnterSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_onExitSwitch(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_parentProp(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_seperateRightEye(::GlobalNamespace::PlayerEyeMood  value) ;

constexpr void __cordl_internal_set_shellReference(::GlobalNamespace::SeaShell_ShellReference  value) ;

constexpr void __cordl_internal_set_sittingColliderState(::GlobalNamespace::PlayerColliderState  value) ;

constexpr void __cordl_internal_set_slideSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_taggedPropLimits(::ArrayW<::GlobalNamespace::PlayerPose_TaggedPropLimits>  value) ;

constexpr void __cordl_internal_set_useFullRetractions(bool  value) ;

/// @brief Method .ctor, addr 0x1803800f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_eyeMoodRight, addr 0x180380100, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerEyeMood get_eyeMoodRight() ;

/// @brief Method get_ticket, addr 0x180380110, size 0x10, virtual true, abstract: false, final true
inline uint16_t get_ticket() ;

/// @brief Convert to "::LobbyNetworking::ITicketed"
constexpr ::LobbyNetworking::ITicketed* i___LobbyNetworking__ITicketed() noexcept;

/// @brief Method set_ticket, addr 0x180380120, size 0x10, virtual true, abstract: false, final true
inline void set_ticket(uint16_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerPose() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerPose", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerPose(PlayerPose && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerPose", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerPose(PlayerPose const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5514};

/// @brief Field animatorPoseId, offset: 0x20, size: 0x4, def value: None
 int32_t  ___animatorPoseId;

/// @brief Field noCrouching, offset: 0x24, size: 0x1, def value: None
 bool  ___noCrouching;

/// @brief Field noHolding, offset: 0x25, size: 0x1, def value: None
 bool  ___noHolding;

/// @brief Field entryIsBlocked, offset: 0x26, size: 0x1, def value: None
 bool  ___entryIsBlocked;

/// @brief Field allowSitting, offset: 0x27, size: 0x1, def value: None
 bool  ___allowSitting;

/// @brief Field emptyAllPockets, offset: 0x28, size: 0x1, def value: None
 bool  ___emptyAllPockets;

/// @brief Field emptyNonBlindfoldPockets, offset: 0x29, size: 0x1, def value: None
 bool  ___emptyNonBlindfoldPockets;

/// @brief Field hasFootsteps, offset: 0x2a, size: 0x1, def value: None
 bool  ___hasFootsteps;

/// @brief Field noPlacingOthers, offset: 0x2b, size: 0x1, def value: None
 bool  ___noPlacingOthers;

/// @brief Field allowKicking, offset: 0x2c, size: 0x1, def value: None
 bool  ___allowKicking;

/// @brief Field useFullRetractions, offset: 0x2d, size: 0x1, def value: None
 bool  ___useFullRetractions;

/// @brief Field chosenPlayer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___chosenPlayer;

/// @brief Field leaveIfNotUpright, offset: 0x38, size: 0x1, def value: None
 bool  ___leaveIfNotUpright;

/// @brief Field leaveWithUseAction, offset: 0x39, size: 0x1, def value: None
 bool  ___leaveWithUseAction;

/// @brief Field leaveWithJump, offset: 0x3a, size: 0x1, def value: None
 bool  ___leaveWithJump;

/// @brief Field eyeMood, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::PlayerEyeMood  ___eyeMood;

/// @brief Field hasDifferentRightEye, offset: 0x40, size: 0x1, def value: None
 bool  ___hasDifferentRightEye;

/// @brief Field seperateRightEye, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::PlayerEyeMood  ___seperateRightEye;

/// @brief Field cameraOffset, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cameraOffset;

/// @brief Field cameraOffsetCrouching, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cameraOffsetCrouching;

/// @brief Field noCameraDampening, offset: 0x60, size: 0x1, def value: None
 bool  ___noCameraDampening;

/// @brief Field defaultPropLimits, offset: 0x64, size: 0x10, def value: None
 ::GlobalNamespace::PlayerPose_LeftRightLimits  ___defaultPropLimits;

/// @brief Field taggedPropLimits, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PlayerPose_TaggedPropLimits>  ___taggedPropLimits;

/// @brief Field onEnterSwitch, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onEnterSwitch;

/// @brief Field onExitSwitch, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onExitSwitch;

/// @brief Field onEnterAction, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___onEnterAction;

/// @brief Field directSystemControl, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___directSystemControl;

/// @brief Field localBumOffset, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localBumOffset;

/// @brief Field localBumOffsetSitting, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localBumOffsetSitting;

/// @brief Field hasCustomColliderState, offset: 0xb8, size: 0x1, def value: None
 bool  ___hasCustomColliderState;

/// @brief Field colliderState, offset: 0xbc, size: 0x1c, def value: None
 ::GlobalNamespace::PlayerColliderState  ___colliderState;

/// @brief Field hasCustomCrouchingColliderState, offset: 0xd8, size: 0x1, def value: None
 bool  ___hasCustomCrouchingColliderState;

/// @brief Field crouchingColliderState, offset: 0xdc, size: 0x1c, def value: None
 ::GlobalNamespace::PlayerColliderState  ___crouchingColliderState;

/// @brief Field hasCustomSittingColliderState, offset: 0xf8, size: 0x1, def value: None
 bool  ___hasCustomSittingColliderState;

/// @brief Field sittingColliderState, offset: 0xfc, size: 0x1c, def value: None
 ::GlobalNamespace::PlayerColliderState  ___sittingColliderState;

/// @brief Field audioIdentifier, offset: 0x118, size: 0x8, def value: None
 ::StringW  ___audioIdentifier;

/// @brief Field enterSound, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___enterSound;

/// @brief Field exitSound, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___exitSound;

/// @brief Field slideSound, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___slideSound;

/// @brief Field dropSound, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___dropSound;

/// @brief Field legWiggleSound, offset: 0x140, size: 0x1, def value: None
 bool  ___legWiggleSound;

/// @brief Field idleSound, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioScatterContainer>  ___idleSound;

/// @brief Field occupant, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___occupant;

/// @brief Field isCarryPoseOfCharacter, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___isCarryPoseOfCharacter;

/// @brief Field parentProp, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___parentProp;

/// @brief Field shellReference, offset: 0x168, size: 0xc, def value: None
 ::GlobalNamespace::SeaShell_ShellReference  ___shellReference;

/// @brief Field <ticket>k__BackingField, offset: 0x174, size: 0x2, def value: None
 uint16_t  ____ticket_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerPose, ___animatorPoseId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___noCrouching) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___noHolding) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___entryIsBlocked) == 0x26, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___allowSitting) == 0x27, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___emptyAllPockets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___emptyNonBlindfoldPockets) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___hasFootsteps) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___noPlacingOthers) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___allowKicking) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___useFullRetractions) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___chosenPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___leaveIfNotUpright) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___leaveWithUseAction) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___leaveWithJump) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___eyeMood) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___hasDifferentRightEye) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___seperateRightEye) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___cameraOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___cameraOffsetCrouching) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___noCameraDampening) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___defaultPropLimits) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___taggedPropLimits) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___onEnterSwitch) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___onExitSwitch) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___onEnterAction) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___directSystemControl) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___localBumOffset) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___localBumOffsetSitting) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___hasCustomColliderState) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___colliderState) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___hasCustomCrouchingColliderState) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___crouchingColliderState) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___hasCustomSittingColliderState) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___sittingColliderState) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___audioIdentifier) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___enterSound) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___exitSound) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___slideSound) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___dropSound) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___legWiggleSound) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___idleSound) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___occupant) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___isCarryPoseOfCharacter) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___parentProp) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ___shellReference) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerPose, ____ticket_k__BackingField) == 0x174, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerPose) == 0x178, "Size mismatch!");

} // namespace end def GlobalNamespace
