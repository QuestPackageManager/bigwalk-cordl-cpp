#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityRole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityRole)
// Forward declare root types
namespace UnityEngine::Accessibility {
struct AccessibilityRole;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Accessibility::AccessibilityRole);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityRole, "UnityEngine.Accessibility", "AccessibilityRole");
// Dependencies 
namespace UnityEngine::Accessibility {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AccessibilityRole
struct CORDL_TYPE AccessibilityRole {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __AccessibilityRole_Unwrapped
enum struct __AccessibilityRole_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_Button = static_cast<uint8_t>(0x1u),
__E_Image = static_cast<uint8_t>(0x2u),
__E_StaticText = static_cast<uint8_t>(0x3u),
__E_SearchField = static_cast<uint8_t>(0x4u),
__E_KeyboardKey = static_cast<uint8_t>(0x5u),
__E_Header = static_cast<uint8_t>(0x6u),
__E_TabBar = static_cast<uint8_t>(0x7u),
__E_Slider = static_cast<uint8_t>(0x8u),
__E_Toggle = static_cast<uint8_t>(0x9u),
__E_Container = static_cast<uint8_t>(0xau),
__E_TextField = static_cast<uint8_t>(0xbu),
__E_Dropdown = static_cast<uint8_t>(0xcu),
__E_TabButton = static_cast<uint8_t>(0xdu),
__E_ScrollView = static_cast<uint8_t>(0xeu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AccessibilityRole_Unwrapped () const noexcept {
return static_cast<__AccessibilityRole_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityRole() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AccessibilityRole(uint8_t  value__) noexcept;

/// @brief Field Button value: U8(1)
static ::UnityEngine::Accessibility::AccessibilityRole const Button;

/// @brief Field Container value: U8(10)
static ::UnityEngine::Accessibility::AccessibilityRole const Container;

/// @brief Field Dropdown value: U8(12)
static ::UnityEngine::Accessibility::AccessibilityRole const Dropdown;

/// @brief Field Header value: U8(6)
static ::UnityEngine::Accessibility::AccessibilityRole const Header;

/// @brief Field Image value: U8(2)
static ::UnityEngine::Accessibility::AccessibilityRole const Image;

/// @brief Field KeyboardKey value: U8(5)
static ::UnityEngine::Accessibility::AccessibilityRole const KeyboardKey;

/// @brief Field None value: U8(0)
static ::UnityEngine::Accessibility::AccessibilityRole const None;

/// @brief Field ScrollView value: U8(14)
static ::UnityEngine::Accessibility::AccessibilityRole const ScrollView;

/// @brief Field SearchField value: U8(4)
static ::UnityEngine::Accessibility::AccessibilityRole const SearchField;

/// @brief Field Slider value: U8(8)
static ::UnityEngine::Accessibility::AccessibilityRole const Slider;

/// @brief Field StaticText value: U8(3)
static ::UnityEngine::Accessibility::AccessibilityRole const StaticText;

/// @brief Field TabBar value: U8(7)
static ::UnityEngine::Accessibility::AccessibilityRole const TabBar;

/// @brief Field TabButton value: U8(13)
static ::UnityEngine::Accessibility::AccessibilityRole const TabButton;

/// @brief Field TextField value: U8(11)
static ::UnityEngine::Accessibility::AccessibilityRole const TextField;

/// @brief Field Toggle value: U8(9)
static ::UnityEngine::Accessibility::AccessibilityRole const Toggle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21222};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityRole, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityRole) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
