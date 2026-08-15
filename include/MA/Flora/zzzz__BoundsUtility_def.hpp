#pragma once
// IWYU pragma private; include "MA/Flora/BoundsUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoundsUtility)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace MA::Flora {
class BoundsUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::BoundsUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::BoundsUtility*, "MA.Flora", "BoundsUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.BoundsUtility
class CORDL_TYPE BoundsUtility : public ::System::Object {
public:
// Declarations
/// @brief Method GetBoundingRadius, addr 0x1814f6490, size 0x70, virtual false, abstract: false, final false
static inline float_t GetBoundingRadius(::UnityEngine::Bounds  b) ;

/// @brief Method GetClosestPointTo, addr 0x1814f51f0, size 0x1f0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float3 GetClosestPointTo(::UnityEngine::Bounds  b, ::Unity::Mathematics::float3  point) ;

/// @brief Method IntersectsSphere, addr 0x1814f67f0, size 0xf0, virtual false, abstract: false, final false
static inline bool IntersectsSphere(::UnityEngine::Bounds  b, ::Unity::Mathematics::float3  center, float_t  radius) ;

/// @brief Method IntersectsSphere, addr 0x1814f66d0, size 0x120, virtual false, abstract: false, final false
static inline bool IntersectsSphere(::UnityEngine::Bounds  b, ::UnityEngine::BoundingSphere  sphere) ;

/// @brief Method IntersectsSphereSq, addr 0x1814f53e0, size 0xe0, virtual false, abstract: false, final false
static inline bool IntersectsSphereSq(::UnityEngine::Bounds  b, ::Unity::Mathematics::float3  center, float_t  radiusSq) ;

/// @brief Method IntersectsSphereSq2D, addr 0x1814f6500, size 0x1d0, virtual false, abstract: false, final false
static inline bool IntersectsSphereSq2D(::UnityEngine::Bounds  b, ::Unity::Mathematics::float3  center, float_t  radiusSq) ;

/// @brief Method IsEmpty, addr 0x1814f68e0, size 0x30, virtual false, abstract: false, final false
static inline bool IsEmpty(::UnityEngine::Bounds  b) ;

/// @brief Method TransformBy, addr 0x1814aec00, size 0x490, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds TransformBy(::UnityEngine::Bounds  b, ::Unity::Mathematics::float4x4  m) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoundsUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoundsUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoundsUtility(BoundsUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoundsUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoundsUtility(BoundsUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13310};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::BoundsUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
