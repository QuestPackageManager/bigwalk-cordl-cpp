#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/LoginFlags.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Auth::LoginFlags::LoginFlags(uint64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::LoginFlags::LoginFlags()   {
}
constexpr ::Epic::OnlineServices::Auth::LoginFlags  Epic::OnlineServices::Auth::LoginFlags::None{static_cast<uint64_t>(0x0u)};
constexpr ::Epic::OnlineServices::Auth::LoginFlags  Epic::OnlineServices::Auth::LoginFlags::NoUserInterface{static_cast<uint64_t>(0x1u)};
