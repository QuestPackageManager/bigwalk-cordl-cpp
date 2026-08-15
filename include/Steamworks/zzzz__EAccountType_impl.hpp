#pragma once
// IWYU pragma private; include "Steamworks/EAccountType.hpp"
#include "Steamworks/zzzz__EAccountType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EAccountType::EAccountType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EAccountType::EAccountType()   {
}
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypeInvalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypeIndividual{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypeMultiseat{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypeGameServer{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypeAnonGameServer{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypePending{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypeContentServer{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypeClan{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypeChat{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypeConsoleUser{static_cast<int32_t>(0x9)};
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypeAnonUser{static_cast<int32_t>(0xa)};
constexpr ::Steamworks::EAccountType  Steamworks::EAccountType::k_EAccountTypeMax{static_cast<int32_t>(0xb)};
