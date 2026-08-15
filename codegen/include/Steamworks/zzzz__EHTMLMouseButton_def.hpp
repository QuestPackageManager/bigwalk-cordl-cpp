#pragma once
// IWYU pragma private; include "Steamworks/EHTMLMouseButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EHTMLMouseButton)
// Forward declare root types
namespace Steamworks {
struct EHTMLMouseButton;
}
// Write type traits
MARK_VAL_T(::Steamworks::EHTMLMouseButton);
DEFINE_IL2CPP_CLASS(::Steamworks::EHTMLMouseButton, "Steamworks", "EHTMLMouseButton");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EHTMLMouseButton
struct CORDL_TYPE EHTMLMouseButton {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EHTMLMouseButton_Unwrapped
enum struct __EHTMLMouseButton_Unwrapped : int32_t {
__E_eHTMLMouseButton_Left = static_cast<int32_t>(0x0),
__E_eHTMLMouseButton_Right = static_cast<int32_t>(0x1),
__E_eHTMLMouseButton_Middle = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EHTMLMouseButton_Unwrapped () const noexcept {
return static_cast<__EHTMLMouseButton_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EHTMLMouseButton() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EHTMLMouseButton(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16248};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field eHTMLMouseButton_Left value: I32(0)
static ::Steamworks::EHTMLMouseButton const eHTMLMouseButton_Left;

/// @brief Field eHTMLMouseButton_Middle value: I32(2)
static ::Steamworks::EHTMLMouseButton const eHTMLMouseButton_Middle;

/// @brief Field eHTMLMouseButton_Right value: I32(1)
static ::Steamworks::EHTMLMouseButton const eHTMLMouseButton_Right;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EHTMLMouseButton, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EHTMLMouseButton) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
