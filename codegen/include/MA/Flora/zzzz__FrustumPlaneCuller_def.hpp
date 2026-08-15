#pragma once
// IWYU pragma private; include "MA/Flora/FrustumPlaneCuller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FrustumSIMDPacket_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrustumPlaneCuller)
namespace MA::Flora {
struct AABB;
}
namespace MA::Flora {
struct FrustumPlaneCuller_SplitInfo;
}
namespace MA::Flora {
struct FrustumSIMDPacket;
}
namespace MA::Flora {
struct ReceiverSphereCuller;
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
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace MA::Flora {
struct FrustumPlaneCuller;
}
namespace MA::Flora {
struct FrustumPlaneCuller_SplitInfo;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FrustumPlaneCuller);
MARK_VAL_T(::MA::Flora::FrustumPlaneCuller_SplitInfo);
DEFINE_IL2CPP_CLASS(::MA::Flora::FrustumPlaneCuller, "MA.Flora", "FrustumPlaneCuller");
DEFINE_IL2CPP_CLASS(::MA::Flora::FrustumPlaneCuller_SplitInfo, "MA.Flora", "FrustumPlaneCuller/SplitInfo");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FrustumPlaneCuller/SplitInfo
struct CORDL_TYPE FrustumPlaneCuller_SplitInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FrustumPlaneCuller_SplitInfo() ;

// Ctor Parameters [CppParam { name: "PlaneCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PacketCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FrustumPlaneCuller_SplitInfo(int32_t  PlaneCount, int32_t  PacketCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13315};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field PlaneCount, offset: 0x0, size: 0x4, def value: None
 int32_t  PlaneCount;

/// @brief Field PacketCount, offset: 0x4, size: 0x4, def value: None
 int32_t  PacketCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FrustumPlaneCuller_SplitInfo, PlaneCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FrustumPlaneCuller_SplitInfo, PacketCount) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FrustumPlaneCuller_SplitInfo) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FrustumPlaneCuller::SplitInfo, MA.Flora.FrustumSIMDPacket, Unity.Collections.NativeList`1<T>, UnityEngine.Plane
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FrustumPlaneCuller
struct CORDL_TYPE FrustumPlaneCuller {
public:
// Declarations
using SplitInfo = ::MA::Flora::FrustumPlaneCuller_SplitInfo;

/// @brief Method ComputeSplitVisibilityMask, addr 0x1814f8a00, size 0x1f0, virtual false, abstract: false, final false
static inline uint32_t ComputeSplitVisibilityMask(::Unity::Collections::NativeArray_1<::MA::Flora::FrustumSIMDPacket>  planePackets, ::Unity::Collections::NativeArray_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  splitInfos, ::MA::Flora::AABB  aabb) ;

/// @brief Method Create, addr 0x1814f8bf0, size 0x5b0, virtual false, abstract: false, final false
static inline ::MA::Flora::FrustumPlaneCuller Create(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cc, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  receiverPlanes, ::by_ref<::MA::Flora::ReceiverSphereCuller>  receiverSphereCuller, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Dispose, addr 0x1814f91a0, size 0xc0, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  job) ;

// Ctor Parameters []
// @brief default ctor
constexpr FrustumPlaneCuller() ;

// Ctor Parameters [CppParam { name: "Planes", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "PlanePackets", ty: "::Unity::Collections::NativeList_1<::MA::Flora::FrustumSIMDPacket>", modifiers: "", def_value: None }, CppParam { name: "SplitInfos", ty: "::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>", modifiers: "", def_value: None }]
constexpr FrustumPlaneCuller(::Unity::Collections::NativeList_1<::UnityEngine::Plane>  Planes, ::Unity::Collections::NativeList_1<::MA::Flora::FrustumSIMDPacket>  PlanePackets, ::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  SplitInfos) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13316};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Planes, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Plane>  Planes;

/// @brief Field PlanePackets, offset: 0x8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::FrustumSIMDPacket>  PlanePackets;

/// @brief Field SplitInfos, offset: 0x10, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  SplitInfos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FrustumPlaneCuller, Planes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FrustumPlaneCuller, PlanePackets) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::FrustumPlaneCuller, SplitInfos) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FrustumPlaneCuller) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
