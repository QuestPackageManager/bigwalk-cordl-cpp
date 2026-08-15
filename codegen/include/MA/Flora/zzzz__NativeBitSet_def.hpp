#pragma once
// IWYU pragma private; include "MA/Flora/NativeBitSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeBitSet)
namespace MA::Flora {
struct NativeBitSet_NativeBitSetDisposeJob;
}
namespace MA::Flora {
struct NativeBitSet_NativeBitSetDispose;
}
namespace MA::Flora {
struct ParallelBitArray;
}
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
namespace MA::Flora {
struct UnsafeBitSet;
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
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace MA::Flora {
struct NativeBitSet;
}
namespace MA::Flora {
struct NativeBitSet_NativeBitSetDispose;
}
namespace MA::Flora {
struct NativeBitSet_NativeBitSetDisposeJob;
}
// Write type traits
MARK_VAL_T(::MA::Flora::NativeBitSet);
MARK_VAL_T(::MA::Flora::NativeBitSet_NativeBitSetDispose);
MARK_VAL_T(::MA::Flora::NativeBitSet_NativeBitSetDisposeJob);
DEFINE_IL2CPP_CLASS(::MA::Flora::NativeBitSet, "MA.Flora", "NativeBitSet");
DEFINE_IL2CPP_CLASS(::MA::Flora::NativeBitSet_NativeBitSetDispose, "MA.Flora", "NativeBitSet/NativeBitSetDispose");
DEFINE_IL2CPP_CLASS(::MA::Flora::NativeBitSet_NativeBitSetDisposeJob, "MA.Flora", "NativeBitSet/NativeBitSetDisposeJob");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.NativeBitSet/NativeBitSetDispose
struct CORDL_TYPE NativeBitSet_NativeBitSetDispose {
public:
// Declarations
/// @brief Method Dispose, addr 0x18145f580, size 0x60, virtual false, abstract: false, final false
inline void Dispose() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeBitSet_NativeBitSetDispose() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "::MA::Flora::UnsafeBitSet*", modifiers: "", def_value: None }]
constexpr NativeBitSet_NativeBitSetDispose(::MA::Flora::UnsafeBitSet*  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12869};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::UnsafeBitSet*  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::NativeBitSet_NativeBitSetDispose, m_Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::NativeBitSet_NativeBitSetDispose) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.NativeBitSet::NativeBitSetDispose
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.NativeBitSet/NativeBitSetDisposeJob
struct CORDL_TYPE NativeBitSet_NativeBitSetDisposeJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x18145f580, size 0x60, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeBitSet_NativeBitSetDisposeJob() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::MA::Flora::NativeBitSet_NativeBitSetDispose", modifiers: "", def_value: None }]
constexpr NativeBitSet_NativeBitSetDisposeJob(::MA::Flora::NativeBitSet_NativeBitSetDispose  Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12870};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Data, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet_NativeBitSetDispose  Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::NativeBitSet_NativeBitSetDisposeJob, Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::NativeBitSet_NativeBitSetDisposeJob) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.NativeBitSet
struct CORDL_TYPE NativeBitSet {
public:
// Declarations
using NativeBitSetDispose = ::MA::Flora::NativeBitSet_NativeBitSetDispose;

using NativeBitSetDisposeJob = ::MA::Flora::NativeBitSet_NativeBitSetDisposeJob;

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

/// @brief Method Add, addr 0x18145f730, size 0x20, virtual false, abstract: false, final false
inline void Add(int32_t  index) ;

/// @brief Method AddNoResize, addr 0x18145f5e0, size 0x70, virtual false, abstract: false, final false
inline void AddNoResize(int32_t  index) ;

/// @brief Method AddRange, addr 0x18145f6f0, size 0x40, virtual false, abstract: false, final false
inline void AddRange(::Unity::Collections::NativeArray_1<int32_t>  indices) ;

/// @brief Method AddRange, addr 0x18145f6d0, size 0x20, virtual false, abstract: false, final false
inline void AddRange(int32_t*  indices, int32_t  count) ;

/// @brief Method AddRange, addr 0x18145f6b0, size 0x20, virtual false, abstract: false, final false
inline void AddRange(int32_t  startIndex, int32_t  count) ;

/// @brief Method AddRangeNoResize, addr 0x18145f650, size 0x40, virtual false, abstract: false, final false
inline void AddRangeNoResize(::Unity::Collections::NativeArray_1<int32_t>  indices) ;

/// @brief Method AddRangeNoResize, addr 0x18145f690, size 0x20, virtual false, abstract: false, final false
inline void AddRangeNoResize(int32_t*  indices, int32_t  count) ;

/// @brief Method AnyInRange, addr 0x18145f750, size 0x20, virtual false, abstract: false, final false
inline bool AnyInRange(int32_t  startIndex, int32_t  count) ;

/// @brief Method AsChunkArray, addr 0x18145f770, size 0x70, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint64_t> AsChunkArray() ;

/// @brief Method AsParallelBitArray, addr 0x18145f7e0, size 0xf0, virtual false, abstract: false, final false
inline ::MA::Flora::ParallelBitArray AsParallelBitArray() ;

/// @brief Method AsType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::MA::Flora::SetBitEnumerator_1<T> AsType() ;

/// @brief Method CheckRead, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void CheckRead() ;

/// @brief Method CheckWrite, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void CheckWrite() ;

/// @brief Method Clear, addr 0x18145f8d0, size 0x40, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0x18145f910, size 0x1e0, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBitSet Clone(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method Contains, addr 0x1814543a0, size 0x30, virtual false, abstract: false, final false
inline bool Contains(int32_t  index) ;

/// @brief Method CopyFrom, addr 0x18145faf0, size 0x90, virtual false, abstract: false, final false
inline void CopyFrom(::MA::Flora::NativeBitSet  other) ;

/// @brief Method CopyToList, addr 0x18145fb80, size 0x20, virtual false, abstract: false, final false
inline void CopyToList(::Unity::Collections::NativeList_1<int32_t>  list) ;

/// @brief Method Count, addr 0x18145fc90, size 0x40, virtual false, abstract: false, final false
inline int32_t Count() ;

/// @brief Method CountChunks, addr 0x18145fba0, size 0x90, virtual false, abstract: false, final false
inline int32_t CountChunks() ;

/// @brief Method CountInRange, addr 0x18145fc30, size 0x60, virtual false, abstract: false, final false
inline int32_t CountInRange(int32_t  startIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x18145fcd0, size 0xb0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method Dispose, addr 0x18145fd80, size 0x80, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ExceptWith, addr 0x18145fe00, size 0x80, virtual false, abstract: false, final false
inline void ExceptWith(::MA::Flora::NativeBitSet  other) ;

/// @brief Method FindFreeIndex, addr 0x18145fe80, size 0x80, virtual false, abstract: false, final false
inline int32_t FindFreeIndex(int32_t  startIndex, int32_t  count) ;

/// @brief Method GetChunkEnumerator, addr 0x18145ff00, size 0x60, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitChunkEnumerator GetChunkEnumerator() ;

/// @brief Method GetEnumerator, addr 0x18145ff60, size 0x70, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitEnumerator_1<int32_t> GetEnumerator() ;

/// @brief Method GetReverseEnumerator, addr 0x18145ff60, size 0x70, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitReverseEnumerator_1<int32_t> GetReverseEnumerator() ;

/// @brief Method GetUnsafeSet, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::UnsafeBitSet* GetUnsafeSet() ;

/// @brief Method IndicesInRange, addr 0x18145ffd0, size 0x70, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitEnumerator_1<int32_t> IndicesInRange(int32_t  startIndex, int32_t  count) ;

/// @brief Method IntersectWith, addr 0x181460040, size 0x40, virtual false, abstract: false, final false
inline void IntersectWith(::MA::Flora::NativeBitSet  other) ;

/// @brief Method Remove, addr 0x1814600a0, size 0x20, virtual false, abstract: false, final false
inline bool Remove(int32_t  index) ;

/// @brief Method RemoveRange, addr 0x181460080, size 0x20, virtual false, abstract: false, final false
inline bool RemoveRange(int32_t  index, int32_t  count) ;

/// @brief Method ReserveCapacity, addr 0x1814600c0, size 0x30, virtual false, abstract: false, final false
inline void ReserveCapacity(int32_t  capacity) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator, addr 0x1814600f0, size 0xb0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1814600f0, size 0xb0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> ToArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator) ;

/// @brief Method ToArray, addr 0x1814601a0, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method ToArray, addr 0x1814601f0, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> ToArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator) ;

/// @brief Method ToChunkArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> ToChunkArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method ToChunkArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> ToChunkArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator) ;

/// @brief Method ToChunkArray, addr 0x181460240, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> ToChunkArray(::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method ToChunkArray, addr 0x181460290, size 0x50, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> ToChunkArray(::by_ref<::Unity::Collections::RewindableAllocator>  allocator) ;

/// @brief Method TryAdd, addr 0x1814602e0, size 0x20, virtual false, abstract: false, final false
inline bool TryAdd(int32_t  index) ;

/// @brief Method UnionAt, addr 0x181460300, size 0x20, virtual false, abstract: false, final false
inline void UnionAt(int32_t  srcIndex, int32_t  dstIndex) ;

/// @brief Method UnionWith, addr 0x181460320, size 0x40, virtual false, abstract: false, final false
inline void UnionWith(::MA::Flora::NativeBitSet  other) ;

/// @brief Method .ctor, addr 0x181460360, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method get_IsCreated, addr 0x1802ff710, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_IsEmpty, addr 0x181454380, size 0x20, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_Item, addr 0x1814543a0, size 0x30, virtual false, abstract: false, final false
inline bool get_Item(int32_t  index) ;

/// @brief Method get_MaxLength, addr 0x1814543d0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_MaxLength() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_Item, addr 0x1814543f0, size 0x20, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeBitSet() ;

// Ctor Parameters [CppParam { name: "m_SetData", ty: "::MA::Flora::UnsafeBitSet*", modifiers: "", def_value: None }]
constexpr NativeBitSet(::MA::Flora::UnsafeBitSet*  m_SetData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12871};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_SetData, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::UnsafeBitSet*  m_SetData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::NativeBitSet, m_SetData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::NativeBitSet) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
