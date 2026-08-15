#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/NoiseSuppressionLevels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoiseSuppressionLevels)
// Forward declare root types
namespace Dissonance::Audio::Capture {
struct NoiseSuppressionLevels;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Capture::NoiseSuppressionLevels);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::NoiseSuppressionLevels, "Dissonance.Audio.Capture", "NoiseSuppressionLevels");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: true
// CS Name: Dissonance.Audio.Capture.NoiseSuppressionLevels
struct CORDL_TYPE NoiseSuppressionLevels {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NoiseSuppressionLevels_Unwrapped
enum struct __NoiseSuppressionLevels_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0xffffffff),
__E_Low = static_cast<int32_t>(0x0),
__E_Moderate = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
__E_VeryHigh = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NoiseSuppressionLevels_Unwrapped () const noexcept {
return static_cast<__NoiseSuppressionLevels_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NoiseSuppressionLevels() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NoiseSuppressionLevels(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(-1)
static ::Dissonance::Audio::Capture::NoiseSuppressionLevels const Disabled;

/// @brief Field High value: I32(2)
static ::Dissonance::Audio::Capture::NoiseSuppressionLevels const High;

/// @brief Field Low value: I32(0)
static ::Dissonance::Audio::Capture::NoiseSuppressionLevels const Low;

/// @brief Field Moderate value: I32(1)
static ::Dissonance::Audio::Capture::NoiseSuppressionLevels const Moderate;

/// @brief Field VeryHigh value: I32(3)
static ::Dissonance::Audio::Capture::NoiseSuppressionLevels const VeryHigh;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17034};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::NoiseSuppressionLevels, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::NoiseSuppressionLevels) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
