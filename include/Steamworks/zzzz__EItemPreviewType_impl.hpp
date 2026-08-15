#pragma once
// IWYU pragma private; include "Steamworks/EItemPreviewType.hpp"
#include "Steamworks/zzzz__EItemPreviewType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EItemPreviewType::EItemPreviewType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EItemPreviewType::EItemPreviewType()   {
}
constexpr ::Steamworks::EItemPreviewType  Steamworks::EItemPreviewType::k_EItemPreviewType_Image{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EItemPreviewType  Steamworks::EItemPreviewType::k_EItemPreviewType_YouTubeVideo{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EItemPreviewType  Steamworks::EItemPreviewType::k_EItemPreviewType_Sketchfab{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EItemPreviewType  Steamworks::EItemPreviewType::k_EItemPreviewType_EnvironmentMap_HorizontalCross{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EItemPreviewType  Steamworks::EItemPreviewType::k_EItemPreviewType_EnvironmentMap_LatLong{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EItemPreviewType  Steamworks::EItemPreviewType::k_EItemPreviewType_ReservedMax{static_cast<int32_t>(0xff)};
