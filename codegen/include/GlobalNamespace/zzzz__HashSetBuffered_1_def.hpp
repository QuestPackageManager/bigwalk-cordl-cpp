#pragma once
// IWYU pragma private; include "GlobalNamespace/HashSetBuffered_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashSetBuffered_1)
namespace GlobalNamespace {
template<typename T>
struct HashSetBuffered_1_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
class IReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class HashSetBuffered_1;
}
namespace GlobalNamespace {
template<typename T>
struct HashSetBuffered_1_Enumerator;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::HashSetBuffered_1);
MARK_GEN_VAL_T(::GlobalNamespace::HashSetBuffered_1_Enumerator);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::HashSetBuffered_1, "", "HashSetBuffered`1");
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::HashSetBuffered_1_Enumerator, "", "HashSetBuffered`1/Enumerator");
// Dependencies System.Collections.Generic.HashSet`1::Enumerator<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: HashSetBuffered`1/Enumerator<T>
struct CORDL_TYPE HashSetBuffered_1_Enumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

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
inline void _ctor(::GlobalNamespace::HashSetBuffered_1<T>*  owner) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr HashSetBuffered_1_Enumerator() ;

// Ctor Parameters [CppParam { name: "_owner", ty: "::GlobalNamespace::HashSetBuffered_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_inner", ty: "::System::Collections::Generic::HashSet_1_Enumerator<T>", modifiers: "", def_value: None }, CppParam { name: "_disposed", ty: "bool", modifiers: "", def_value: None }]
constexpr HashSetBuffered_1_Enumerator(::GlobalNamespace::HashSetBuffered_1<T>*  _owner, ::System::Collections::Generic::HashSet_1_Enumerator<T>  _inner, bool  _disposed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17512};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _owner, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::HashSetBuffered_1<T>*  _owner;

/// @brief Field _inner, offset: 0x8, size: 0x18, def value: None
 ::System::Collections::Generic::HashSet_1_Enumerator<T>  _inner;

/// @brief Field _disposed, offset: 0x20, size: 0x1, def value: None
 bool  _disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: HashSetBuffered`1<T>
class CORDL_TYPE HashSetBuffered_1 : public ::System::Object {
public:
// Declarations
using Enumerator = ::GlobalNamespace::HashSetBuffered_1_Enumerator<T>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsIterating)) bool  IsIterating;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_PendingCount)) int32_t  PendingCount;

/// @brief Field _inner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__inner, put=__cordl_internal_set__inner)) ::System::Collections::Generic::HashSet_1<T>*  _inner;

/// @brief Field _iterationDepth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__iterationDepth, put=__cordl_internal_set__iterationDepth)) int32_t  _iterationDepth;

/// @brief Field _toAdd, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__toAdd, put=__cordl_internal_set__toAdd)) ::System::Collections::Generic::HashSet_1<T>*  _toAdd;

/// @brief Field _toRemove, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__toRemove, put=__cordl_internal_set__toRemove)) ::System::Collections::Generic::HashSet_1<T>*  _toRemove;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
constexpr operator  ::System::Collections::Generic::ICollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Add(T  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(T  item) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<T>  array, int32_t  arrayIndex) ;

/// @brief Method FlushPending, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FlushPending() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::HashSetBuffered_1_Enumerator<T> GetEnumerator() ;

/// @brief Method IsProperSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IsProperSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IsSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method IsSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method LogicalSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<T>* LogicalSet() ;

static inline ::GlobalNamespace::HashSetBuffered_1<T>* New_ctor() ;

static inline ::GlobalNamespace::HashSetBuffered_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection) ;

static inline ::GlobalNamespace::HashSetBuffered_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

static inline ::GlobalNamespace::HashSetBuffered_1<T>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method Overlaps, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Overlaps(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(T  item) ;

/// @brief Method SetEquals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>*  other) ;

/// @brief Method System.Collections.Generic.ICollection<T>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_T__Add(T  item) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Collections::Generic::HashSet_1<T>* const& __cordl_internal_get__inner() const;

constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get__inner() ;

constexpr int32_t const& __cordl_internal_get__iterationDepth() const;

constexpr int32_t& __cordl_internal_get__iterationDepth() ;

constexpr ::System::Collections::Generic::HashSet_1<T>* const& __cordl_internal_get__toAdd() const;

constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get__toAdd() ;

constexpr ::System::Collections::Generic::HashSet_1<T>* const& __cordl_internal_get__toRemove() const;

constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get__toRemove() ;

constexpr void __cordl_internal_set__inner(::System::Collections::Generic::HashSet_1<T>*  value) ;

constexpr void __cordl_internal_set__iterationDepth(int32_t  value) ;

constexpr void __cordl_internal_set__toAdd(::System::Collections::Generic::HashSet_1<T>*  value) ;

constexpr void __cordl_internal_set__toRemove(::System::Collections::Generic::HashSet_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>*  collection, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsIterating, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsIterating() ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_PendingCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_PendingCount() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HashSetBuffered_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HashSetBuffered_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashSetBuffered_1(HashSetBuffered_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashSetBuffered_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashSetBuffered_1(HashSetBuffered_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17513};

/// @brief Field _inner, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<T>*  ____inner;

/// @brief Field _toAdd, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<T>*  ____toAdd;

/// @brief Field _toRemove, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<T>*  ____toRemove;

/// @brief Field _iterationDepth, offset: 0x28, size: 0x4, def value: None
 int32_t  ____iterationDepth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
