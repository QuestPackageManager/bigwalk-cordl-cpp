#pragma once
// IWYU pragma private; include "MA/Flora/SilhouettePlaneCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SilhouettePlaneCache)
namespace MA::Flora {
struct SilhouettePlaneCache_Slot;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace MA::Flora {
struct SilhouettePlaneCache;
}
namespace MA::Flora {
struct SilhouettePlaneCache_Slot;
}
// Write type traits
MARK_VAL_T(::MA::Flora::SilhouettePlaneCache);
MARK_VAL_T(::MA::Flora::SilhouettePlaneCache_Slot);
DEFINE_IL2CPP_CLASS(::MA::Flora::SilhouettePlaneCache, "MA.Flora", "SilhouettePlaneCache");
DEFINE_IL2CPP_CLASS(::MA::Flora::SilhouettePlaneCache_Slot, "MA.Flora", "SilhouettePlaneCache/Slot");
// Dependencies UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.SilhouettePlaneCache/Slot
struct CORDL_TYPE SilhouettePlaneCache_Slot {
public:
// Declarations
/// @brief Method .ctor, addr 0x1814d7d80, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::EntityId  viewEntityId, int32_t  planeCount, int32_t  frameIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr SilhouettePlaneCache_Slot() ;

// Ctor Parameters [CppParam { name: "IsActive", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ViewEntityId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "PlaneCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "LastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SilhouettePlaneCache_Slot(bool  IsActive, ::UnityEngine::EntityId  ViewEntityId, int32_t  PlaneCount, int32_t  LastUsedFrameIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13228};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field IsActive, offset: 0x0, size: 0x1, def value: None
 bool  IsActive;

/// @brief Field ViewEntityId, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::EntityId  ViewEntityId;

/// @brief Field PlaneCount, offset: 0x8, size: 0x4, def value: None
 int32_t  PlaneCount;

/// @brief Field LastUsedFrameIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  LastUsedFrameIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::SilhouettePlaneCache_Slot, IsActive) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SilhouettePlaneCache_Slot, ViewEntityId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SilhouettePlaneCache_Slot, PlaneCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SilhouettePlaneCache_Slot, LastUsedFrameIndex) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::SilhouettePlaneCache_Slot) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.SilhouettePlaneCache::Slot, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>, Unity.Collections.NativeList`1<T>, UnityEngine.Plane
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.SilhouettePlaneCache
struct CORDL_TYPE SilhouettePlaneCache {
public:
// Declarations
using Slot = ::MA::Flora::SilhouettePlaneCache_Slot;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1814d7850, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FreeUnusedSlots, addr 0x1814d78a0, size 0xf0, virtual false, abstract: false, final false
inline void FreeUnusedSlots(int32_t  frameIndex, int32_t  maximumAge) ;

/// @brief Method GetSubArray, addr 0x1814d7990, size 0xe0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> GetSubArray(::UnityEngine::EntityId  viewEntityId) ;

/// @brief Method Init, addr 0x1814d7a70, size 0x120, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method Update, addr 0x1814d7b90, size 0x1f0, virtual false, abstract: false, final false
inline void Update(int32_t  viewInstanceID, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, int32_t  frameIndex) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SilhouettePlaneCache() ;

// Ctor Parameters [CppParam { name: "m_SubviewIDToIndexMap", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_SlotFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_Slots", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::SilhouettePlaneCache_Slot>", modifiers: "", def_value: None }, CppParam { name: "m_PlaneStorage", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: None }]
constexpr SilhouettePlaneCache(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>  m_SubviewIDToIndexMap, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>  m_SlotFreeList, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::SilhouettePlaneCache_Slot>  m_Slots, ::Unity::Collections::NativeList_1<::UnityEngine::Plane>  m_PlaneStorage) noexcept;

/// @brief Field MaxSilhouettePlanes offset 0xffffffff size 0x4
static constexpr int32_t  MaxSilhouettePlanes{static_cast<int32_t>(0x6)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13229};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field m_SubviewIDToIndexMap, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<int32_t,int32_t>  m_SubviewIDToIndexMap;

/// @brief Field m_SlotFreeList, offset: 0x10, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>  m_SlotFreeList;

/// @brief Field m_Slots, offset: 0x28, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::SilhouettePlaneCache_Slot>  m_Slots;

/// @brief Field m_PlaneStorage, offset: 0x40, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Plane>  m_PlaneStorage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::SilhouettePlaneCache, m_SubviewIDToIndexMap) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SilhouettePlaneCache, m_SlotFreeList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SilhouettePlaneCache, m_Slots) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SilhouettePlaneCache, m_PlaneStorage) == 0x40, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::SilhouettePlaneCache) == 0x48, "Size mismatch!");

} // namespace end def MA::Flora
