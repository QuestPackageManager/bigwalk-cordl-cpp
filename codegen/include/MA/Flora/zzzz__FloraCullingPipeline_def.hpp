#pragma once
// IWYU pragma private; include "MA/Flora/FloraCullingPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloraCullingPipeline)
// Forward declare root types
namespace MA::Flora {
struct FloraCullingPipeline;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraCullingPipeline);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraCullingPipeline, "MA.Flora", "FloraCullingPipeline");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraCullingPipeline
struct CORDL_TYPE FloraCullingPipeline {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FloraCullingPipeline_Unwrapped
enum struct __FloraCullingPipeline_Unwrapped : int32_t {
__E_RenderMesh = static_cast<int32_t>(0x0),
__E_BatchRendererGroup = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FloraCullingPipeline_Unwrapped () const noexcept {
return static_cast<__FloraCullingPipeline_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FloraCullingPipeline() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FloraCullingPipeline(int32_t  value__) noexcept;

/// @brief Field BatchRendererGroup value: I32(1)
static ::MA::Flora::FloraCullingPipeline const BatchRendererGroup;

/// @brief Field RenderMesh value: I32(0)
static ::MA::Flora::FloraCullingPipeline const RenderMesh;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13349};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraCullingPipeline, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraCullingPipeline) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
