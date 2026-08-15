#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/SteamControllerPadType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamControllerPadType)
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct SteamControllerPadType;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::SteamControllerPadType);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::SteamControllerPadType, "Rewired.ControllerExtensions", "SteamControllerPadType");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.SteamControllerPadType
struct CORDL_TYPE SteamControllerPadType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __SteamControllerPadType_Unwrapped
enum struct __SteamControllerPadType_Unwrapped : uint32_t {
__E_Left = static_cast<uint32_t>(0x0u),
__E_Right = static_cast<uint32_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SteamControllerPadType_Unwrapped () const noexcept {
return static_cast<__SteamControllerPadType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SteamControllerPadType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SteamControllerPadType(uint32_t  value__) noexcept;

/// @brief Field Left value: U32(0)
static ::Rewired::ControllerExtensions::SteamControllerPadType const Left;

/// @brief Field Right value: U32(1)
static ::Rewired::ControllerExtensions::SteamControllerPadType const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2713};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::SteamControllerPadType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::SteamControllerPadType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
