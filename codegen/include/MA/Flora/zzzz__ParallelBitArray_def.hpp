#pragma once
// IWYU pragma private; include "MA/Flora/ParallelBitArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelBitArray)
namespace MA::Flora {
template<typename TIndexType>
struct SetBitEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeBitArray;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
struct RewindableAllocator;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace MA::Flora {
struct ParallelBitArray;
}
// Write type traits
MARK_VAL_T(::MA::Flora::ParallelBitArray);
DEFINE_IL2CPP_CLASS(::MA::Flora::ParallelBitArray, "MA.Flora", "ParallelBitArray");
// Dependencies Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ParallelBitArray
struct CORDL_TYPE ParallelBitArray {
public:
// Declarations
 __declspec(property(get=get_ChunkLength)) int32_t  ChunkLength;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Length)) int32_t  Length;

 __declspec(property(get=get_SetBits)) ::MA::Flora::SetBitEnumerator_1<int32_t>  SetBits;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AsArray, addr 0x181454750, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<uint64_t> AsArray() ;

/// @brief Method AsReadOnlyUnsafeBitArray, addr 0x181454780, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray AsReadOnlyUnsafeBitArray() ;

/// @brief Method AsUnsafeBitArray, addr 0x181454780, size 0x40, virtual false, abstract: false, final false
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray AsUnsafeBitArray() ;

/// @brief Method CheckArgs, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void CheckArgs(int32_t  pos, int32_t  numBits) ;

/// @brief Method Copy, addr 0x181454900, size 0xa0, virtual false, abstract: false, final false
inline void Copy(int32_t  dstPos, ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeBitArray>  srcBitArray, int32_t  srcPos, int32_t  numBits) ;

/// @brief Method Copy, addr 0x1814549a0, size 0xa0, virtual false, abstract: false, final false
inline void Copy(int32_t  dstPos, int32_t  srcPos, int32_t  numBits) ;

/// @brief Method CopyFrom, addr 0x18071b070, size 0x5900, virtual false, abstract: false, final false
inline void CopyFrom(::MA::Flora::ParallelBitArray  other) ;

/// @brief Method CopyFrom, addr 0x1814547c0, size 0x110, virtual false, abstract: false, final false
inline void CopyFrom(::MA::Flora::ParallelBitArray  other, int32_t  srcPos, int32_t  dstPos, int32_t  numBits) ;

/// @brief Method CopyTo, addr 0x1814548d0, size 0x30, virtual false, abstract: false, final false
inline void CopyTo(::MA::Flora::ParallelBitArray  other) ;

/// @brief Method CountBits, addr 0x181454a40, size 0x90, virtual false, abstract: false, final false
inline int32_t CountBits(int32_t  startIndex, int32_t  count) ;

/// @brief Method Dispose, addr 0x181460b70, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x181460ba0, size 0x60, virtual false, abstract: false, final false
inline void Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method FillOnes, addr 0x181460c00, size 0x80, virtual false, abstract: false, final false
inline void FillOnes(int32_t  length) ;

/// @brief Method FillZeroes, addr 0x181460c80, size 0xc0, virtual false, abstract: false, final false
inline void FillZeroes(int32_t  length) ;

/// @brief Method FindFirstSetBit, addr 0x181454ad0, size 0x80, virtual false, abstract: false, final false
inline int32_t FindFirstSetBit(int32_t  startIndex, int32_t  count) ;

/// @brief Method FindFirstZeroBit, addr 0x181454b50, size 0x80, virtual false, abstract: false, final false
inline int32_t FindFirstZeroBit(int32_t  startIndex, int32_t  count) ;

/// @brief Method FindLastSetBit, addr 0x181454bd0, size 0x80, virtual false, abstract: false, final false
inline int32_t FindLastSetBit(int32_t  startIndex, int32_t  count) ;

