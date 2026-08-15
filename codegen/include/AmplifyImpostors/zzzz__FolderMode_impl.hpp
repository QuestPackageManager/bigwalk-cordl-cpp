#pragma once
// IWYU pragma private; include "AmplifyImpostors/FolderMode.hpp"
#include "AmplifyImpostors/zzzz__FolderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::AmplifyImpostors::FolderMode::FolderMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::FolderMode::FolderMode()   {
}
constexpr ::AmplifyImpostors::FolderMode  AmplifyImpostors::FolderMode::RelativeToPrefab{static_cast<int32_t>(0x0)};
constexpr ::AmplifyImpostors::FolderMode  AmplifyImpostors::FolderMode::Global{static_cast<int32_t>(0x1)};
