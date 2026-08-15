#pragma once
// IWYU pragma private; include "Animancer/Examples/StateMachines/AttackState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/StateMachines/zzzz__CharacterState_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AttackState)
namespace Animancer::Examples::StateMachines {
struct CharacterStatePriority;
}
namespace Animancer::Examples::StateMachines {
class Weapon;
}
// Forward declare root types
namespace Animancer::Examples::StateMachines {
class AttackState;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::StateMachines::AttackState*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::StateMachines::AttackState*, "Animancer.Examples.StateMachines", "AttackState");
// Dependencies Animancer.Examples.StateMachines.CharacterState
namespace Animancer::Examples::StateMachines {
// Is value type: false
// CS Name: Animancer.Examples.StateMachines.AttackState
class CORDL_TYPE AttackState : public ::Animancer::Examples::StateMachines::CharacterState {
public:
// Declarations
 __declspec(property(get=get_CanEnterState)) bool  CanEnterState;

 __declspec(property(get=get_Priority)) ::Animancer::Examples::StateMachines::CharacterStatePriority  Priority;

 __declspec(property(get=get_Weapon)) ::UnityW<::Animancer::Examples::StateMachines::Weapon>  Weapon;

/// @brief Field _AttackIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__AttackIndex, put=__cordl_internal_set__AttackIndex)) int32_t  _AttackIndex;

static inline ::Animancer::Examples::StateMachines::AttackState* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802f6a90, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ShouldRestartCombo, addr 0x1802f6bb0, size 0x80, virtual false, abstract: false, final false
inline bool ShouldRestartCombo() ;

constexpr int32_t const& __cordl_internal_get__AttackIndex() const;

constexpr int32_t& __cordl_internal_get__AttackIndex() ;

constexpr void __cordl_internal_set__AttackIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802f6c30, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanEnterState, addr 0x1802f6c60, size 0x70, virtual true, abstract: false, final false
inline bool get_CanEnterState() ;

/// @brief Method get_Priority, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final false
inline ::Animancer::Examples::StateMachines::CharacterStatePriority get_Priority() ;

/// @brief Method get_Weapon, addr 0x1802f6d80, size 0x30, virtual false, abstract: false, final false
inline ::UnityW<::Animancer::Examples::StateMachines::Weapon> get_Weapon() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AttackState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AttackState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AttackState(AttackState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AttackState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AttackState(AttackState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20004};

/// @brief Field _AttackIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ____AttackIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::StateMachines::AttackState, ____AttackIndex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::StateMachines::AttackState) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::StateMachines
