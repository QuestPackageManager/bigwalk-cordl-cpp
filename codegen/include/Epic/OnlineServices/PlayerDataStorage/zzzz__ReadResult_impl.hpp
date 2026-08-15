#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/ReadResult.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__ReadResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::PlayerDataStorage::ReadResult::ReadResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::ReadResult::ReadResult()   {
}
constexpr ::Epic::OnlineServices::PlayerDataStorage::ReadResult  Epic::OnlineServices::PlayerDataStorage::ReadResult::ContinueReading{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::PlayerDataStorage::ReadResult  Epic::OnlineServices::PlayerDataStorage::ReadResult::FailRequest{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::PlayerDataStorage::ReadResult  Epic::OnlineServices::PlayerDataStorage::ReadResult::CancelRequest{static_cast<int32_t>(0x3)};
