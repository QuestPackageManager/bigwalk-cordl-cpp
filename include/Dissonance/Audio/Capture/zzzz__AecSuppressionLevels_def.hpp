#pragma once
// IWYU pragma private; include "Dissonance/Audio/Capture/AecSuppressionLevels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AecSuppressionLevels)
// Forward declare root types
namespace Dissonance::Audio::Capture {
struct AecSuppressionLevels;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Capture::AecSuppressionLevels);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Capture::AecSuppressionLevels, "Dissonance.Audio.Capture", "AecSuppressionLevels");
// Dependencies 
namespace Dissonance::Audio::Capture {
// Is value type: true
// CS Name: Dissonance.Audio.Capture.AecSuppressionLevels
struct CORDL_TYPE AecSuppressionLevels {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AecSuppressionLevels_Unwrapped
enum struct __AecSuppressionLevels_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0xffffffff),
__E_Low = static_cast<int32_t>(0x0),
__E_Moderate = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AecSuppressionLevels_Unwrapped () const noexcept {
return static_cast<__AecSuppressionLevels_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AecSuppressionLevels() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AecSuppressionLevels(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(-1)
static ::Dissonance::Audio::Capture::AecSuppressionLevels const Disabled;

/// @brief Field High value: I32(2)
static ::Dissonance::Audio::Capture::AecSuppressionLevels const High;

/// @brief Field Low value: I32(0)
static ::Dissonance::Audio::Capture::AecSuppressionLevels const Low;

/// @brief Field Moderate value: I32(1)
static ::Dissonance::Audio::Capture::AecSuppressionLevels const Moderate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17015};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Capture::AecSuppressionLevels, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Capture::AecSuppressionLevels) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio::Capture
