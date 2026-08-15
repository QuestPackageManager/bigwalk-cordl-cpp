#pragma once
// IWYU pragma private; include "Rewired/Config/KeyCombinationOverrideMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyCombinationOverrideMode)
// Forward declare root types
namespace Rewired::Config {
struct KeyCombinationOverrideMode;
}
// Write type traits
MARK_VAL_T(::Rewired::Config::KeyCombinationOverrideMode);
DEFINE_IL2CPP_CLASS(::Rewired::Config::KeyCombinationOverrideMode, "Rewired.Config", "KeyCombinationOverrideMode");
// Dependencies 
namespace Rewired::Config {
// Is value type: true
// CS Name: Rewired.Config.KeyCombinationOverrideMode
struct CORDL_TYPE KeyCombinationOverrideMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __KeyCombinationOverrideMode_Unwrapped
enum struct __KeyCombinationOverrideMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Pause = static_cast<int32_t>(0x1),
__E_Cancel = static_cast<int32_t>(0x2),
__E_Overlap = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyCombinationOverrideMode_Unwrapped () const noexcept {
return static_cast<__KeyCombinationOverrideMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr KeyCombinationOverrideMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyCombinationOverrideMode(int32_t  value__) noexcept;

/// @brief Field Cancel value: I32(2)
static ::Rewired::Config::KeyCombinationOverrideMode const Cancel;

/// @brief Field None value: I32(0)
static ::Rewired::Config::KeyCombinationOverrideMode const None;

/// @brief Field Overlap value: I32(3)
static ::Rewired::Config::KeyCombinationOverrideMode const Overlap;

/// @brief Field Pause value: I32(1)
static ::Rewired::Config::KeyCombinationOverrideMode const Pause;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2720};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Config::KeyCombinationOverrideMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Config::KeyCombinationOverrideMode) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Config
