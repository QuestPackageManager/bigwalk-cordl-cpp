#pragma once
// IWYU pragma private; include "Animancer/FSM/KeyChange_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(KeyChange_1)
namespace Animancer::FSM {
template<typename TKey>
class IKeyedStateMachine_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Animancer::FSM {
template<typename TKey>
struct KeyChange_1;
}
// Write type traits
MARK_GEN_VAL_T(::Animancer::FSM::KeyChange_1);
DEFINE_IL2CPP_GEN_CLASS(::Animancer::FSM::KeyChange_1, "Animancer.FSM", "KeyChange`1");
// Dependencies 
namespace Animancer::FSM {
// cpp template
template<typename TKey>
// Is value type: true
// CS Name: Animancer.FSM.KeyChange`1<TKey>
struct CORDL_TYPE KeyChange_1 {
public:
// Declarations
/// @brief Field _Current, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF__Current, put=setStaticF__Current)) ::Animancer::FSM::KeyChange_1<TKey>  _Current;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method CurrentToString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::StringW CurrentToString() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Animancer::FSM::IKeyedStateMachine_1<TKey>*  stateMachine, TKey  previousKey, TKey  nextKey) ;

static inline ::Animancer::FSM::KeyChange_1<TKey> getStaticF__Current() ;

/// @brief Method get_IsActive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool get_IsActive() ;

/// @brief Method get_NextKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TKey get_NextKey() ;

/// @brief Method get_PreviousKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TKey get_PreviousKey() ;

/// @brief Method get_StateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Animancer::FSM::IKeyedStateMachine_1<TKey>* get_StateMachine() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF__Current(::Animancer::FSM::KeyChange_1<TKey>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr KeyChange_1() ;

// Ctor Parameters [CppParam { name: "_StateMachine", ty: "::Animancer::FSM::IKeyedStateMachine_1<TKey>*", modifiers: "", def_value: None }, CppParam { name: "_PreviousKey", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "_NextKey", ty: "TKey", modifiers: "", def_value: None }]
constexpr KeyChange_1(::Animancer::FSM::IKeyedStateMachine_1<TKey>*  _StateMachine, TKey  _PreviousKey, TKey  _NextKey) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _StateMachine, offset: 0x0, size: 0x8, def value: None
 ::Animancer::FSM::IKeyedStateMachine_1<TKey>*  _StateMachine;

/// @brief Field _PreviousKey, offset: 0x8, size: 0x8, def value: None
 TKey  _PreviousKey;

/// @brief Field _NextKey, offset: 0x10, size: 0x8, def value: None
 TKey  _NextKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Animancer::FSM
