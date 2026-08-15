#pragma once
// IWYU pragma private; include "Steamworks/EFailureType.hpp"
#include "Steamworks/zzzz__EFailureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::EFailureType::EFailureType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::EFailureType::EFailureType()   {
}
constexpr ::Steamworks::EFailureType  Steamworks::EFailureType::k_EFailureFlushedCallbackQueue{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::EFailureType  Steamworks::EFailureType::k_EFailurePipeFail{static_cast<int32_t>(0x1)};
