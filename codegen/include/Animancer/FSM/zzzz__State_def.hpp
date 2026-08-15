#pragma once
// IWYU pragma private; include "Animancer/FSM/State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(State)
namespace Animancer::FSM {
class IState;
}
// Forward declare root types
namespace Animancer::FSM {
class State;
}
// Write type traits
MARK_REF_T(::Animancer::FSM::State*);
DEFINE_IL2CPP_CLASS(::Animancer::FSM::State*, "Animancer.FSM", "State");
// Dependencies System.Object
namespace Animancer::FSM {
// Is value type: false
// CS Name: Animancer.FSM.State
class CORDL_TYPE State : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CanEnterState)) bool  CanEnterState;

 __declspec(property(get=get_CanExitState)) bool  CanExitState;

/// @brief Convert operator to "::Animancer::FSM::IState"
constexpr operator  ::Animancer::FSM::IState*() noexcept;

static inline ::Animancer::FSM::State* New_ctor() ;

/// @brief Method OnEnterState, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnEnterState() ;

/// @brief Method OnExitState, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnExitState() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanEnterState, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_CanEnterState() ;

/// @brief Method get_CanExitState, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_CanExitState() ;

/// @brief Convert to "::Animancer::FSM::IState"
constexpr ::Animancer::FSM::IState* i___Animancer__FSM__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr State() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "State", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
State(State && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "State", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
State(State const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21341};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::FSM::State) == 0x10, "Size mismatch!");

} // namespace end def Animancer::FSM
