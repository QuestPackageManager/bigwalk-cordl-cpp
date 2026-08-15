#pragma once
// IWYU pragma private; include "Steamworks/EDurationControlProgress.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EDurationControlProgress)
// Forward declare root types
namespace Steamworks {
struct EDurationControlProgress;
}
// Write type traits
MARK_VAL_T(::Steamworks::EDurationControlProgress);
DEFINE_IL2CPP_CLASS(::Steamworks::EDurationControlProgress, "Steamworks", "EDurationControlProgress");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EDurationControlProgress
struct CORDL_TYPE EDurationControlProgress {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EDurationControlProgress_Unwrapped
enum struct __EDurationControlProgress_Unwrapped : int32_t {
__E_k_EDurationControlProgress_Full = static_cast<int32_t>(0x0),
__E_k_EDurationControlProgress_Half = static_cast<int32_t>(0x1),
__E_k_EDurationControlProgress_None = static_cast<int32_t>(0x2),
__E_k_EDurationControl_ExitSoon_3h = static_cast<int32_t>(0x3),
__E_k_EDurationControl_ExitSoon_5h = static_cast<int32_t>(0x4),
__E_k_EDurationControl_ExitSoon_Night = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EDurationControlProgress_Unwrapped () const noexcept {
return static_cast<__EDurationControlProgress_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EDurationControlProgress() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EDurationControlProgress(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16323};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EDurationControlProgress_Full value: I32(0)
static ::Steamworks::EDurationControlProgress const k_EDurationControlProgress_Full;

/// @brief Field k_EDurationControlProgress_Half value: I32(1)
static ::Steamworks::EDurationControlProgress const k_EDurationControlProgress_Half;

/// @brief Field k_EDurationControlProgress_None value: I32(2)
static ::Steamworks::EDurationControlProgress const k_EDurationControlProgress_None;

/// @brief Field k_EDurationControl_ExitSoon_3h value: I32(3)
static ::Steamworks::EDurationControlProgress const k_EDurationControl_ExitSoon_3h;

/// @brief Field k_EDurationControl_ExitSoon_5h value: I32(4)
static ::Steamworks::EDurationControlProgress const k_EDurationControl_ExitSoon_5h;

/// @brief Field k_EDurationControl_ExitSoon_Night value: I32(5)
static ::Steamworks::EDurationControlProgress const k_EDurationControl_ExitSoon_Night;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EDurationControlProgress, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EDurationControlProgress) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
