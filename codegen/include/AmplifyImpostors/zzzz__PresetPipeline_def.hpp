#pragma once
// IWYU pragma private; include "AmplifyImpostors/PresetPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PresetPipeline)
// Forward declare root types
namespace AmplifyImpostors {
struct PresetPipeline;
}
// Write type traits
MARK_VAL_T(::AmplifyImpostors::PresetPipeline);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::PresetPipeline, "AmplifyImpostors", "PresetPipeline");
// Dependencies 
namespace AmplifyImpostors {
// Is value type: true
// CS Name: AmplifyImpostors.PresetPipeline
struct CORDL_TYPE PresetPipeline {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PresetPipeline_Unwrapped
enum struct __PresetPipeline_Unwrapped : int32_t {
__E_Legacy = static_cast<int32_t>(0x0),
__E_Lightweight = static_cast<int32_t>(0x1),
__E_HighDefinition = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PresetPipeline_Unwrapped () const noexcept {
return static_cast<__PresetPipeline_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PresetPipeline() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PresetPipeline(int32_t  value__) noexcept;

/// @brief Field HighDefinition value: I32(2)
static ::AmplifyImpostors::PresetPipeline const HighDefinition;

/// @brief Field Legacy value: I32(0)
static ::AmplifyImpostors::PresetPipeline const Legacy;

/// @brief Field Lightweight value: I32(1)
static ::AmplifyImpostors::PresetPipeline const Lightweight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20955};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::PresetPipeline, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::PresetPipeline) == 0x4, "Size mismatch!");

} // namespace end def AmplifyImpostors
