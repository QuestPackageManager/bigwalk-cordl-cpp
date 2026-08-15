#pragma once
// IWYU pragma private; include "Steamworks/EItemUpdateStatus.hpp"
#include "Steamworks/zzzz__EItemUpdateStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EItemUpdateStatus::EItemUpdateStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EItemUpdateStatus::EItemUpdateStatus()   {
}
constexpr ::Steamworks::EItemUpdateStatus  Steamworks::EItemUpdateStatus::k_EItemUpdateStatusInvalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EItemUpdateStatus  Steamworks::EItemUpdateStatus::k_EItemUpdateStatusPreparingConfig{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EItemUpdateStatus  Steamworks::EItemUpdateStatus::k_EItemUpdateStatusPreparingContent{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EItemUpdateStatus  Steamworks::EItemUpdateStatus::k_EItemUpdateStatusUploadingContent{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EItemUpdateStatus  Steamworks::EItemUpdateStatus::k_EItemUpdateStatusUploadingPreviewFile{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EItemUpdateStatus  Steamworks::EItemUpdateStatus::k_EItemUpdateStatusCommittingChanges{static_cast<int32_t>(0x5)};
