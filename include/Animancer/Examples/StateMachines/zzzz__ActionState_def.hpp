#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/ActionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
CORDL_MODULE_EXPORT(ActionState)
namespace Animancer::Examples::StateMachines {
struct CharacterStatePriority;
}
namespace Animancer {
class ClipTransition;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class ActionState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::ActionState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::ActionState*, "Animancer.Examples.StateMachines", "ActionState");
// Dependencies Animancer.Examples.StateMachines.CharacterState
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.ActionState
class CORDL_TYPE ActionState : public ::Animancer::Examples::StateMachines::CharacterState {
public:
// Declarations
 __declspec(property(get=get_CanInterruptSelf)) bool  CanInterruptSelf;

 __declspec(property(get=get_Priority)) ::Animancer::Examples::StateMachines::CharacterStatePriority  Priority;

/// @brief Field _Animation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animation, put=__cordl_internal_set__Animation)) ::Animancer::ClipTransition*  _Animation;

/// @brief Method Awake, addr 0x1802f63e0, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::StateMachines::ActionState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802f6430, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Animation() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Animation() ;

constexpr void __cordl_internal_set__Animation(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanInterruptSelf, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_CanInterruptSelf() ;

/// @brief Method get_Priority, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline ::Animancer::Examples::StateMachines::CharacterStatePriority get_Priority() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActionState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActionState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActionState(ActionState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActionState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActionState(ActionState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19991};

/// @brief Field _Animation, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Animation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::ActionState, ____Animation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::ActionState) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
