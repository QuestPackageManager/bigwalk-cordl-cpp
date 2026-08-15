#pragma once
// IWYU pragma private; include "MA/Flora/UnsafeBitSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeBitSet)
namespace MA::Flora {
struct SetBitChunkEnumerator;
}
namespace MA::Flora {
template<typename TIndexType>
struct SetBitEnumerator_1;
}
namespace MA::Flora {
template<typename TIndexType>
struct SetBitReverseEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace Unity::Collections {
struct RewindableAllocator;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace MA::Flora {
struct UnsafeBitSet;
}
// Write type traits
MARK_VAL_T(::MA::Flora::UnsafeBitSet);
DEFINE_IL2CPP_CLASS(::MA::Flora::UnsafeBitSet, "MA.Flora", "UnsafeBitSet");
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.UnsafeBitSet
struct CORDL_TYPE UnsafeBitSet {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_Item, put=set_Item)) bool  Item[];

 __declspec(property(get=get_MaxLength)) int32_t  MaxLength;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Add, addr 0x181455700, size 0x90, virtual false, abstract: false, final false
inline void Add(int32_t  index) ;

/// @brief Method AddNoResize, addr 0x1814556a0, size 0x60, virtual false, abstract: false, final false
inline void AddNoResize(int32_t  index) ;

/// @brief Method AddRange, addr 0x181462840, size 0x110, virtual false, abstract: false, final false
inline void AddRange(int32_t*  indices, int32_t  count) ;

/// @brief Method AddRange, addr 0x1814627a0, size 0xa0, virtual false, abstract: false, final false
inline void AddRange(int32_t  startIndex, int32_t  count) ;

/// @brief Method AddRangeNoResize, addr 0x181462700, size 0xa0, virtual false, abstract: false, final false
inline void AddRangeNoResize(int32_t*  indices, int32_t  count) ;

/// @brief Method AnyInRange, addr 0x181462950, size 0x100, virtual false, abstract: false, final false
inline bool AnyInRange(int32_t  startIndex, int32_t  count) ;

/// @brief Method AsType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::MA::Flora::SetBitEnumerator_1<T> AsType() ;

/// @brief Method CheckNegative, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void CheckNegative(int32_t  index) ;

/// @brief Method Clear, addr 0x181462a50, size 0x30, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0x181462a80, size 0x1f0, virtual false, abstract: false, final false
inline ::MA::Flora::UnsafeBitSet Clone(::Unity::Collections::Allocator  allocator) ;

/// @brief Method Contains, addr 0x181455860, size 0x30, virtual false, abstract: false, final false
inline bool Contains(int32_t  index) ;

/// @brief Method CopyFrom, addr 0x181462c70, size 0xa0, virtual false, abstract: false, final false
inline void CopyFrom(::MA::Flora::UnsafeBitSet  other) ;

/// @brief Method CopyToList, addr 0x181462d10, size 0x130, virtual false, abstract: false, final false
inline void CopyToList(::Unity::Collections::NativeList_1<int32_t>  list) ;

/// @brief Method Count, addr 0x181462f20, size 0x40, virtual false, abstract: false, final false
inline int32_t Count() ;

/// @brief Method CountChunks, addr 0x181462e40, size 0x80, virtual false, abstract: false, final false
inline int32_t CountChunks() ;

/// @brief Method CountInRange, addr 0x181462ec0, size 0x60, virtual false, abstract: false, final false
inline int32_t CountInRange(int32_t  startIndex, int32_t  count) ;

/// @brief Method Create, addr 0x181462f60, size 0xa0, virtual false, abstract: false, final false
static inline ::MA::Flora::UnsafeBitSet* Create(int32_t  capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method Destroy, addr 0x181463000, size 0x50, virtual false, abstract: false, final false
static inline void Destroy(::MA::Flora::UnsafeBitSet*  set) ;

/// @brief Method Destroy, addr 0x181463050, size 0x50, virtual false, abstract: false, final false
static inline void Destroy(::MA::Flora::UnsafeBitSet*  set, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method Dispose, addr 0x1814630a0, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x1814630e0, size 0x70, virtual false, abstract: false, final false
inline void Dispose(::Unity::Jobs::JobHandle  jobs) ;

/// @brief Method EnsureLength, addr 0x181463150, size 0x30, virtual false, abstract: false, final false
inline void EnsureLength(int32_t  length) ;

/// @brief Method ExceptWith, addr 0x181463180, size 0x80, virtual false, abstract: false, final false
inline void ExceptWith(::by_ref<::MA::Flora::UnsafeBitSet>  other) ;

/// @brief Method FindFreeIndex, addr 0x181463200, size 0xb0, virtual false, abstract: false, final false
inline int32_t FindFreeIndex(int32_t  startIndex, int32_t  count) ;

/// @brief Method GetChunkEnumerator, addr 0x181455790, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitChunkEnumerator GetChunkEnumerator() ;

/// @brief Method GetEnumerator, addr 0x1807f0030, size 0xb0, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitEnumerator_1<int32_t> GetEnumerator() ;

/// @brief Method GetReverseEnumerator, addr 0x1807f0030, size 0xb0, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitReverseEnumerator_1<int32_t> GetReverseEnumerator() ;

/// @brief Method IndicesInRange, addr 0x1814632b0, size 0x120, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitEnumerator_1<int32_t> IndicesInRange(int32_t  startIndex, int32_t  count) ;

/// @brief Method IntersectWith, addr 0x1814633d0, size 0x110, virtual false, abstract: false, final false
inline void IntersectWith(::MA::Flora::UnsafeBitSet  other) ;

/// @brief Method IsSet, addr 0x181454cd0, size 0x20, virtual false, abstract: false, final false
inline bool IsSet(int32_t  index) ;

/// @brief Method Remove, addr 0x181463580, size 0x90, virtual false, abstract: false, final false
inline bool Remove(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x1814634e0, size 0xa0, virtual false, abstract: false, final false
inline bool RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method ReserveCapacity, addr 0x181463610, size 0x40, virtual false, abstract: false, final false
inline void ReserveCapacity(int32_t  capacity) ;

/// @brief Method SetBit, addr 0x181455810, size 0x40, virtual false, abstract: false, final false
inline void SetBit(int32_t  index, bool  value) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x181463650, size 0xb0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181463650, size 0xb0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> ToArray(::Unity::Collections::Allocator  allocator) ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> ToArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator) ;

/// @brief Method ToArray, addr 0x181463880, size 0x180, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method ToArray, addr 0x181463700, size 0x180, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> ToArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator) ;

/// @brief Method ToChunkArray, addr 0x181463a00, size 0x1d0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> ToChunkArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method ToChunkArray, addr 0x181463bd0, size 0x1d0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> ToChunkArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator) ;

/// @brief Method TryAdd, addr 0x181463da0, size 0xd0, virtual false, abstract: false, final false
inline bool TryAdd(int32_t  index) ;

/// @brief Method UnionAt, addr 0x181463e70, size 0xc0, virtual false, abstract: false, final false
inline void UnionAt(int32_t  srcIndex, int32_t  dstIndex) ;

/// @brief Method UnionWith, addr 0x181463f30, size 0x1c0, virtual false, abstract: false, final false
inline void UnionWith(::MA::Flora::UnsafeBitSet  other) ;

/// @brief Method UpdateMinMax, addr 0x1814640f0, size 0x100, virtual false, abstract: false, final false
inline void UpdateMinMax() ;

/// @brief Method .ctor, addr 0x1814641f0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method get_Capacity, addr 0x181455850, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_IsCreated, addr 0x1802ff710, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_IsEmpty, addr 0x1807ebcd0, size 0x4360, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_Item, addr 0x181455860, size 0x30, virtual false, abstract: false, final false
inline bool get_Item(int32_t  index) ;

/// @brief Method get_MaxLength, addr 0x181455890, size 0x20, virtual false, abstract: false, final false
inline int32_t get_MaxLength() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_Item, addr 0x1814558b0, size 0x20, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeBitSet() ;

// Ctor Parameters [CppParam { name: "m_Bits", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "m_MinIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MaxIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnsafeBitSet(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint64_t>  m_Bits, int32_t  m_MinIndex, int32_t  m_MaxIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12901};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Bits, offset: 0x0, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint64_t>  m_Bits;

/// @brief Field m_MinIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  m_MinIndex;

/// @brief Field m_MaxIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  m_MaxIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::UnsafeBitSet, m_Bits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::UnsafeBitSet, m_MinIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::UnsafeBitSet, m_MaxIndex) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::UnsafeBitSet) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
