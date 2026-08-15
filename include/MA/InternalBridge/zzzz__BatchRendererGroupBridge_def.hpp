#pragma once
// IWYU pragma private; include "MA/InternalBridge/BatchRendererGroupBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BatchRendererGroupBridge)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine::Rendering {
struct BatchCullingFlags;
}
namespace UnityEngine::Rendering {
struct BatchCullingProjectionType;
}
namespace UnityEngine::Rendering {
struct BatchCullingViewType;
}
namespace UnityEngine::Rendering {
struct BatchMaterialID;
}
namespace UnityEngine::Rendering {
struct BatchMeshID;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup;
}
namespace UnityEngine::Rendering {
struct CullingSplit;
}
namespace UnityEngine::Rendering {
struct LODParameters;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace MA::InternalBridge {
class BatchRendererGroupBridge;
}
// Write type traits
MARK_REF_T(::MA::InternalBridge::BatchRendererGroupBridge*);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::BatchRendererGroupBridge*, "MA.InternalBridge", "BatchRendererGroupBridge");
// Dependencies System.Object
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.BatchRendererGroupBridge
class CORDL_TYPE BatchRendererGroupBridge : public ::System::Object {
public:
// Declarations
/// @brief Method CreateCustomBatchCullingContext, addr 0x181ecbc00, size 0x160, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::BatchCullingContext CreateCustomBatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  inCullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>  inCullingSplits, ::UnityEngine::Rendering::LODParameters  inLodParameters, ::UnityEngine::Matrix4x4  inLocalToWorldMatrix, ::UnityEngine::Rendering::BatchCullingViewType  inViewType, ::UnityEngine::Rendering::BatchCullingProjectionType  inProjectionType, ::UnityEngine::Rendering::BatchCullingFlags  inBatchCullingFlags, uint64_t  inViewID, uint32_t  inCullingLayerMask, uint64_t  inSceneCullingMask, int32_t  inReceiverPlaneOffset, int32_t  inReceiverPlaneCount) ;

/// @brief Method GetOcclusionBuffer, addr 0x180322760, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetOcclusionBuffer(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  context) ;

/// @brief Method OcclusionTestAABB, addr 0x181ecbd60, size 0x30, virtual false, abstract: false, final false
static inline bool OcclusionTestAABB(::System::IntPtr  occlusionBuffer, ::UnityEngine::Bounds  aabb) ;

/// @brief Method RegisterMaterial, addr 0x181ecbd90, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::BatchMaterialID RegisterMaterial(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::UnityEngine::EntityId  materialID) ;

/// @brief Method RegisterMaterials, addr 0x181ecbe20, size 0x70, virtual false, abstract: false, final false
static inline void RegisterMaterials(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  materialIds, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMaterialID>  batchMaterialIds) ;

/// @brief Method RegisterMesh, addr 0x181ecbe90, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::BatchMeshID RegisterMesh(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::UnityEngine::EntityId  meshID) ;

/// @brief Method RegisterMeshes, addr 0x181ecbf20, size 0x70, virtual false, abstract: false, final false
static inline void RegisterMeshes(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  meshIds, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMeshID>  batchMeshIds) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BatchRendererGroupBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroupBridge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BatchRendererGroupBridge(BatchRendererGroupBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroupBridge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BatchRendererGroupBridge(BatchRendererGroupBridge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21110};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::BatchRendererGroupBridge) == 0x10, "Size mismatch!");

} // namespace end def MA::InternalBridge
