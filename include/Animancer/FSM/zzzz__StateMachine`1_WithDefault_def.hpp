#pragma once
// IWYU pragma private; include "Animancer/FSM/StateMachine`1_WithDefault.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/FSM/zzzz__StateMachine_1_def.hpp"
CORDL_MODULE_EXPORT(StateMachine`1_WithDefault)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TState>
class StateMachine_1_WithDefault;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::StateMachine_1_WithDefault);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::StateMachine_1_WithDefault, "Animancer.FSM", "StateMachine`1/WithDefault");
// Dependencies Animancer.FSM.StateMachine`1<TState>
namespace GlobalNamespace {
// cpp template
template<typename TState>
// Is value type: false
// CS Name: Animancer.FSM.StateMachine`1/WithDefault<TState>
class CORDL_TYPE StateMachine_1_WithDefault : public ::Animancer::FSM::StateMachine_1<TState> {
public:
// Declarations
 __declspec(property(get=get_DefaultState, put=set_DefaultState)) TState  DefaultState;

/// @brief Field ForceSetDefaultState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ForceSetDefaultState, put=__cordl_internal_set_ForceSetDefaultState)) ::System::Action*  ForceSetDefaultState;

/// @brief Field _DefaultState, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultState, put=__cordl_internal_set__DefaultState)) TState  _DefaultState;

/// @brief Method InitializeAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeAfterDeserialize() ;

static inline ::GlobalNamespace::StateMachine_1_WithDefault<TState>* New_ctor() ;

static inline ::GlobalNamespace::StateMachine_1_WithDefault<TState>* New_ctor(TState  defaultState) ;

/// @brief Method TryResetDefaultState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryResetDefaultState() ;

/// @brief Method TrySetDefaultState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetDefaultState() ;

constexpr ::System::Action* const& __cordl_internal_get_ForceSetDefaultState() const;

constexpr ::System::Action*& __cordl_internal_get_ForceSetDefaultState() ;

constexpr TState const& __cordl_internal_get__DefaultState() const;

constexpr TState& __cordl_internal_get__DefaultState() ;

constexpr void __cordl_internal_set_ForceSetDefaultState(::System::Action*  value) ;

constexpr void __cordl_internal_set__DefaultState(TState  value) ;

/// @brief Method <.ctor>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__5_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TState  defaultState) ;

/// @brief Method get_DefaultState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState get_DefaultState() ;

/// @brief Method set_DefaultState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_DefaultState(TState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine_1_WithDefault() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_1_WithDefault", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine_1_WithDefault(StateMachine_1_WithDefault && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_1_WithDefault", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine_1_WithDefault(StateMachine_1_WithDefault const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21349};

/// @brief Field _DefaultState, offset: 0x18, size: 0x8, def value: None
 TState  ____DefaultState;

/// @brief Field ForceSetDefaultState, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___ForceSetDefaultState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
