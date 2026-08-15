#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/NotificationLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NotificationLocation)
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct NotificationLocation;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::NotificationLocation);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::NotificationLocation, "Epic.OnlineServices.UI", "NotificationLocation");
// Dependencies 
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.NotificationLocation
struct CORDL_TYPE NotificationLocation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NotificationLocation_Unwrapped
enum struct __NotificationLocation_Unwrapped : int32_t {
__E_TopLeft = static_cast<int32_t>(0x0),
__E_TopRight = static_cast<int32_t>(0x1),
__E_BottomLeft = static_cast<int32_t>(0x2),
__E_BottomRight = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NotificationLocation_Unwrapped () const noexcept {
return static_cast<__NotificationLocation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NotificationLocation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NotificationLocation(int32_t  value__) noexcept;

/// @brief Field BottomLeft value: I32(2)
static ::Epic::OnlineServices::UI::NotificationLocation const BottomLeft;

/// @brief Field BottomRight value: I32(3)
static ::Epic::OnlineServices::UI::NotificationLocation const BottomRight;

/// @brief Field TopLeft value: I32(0)
static ::Epic::OnlineServices::UI::NotificationLocation const TopLeft;

/// @brief Field TopRight value: I32(1)
static ::Epic::OnlineServices::UI::NotificationLocation const TopRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7529};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::NotificationLocation, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::NotificationLocation) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
