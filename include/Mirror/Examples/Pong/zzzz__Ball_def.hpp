#pragma once
// IWYU pragma private; include "Mirror/Examples/Pong/Ball.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Ball)
namespace UnityEngine {
class Collision2D;
}
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Mirror::Examples::Pong {
class Ball;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Pong::Ball*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Pong::Ball*, "Mirror.Examples.Pong", "Ball");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::Pong {
// Is value type: false
// CS Name: Mirror.Examples.Pong.Ball
class CORDL_TYPE Ball : public ::Mirror::NetworkBehaviour {
public:
// Declarations
/// @brief Field rigidbody2d, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbody2d, put=__cordl_internal_set_rigidbody2d)) ::UnityW<::UnityEngine::Rigidbody2D>  rigidbody2d;

/// @brief Field speed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Method HitFactor, addr 0x181553640, size 0x30, virtual false, abstract: false, final false
inline float_t HitFactor(::UnityEngine::Vector2  ballPos, ::UnityEngine::Vector2  racketPos, float_t  racketHeight) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::Pong::Ball* New_ctor() ;

/// @brief Method OnCollisionEnter2D, addr 0x181553670, size 0x1d0, virtual false, abstract: false, final false
inline void OnCollisionEnter2D(::UnityEngine::Collision2D*  col) ;

/// @brief Method OnStartServer, addr 0x181553840, size 0x60, virtual true, abstract: false, final false
inline void OnStartServer() ;

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
constexpr Ball() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ball", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Ball(Ball && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ball", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ball(Ball const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19290};

/// @brief Field speed, offset: 0x68, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field rigidbody2d, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ___rigidbody2d;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Pong::Ball, ___speed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Pong::Ball, ___rigidbody2d) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Pong::Ball) == 0x78, "Size mismatch!");

} // namespace end def Mirror::Examples::Pong
