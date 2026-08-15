#pragma once
// IWYU pragma private; include "Animancer/FSM/IStateMachine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IStateMachine)
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer::FSM {
class IStateMachine;
}
// Write type traits
MARK_REF_T(::Animancer::FSM::IStateMachine*);
DEFINE_IL2CPP_CLASS(::Animancer::FSM::IStateMachine*, "Animancer.FSM", "IStateMachine");
// Dependencies 
namespace Animancer::FSM {
// Is value type: false
// CS Name: Animancer.FSM.IStateMachine
class CORDL_TYPE IStateMachine {
public:
// Declarations
 __declspec(property(get=get_CurrentState)) ::System::Object*  CurrentState;

 __declspec(property(get=get_NextState)) ::System::Object*  NextState;

 __declspec(property(get=get_PreviousState)) ::System::Object*  PreviousState;

/// @brief Method CanSetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* CanSetState(::System::Collections::IList*  states) ;

/// @brief Method CanSetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool CanSetState(::System::Object*  state) ;

/// @brief Method ForceSetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ForceSetState(::System::Object*  state) ;

/// @brief Method SetAllowNullStates, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetAllowNullStates(bool  allow) ;

/// @brief Method TryResetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryResetState(::System::Object*  state) ;

/// @brief Method TryResetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryResetState(::System::Collections::IList*  states) ;

/// @brief Method TrySetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TrySetState(::System::Object*  state) ;

/// @brief Method TrySetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TrySetState(::System::Collections::IList*  states) ;

/// @brief Method get_CurrentState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* get_CurrentState() ;

/// @brief Method get_NextState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* get_NextState() ;

/// @brief Method get_PreviousState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* get_PreviousState() ;

// Ctor Parameters [CppParam { name: "", ty: "IStateMachine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IStateMachine(IStateMachine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21353};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
