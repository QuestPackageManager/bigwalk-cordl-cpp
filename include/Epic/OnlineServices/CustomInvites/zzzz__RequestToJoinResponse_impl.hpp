#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/RequestToJoinResponse.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__RequestToJoinResponse_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse::RequestToJoinResponse(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse::RequestToJoinResponse()   {
}
constexpr ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse  Epic::OnlineServices::CustomInvites::RequestToJoinResponse::Accepted{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::CustomInvites::RequestToJoinResponse  Epic::OnlineServices::CustomInvites::RequestToJoinResponse::Rejected{static_cast<int32_t>(0x1)};
