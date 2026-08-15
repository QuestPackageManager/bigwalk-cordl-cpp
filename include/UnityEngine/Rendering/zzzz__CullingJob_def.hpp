#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullingJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BinningConfig_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUPerCameraInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUSharedInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrustumPlaneCuller_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReceiverSphereCuller_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace UnityEngine::Rendering {
struct CullingJob_CrossFadeType;
}
namespace UnityEngine::Rendering {
struct InstanceFlags;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CullingJob_CrossFadeType;
}
namespace UnityEngine::Rendering {
struct CullingJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CullingJob_CrossFadeType);
MARK_VAL_T(::UnityEngine::Rendering::CullingJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CullingJob_CrossFadeType, "UnityEngine.Rendering", "CullingJob/CrossFadeType");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CullingJob, "UnityEngine.Rendering", "CullingJob");
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CullingJob/CrossFadeType
struct CORDL_TYPE CullingJob_CrossFadeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CullingJob_CrossFadeType_Unwrapped
enum struct __CullingJob_CrossFadeType_Unwrapped : int32_t {
__E_kDisabled = static_cast<int32_t>(0x0),
__E_kCrossFadeOut = static_cast<int32_t>(0x1),
__E_kCrossFadeIn = static_cast<int32_t>(0x2),
__E_kVisible = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CullingJob_CrossFadeType_Unwrapped () const noexcept {
return static_cast<__CullingJob_CrossFadeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CullingJob_CrossFadeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CullingJob_CrossFadeType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17715};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field kCrossFadeIn value: I32(2)
static ::UnityEngine::Rendering::CullingJob_CrossFadeType const kCrossFadeIn;

/// @brief Field kCrossFadeOut value: I32(1)
static ::UnityEngine::Rendering::CullingJob_CrossFadeType const kCrossFadeOut;

/// @brief Field kDisabled value: I32(0)
static ::UnityEngine::Rendering::CullingJob_CrossFadeType const kDisabled;

/// @brief Field kVisible value: I32(3)
static ::UnityEngine::Rendering::CullingJob_CrossFadeType const kVisible;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CullingJob_CrossFadeType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CullingJob_CrossFadeType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Mathematics.float3, Unity.Mathematics.float3x3, UnityEngine.Plane, UnityEngine.Rendering.BatchCullingViewType, UnityEngine.Rendering.BinningConfig, UnityEngine.Rendering.CPUInstanceData::ReadOnly, UnityEngine.Rendering.CPUPerCameraInstanceData::PerCameraInstanceDataArrays, UnityEngine.Rendering.CPUSharedInstanceData::ReadOnly, UnityEngine.Rendering.FrustumPlaneCuller::PlanePacket4, UnityEngine.Rendering.FrustumPlaneCuller::SplitInfo, UnityEngine.Rendering.LODGroupCullingData, UnityEngine.Rendering.ReceiverSphereCuller::SplitInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CullingJob
struct CORDL_TYPE CullingJob {
public:
// Declarations
using CrossFadeType = ::UnityEngine::Rendering::CullingJob_CrossFadeType;

/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method CalculateLODVisibility, addr 0x182089a50, size 0x480, virtual false, abstract: false, final false
inline uint32_t CalculateLODVisibility(int32_t  instanceIndex, int32_t  sharedInstanceIndex, ::UnityEngine::Rendering::InstanceFlags  instanceFlags) ;

/// @brief Method CalculateVisibilityMask, addr 0x182089ed0, size 0x230, virtual false, abstract: false, final false
inline uint32_t CalculateVisibilityMask(int32_t  instanceIndex, int32_t  sharedInstanceIndex, ::UnityEngine::Rendering::InstanceFlags  instanceFlags) ;

/// @brief Method ComputeMeshLODCrossfade, addr 0x18208a100, size 0xe0, virtual false, abstract: false, final false
inline uint32_t ComputeMeshLODCrossfade(int32_t  instanceIndex, ::by_ref<uint32_t>  meshLodLevel) ;

/// @brief Method ComputeMeshLODLevel, addr 0x18208a1e0, size 0x290, virtual false, abstract: false, final false
inline uint32_t ComputeMeshLODLevel(int32_t  instanceIndex, int32_t  sharedInstanceIndex) ;

/// @brief Method EnforcePreviousFrameMeshLOD, addr 0x18208a470, size 0x30, virtual false, abstract: false, final false
inline void EnforcePreviousFrameMeshLOD(int32_t  instanceIndex, ::by_ref<uint32_t>  meshLodLevel) ;

/// @brief Method Execute, addr 0x18208a4a0, size 0x1d0, virtual true, abstract: false, final true
inline void Execute(int32_t  instanceIndex) ;

/// @brief Method PackFloatToUint8, addr 0x18208a670, size 0x600, virtual false, abstract: false, final false
static inline uint32_t PackFloatToUint8(float_t  percent) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr CullingJob() ;

// Ctor Parameters [CppParam { name: "binningConfig", ty: "::UnityEngine::Rendering::BinningConfig", modifiers: "", def_value: None }, CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: None }, CppParam { name: "cameraPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "sqrMeshLodSelectionConstant", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sqrScreenRelativeMetric", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minScreenRelativeHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "isOrtho", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cullLightmappedShadowCasters", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "maxLOD", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cullingLayerMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "animateCrossFades", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "frustumPlanePackets", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4>", modifiers: "", def_value: None }, CppParam { name: "frustumSplitInfos", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo>", modifiers: "", def_value: None }, CppParam { name: "lightFacingFrustumPlanes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "receiverSplitInfos", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo>", modifiers: "", def_value: None }, CppParam { name: "worldToLightSpaceRotation", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData_ReadOnly", modifiers: "", def_value: None }, CppParam { name: "sharedInstanceData", ty: "::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly", modifiers: "", def_value: None }, CppParam { name: "lodGroupCullingData", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>", modifiers: "", def_value: None }, CppParam { name: "occlusionBuffer", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "cameraInstanceData", ty: "::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays", modifiers: "", def_value: None }, CppParam { name: "rendererVisibilityMasks", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "rendererMeshLodSettings", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "rendererCrossFadeValues", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }]
constexpr CullingJob(::UnityEngine::Rendering::BinningConfig  binningConfig, ::UnityEngine::Rendering::BatchCullingViewType  viewType, ::Unity::Mathematics::float3  cameraPosition, float_t  sqrMeshLodSelectionConstant, float_t  sqrScreenRelativeMetric, float_t  minScreenRelativeHeight, bool  isOrtho, bool  cullLightmappedShadowCasters, int32_t  maxLOD, uint32_t  cullingLayerMask, uint64_t  sceneCullingMask, bool  animateCrossFades, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4>  frustumPlanePackets, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo>  frustumSplitInfos, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  lightFacingFrustumPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo>  receiverSplitInfos, ::Unity::Mathematics::float3x3  worldToLightSpaceRotation, ::UnityEngine::Rendering::CPUInstanceData_ReadOnly  instanceData, ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly  sharedInstanceData, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>  lodGroupCullingData, ::System::IntPtr  occlusionBuffer, ::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays  cameraInstanceData, ::Unity::Collections::NativeArray_1<uint8_t>  rendererVisibilityMasks, ::Unity::Collections::NativeArray_1<uint8_t>  rendererMeshLodSettings, ::Unity::Collections::NativeArray_1<uint8_t>  rendererCrossFadeValues) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17716};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2b0};

