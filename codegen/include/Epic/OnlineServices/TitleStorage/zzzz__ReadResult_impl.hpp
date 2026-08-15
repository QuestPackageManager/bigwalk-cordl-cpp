#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/ReadResult.hpp"
#include "Epic/OnlineServices/TitleStorage/zzzz__ReadResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::TitleStorage::ReadResult::ReadResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::TitleStorage::ReadResult::ReadResult()   {
}
constexpr ::Epic::OnlineServices::TitleStorage::ReadResult  Epic::OnlineServices::TitleStorage::ReadResult::RrContinueReading{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::TitleStorage::ReadResult  Epic::OnlineServices::TitleStorage::ReadResult::RrFailRequest{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::TitleStorage::ReadResult  Epic::OnlineServices::TitleStorage::ReadResult::RrCancelRequest{static_cast<int32_t>(0x3)};
