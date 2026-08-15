#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnScreenKeyboardBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnScreenKeyboardBehavior)
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct OnScreenKeyboardBehavior;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::OnScreenKeyboardBehavior);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::OnScreenKeyboardBehavior, "Epic.OnlineServices.UI", "OnScreenKeyboardBehavior");
// Dependencies 
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.OnScreenKeyboardBehavior
struct CORDL_TYPE OnScreenKeyboardBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OnScreenKeyboardBehavior_Unwrapped
enum struct __OnScreenKeyboardBehavior_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Notification = static_cast<int32_t>(0x1),
__E_Native = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OnScreenKeyboardBehavior_Unwrapped () const noexcept {
return static_cast<__OnScreenKeyboardBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OnScreenKeyboardBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OnScreenKeyboardBehavior(int32_t  value__) noexcept;

/// @brief Field Native value: I32(2)
static ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior const Native;

/// @brief Field None value: I32(0)
static ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior const None;

/// @brief Field Notification value: I32(1)
static ::Epic::OnlineServices::UI::OnScreenKeyboardBehavior const Notification;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7541};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::OnScreenKeyboardBehavior, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::OnScreenKeyboardBehavior) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
