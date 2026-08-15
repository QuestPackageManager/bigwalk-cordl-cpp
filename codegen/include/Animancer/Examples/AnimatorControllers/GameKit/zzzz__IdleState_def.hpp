#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/IdleState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/AnimatorControllers/GameKit/zzzz__CharacterState_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IdleState)
namespace Animancer {
class ClipTransition;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class IdleState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::IdleState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::IdleState*, "Animancer.Examples.AnimatorControllers.GameKit", "IdleState");
// Dependencies Animancer.ClipTransition, Animancer.Examples.AnimatorControllers.GameKit.CharacterState
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.IdleState
class CORDL_TYPE IdleState : public ::Animancer::Examples::AnimatorControllers::GameKit::CharacterState {
public:
// Declarations
 __declspec(property(get=get_CanEnterState)) bool  CanEnterState;

/// @brief Field _FirstRandomizeDelay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__FirstRandomizeDelay, put=__cordl_internal_set__FirstRandomizeDelay)) float_t  _FirstRandomizeDelay;

/// @brief Field _MainAnimation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__MainAnimation, put=__cordl_internal_set__MainAnimation)) ::Animancer::ClipTransition*  _MainAnimation;

/// @brief Field _MaxRandomizeInterval, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxRandomizeInterval, put=__cordl_internal_set__MaxRandomizeInterval)) float_t  _MaxRandomizeInterval;

/// @brief Field _MinRandomizeInterval, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinRandomizeInterval, put=__cordl_internal_set__MinRandomizeInterval)) float_t  _MinRandomizeInterval;

/// @brief Field _RandomAnimations, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__RandomAnimations, put=__cordl_internal_set__RandomAnimations)) ::ArrayW<::Animancer::ClipTransition*>  _RandomAnimations;

/// @brief Field _RandomizeTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__RandomizeTime, put=__cordl_internal_set__RandomizeTime)) float_t  _RandomizeTime;

/// @brief Method Awake, addr 0x1802fd340, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x1802fd400, size 0x120, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::IdleState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802fd520, size 0x60, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayMainAnimation, addr 0x1802fd580, size 0x50, virtual false, abstract: false, final false
inline void PlayMainAnimation() ;

/// @brief Method PlayRandomAnimation, addr 0x1802fd5d0, size 0x70, virtual false, abstract: false, final false
inline void PlayRandomAnimation() ;

constexpr float_t const& __cordl_internal_get__FirstRandomizeDelay() const;

constexpr float_t& __cordl_internal_get__FirstRandomizeDelay() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__MainAnimation() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__MainAnimation() ;

constexpr float_t const& __cordl_internal_get__MaxRandomizeInterval() const;

constexpr float_t& __cordl_internal_get__MaxRandomizeInterval() ;

constexpr float_t const& __cordl_internal_get__MinRandomizeInterval() const;

constexpr float_t& __cordl_internal_get__MinRandomizeInterval() ;

constexpr ::ArrayW<::Animancer::ClipTransition*> const& __cordl_internal_get__RandomAnimations() const;

constexpr ::ArrayW<::Animancer::ClipTransition*>& __cordl_internal_get__RandomAnimations() ;

constexpr float_t const& __cordl_internal_get__RandomizeTime() const;

constexpr float_t& __cordl_internal_get__RandomizeTime() ;

constexpr void __cordl_internal_set__FirstRandomizeDelay(float_t  value) ;

constexpr void __cordl_internal_set__MainAnimation(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__MaxRandomizeInterval(float_t  value) ;

constexpr void __cordl_internal_set__MinRandomizeInterval(float_t  value) ;

constexpr void __cordl_internal_set__RandomAnimations(::ArrayW<::Animancer::ClipTransition*>  value) ;

constexpr void __cordl_internal_set__RandomizeTime(float_t  value) ;

/// @brief Method .ctor, addr 0x1802fd640, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanEnterState, addr 0x1802f6cd0, size 0x30, virtual true, abstract: false, final false
inline bool get_CanEnterState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IdleState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IdleState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IdleState(IdleState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IdleState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IdleState(IdleState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19977};

/// @brief Field _MainAnimation, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____MainAnimation;

/// @brief Field _FirstRandomizeDelay, offset: 0x30, size: 0x4, def value: None
 float_t  ____FirstRandomizeDelay;

/// @brief Field _MinRandomizeInterval, offset: 0x34, size: 0x4, def value: None
 float_t  ____MinRandomizeInterval;

/// @brief Field _MaxRandomizeInterval, offset: 0x38, size: 0x4, def value: None
 float_t  ____MaxRandomizeInterval;

/// @brief Field _RandomAnimations, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Animancer::ClipTransition*>  ____RandomAnimations;

/// @brief Field _RandomizeTime, offset: 0x48, size: 0x4, def value: None
 float_t  ____RandomizeTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::IdleState, ____MainAnimation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::IdleState, ____FirstRandomizeDelay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::IdleState, ____MinRandomizeInterval) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::IdleState, ____MaxRandomizeInterval) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::IdleState, ____RandomAnimations) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::IdleState, ____RandomizeTime) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::IdleState) == 0x50, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
