#pragma once
// IWYU pragma private; include "Animancer/FSM/StateMachine_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StateMachine_1)
namespace Animancer::FSM {
class IStateMachine;
}
namespace Animancer::FSM {
template<typename TState,typename TStateMachine>
class StateMachine_1_InputBuffer_1;
}
namespace Animancer::FSM {
template<typename TState>
class StateMachine_1_InputBuffer;
}
namespace Animancer::FSM {
template<typename TState>
class StateMachine_1_StateSelector;
}
namespace GlobalNamespace {
template<typename TState>
class StateMachine_1_WithDefault;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer::FSM {
template<typename TState>
class StateMachine_1;
}
namespace Animancer::FSM {
template<typename TState>
class StateMachine_1_InputBuffer;
}
namespace Animancer::FSM {
template<typename TState,typename TStateMachine>
class StateMachine_1_InputBuffer_1;
}
namespace Animancer::FSM {
template<typename TState>
class StateMachine_1_StateSelector;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::FSM::StateMachine_1);
MARK_GEN_REF_T_PTR(::Animancer::FSM::StateMachine_1_InputBuffer);
MARK_GEN_REF_T_PTR(::Animancer::FSM::StateMachine_1_InputBuffer_1);
MARK_GEN_REF_T_PTR(::Animancer::FSM::StateMachine_1_StateSelector);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::FSM::StateMachine_1, "Animancer.FSM", "StateMachine`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::FSM::StateMachine_1_InputBuffer, "Animancer.FSM", "StateMachine`1/InputBuffer");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::FSM::StateMachine_1_InputBuffer_1, "Animancer.FSM", "StateMachine`1/InputBuffer`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::FSM::StateMachine_1_StateSelector, "Animancer.FSM", "StateMachine`1/StateSelector");
// Dependencies System.Object
namespace Animancer::FSM {
// cpp template
template<typename TState,typename TStateMachine>
// Is value type: false
// CS Name: Animancer.FSM.StateMachine`1/InputBuffer`1<TState,TStateMachine>
class CORDL_TYPE StateMachine_1_InputBuffer_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsActive)) bool  IsActive;

 __declspec(property(get=get_State, put=set_State)) TState  State;

 __declspec(property(get=get_StateMachine, put=set_StateMachine)) TStateMachine  StateMachine;

 __declspec(property(get=get_TimeOut, put=set_TimeOut)) float_t  TimeOut;

/// @brief Field _StateMachine, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__StateMachine, put=__cordl_internal_set__StateMachine)) TStateMachine  _StateMachine;

/// @brief Field <State>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) TState  _State_k__BackingField;

/// @brief Field <TimeOut>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeOut_k__BackingField, put=__cordl_internal_set__TimeOut_k__BackingField)) float_t  _TimeOut_k__BackingField;

/// @brief Method Buffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Buffer(TState  state, float_t  timeOut) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Clear() ;

static inline ::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>* New_ctor() ;

static inline ::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,TStateMachine>* New_ctor(TStateMachine  stateMachine) ;

/// @brief Method TryEnterState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryEnterState() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Update() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Update(float_t  deltaTime) ;

constexpr TStateMachine const& __cordl_internal_get__StateMachine() const;

constexpr TStateMachine& __cordl_internal_get__StateMachine() ;

constexpr TState const& __cordl_internal_get__State_k__BackingField() const;

constexpr TState& __cordl_internal_get__State_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__TimeOut_k__BackingField() const;

constexpr float_t& __cordl_internal_get__TimeOut_k__BackingField() ;

constexpr void __cordl_internal_set__StateMachine(TStateMachine  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(TState  value) ;

constexpr void __cordl_internal_set__TimeOut_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TStateMachine  stateMachine) ;

/// @brief Method get_IsActive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsActive() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState get_State() ;

/// @brief Method get_StateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TStateMachine get_StateMachine() ;

/// @brief Method get_TimeOut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t get_TimeOut() ;

/// @brief Method set_State, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_State(TState  value) ;

/// @brief Method set_StateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_StateMachine(TStateMachine  value) ;

/// @brief Method set_TimeOut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_TimeOut(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine_1_InputBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_1_InputBuffer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine_1_InputBuffer_1(StateMachine_1_InputBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_1_InputBuffer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine_1_InputBuffer_1(StateMachine_1_InputBuffer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21347};

/// @brief Field _StateMachine, offset: 0x10, size: 0x8, def value: None
 TStateMachine  ____StateMachine;

/// @brief Field <State>k__BackingField, offset: 0x18, size: 0x8, def value: None
 TState  ____State_k__BackingField;

/// @brief Field <TimeOut>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____TimeOut_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
// Dependencies Animancer.FSM.StateMachine`1::InputBuffer`1<TState, TStateMachine>
namespace Animancer::FSM {
// cpp template
template<typename TState>
// Is value type: false
// CS Name: Animancer.FSM.StateMachine`1/InputBuffer<TState>
class CORDL_TYPE StateMachine_1_InputBuffer : public ::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,::Animancer::FSM::StateMachine_1<TState>*> {
public:
// Declarations
static inline ::Animancer::FSM::StateMachine_1_InputBuffer<TState>* New_ctor() ;

static inline ::Animancer::FSM::StateMachine_1_InputBuffer<TState>* New_ctor(::Animancer::FSM::StateMachine_1<TState>*  stateMachine) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Animancer::FSM::StateMachine_1<TState>*  stateMachine) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine_1_InputBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_1_InputBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine_1_InputBuffer(StateMachine_1_InputBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_1_InputBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine_1_InputBuffer(StateMachine_1_InputBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21346};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
// Dependencies System.Collections.Generic.SortedList`2<TKey, TValue>
namespace Animancer::FSM {
// cpp template
template<typename TState>
// Is value type: false
// CS Name: Animancer.FSM.StateMachine`1/StateSelector<TState>
class CORDL_TYPE StateMachine_1_StateSelector : public ::System::Collections::Generic::SortedList_2<float_t,TState> {
public:
// Declarations
/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TPrioritizable>
inline void Add(TPrioritizable  state) ;

static inline ::Animancer::FSM::StateMachine_1_StateSelector<TState>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine_1_StateSelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_1_StateSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine_1_StateSelector(StateMachine_1_StateSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_1_StateSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine_1_StateSelector(StateMachine_1_StateSelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21348};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
// Dependencies System.Object
namespace Animancer::FSM {
// cpp template
template<typename TState>
// Is value type: false
// CS Name: Animancer.FSM.StateMachine`1<TState>
class CORDL_TYPE StateMachine_1 : public ::System::Object {
public:
// Declarations
using InputBuffer = ::Animancer::FSM::StateMachine_1_InputBuffer<TState>;

template<typename TStateMachine>
using InputBuffer_1 = ::Animancer::FSM::StateMachine_1_InputBuffer_1<TState, TStateMachine>;

using StateSelector = ::Animancer::FSM::StateMachine_1_StateSelector<TState>;

using WithDefault = ::GlobalNamespace::StateMachine_1_WithDefault<TState>;

 __declspec(property(get=Animancer_FSM_IStateMachine_get_CurrentState)) ::System::Object*  Animancer_FSM_IStateMachine_CurrentState;

 __declspec(property(get=Animancer_FSM_IStateMachine_get_NextState)) ::System::Object*  Animancer_FSM_IStateMachine_NextState;

 __declspec(property(get=Animancer_FSM_IStateMachine_get_PreviousState)) ::System::Object*  Animancer_FSM_IStateMachine_PreviousState;

 __declspec(property(get=get_CurrentState)) TState  CurrentState;

 __declspec(property(get=get_NextState)) TState  NextState;

 __declspec(property(get=get_PreviousState)) TState  PreviousState;

/// @brief Field _CurrentState, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentState, put=__cordl_internal_set__CurrentState)) TState  _CurrentState;

/// @brief Convert operator to "::Animancer::FSM::IStateMachine"
constexpr operator  ::Animancer::FSM::IStateMachine*() noexcept;

/// @brief Method Animancer.FSM.IStateMachine.CanSetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* Animancer_FSM_IStateMachine_CanSetState(::System::Collections::IList*  states) ;

/// @brief Method Animancer.FSM.IStateMachine.CanSetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Animancer_FSM_IStateMachine_CanSetState(::System::Object*  state) ;

/// @brief Method Animancer.FSM.IStateMachine.ForceSetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Animancer_FSM_IStateMachine_ForceSetState(::System::Object*  state) ;

/// @brief Method Animancer.FSM.IStateMachine.SetAllowNullStates, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Animancer_FSM_IStateMachine_SetAllowNullStates(bool  allow) ;

/// @brief Method Animancer.FSM.IStateMachine.TryResetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Animancer_FSM_IStateMachine_TryResetState(::System::Object*  state) ;

/// @brief Method Animancer.FSM.IStateMachine.TryResetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Animancer_FSM_IStateMachine_TryResetState(::System::Collections::IList*  states) ;

/// @brief Method Animancer.FSM.IStateMachine.TrySetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Animancer_FSM_IStateMachine_TrySetState(::System::Object*  state) ;

/// @brief Method Animancer.FSM.IStateMachine.TrySetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Animancer_FSM_IStateMachine_TrySetState(::System::Collections::IList*  states) ;

/// @brief Method Animancer.FSM.IStateMachine.get_CurrentState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* Animancer_FSM_IStateMachine_get_CurrentState() ;

/// @brief Method Animancer.FSM.IStateMachine.get_NextState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* Animancer_FSM_IStateMachine_get_NextState() ;

/// @brief Method Animancer.FSM.IStateMachine.get_PreviousState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* Animancer_FSM_IStateMachine_get_PreviousState() ;

/// @brief Method CanSetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState CanSetState(::System::Collections::Generic::IList_1<TState>*  states) ;

/// @brief Method CanSetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool CanSetState(TState  state) ;

/// @brief Method ForceSetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ForceSetState(TState  state) ;

/// @brief Method InitializeAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeAfterDeserialize() ;

static inline ::Animancer::FSM::StateMachine_1<TState>* New_ctor() ;

static inline ::Animancer::FSM::StateMachine_1<TState>* New_ctor(TState  state) ;

/// @brief Method SetAllowNullStates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetAllowNullStates(bool  allow) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryResetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryResetState(TState  state) ;

/// @brief Method TryResetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryResetState(::System::Collections::Generic::IList_1<TState>*  states) ;

/// @brief Method TrySetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetState(TState  state) ;

/// @brief Method TrySetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetState(::System::Collections::Generic::IList_1<TState>*  states) ;

constexpr TState const& __cordl_internal_get__CurrentState() const;

constexpr TState& __cordl_internal_get__CurrentState() ;

constexpr void __cordl_internal_set__CurrentState(TState  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TState  state) ;

/// @brief Method get_CurrentState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState get_CurrentState() ;

/// @brief Method get_NextState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState get_NextState() ;

/// @brief Method get_PreviousState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState get_PreviousState() ;

/// @brief Convert to "::Animancer::FSM::IStateMachine"
constexpr ::Animancer::FSM::IStateMachine* i___Animancer__FSM__IStateMachine() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine_1(StateMachine_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine_1(StateMachine_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21350};

/// @brief Field _CurrentState, offset: 0x10, size: 0x8, def value: None
 TState  ____CurrentState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
