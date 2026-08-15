#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityScrollDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityScrollDirection)
// Forward declare root types
namespace UnityEngine::Accessibility {
struct AccessibilityScrollDirection;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Accessibility::AccessibilityScrollDirection);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityScrollDirection, "UnityEngine.Accessibility", "AccessibilityScrollDirection");
// Dependencies 
namespace UnityEngine::Accessibility {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AccessibilityScrollDirection
struct CORDL_TYPE AccessibilityScrollDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __AccessibilityScrollDirection_Unwrapped
enum struct __AccessibilityScrollDirection_Unwrapped : uint8_t {
__E_Unknown = static_cast<uint8_t>(0x0u),
__E_Forward = static_cast<uint8_t>(0x1u),
__E_Backward = static_cast<uint8_t>(0x2u),
__E_Left = static_cast<uint8_t>(0x3u),
__E_Right = static_cast<uint8_t>(0x4u),
__E_Up = static_cast<uint8_t>(0x5u),
__E_Down = static_cast<uint8_t>(0x6u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AccessibilityScrollDirection_Unwrapped () const noexcept {
return static_cast<__AccessibilityScrollDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityScrollDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AccessibilityScrollDirection(uint8_t  value__) noexcept;

/// @brief Field Backward value: U8(2)
static ::UnityEngine::Accessibility::AccessibilityScrollDirection const Backward;

/// @brief Field Down value: U8(6)
static ::UnityEngine::Accessibility::AccessibilityScrollDirection const Down;

/// @brief Field Forward value: U8(1)
static ::UnityEngine::Accessibility::AccessibilityScrollDirection const Forward;

/// @brief Field Left value: U8(3)
static ::UnityEngine::Accessibility::AccessibilityScrollDirection const Left;

/// @brief Field Right value: U8(4)
static ::UnityEngine::Accessibility::AccessibilityScrollDirection const Right;

/// @brief Field Unknown value: U8(0)
static ::UnityEngine::Accessibility::AccessibilityScrollDirection const Unknown;

/// @brief Field Up value: U8(5)
static ::UnityEngine::Accessibility::AccessibilityScrollDirection const Up;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21224};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityScrollDirection, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityScrollDirection) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
