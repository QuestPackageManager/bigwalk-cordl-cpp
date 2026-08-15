#pragma once
// IWYU pragma private; include "Steamworks/ETextFilteringContext.hpp"
#include "Steamworks/zzzz__ETextFilteringContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ETextFilteringContext::ETextFilteringContext(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ETextFilteringContext::ETextFilteringContext()   {
}
constexpr ::Steamworks::ETextFilteringContext  Steamworks::ETextFilteringContext::k_ETextFilteringContextUnknown{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ETextFilteringContext  Steamworks::ETextFilteringContext::k_ETextFilteringContextGameContent{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ETextFilteringContext  Steamworks::ETextFilteringContext::k_ETextFilteringContextChat{static_cast<int32_t>(0x2)};
constexpr ::Steamworks::ETextFilteringContext  Steamworks::ETextFilteringContext::k_ETextFilteringContextName{static_cast<int32_t>(0x3)};
