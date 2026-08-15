#pragma once
// IWYU pragma private; include "Steamworks/EDurationControlProgress.hpp"
#include "Steamworks/zzzz__EDurationControlProgress_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EDurationControlProgress::EDurationControlProgress(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EDurationControlProgress::EDurationControlProgress()   {
}
constexpr ::Steamworks::EDurationControlProgress  Steamworks::EDurationControlProgress::k_EDurationControlProgress_Full{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EDurationControlProgress  Steamworks::EDurationControlProgress::k_EDurationControlProgress_Half{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EDurationControlProgress  Steamworks::EDurationControlProgress::k_EDurationControlProgress_None{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EDurationControlProgress  Steamworks::EDurationControlProgress::k_EDurationControl_ExitSoon_3h{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EDurationControlProgress  Steamworks::EDurationControlProgress::k_EDurationControl_ExitSoon_5h{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EDurationControlProgress  Steamworks::EDurationControlProgress::k_EDurationControl_ExitSoon_Night{static_cast<int32_t>(0x5)};
