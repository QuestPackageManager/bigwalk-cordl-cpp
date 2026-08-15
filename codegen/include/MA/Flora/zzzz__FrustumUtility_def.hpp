#pragma once
// IWYU pragma private; include "MA/Flora/FrustumUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FrustumUtility)
namespace MA::Flora {
struct AABB;
}
namespace MA::Flora {
struct AxisAlignedBox;
}
namespace MA::Flora {
struct FrustumIntersectResult;
}
namespace MA::Flora {
struct FrustumSIMDPacket;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace MA::Flora {
class FrustumUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::FrustumUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FrustumUtility*, "MA.Flora", "FrustumUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FrustumUtility
class CORDL_TYPE FrustumUtility : public ::System::Object {
public:
// Declarations
/// @brief Method ComputeBounds, addr 0x1814f9610, size 0x240, virtual false, abstract: false, final false
static inline ::MA::Flora::AxisAlignedBox ComputeBounds(::System::ReadOnlySpan_1<::UnityEngine::Plane>  frustumPlanes) ;

/// @brief Method ComputeCorners, addr 0x1814f9a40, size 0x150, virtual false, abstract: false, final false
static inline void ComputeCorners(::by_ref<::Unity::Mathematics::float4x4>  invViewProjectionMatrix, float_t  z, ::System::Span_1<::Unity::Mathematics::float3>  vertices) ;

/// @brief Method ComputeCorners, addr 0x1814f9850, size 0x1f0, virtual false, abstract: false, final false
static inline void ComputeCorners(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, ::System::Span_1<::Unity::Mathematics::float3>  vertices) ;

/// @brief Method ComputeSIMDPacketCount, addr 0x1814f9b90, size 0x10, virtual false, abstract: false, final false
static inline int32_t ComputeSIMDPacketCount(int32_t  planeCount) ;

/// @brief Method InitializeSIMDPackets, addr 0x1814f9ba0, size 0x240, virtual false, abstract: false, final false
static inline void InitializeSIMDPackets(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, ::System::Span_1<::MA::Flora::FrustumSIMDPacket>  packets) ;

/// @brief Method IntersectBounds, addr 0x1814fa050, size 0x1a0, virtual false, abstract: false, final false
static inline ::MA::Flora::FrustumIntersectResult IntersectBounds(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, ::MA::Flora::AABB  aabb) ;

/// @brief Method IntersectBoundsSIMD, addr 0x1814f9de0, size 0x270, virtual false, abstract: false, final false
static inline ::MA::Flora::FrustumIntersectResult IntersectBoundsSIMD(::System::ReadOnlySpan_1<::MA::Flora::FrustumSIMDPacket>  packets, ::MA::Flora::AABB  aabb) ;

/// @brief Method IntersectSphere, addr 0x1814fa1f0, size 0x160, virtual false, abstract: false, final false
static inline ::MA::Flora::FrustumIntersectResult IntersectSphere(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, ::Unity::Mathematics::float3  center, float_t  radius) ;

/// @brief Method TryIntersectPlanes3, addr 0x1814f54c0, size 0x340, virtual false, abstract: false, final false
static inline bool TryIntersectPlanes3(::UnityEngine::Plane  p0, ::UnityEngine::Plane  p1, ::UnityEngine::Plane  p2, ::by_ref<::Unity::Mathematics::float3>  intersectionPoint) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FrustumUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FrustumUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FrustumUtility(FrustumUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FrustumUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FrustumUtility(FrustumUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FrustumUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
