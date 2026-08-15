#pragma once
// IWYU pragma private; include "Steamworks/ERemoteStorageFilePathType.hpp"
#include "Steamworks/zzzz__ERemoteStorageFilePathType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ERemoteStorageFilePathType::ERemoteStorageFilePathType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ERemoteStorageFilePathType::ERemoteStorageFilePathType()   {
}
constexpr ::Steamworks::ERemoteStorageFilePathType  Steamworks::ERemoteStorageFilePathType::k_ERemoteStorageFilePathType_Invalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ERemoteStorageFilePathType  Steamworks::ERemoteStorageFilePathType::k_ERemoteStorageFilePathType_Absolute{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ERemoteStorageFilePathType  Steamworks::ERemoteStorageFilePathType::k_ERemoteStorageFilePathType_APIFilename{static_cast<int32_t>(0x2)};
