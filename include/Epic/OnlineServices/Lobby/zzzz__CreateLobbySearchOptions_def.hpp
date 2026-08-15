#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CreateLobbySearchOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateLobbySearchOptions)
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct CreateLobbySearchOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::CreateLobbySearchOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::CreateLobbySearchOptions, "Epic.OnlineServices.Lobby", "CreateLobbySearchOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.CreateLobbySearchOptions
struct CORDL_TYPE CreateLobbySearchOptions {
public:
// Declarations
 __declspec(property(get=get_MaxResults, put=set_MaxResults)) uint32_t  MaxResults;

/// @brief Method get_MaxResults, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_MaxResults() ;

/// @brief Method set_MaxResults, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_MaxResults(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CreateLobbySearchOptions() ;

// Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr CreateLobbySearchOptions(uint32_t  _MaxResults_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8461};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <MaxResults>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _MaxResults_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::CreateLobbySearchOptions, _MaxResults_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::CreateLobbySearchOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
