#pragma once
// IWYU pragma private; include "UnityEngine/GeometryUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GeometryUtility)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class GeometryUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::GeometryUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::GeometryUtility*, "UnityEngine", "GeometryUtility");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GeometryUtility
class CORDL_TYPE GeometryUtility : public ::System::Object {
public:
// Declarations
/// @brief Method CalculateBounds, addr 0x182246b60, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds CalculateBounds(::ArrayW<::UnityEngine::Vector3>  positions, ::UnityEngine::Matrix4x4  transform) ;

/// @brief Method CalculateFrustumPlanes, addr 0x182246c20, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Plane> CalculateFrustumPlanes(::UnityEngine::Camera*  camera) ;

/// @brief Method CalculateFrustumPlanes, addr 0x182247000, size 0x2c0, virtual false, abstract: false, final false
static inline void CalculateFrustumPlanes(::UnityEngine::Camera*  camera, ::ArrayW<::UnityEngine::Plane>  planes) ;

/// @brief Method CalculateFrustumPlanes, addr 0x182246d60, size 0x2a0, virtual false, abstract: false, final false
static inline void CalculateFrustumPlanes(::UnityEngine::Camera*  camera, ::System::Span_1<::UnityEngine::Plane>  planes) ;

/// @brief Method CalculateFrustumPlanes, addr 0x1822472c0, size 0x50, virtual false, abstract: false, final false
static inline void CalculateFrustumPlanes(::UnityEngine::Matrix4x4  worldToProjectionMatrix, ::ArrayW<::UnityEngine::Plane>  planes) ;

/// @brief Method CalculateFrustumPlanes, addr 0x182246c90, size 0xd0, virtual false, abstract: false, final false
static inline void CalculateFrustumPlanes(::by_ref<::UnityEngine::Matrix4x4>  worldToProjectionMatrix, ::System::Span_1<::UnityEngine::Plane>  planes) ;

/// @brief Method Internal_CalculateBounds, addr 0x182247320, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds Internal_CalculateBounds(::ArrayW<::UnityEngine::Vector3>  positions, ::by_ref<::UnityEngine::Matrix4x4>  transform) ;

/// @brief Method Internal_CalculateBounds_Injected, addr 0x182247310, size 0x10, virtual false, abstract: false, final false
static inline void Internal_CalculateBounds_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  positions, ::by_ref<::UnityEngine::Matrix4x4>  transform, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// @brief Method Internal_ExtractPlanes, addr 0x1822473c0, size 0x50, virtual false, abstract: false, final false
static inline void Internal_ExtractPlanes(::System::Span_1<::UnityEngine::Plane>  planes, ::by_ref<::UnityEngine::Matrix4x4>  worldToProjectionMatrix) ;

/// @brief Method Internal_ExtractPlanes_Injected, addr 0x1822473b0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_ExtractPlanes_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  planes, ::by_ref<::UnityEngine::Matrix4x4>  worldToProjectionMatrix) ;

/// @brief Method Internal_TestPlanesAABB, addr 0x182247420, size 0x60, virtual false, abstract: false, final false
static inline bool Internal_TestPlanesAABB(::System::ReadOnlySpan_1<::UnityEngine::Plane>  planes, ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method Internal_TestPlanesAABB_Injected, addr 0x182247410, size 0x10, virtual false, abstract: false, final false
static inline bool Internal_TestPlanesAABB_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  planes, ::by_ref<::UnityEngine::Bounds>  bounds) ;

/// @brief Method TestPlanesAABB, addr 0x182247480, size 0xa0, virtual false, abstract: false, final false
static inline bool TestPlanesAABB(::ArrayW<::UnityEngine::Plane>  planes, ::UnityEngine::Bounds  bounds) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeometryUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeometryUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GeometryUtility(GeometryUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeometryUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeometryUtility(GeometryUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10467};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::GeometryUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
