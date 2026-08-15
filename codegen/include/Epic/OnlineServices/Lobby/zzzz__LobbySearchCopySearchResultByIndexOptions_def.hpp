#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbySearchCopySearchResultByIndexOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbySearchCopySearchResultByIndexOptions)
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbySearchCopySearchResultByIndexOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions, "Epic.OnlineServices.Lobby", "LobbySearchCopySearchResultByIndexOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbySearchCopySearchResultByIndexOptions
struct CORDL_TYPE LobbySearchCopySearchResultByIndexOptions {
public:
// Declarations
 __declspec(property(get=get_LobbyIndex, put=set_LobbyIndex)) uint32_t  LobbyIndex;

/// @brief Method get_LobbyIndex, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_LobbyIndex() ;

/// @brief Method set_LobbyIndex, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_LobbyIndex(uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbySearchCopySearchResultByIndexOptions() ;

// Ctor Parameters [CppParam { name: "_LobbyIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr LobbySearchCopySearchResultByIndexOptions(uint32_t  _LobbyIndex_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8571};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <LobbyIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
 uint32_t  _LobbyIndex_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions, _LobbyIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbySearchCopySearchResultByIndexOptions) == 0x4, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
