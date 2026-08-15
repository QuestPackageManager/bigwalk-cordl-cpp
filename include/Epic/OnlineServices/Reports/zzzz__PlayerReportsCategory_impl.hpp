#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Reports/PlayerReportsCategory.hpp"
#include "Epic/OnlineServices/Reports/zzzz__PlayerReportsCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Reports::PlayerReportsCategory::PlayerReportsCategory(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Reports::PlayerReportsCategory::PlayerReportsCategory()   {
}
constexpr ::Epic::OnlineServices::Reports::PlayerReportsCategory  Epic::OnlineServices::Reports::PlayerReportsCategory::Invalid{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::Reports::PlayerReportsCategory  Epic::OnlineServices::Reports::PlayerReportsCategory::Cheating{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::Reports::PlayerReportsCategory  Epic::OnlineServices::Reports::PlayerReportsCategory::Exploiting{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::Reports::PlayerReportsCategory  Epic::OnlineServices::Reports::PlayerReportsCategory::OffensiveProfile{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::Reports::PlayerReportsCategory  Epic::OnlineServices::Reports::PlayerReportsCategory::VerbalAbuse{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::Reports::PlayerReportsCategory  Epic::OnlineServices::Reports::PlayerReportsCategory::Scamming{static_cast<int32_t>(0x5)};
constexpr ::Epic::OnlineServices::Reports::PlayerReportsCategory  Epic::OnlineServices::Reports::PlayerReportsCategory::Spamming{static_cast<int32_t>(0x6)};
constexpr ::Epic::OnlineServices::Reports::PlayerReportsCategory  Epic::OnlineServices::Reports::PlayerReportsCategory::Other{static_cast<int32_t>(0x7)};
