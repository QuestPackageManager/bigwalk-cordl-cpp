#pragma once
// IWYU pragma private; include "MA/Flora/ReceiverPlanes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReceiverPlanes)
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
struct ReceiverPlanes;
}
// Write type traits
MARK_VAL_T(::MA::Flora::ReceiverPlanes);
DEFINE_IL2CPP_CLASS(::MA::Flora::ReceiverPlanes, "MA.Flora", "ReceiverPlanes");
// Dependencies Unity.Collections.NativeList`1<T>, UnityEngine.Plane
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ReceiverPlanes
struct CORDL_TYPE ReceiverPlanes {
public:
// Declarations
/// @brief Method Create, addr 0x181500cc0, size 0xbc0, virtual false, abstract: false, final false
static inline ::MA::Flora::ReceiverPlanes Create(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  cc, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method CreateEmptyForTesting, addr 0x181500c70, size 0x50, virtual false, abstract: false, final false
static inline ::MA::Flora::ReceiverPlanes CreateEmptyForTesting(::Unity::Collections::Allocator  allocator) ;

/// @brief Method Dispose, addr 0x181501880, size 0x70, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle Dispose(::Unity::Jobs::JobHandle  job) ;

/// @brief Method IsSignBitSet, addr 0x1815018f0, size 0x10, virtual false, abstract: false, final false
static inline bool IsSignBitSet(float_t  x) ;

/// @brief Method LightFacingFrustumPlaneSubArray, addr 0x181501900, size 0x90, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> LightFacingFrustumPlaneSubArray() ;

/// @brief Method SilhouettePlaneSubArray, addr 0x181501990, size 0x90, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> SilhouettePlaneSubArray() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReceiverPlanes() ;

// Ctor Parameters [CppParam { name: "Planes", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "LightFacingPlaneCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReceiverPlanes(::Unity::Collections::NativeList_1<::UnityEngine::Plane>  Planes, int32_t  LightFacingPlaneCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13314};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Planes, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Plane>  Planes;

/// @brief Field LightFacingPlaneCount, offset: 0x8, size: 0x4, def value: None
 int32_t  LightFacingPlaneCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ReceiverPlanes, Planes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ReceiverPlanes, LightFacingPlaneCount) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ReceiverPlanes) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
