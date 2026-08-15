#pragma once
// IWYU pragma private; include "Steamworks/EGameSearchErrorCode_t.hpp"
#include "Steamworks/zzzz__EGameSearchErrorCode_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EGameSearchErrorCode_t::EGameSearchErrorCode_t(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EGameSearchErrorCode_t::EGameSearchErrorCode_t()   {
}
constexpr ::Steamworks::EGameSearchErrorCode_t  Steamworks::EGameSearchErrorCode_t::k_EGameSearchErrorCode_OK{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EGameSearchErrorCode_t  Steamworks::EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Search_Already_In_Progress{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EGameSearchErrorCode_t  Steamworks::EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_No_Search_In_Progress{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EGameSearchErrorCode_t  Steamworks::EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Not_Lobby_Leader{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EGameSearchErrorCode_t  Steamworks::EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_No_Host_Available{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EGameSearchErrorCode_t  Steamworks::EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Search_Params_Invalid{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EGameSearchErrorCode_t  Steamworks::EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Offline{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EGameSearchErrorCode_t  Steamworks::EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_NotAuthorized{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EGameSearchErrorCode_t  Steamworks::EGameSearchErrorCode_t::k_EGameSearchErrorCode_Failed_Unknown_Error{static_cast<int32_t>(0x9)};
