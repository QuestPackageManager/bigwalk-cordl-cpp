#pragma once
// IWYU pragma private; include "Mirror/SyncSet_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__SyncObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SyncSet_1)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
template<typename T>
struct SyncSet_1_Change;
}
namespace Mirror {
template<typename T>
struct SyncSet_1_Operation;
}
namespace Mirror {
template<typename T>
class SyncSet_1_SyncSetChanged;
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
class ISet_1;
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
template<typename T>
struct SyncSet_1_Operation;
}
namespace Mirror {
template<typename T>
class SyncSet_1;
}
namespace Mirror {
template<typename T>
class SyncSet_1_SyncSetChanged;
}
namespace Mirror {
template<typename T>
struct SyncSet_1_Change;
}
// Write type traits
MARK_GEN_VAL_T(::Mirror::SyncSet_1_Operation);
MARK_GEN_REF_T_PTR(::Mirror::SyncSet_1);
MARK_GEN_REF_T_PTR(::Mirror::SyncSet_1_SyncSetChanged);
MARK_GEN_VAL_T(::Mirror::SyncSet_1_Change);
DEFINE_IL2CPP_GEN_CLASS(::Mirror::SyncSet_1_Operation, "Mirror", "SyncSet`1/Operation");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::SyncSet_1, "Mirror", "SyncSet`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::SyncSet_1_SyncSetChanged, "Mirror", "SyncSet`1/SyncSetChanged");
DEFINE_IL2CPP_GEN_CLASS(::Mirror::SyncSet_1_Change, "Mirror", "SyncSet`1/Change");
// Dependencies System.MulticastDelegate
namespace Mirror {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Mirror.SyncSet`1/SyncSetChanged<T>
class CORDL_TYPE SyncSet_1_SyncSetChanged : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Mirror::SyncSet_1_Operation<T>  op, T  item, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::Mirror::SyncSet_1_Operation<T>  op, T  item) ;

static inline ::Mirror::SyncSet_1_SyncSetChanged<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncSet_1_SyncSetChanged() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncSet_1_SyncSetChanged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncSet_1_SyncSetChanged(SyncSet_1_SyncSetChanged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncSet_1_SyncSetChanged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncSet_1_SyncSetChanged(SyncSet_1_SyncSetChanged const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18369};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies 
namespace Mirror {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Mirror.SyncSet`1/Operation<T>
struct CORDL_TYPE SyncSet_1_Operation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __SyncSet_1_Operation_Unwrapped
enum struct __SyncSet_1_Operation_Unwrapped : uint8_t {
__E_OP_ADD = static_cast<uint8_t>(0x0u),
__E_OP_CLEAR = static_cast<uint8_t>(0x1u),
__E_OP_REMOVE = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SyncSet_1_Operation_Unwrapped () const noexcept {
return static_cast<__SyncSet_1_Operation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SyncSet_1_Operation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr SyncSet_1_Operation(uint8_t  value__) noexcept;

/// @brief Field OP_ADD value: U8(0)
static ::Mirror::SyncSet_1_Operation<T> const OP_ADD;

/// @brief Field OP_CLEAR value: U8(1)
static ::Mirror::SyncSet_1_Operation<T> const OP_CLEAR;

/// @brief Field OP_REMOVE value: U8(2)
static ::Mirror::SyncSet_1_Operation<T> const OP_REMOVE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies Mirror.SyncSet`1::Operation<T>
namespace Mirror {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Mirror.SyncSet`1/Change<T>
struct CORDL_TYPE SyncSet_1_Change {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SyncSet_1_Change() ;

// Ctor Parameters [CppParam { name: "operation", ty: "::Mirror::SyncSet_1_Operation<T>", modifiers: "", def_value: None }, CppParam { name: "item", ty: "T", modifiers: "", def_value: None }]
constexpr SyncSet_1_Change(::Mirror::SyncSet_1_Operation<T>  operation, T  item) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18371};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field operation, offset: 0x0, size: 0x1, def value: None
 ::Mirror::SyncSet_1_Operation<T>  operation;

/// @brief Field item, offset: 0x8, size: 0x8, def value: None
 T  item;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Mirror
// Dependencies Mirror.SyncObject
namespace Mirror {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Mirror.SyncSet`1<T>
class CORDL_TYPE SyncSet_1 : public ::Mirror::SyncObject {
public:
// Declarations
using Change = ::Mirror::SyncSet_1_Change<T>;

using Operation = ::Mirror::SyncSet_1_Operation<T>;

using SyncSetChanged = ::Mirror::SyncSet_1_SyncSetChanged<T>;

/// @brief Field Callback, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Callback, put=__cordl_internal_set_Callback)) ::Mirror::SyncSet_1_SyncSetChanged<T>*  Callback;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

/// @brief Field changes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_changes, put=__cordl_internal_set_changes)) ::System::Collections::Generic::List_1<::Mirror::SyncSet_1_Change<T>>*  changes;

/// @brief Field changesAhead, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_changesAhead, put=__cordl_internal_set_changesAhead)) int32_t  changesAhead;

/// @brief Field objects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_objects, put=__cordl_internal_set_objects)) ::System::Collections::Generic::ISet_1<T>*  objects;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::ISet_1<T>"
constexpr operator  ::System::Collections::Generic::ISet_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Add(T  item) ;

/// @brief Method AddOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddOperation(::Mirror::SyncSet_1_Operation<T>  op, bool  checkAccess) ;

/// @brief Method AddOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddOperation(::Mirror::SyncSet_1_Operation<T>  op, T  item, bool  checkAccess) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method ClearChanges, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearChanges() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(T  item) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<T>  array, int32_t  index) ;

/// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

/// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IntersectWithSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void IntersectWithSet(::System::Collections::Generic::ISet_1<T>*  otherSet) ;

/// @brief Method IsProperSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IsProperSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IsSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IsSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

static inline ::Mirror::SyncSet_1<T>* New_ctor(::System::Collections::Generic::ISet_1<T>*  objects) ;

/// @brief Method OnDeserializeAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDeserializeAll(::Mirror::NetworkReader*  reader) ;

/// @brief Method OnDeserializeDelta, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDeserializeDelta(::Mirror::NetworkReader*  reader) ;

/// @brief Method OnSerializeAll, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSerializeAll(::Mirror::NetworkWriter*  writer) ;

/// @brief Method OnSerializeDelta, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSerializeDelta(::Mirror::NetworkWriter*  writer) ;

/// @brief Method Overlaps, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Overlaps(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(T  item) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method SymmetricExceptWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SymmetricExceptWith(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_T__Add(T  item) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnionWith(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

constexpr ::Mirror::SyncSet_1_SyncSetChanged<T>* const& __cordl_internal_get_Callback() const;

constexpr ::Mirror::SyncSet_1_SyncSetChanged<T>*& __cordl_internal_get_Callback() ;

constexpr ::System::Collections::Generic::List_1<::Mirror::SyncSet_1_Change<T>>* const& __cordl_internal_get_changes() const;

constexpr ::System::Collections::Generic::List_1<::Mirror::SyncSet_1_Change<T>>*& __cordl_internal_get_changes() ;

constexpr int32_t const& __cordl_internal_get_changesAhead() const;

constexpr int32_t& __cordl_internal_get_changesAhead() ;

constexpr ::System::Collections::Generic::ISet_1<T>* const& __cordl_internal_get_objects() const;

constexpr ::System::Collections::Generic::ISet_1<T>*& __cordl_internal_get_objects() ;

constexpr void __cordl_internal_set_Callback(::Mirror::SyncSet_1_SyncSetChanged<T>*  value) ;

constexpr void __cordl_internal_set_changes(::System::Collections::Generic::List_1<::Mirror::SyncSet_1_Change<T>>*  value) ;

constexpr void __cordl_internal_set_changesAhead(int32_t  value) ;

constexpr void __cordl_internal_set_objects(::System::Collections::Generic::ISet_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::ISet_1<T>*  objects) ;

/// @brief Method add_Callback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_Callback(::Mirror::SyncSet_1_SyncSetChanged<T>*  value) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::ISet_1<T>"
constexpr ::System::Collections::Generic::ISet_1<T>* i___System__Collections__Generic__ISet_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method remove_Callback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_Callback(::Mirror::SyncSet_1_SyncSetChanged<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncSet_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncSet_1(SyncSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncSet_1(SyncSet_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18372};

/// @brief Field objects, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::ISet_1<T>*  ___objects;

/// @brief Field Callback, offset: 0x30, size: 0x8, def value: None
 ::Mirror::SyncSet_1_SyncSetChanged<T>*  ___Callback;

/// @brief Field changes, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Mirror::SyncSet_1_Change<T>>*  ___changes;

/// @brief Field changesAhead, offset: 0x40, size: 0x4, def value: None
 int32_t  ___changesAhead;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror
