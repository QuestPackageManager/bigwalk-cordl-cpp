#pragma once
// IWYU pragma private; include "Steamworks/EItemState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EItemState)
// Forward declare root types
namespace Steamworks {
struct EItemState;
}
// Write type traits
MARK_VAL_T(::Steamworks::EItemState);
DEFINE_IL2CPP_CLASS(::Steamworks::EItemState, "Steamworks", "EItemState");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EItemState
struct CORDL_TYPE EItemState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EItemState_Unwrapped
enum struct __EItemState_Unwrapped : int32_t {
__E_k_EItemStateNone = static_cast<int32_t>(0x0),
__E_k_EItemStateSubscribed = static_cast<int32_t>(0x1),
__E_k_EItemStateLegacyItem = static_cast<int32_t>(0x2),
__E_k_EItemStateInstalled = static_cast<int32_t>(0x4),
__E_k_EItemStateNeedsUpdate = static_cast<int32_t>(0x8),
__E_k_EItemStateDownloading = static_cast<int32_t>(0x10),
__E_k_EItemStateDownloadPending = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EItemState_Unwrapped () const noexcept {
return static_cast<__EItemState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EItemState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EItemState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16294};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EItemStateDownloadPending value: I32(32)
static ::Steamworks::EItemState const k_EItemStateDownloadPending;

/// @brief Field k_EItemStateDownloading value: I32(16)
static ::Steamworks::EItemState const k_EItemStateDownloading;

/// @brief Field k_EItemStateInstalled value: I32(4)
static ::Steamworks::EItemState const k_EItemStateInstalled;

/// @brief Field k_EItemStateLegacyItem value: I32(2)
static ::Steamworks::EItemState const k_EItemStateLegacyItem;

/// @brief Field k_EItemStateNeedsUpdate value: I32(8)
static ::Steamworks::EItemState const k_EItemStateNeedsUpdate;

/// @brief Field k_EItemStateNone value: I32(0)
static ::Steamworks::EItemState const k_EItemStateNone;

/// @brief Field k_EItemStateSubscribed value: I32(1)
static ::Steamworks::EItemState const k_EItemStateSubscribed;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EItemState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EItemState) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
