#pragma once
// IWYU pragma private; include "Steamworks/EMatchMakingServerResponse.hpp"
#include "Steamworks/zzzz__EMatchMakingServerResponse_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EMatchMakingServerResponse::EMatchMakingServerResponse(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EMatchMakingServerResponse::EMatchMakingServerResponse()   {
}
constexpr ::Steamworks::EMatchMakingServerResponse  Steamworks::EMatchMakingServerResponse::eServerResponded{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EMatchMakingServerResponse  Steamworks::EMatchMakingServerResponse::eServerFailedToRespond{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EMatchMakingServerResponse  Steamworks::EMatchMakingServerResponse::eNoServersListedOnMasterServer{static_cast<int32_t>(0x2)};
