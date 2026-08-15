#pragma once
// IWYU pragma private; include "Animancer/FSM/IOwnedState_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOwnedState_1)
namespace Animancer::FSM {
class IState;
}
namespace Animancer::FSM {
template<typename TState>
class StateMachine_1;
}
// Forward declare root types
namespace Animancer::FSM {
template<typename TState>
class IOwnedState_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::FSM::IOwnedState_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::FSM::IOwnedState_1, "Animancer.FSM", "IOwnedState`1");
// Dependencies 
namespace Animancer::FSM {
// cpp template
template<typename TState>
// Is value type: false
// CS Name: Animancer.FSM.IOwnedState`1<TState>
class CORDL_TYPE IOwnedState_1 {
public:
// Declarations
 __declspec(property(get=get_OwnerStateMachine)) ::Animancer::FSM::StateMachine_1<TState>*  OwnerStateMachine;

/// @brief Convert operator to "::Animancer::FSM::IState"
constexpr operator  ::Animancer::FSM::IState*() noexcept;

/// @brief Method get_OwnerStateMachine, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Animancer::FSM::StateMachine_1<TState>* get_OwnerStateMachine() ;

/// @brief Convert to "::Animancer::FSM::IState"
constexpr ::Animancer::FSM::IState* i___Animancer__FSM__IState() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IOwnedState_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOwnedState_1(IOwnedState_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21340};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
