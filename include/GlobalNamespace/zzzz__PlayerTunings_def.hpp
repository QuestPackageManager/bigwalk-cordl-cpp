#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerTunings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PlayerTunings)
namespace GlobalNamespace {
struct PlayerTunings_LaunchSettings;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerTunings;
}
namespace GlobalNamespace {
struct PlayerTunings_LaunchSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerTunings*);
MARK_VAL_T(::GlobalNamespace::PlayerTunings_LaunchSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerTunings*, "", "PlayerTunings");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerTunings_LaunchSettings, "", "PlayerTunings/LaunchSettings");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerTunings/LaunchSettings
struct CORDL_TYPE PlayerTunings_LaunchSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTunings_LaunchSettings() ;

// Ctor Parameters [CppParam { name: "maxForce", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxTorque", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "angleCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }]
constexpr PlayerTunings_LaunchSettings(float_t  maxForce, ::UnityEngine::Vector3  maxTorque, ::UnityEngine::AnimationCurve*  angleCurve) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5489};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field maxForce, offset: 0x0, size: 0x4, def value: None
 float_t  maxForce;

/// @brief Field maxTorque, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  maxTorque;

/// @brief Field angleCurve, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  angleCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerTunings_LaunchSettings, maxForce) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings_LaunchSettings, maxTorque) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings_LaunchSettings, angleCurve) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerTunings_LaunchSettings) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies PlayerTunings::LaunchSettings, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerTunings
class CORDL_TYPE PlayerTunings : public ::System::Object {
public:
// Declarations
using LaunchSettings = ::GlobalNamespace::PlayerTunings_LaunchSettings;

/// @brief Field crouchForwardSpeed, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_crouchForwardSpeed, put=__cordl_internal_set_crouchForwardSpeed)) float_t  crouchForwardSpeed;

/// @brief Field crouchForwardSprintSpeed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_crouchForwardSprintSpeed, put=__cordl_internal_set_crouchForwardSprintSpeed)) float_t  crouchForwardSprintSpeed;

/// @brief Field forwardSpeed, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_forwardSpeed, put=__cordl_internal_set_forwardSpeed)) float_t  forwardSpeed;

/// @brief Field forwardSprintGhostSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_forwardSprintGhostSpeed, put=__cordl_internal_set_forwardSprintGhostSpeed)) float_t  forwardSprintGhostSpeed;

/// @brief Field forwardSprintSpeed, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_forwardSprintSpeed, put=__cordl_internal_set_forwardSprintSpeed)) float_t  forwardSprintSpeed;

/// @brief Field heldSwitchMaxRotation, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_heldSwitchMaxRotation, put=__cordl_internal_set_heldSwitchMaxRotation)) float_t  heldSwitchMaxRotation;

/// @brief Field jumpForce, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpForce, put=__cordl_internal_set_jumpForce)) float_t  jumpForce;

/// @brief Field kickSettings, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get_kickSettings, put=__cordl_internal_set_kickSettings)) ::GlobalNamespace::PlayerTunings_LaunchSettings  kickSettings;

/// @brief Field limitHeldSwitchRotation, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_limitHeldSwitchRotation, put=__cordl_internal_set_limitHeldSwitchRotation)) bool  limitHeldSwitchRotation;

/// @brief Field lowThrowSettings, offset 0x80, size 0x18 
 __declspec(property(get=__cordl_internal_get_lowThrowSettings, put=__cordl_internal_set_lowThrowSettings)) ::GlobalNamespace::PlayerTunings_LaunchSettings  lowThrowSettings;

/// @brief Field lowerLookLimit, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_lowerLookLimit, put=__cordl_internal_set_lowerLookLimit)) float_t  lowerLookLimit;

/// @brief Field maxUpwardsVelocity, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxUpwardsVelocity, put=__cordl_internal_set_maxUpwardsVelocity)) float_t  maxUpwardsVelocity;

/// @brief Field maxWindUpDuration, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxWindUpDuration, put=__cordl_internal_set_maxWindUpDuration)) float_t  maxWindUpDuration;

/// @brief Field mouseLookSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_mouseLookSpeed, put=__cordl_internal_set_mouseLookSpeed)) float_t  mouseLookSpeed;

/// @brief Field sideLookLimit, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sideLookLimit, put=__cordl_internal_set_sideLookLimit)) float_t  sideLookLimit;

/// @brief Field stickLookSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_stickLookSpeed, put=__cordl_internal_set_stickLookSpeed)) float_t  stickLookSpeed;

/// @brief Field swimForwardSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_swimForwardSpeed, put=__cordl_internal_set_swimForwardSpeed)) float_t  swimForwardSpeed;

/// @brief Field swimForwardSprintSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_swimForwardSprintSpeed, put=__cordl_internal_set_swimForwardSprintSpeed)) float_t  swimForwardSprintSpeed;

/// @brief Field throwSettings, offset 0x68, size 0x18 
 __declspec(property(get=__cordl_internal_get_throwSettings, put=__cordl_internal_set_throwSettings)) ::GlobalNamespace::PlayerTunings_LaunchSettings  throwSettings;

/// @brief Field upperLookLimit, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_upperLookLimit, put=__cordl_internal_set_upperLookLimit)) float_t  upperLookLimit;

static inline ::GlobalNamespace::PlayerTunings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_crouchForwardSpeed() const;

constexpr float_t& __cordl_internal_get_crouchForwardSpeed() ;

constexpr float_t const& __cordl_internal_get_crouchForwardSprintSpeed() const;

constexpr float_t& __cordl_internal_get_crouchForwardSprintSpeed() ;

constexpr float_t const& __cordl_internal_get_forwardSpeed() const;

constexpr float_t& __cordl_internal_get_forwardSpeed() ;

constexpr float_t const& __cordl_internal_get_forwardSprintGhostSpeed() const;

constexpr float_t& __cordl_internal_get_forwardSprintGhostSpeed() ;

constexpr float_t const& __cordl_internal_get_forwardSprintSpeed() const;

constexpr float_t& __cordl_internal_get_forwardSprintSpeed() ;

constexpr float_t const& __cordl_internal_get_heldSwitchMaxRotation() const;

constexpr float_t& __cordl_internal_get_heldSwitchMaxRotation() ;

constexpr float_t const& __cordl_internal_get_jumpForce() const;

constexpr float_t& __cordl_internal_get_jumpForce() ;

constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings const& __cordl_internal_get_kickSettings() const;

constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings& __cordl_internal_get_kickSettings() ;

constexpr bool const& __cordl_internal_get_limitHeldSwitchRotation() const;

constexpr bool& __cordl_internal_get_limitHeldSwitchRotation() ;

constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings const& __cordl_internal_get_lowThrowSettings() const;

constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings& __cordl_internal_get_lowThrowSettings() ;

constexpr float_t const& __cordl_internal_get_lowerLookLimit() const;

constexpr float_t& __cordl_internal_get_lowerLookLimit() ;

constexpr float_t const& __cordl_internal_get_maxUpwardsVelocity() const;

constexpr float_t& __cordl_internal_get_maxUpwardsVelocity() ;

constexpr float_t const& __cordl_internal_get_maxWindUpDuration() const;

constexpr float_t& __cordl_internal_get_maxWindUpDuration() ;

constexpr float_t const& __cordl_internal_get_mouseLookSpeed() const;

constexpr float_t& __cordl_internal_get_mouseLookSpeed() ;

constexpr float_t const& __cordl_internal_get_sideLookLimit() const;

constexpr float_t& __cordl_internal_get_sideLookLimit() ;

constexpr float_t const& __cordl_internal_get_stickLookSpeed() const;

constexpr float_t& __cordl_internal_get_stickLookSpeed() ;

constexpr float_t const& __cordl_internal_get_swimForwardSpeed() const;

constexpr float_t& __cordl_internal_get_swimForwardSpeed() ;

constexpr float_t const& __cordl_internal_get_swimForwardSprintSpeed() const;

constexpr float_t& __cordl_internal_get_swimForwardSprintSpeed() ;

constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings const& __cordl_internal_get_throwSettings() const;

constexpr ::GlobalNamespace::PlayerTunings_LaunchSettings& __cordl_internal_get_throwSettings() ;

constexpr float_t const& __cordl_internal_get_upperLookLimit() const;

constexpr float_t& __cordl_internal_get_upperLookLimit() ;

constexpr void __cordl_internal_set_crouchForwardSpeed(float_t  value) ;

constexpr void __cordl_internal_set_crouchForwardSprintSpeed(float_t  value) ;

constexpr void __cordl_internal_set_forwardSpeed(float_t  value) ;

constexpr void __cordl_internal_set_forwardSprintGhostSpeed(float_t  value) ;

constexpr void __cordl_internal_set_forwardSprintSpeed(float_t  value) ;

constexpr void __cordl_internal_set_heldSwitchMaxRotation(float_t  value) ;

constexpr void __cordl_internal_set_jumpForce(float_t  value) ;

constexpr void __cordl_internal_set_kickSettings(::GlobalNamespace::PlayerTunings_LaunchSettings  value) ;

constexpr void __cordl_internal_set_limitHeldSwitchRotation(bool  value) ;

constexpr void __cordl_internal_set_lowThrowSettings(::GlobalNamespace::PlayerTunings_LaunchSettings  value) ;

constexpr void __cordl_internal_set_lowerLookLimit(float_t  value) ;

constexpr void __cordl_internal_set_maxUpwardsVelocity(float_t  value) ;

constexpr void __cordl_internal_set_maxWindUpDuration(float_t  value) ;

constexpr void __cordl_internal_set_mouseLookSpeed(float_t  value) ;

constexpr void __cordl_internal_set_sideLookLimit(float_t  value) ;

constexpr void __cordl_internal_set_stickLookSpeed(float_t  value) ;

constexpr void __cordl_internal_set_swimForwardSpeed(float_t  value) ;

constexpr void __cordl_internal_set_swimForwardSprintSpeed(float_t  value) ;

constexpr void __cordl_internal_set_throwSettings(::GlobalNamespace::PlayerTunings_LaunchSettings  value) ;

constexpr void __cordl_internal_set_upperLookLimit(float_t  value) ;

/// @brief Method .ctor, addr 0x180378ad0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerTunings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerTunings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerTunings(PlayerTunings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerTunings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerTunings(PlayerTunings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5490};

/// @brief Field forwardSpeed, offset: 0x10, size: 0x4, def value: None
 float_t  ___forwardSpeed;

/// @brief Field forwardSprintSpeed, offset: 0x14, size: 0x4, def value: None
 float_t  ___forwardSprintSpeed;

/// @brief Field crouchForwardSpeed, offset: 0x18, size: 0x4, def value: None
 float_t  ___crouchForwardSpeed;

/// @brief Field crouchForwardSprintSpeed, offset: 0x1c, size: 0x4, def value: None
 float_t  ___crouchForwardSprintSpeed;

/// @brief Field swimForwardSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___swimForwardSpeed;

/// @brief Field swimForwardSprintSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___swimForwardSprintSpeed;

/// @brief Field forwardSprintGhostSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___forwardSprintGhostSpeed;

/// @brief Field mouseLookSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___mouseLookSpeed;

/// @brief Field stickLookSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___stickLookSpeed;

/// @brief Field upperLookLimit, offset: 0x34, size: 0x4, def value: None
 float_t  ___upperLookLimit;

/// @brief Field lowerLookLimit, offset: 0x38, size: 0x4, def value: None
 float_t  ___lowerLookLimit;

/// @brief Field sideLookLimit, offset: 0x3c, size: 0x4, def value: None
 float_t  ___sideLookLimit;

/// @brief Field jumpForce, offset: 0x40, size: 0x4, def value: None
 float_t  ___jumpForce;

/// @brief Field maxUpwardsVelocity, offset: 0x44, size: 0x4, def value: None
 float_t  ___maxUpwardsVelocity;

/// @brief Field maxWindUpDuration, offset: 0x48, size: 0x4, def value: None
 float_t  ___maxWindUpDuration;

/// @brief Field kickSettings, offset: 0x50, size: 0x18, def value: None
 ::GlobalNamespace::PlayerTunings_LaunchSettings  ___kickSettings;

/// @brief Field throwSettings, offset: 0x68, size: 0x18, def value: None
 ::GlobalNamespace::PlayerTunings_LaunchSettings  ___throwSettings;

/// @brief Field lowThrowSettings, offset: 0x80, size: 0x18, def value: None
 ::GlobalNamespace::PlayerTunings_LaunchSettings  ___lowThrowSettings;

/// @brief Field limitHeldSwitchRotation, offset: 0x98, size: 0x1, def value: None
 bool  ___limitHeldSwitchRotation;

/// @brief Field heldSwitchMaxRotation, offset: 0x9c, size: 0x4, def value: None
 float_t  ___heldSwitchMaxRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___forwardSpeed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___forwardSprintSpeed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___crouchForwardSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___crouchForwardSprintSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___swimForwardSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___swimForwardSprintSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___forwardSprintGhostSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___mouseLookSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___stickLookSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___upperLookLimit) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___lowerLookLimit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___sideLookLimit) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___jumpForce) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___maxUpwardsVelocity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___maxWindUpDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___kickSettings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___throwSettings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___lowThrowSettings) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___limitHeldSwitchRotation) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerTunings, ___heldSwitchMaxRotation) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerTunings) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
