#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/CopyLobbyDetailsHandleByUiEventIdOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CopyLobbyDetailsHandleByUiEventIdOptions)
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct CopyLobbyDetailsHandleByUiEventIdOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions, "Epic.OnlineServices.Lobby", "CopyLobbyDetailsHandleByUiEventIdOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.CopyLobbyDetailsHandleByUiEventIdOptions
struct CORDL_TYPE CopyLobbyDetailsHandleByUiEventIdOptions {
public:
// Declarations
 __declspec(property(get=get_UiEventId, put=set_UiEventId)) uint64_t  UiEventId;

/// @brief Method get_UiEventId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline uint64_t get_UiEventId() ;

/// @brief Method set_UiEventId, addr 0x1804bd910, size 0x10, virtual false, abstract: false, final false
inline void set_UiEventId(uint64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CopyLobbyDetailsHandleByUiEventIdOptions() ;

// Ctor Parameters [CppParam { name: "_UiEventId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr CopyLobbyDetailsHandleByUiEventIdOptions(uint64_t  _UiEventId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8453};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <UiEventId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 uint64_t  _UiEventId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions, _UiEventId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
