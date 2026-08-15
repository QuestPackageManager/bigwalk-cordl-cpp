#pragma once
// IWYU pragma private; include "Steamworks/EParentalFeature.hpp"
#include "Steamworks/zzzz__EParentalFeature_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EParentalFeature::EParentalFeature(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EParentalFeature::EParentalFeature()   {
}
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureInvalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureStore{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureCommunity{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureProfile{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureFriends{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureNews{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureTrading{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureSettings{static_cast<int32_t>(0x7)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureConsole{static_cast<int32_t>(0x8)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureBrowser{static_cast<int32_t>(0x9)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureParentalSetup{static_cast<int32_t>(0xa)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureLibrary{static_cast<int32_t>(0xb)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureTest{static_cast<int32_t>(0xc)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureSiteLicense{static_cast<int32_t>(0xd)};
constexpr ::Steamworks::EParentalFeature  Steamworks::EParentalFeature::k_EFeatureMax{static_cast<int32_t>(0xe)};
