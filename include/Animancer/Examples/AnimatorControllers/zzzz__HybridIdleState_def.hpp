#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/HybridIdleState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
CORDL_MODULE_EXPORT(HybridIdleState)
namespace Animancer {
class HybridAnimancerComponent;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers {
class HybridIdleState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::HybridIdleState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::HybridIdleState*, "Animancer.Examples.AnimatorControllers", "HybridIdleState");
// Dependencies Animancer.Examples.StateMachines.CharacterState
namespace Animancer::Examples::AnimatorControllers {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.HybridIdleState
class CORDL_TYPE HybridIdleState : public ::Animancer::Examples::StateMachines::CharacterState {
public:
// Declarations
 __declspec(property(get=get_HybridAnimancer)) ::UnityW<::Animancer::HybridAnimancerComponent>  HybridAnimancer;

static inline ::Animancer::Examples::AnimatorControllers::HybridIdleState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802fc670, size 0x100, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HybridAnimancer, addr 0x1802fc770, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::HybridAnimancerComponent> get_HybridAnimancer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HybridIdleState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HybridIdleState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HybridIdleState(HybridIdleState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HybridIdleState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HybridIdleState(HybridIdleState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19964};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Examples::AnimatorControllers::HybridIdleState) == 0x28, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers
