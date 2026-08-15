#pragma once
// IWYU pragma private; include "Animancer/FSM/StateMachine_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/FSM/zzzz__StateMachine_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StateMachine_2)
namespace Animancer::FSM {
template<typename TKey>
class IKeyedStateMachine_1;
}
namespace Animancer::FSM {
template<typename TKey,typename TState>
class StateMachine_2_InputBuffer;
}
namespace GlobalNamespace {
template<typename TKey,typename TState>
class StateMachine_2_WithDefault;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer::FSM {
template<typename TKey,typename TState>
class StateMachine_2;
}
namespace Animancer::FSM {
template<typename TKey,typename TState>
class StateMachine_2_InputBuffer;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Animancer::FSM::StateMachine_2);
MARK_GEN_REF_T_PTR(::Animancer::FSM::StateMachine_2_InputBuffer);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::FSM::StateMachine_2, "Animancer.FSM", "StateMachine`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Animancer::FSM::StateMachine_2_InputBuffer, "Animancer.FSM", "StateMachine`2/InputBuffer");
// Dependencies Animancer.FSM.StateMachine`1::InputBuffer`1<TState, TStateMachine>
namespace Animancer::FSM {
// cpp template
template<typename TKey,typename TState>
// Is value type: false
// CS Name: Animancer.FSM.StateMachine`2/InputBuffer<TKey,TState>
class CORDL_TYPE StateMachine_2_InputBuffer : public ::Animancer::FSM::StateMachine_1_InputBuffer_1<TState,::Animancer::FSM::StateMachine_2<TKey,TState>*> {
public:
// Declarations
 __declspec(property(get=get_Key, put=set_Key)) TKey  Key;

/// @brief Field <Key>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Key_k__BackingField, put=__cordl_internal_set__Key_k__BackingField)) TKey  _Key_k__BackingField;

/// @brief Method Buffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Buffer(TKey  key, float_t  timeOut) ;

/// @brief Method Buffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Buffer(TKey  key, TState  state, float_t  timeOut) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Clear() ;

static inline ::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>* New_ctor() ;

static inline ::Animancer::FSM::StateMachine_2_InputBuffer<TKey,TState>* New_ctor(::Animancer::FSM::StateMachine_2<TKey,TState>*  stateMachine) ;

/// @brief Method TryEnterState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryEnterState() ;

constexpr TKey const& __cordl_internal_get__Key_k__BackingField() const;

constexpr TKey& __cordl_internal_get__Key_k__BackingField() ;

constexpr void __cordl_internal_set__Key_k__BackingField(TKey  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Animancer::FSM::StateMachine_2<TKey,TState>*  stateMachine) ;

/// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TKey get_Key() ;

/// @brief Method set_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Key(TKey  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine_2_InputBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_2_InputBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine_2_InputBuffer(StateMachine_2_InputBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_2_InputBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine_2_InputBuffer(StateMachine_2_InputBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21354};

/// @brief Field <Key>k__BackingField, offset: 0x28, size: 0x8, def value: None
 TKey  ____Key_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
// Dependencies Animancer.FSM.StateMachine`1<TState>
namespace Animancer::FSM {
// cpp template
template<typename TKey,typename TState>
// Is value type: false
// CS Name: Animancer.FSM.StateMachine`2<TKey,TState>
class CORDL_TYPE StateMachine_2 : public ::Animancer::FSM::StateMachine_1<TState> {
public:
// Declarations
using InputBuffer = ::Animancer::FSM::StateMachine_2_InputBuffer<TKey, TState>;

using WithDefault = ::GlobalNamespace::StateMachine_2_WithDefault<TKey, TState>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_CurrentKey)) TKey  CurrentKey;

 __declspec(property(get=get_Dictionary, put=set_Dictionary)) ::System::Collections::Generic::IDictionary_2<TKey,TState>*  Dictionary;

 __declspec(property(get=get_Item, put=set_Item)) TState  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<TKey>*  Keys;

 __declspec(property(get=get_NextKey)) TKey  NextKey;

 __declspec(property(get=get_PreviousKey)) TKey  PreviousKey;

