#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/GradingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GradingMode)
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
struct GradingMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PostProcessing::GradingMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::GradingMode, "UnityEngine.Rendering.PostProcessing", "GradingMode");
// Dependencies 
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: true
// CS Name: UnityEngine.Rendering.PostProcessing.GradingMode
struct CORDL_TYPE GradingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GradingMode_Unwrapped
enum struct __GradingMode_Unwrapped : int32_t {
__E_LowDefinitionRange = static_cast<int32_t>(0x0),
__E_HighDefinitionRange = static_cast<int32_t>(0x1),
__E_External = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GradingMode_Unwrapped () const noexcept {
return static_cast<__GradingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GradingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GradingMode(int32_t  value__) noexcept;

/// @brief Field External value: I32(2)
static ::UnityEngine::Rendering::PostProcessing::GradingMode const External;

/// @brief Field HighDefinitionRange value: I32(1)
static ::UnityEngine::Rendering::PostProcessing::GradingMode const HighDefinitionRange;

/// @brief Field LowDefinitionRange value: I32(0)
static ::UnityEngine::Rendering::PostProcessing::GradingMode const LowDefinitionRange;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18555};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::GradingMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::GradingMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
