#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Mods/ModEnumerationType.hpp"
#include "Epic/OnlineServices/Mods/zzzz__ModEnumerationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Mods::ModEnumerationType::ModEnumerationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Mods::ModEnumerationType::ModEnumerationType()   {
}
constexpr ::Epic::OnlineServices::Mods::ModEnumerationType  Epic::OnlineServices::Mods::ModEnumerationType::Installed{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Mods::ModEnumerationType  Epic::OnlineServices::Mods::ModEnumerationType::AllAvailable{static_cast<int32_t>(0x1)};
