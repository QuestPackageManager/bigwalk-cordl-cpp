#pragma once
// IWYU pragma private; include "AmplifyImpostors/RenderPipelineInUse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderPipelineInUse)
// Forward declare root types
namespace AmplifyImpostors {
struct RenderPipelineInUse;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::RenderPipelineInUse);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::RenderPipelineInUse, "AmplifyImpostors", "RenderPipelineInUse");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.RenderPipelineInUse
struct CORDL_TYPE RenderPipelineInUse {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderPipelineInUse_Unwrapped
enum struct __RenderPipelineInUse_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_HDRP = static_cast<int32_t>(0x1),
__E_URP = static_cast<int32_t>(0x2),
__E_Custom = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderPipelineInUse_Unwrapped () const noexcept {
return static_cast<__RenderPipelineInUse_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderPipelineInUse() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderPipelineInUse(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(3)
static ::AmplifyImpostors::RenderPipelineInUse const Custom;

/// @brief Field HDRP value: I32(1)
static ::AmplifyImpostors::RenderPipelineInUse const HDRP;

/// @brief Field None value: I32(0)
static ::AmplifyImpostors::RenderPipelineInUse const None;

/// @brief Field URP value: I32(2)
static ::AmplifyImpostors::RenderPipelineInUse const URP;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20943};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::RenderPipelineInUse, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::RenderPipelineInUse) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
