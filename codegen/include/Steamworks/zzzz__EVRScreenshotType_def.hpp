#pragma once
// IWYU pragma private; include "Steamworks/EVRScreenshotType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRScreenshotType)
// Forward declare root types
namespace Steamworks {
struct EVRScreenshotType;
}
// Write type traits
MARK_VAL_T(::Steamworks::EVRScreenshotType);
DEFINE_IL2CPP_CLASS(::Steamworks::EVRScreenshotType, "Steamworks", "EVRScreenshotType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EVRScreenshotType
struct CORDL_TYPE EVRScreenshotType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRScreenshotType_Unwrapped
enum struct __EVRScreenshotType_Unwrapped : int32_t {
__E_k_EVRScreenshotType_None = static_cast<int32_t>(0x0),
__E_k_EVRScreenshotType_Mono = static_cast<int32_t>(0x1),
__E_k_EVRScreenshotType_Stereo = static_cast<int32_t>(0x2),
__E_k_EVRScreenshotType_MonoCubemap = static_cast<int32_t>(0x3),
__E_k_EVRScreenshotType_MonoPanorama = static_cast<int32_t>(0x4),
__E_k_EVRScreenshotType_StereoPanorama = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRScreenshotType_Unwrapped () const noexcept {
return static_cast<__EVRScreenshotType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EVRScreenshotType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRScreenshotType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16288};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EVRScreenshotType_Mono value: I32(1)
static ::Steamworks::EVRScreenshotType const k_EVRScreenshotType_Mono;

/// @brief Field k_EVRScreenshotType_MonoCubemap value: I32(3)
static ::Steamworks::EVRScreenshotType const k_EVRScreenshotType_MonoCubemap;

/// @brief Field k_EVRScreenshotType_MonoPanorama value: I32(4)
static ::Steamworks::EVRScreenshotType const k_EVRScreenshotType_MonoPanorama;

/// @brief Field k_EVRScreenshotType_None value: I32(0)
static ::Steamworks::EVRScreenshotType const k_EVRScreenshotType_None;

/// @brief Field k_EVRScreenshotType_Stereo value: I32(2)
static ::Steamworks::EVRScreenshotType const k_EVRScreenshotType_Stereo;

/// @brief Field k_EVRScreenshotType_StereoPanorama value: I32(5)
static ::Steamworks::EVRScreenshotType const k_EVRScreenshotType_StereoPanorama;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EVRScreenshotType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EVRScreenshotType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
