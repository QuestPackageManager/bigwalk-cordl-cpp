#pragma once
// IWYU pragma private; include "Animancer/FSM/StateMachine`2_WithDefault.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/FSM/zzzz__StateMachine_2_def.hpp"
CORDL_MODULE_EXPORT(StateMachine`2_WithDefault)
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TState>
class StateMachine_2_WithDefault;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::StateMachine_2_WithDefault);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::StateMachine_2_WithDefault, "Animancer.FSM", "StateMachine`2/WithDefault");
// Dependencies Animancer.FSM.StateMachine`2<TKey, TState>
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TState>
// Is value type: false
// CS Name: Animancer.FSM.StateMachine`2/WithDefault<TKey,TState>
class CORDL_TYPE StateMachine_2_WithDefault : public ::Animancer::FSM::StateMachine_2<TKey,TState> {
public:
// Declarations
 __declspec(property(get=get_DefaultKey, put=set_DefaultKey)) TKey  DefaultKey;

/// @brief Field ForceSetDefaultState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ForceSetDefaultState, put=__cordl_internal_set_ForceSetDefaultState)) ::System::Action*  ForceSetDefaultState;

/// @brief Field _DefaultKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultKey, put=__cordl_internal_set__DefaultKey)) TKey  _DefaultKey;

/// @brief Method InitializeAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeAfterDeserialize() ;

static inline ::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>* New_ctor() ;

static inline ::GlobalNamespace::StateMachine_2_WithDefault<TKey,TState>* New_ctor(TKey  defaultKey) ;

/// @brief Method TryResetDefaultState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState TryResetDefaultState() ;

/// @brief Method TrySetDefaultState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState TrySetDefaultState() ;

constexpr ::System::Action* const& __cordl_internal_get_ForceSetDefaultState() const;

constexpr ::System::Action*& __cordl_internal_get_ForceSetDefaultState() ;

constexpr TKey const& __cordl_internal_get__DefaultKey() const;

constexpr TKey& __cordl_internal_get__DefaultKey() ;

constexpr void __cordl_internal_set_ForceSetDefaultState(::System::Action*  value) ;

constexpr void __cordl_internal_set__DefaultKey(TKey  value) ;

/// @brief Method <.ctor>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__5_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TKey  defaultKey) ;

/// @brief Method get_DefaultKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TKey get_DefaultKey() ;

/// @brief Method set_DefaultKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_DefaultKey(TKey  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine_2_WithDefault() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_2_WithDefault", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine_2_WithDefault(StateMachine_2_WithDefault && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_2_WithDefault", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine_2_WithDefault(StateMachine_2_WithDefault const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21355};

/// @brief Field _DefaultKey, offset: 0x28, size: 0x8, def value: None
 TKey  ____DefaultKey;

/// @brief Field ForceSetDefaultState, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___ForceSetDefaultState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
