#pragma once
// IWYU pragma private; include "MA/Flora/NativeRegionAllocator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeRegionAllocator)
namespace MA::Flora {
struct UnsafeRegionAllocator;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
// Forward declare root types
namespace MA::Flora {
struct NativeRegionAllocator;
}
// Write type traits
MARK_VAL_T(::MA::Flora::NativeRegionAllocator);
DEFINE_IL2CPP_CLASS(::MA::Flora::NativeRegionAllocator, "MA.Flora", "NativeRegionAllocator");
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.NativeRegionAllocator
struct CORDL_TYPE NativeRegionAllocator {
public:
// Declarations
 __declspec(property(get=get_AllocatedSize)) int32_t  AllocatedSize;

 __declspec(property(get=get_AvailableBlocks)) int32_t  AvailableBlocks;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_MaxAllocatedSize)) int32_t  MaxAllocatedSize;

 __declspec(property(get=get_PendingFreeBlockCount)) int32_t  PendingFreeBlockCount;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Allocate, addr 0x181454410, size 0x10, virtual false, abstract: false, final false
inline int32_t Allocate(int32_t  count) ;

/// @brief Method CheckRead, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void CheckRead() ;

/// @brief Method CheckWrite, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void CheckWrite() ;

/// @brief Method Clear, addr 0x181454420, size 0x30, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x181454450, size 0xa0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Free, addr 0x1814544f0, size 0x10, virtual false, abstract: false, final false
inline void Free(int32_t  index, int32_t  count) ;

/// @brief Method IsElementFree, addr 0x181454500, size 0x40, virtual false, abstract: false, final false
inline bool IsElementFree(int32_t  index) ;

/// @brief Method MergeFree, addr 0x181454540, size 0x10, virtual false, abstract: false, final false
inline void MergeFree() ;

/// @brief Method .ctor, addr 0x181454550, size 0x110, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle  allocator) ;

/// @brief Method get_AllocatedSize, addr 0x181454660, size 0x10, virtual false, abstract: false, final false
inline int32_t get_AllocatedSize() ;

/// @brief Method get_AvailableBlocks, addr 0x181454670, size 0x10, virtual false, abstract: false, final false
inline int32_t get_AvailableBlocks() ;

/// @brief Method get_IsCreated, addr 0x181454680, size 0x20, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_MaxAllocatedSize, addr 0x180a236f0, size 0x2a00, virtual false, abstract: false, final false
inline int32_t get_MaxAllocatedSize() ;

/// @brief Method get_PendingFreeBlockCount, addr 0x1814546a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_PendingFreeBlockCount() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeRegionAllocator() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "::MA::Flora::UnsafeRegionAllocator*", modifiers: "", def_value: None }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
constexpr NativeRegionAllocator(::MA::Flora::UnsafeRegionAllocator*  m_Data, ::Unity::Collections::AllocatorManager_AllocatorHandle  m_Allocator) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::UnsafeRegionAllocator*  m_Data;

/// @brief Field m_Allocator, offset: 0x8, size: 0x4, def value: None
 ::Unity::Collections::AllocatorManager_AllocatorHandle  m_Allocator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::NativeRegionAllocator, m_Data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::NativeRegionAllocator, m_Allocator) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::NativeRegionAllocator) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
