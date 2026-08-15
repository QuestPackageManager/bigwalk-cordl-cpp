#pragma once
// IWYU pragma private; include "Animancer/FSM/DelegateState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DelegateState)
namespace Animancer::FSM {
class IState;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Animancer::FSM {
class DelegateState;
}
// Write type traits
MARK_REF_T(::Animancer::FSM::DelegateState*);
DEFINE_IL2CPP_CLASS(::Animancer::FSM::DelegateState*, "Animancer.FSM", "DelegateState");
// Dependencies System.Object
namespace Animancer::FSM {
// Is value type: false
// CS Name: Animancer.FSM.DelegateState
class CORDL_TYPE DelegateState : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CanEnterState)) bool  CanEnterState;

 __declspec(property(get=get_CanExitState)) bool  CanExitState;

/// @brief Field canEnter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_canEnter, put=__cordl_internal_set_canEnter)) ::System::Func_1<bool>*  canEnter;

/// @brief Field canExit, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_canExit, put=__cordl_internal_set_canExit)) ::System::Func_1<bool>*  canExit;

/// @brief Field onEnter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onEnter, put=__cordl_internal_set_onEnter)) ::System::Action*  onEnter;

/// @brief Field onExit, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onExit, put=__cordl_internal_set_onExit)) ::System::Action*  onExit;

/// @brief Convert operator to "::Animancer::FSM::IState"
constexpr operator  ::Animancer::FSM::IState*() noexcept;

static inline ::Animancer::FSM::DelegateState* New_ctor() ;

/// @brief Method OnEnterState, addr 0x1802fc2c0, size 0x20, virtual true, abstract: false, final false
inline void OnEnterState() ;

/// @brief Method OnExitState, addr 0x180303870, size 0x20, virtual true, abstract: false, final false
inline void OnExitState() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_canEnter() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_canEnter() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_canExit() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_canExit() ;

constexpr ::System::Action* const& __cordl_internal_get_onEnter() const;

constexpr ::System::Action*& __cordl_internal_get_onEnter() ;

constexpr ::System::Action* const& __cordl_internal_get_onExit() const;

constexpr ::System::Action*& __cordl_internal_get_onExit() ;

constexpr void __cordl_internal_set_canEnter(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set_canExit(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set_onEnter(::System::Action*  value) ;

constexpr void __cordl_internal_set_onExit(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanEnterState, addr 0x180303890, size 0x20, virtual true, abstract: false, final false
inline bool get_CanEnterState() ;

/// @brief Method get_CanExitState, addr 0x1803038b0, size 0x20, virtual true, abstract: false, final false
inline bool get_CanExitState() ;

/// @brief Convert to "::Animancer::FSM::IState"
constexpr ::Animancer::FSM::IState* i___Animancer__FSM__IState() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelegateState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelegateState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DelegateState(DelegateState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelegateState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelegateState(DelegateState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21338};

/// @brief Field canEnter, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___canEnter;

/// @brief Field canExit, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___canExit;

/// @brief Field onEnter, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___onEnter;

/// @brief Field onExit, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___onExit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::FSM::DelegateState, ___canEnter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::FSM::DelegateState, ___canExit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Animancer::FSM::DelegateState, ___onEnter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::FSM::DelegateState, ___onExit) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::FSM::DelegateState) == 0x30, "Size mismatch!");

} // namespace end def Animancer::FSM
