#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/AntiCheatClientViolationType.hpp"
#include "Epic/OnlineServices/AntiCheatClient/zzzz__AntiCheatClientViolationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::AntiCheatClientViolationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::AntiCheatClientViolationType()   {
}
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::Invalid{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::IntegrityCatalogNotFound{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::IntegrityCatalogError{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::IntegrityCatalogCertificateRevoked{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::IntegrityCatalogMissingMainExecutable{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::GameFileMismatch{static_cast<int32_t>(0x5)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::RequiredGameFileNotFound{static_cast<int32_t>(0x6)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::UnknownGameFileForbidden{static_cast<int32_t>(0x7)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::SystemFileUntrusted{static_cast<int32_t>(0x8)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::ForbiddenModuleLoaded{static_cast<int32_t>(0x9)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::CorruptedMemory{static_cast<int32_t>(0xa)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::ForbiddenToolDetected{static_cast<int32_t>(0xb)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::InternalAntiCheatViolation{static_cast<int32_t>(0xc)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::CorruptedNetworkMessageFlow{static_cast<int32_t>(0xd)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::VirtualMachineNotAllowed{static_cast<int32_t>(0xe)};
constexpr ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType  Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType::ForbiddenSystemConfiguration{static_cast<int32_t>(0xf)};