/// @brief Field k_BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  k_BatchSize{static_cast<int32_t>(0x20)};

/// @brief Field k_InvalidCrossFadeAndLevel offset 0xffffffff size 0x4
static constexpr uint32_t  k_InvalidCrossFadeAndLevel{static_cast<uint32_t>(0xffffffffu)};

/// @brief Field k_LODFadeIsSpeedTree offset 0xffffffff size 0x4
static constexpr uint32_t  k_LODFadeIsSpeedTree{static_cast<uint32_t>(0x100u)};

/// @brief Field k_LODFadeOff offset 0xffffffff size 0x4
static constexpr uint32_t  k_LODFadeOff{static_cast<uint32_t>(0xffu)};

/// @brief Field k_LODFadeZeroPacked offset 0xffffffff size 0x4
static constexpr uint32_t  k_LODFadeZeroPacked{static_cast<uint32_t>(0x7fu)};

/// @brief Field k_MeshLodCrossfadeActive offset 0xffffffff size 0x4
static constexpr uint32_t  k_MeshLodCrossfadeActive{static_cast<uint32_t>(0x40u)};

/// @brief Field k_MeshLodCrossfadeBits offset 0xffffffff size 0x4
static constexpr uint32_t  k_MeshLodCrossfadeBits{static_cast<uint32_t>(0xc0u)};

/// @brief Field k_MeshLodCrossfadeSignBit offset 0xffffffff size 0x4
static constexpr uint32_t  k_MeshLodCrossfadeSignBit{static_cast<uint32_t>(0x80u)};

