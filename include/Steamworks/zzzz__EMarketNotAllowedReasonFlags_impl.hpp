#pragma once
// IWYU pragma private; include "Steamworks/EMarketNotAllowedReasonFlags.hpp"
#include "Steamworks/zzzz__EMarketNotAllowedReasonFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EMarketNotAllowedReasonFlags::EMarketNotAllowedReasonFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EMarketNotAllowedReasonFlags::EMarketNotAllowedReasonFlags()   {
}
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_None{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_TemporaryFailure{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_AccountDisabled{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_AccountLockedDown{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_AccountLimited{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_TradeBanned{static_cast<int32_t>(0x10)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_AccountNotTrusted{static_cast<int32_t>(0x20)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_SteamGuardNotEnabled{static_cast<int32_t>(0x40)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_SteamGuardOnlyRecentlyEnabled{static_cast<int32_t>(0x80)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_RecentPasswordReset{static_cast<int32_t>(0x100)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_NewPaymentMethod{static_cast<int32_t>(0x200)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_InvalidCookie{static_cast<int32_t>(0x400)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_UsingNewDevice{static_cast<int32_t>(0x800)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_RecentSelfRefund{static_cast<int32_t>(0x1000)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_NewPaymentMethodCannotBeVerified{static_cast<int32_t>(0x2000)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_NoRecentPurchases{static_cast<int32_t>(0x4000)};
constexpr ::Steamworks::EMarketNotAllowedReasonFlags  Steamworks::EMarketNotAllowedReasonFlags::k_EMarketNotAllowedReason_AcceptedWalletGift{static_cast<int32_t>(0x8000)};
