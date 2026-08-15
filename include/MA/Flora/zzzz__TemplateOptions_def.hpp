#pragma once
// IWYU pragma private; include "MA/Flora/TemplateOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateOptions)
// Forward declare root types
namespace MA::Flora {
struct TemplateOptions;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TemplateOptions);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateOptions, "MA.Flora", "TemplateOptions");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateOptions
struct CORDL_TYPE TemplateOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TemplateOptions_Unwrapped
enum struct __TemplateOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DisableMotionVectors = static_cast<int32_t>(0x1),
__E_DisableLightProbes = static_cast<int32_t>(0x2),
__E_DisableLightmaps = static_cast<int32_t>(0x4),
__E_RandomID = static_cast<int32_t>(0x8),
__E_VariationColor = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TemplateOptions_Unwrapped () const noexcept {
return static_cast<__TemplateOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TemplateOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TemplateOptions(int32_t  value__) noexcept;

/// @brief Field DisableLightProbes value: I32(2)
static ::MA::Flora::TemplateOptions const DisableLightProbes;

/// @brief Field DisableLightmaps value: I32(4)
static ::MA::Flora::TemplateOptions const DisableLightmaps;

/// @brief Field DisableMotionVectors value: I32(1)
static ::MA::Flora::TemplateOptions const DisableMotionVectors;

/// @brief Field None value: I32(0)
static ::MA::Flora::TemplateOptions const None;

/// @brief Field RandomID value: I32(8)
static ::MA::Flora::TemplateOptions const RandomID;

/// @brief Field VariationColor value: I32(16)
static ::MA::Flora::TemplateOptions const VariationColor;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13063};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateOptions, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateOptions) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