/// @brief Field k_SmallMeshTransitionWidth offset 0xffffffff size 0x4
static constexpr float_t  k_SmallMeshTransitionWidth{static_cast<float_t>(0.1f)};

/// @brief Field k_VisibilityMaskNotVisible offset 0xffffffff size 0x4
static constexpr uint32_t  k_VisibilityMaskNotVisible{static_cast<uint32_t>(0x0u)};

/// @brief Field binningConfig, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::BinningConfig  binningConfig;

/// @brief Field viewType, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchCullingViewType  viewType;

/// @brief Field cameraPosition, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  cameraPosition;

/// @brief Field sqrMeshLodSelectionConstant, offset: 0x18, size: 0x4, def value: None
 float_t  sqrMeshLodSelectionConstant;

/// @brief Field sqrScreenRelativeMetric, offset: 0x1c, size: 0x4, def value: None
 float_t  sqrScreenRelativeMetric;

/// @brief Field minScreenRelativeHeight, offset: 0x20, size: 0x4, def value: None
 float_t  minScreenRelativeHeight;

/// @brief Field isOrtho, offset: 0x24, size: 0x1, def value: None
 bool  isOrtho;

/// @brief Field cullLightmappedShadowCasters, offset: 0x25, size: 0x1, def value: None
 bool  cullLightmappedShadowCasters;

/// @brief Field maxLOD, offset: 0x28, size: 0x4, def value: None
 int32_t  maxLOD;

/// @brief Field cullingLayerMask, offset: 0x2c, size: 0x4, def value: None
 uint32_t  cullingLayerMask;

/// @brief Field sceneCullingMask, offset: 0x30, size: 0x8, def value: None
 uint64_t  sceneCullingMask;

/// @brief Field animateCrossFades, offset: 0x38, size: 0x1, def value: None
 bool  animateCrossFades;

/// @brief Field frustumPlanePackets, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_PlanePacket4>  frustumPlanePackets;

/// @brief Field frustumSplitInfos, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::FrustumPlaneCuller_SplitInfo>  frustumSplitInfos;

/// @brief Field lightFacingFrustumPlanes, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  lightFacingFrustumPlanes;

/// @brief Field receiverSplitInfos, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ReceiverSphereCuller_SplitInfo>  receiverSplitInfos;

/// @brief Field worldToLightSpaceRotation, offset: 0x80, size: 0x24, def value: None
 ::Unity::Mathematics::float3x3  worldToLightSpaceRotation;

/// @brief Field instanceData, offset: 0xa8, size: 0xe8, def value: None
 ::UnityEngine::Rendering::CPUInstanceData_ReadOnly  instanceData;

/// @brief Field sharedInstanceData, offset: 0x190, size: 0xb0, def value: None
 ::UnityEngine::Rendering::CPUSharedInstanceData_ReadOnly  sharedInstanceData;

/// @brief Field lodGroupCullingData, offset: 0x240, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>  lodGroupCullingData;

/// @brief Field occlusionBuffer, offset: 0x248, size: 0x8, def value: None
 ::System::IntPtr  occlusionBuffer;

/// @brief Field cameraInstanceData, offset: 0x250, size: 0x30, def value: None
 ::UnityEngine::Rendering::CPUPerCameraInstanceData_PerCameraInstanceDataArrays  cameraInstanceData;

/// @brief Field rendererVisibilityMasks, offset: 0x280, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  rendererVisibilityMasks;

/// @brief Field rendererMeshLodSettings, offset: 0x290, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  rendererMeshLodSettings;

/// @brief Field rendererCrossFadeValues, offset: 0x2a0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  rendererCrossFadeValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CullingJob, binningConfig) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, viewType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, cameraPosition) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, sqrMeshLodSelectionConstant) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, sqrScreenRelativeMetric) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, minScreenRelativeHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, isOrtho) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, cullLightmappedShadowCasters) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, maxLOD) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, cullingLayerMask) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, sceneCullingMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, animateCrossFades) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, frustumPlanePackets) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, frustumSplitInfos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, lightFacingFrustumPlanes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, receiverSplitInfos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, worldToLightSpaceRotation) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, instanceData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, sharedInstanceData) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, lodGroupCullingData) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, occlusionBuffer) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, cameraInstanceData) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, rendererVisibilityMasks) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, rendererMeshLodSettings) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingJob, rendererCrossFadeValues) == 0x2a0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CullingJob) == 0x2b0, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
