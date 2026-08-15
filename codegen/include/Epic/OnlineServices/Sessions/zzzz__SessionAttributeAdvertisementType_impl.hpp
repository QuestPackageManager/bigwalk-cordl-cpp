#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/SessionAttributeAdvertisementType.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionAttributeAdvertisementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType::SessionAttributeAdvertisementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType::SessionAttributeAdvertisementType()   {
}
constexpr ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType::DontAdvertise{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType  Epic::OnlineServices::Sessions::SessionAttributeAdvertisementType::Advertise{static_cast<int32_t>(0x1)};
