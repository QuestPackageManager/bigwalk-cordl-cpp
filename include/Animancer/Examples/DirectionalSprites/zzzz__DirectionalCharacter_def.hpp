#pragma once
// IWYU pragma private; include "Animancer/Examples/DirectionalSprites/DirectionalCharacter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ContactPoint2D_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DirectionalCharacter)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class DirectionalAnimationSet;
}
namespace Animancer {
class TimeSynchronizationGroup;
}
namespace UnityEngine {
class CapsuleCollider2D;
}
namespace UnityEngine {
class Rigidbody2D;
}
// Forward declare root types
namespace Animancer::Examples::DirectionalSprites {
class DirectionalCharacter;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::DirectionalSprites::DirectionalCharacter*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::DirectionalSprites::DirectionalCharacter*, "Animancer.Examples.DirectionalSprites", "DirectionalCharacter");
// Dependencies UnityEngine.ContactPoint2D, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Animancer::Examples::DirectionalSprites {
// Is value type: false
// CS Name: Animancer.Examples.DirectionalSprites.DirectionalCharacter
class CORDL_TYPE DirectionalCharacter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Contacts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Contacts, put=setStaticF_Contacts)) ::ArrayW<::UnityEngine::ContactPoint2D>  Contacts;

/// @brief Field _Animancer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Collider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Collider, put=__cordl_internal_set__Collider)) ::UnityW<::UnityEngine::CapsuleCollider2D>  _Collider;

/// @brief Field _CurrentAnimationSet, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentAnimationSet, put=__cordl_internal_set__CurrentAnimationSet)) ::UnityW<::Animancer::DirectionalAnimationSet>  _CurrentAnimationSet;

/// @brief Field _Facing, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Facing, put=__cordl_internal_set__Facing)) ::UnityEngine::Vector2  _Facing;

/// @brief Field _Idle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Idle, put=__cordl_internal_set__Idle)) ::UnityW<::Animancer::DirectionalAnimationSet>  _Idle;

/// @brief Field _Movement, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Movement, put=__cordl_internal_set__Movement)) ::UnityEngine::Vector2  _Movement;

/// @brief Field _MovementSynchronization, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__MovementSynchronization, put=__cordl_internal_set__MovementSynchronization)) ::Animancer::TimeSynchronizationGroup*  _MovementSynchronization;

/// @brief Field _Push, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__Push, put=__cordl_internal_set__Push)) ::UnityW<::Animancer::DirectionalAnimationSet>  _Push;

/// @brief Field _Rigidbody, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Rigidbody, put=__cordl_internal_set__Rigidbody)) ::UnityW<::UnityEngine::Rigidbody2D>  _Rigidbody;

/// @brief Field _Run, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Run, put=__cordl_internal_set__Run)) ::UnityW<::Animancer::DirectionalAnimationSet>  _Run;

/// @brief Field _RunSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__RunSpeed, put=__cordl_internal_set__RunSpeed)) float_t  _RunSpeed;

/// @brief Field _Walk, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Walk, put=__cordl_internal_set__Walk)) ::UnityW<::Animancer::DirectionalAnimationSet>  _Walk;

/// @brief Field _WalkSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__WalkSpeed, put=__cordl_internal_set__WalkSpeed)) float_t  _WalkSpeed;

/// @brief Method Awake, addr 0x1802f9ff0, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x1802fa080, size 0x60, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Animancer::Examples::DirectionalSprites::DirectionalCharacter* New_ctor() ;

/// @brief Method Play, addr 0x1802fa0e0, size 0xb0, virtual false, abstract: false, final false
inline void Play(::Animancer::DirectionalAnimationSet*  animations) ;

/// @brief Method Update, addr 0x1802fa370, size 0x160, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateMovementState, addr 0x1802fa190, size 0x1e0, virtual false, abstract: false, final false
inline void UpdateMovementState() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider2D> const& __cordl_internal_get__Collider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider2D>& __cordl_internal_get__Collider() ;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& __cordl_internal_get__CurrentAnimationSet() const;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& __cordl_internal_get__CurrentAnimationSet() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__Facing() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__Facing() ;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& __cordl_internal_get__Idle() const;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& __cordl_internal_get__Idle() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__Movement() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__Movement() ;

