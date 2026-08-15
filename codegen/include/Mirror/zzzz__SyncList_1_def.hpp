#pragma once
// IWYU pragma private; include "Mirror/SyncList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__SyncObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SyncList_1)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
template<typename T>
struct SyncList_1_Change;
}
namespace Mirror {
template<typename T>
struct SyncList_1_Enumerator;
}
namespace Mirror {
template<typename T>
struct SyncList_1_Operation;
}
namespace Mirror {
template<typename T>
class SyncList_1_SyncListChanged;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
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
class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
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
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace Mirror {
template<typename T>
struct SyncList_1_Operation;
}
namespace Mirror {
template<typename T>
class SyncList_1;
}
namespace Mirror {
template<typename T>
class SyncList_1_SyncListChanged;
}
namespace Mirror {
template<typename T>
struct SyncList_1_Change;
}
namespace Mirror {
template<typename T>
struct SyncList_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::Mirror::SyncList_1_Operation);
MARK_GEN_REF_T_PTR(::Mirror::SyncList_1);
MARK_GEN_REF_T_PTR(::Mirror::SyncList_1_SyncListChanged);
MARK_GEN_VAL_T(::Mirror::SyncList_1_Change);
MARK_GEN_VAL_T(::Mirror::SyncList_1_Enumerator);
DEFINE_IL2CPP_GEN_CLASS(::Mirror::SyncList_1_Operation, "Mirror", "SyncList`1/Operation");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::SyncList_1, "Mirror", "SyncList`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::SyncList_1_SyncListChanged, "Mirror", "SyncList`1/SyncListChanged");
DEFINE_IL2CPP_GEN_CLASS(::Mirror::SyncList_1_Change, "Mirror", "SyncList`1/Change");
DEFINE_IL2CPP_GEN_CLASS(::Mirror::SyncList_1_Enumerator, "Mirror", "SyncList`1/Enumerator");
// Dependencies System.MulticastDelegate
namespace Mirror {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Mirror.SyncList`1/SyncListChanged<T>
class CORDL_TYPE SyncList_1_SyncListChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Mirror::SyncList_1_Operation<T>  op, int32_t  itemIndex, T  oldItem, T  newItem, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::Mirror::SyncList_1_Operation<T>  op, int32_t  itemIndex, T  oldItem, T  newItem) ;

static inline ::Mirror::SyncList_1_SyncListChanged<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncList_1_SyncListChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncList_1_SyncListChanged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncList_1_SyncListChanged(SyncList_1_SyncListChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncList_1_SyncListChanged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncList_1_SyncListChanged(SyncList_1_SyncListChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18362};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies 
namespace Mirror {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Mirror.SyncList`1/Operation<T>
struct CORDL_TYPE SyncList_1_Operation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __SyncList_1_Operation_Unwrapped
enum struct __SyncList_1_Operation_Unwrapped : uint8_t {
__E_OP_ADD = static_cast<uint8_t>(0x0u),
__E_OP_CLEAR = static_cast<uint8_t>(0x1u),
__E_OP_INSERT = static_cast<uint8_t>(0x2u),
__E_OP_REMOVEAT = static_cast<uint8_t>(0x3u),
__E_OP_SET = static_cast<uint8_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SyncList_1_Operation_Unwrapped () const noexcept {
return static_cast<__SyncList_1_Operation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SyncList_1_Operation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr SyncList_1_Operation(uint8_t  value__) noexcept;

/// @brief Field OP_ADD value: U8(0)
static ::Mirror::SyncList_1_Operation<T> const OP_ADD;

/// @brief Field OP_CLEAR value: U8(1)
static ::Mirror::SyncList_1_Operation<T> const OP_CLEAR;

/// @brief Field OP_INSERT value: U8(2)
static ::Mirror::SyncList_1_Operation<T> const OP_INSERT;

/// @brief Field OP_REMOVEAT value: U8(3)
static ::Mirror::SyncList_1_Operation<T> const OP_REMOVEAT;

/// @brief Field OP_SET value: U8(4)
static ::Mirror::SyncList_1_Operation<T> const OP_SET;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18363};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies Mirror.SyncList`1::Operation<T>
namespace Mirror {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Mirror.SyncList`1/Change<T>
struct CORDL_TYPE SyncList_1_Change {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SyncList_1_Change() ;

// Ctor Parameters [CppParam { name: "operation", ty: "::Mirror::SyncList_1_Operation<T>", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "item", ty: "T", modifiers: "", def_value: None }]
constexpr SyncList_1_Change(::Mirror::SyncList_1_Operation<T>  operation, int32_t  index, T  item) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18364};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field operation, offset: 0x0, size: 0x1, def value: None
 ::Mirror::SyncList_1_Operation<T>  operation;

/// @brief Field index, offset: 0x4, size: 0x4, def value: None
 int32_t  index;

/// @brief Field item, offset: 0x8, size: 0x8, def value: None
 T  item;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies 
namespace Mirror {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Mirror.SyncList`1/Enumerator<T>
struct CORDL_TYPE SyncList_1_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current, put=set_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Mirror::SyncList_1<T>*  list) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SyncList_1_Enumerator() ;

// Ctor Parameters [CppParam { name: "list", ty: "::Mirror::SyncList_1<T>*", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Current_k__BackingField", ty: "T", modifiers: "", def_value: None }]
constexpr SyncList_1_Enumerator(::Mirror::SyncList_1<T>*  list, int32_t  index, T  _Current_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18365};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field list, offset: 0x0, size: 0x8, def value: None
 ::Mirror::SyncList_1<T>*  list;

/// @brief Field index, offset: 0x8, size: 0x4, def value: None
 int32_t  index;

/// @brief Field <Current>k__BackingField, offset: 0x10, size: 0x8, def value: None
 T  _Current_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies Mirror.SyncObject
namespace Mirror {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Mirror.SyncList`1<T>
class CORDL_TYPE SyncList_1 : public ::Mirror::SyncObject {
public:
// Declarations
using Change = ::Mirror::SyncList_1_Change<T>;

using Enumerator = ::Mirror::SyncList_1_Enumerator<T>;

using Operation = ::Mirror::SyncList_1_Operation<T>;

using SyncListChanged = ::Mirror::SyncList_1_SyncListChanged<T>;

/// @brief Field Callback, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Callback, put=__cordl_internal_set_Callback)) ::Mirror::SyncList_1_SyncListChanged<T>*  Callback;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

/// @brief Field changes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_changes, put=__cordl_internal_set_changes)) ::System::Collections::Generic::List_1<::Mirror::SyncList_1_Change<T>>*  changes;

/// @brief Field changesAhead, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_changesAhead, put=__cordl_internal_set_changesAhead)) int32_t  changesAhead;

/// @brief Field comparer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_comparer, put=__cordl_internal_set_comparer)) ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer;

/// @brief Field objects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_objects, put=__cordl_internal_set_objects)) ::System::Collections::Generic::IList_1<T>*  objects;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
constexpr operator  ::System::Collections::Generic::IList_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(T  item) ;

/// @brief Method AddOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddOperation(::Mirror::SyncList_1_Operation<T>  op, int32_t  itemIndex, T  oldItem, T  newItem, bool  checkAccess) ;

/// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddRange(::System::Collections::Generic::IEnumerable_1<T>*  range) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method ClearChanges, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearChanges() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(T  item) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<T>  array, int32_t  index) ;

/// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Find(::System::Predicate_1<T>*  match) ;

/// @brief Method FindAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<T>* FindAll(::System::Predicate_1<T>*  match) ;

/// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FindIndex(::System::Predicate_1<T>*  match) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Mirror::SyncList_1_Enumerator<T> GetEnumerator() ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t IndexOf(T  item) ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Insert(int32_t  index, T  item) ;

/// @brief Method InsertRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InsertRange(int32_t  index, ::System::Collections::Generic::IEnumerable_1<T>*  range) ;

static inline ::Mirror::SyncList_1<T>* New_ctor() ;

static inline ::Mirror::SyncList_1<T>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

static inline ::Mirror::SyncList_1<T>* New_ctor(::System::Collections::Generic::IList_1<T>*  objects, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method OnDeserializeAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDeserializeAll(::Mirror::NetworkReader*  reader) ;

/// @brief Method OnDeserializeDelta, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDeserializeDelta(::Mirror::NetworkReader*  reader) ;

/// @brief Method OnSerializeAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSerializeAll(::Mirror::NetworkWriter*  writer) ;

/// @brief Method OnSerializeDelta, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSerializeDelta(::Mirror::NetworkWriter*  writer) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(T  item) ;

/// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t RemoveAll(::System::Predicate_1<T>*  match) ;

/// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void RemoveAt(int32_t  index) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::Mirror::SyncList_1_SyncListChanged<T>* const& __cordl_internal_get_Callback() const;

constexpr ::Mirror::SyncList_1_SyncListChanged<T>*& __cordl_internal_get_Callback() ;

constexpr ::System::Collections::Generic::List_1<::Mirror::SyncList_1_Change<T>>* const& __cordl_internal_get_changes() const;

constexpr ::System::Collections::Generic::List_1<::Mirror::SyncList_1_Change<T>>*& __cordl_internal_get_changes() ;

constexpr int32_t const& __cordl_internal_get_changesAhead() const;

constexpr int32_t& __cordl_internal_get_changesAhead() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<T>* const& __cordl_internal_get_comparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<T>*& __cordl_internal_get_comparer() ;

constexpr ::System::Collections::Generic::IList_1<T>* const& __cordl_internal_get_objects() const;

constexpr ::System::Collections::Generic::IList_1<T>*& __cordl_internal_get_objects() ;

constexpr void __cordl_internal_set_Callback(::Mirror::SyncList_1_SyncListChanged<T>*  value) ;

constexpr void __cordl_internal_set_changes(::System::Collections::Generic::List_1<::Mirror::SyncList_1_Change<T>>*  value) ;

constexpr void __cordl_internal_set_changesAhead(int32_t  value) ;

constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<T>*  value) ;

constexpr void __cordl_internal_set_objects(::System::Collections::Generic::IList_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IList_1<T>*  objects, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method add_Callback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_Callback(::Mirror::SyncList_1_SyncListChanged<T>*  value) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Item(int32_t  i) ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
constexpr ::System::Collections::Generic::IList_1<T>* i___System__Collections__Generic__IList_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* i___System__Collections__Generic__IReadOnlyList_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method remove_Callback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_Callback(::Mirror::SyncList_1_SyncListChanged<T>*  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(int32_t  i, T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncList_1(SyncList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncList_1(SyncList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18366};

/// @brief Field objects, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<T>*  ___objects;

/// @brief Field comparer, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<T>*  ___comparer;

/// @brief Field Callback, offset: 0x38, size: 0x8, def value: None
 ::Mirror::SyncList_1_SyncListChanged<T>*  ___Callback;

/// @brief Field changes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Mirror::SyncList_1_Change<T>>*  ___changes;

/// @brief Field changesAhead, offset: 0x48, size: 0x4, def value: None
 int32_t  ___changesAhead;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