 __declspec(property(get=System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TState___get_IsReadOnly)) bool  System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TState___IsReadOnly;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::ICollection_1<TState>*  Values;

/// @brief Field _CurrentKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentKey, put=__cordl_internal_set__CurrentKey)) TKey  _CurrentKey;

/// @brief Field <Dictionary>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Dictionary_k__BackingField, put=__cordl_internal_set__Dictionary_k__BackingField)) ::System::Collections::Generic::IDictionary_2<TKey,TState>*  _Dictionary_k__BackingField;

/// @brief Convert operator to "::Animancer::FSM::IKeyedStateMachine_1<TKey>"
constexpr operator  ::Animancer::FSM::IKeyedStateMachine_1<TKey>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TState>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<TKey,TState>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<TKey,TState>  item) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(TKey  key, TState  state) ;

/// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRange(::ArrayW<TKey>  keys, ::ArrayW<TState>  states) ;

/// @brief Method Animancer.FSM.IKeyedStateMachine<TKey>.ForceSetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* Animancer_FSM_IKeyedStateMachine_TKey__ForceSetState(TKey  key) ;

/// @brief Method Animancer.FSM.IKeyedStateMachine<TKey>.TryResetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* Animancer_FSM_IKeyedStateMachine_TKey__TryResetState(TKey  key) ;

/// @brief Method Animancer.FSM.IKeyedStateMachine<TKey>.TrySetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* Animancer_FSM_IKeyedStateMachine_TKey__TrySetState(TKey  key) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<TKey,TState>  item) ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool ContainsKey(TKey  key) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>  array, int32_t  arrayIndex) ;

/// @brief Method ForceSetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState ForceSetState(TKey  key) ;

/// @brief Method ForceSetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ForceSetState(TKey  key, TState  state) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>* GetEnumerator() ;

/// @brief Method GetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState GetState(TKey  key) ;

/// @brief Method InitializeAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InitializeAfterDeserialize() ;

static inline ::Animancer::FSM::StateMachine_2<TKey,TState>* New_ctor() ;

static inline ::Animancer::FSM::StateMachine_2<TKey,TState>* New_ctor(TKey  defaultKey, TState  defaultState) ;

static inline ::Animancer::FSM::StateMachine_2<TKey,TState>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TState>*  dictionary) ;

static inline ::Animancer::FSM::StateMachine_2<TKey,TState>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TState>*  dictionary, TKey  defaultKey, TState  defaultState) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<TKey,TState>  item) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(TKey  key) ;

/// @brief Method SetFakeKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetFakeKey(TKey  key) ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TState>>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TState___get_IsReadOnly() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetValue(TKey  key, ::by_ref<TState>  state) ;

/// @brief Method TryResetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState TryResetState(TKey  key) ;

/// @brief Method TryResetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryResetState(TKey  key, TState  state) ;

/// @brief Method TrySetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TState TrySetState(TKey  key) ;

/// @brief Method TrySetState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TrySetState(TKey  key, TState  state) ;

constexpr TKey const& __cordl_internal_get__CurrentKey() const;

constexpr TKey& __cordl_internal_get__CurrentKey() ;

constexpr ::System::Collections::Generic::IDictionary_2<TKey,TState>* const& __cordl_internal_get__Dictionary_k__BackingField() const;

constexpr ::System::Collections::Generic::IDictionary_2<TKey,TState>*& __cordl_internal_get__Dictionary_k__BackingField() ;

constexpr void __cordl_internal_set__CurrentKey(TKey  value) ;

constexpr void __cordl_internal_set__Dictionary_k__BackingField(::System::Collections::Generic::IDictionary_2<TKey,TState>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TKey  defaultKey, TState  defaultState) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey,TState>*  dictionary) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey,TState>*  dictionary, TKey  defaultKey, TState  defaultState) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_CurrentKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TKey get_CurrentKey() ;

/// @brief Method get_Dictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<TKey,TState>* get_Dictionary() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TState get_Item(TKey  key) ;

/// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TKey>* get_Keys() ;

/// @brief Method get_NextKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TKey get_NextKey() ;

/// @brief Method get_PreviousKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TKey get_PreviousKey() ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TState>* get_Values() ;

/// @brief Convert to "::Animancer::FSM::IKeyedStateMachine_1<TKey>"
constexpr ::Animancer::FSM::IKeyedStateMachine_1<TKey>* i___Animancer__FSM__IKeyedStateMachine_1_TKey_() noexcept;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TState__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TState>"
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TState>* i___System__Collections__Generic__IDictionary_2_TKey_TState_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TState>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TState__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Dictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Dictionary(::System::Collections::Generic::IDictionary_2<TKey,TState>*  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(TKey  key, TState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StateMachine_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateMachine_2(StateMachine_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateMachine_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateMachine_2(StateMachine_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21356};

/// @brief Field <Dictionary>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<TKey,TState>*  ____Dictionary_k__BackingField;

/// @brief Field _CurrentKey, offset: 0x20, size: 0x8, def value: None
 TKey  ____CurrentKey;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer::FSM
