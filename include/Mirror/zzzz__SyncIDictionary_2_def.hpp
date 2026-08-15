#pragma once
// IWYU pragma private; include "Mirror/SyncIDictionary_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__SyncObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SyncIDictionary_2)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
template<typename TKey,typename TValue>
struct SyncIDictionary_2_Change;
}
namespace Mirror {
template<typename TKey,typename TValue>
struct SyncIDictionary_2_Operation;
}
namespace Mirror {
template<typename TKey,typename TValue>
class SyncIDictionary_2_SyncDictionaryChanged;
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
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mirror {
template<typename TKey,typename TValue>
struct SyncIDictionary_2_Operation;
}
namespace Mirror {
template<typename TKey,typename TValue>
class SyncIDictionary_2;
}
namespace Mirror {
template<typename TKey,typename TValue>
class SyncIDictionary_2_SyncDictionaryChanged;
}
namespace Mirror {
template<typename TKey,typename TValue>
struct SyncIDictionary_2_Change;
}
// Write type traits
MARK_GEN_VAL_T(::Mirror::SyncIDictionary_2_Operation);
MARK_GEN_REF_T_PTR(::Mirror::SyncIDictionary_2);
MARK_GEN_REF_T_PTR(::Mirror::SyncIDictionary_2_SyncDictionaryChanged);
MARK_GEN_VAL_T(::Mirror::SyncIDictionary_2_Change);
DEFINE_IL2CPP_GEN_CLASS(::Mirror::SyncIDictionary_2_Operation, "Mirror", "SyncIDictionary`2/Operation");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::SyncIDictionary_2, "Mirror", "SyncIDictionary`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::SyncIDictionary_2_SyncDictionaryChanged, "Mirror", "SyncIDictionary`2/SyncDictionaryChanged");
DEFINE_IL2CPP_GEN_CLASS(::Mirror::SyncIDictionary_2_Change, "Mirror", "SyncIDictionary`2/Change");
// Dependencies System.MulticastDelegate
namespace Mirror {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Mirror.SyncIDictionary`2/SyncDictionaryChanged<TKey,TValue>
class CORDL_TYPE SyncIDictionary_2_SyncDictionaryChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  op, TKey  key, TValue  item, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  op, TKey  key, TValue  item) ;

static inline ::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncIDictionary_2_SyncDictionaryChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncIDictionary_2_SyncDictionaryChanged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncIDictionary_2_SyncDictionaryChanged(SyncIDictionary_2_SyncDictionaryChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncIDictionary_2_SyncDictionaryChanged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncIDictionary_2_SyncDictionaryChanged(SyncIDictionary_2_SyncDictionaryChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies 
namespace Mirror {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Mirror.SyncIDictionary`2/Operation<TKey,TValue>
struct CORDL_TYPE SyncIDictionary_2_Operation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __SyncIDictionary_2_Operation_Unwrapped
enum struct __SyncIDictionary_2_Operation_Unwrapped : uint8_t {
__E_OP_ADD = static_cast<uint8_t>(0x0u),
__E_OP_CLEAR = static_cast<uint8_t>(0x1u),
__E_OP_REMOVE = static_cast<uint8_t>(0x2u),
__E_OP_SET = static_cast<uint8_t>(0x3u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SyncIDictionary_2_Operation_Unwrapped () const noexcept {
return static_cast<__SyncIDictionary_2_Operation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SyncIDictionary_2_Operation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr SyncIDictionary_2_Operation(uint8_t  value__) noexcept;

/// @brief Field OP_ADD value: U8(0)
static ::Mirror::SyncIDictionary_2_Operation<TKey,TValue> const OP_ADD;

/// @brief Field OP_CLEAR value: U8(1)
static ::Mirror::SyncIDictionary_2_Operation<TKey,TValue> const OP_CLEAR;

/// @brief Field OP_REMOVE value: U8(2)
static ::Mirror::SyncIDictionary_2_Operation<TKey,TValue> const OP_REMOVE;

/// @brief Field OP_SET value: U8(3)
static ::Mirror::SyncIDictionary_2_Operation<TKey,TValue> const OP_SET;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18358};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies Mirror.SyncIDictionary`2::Operation<TKey, TValue>
namespace Mirror {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Mirror.SyncIDictionary`2/Change<TKey,TValue>
struct CORDL_TYPE SyncIDictionary_2_Change {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SyncIDictionary_2_Change() ;

// Ctor Parameters [CppParam { name: "operation", ty: "::Mirror::SyncIDictionary_2_Operation<TKey,TValue>", modifiers: "", def_value: None }, CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "item", ty: "TValue", modifiers: "", def_value: None }]
constexpr SyncIDictionary_2_Change(::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  operation, TKey  key, TValue  item) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18359};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field operation, offset: 0x0, size: 0x1, def value: None
 ::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  operation;

/// @brief Field key, offset: 0x8, size: 0x8, def value: None
 TKey  key;

/// @brief Field item, offset: 0x10, size: 0x8, def value: None
 TValue  item;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies Mirror.SyncObject
namespace Mirror {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Mirror.SyncIDictionary`2<TKey,TValue>
class CORDL_TYPE SyncIDictionary_2 : public ::Mirror::SyncObject {
public:
// Declarations
using Change = ::Mirror::SyncIDictionary_2_Change<TKey, TValue>;

using Operation = ::Mirror::SyncIDictionary_2_Operation<TKey, TValue>;

using SyncDictionaryChanged = ::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey, TValue>;

/// @brief Field Callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Callback, put=__cordl_internal_set_Callback)) ::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*  Callback;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) TValue  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<TKey>*  Keys;

 __declspec(property(get=System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys)) ::System::Collections::Generic::IEnumerable_1<TKey>*  System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__Keys;

 __declspec(property(get=System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values)) ::System::Collections::Generic::IEnumerable_1<TValue>*  System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__Values;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::ICollection_1<TValue>*  Values;

/// @brief Field changes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_changes, put=__cordl_internal_set_changes)) ::System::Collections::Generic::List_1<::Mirror::SyncIDictionary_2_Change<TKey,TValue>>*  changes;

/// @brief Field changesAhead, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_changesAhead, put=__cordl_internal_set_changesAhead)) int32_t  changesAhead;

/// @brief Field objects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_objects, put=__cordl_internal_set_objects)) ::System::Collections::Generic::IDictionary_2<TKey,TValue>*  objects;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<TKey,TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
constexpr operator  ::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(TKey  key, TValue  value) ;

/// @brief Method AddOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddOperation(::Mirror::SyncIDictionary_2_Operation<TKey,TValue>  op, TKey  key, TValue  item, bool  checkAccess) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method ClearChanges, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearChanges() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool ContainsKey(TKey  key) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  array, int32_t  arrayIndex) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* GetEnumerator() ;

static inline ::Mirror::SyncIDictionary_2<TKey,TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  objects) ;

/// @brief Method OnDeserializeAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDeserializeAll(::Mirror::NetworkReader*  reader) ;

/// @brief Method OnDeserializeDelta, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDeserializeDelta(::Mirror::NetworkReader*  reader) ;

/// @brief Method OnSerializeAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSerializeAll(::Mirror::NetworkWriter*  writer) ;

/// @brief Method OnSerializeDelta, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSerializeDelta(::Mirror::NetworkWriter*  writer) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(TKey  key) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<TKey>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys() ;

/// @brief Method System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerable_1<TValue>* System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetValue(TKey  key, ::by_ref<TValue>  value) ;

constexpr ::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>* const& __cordl_internal_get_Callback() const;

constexpr ::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*& __cordl_internal_get_Callback() ;

constexpr ::System::Collections::Generic::List_1<::Mirror::SyncIDictionary_2_Change<TKey,TValue>>* const& __cordl_internal_get_changes() const;

constexpr ::System::Collections::Generic::List_1<::Mirror::SyncIDictionary_2_Change<TKey,TValue>>*& __cordl_internal_get_changes() ;

constexpr int32_t const& __cordl_internal_get_changesAhead() const;

constexpr int32_t& __cordl_internal_get_changesAhead() ;

constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>* const& __cordl_internal_get_objects() const;

constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>*& __cordl_internal_get_objects() ;

constexpr void __cordl_internal_set_Callback(::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*  value) ;

constexpr void __cordl_internal_set_changes(::System::Collections::Generic::List_1<::Mirror::SyncIDictionary_2_Change<TKey,TValue>>*  value) ;

constexpr void __cordl_internal_set_changesAhead(int32_t  value) ;

constexpr void __cordl_internal_set_objects(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  objects) ;

/// @brief Method add_Callback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_Callback(::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*  value) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue get_Item(TKey  i) ;

/// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TKey>* get_Keys() ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TValue>* get_Values() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>* i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>* i___System__Collections__Generic__IReadOnlyDictionary_2_TKey_TValue_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method remove_Callback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_Callback(::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(TKey  i, TValue  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncIDictionary_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncIDictionary_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncIDictionary_2(SyncIDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncIDictionary_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncIDictionary_2(SyncIDictionary_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18360};

/// @brief Field objects, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<TKey,TValue>*  ___objects;

/// @brief Field Callback, offset: 0x30, size: 0x8, def value: None
 ::Mirror::SyncIDictionary_2_SyncDictionaryChanged<TKey,TValue>*  ___Callback;

/// @brief Field changes, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Mirror::SyncIDictionary_2_Change<TKey,TValue>>*  ___changes;

/// @brief Field changesAhead, offset: 0x40, size: 0x4, def value: None
 int32_t  ___changesAhead;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
