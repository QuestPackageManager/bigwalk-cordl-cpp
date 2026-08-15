#pragma once
// IWYU pragma private; include "Animancer/FSM/IState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IState)
// Forward declare root types
namespace Animancer::FSM {
class IState;
}
// Write type traits
MARK_REF_T(::Animancer::FSM::IState*);
DEFINE_IL2CPP_CLASS(::Animancer::FSM::IState*, "Animancer.FSM", "IState");
// Dependencies 
namespace Animancer::FSM {
// Is value type: false
// CS Name: Animancer.FSM.IState
class CORDL_TYPE IState {
public:
// Declarations
 __declspec(property(get=get_CanEnterState)) bool  CanEnterState;

 __declspec(property(get=get_CanExitState)) bool  CanExitState;

/// @brief Method OnEnterState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnterState() ;

/// @brief Method OnExitState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnExitState() ;

/// @brief Method get_CanEnterState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_CanEnterState() ;

/// @brief Method get_CanExitState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_CanExitState() ;

// Ctor Parameters [CppParam { name: "", ty: "IState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IState(IState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
