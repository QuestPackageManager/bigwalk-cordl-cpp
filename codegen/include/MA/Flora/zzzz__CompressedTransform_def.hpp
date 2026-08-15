#pragma once
// IWYU pragma private; include "MA/Flora/CompressedTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__half3_def.hpp"
#include "Unity/Mathematics/zzzz__half4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CompressedTransform)
namespace MA::Flora {
struct FloraInstanceTransform;
}
// Forward declare root types
namespace MA::Flora {
struct CompressedTransform;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CompressedTransform);
DEFINE_IL2CPP_CLASS(::MA::Flora::CompressedTransform, "MA.Flora", "CompressedTransform");
// Dependencies Unity.Mathematics.float3, Unity.Mathematics.half3, Unity.Mathematics.half4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CompressedTransform
struct CORDL_TYPE CompressedTransform {
public:
// Declarations
/// @brief Method op_Implicit, addr 0x18150aae0, size 0xa0, virtual false, abstract: false, final false
static inline ::MA::Flora::CompressedTransform op_Implicit___MA__Flora__CompressedTransform(::MA::Flora::FloraInstanceTransform  instanceTransform) ;

/// @brief Method op_Implicit, addr 0x18150ab80, size 0x90, virtual false, abstract: false, final false
static inline ::MA::Flora::FloraInstanceTransform op_Implicit___MA__Flora__FloraInstanceTransform(::MA::Flora::CompressedTransform  transform) ;

// Ctor Parameters []
// @brief default ctor
constexpr CompressedTransform() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "Rotation", ty: "::Unity::Mathematics::half4", modifiers: "", def_value: None }, CppParam { name: "Scale", ty: "::Unity::Mathematics::half3", modifiers: "", def_value: None }]
constexpr CompressedTransform(::Unity::Mathematics::float3  Position, ::Unity::Mathematics::half4  Rotation, ::Unity::Mathematics::half3  Scale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13405};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Position;

/// @brief Field Rotation, offset: 0xc, size: 0x8, def value: None
 ::Unity::Mathematics::half4  Rotation;

/// @brief Field Scale, offset: 0x14, size: 0x6, def value: None
 ::Unity::Mathematics::half3  Scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CompressedTransform, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CompressedTransform, Rotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CompressedTransform, Scale) == 0x14, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CompressedTransform) == 0x1c, "Size mismatch!");

} // namespace end def MA::Flora
