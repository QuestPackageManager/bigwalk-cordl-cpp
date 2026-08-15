#pragma once
// IWYU pragma private; include "Steamworks/ENotificationPosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ENotificationPosition)
// Forward declare root types
namespace Steamworks {
struct ENotificationPosition;
}
// Write type traits
MARK_VAL_T(::Steamworks::ENotificationPosition);
DEFINE_IL2CPP_CLASS(::Steamworks::ENotificationPosition, "Steamworks", "ENotificationPosition");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ENotificationPosition
struct CORDL_TYPE ENotificationPosition {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ENotificationPosition_Unwrapped
enum struct __ENotificationPosition_Unwrapped : int32_t {
__E_k_EPositionTopLeft = static_cast<int32_t>(0x0),
__E_k_EPositionTopRight = static_cast<int32_t>(0x1),
__E_k_EPositionBottomLeft = static_cast<int32_t>(0x2),
__E_k_EPositionBottomRight = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ENotificationPosition_Unwrapped () const noexcept {
return static_cast<__ENotificationPosition_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ENotificationPosition() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ENotificationPosition(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16320};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EPositionBottomLeft value: I32(2)
static ::Steamworks::ENotificationPosition const k_EPositionBottomLeft;

/// @brief Field k_EPositionBottomRight value: I32(3)
static ::Steamworks::ENotificationPosition const k_EPositionBottomRight;

/// @brief Field k_EPositionTopLeft value: I32(0)
static ::Steamworks::ENotificationPosition const k_EPositionTopLeft;

/// @brief Field k_EPositionTopRight value: I32(1)
static ::Steamworks::ENotificationPosition const k_EPositionTopRight;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ENotificationPosition, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ENotificationPosition) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
