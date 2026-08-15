#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyDetailsCopyMemberInfoOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LobbyDetailsCopyMemberInfoOptions)
namespace Epic::OnlineServices {
class ProductUserId;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyDetailsCopyMemberInfoOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions, "Epic.OnlineServices.Lobby", "LobbyDetailsCopyMemberInfoOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyDetailsCopyMemberInfoOptions
struct CORDL_TYPE LobbyDetailsCopyMemberInfoOptions {
public:
// Declarations
 __declspec(property(get=get_TargetUserId, put=set_TargetUserId)) ::Epic::OnlineServices::ProductUserId*  TargetUserId;

/// @brief Method get_TargetUserId, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::ProductUserId* get_TargetUserId() ;

/// @brief Method set_TargetUserId, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyDetailsCopyMemberInfoOptions() ;

// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: None }]
constexpr LobbyDetailsCopyMemberInfoOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <TargetUserId>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions, _TargetUserId_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyDetailsCopyMemberInfoOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
