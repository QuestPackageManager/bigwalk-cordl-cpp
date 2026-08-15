#pragma once
// IWYU pragma private; include "MA/Flora/PackedCullingChunkAttributes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PackedCullingChunkAttributes)
// Forward declare root types
namespace MA::Flora {
struct PackedCullingChunkAttributes;
}
// Write type traits
MARK_VAL_T(::MA::Flora::PackedCullingChunkAttributes);
DEFINE_IL2CPP_CLASS(::MA::Flora::PackedCullingChunkAttributes, "MA.Flora", "PackedCullingChunkAttributes");
// Dependencies Unity.Mathematics.uint4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.PackedCullingChunkAttributes
struct CORDL_TYPE PackedCullingChunkAttributes {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PackedCullingChunkAttributes() ;

// Ctor Parameters [CppParam { name: "data", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None }]
constexpr PackedCullingChunkAttributes(::Unity::Mathematics::uint4  data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field data, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::uint4  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::PackedCullingChunkAttributes, data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::PackedCullingChunkAttributes) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
