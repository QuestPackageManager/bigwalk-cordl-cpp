#pragma once
// IWYU pragma private; include "Rewired/Config/UpdateMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateMode)
// Forward declare root types
namespace Rewired::Config {
struct UpdateMode;
}
// Write type traits
MARK_VAL_T(::Rewired::Config::UpdateMode);
DEFINE_IL2CPP_CLASS(::Rewired::Config::UpdateMode, "Rewired.Config", "UpdateMode");
// Dependencies 
namespace Rewired::Config {
// Is value type: true
// CS Name: Rewired.Config.UpdateMode
struct CORDL_TYPE UpdateMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UpdateMode_Unwrapped
enum struct __UpdateMode_Unwrapped : int32_t {
__E_Automatic = static_cast<int32_t>(0x0),
__E_Manual = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UpdateMode_Unwrapped () const noexcept {
return static_cast<__UpdateMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UpdateMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UpdateMode(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(0)
static ::Rewired::Config::UpdateMode const Automatic;

/// @brief Field Manual value: I32(1)
static ::Rewired::Config::UpdateMode const Manual;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2718};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Config::UpdateMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Config::UpdateMode) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Config
