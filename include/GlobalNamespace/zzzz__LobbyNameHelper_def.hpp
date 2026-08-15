#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyNameHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LobbyNameHelper)
namespace GlobalNamespace {
struct JoinFriendCard_FriendGameInfo;
}
namespace GlobalNamespace {
class LobbyInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyNameHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LobbyNameHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LobbyNameHelper*, "", "LobbyNameHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyNameHelper
class CORDL_TYPE LobbyNameHelper : public ::System::Object {
public:
// Declarations
/// @brief Method GetLobbyName, addr 0x180423ef0, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW GetLobbyName(::StringW  worldOwnerPlatformId, ::StringW  worldName) ;

/// @brief Method GetLobbyNameForFriendInfo, addr 0x180423eb0, size 0x10, virtual false, abstract: false, final false
static inline ::StringW GetLobbyNameForFriendInfo(::GlobalNamespace::JoinFriendCard_FriendGameInfo  friendInfo) ;

/// @brief Method GetLobbyNameForLobbyInfo, addr 0x180423ec0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetLobbyNameForLobbyInfo(::GlobalNamespace::LobbyInfo*  lobbyInfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LobbyNameHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LobbyNameHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LobbyNameHelper(LobbyNameHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LobbyNameHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LobbyNameHelper(LobbyNameHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5229};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LobbyNameHelper) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
