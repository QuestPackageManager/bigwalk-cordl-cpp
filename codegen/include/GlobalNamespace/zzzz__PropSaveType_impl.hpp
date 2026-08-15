#pragma once
// IWYU pragma private; include "GlobalNamespace/PropSaveType.hpp"
#include "GlobalNamespace/zzzz__PropSaveType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PropSaveType::PropSaveType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropSaveType::PropSaveType()   {
}
constexpr ::GlobalNamespace::PropSaveType  GlobalNamespace::PropSaveType::Always{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PropSaveType  GlobalNamespace::PropSaveType::Never{static_cast<int32_t>(0x2)};
