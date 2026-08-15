#pragma once
// IWYU pragma private; include "Animancer/Examples/Events/Golfer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Golfer)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class ClipTransition;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Animancer::Examples::Events {
class Golfer;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Events::Golfer*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Events::Golfer*, "Animancer.Examples.Events", "Golfer");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Animancer::Examples::Events {
// Is value type: false
// CS Name: Animancer.Examples.Events.Golfer
class CORDL_TYPE Golfer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Ball, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Ball, put=__cordl_internal_set__Ball)) ::UnityW<::UnityEngine::Rigidbody>  _Ball;

/// @brief Field _BallReturnHeight, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__BallReturnHeight, put=__cordl_internal_set__BallReturnHeight)) float_t  _BallReturnHeight;

/// @brief Field _BallStartPosition, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__BallStartPosition, put=__cordl_internal_set__BallStartPosition)) ::UnityEngine::Vector3  _BallStartPosition;

/// @brief Field _HitVelocity, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__HitVelocity, put=__cordl_internal_set__HitVelocity)) ::UnityEngine::Vector3  _HitVelocity;

/// @brief Field _Ready, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Ready, put=__cordl_internal_set__Ready)) ::Animancer::ClipTransition*  _Ready;

/// @brief Field _Swing, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Swing, put=__cordl_internal_set__Swing)) ::Animancer::ClipTransition*  _Swing;

/// @brief Method Awake, addr 0x1802fbfd0, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EndSwing, addr 0x1802fc0f0, size 0x40, virtual false, abstract: false, final false
inline void EndSwing() ;

/// @brief Method HitBall, addr 0x1802fc130, size 0x50, virtual false, abstract: false, final false
inline void HitBall() ;

static inline ::Animancer::Examples::Events::Golfer* New_ctor() ;

/// @brief Method ResetBall, addr 0x1802fc180, size 0x50, virtual false, abstract: false, final false
inline void ResetBall() ;

/// @brief Method Update, addr 0x1802fc1d0, size 0xc0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__Ball() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__Ball() ;

constexpr float_t const& __cordl_internal_get__BallReturnHeight() const;

constexpr float_t& __cordl_internal_get__BallReturnHeight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__BallStartPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__BallStartPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__HitVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__HitVelocity() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Ready() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Ready() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Swing() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Swing() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Ball(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__BallReturnHeight(float_t  value) ;

constexpr void __cordl_internal_set__BallStartPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__HitVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__Ready(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__Swing(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802fc290, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Golfer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Golfer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Golfer(Golfer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Golfer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Golfer(Golfer const& ) = delete;

/// @brief Field HitEventName offset 0xffffffff size 0x8
static constexpr ::ConstString  HitEventName{u"Hit"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20011};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Ready, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Ready;

/// @brief Field _Swing, offset: 0x30, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Swing;

/// @brief Field _Ball, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____Ball;

/// @brief Field _HitVelocity, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____HitVelocity;

/// @brief Field _BallReturnHeight, offset: 0x4c, size: 0x4, def value: None
 float_t  ____BallReturnHeight;

/// @brief Field _BallStartPosition, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____BallStartPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Events::Golfer, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Events::Golfer, ____Ready) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Events::Golfer, ____Swing) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Events::Golfer, ____Ball) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Events::Golfer, ____HitVelocity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Events::Golfer, ____BallReturnHeight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Events::Golfer, ____BallStartPosition) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Events::Golfer) == 0x60, "Size mismatch!");

} // namespace end def Animancer::Examples::Events
