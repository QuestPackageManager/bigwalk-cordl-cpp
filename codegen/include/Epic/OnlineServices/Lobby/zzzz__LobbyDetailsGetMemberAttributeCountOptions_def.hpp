#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsGetMemberAttributeCountOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LobbyDetailsGetMemberAttributeCountOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsGetMemberAttributeCountOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions, "Epic.OnlineServices.Lobby", "LobbyDetailsGetMemberAttributeCountOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyDetailsGetMemberAttributeCountOptions
struct CORDL_TYPE LobbyDetailsGetMemberAttributeCountOptions {
public:
// Declarations
 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Method get_TargetUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Method set_TargetUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyDetailsGetMemberAttributeCountOptions() ;

// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr LobbyDetailsGetMemberAttributeCountOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8527};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <TargetUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions, _TargetUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyDetailsGetMemberAttributeCountOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
