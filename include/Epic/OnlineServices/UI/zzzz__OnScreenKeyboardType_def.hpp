#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnScreenKeyboardType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnScreenKeyboardType)
// Forward declare root types
namespace Epic::OnlineServices::UI {
struct OnScreenKeyboardType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::UI::OnScreenKeyboardType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::UI::OnScreenKeyboardType, "Epic.OnlineServices.UI", "OnScreenKeyboardType");
// Dependencies 
namespace Epic::OnlineServices::UI {
// Is value type: true
// CS Name: Epic.OnlineServices.UI.OnScreenKeyboardType
struct CORDL_TYPE OnScreenKeyboardType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OnScreenKeyboardType_Unwrapped
enum struct __OnScreenKeyboardType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Default = static_cast<int32_t>(0x1),
__E_Text = static_cast<int32_t>(0x2),
__E_TelephoneNumber = static_cast<int32_t>(0x3),
__E_Url = static_cast<int32_t>(0x4),
__E_Email = static_cast<int32_t>(0x5),
__E_Numeric = static_cast<int32_t>(0x6),
__E_Decimal = static_cast<int32_t>(0x7),
__E_Search = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OnScreenKeyboardType_Unwrapped () const noexcept {
return static_cast<__OnScreenKeyboardType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OnScreenKeyboardType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OnScreenKeyboardType(int32_t  value__) noexcept;

/// @brief Field Decimal value: I32(7)
static ::Epic::OnlineServices::UI::OnScreenKeyboardType const Decimal;

/// @brief Field Default value: I32(1)
static ::Epic::OnlineServices::UI::OnScreenKeyboardType const Default;

/// @brief Field Email value: I32(5)
static ::Epic::OnlineServices::UI::OnScreenKeyboardType const Email;

/// @brief Field None value: I32(0)
static ::Epic::OnlineServices::UI::OnScreenKeyboardType const None;

/// @brief Field Numeric value: I32(6)
static ::Epic::OnlineServices::UI::OnScreenKeyboardType const Numeric;

/// @brief Field Search value: I32(8)
static ::Epic::OnlineServices::UI::OnScreenKeyboardType const Search;

/// @brief Field TelephoneNumber value: I32(3)
static ::Epic::OnlineServices::UI::OnScreenKeyboardType const TelephoneNumber;

/// @brief Field Text value: I32(2)
static ::Epic::OnlineServices::UI::OnScreenKeyboardType const Text;

/// @brief Field Url value: I32(4)
static ::Epic::OnlineServices::UI::OnScreenKeyboardType const Url;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7547};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::UI::OnScreenKeyboardType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::UI::OnScreenKeyboardType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::UI
