#pragma once
// IWYU pragma private; include "Rewired/Config/ThrottleCalibrationMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThrottleCalibrationMode)
// Forward declare root types
namespace Rewired::Config {
struct ThrottleCalibrationMode;
}
// Write type traits
MARK_VAL_T(::Rewired::Config::ThrottleCalibrationMode);
DEFINE_IL2CPP_CLASS(::Rewired::Config::ThrottleCalibrationMode, "Rewired.Config", "ThrottleCalibrationMode");
// Dependencies 
namespace Rewired::Config {
// Is value type: true
// CS Name: Rewired.Config.ThrottleCalibrationMode
struct CORDL_TYPE ThrottleCalibrationMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ThrottleCalibrationMode_Unwrapped
enum struct __ThrottleCalibrationMode_Unwrapped : int32_t {
__E_ZeroToOne = static_cast<int32_t>(0x0),
__E_NegativeOneToOne = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ThrottleCalibrationMode_Unwrapped () const noexcept {
return static_cast<__ThrottleCalibrationMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ThrottleCalibrationMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ThrottleCalibrationMode(int32_t  value__) noexcept;

/// @brief Field NegativeOneToOne value: I32(1)
static ::Rewired::Config::ThrottleCalibrationMode const NegativeOneToOne;

/// @brief Field ZeroToOne value: I32(0)
static ::Rewired::Config::ThrottleCalibrationMode const ZeroToOne;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2719};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Config::ThrottleCalibrationMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Config::ThrottleCalibrationMode) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Config
