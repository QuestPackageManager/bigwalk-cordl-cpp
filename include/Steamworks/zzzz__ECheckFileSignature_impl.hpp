#pragma once
// IWYU pragma private; include "Steamworks/ECheckFileSignature.hpp"
#include "Steamworks/zzzz__ECheckFileSignature_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ECheckFileSignature::ECheckFileSignature(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ECheckFileSignature::ECheckFileSignature()   {
}
constexpr ::Steamworks::ECheckFileSignature  Steamworks::ECheckFileSignature::k_ECheckFileSignatureInvalidSignature{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ECheckFileSignature  Steamworks::ECheckFileSignature::k_ECheckFileSignatureValidSignature{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ECheckFileSignature  Steamworks::ECheckFileSignature::k_ECheckFileSignatureFileNotFound{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ECheckFileSignature  Steamworks::ECheckFileSignature::k_ECheckFileSignatureNoSignaturesFoundForThisApp{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::ECheckFileSignature  Steamworks::ECheckFileSignature::k_ECheckFileSignatureNoSignaturesFoundForThisFile{static_cast<int32_t>(0x4)};
