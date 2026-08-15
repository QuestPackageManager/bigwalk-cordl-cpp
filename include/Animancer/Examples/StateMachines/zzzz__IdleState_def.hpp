#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/IdleState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
CORDL_MODULE_EXPORT(IdleState)
namespace Animancer {
class ClipTransition;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class IdleState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::IdleState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::IdleState*, "Animancer.Examples.StateMachines", "IdleState");
// Dependencies Animancer.Examples.StateMachines.CharacterState
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.IdleState
class CORDL_TYPE IdleState : public ::Animancer::Examples::StateMachines::CharacterState {
public:
// Declarations
/// @brief Field _Animation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animation, put=__cordl_internal_set__Animation)) ::Animancer::ClipTransition*  _Animation;

static inline ::Animancer::Examples::StateMachines::IdleState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802f6430, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Animation() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Animation() ;

constexpr void __cordl_internal_set__Animation(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19997};

/// @brief Field _Animation, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Animation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::IdleState, ____Animation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::IdleState) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
