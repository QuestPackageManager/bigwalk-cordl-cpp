#pragma once
// IWYU pragma private; include "Steamworks/EChatMemberStateChange.hpp"
#include "Steamworks/zzzz__EChatMemberStateChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EChatMemberStateChange::EChatMemberStateChange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EChatMemberStateChange::EChatMemberStateChange()   {
}
constexpr ::Steamworks::EChatMemberStateChange  Steamworks::EChatMemberStateChange::k_EChatMemberStateChangeEntered{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EChatMemberStateChange  Steamworks::EChatMemberStateChange::k_EChatMemberStateChangeLeft{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EChatMemberStateChange  Steamworks::EChatMemberStateChange::k_EChatMemberStateChangeDisconnected{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EChatMemberStateChange  Steamworks::EChatMemberStateChange::k_EChatMemberStateChangeKicked{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EChatMemberStateChange  Steamworks::EChatMemberStateChange::k_EChatMemberStateChangeBanned{static_cast<int32_t>(0x10)};
