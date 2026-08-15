#pragma once
// IWYU pragma private; include "Steamworks/ERemoteStorageLocalFileChange.hpp"
#include "Steamworks/zzzz__ERemoteStorageLocalFileChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ERemoteStorageLocalFileChange::ERemoteStorageLocalFileChange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ERemoteStorageLocalFileChange::ERemoteStorageLocalFileChange()   {
}
constexpr ::Steamworks::ERemoteStorageLocalFileChange  Steamworks::ERemoteStorageLocalFileChange::k_ERemoteStorageLocalFileChange_Invalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ERemoteStorageLocalFileChange  Steamworks::ERemoteStorageLocalFileChange::k_ERemoteStorageLocalFileChange_FileUpdated{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ERemoteStorageLocalFileChange  Steamworks::ERemoteStorageLocalFileChange::k_ERemoteStorageLocalFileChange_FileDeleted{static_cast<int32_t>(0x2)};