/// @brief Method FromExternal, addr 0x181460d40, size 0x100, virtual false, abstract: false, final false
static inline ::MA::Flora::ParallelBitArray FromExternal(uint64_t*  ptr, int32_t  length, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Get, addr 0x181454cd0, size 0x20, virtual false, abstract: false, final false
inline bool Get(int32_t  index) ;

/// @brief Method GetChunk, addr 0x181454c50, size 0x10, virtual false, abstract: false, final false
inline uint64_t GetChunk(int32_t  chunkIndex) ;

/// @brief Method GetSubArray, addr 0x181454c60, size 0x70, virtual false, abstract: false, final false
inline ::MA::Flora::ParallelBitArray GetSubArray(int32_t  length) ;

/// @brief Method GetUnsafePtr, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline int64_t* GetUnsafePtr() ;

/// @brief Method GetUnsafePtrUnchecked, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline int64_t* GetUnsafePtrUnchecked() ;

/// @brief Method GetUnsafeReadOnlyPtr, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline int64_t* GetUnsafeReadOnlyPtr() ;

/// @brief Method InterlockedOrChunk, addr 0x181454cf0, size 0x60, virtual false, abstract: false, final false
inline void InterlockedOrChunk(int32_t  chunkIndex, uint64_t  chunkBits) ;

/// @brief Method InterlockedReadChunk, addr 0x181454d50, size 0x20, virtual false, abstract: false, final false
inline uint64_t InterlockedReadChunk(int32_t  chunkIndex) ;

/// @brief Method IsValidIndex, addr 0x181454d70, size 0x10, virtual false, abstract: false, final false
inline bool IsValidIndex(int32_t  index) ;

/// @brief Method Or, addr 0x181454d80, size 0x40, virtual false, abstract: false, final false
inline void Or(::MA::Flora::ParallelBitArray  other) ;

/// @brief Method Resize, addr 0x181460e40, size 0x1d0, virtual false, abstract: false, final false
inline void Resize(int32_t  newLength) ;

/// @brief Method Set, addr 0x181455030, size 0x50, virtual false, abstract: false, final false
inline void Set(int32_t  index, bool  value) ;

/// @brief Method SetAtomic, addr 0x181454dc0, size 0x80, virtual false, abstract: false, final false
inline void SetAtomic(int32_t  index, bool  value) ;

/// @brief Method SetBitEnumerator, addr 0x181454e40, size 0xb0, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitEnumerator_1<int32_t> SetBitEnumerator(int32_t  srcPos, int32_t  numBits) ;

/// @brief Method SetChunk, addr 0x180bd4cc0, size 0x250a0, virtual false, abstract: false, final false
inline void SetChunk(int32_t  chunkIndex, uint64_t  chunkBits) ;

/// @brief Method SetRange, addr 0x181454f90, size 0xa0, virtual false, abstract: false, final false
inline void SetRange(int32_t  pos, uint64_t  bits, int32_t  numBits) ;

/// @brief Method SetRange, addr 0x181454ef0, size 0xa0, virtual false, abstract: false, final false
inline void SetRange(int32_t  pos, bool  value, int32_t  numBits) ;

/// @brief Method .ctor, addr 0x181461070, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  length, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor, addr 0x181461010, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  length, ::by_ref<::Unity::Collections::RewindableAllocator>  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method get_ChunkLength, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_ChunkLength() ;

/// @brief Method get_IsCreated, addr 0x1802ff710, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_Length, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Method get_SetBits, addr 0x181455080, size 0xc0, virtual false, abstract: false, final false
inline ::MA::Flora::SetBitEnumerator_1<int32_t> get_SetBits() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParallelBitArray() ;

// Ctor Parameters [CppParam { name: "m_Bits", ty: "::Unity::Collections::NativeArray_1<int64_t>", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParallelBitArray(::Unity::Collections::NativeArray_1<int64_t>  m_Bits, int32_t  m_Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12886};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Bits, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int64_t>  m_Bits;

/// @brief Field m_Length, offset: 0x10, size: 0x4, def value: None
 int32_t  m_Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ParallelBitArray, m_Bits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ParallelBitArray, m_Length) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ParallelBitArray) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
