#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Ecom/OwnershipStatus.hpp"
#include "Epic/OnlineServices/Ecom/zzzz__OwnershipStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Ecom::OwnershipStatus::OwnershipStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Ecom::OwnershipStatus::OwnershipStatus()   {
}
constexpr ::Epic::OnlineServices::Ecom::OwnershipStatus  Epic::OnlineServices::Ecom::OwnershipStatus::NotOwned{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Ecom::OwnershipStatus  Epic::OnlineServices::Ecom::OwnershipStatus::Owned{static_cast<int32_t>(0x1)};
