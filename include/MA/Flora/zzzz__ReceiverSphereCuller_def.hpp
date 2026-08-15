#pragma once
// IWYU pragma private; include "MA/Flora/ReceiverSphereCuller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3x3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReceiverSphereCuller)
namespace MA::Flora {
struct AABB;
}
namespace MA::Flora {
struct ReceiverSphereCuller_SplitInfo;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace MA::Flora {
struct ReceiverSphereCuller;
}
namespace MA::Flora {
struct ReceiverSphereCuller_SplitInfo;
}
// Write type traits
MARK_VAL_T(::MA::Flora::ReceiverSphereCuller);
MARK_VAL_T(::MA::Flora::ReceiverSphereCuller_SplitInfo);
DEFINE_IL2CPP_CLASS(::MA::Flora::ReceiverSphereCuller, "MA.Flora", "ReceiverSphereCuller");
DEFINE_IL2CPP_CLASS(::MA::Flora::ReceiverSphereCuller_SplitInfo, "MA.Flora", "ReceiverSphereCuller/SplitInfo");
// Dependencies Unity.Mathematics.float4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ReceiverSphereCuller/SplitInfo
struct CORDL_TYPE ReceiverSphereCuller_SplitInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ReceiverSphereCuller_SplitInfo() ;

// Ctor Parameters [CppParam { name: "ReceiverSphereLightSpace", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None }, CppParam { name: "CascadeBlendCullingFactor", ty: "float_t", modifiers: "", def_value: None }]
constexpr ReceiverSphereCuller_SplitInfo(::Unity::Mathematics::float4  ReceiverSphereLightSpace, float_t  CascadeBlendCullingFactor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13317};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field ReceiverSphereLightSpace, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::float4  ReceiverSphereLightSpace;

/// @brief Field CascadeBlendCullingFactor, offset: 0x10, size: 0x4, def value: None
 float_t  CascadeBlendCullingFactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ReceiverSphereCuller_SplitInfo, ReceiverSphereLightSpace) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ReceiverSphereCuller_SplitInfo, CascadeBlendCullingFactor) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ReceiverSphereCuller_SplitInfo) == 0x14, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ReceiverSphereCuller::SplitInfo, Unity.Collections.NativeList`1<T>, Unity.Mathematics.float3x3
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ReceiverSphereCuller
struct CORDL_TYPE ReceiverSphereCuller {
public:
// Declarations
using SplitInfo = ::MA::Flora::ReceiverSphereCuller_SplitInfo;

/// @brief Method ComputeSplitVisibilityMask, addr 0x181501a20, size 0x3a0, virtual false, abstract: false, final false
static inline uint32_t ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  lightFacingFrustumPlanes, ::Unity::Collections::NativeArray_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>  splitInfos, ::Unity::Mathematics::float3x3  worldToLightSpaceRotation, ::MA::Flora::AABB  aabb) ;

/// @brief Method Create, addr 0x181501e40, size 0x490, virtual false, abstract: false, final false
static inline ::MA::Flora::ReceiverSphereCuller Create(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cc, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method CreateEmptyForTesting, addr 0x181501dc0, size 0x80, virtual false, abstract: false, final false
static inline ::MA::Flora::ReceiverSphereCuller CreateEmptyForTesting(::Unity::Collections::Allocator  allocator) ;

/// @brief Method Dispose, addr 0x181501880, size 0x70, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  job) ;

/// @brief Method DistanceUntilCylinderFullyCrossesPlane, addr 0x1815022d0, size 0x1c0, virtual false, abstract: false, final false
static inline float_t DistanceUntilCylinderFullyCrossesPlane(::Unity::Mathematics::float3  cylinderCenter, ::Unity::Mathematics::float3  cylinderDirection, float_t  cylinderRadius, ::UnityEngine::Plane  plane) ;

/// @brief Method UseReceiverPlanes, addr 0x180c36880, size 0x1e40, virtual false, abstract: false, final false
inline bool UseReceiverPlanes() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReceiverSphereCuller() ;

// Ctor Parameters [CppParam { name: "SplitInfos", ty: "::Unity::Collections::NativeList_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>", modifiers: "", def_value: None }, CppParam { name: "WorldToLightSpaceRotation", ty: "::Unity::Mathematics::float3x3", modifiers: "", def_value: None }]
constexpr ReceiverSphereCuller(::Unity::Collections::NativeList_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>  SplitInfos, ::Unity::Mathematics::float3x3  WorldToLightSpaceRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13318};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field SplitInfos, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::ReceiverSphereCuller_SplitInfo>  SplitInfos;

/// @brief Field WorldToLightSpaceRotation, offset: 0x8, size: 0x24, def value: None
 ::Unity::Mathematics::float3x3  WorldToLightSpaceRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ReceiverSphereCuller, SplitInfos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ReceiverSphereCuller, WorldToLightSpaceRotation) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ReceiverSphereCuller) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
