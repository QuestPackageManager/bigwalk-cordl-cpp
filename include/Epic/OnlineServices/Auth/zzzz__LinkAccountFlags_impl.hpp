#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LinkAccountFlags.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LinkAccountFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::LinkAccountFlags::LinkAccountFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::LinkAccountFlags::LinkAccountFlags()   {
}
constexpr ::Epic::OnlineServices::Auth::LinkAccountFlags  Epic::OnlineServices::Auth::LinkAccountFlags::NoFlags{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Auth::LinkAccountFlags  Epic::OnlineServices::Auth::LinkAccountFlags::NintendoNsaId{static_cast<int32_t>(0x1)};
