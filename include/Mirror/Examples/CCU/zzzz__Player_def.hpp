#pragma once
// IWYU pragma private; include "Mirror/Examples/CCU/Player.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Player)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Mirror::Examples::CCU {
class Player;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::CCU::Player*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::CCU::Player*, "Mirror.Examples.CCU", "Player");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Vector3
namespace Mirror::Examples::CCU {
// Is value type: false
// CS Name: Mirror.Examples.CCU.Player
class CORDL_TYPE Player : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field autoMove, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoMove, put=__cordl_internal_set_autoMove)) bool  autoMove;

/// @brief Field autoSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoSpeed, put=__cordl_internal_set_autoSpeed)) float_t  autoSpeed;

/// @brief Field cameraOffset, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_cameraOffset, put=__cordl_internal_set_cameraOffset)) ::UnityEngine::Vector3  cameraOffset;

/// @brief Field destination, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_destination, put=__cordl_internal_set_destination)) ::UnityEngine::Vector3  destination;

/// @brief Field manualSpeed, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_manualSpeed, put=__cordl_internal_set_manualSpeed)) float_t  manualSpeed;

/// @brief Field movementDistance, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementDistance, put=__cordl_internal_set_movementDistance)) float_t  movementDistance;

/// @brief Field movementProbability, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementProbability, put=__cordl_internal_set_movementProbability)) float_t  movementProbability;

/// @brief Field moving, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_moving, put=__cordl_internal_set_moving)) bool  moving;

/// @brief Field start, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) ::UnityEngine::Vector3  start;

/// @brief Field tf, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tf, put=__cordl_internal_set_tf)) ::UnityW<::UnityEngine::Transform>  tf;

/// @brief Method AutoMove, addr 0x181560330, size 0x330, virtual false, abstract: false, final false
inline void AutoMove() ;

/// @brief Method Interrupted, addr 0x181560ad0, size 0x50, virtual false, abstract: false, final false
static inline bool Interrupted() ;

/// @brief Method ManualMove, addr 0x181560b20, size 0x160, virtual false, abstract: false, final false
inline void ManualMove() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::CCU::Player* New_ctor() ;

/// @brief Method OnStartLocalPlayer, addr 0x181560fc0, size 0xf0, virtual true, abstract: false, final false
inline void OnStartLocalPlayer() ;

/// @brief Method OnStopLocalPlayer, addr 0x1815613a0, size 0x40, virtual true, abstract: false, final false
inline void OnStopLocalPlayer() ;

/// @brief Method Update, addr 0x181561a30, size 0x1e0, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_autoMove() const;

constexpr bool& __cordl_internal_get_autoMove() ;

constexpr float_t const& __cordl_internal_get_autoSpeed() const;

constexpr float_t& __cordl_internal_get_autoSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cameraOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cameraOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_destination() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_destination() ;

constexpr float_t const& __cordl_internal_get_manualSpeed() const;

constexpr float_t& __cordl_internal_get_manualSpeed() ;

constexpr float_t const& __cordl_internal_get_movementDistance() const;

constexpr float_t& __cordl_internal_get_movementDistance() ;

constexpr float_t const& __cordl_internal_get_movementProbability() const;

constexpr float_t& __cordl_internal_get_movementProbability() ;

constexpr bool const& __cordl_internal_get_moving() const;

constexpr bool& __cordl_internal_get_moving() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_start() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_start() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tf() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tf() ;

constexpr void __cordl_internal_set_autoMove(bool  value) ;

constexpr void __cordl_internal_set_autoSpeed(float_t  value) ;

constexpr void __cordl_internal_set_cameraOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_destination(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_manualSpeed(float_t  value) ;

constexpr void __cordl_internal_set_movementDistance(float_t  value) ;

constexpr void __cordl_internal_set_movementProbability(float_t  value) ;

constexpr void __cordl_internal_set_moving(bool  value) ;

constexpr void __cordl_internal_set_start(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_tf(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x181561c70, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Player(Player && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player(Player const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19341};

/// @brief Field cameraOffset, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cameraOffset;

/// @brief Field autoMove, offset: 0x74, size: 0x1, def value: None
 bool  ___autoMove;

/// @brief Field autoSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___autoSpeed;

/// @brief Field movementProbability, offset: 0x7c, size: 0x4, def value: None
 float_t  ___movementProbability;

/// @brief Field movementDistance, offset: 0x80, size: 0x4, def value: None
 float_t  ___movementDistance;

/// @brief Field moving, offset: 0x84, size: 0x1, def value: None
 bool  ___moving;

/// @brief Field start, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___start;

/// @brief Field destination, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___destination;

/// @brief Field manualSpeed, offset: 0xa0, size: 0x4, def value: None
 float_t  ___manualSpeed;

/// @brief Field tf, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::CCU::Player, ___cameraOffset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::Player, ___autoMove) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::Player, ___autoSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::Player, ___movementProbability) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::Player, ___movementDistance) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::Player, ___moving) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::Player, ___start) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::Player, ___destination) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::Player, ___manualSpeed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::CCU::Player, ___tf) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::CCU::Player) == 0xb0, "Size mismatch!");

} // namespace end def Mirror::Examples::CCU
