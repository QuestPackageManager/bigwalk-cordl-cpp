#pragma once
// IWYU pragma private; include "Mirror/Examples/Pong/Player.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Player)
namespace UnityEngine {
class Rigidbody2D;
}
// Forward declare root types
namespace Mirror::Examples::Pong {
class Player;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Pong::Player*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Pong::Player*, "Mirror.Examples.Pong", "Player");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::Pong {
// Is value type: false
// CS Name: Mirror.Examples.Pong.Player
class CORDL_TYPE Player : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field rigidbody2d, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbody2d, put=__cordl_internal_set_rigidbody2d)) ::UnityW<::UnityEngine::Rigidbody2D>  rigidbody2d;

/// @brief Field speed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Method FixedUpdate, addr 0x181560a40, size 0x90, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::Pong::Player* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_rigidbody2d() const;

constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_rigidbody2d() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr void __cordl_internal_set_rigidbody2d(::UnityW<::UnityEngine::Rigidbody2D>  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

/// @brief Method .ctor, addr 0x1815538a0, size 0x10, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19293};

/// @brief Field speed, offset: 0x68, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field rigidbody2d, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ___rigidbody2d;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Pong::Player, ___speed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Pong::Player, ___rigidbody2d) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Pong::Player) == 0x78, "Size mismatch!");

} // namespace end def Mirror::Examples::Pong
