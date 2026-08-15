#pragma once
// IWYU pragma private; include "Steamworks/EOverlayToStoreFlag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EOverlayToStoreFlag)
// Forward declare root types
namespace Steamworks {
struct EOverlayToStoreFlag;
}
// Write type traits
MARK_VAL_T(::Steamworks::EOverlayToStoreFlag);
DEFINE_IL2CPP_CLASS(::Steamworks::EOverlayToStoreFlag, "Steamworks", "EOverlayToStoreFlag");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EOverlayToStoreFlag
struct CORDL_TYPE EOverlayToStoreFlag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EOverlayToStoreFlag_Unwrapped
enum struct __EOverlayToStoreFlag_Unwrapped : int32_t {
__E_k_EOverlayToStoreFlag_None = static_cast<int32_t>(0x0),
__E_k_EOverlayToStoreFlag_AddToCart = static_cast<int32_t>(0x1),
__E_k_EOverlayToStoreFlag_AddToCartAndShow = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EOverlayToStoreFlag_Unwrapped () const noexcept {
return static_cast<__EOverlayToStoreFlag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EOverlayToStoreFlag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EOverlayToStoreFlag(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16244};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EOverlayToStoreFlag_AddToCart value: I32(1)
static ::Steamworks::EOverlayToStoreFlag const k_EOverlayToStoreFlag_AddToCart;

/// @brief Field k_EOverlayToStoreFlag_AddToCartAndShow value: I32(2)
static ::Steamworks::EOverlayToStoreFlag const k_EOverlayToStoreFlag_AddToCartAndShow;

/// @brief Field k_EOverlayToStoreFlag_None value: I32(0)
static ::Steamworks::EOverlayToStoreFlag const k_EOverlayToStoreFlag_None;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EOverlayToStoreFlag, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EOverlayToStoreFlag) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
