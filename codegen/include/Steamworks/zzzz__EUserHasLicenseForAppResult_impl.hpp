#pragma once
// IWYU pragma private; include "Steamworks/EUserHasLicenseForAppResult.hpp"
#include "Steamworks/zzzz__EUserHasLicenseForAppResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EUserHasLicenseForAppResult::EUserHasLicenseForAppResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EUserHasLicenseForAppResult::EUserHasLicenseForAppResult()   {
}
constexpr ::Steamworks::EUserHasLicenseForAppResult  Steamworks::EUserHasLicenseForAppResult::k_EUserHasLicenseResultHasLicense{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EUserHasLicenseForAppResult  Steamworks::EUserHasLicenseForAppResult::k_EUserHasLicenseResultDoesNotHaveLicense{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EUserHasLicenseForAppResult  Steamworks::EUserHasLicenseForAppResult::k_EUserHasLicenseResultNoAuth{static_cast<int32_t>(0x2)};
