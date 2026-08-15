#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/AddNotifyLeaveLobbyRequestedOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AddNotifyLeaveLobbyRequestedOptions)
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct AddNotifyLeaveLobbyRequestedOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions, "Epic.OnlineServices.Lobby", "AddNotifyLeaveLobbyRequestedOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.AddNotifyLeaveLobbyRequestedOptions
#pragma pack(push, 0)
struct CORDL_TYPE AddNotifyLeaveLobbyRequestedOptions {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AddNotifyLeaveLobbyRequestedOptions() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8427};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Lobby::AddNotifyLeaveLobbyRequestedOptions) == 0x1, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
