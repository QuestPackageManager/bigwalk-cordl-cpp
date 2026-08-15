#pragma once
// IWYU pragma private; include "MA/Flora/InstanceBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__BatchCullingAddresses_def.hpp"
#include "MA/Flora/zzzz__BatchDomainIndex_def.hpp"
#include "MA/Flora/zzzz__BatchDomainLayout_def.hpp"
#include "MA/Flora/zzzz__BatchMetadataDescriptor_def.hpp"
#include "MA/Flora/zzzz__BatchTransformAddresses_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__NativeRegionAllocator_def.hpp"
#include "MA/Flora/zzzz__PersistentGraphicsBufferRef_1_def.hpp"
#include "MA/Flora/zzzz__UnsafeBitSet_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceBuffer)
namespace MA::Flora {
struct BatchAllocation;
}
namespace MA::Flora {
struct BatchBuiltinPropertyFlags;
}
namespace MA::Flora {
struct BatchCullingAddresses;
}
namespace MA::Flora {
struct BatchDomainIndex;
}
namespace MA::Flora {
struct BatchMetadataDescriptor;
}
namespace MA::Flora {
struct BatchTransformAddresses;
}
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace MA::Flora {
struct InstanceContext;
}
namespace MA::Flora {
template<typename T>
struct PersistentGraphicsBufferRef_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct BatchID;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace MA::Flora {
struct InstanceBuffer;
}
// Write type traits
MARK_VAL_T(::MA::Flora::InstanceBuffer);
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceBuffer, "MA.Flora", "InstanceBuffer");
// Dependencies MA.Flora.BatchCullingAddresses, MA.Flora.BatchDomainIndex, MA.Flora.BatchDomainLayout, MA.Flora.BatchMetadataDescriptor, MA.Flora.BatchTransformAddresses, MA.Flora.GraphicsBufferRef, MA.Flora.InstanceManager, MA.Flora.NativeDataReference`1<T>, MA.Flora.NativeRegionAllocator, MA.Flora.PersistentGraphicsBufferRef`1<T>, MA.Flora.UnsafeBitSet, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.BatchID
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceBuffer
struct CORDL_TYPE InstanceBuffer {
public:
// Declarations
 __declspec(property(get=get_AllocatedSizeInBytes)) int64_t  AllocatedSizeInBytes;

 __declspec(property(get=get_ContentVersionApplied)) uint32_t  ContentVersionApplied;

 __declspec(property(get=get_ContentVersionScheduled)) uint32_t  ContentVersionScheduled;

 __declspec(property(get=get_DataBuffer)) ::UnityEngine::GraphicsBuffer*  DataBuffer;

