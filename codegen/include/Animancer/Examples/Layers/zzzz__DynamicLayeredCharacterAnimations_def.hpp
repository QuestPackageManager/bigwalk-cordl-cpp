#pragma once
// IWYU pragma private; include "Animancer/Examples/Layers/DynamicLayeredCharacterAnimations.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DynamicLayeredCharacterAnimations)
namespace Animancer::Examples::Layers {
class LayeredAnimationManager;
}
namespace Animancer {
class ClipTransition;
}
// Forward declare root types
namespace Animancer::Examples::Layers {
class DynamicLayeredCharacterAnimations;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations*, "Animancer.Examples.Layers", "DynamicLayeredCharacterAnimations");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Layers {
// Is value type: false
// CS Name: Animancer.Examples.Layers.DynamicLayeredCharacterAnimations
class CORDL_TYPE DynamicLayeredCharacterAnimations : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Action, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Action, put=__cordl_internal_set__Action)) ::Animancer::ClipTransition*  _Action;

/// @brief Field _AnimationManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__AnimationManager, put=__cordl_internal_set__AnimationManager)) ::UnityW<::Animancer::Examples::Layers::LayeredAnimationManager>  _AnimationManager;

/// @brief Field _Idle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Idle, put=__cordl_internal_set__Idle)) ::Animancer::ClipTransition*  _Idle;

/// @brief Field _Move, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Move, put=__cordl_internal_set__Move)) ::Animancer::ClipTransition*  _Move;

/// @brief Method Awake, addr 0x1802fa6e0, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations* New_ctor() ;

/// @brief Method Update, addr 0x1802fa8e0, size 0x170, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAction, addr 0x1802fa760, size 0xf0, virtual false, abstract: false, final false
inline void UpdateAction() ;

/// @brief Method UpdateMovement, addr 0x1802fa850, size 0x90, virtual false, abstract: false, final false
inline void UpdateMovement() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Action() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Action() ;

constexpr ::UnityW<::Animancer::Examples::Layers::LayeredAnimationManager> const& __cordl_internal_get__AnimationManager() const;

constexpr ::UnityW<::Animancer::Examples::Layers::LayeredAnimationManager>& __cordl_internal_get__AnimationManager() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Idle() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Idle() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Move() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Move() ;

constexpr void __cordl_internal_set__Action(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__AnimationManager(::UnityW<::Animancer::Examples::Layers::LayeredAnimationManager>  value) ;

constexpr void __cordl_internal_set__Idle(::Animancer::ClipTransition*  value) ;

constexpr void __cordl_internal_set__Move(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicLayeredCharacterAnimations() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicLayeredCharacterAnimations", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicLayeredCharacterAnimations(DynamicLayeredCharacterAnimations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicLayeredCharacterAnimations", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicLayeredCharacterAnimations(DynamicLayeredCharacterAnimations const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19989};

/// @brief Field _AnimationManager, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::Layers::LayeredAnimationManager>  ____AnimationManager;

/// @brief Field _Idle, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Idle;

/// @brief Field _Move, offset: 0x30, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Move;

/// @brief Field _Action, offset: 0x38, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations, ____AnimationManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations, ____Idle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations, ____Move) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations, ____Action) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Layers::DynamicLayeredCharacterAnimations) == 0x40, "Size mismatch!");

} // namespace end def Animancer::Examples::Layers
