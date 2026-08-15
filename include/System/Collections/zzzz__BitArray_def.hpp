#pragma once
// IWYU pragma private; include "System/Collections/BitArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitArray)
namespace System::Collections {
class BitArray_BitArrayEnumeratorSimple;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class BitArray;
}
namespace System::Collections {
class BitArray_BitArrayEnumeratorSimple;
}
// Write type traits
MARK_REF_T(::System::Collections::BitArray*);
MARK_REF_T(::System::Collections::BitArray_BitArrayEnumeratorSimple*);
DEFINE_IL2CPP_CLASS(::System::Collections::BitArray*, "System.Collections", "BitArray");
DEFINE_IL2CPP_CLASS(::System::Collections::BitArray_BitArrayEnumeratorSimple*, "System.Collections", "BitArray/BitArrayEnumeratorSimple");
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.BitArray/BitArrayEnumeratorSimple
class CORDL_TYPE BitArray_BitArrayEnumeratorSimple : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field bitarray, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_bitarray, put=__cordl_internal_set_bitarray)) ::System::Collections::BitArray*  bitarray;

/// @brief Field currentElement, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_currentElement, put=__cordl_internal_set_currentElement)) bool  currentElement;

/// @brief Field index, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field version, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Clone, addr 0x180535a00, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method MoveNext, addr 0x1816c3d90, size 0xa0, virtual true, abstract: false, final false
inline bool MoveNext() ;

static inline ::System::Collections::BitArray_BitArrayEnumeratorSimple* New_ctor(::System::Collections::BitArray*  bitarray) ;

/// @brief Method Reset, addr 0x1816c3e30, size 0x30, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::System::Collections::BitArray* const& __cordl_internal_get_bitarray() const;

constexpr ::System::Collections::BitArray*& __cordl_internal_get_bitarray() ;

constexpr bool const& __cordl_internal_get_currentElement() const;

constexpr bool& __cordl_internal_get_currentElement() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_bitarray(::System::Collections::BitArray*  value) ;

constexpr void __cordl_internal_set_currentElement(bool  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x1816c3e60, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::BitArray*  bitarray) ;

/// @brief Method get_Current, addr 0x1816c3ea0, size 0x80, virtual true, abstract: false, final false
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitArray_BitArrayEnumeratorSimple() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitArray_BitArrayEnumeratorSimple", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitArray_BitArrayEnumeratorSimple(BitArray_BitArrayEnumeratorSimple && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitArray_BitArrayEnumeratorSimple", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitArray_BitArrayEnumeratorSimple(BitArray_BitArrayEnumeratorSimple const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1480};

/// @brief Field bitarray, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::BitArray*  ___bitarray;

/// @brief Field index, offset: 0x18, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field version, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___version;

/// @brief Field currentElement, offset: 0x20, size: 0x1, def value: None
 bool  ___currentElement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::BitArray_BitArrayEnumeratorSimple, ___bitarray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::BitArray_BitArrayEnumeratorSimple, ___index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::BitArray_BitArrayEnumeratorSimple, ___version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::BitArray_BitArrayEnumeratorSimple, ___currentElement) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Collections::BitArray_BitArrayEnumeratorSimple) == 0x28, "Size mismatch!");

} // namespace end def System::Collections
// Dependencies System.Object
namespace System::Collections {
// Is value type: false
// CS Name: System.Collections.BitArray
class CORDL_TYPE BitArray : public ::System::Object {
public:
// Declarations
using BitArrayEnumeratorSimple = ::System::Collections::BitArray_BitArrayEnumeratorSimple;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsSynchronized)) bool  IsSynchronized;

 __declspec(property(get=get_Item, put=set_Item)) bool  Item[];

 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

 __declspec(property(get=get_SyncRoot)) ::System::Object*  SyncRoot;

/// @brief Field _syncRoot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__syncRoot, put=__cordl_internal_set__syncRoot)) ::System::Object*  _syncRoot;

/// @brief Field _version, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__version, put=__cordl_internal_set__version)) int32_t  _version;

/// @brief Field m_array, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_array, put=__cordl_internal_set_m_array)) ::ArrayW<int32_t>  m_array;

/// @brief Field m_length, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_length, put=__cordl_internal_set_m_length)) int32_t  m_length;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Clone, addr 0x1816c3f20, size 0xb0, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method CopyTo, addr 0x1816c3fd0, size 0x3f0, virtual true, abstract: false, final true
inline void CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Get, addr 0x1816c4430, size 0xc0, virtual false, abstract: false, final false
inline bool Get(int32_t  index) ;

/// @brief Method GetArrayLength, addr 0x1816c43c0, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetArrayLength(int32_t  n, int32_t  div) ;

/// @brief Method GetEnumerator, addr 0x1816c43e0, size 0x50, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* GetEnumerator() ;

static inline ::System::Collections::BitArray* New_ctor(::System::Collections::BitArray*  bits) ;

static inline ::System::Collections::BitArray* New_ctor(int32_t  length) ;

static inline ::System::Collections::BitArray* New_ctor(int32_t  length, bool  defaultValue) ;

/// @brief Method Or, addr 0x1816c44f0, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::BitArray* Or(::System::Collections::BitArray*  value) ;

/// @brief Method Set, addr 0x1816c45d0, size 0xe0, virtual false, abstract: false, final false
inline void Set(int32_t  index, bool  value) ;

/// @brief Method SetAll, addr 0x1816c4580, size 0x50, virtual false, abstract: false, final false
inline void SetAll(bool  value) ;

constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

constexpr ::System::Object*& __cordl_internal_get__syncRoot() ;

constexpr int32_t const& __cordl_internal_get__version() const;

constexpr int32_t& __cordl_internal_get__version() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_array() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_array() ;

constexpr int32_t const& __cordl_internal_get_m_length() const;

constexpr int32_t& __cordl_internal_get_m_length() ;

constexpr void __cordl_internal_set__syncRoot(::System::Object*  value) ;

constexpr void __cordl_internal_set__version(int32_t  value) ;

constexpr void __cordl_internal_set_m_array(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_length(int32_t  value) ;

/// @brief Method .ctor, addr 0x1816c48d0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::BitArray*  bits) ;

/// @brief Method .ctor, addr 0x1816c47c0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(int32_t  length) ;

/// @brief Method .ctor, addr 0x1816c46b0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(int32_t  length, bool  defaultValue) ;

/// @brief Method get_Count, addr 0x1802f41a0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsSynchronized, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool get_IsSynchronized() ;

/// @brief Method get_Item, addr 0x1816c4970, size 0x10, virtual false, abstract: false, final false
inline bool get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_SyncRoot, addr 0x180a27730, size 0x52b0, virtual true, abstract: false, final true
inline ::System::Object* get_SyncRoot() ;

/// @brief Convert to "::System::Collections::ICollection"
constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

/// @brief Method set_Item, addr 0x1816c45d0, size 0xe0, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, bool  value) ;

/// @brief Method set_Length, addr 0x1816c4980, size 0x150, virtual false, abstract: false, final false
inline void set_Length(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BitArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BitArray", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BitArray(BitArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BitArray", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BitArray(BitArray const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1481};

/// @brief Field m_array, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_array;

/// @brief Field m_length, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_length;

/// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____version;

/// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ____syncRoot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Collections::BitArray, ___m_array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::BitArray, ___m_length) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::BitArray, ____version) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Collections::BitArray, ____syncRoot) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Collections::BitArray) == 0x28, "Size mismatch!");

} // namespace end def System::Collections