 __declspec(property(get=get_DomainBatches)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>  DomainBatches;

 __declspec(property(get=get_DomainCount)) int32_t  DomainCount;

 __declspec(property(get=get_DomainCullingAddresses)) ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchCullingAddresses>  DomainCullingAddresses;

 __declspec(property(get=get_DomainDescriptors)) ::Unity::Collections::NativeArray_1<::MA::Flora::BatchMetadataDescriptor>  DomainDescriptors;

 __declspec(property(get=get_DomainEntityIdAddresses)) ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  DomainEntityIdAddresses;

 __declspec(property(get=get_DomainLightmapSTAddresses)) ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  DomainLightmapSTAddresses;

 __declspec(property(get=get_DomainRandomIdAddresses)) ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  DomainRandomIdAddresses;

 __declspec(property(get=get_DomainSHCoefficientsAddresses)) ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  DomainSHCoefficientsAddresses;

 __declspec(property(get=get_DomainTransformAddresses)) ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchTransformAddresses>  DomainTransformAddresses;

 __declspec(property(get=get_DomainVariationColorAddresses)) ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  DomainVariationColorAddresses;

 __declspec(property(get=get_LayoutVersion)) uint32_t  LayoutVersion;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Allocate, addr 0x18145d050, size 0xb0, virtual false, abstract: false, final false
inline ::MA::Flora::BatchAllocation Allocate(::MA::Flora::BatchDomainIndex  domainIndex, int32_t  instanceCount) ;

/// @brief Method ApplyUpload, addr 0x18145d100, size 0x30, virtual false, abstract: false, final false
inline void ApplyUpload() ;

/// @brief Method Dispose, addr 0x18145d130, size 0x2f0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Exists, addr 0x18145d420, size 0x50, virtual false, abstract: false, final false
inline bool Exists(::MA::Flora::BatchDomainIndex  domainIndex) ;

/// @brief Method Free, addr 0x18145d470, size 0x70, virtual false, abstract: false, final false
inline void Free(::MA::Flora::BatchAllocation  batchAllocation) ;

/// @brief Method GetBatchID, addr 0x18145d4e0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::BatchID GetBatchID(::MA::Flora::BatchDomainIndex  domainIndex) ;

/// @brief Method GetOrCreateDomain, addr 0x18145d740, size 0x100, virtual false, abstract: false, final false
inline ::MA::Flora::BatchDomainIndex GetOrCreateDomain(::MA::Flora::BatchBuiltinPropertyFlags  flags) ;

/// @brief Method GetOrCreateDomain, addr 0x18145d500, size 0x240, virtual false, abstract: false, final false
inline ::MA::Flora::BatchDomainIndex GetOrCreateDomain(::by_ref<::MA::Flora::BatchMetadataDescriptor>  metadata) ;

/// @brief Method HasStaleScheduledUpload, addr 0x18145d840, size 0x30, virtual false, abstract: false, final false
inline bool HasStaleScheduledUpload(uint32_t  contentVersion) ;

/// @brief Method Initialize, addr 0x18145d870, size 0x4b0, virtual false, abstract: false, final false
inline void Initialize(::MA::Flora::InstanceContext  instanceContext, ::MA::Flora::FloraRuntimeResources*  runtimeResources) ;

/// @brief Method InstanceAddressOf, addr 0x18145dd20, size 0x120, virtual false, abstract: false, final false
inline int32_t InstanceAddressOf(::MA::Flora::BatchDomainIndex  domainIndex, int32_t  nameID) ;

/// @brief Method IsUploadScheduled, addr 0x18145de60, size 0x20, virtual false, abstract: false, final false
inline bool IsUploadScheduled() ;

/// @brief Method IsUploadScheduledFor, addr 0x18145de40, size 0x20, virtual false, abstract: false, final false
inline bool IsUploadScheduledFor(uint32_t  contentVersion) ;

/// @brief Method ScheduleUpload, addr 0x18145de80, size 0x40, virtual false, abstract: false, final false
inline bool ScheduleUpload(uint32_t  contentVersion) ;

/// @brief Method UpdateLayout, addr 0x18145dec0, size 0x1120, virtual false, abstract: false, final false
inline bool UpdateLayout(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, bool  forceUpdate) ;

/// @brief Method get_AllocatedSizeInBytes, addr 0x18145efe0, size 0x70, virtual false, abstract: false, final false
inline int64_t get_AllocatedSizeInBytes() ;

/// @brief Method get_ContentVersionApplied, addr 0x181454230, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_ContentVersionApplied() ;

/// @brief Method get_ContentVersionScheduled, addr 0x181454240, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_ContentVersionScheduled() ;

/// @brief Method get_DataBuffer, addr 0x18145f050, size 0x510, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* get_DataBuffer() ;

/// @brief Method get_DomainBatches, addr 0x181454250, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID> get_DomainBatches() ;

/// @brief Method get_DomainCount, addr 0x181454260, size 0x10, virtual false, abstract: false, final false
inline int32_t get_DomainCount() ;

/// @brief Method get_DomainCullingAddresses, addr 0x181454270, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchCullingAddresses> get_DomainCullingAddresses() ;

/// @brief Method get_DomainDescriptors, addr 0x180de9ee0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::BatchMetadataDescriptor> get_DomainDescriptors() ;

/// @brief Method get_DomainEntityIdAddresses, addr 0x181454290, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> get_DomainEntityIdAddresses() ;

/// @brief Method get_DomainLightmapSTAddresses, addr 0x1814542b0, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> get_DomainLightmapSTAddresses() ;

/// @brief Method get_DomainRandomIdAddresses, addr 0x1814542d0, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> get_DomainRandomIdAddresses() ;

/// @brief Method get_DomainSHCoefficientsAddresses, addr 0x1814542f0, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> get_DomainSHCoefficientsAddresses() ;

/// @brief Method get_DomainTransformAddresses, addr 0x181454310, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchTransformAddresses> get_DomainTransformAddresses() ;

/// @brief Method get_DomainVariationColorAddresses, addr 0x181454330, size 0x20, virtual false, abstract: false, final false
inline ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t> get_DomainVariationColorAddresses() ;

/// @brief Method get_LayoutVersion, addr 0x181454350, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_LayoutVersion() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceBuffer() ;

// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: None }, CppParam { name: "m_SceneHasLightProbes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_LayoutDirty", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_NextTypeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DomainHash", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::MA::Flora::BatchMetadataDescriptor,::MA::Flora::BatchDomainIndex>", modifiers: "", def_value: None }, CppParam { name: "m_AllocatedDomains", ty: "::MA::Flora::UnsafeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_FreeDomainsIDs", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::BatchDomainIndex>", modifiers: "", def_value: None }, CppParam { name: "m_DomainBatches", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>", modifiers: "", def_value: None }, CppParam { name: "m_DomainDescriptors", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BatchMetadataDescriptor>", modifiers: "", def_value: None }, CppParam { name: "m_DomainAllocators", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::NativeRegionAllocator>", modifiers: "", def_value: None }, CppParam { name: "m_DomainLayouts", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainLayout>", modifiers: "", def_value: None }, CppParam { name: "m_DomainRandomIdAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_DomainVariationColorAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_DomainLightmapSTAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_DomainSHCoefficientsAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_DomainEntityIdAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_DomainCullingAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchCullingAddresses>", modifiers: "", def_value: None }, CppParam { name: "m_DomainTransformAddresses", ty: "::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchTransformAddresses>", modifiers: "", def_value: None }, CppParam { name: "m_DomainCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_DataBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_LayoutVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ContentVersionScheduled", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ContentVersionApplied", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr InstanceBuffer(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager, bool  m_SceneHasLightProbes, bool  m_LayoutDirty, int32_t  m_NextTypeId, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::MA::Flora::BatchMetadataDescriptor,::MA::Flora::BatchDomainIndex>  m_DomainHash, ::MA::Flora::UnsafeBitSet  m_AllocatedDomains, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::BatchDomainIndex>  m_FreeDomainsIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>  m_DomainBatches, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchMetadataDescriptor>  m_DomainDescriptors, ::Unity::Collections::NativeArray_1<::MA::Flora::NativeRegionAllocator>  m_DomainAllocators, ::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainLayout>  m_DomainLayouts, ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainRandomIdAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainVariationColorAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainLightmapSTAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainSHCoefficientsAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainEntityIdAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchCullingAddresses>  m_DomainCullingAddresses, ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchTransformAddresses>  m_DomainTransformAddresses, int32_t  m_DomainCount, ::MA::Flora::GraphicsBufferRef  m_DataBuffer, uint32_t  m_LayoutVersion, uint32_t  m_ContentVersionScheduled, uint32_t  m_ContentVersionApplied) noexcept;

/// @brief Field AddressMask offset 0xffffffff size 0x4
static constexpr uint32_t  AddressMask{static_cast<uint32_t>(0x7fffffffu)};

/// @brief Field InitialBatchCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialBatchCapacity{static_cast<int32_t>(0x8)};

/// @brief Field InitialBufferSize offset 0xffffffff size 0x8
static constexpr int64_t  InitialBufferSize{static_cast<int64_t>(0x100)};

/// @brief Field MaxAddressableBufferSize32 offset 0xffffffff size 0x8
static constexpr int64_t  MaxAddressableBufferSize32{static_cast<int64_t>(0x7fffffff)};

/// @brief Field OverridenBit offset 0xffffffff size 0x4
static constexpr uint32_t  OverridenBit{static_cast<uint32_t>(0x80000000u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12916};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x158};

/// @brief Field m_InstanceManager, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager;

/// @brief Field m_SceneHasLightProbes, offset: 0x8, size: 0x1, def value: None
 bool  m_SceneHasLightProbes;

/// @brief Field m_LayoutDirty, offset: 0x9, size: 0x1, def value: None
 bool  m_LayoutDirty;

/// @brief Field m_NextTypeId, offset: 0xc, size: 0x4, def value: None
 int32_t  m_NextTypeId;

/// @brief Field m_DomainHash, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::MA::Flora::BatchMetadataDescriptor,::MA::Flora::BatchDomainIndex>  m_DomainHash;

/// @brief Field m_AllocatedDomains, offset: 0x20, size: 0x20, def value: None
 ::MA::Flora::UnsafeBitSet  m_AllocatedDomains;

/// @brief Field m_FreeDomainsIDs, offset: 0x40, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::BatchDomainIndex>  m_FreeDomainsIDs;

/// @brief Field m_DomainBatches, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchID>  m_DomainBatches;

/// @brief Field m_DomainDescriptors, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::BatchMetadataDescriptor>  m_DomainDescriptors;

/// @brief Field m_DomainAllocators, offset: 0x78, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::NativeRegionAllocator>  m_DomainAllocators;

/// @brief Field m_DomainLayouts, offset: 0x88, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::BatchDomainLayout>  m_DomainLayouts;

/// @brief Field m_DomainRandomIdAddresses, offset: 0x98, size: 0x18, def value: None
 ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainRandomIdAddresses;

/// @brief Field m_DomainVariationColorAddresses, offset: 0xb0, size: 0x18, def value: None
 ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainVariationColorAddresses;

/// @brief Field m_DomainLightmapSTAddresses, offset: 0xc8, size: 0x18, def value: None
 ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainLightmapSTAddresses;

/// @brief Field m_DomainSHCoefficientsAddresses, offset: 0xe0, size: 0x18, def value: None
 ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainSHCoefficientsAddresses;

/// @brief Field m_DomainEntityIdAddresses, offset: 0xf8, size: 0x18, def value: None
 ::MA::Flora::PersistentGraphicsBufferRef_1<uint32_t>  m_DomainEntityIdAddresses;

/// @brief Field m_DomainCullingAddresses, offset: 0x110, size: 0x18, def value: None
 ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchCullingAddresses>  m_DomainCullingAddresses;

/// @brief Field m_DomainTransformAddresses, offset: 0x128, size: 0x18, def value: None
 ::MA::Flora::PersistentGraphicsBufferRef_1<::MA::Flora::BatchTransformAddresses>  m_DomainTransformAddresses;

/// @brief Field m_DomainCount, offset: 0x140, size: 0x4, def value: None
 int32_t  m_DomainCount;

/// @brief Field m_DataBuffer, offset: 0x144, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_DataBuffer;

/// @brief Field m_LayoutVersion, offset: 0x148, size: 0x4, def value: None
 uint32_t  m_LayoutVersion;

/// @brief Field m_ContentVersionScheduled, offset: 0x14c, size: 0x4, def value: None
 uint32_t  m_ContentVersionScheduled;

/// @brief Field m_ContentVersionApplied, offset: 0x150, size: 0x4, def value: None
 uint32_t  m_ContentVersionApplied;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceBuffer, m_InstanceManager) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_SceneHasLightProbes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_LayoutDirty) == 0x9, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_NextTypeId) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainHash) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_AllocatedDomains) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_FreeDomainsIDs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainBatches) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainDescriptors) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainAllocators) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainLayouts) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainRandomIdAddresses) == 0x98, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainVariationColorAddresses) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainLightmapSTAddresses) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainSHCoefficientsAddresses) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainEntityIdAddresses) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainCullingAddresses) == 0x110, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainTransformAddresses) == 0x128, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DomainCount) == 0x140, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_DataBuffer) == 0x144, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_LayoutVersion) == 0x148, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_ContentVersionScheduled) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceBuffer, m_ContentVersionApplied) == 0x150, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceBuffer) == 0x158, "Size mismatch!");

} // namespace end def MA::Flora
