#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/GetProtectMessageOutputLengthOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetProtectMessageOutputLengthOptions)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct GetProtectMessageOutputLengthOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions, "Epic.OnlineServices.AntiCheatClient", "GetProtectMessageOutputLengthOptions");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.GetProtectMessageOutputLengthOptions
struct CORDL_TYPE GetProtectMessageOutputLengthOptions {
public:
// Declarations
 __declspec(property(get=get_DataLengthBytes, put=set_DataLengthBytes)) uint32_t  DataLengthBytes;

/// @brief Method get_DataLengthBytes, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_DataLengthBytes() ;

/// @brief Method set_DataLengthBytes, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_DataLengthBytes(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GetProtectMessageOutputLengthOptions() ;

// Ctor Parameters [CppParam { name: "_DataLengthBytes_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GetProtectMessageOutputLengthOptions(uint32_t  _DataLengthBytes_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9413};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <DataLengthBytes>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _DataLengthBytes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions, _DataLengthBytes_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::GetProtectMessageOutputLengthOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
