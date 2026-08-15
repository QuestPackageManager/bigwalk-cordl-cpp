#pragma once
// IWYU pragma private; include "MA/Flora/MathExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MathExtensions)
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float2x2;
}
namespace Unity::Mathematics {
struct float2x4;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float3x3;
}
namespace Unity::Mathematics {
struct float4;
}
namespace Unity::Mathematics {
struct float4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MA::Flora {
class MathExtensions;
}
// Write type traits
MARK_REF_T(::MA::Flora::MathExtensions*);
DEFINE_IL2CPP_CLASS(::MA::Flora::MathExtensions*, "MA.Flora", "MathExtensions");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.MathExtensions
class CORDL_TYPE MathExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method ComputePerpendicularAxes, addr 0x18150aef0, size 0x230, virtual false, abstract: false, final false
static inline void ComputePerpendicularAxes(::Unity::Mathematics::float3  v, ::by_ref<::Unity::Mathematics::float3>  axis1, ::by_ref<::Unity::Mathematics::float3>  axis2) ;

/// @brief Method ComputePerpendicularAxes, addr 0x18150b120, size 0x380, virtual false, abstract: false, final false
static inline void ComputePerpendicularAxes(::UnityEngine::Vector3  v, ::by_ref<::UnityEngine::Vector3>  axis1, ::by_ref<::UnityEngine::Vector3>  axis2) ;

/// @brief Method IsNormalized, addr 0x18150b4e0, size 0x40, virtual false, abstract: false, final false
static inline bool IsNormalized(::Unity::Mathematics::float2  v, float_t  tolerance) ;

/// @brief Method IsNormalized, addr 0x18150b4a0, size 0x40, virtual false, abstract: false, final false
static inline bool IsNormalized(::Unity::Mathematics::float3  v, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b960, size 0x20, virtual false, abstract: false, final false
static inline bool NearlyEquals(float_t  f, float_t  other, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b520, size 0xc0, virtual false, abstract: false, final false
static inline bool NearlyEquals(::Unity::Mathematics::float2x2  m, ::Unity::Mathematics::float2x2  other, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b7d0, size 0x190, virtual false, abstract: false, final false
static inline bool NearlyEquals(::Unity::Mathematics::float2x4  m, ::Unity::Mathematics::float2x4  other, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b9c0, size 0x1b0, virtual false, abstract: false, final false
static inline bool NearlyEquals(::Unity::Mathematics::float3x3  m, ::Unity::Mathematics::float3x3  other, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b660, size 0x100, virtual false, abstract: false, final false
static inline bool NearlyEquals(::Unity::Mathematics::float4x4  m, ::Unity::Mathematics::float4x4  other, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b760, size 0x70, virtual false, abstract: false, final false
static inline bool NearlyEquals(::Unity::Mathematics::float2  v, ::Unity::Mathematics::float2  other, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b5e0, size 0x80, virtual false, abstract: false, final false
static inline bool NearlyEquals(::Unity::Mathematics::float3  v, ::Unity::Mathematics::float3  other, float_t  tolerance) ;

/// @brief Method NearlyEquals, addr 0x18150b980, size 0x40, virtual false, abstract: false, final false
static inline bool NearlyEquals(::Unity::Mathematics::float4  v, ::Unity::Mathematics::float4  other, float_t  tolerance) ;

/// @brief Method NearlyZero, addr 0x18150bc90, size 0x50, virtual false, abstract: false, final false
static inline bool NearlyZero(::Unity::Mathematics::float2  v, float_t  tolerance) ;

/// @brief Method NearlyZero, addr 0x18150bd80, size 0x90, virtual false, abstract: false, final false
static inline bool NearlyZero(::Unity::Mathematics::float2x2  v, float_t  tolerance) ;

/// @brief Method NearlyZero, addr 0x18150bd20, size 0x60, virtual false, abstract: false, final false
static inline bool NearlyZero(::Unity::Mathematics::float3  v, float_t  tolerance) ;

/// @brief Method NearlyZero, addr 0x18150bb70, size 0x120, virtual false, abstract: false, final false
static inline bool NearlyZero(::Unity::Mathematics::float3x3  v, float_t  tolerance) ;

/// @brief Method NearlyZero, addr 0x18150bce0, size 0x40, virtual false, abstract: false, final false
static inline bool NearlyZero(::Unity::Mathematics::float4  v, float_t  tolerance) ;

/// @brief Method NearlyZero, addr 0x18150be10, size 0xe0, virtual false, abstract: false, final false
static inline bool NearlyZero(::Unity::Mathematics::float4x4  v, float_t  tolerance) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MathExtensions(MathExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathExtensions(MathExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13398};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::MathExtensions) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
