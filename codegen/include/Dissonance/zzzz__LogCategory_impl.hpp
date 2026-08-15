#pragma once
// IWYU pragma private; include "Dissonance/LogCategory.hpp"
#include "Dissonance/zzzz__LogCategory_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::LogCategory::LogCategory(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::LogCategory::LogCategory()   {
}
constexpr ::Dissonance::LogCategory  Dissonance::LogCategory::Core{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::LogCategory  Dissonance::LogCategory::Recording{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::LogCategory  Dissonance::LogCategory::Network{static_cast<int32_t>(0x2)};
constexpr ::Dissonance::LogCategory  Dissonance::LogCategory::Playback{static_cast<int32_t>(0x3)};
