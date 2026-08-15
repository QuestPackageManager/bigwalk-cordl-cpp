#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/AntiCheatClientViolationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AntiCheatClientViolationType)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct AntiCheatClientViolationType;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType, "Epic.OnlineServices.AntiCheatClient", "AntiCheatClientViolationType");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.AntiCheatClientViolationType
struct CORDL_TYPE AntiCheatClientViolationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AntiCheatClientViolationType_Unwrapped
enum struct __AntiCheatClientViolationType_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_IntegrityCatalogNotFound = static_cast<int32_t>(0x1),
__E_IntegrityCatalogError = static_cast<int32_t>(0x2),
__E_IntegrityCatalogCertificateRevoked = static_cast<int32_t>(0x3),
__E_IntegrityCatalogMissingMainExecutable = static_cast<int32_t>(0x4),
__E_GameFileMismatch = static_cast<int32_t>(0x5),
__E_RequiredGameFileNotFound = static_cast<int32_t>(0x6),
__E_UnknownGameFileForbidden = static_cast<int32_t>(0x7),
__E_SystemFileUntrusted = static_cast<int32_t>(0x8),
__E_ForbiddenModuleLoaded = static_cast<int32_t>(0x9),
__E_CorruptedMemory = static_cast<int32_t>(0xa),
__E_ForbiddenToolDetected = static_cast<int32_t>(0xb),
__E_InternalAntiCheatViolation = static_cast<int32_t>(0xc),
__E_CorruptedNetworkMessageFlow = static_cast<int32_t>(0xd),
__E_VirtualMachineNotAllowed = static_cast<int32_t>(0xe),
__E_ForbiddenSystemConfiguration = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AntiCheatClientViolationType_Unwrapped () const noexcept {
return static_cast<__AntiCheatClientViolationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AntiCheatClientViolationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AntiCheatClientViolationType(int32_t  value__) noexcept;

/// @brief Field CorruptedMemory value: I32(10)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const CorruptedMemory;

/// @brief Field CorruptedNetworkMessageFlow value: I32(13)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const CorruptedNetworkMessageFlow;

/// @brief Field ForbiddenModuleLoaded value: I32(9)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const ForbiddenModuleLoaded;

/// @brief Field ForbiddenSystemConfiguration value: I32(15)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const ForbiddenSystemConfiguration;

/// @brief Field ForbiddenToolDetected value: I32(11)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const ForbiddenToolDetected;

/// @brief Field GameFileMismatch value: I32(5)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const GameFileMismatch;

/// @brief Field IntegrityCatalogCertificateRevoked value: I32(3)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const IntegrityCatalogCertificateRevoked;

/// @brief Field IntegrityCatalogError value: I32(2)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const IntegrityCatalogError;

/// @brief Field IntegrityCatalogMissingMainExecutable value: I32(4)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const IntegrityCatalogMissingMainExecutable;

/// @brief Field IntegrityCatalogNotFound value: I32(1)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const IntegrityCatalogNotFound;

/// @brief Field InternalAntiCheatViolation value: I32(12)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const InternalAntiCheatViolation;

/// @brief Field Invalid value: I32(0)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const Invalid;

/// @brief Field RequiredGameFileNotFound value: I32(6)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const RequiredGameFileNotFound;

/// @brief Field SystemFileUntrusted value: I32(8)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const SystemFileUntrusted;

/// @brief Field UnknownGameFileForbidden value: I32(7)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const UnknownGameFileForbidden;

/// @brief Field VirtualMachineNotAllowed value: I32(14)
static ::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType const VirtualMachineNotAllowed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9406};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::AntiCheatClientViolationType) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
