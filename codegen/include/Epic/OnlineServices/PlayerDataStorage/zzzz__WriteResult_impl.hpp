#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/WriteResult.hpp"
#include "Epic/OnlineServices/PlayerDataStorage/zzzz__WriteResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::PlayerDataStorage::WriteResult::WriteResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::PlayerDataStorage::WriteResult::WriteResult()   {
}
constexpr ::Epic::OnlineServices::PlayerDataStorage::WriteResult  Epic::OnlineServices::PlayerDataStorage::WriteResult::ContinueWriting{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::PlayerDataStorage::WriteResult  Epic::OnlineServices::PlayerDataStorage::WriteResult::CompleteRequest{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::PlayerDataStorage::WriteResult  Epic::OnlineServices::PlayerDataStorage::WriteResult::FailRequest{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::PlayerDataStorage::WriteResult  Epic::OnlineServices::PlayerDataStorage::WriteResult::CancelRequest{static_cast<int32_t>(0x4)};
