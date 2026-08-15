#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/FlinchState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
CORDL_MODULE_EXPORT(FlinchState)
namespace Animancer::Examples::StateMachines {
struct CharacterStatePriority;
}
namespace Animancer {
class ClipTransition;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class FlinchState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::FlinchState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::FlinchState*, "Animancer.Examples.StateMachines", "FlinchState");
// Dependencies Animancer.Examples.StateMachines.CharacterState
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.FlinchState
class CORDL_TYPE FlinchState : public ::Animancer::Examples::StateMachines::CharacterState {
public:
// Declarations
 __declspec(property(get=get_CanInterruptSelf)) bool  CanInterruptSelf;

 __declspec(property(get=get_Priority)) ::Animancer::Examples::StateMachines::CharacterStatePriority  Priority;

/// @brief Field _Animation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animation, put=__cordl_internal_set__Animation)) ::Animancer::ClipTransition*  _Animation;

/// @brief Method Awake, addr 0x1802fb480, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::StateMachines::FlinchState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802f6430, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method <Awake>b__1_0, addr 0x1802fb9c0, size 0x30, virtual false, abstract: false, final false
inline void _Awake_b__1_0() ;

constexpr ::Animancer::ClipTransition* const& __cordl_internal_get__Animation() const;

constexpr ::Animancer::ClipTransition*& __cordl_internal_get__Animation() ;

constexpr void __cordl_internal_set__Animation(::Animancer::ClipTransition*  value) ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanInterruptSelf, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_CanInterruptSelf() ;

/// @brief Method get_Priority, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final false
inline ::Animancer::Examples::StateMachines::CharacterStatePriority get_Priority() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlinchState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlinchState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlinchState(FlinchState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlinchState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlinchState(FlinchState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19998};

/// @brief Field _Animation, offset: 0x28, size: 0x8, def value: None
 ::Animancer::ClipTransition*  ____Animation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::FlinchState, ____Animation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::FlinchState) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
