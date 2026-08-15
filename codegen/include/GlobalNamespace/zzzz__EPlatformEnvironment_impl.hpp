#pragma once
// IWYU pragma private; include "GlobalNamespace/EPlatformEnvironment.hpp"
#include "GlobalNamespace/zzzz__EPlatformEnvironment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::EPlatformEnvironment::EPlatformEnvironment(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EPlatformEnvironment::EPlatformEnvironment()   {
}
constexpr ::GlobalNamespace::EPlatformEnvironment  GlobalNamespace::EPlatformEnvironment::DEV{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EPlatformEnvironment  GlobalNamespace::EPlatformEnvironment::QA{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EPlatformEnvironment  GlobalNamespace::EPlatformEnvironment::STAGING{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::EPlatformEnvironment  GlobalNamespace::EPlatformEnvironment::LIVE{static_cast<int32_t>(0x3)};
