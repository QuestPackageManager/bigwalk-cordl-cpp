#pragma once
// IWYU pragma private; include "Animancer/FSM/IKeyedStateMachine_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IKeyedStateMachine_1)
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer::FSM {
template<typename TKey>
class IKeyedStateMachine_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::FSM::IKeyedStateMachine_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::FSM::IKeyedStateMachine_1, "Animancer.FSM", "IKeyedStateMachine`1");
// Dependencies 
namespace Animancer::FSM {
// cpp template
template<typename TKey>
// Is value type: false
// CS Name: Animancer.FSM.IKeyedStateMachine`1<TKey>
class CORDL_TYPE IKeyedStateMachine_1 {
public:
// Declarations
 __declspec(property(get=get_CurrentKey)) TKey  CurrentKey;

 __declspec(property(get=get_NextKey)) TKey  NextKey;

 __declspec(property(get=get_PreviousKey)) TKey  PreviousKey;

/// @brief Method ForceSetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* ForceSetState(TKey  key) ;

/// @brief Method TryResetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* TryResetState(TKey  key) ;

/// @brief Method TrySetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* TrySetState(TKey  key) ;

/// @brief Method get_CurrentKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TKey get_CurrentKey() ;

/// @brief Method get_NextKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TKey get_NextKey() ;

/// @brief Method get_PreviousKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TKey get_PreviousKey() ;

// Ctor Parameters [CppParam { name: "", ty: "IKeyedStateMachine_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKeyedStateMachine_1(IKeyedStateMachine_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
