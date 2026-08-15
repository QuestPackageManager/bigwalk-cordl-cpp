#pragma once
// IWYU pragma private; include "Steamworks/EHTTPMethod.hpp"
#include "Steamworks/zzzz__EHTTPMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EHTTPMethod::EHTTPMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EHTTPMethod::EHTTPMethod()   {
}
constexpr ::Steamworks::EHTTPMethod  Steamworks::EHTTPMethod::k_EHTTPMethodInvalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EHTTPMethod  Steamworks::EHTTPMethod::k_EHTTPMethodGET{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EHTTPMethod  Steamworks::EHTTPMethod::k_EHTTPMethodHEAD{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EHTTPMethod  Steamworks::EHTTPMethod::k_EHTTPMethodPOST{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EHTTPMethod  Steamworks::EHTTPMethod::k_EHTTPMethodPUT{static_cast<int32_t>(0x4)};
constexpr ::Steamworks::EHTTPMethod  Steamworks::EHTTPMethod::k_EHTTPMethodDELETE{static_cast<int32_t>(0x5)};
constexpr ::Steamworks::EHTTPMethod  Steamworks::EHTTPMethod::k_EHTTPMethodOPTIONS{static_cast<int32_t>(0x6)};
constexpr ::Steamworks::EHTTPMethod  Steamworks::EHTTPMethod::k_EHTTPMethodPATCH{static_cast<int32_t>(0x7)};
