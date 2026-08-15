#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationSetAllowedPlatformIdsOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LobbyModificationSetAllowedPlatformIdsOptions)
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationSetAllowedPlatformIdsOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyModificationSetAllowedPlatformIdsOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyModificationSetAllowedPlatformIdsOptions, "Epic.OnlineServices.Lobby", "LobbyModificationSetAllowedPlatformIdsOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyModificationSetAllowedPlatformIdsOptions
struct CORDL_TYPE LobbyModificationSetAllowedPlatformIdsOptions {
public:
// Declarations
 __declspec(property(get=get_AllowedPlatformIds, put=set_AllowedPlatformIds)) ::ArrayW<uint32_t>  AllowedPlatformIds;

/// @brief Method get_AllowedPlatformIds, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<uint32_t> get_AllowedPlatformIds() ;

/// @brief Method set_AllowedPlatformIds, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_AllowedPlatformIds(::ArrayW<uint32_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyModificationSetAllowedPlatformIdsOptions() ;

// Ctor Parameters [CppParam { name: "_AllowedPlatformIds_k__BackingField", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
constexpr LobbyModificationSetAllowedPlatformIdsOptions(::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8558};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <AllowedPlatformIds>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint32_t>  _AllowedPlatformIds_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyModificationSetAllowedPlatformIdsOptions, _AllowedPlatformIds_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyModificationSetAllowedPlatformIdsOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
