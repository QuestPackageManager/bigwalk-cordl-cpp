#pragma once
// IWYU pragma private; include "Epic/OnlineServices/AntiCheatClient/AddNotifyPeerActionRequiredOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AddNotifyPeerActionRequiredOptions)
// Forward declare root types
namespace Epic::OnlineServices::AntiCheatClient {
struct AddNotifyPeerActionRequiredOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions, "Epic.OnlineServices.AntiCheatClient", "AddNotifyPeerActionRequiredOptions");
// Dependencies 
namespace Epic::OnlineServices::AntiCheatClient {
// Is value type: true
// CS Name: Epic.OnlineServices.AntiCheatClient.AddNotifyPeerActionRequiredOptions
#pragma pack(push, 0)
struct CORDL_TYPE AddNotifyPeerActionRequiredOptions {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyPeerActionRequiredOptions() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9400};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::AntiCheatClient::AddNotifyPeerActionRequiredOptions) == 0x1, "Size mismatch!");

} // namespace end def Epic::OnlineServices::AntiCheatClient
