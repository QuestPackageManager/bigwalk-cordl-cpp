#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveScenes/PlayerController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerController)
namespace Mirror::Examples::AdditiveScenes {
struct PlayerController_GroundState;
}
namespace UnityEngine {
class CharacterController;
}
// Forward declare root types
namespace Mirror::Examples::AdditiveScenes {
struct PlayerController_GroundState;
}
namespace Mirror::Examples::AdditiveScenes {
class PlayerController;
}
// Write type traits
MARK_VAL_T(::Mirror::Examples::AdditiveScenes::PlayerController_GroundState);
MARK_REF_T(::Mirror::Examples::AdditiveScenes::PlayerController*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveScenes::PlayerController_GroundState, "Mirror.Examples.AdditiveScenes", "PlayerController/GroundState");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveScenes::PlayerController*, "Mirror.Examples.AdditiveScenes", "PlayerController");
// Dependencies 
namespace Mirror::Examples::AdditiveScenes {
// Is value type: true
// CS Name: Mirror.Examples.AdditiveScenes.PlayerController/GroundState
struct CORDL_TYPE PlayerController_GroundState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __PlayerController_GroundState_Unwrapped
enum struct __PlayerController_GroundState_Unwrapped : uint8_t {
__E_Jumping = static_cast<uint8_t>(0x0u),
__E_Falling = static_cast<uint8_t>(0x1u),
__E_Grounded = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerController_GroundState_Unwrapped () const noexcept {
return static_cast<__PlayerController_GroundState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerController_GroundState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr PlayerController_GroundState(uint8_t  value__) noexcept;

/// @brief Field Falling value: U8(1)
static ::Mirror::Examples::AdditiveScenes::PlayerController_GroundState const Falling;

/// @brief Field Grounded value: U8(2)
static ::Mirror::Examples::AdditiveScenes::PlayerController_GroundState const Grounded;

/// @brief Field Jumping value: U8(0)
static ::Mirror::Examples::AdditiveScenes::PlayerController_GroundState const Jumping;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19353};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController_GroundState, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveScenes::PlayerController_GroundState) == 0x1, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveScenes
// Dependencies Mirror.Examples.AdditiveScenes.PlayerController::GroundState, Mirror.NetworkBehaviour, UnityEngine.Vector3, UnityEngine.Vector3Int
namespace Mirror::Examples::AdditiveScenes {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveScenes.PlayerController
class CORDL_TYPE PlayerController : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using GroundState = ::Mirror::Examples::AdditiveScenes::PlayerController_GroundState;

/// @brief Field animRotation, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_animRotation, put=__cordl_internal_set_animRotation)) float_t  animRotation;

/// @brief Field animVelocity, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_animVelocity, put=__cordl_internal_set_animVelocity)) float_t  animVelocity;

/// @brief Field characterController, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_characterController, put=__cordl_internal_set_characterController)) ::UnityW<::UnityEngine::CharacterController>  characterController;

/// @brief Field direction, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get_direction, put=__cordl_internal_set_direction)) ::UnityEngine::Vector3  direction;

/// @brief Field groundState, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_groundState, put=__cordl_internal_set_groundState)) ::Mirror::Examples::AdditiveScenes::PlayerController_GroundState  groundState;

/// @brief Field horizontal, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontal, put=__cordl_internal_set_horizontal)) float_t  horizontal;

/// @brief Field initialJumpSpeed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialJumpSpeed, put=__cordl_internal_set_initialJumpSpeed)) float_t  initialJumpSpeed;

/// @brief Field jumpDelta, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpDelta, put=__cordl_internal_set_jumpDelta)) float_t  jumpDelta;

/// @brief Field jumpSpeed, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpSpeed, put=__cordl_internal_set_jumpSpeed)) float_t  jumpSpeed;

/// @brief Field maxJumpSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxJumpSpeed, put=__cordl_internal_set_maxJumpSpeed)) float_t  maxJumpSpeed;

/// @brief Field maxTurnSpeed, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTurnSpeed, put=__cordl_internal_set_maxTurnSpeed)) float_t  maxTurnSpeed;

/// @brief Field moveSpeedMultiplier, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_moveSpeedMultiplier, put=__cordl_internal_set_moveSpeedMultiplier)) float_t  moveSpeedMultiplier;

/// @brief Field turnDelta, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnDelta, put=__cordl_internal_set_turnDelta)) float_t  turnDelta;

/// @brief Field turnSpeed, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnSpeed, put=__cordl_internal_set_turnSpeed)) float_t  turnSpeed;

/// @brief Field velocity, offset 0xa4, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3Int  velocity;

/// @brief Field vertical, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_vertical, put=__cordl_internal_set_vertical)) float_t  vertical;

/// @brief Method HandleJumping, addr 0x18155ecb0, size 0x160, virtual false, abstract: false, final false
inline void HandleJumping() ;

/// @brief Method HandleMove, addr 0x18155ee10, size 0x1d0, virtual false, abstract: false, final false
inline void HandleMove() ;

/// @brief Method HandleTurning, addr 0x18155efe0, size 0x230, virtual false, abstract: false, final false
inline void HandleTurning() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::AdditiveScenes::PlayerController* New_ctor() ;

/// @brief Method OnStartAuthority, addr 0x18155f210, size 0x40, virtual true, abstract: false, final false
inline void OnStartAuthority() ;

/// @brief Method OnStopAuthority, addr 0x18155f250, size 0x40, virtual true, abstract: false, final false
inline void OnStopAuthority() ;

/// @brief Method OnValidate, addr 0x18155f290, size 0xc0, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Update, addr 0x18155f350, size 0x3d0, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_animRotation() const;

constexpr float_t& __cordl_internal_get_animRotation() ;

constexpr float_t const& __cordl_internal_get_animVelocity() const;

constexpr float_t& __cordl_internal_get_animVelocity() ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get_characterController() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get_characterController() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_direction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_direction() ;

constexpr ::Mirror::Examples::AdditiveScenes::PlayerController_GroundState const& __cordl_internal_get_groundState() const;

constexpr ::Mirror::Examples::AdditiveScenes::PlayerController_GroundState& __cordl_internal_get_groundState() ;

constexpr float_t const& __cordl_internal_get_horizontal() const;

constexpr float_t& __cordl_internal_get_horizontal() ;

constexpr float_t const& __cordl_internal_get_initialJumpSpeed() const;

constexpr float_t& __cordl_internal_get_initialJumpSpeed() ;

constexpr float_t const& __cordl_internal_get_jumpDelta() const;

constexpr float_t& __cordl_internal_get_jumpDelta() ;

constexpr float_t const& __cordl_internal_get_jumpSpeed() const;

constexpr float_t& __cordl_internal_get_jumpSpeed() ;

constexpr float_t const& __cordl_internal_get_maxJumpSpeed() const;

constexpr float_t& __cordl_internal_get_maxJumpSpeed() ;

constexpr float_t const& __cordl_internal_get_maxTurnSpeed() const;

constexpr float_t& __cordl_internal_get_maxTurnSpeed() ;

constexpr float_t const& __cordl_internal_get_moveSpeedMultiplier() const;

constexpr float_t& __cordl_internal_get_moveSpeedMultiplier() ;

constexpr float_t const& __cordl_internal_get_turnDelta() const;

constexpr float_t& __cordl_internal_get_turnDelta() ;

constexpr float_t const& __cordl_internal_get_turnSpeed() const;

constexpr float_t& __cordl_internal_get_turnSpeed() ;

constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_velocity() ;

constexpr float_t const& __cordl_internal_get_vertical() const;

constexpr float_t& __cordl_internal_get_vertical() ;

constexpr void __cordl_internal_set_animRotation(float_t  value) ;

constexpr void __cordl_internal_set_animVelocity(float_t  value) ;

constexpr void __cordl_internal_set_characterController(::UnityW<::UnityEngine::CharacterController>  value) ;

constexpr void __cordl_internal_set_direction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_groundState(::Mirror::Examples::AdditiveScenes::PlayerController_GroundState  value) ;

constexpr void __cordl_internal_set_horizontal(float_t  value) ;

constexpr void __cordl_internal_set_initialJumpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_jumpDelta(float_t  value) ;

constexpr void __cordl_internal_set_jumpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxJumpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_moveSpeedMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_turnDelta(float_t  value) ;

constexpr void __cordl_internal_set_turnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3Int  value) ;

constexpr void __cordl_internal_set_vertical(float_t  value) ;

/// @brief Method .ctor, addr 0x18155f720, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerController(PlayerController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerController(PlayerController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19354};

/// @brief Field characterController, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ___characterController;

/// @brief Field moveSpeedMultiplier, offset: 0x70, size: 0x4, def value: None
 float_t  ___moveSpeedMultiplier;

/// @brief Field maxTurnSpeed, offset: 0x74, size: 0x4, def value: None
 float_t  ___maxTurnSpeed;

/// @brief Field turnDelta, offset: 0x78, size: 0x4, def value: None
 float_t  ___turnDelta;

/// @brief Field initialJumpSpeed, offset: 0x7c, size: 0x4, def value: None
 float_t  ___initialJumpSpeed;

/// @brief Field maxJumpSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ___maxJumpSpeed;

/// @brief Field jumpDelta, offset: 0x84, size: 0x4, def value: None
 float_t  ___jumpDelta;

/// @brief Field groundState, offset: 0x88, size: 0x1, def value: None
 ::Mirror::Examples::AdditiveScenes::PlayerController_GroundState  ___groundState;

/// @brief Field horizontal, offset: 0x8c, size: 0x4, def value: None
 float_t  ___horizontal;

/// @brief Field vertical, offset: 0x90, size: 0x4, def value: None
 float_t  ___vertical;

/// @brief Field turnSpeed, offset: 0x94, size: 0x4, def value: None
 float_t  ___turnSpeed;

/// @brief Field jumpSpeed, offset: 0x98, size: 0x4, def value: None
 float_t  ___jumpSpeed;

/// @brief Field animVelocity, offset: 0x9c, size: 0x4, def value: None
 float_t  ___animVelocity;

/// @brief Field animRotation, offset: 0xa0, size: 0x4, def value: None
 float_t  ___animRotation;

/// @brief Field velocity, offset: 0xa4, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  ___velocity;

/// @brief Field direction, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___direction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___characterController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___moveSpeedMultiplier) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___maxTurnSpeed) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___turnDelta) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___initialJumpSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___maxJumpSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___jumpDelta) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___groundState) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___horizontal) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___vertical) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___turnSpeed) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___jumpSpeed) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___animVelocity) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___animRotation) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___velocity) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveScenes::PlayerController, ___direction) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveScenes::PlayerController) == 0xc0, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveScenes
