#pragma once
// IWYU pragma private; include "Steamworks/EDurationControlNotification.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EDurationControlNotification)
// Forward declare root types
namespace Steamworks {
struct EDurationControlNotification;
}
// Write type traits
MARK_VAL_T(::Steamworks::EDurationControlNotification);
DEFINE_IL2CPP_CLASS(::Steamworks::EDurationControlNotification, "Steamworks", "EDurationControlNotification");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EDurationControlNotification
struct CORDL_TYPE EDurationControlNotification {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EDurationControlNotification_Unwrapped
enum struct __EDurationControlNotification_Unwrapped : int32_t {
__E_k_EDurationControlNotification_None = static_cast<int32_t>(0x0),
__E_k_EDurationControlNotification_1Hour = static_cast<int32_t>(0x1),
__E_k_EDurationControlNotification_3Hours = static_cast<int32_t>(0x2),
__E_k_EDurationControlNotification_HalfProgress = static_cast<int32_t>(0x3),
__E_k_EDurationControlNotification_NoProgress = static_cast<int32_t>(0x4),
__E_k_EDurationControlNotification_ExitSoon_3h = static_cast<int32_t>(0x5),
__E_k_EDurationControlNotification_ExitSoon_5h = static_cast<int32_t>(0x6),
__E_k_EDurationControlNotification_ExitSoon_Night = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EDurationControlNotification_Unwrapped () const noexcept {
return static_cast<__EDurationControlNotification_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EDurationControlNotification() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EDurationControlNotification(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16324};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EDurationControlNotification_1Hour value: I32(1)
static ::Steamworks::EDurationControlNotification const k_EDurationControlNotification_1Hour;

/// @brief Field k_EDurationControlNotification_3Hours value: I32(2)
static ::Steamworks::EDurationControlNotification const k_EDurationControlNotification_3Hours;

/// @brief Field k_EDurationControlNotification_ExitSoon_3h value: I32(5)
static ::Steamworks::EDurationControlNotification const k_EDurationControlNotification_ExitSoon_3h;

/// @brief Field k_EDurationControlNotification_ExitSoon_5h value: I32(6)
static ::Steamworks::EDurationControlNotification const k_EDurationControlNotification_ExitSoon_5h;

/// @brief Field k_EDurationControlNotification_ExitSoon_Night value: I32(7)
static ::Steamworks::EDurationControlNotification const k_EDurationControlNotification_ExitSoon_Night;

/// @brief Field k_EDurationControlNotification_HalfProgress value: I32(3)
static ::Steamworks::EDurationControlNotification const k_EDurationControlNotification_HalfProgress;

/// @brief Field k_EDurationControlNotification_NoProgress value: I32(4)
static ::Steamworks::EDurationControlNotification const k_EDurationControlNotification_NoProgress;

/// @brief Field k_EDurationControlNotification_None value: I32(0)
static ::Steamworks::EDurationControlNotification const k_EDurationControlNotification_None;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EDurationControlNotification, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EDurationControlNotification) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
