#pragma once
// IWYU pragma private; include "Steamworks/EItemState.hpp"
#include "Steamworks/zzzz__EItemState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EItemState::EItemState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EItemState::EItemState()   {
}
constexpr ::Steamworks::EItemState  Steamworks::EItemState::k_EItemStateNone{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EItemState  Steamworks::EItemState::k_EItemStateSubscribed{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EItemState  Steamworks::EItemState::k_EItemStateLegacyItem{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EItemState  Steamworks::EItemState::k_EItemStateInstalled{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EItemState  Steamworks::EItemState::k_EItemStateNeedsUpdate{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EItemState  Steamworks::EItemState::k_EItemStateDownloading{static_cast<int32_t>(0x10)};
constexpr ::Steamworks::EItemState  Steamworks::EItemState::k_EItemStateDownloadPending{static_cast<int32_t>(0x20)};
