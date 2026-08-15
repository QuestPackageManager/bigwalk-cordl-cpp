#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Lobby/LobbyModificationRemoveMemberAttributeOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LobbyModificationRemoveMemberAttributeOptions)
namespace Epic::OnlineServices {
class Utf8String;
}
// Forward declare root types
namespace Epic::OnlineServices::Lobby {
struct LobbyModificationRemoveMemberAttributeOptions;
}
// Write type traits
MARK_VAL_T(::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions, "Epic.OnlineServices.Lobby", "LobbyModificationRemoveMemberAttributeOptions");
// Dependencies 
namespace Epic::OnlineServices::Lobby {
// Is value type: true
// CS Name: Epic.OnlineServices.Lobby.LobbyModificationRemoveMemberAttributeOptions
struct CORDL_TYPE LobbyModificationRemoveMemberAttributeOptions {
public:
// Declarations
 __declspec(property(get=get_Key, put=set_Key)) ::Epic::OnlineServices::Utf8String*  Key;

/// @brief Method get_Key, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Utf8String* get_Key() ;

/// @brief Method set_Key, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_Key(::Epic::OnlineServices::Utf8String*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LobbyModificationRemoveMemberAttributeOptions() ;

// Ctor Parameters [CppParam { name: "_Key_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: None }]
constexpr LobbyModificationRemoveMemberAttributeOptions(::Epic::OnlineServices::Utf8String*  _Key_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8556};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field <Key>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  _Key_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions, _Key_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Epic::OnlineServices::Lobby::LobbyModificationRemoveMemberAttributeOptions) == 0x8, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Lobby
