#pragma once
// IWYU pragma private; include "Steamworks/EItemPreviewType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EItemPreviewType)
// Forward declare root types
namespace Steamworks {
struct EItemPreviewType;
}
// Write type traits
MARK_VAL_T(::Steamworks::EItemPreviewType);
DEFINE_IL2CPP_CLASS(::Steamworks::EItemPreviewType, "Steamworks", "EItemPreviewType");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EItemPreviewType
struct CORDL_TYPE EItemPreviewType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EItemPreviewType_Unwrapped
enum struct __EItemPreviewType_Unwrapped : int32_t {
__E_k_EItemPreviewType_Image = static_cast<int32_t>(0x0),
__E_k_EItemPreviewType_YouTubeVideo = static_cast<int32_t>(0x1),
__E_k_EItemPreviewType_Sketchfab = static_cast<int32_t>(0x2),
__E_k_EItemPreviewType_EnvironmentMap_HorizontalCross = static_cast<int32_t>(0x3),
__E_k_EItemPreviewType_EnvironmentMap_LatLong = static_cast<int32_t>(0x4),
__E_k_EItemPreviewType_ReservedMax = static_cast<int32_t>(0xff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EItemPreviewType_Unwrapped () const noexcept {
return static_cast<__EItemPreviewType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EItemPreviewType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EItemPreviewType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16296};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EItemPreviewType_EnvironmentMap_HorizontalCross value: I32(3)
static ::Steamworks::EItemPreviewType const k_EItemPreviewType_EnvironmentMap_HorizontalCross;

/// @brief Field k_EItemPreviewType_EnvironmentMap_LatLong value: I32(4)
static ::Steamworks::EItemPreviewType const k_EItemPreviewType_EnvironmentMap_LatLong;

/// @brief Field k_EItemPreviewType_Image value: I32(0)
static ::Steamworks::EItemPreviewType const k_EItemPreviewType_Image;

/// @brief Field k_EItemPreviewType_ReservedMax value: I32(255)
static ::Steamworks::EItemPreviewType const k_EItemPreviewType_ReservedMax;

/// @brief Field k_EItemPreviewType_Sketchfab value: I32(2)
static ::Steamworks::EItemPreviewType const k_EItemPreviewType_Sketchfab;

/// @brief Field k_EItemPreviewType_YouTubeVideo value: I32(1)
static ::Steamworks::EItemPreviewType const k_EItemPreviewType_YouTubeVideo;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EItemPreviewType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EItemPreviewType) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
