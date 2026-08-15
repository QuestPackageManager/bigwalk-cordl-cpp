#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/InputStateButtonFlags.hpp"
#include "Epic/OnlineServices/UI/zzzz__InputStateButtonFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags::InputStateButtonFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags::InputStateButtonFlags()   {
}
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::DPadLeft{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::DPadRight{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::DPadDown{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::DPadUp{static_cast<int32_t>(0x8)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::FaceButtonLeft{static_cast<int32_t>(0x10)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::FaceButtonRight{static_cast<int32_t>(0x20)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::FaceButtonBottom{static_cast<int32_t>(0x40)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::FaceButtonTop{static_cast<int32_t>(0x80)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::LeftShoulder{static_cast<int32_t>(0x100)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::RightShoulder{static_cast<int32_t>(0x200)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::LeftTrigger{static_cast<int32_t>(0x400)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::RightTrigger{static_cast<int32_t>(0x800)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::SpecialLeft{static_cast<int32_t>(0x1000)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::SpecialRight{static_cast<int32_t>(0x2000)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::LeftThumbstick{static_cast<int32_t>(0x4000)};
constexpr ::Epic::OnlineServices::UI::InputStateButtonFlags  Epic::OnlineServices::UI::InputStateButtonFlags::RightThumbstick{static_cast<int32_t>(0x8000)};
