#pragma once
// IWYU pragma private; include "Rewired/Integration/UnityUI/PointerEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEventType)
// Forward declare root types
namespace Rewired::Integration::UnityUI {
struct PointerEventType;
}
// Write type traits
MARK_VAL_T(::Rewired::Integration::UnityUI::PointerEventType);
DEFINE_IL2CPP_CLASS(::Rewired::Integration::UnityUI::PointerEventType, "Rewired.Integration.UnityUI", "PointerEventType");
// Dependencies 
namespace Rewired::Integration::UnityUI {
// Is value type: true
// CS Name: Rewired.Integration.UnityUI.PointerEventType
struct CORDL_TYPE PointerEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PointerEventType_Unwrapped
enum struct __PointerEventType_Unwrapped : int32_t {
__E_Mouse = static_cast<int32_t>(0x0),
__E_Touch = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PointerEventType_Unwrapped () const noexcept {
return static_cast<__PointerEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PointerEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PointerEventType(int32_t  value__) noexcept;

/// @brief Field Mouse value: I32(0)
static ::Rewired::Integration::UnityUI::PointerEventType const Mouse;

/// @brief Field Touch value: I32(1)
static ::Rewired::Integration::UnityUI::PointerEventType const Touch;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Integration::UnityUI::PointerEventType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Integration::UnityUI::PointerEventType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Integration::UnityUI
