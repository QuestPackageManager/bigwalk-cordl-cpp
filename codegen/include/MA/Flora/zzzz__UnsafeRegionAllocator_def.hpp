#pragma once
// IWYU pragma private; include "MA/Flora/UnsafeRegionAllocator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeRegionAllocator)
namespace MA::Flora {
struct UnsafeRegionAllocator_Block;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
// Forward declare root types
namespace MA::Flora {
struct UnsafeRegionAllocator;
}
namespace MA::Flora {
struct UnsafeRegionAllocator_Block;
}
// Write type traits
MARK_VAL_T(::MA::Flora::UnsafeRegionAllocator);
MARK_VAL_T(::MA::Flora::UnsafeRegionAllocator_Block);
DEFINE_IL2CPP_CLASS(::MA::Flora::UnsafeRegionAllocator, "MA.Flora", "UnsafeRegionAllocator");
DEFINE_IL2CPP_CLASS(::MA::Flora::UnsafeRegionAllocator_Block, "MA.Flora", "UnsafeRegionAllocator/Block");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.UnsafeRegionAllocator/Block
struct CORDL_TYPE UnsafeRegionAllocator_Block {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::MA::Flora::UnsafeRegionAllocator_Block>"
constexpr operator  ::System::IComparable_1<::MA::Flora::UnsafeRegionAllocator_Block>*() ;

/// @brief Method CompareTo, addr 0x1805aa020, size 0x20, virtual true, abstract: false, final true
inline int32_t CompareTo(::MA::Flora::UnsafeRegionAllocator_Block  other) ;

/// @brief Convert to "::System::IComparable_1<::MA::Flora::UnsafeRegionAllocator_Block>"
constexpr ::System::IComparable_1<::MA::Flora::UnsafeRegionAllocator_Block>* i___System__IComparable_1___MA__Flora__UnsafeRegionAllocator_Block_() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeRegionAllocator_Block() ;

// Ctor Parameters [CppParam { name: "Offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnsafeRegionAllocator_Block(int32_t  Offset, int32_t  Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12903};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Offset, offset: 0x0, size: 0x4, def value: None
 int32_t  Offset;

/// @brief Field Length, offset: 0x4, size: 0x4, def value: None
 int32_t  Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::UnsafeRegionAllocator_Block, Offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::UnsafeRegionAllocator_Block, Length) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::UnsafeRegionAllocator_Block) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.UnsafeRegionAllocator::Block, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.UnsafeRegionAllocator
struct CORDL_TYPE UnsafeRegionAllocator {
public:
// Declarations
using Block = ::MA::Flora::UnsafeRegionAllocator_Block;

 __declspec(property(get=get_AllocatedSize)) int32_t  AllocatedSize;

 __declspec(property(get=get_AvailableBlocks)) int32_t  AvailableBlocks;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_MaxAllocatedSize)) int32_t  MaxAllocatedSize;

 __declspec(property(get=get_PendingFreeBlockCount)) int32_t  PendingFreeBlockCount;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Allocate, addr 0x181464290, size 0x140, virtual false, abstract: false, final false
inline int32_t Allocate(int32_t  count) ;

/// @brief Method CheckIndexCount, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void CheckIndexCount(int32_t  index, int32_t  count) ;

/// @brief Method Clear, addr 0x1814643d0, size 0x40, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x181464410, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FindFreeBlock, addr 0x181464460, size 0x50, virtual false, abstract: false, final false
inline int32_t FindFreeBlock(int32_t  count, int32_t  startIndex) ;

/// @brief Method Free, addr 0x1814644b0, size 0x90, virtual false, abstract: false, final false
inline void Free(int32_t  index, int32_t  count) ;

/// @brief Method IsElementFree, addr 0x181464540, size 0x50, virtual false, abstract: false, final false
inline bool IsElementFree(int32_t  index) ;

/// @brief Method MergeFree, addr 0x181464590, size 0x250, virtual false, abstract: false, final false
inline void MergeFree() ;

/// @brief Method .ctor, addr 0x1814647e0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method get_AllocatedSize, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_AllocatedSize() ;

/// @brief Method get_AvailableBlocks, addr 0x1814558d0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_AvailableBlocks() ;

/// @brief Method get_IsCreated, addr 0x1814558e0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_MaxAllocatedSize, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_MaxAllocatedSize() ;

/// @brief Method get_PendingFreeBlockCount, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_PendingFreeBlockCount() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeRegionAllocator() ;

// Ctor Parameters [CppParam { name: "m_AllocatedSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MaxAllocatedSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_HighestAllocatedSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FirstValidBlockIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FreeBlocks", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::UnsafeRegionAllocator_Block>", modifiers: "", def_value: None }, CppParam { name: "m_PendingDeallocations", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::UnsafeRegionAllocator_Block>", modifiers: "", def_value: None }]
constexpr UnsafeRegionAllocator(int32_t  m_AllocatedSize, int32_t  m_MaxAllocatedSize, int32_t  m_HighestAllocatedSize, int32_t  m_FirstValidBlockIndex, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::UnsafeRegionAllocator_Block>  m_FreeBlocks, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::UnsafeRegionAllocator_Block>  m_PendingDeallocations) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12904};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field m_AllocatedSize, offset: 0x0, size: 0x4, def value: None
 int32_t  m_AllocatedSize;

/// @brief Field m_MaxAllocatedSize, offset: 0x4, size: 0x4, def value: None
 int32_t  m_MaxAllocatedSize;

/// @brief Field m_HighestAllocatedSize, offset: 0x8, size: 0x4, def value: None
 int32_t  m_HighestAllocatedSize;

/// @brief Field m_FirstValidBlockIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  m_FirstValidBlockIndex;

/// @brief Field m_FreeBlocks, offset: 0x10, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::UnsafeRegionAllocator_Block>  m_FreeBlocks;

/// @brief Field m_PendingDeallocations, offset: 0x28, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::UnsafeRegionAllocator_Block>  m_PendingDeallocations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::UnsafeRegionAllocator, m_AllocatedSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::UnsafeRegionAllocator, m_MaxAllocatedSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::UnsafeRegionAllocator, m_HighestAllocatedSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::UnsafeRegionAllocator, m_FirstValidBlockIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::UnsafeRegionAllocator, m_FreeBlocks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::UnsafeRegionAllocator, m_PendingDeallocations) == 0x28, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::UnsafeRegionAllocator) == 0x40, "Size mismatch!");

} // namespace end def MA::Flora
