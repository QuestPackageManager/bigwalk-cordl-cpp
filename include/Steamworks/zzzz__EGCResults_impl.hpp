#pragma once
// IWYU pragma private; include "Steamworks/EGCResults.hpp"
#include "Steamworks/zzzz__EGCResults_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EGCResults::EGCResults(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EGCResults::EGCResults()   {
}
constexpr ::Steamworks::EGCResults  Steamworks::EGCResults::k_EGCResultOK{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EGCResults  Steamworks::EGCResults::k_EGCResultNoMessage{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::EGCResults  Steamworks::EGCResults::k_EGCResultBufferTooSmall{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::EGCResults  Steamworks::EGCResults::k_EGCResultNotLoggedOn{static_cast<int32_t>(0x3)};
constexpr ::Steamworks::EGCResults  Steamworks::EGCResults::k_EGCResultInvalidMessage{static_cast<int32_t>(0x4)};
