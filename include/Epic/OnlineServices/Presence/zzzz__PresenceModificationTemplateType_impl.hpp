#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Presence/PresenceModificationTemplateType.hpp"
#include "Epic/OnlineServices/Presence/zzzz__PresenceModificationTemplateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Presence::PresenceModificationTemplateType::PresenceModificationTemplateType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Presence::PresenceModificationTemplateType::PresenceModificationTemplateType()   {
}
constexpr ::Epic::OnlineServices::Presence::PresenceModificationTemplateType  Epic::OnlineServices::Presence::PresenceModificationTemplateType::Int{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Presence::PresenceModificationTemplateType  Epic::OnlineServices::Presence::PresenceModificationTemplateType::String{static_cast<int32_t>(0x2)};
