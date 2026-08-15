#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/VadSensitivityLevels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VadSensitivityLevels)
// Forward declare root types
namespace Dissonance::Audio::Capture {
struct VadSensitivityLevels;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Capture::VadSensitivityLevels);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::VadSensitivityLevels, "Dissonance.Audio.Capture", "VadSensitivityLevels");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: true
// CS Name: Dissonance.Audio.Capture.VadSensitivityLevels
struct CORDL_TYPE VadSensitivityLevels {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VadSensitivityLevels_Unwrapped
enum struct __VadSensitivityLevels_Unwrapped : int32_t {
__E_LowSensitivity = static_cast<int32_t>(0x0),
__E_MediumSensitivity = static_cast<int32_t>(0x1),
__E_HighSensitivity = static_cast<int32_t>(0x2),
__E_VeryHighSensitivity = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VadSensitivityLevels_Unwrapped () const noexcept {
return static_cast<__VadSensitivityLevels_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VadSensitivityLevels() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VadSensitivityLevels(int32_t  value__) noexcept;

/// @brief Field HighSensitivity value: I32(2)
static ::Dissonance::Audio::Capture::VadSensitivityLevels const HighSensitivity;

/// @brief Field LowSensitivity value: I32(0)
static ::Dissonance::Audio::Capture::VadSensitivityLevels const LowSensitivity;

/// @brief Field MediumSensitivity value: I32(1)
static ::Dissonance::Audio::Capture::VadSensitivityLevels const MediumSensitivity;

/// @brief Field VeryHighSensitivity value: I32(3)
static ::Dissonance::Audio::Capture::VadSensitivityLevels const VeryHighSensitivity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17038};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::VadSensitivityLevels, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::VadSensitivityLevels) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
