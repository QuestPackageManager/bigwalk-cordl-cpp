#pragma once
// IWYU pragma private; include "MA/Flora/Line.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Line)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace MA::Flora {
struct Line;
}
// Write type traits
MARK_VAL_T(::MA::Flora::Line);
DEFINE_IL2CPP_CLASS(::MA::Flora::Line, "MA.Flora", "Line");
// Dependencies Unity.Mathematics.float3
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.Line
struct CORDL_TYPE Line {
public:
// Declarations
/// @brief Method LineOfPlaneIntersectingPlane, addr 0x181500600, size 0xc0, virtual false, abstract: false, final false
static inline ::MA::Flora::Line LineOfPlaneIntersectingPlane(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b) ;

/// @brief Method PlaneContainingLineAndPoint, addr 0x1815006c0, size 0x110, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 PlaneContainingLineAndPoint(::MA::Flora::Line  a, ::Unity::Mathematics::float3  b) ;

/// @brief Method PlaneContainingLineWithNormalPerpendicularToVector, addr 0x1815007d0, size 0xe0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float4 PlaneContainingLineWithNormalPerpendicularToVector(::MA::Flora::Line  a, ::Unity::Mathematics::float3  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr Line() ;

// Ctor Parameters [CppParam { name: "M", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "T", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }]
constexpr Line(::Unity::Mathematics::float3  M, ::Unity::Mathematics::float3  T) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13311};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field M, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  M;

/// @brief Field T, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  T;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::Line, M) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::Line, T) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::Line) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
