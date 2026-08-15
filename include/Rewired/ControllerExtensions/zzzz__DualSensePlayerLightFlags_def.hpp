#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSensePlayerLightFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSensePlayerLightFlags)
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSensePlayerLightFlags;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSensePlayerLightFlags);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSensePlayerLightFlags, "Rewired.ControllerExtensions", "DualSensePlayerLightFlags");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSensePlayerLightFlags
struct CORDL_TYPE DualSensePlayerLightFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DualSensePlayerLightFlags_Unwrapped
enum struct __DualSensePlayerLightFlags_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_One = static_cast<uint8_t>(0x1u),
__E_Two = static_cast<uint8_t>(0x2u),
__E_Three = static_cast<uint8_t>(0x4u),
__E_Four = static_cast<uint8_t>(0x8u),
__E_Five = static_cast<uint8_t>(0x10u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DualSensePlayerLightFlags_Unwrapped () const noexcept {
return static_cast<__DualSensePlayerLightFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DualSensePlayerLightFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DualSensePlayerLightFlags(uint8_t  value__) noexcept;

/// @brief Field Five value: U8(16)
static ::Rewired::ControllerExtensions::DualSensePlayerLightFlags const Five;

/// @brief Field Four value: U8(8)
static ::Rewired::ControllerExtensions::DualSensePlayerLightFlags const Four;

/// @brief Field None value: U8(0)
static ::Rewired::ControllerExtensions::DualSensePlayerLightFlags const None;

/// @brief Field One value: U8(1)
static ::Rewired::ControllerExtensions::DualSensePlayerLightFlags const One;

/// @brief Field Three value: U8(4)
static ::Rewired::ControllerExtensions::DualSensePlayerLightFlags const Three;

/// @brief Field Two value: U8(2)
static ::Rewired::ControllerExtensions::DualSensePlayerLightFlags const Two;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2680};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSensePlayerLightFlags, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSensePlayerLightFlags) == 0x1, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