constexpr ::Animancer::TimeSynchronizationGroup* const& __cordl_internal_get__MovementSynchronization() const;

constexpr ::Animancer::TimeSynchronizationGroup*& __cordl_internal_get__MovementSynchronization() ;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& __cordl_internal_get__Push() const;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& __cordl_internal_get__Push() ;

constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get__Rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get__Rigidbody() ;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& __cordl_internal_get__Run() const;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& __cordl_internal_get__Run() ;

constexpr float_t const& __cordl_internal_get__RunSpeed() const;

constexpr float_t& __cordl_internal_get__RunSpeed() ;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& __cordl_internal_get__Walk() const;

constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& __cordl_internal_get__Walk() ;

constexpr float_t const& __cordl_internal_get__WalkSpeed() const;

constexpr float_t& __cordl_internal_get__WalkSpeed() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Collider(::UnityW<::UnityEngine::CapsuleCollider2D>  value) ;

constexpr void __cordl_internal_set__CurrentAnimationSet(::UnityW<::Animancer::DirectionalAnimationSet>  value) ;

constexpr void __cordl_internal_set__Facing(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__Idle(::UnityW<::Animancer::DirectionalAnimationSet>  value) ;

constexpr void __cordl_internal_set__Movement(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__MovementSynchronization(::Animancer::TimeSynchronizationGroup*  value) ;

constexpr void __cordl_internal_set__Push(::UnityW<::Animancer::DirectionalAnimationSet>  value) ;

constexpr void __cordl_internal_set__Rigidbody(::UnityW<::UnityEngine::Rigidbody2D>  value) ;

constexpr void __cordl_internal_set__Run(::UnityW<::Animancer::DirectionalAnimationSet>  value) ;

constexpr void __cordl_internal_set__RunSpeed(float_t  value) ;

constexpr void __cordl_internal_set__Walk(::UnityW<::Animancer::DirectionalAnimationSet>  value) ;

constexpr void __cordl_internal_set__WalkSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x1802fa520, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::ContactPoint2D> getStaticF_Contacts() ;

static inline void setStaticF_Contacts(::ArrayW<::UnityEngine::ContactPoint2D>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DirectionalCharacter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DirectionalCharacter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalCharacter(DirectionalCharacter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalCharacter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalCharacter(DirectionalCharacter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20015};

/// @brief Field _Collider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider2D>  ____Collider;

/// @brief Field _Rigidbody, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody2D>  ____Rigidbody;

/// @brief Field _WalkSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ____WalkSpeed;

/// @brief Field _RunSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ____RunSpeed;

/// @brief Field _Animancer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Idle, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Animancer::DirectionalAnimationSet>  ____Idle;

/// @brief Field _Walk, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Animancer::DirectionalAnimationSet>  ____Walk;

/// @brief Field _Run, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Animancer::DirectionalAnimationSet>  ____Run;

/// @brief Field _Push, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Animancer::DirectionalAnimationSet>  ____Push;

/// @brief Field _Facing, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____Facing;

/// @brief Field _Movement, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____Movement;

/// @brief Field _CurrentAnimationSet, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Animancer::DirectionalAnimationSet>  ____CurrentAnimationSet;

/// @brief Field _MovementSynchronization, offset: 0x78, size: 0x8, def value: None
 ::Animancer::TimeSynchronizationGroup*  ____MovementSynchronization;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____Collider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____Rigidbody) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____WalkSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____RunSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____Animancer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____Idle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____Walk) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____Run) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____Push) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____Facing) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____Movement) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____CurrentAnimationSet) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter, ____MovementSynchronization) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::DirectionalSprites::DirectionalCharacter) == 0x80, "Size mismatch!");

} // namespace end def Animancer::Examples::DirectionalSprites
