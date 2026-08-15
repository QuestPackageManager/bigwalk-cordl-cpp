#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Platform/RTCBackgroundMode.hpp"
#include "Epic/OnlineServices/Platform/zzzz__RTCBackgroundMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Platform::RTCBackgroundMode::RTCBackgroundMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Platform::RTCBackgroundMode::RTCBackgroundMode()   {
}
constexpr ::Epic::OnlineServices::Platform::RTCBackgroundMode  Epic::OnlineServices::Platform::RTCBackgroundMode::LeaveRooms{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Platform::RTCBackgroundMode  Epic::OnlineServices::Platform::RTCBackgroundMode::KeepRoomsAlive{static_cast<int32_t>(0x1)};
