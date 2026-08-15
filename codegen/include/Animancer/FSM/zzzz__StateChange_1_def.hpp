#pragma once
// IWYU pragma private; include "Animancer/FSM/StateChange_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StateChange_1)
namespace Animancer::FSM {
template<typename TState>
class StateMachine_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Animancer::FSM {
template<typename TState>
struct StateChange_1;
}
// Write type traits
MARK_GEN_VAL_T(::Animancer::FSM::StateChange_1);
DEFINE_IL2CPP_GEN_CLASS(::Animancer::FSM::StateChange_1, "Animancer.FSM", "StateChange`1");
// Dependencies 
namespace Animancer::FSM {
// cpp template
template<typename TState>
// Is value type: true
// CS Name: Animancer.FSM.StateChange`1<TState>
struct CORDL_TYPE StateChange_1 {
public:
// Declarations
/// @brief Field _Current, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF__Current, put=setStaticF__Current)) ::Animancer::FSM::StateChange_1<TState>  _Current;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method CurrentToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::StringW CurrentToString() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Animancer::FSM::StateMachine_1<TState>*  stateMachine, TState  previousState, TState  nextState) ;

static inline ::Animancer::FSM::StateChange_1<TState> getStaticF__Current() ;

/// @brief Method get_IsActive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool get_IsActive() ;

/// @brief Method get_NextState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TState get_NextState() ;

/// @brief Method get_PreviousState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TState get_PreviousState() ;

/// @brief Method get_StateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Animancer::FSM::StateMachine_1<TState>* get_StateMachine() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF__Current(::Animancer::FSM::StateChange_1<TState>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr StateChange_1() ;

// Ctor Parameters [CppParam { name: "_StateMachine", ty: "::Animancer::FSM::StateMachine_1<TState>*", modifiers: "", def_value: None }, CppParam { name: "_PreviousState", ty: "TState", modifiers: "", def_value: None }, CppParam { name: "_NextState", ty: "TState", modifiers: "", def_value: None }]
constexpr StateChange_1(::Animancer::FSM::StateMachine_1<TState>*  _StateMachine, TState  _PreviousState, TState  _NextState) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _StateMachine, offset: 0x0, size: 0x8, def value: None
 ::Animancer::FSM::StateMachine_1<TState>*  _StateMachine;

/// @brief Field _PreviousState, offset: 0x8, size: 0x8, def value: None
 TState  _PreviousState;

/// @brief Field _NextState, offset: 0x10, size: 0x8, def value: None
 TState  _NextState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Animancer::FSM
