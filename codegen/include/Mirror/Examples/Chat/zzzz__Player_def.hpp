#pragma once
// IWYU pragma private; include "Mirror/Examples/Chat/Player.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Player)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
// Forward declare root types
namespace Mirror::Examples::Chat {
class Player;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Chat::Player*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Chat::Player*, "Mirror.Examples.Chat", "Player");
// Dependencies Mirror.NetworkBehaviour
namespace Mirror::Examples::Chat {
// Is value type: false
// CS Name: Mirror.Examples.Chat.Player
class CORDL_TYPE Player : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkplayerName, put=set_NetworkplayerName)) ::StringW  NetworkplayerName;

/// @brief Field playerName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::StringW  playerName;

/// @brief Method DeserializeSyncVars, addr 0x1815609e0, size 0x60, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::Chat::Player* New_ctor() ;

/// @brief Method OnStartLocalPlayer, addr 0x181560f70, size 0x50, virtual true, abstract: false, final false
inline void OnStartLocalPlayer() ;

/// @brief Method OnStartServer, addr 0x1815610f0, size 0xc0, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method SerializeSyncVars, addr 0x1815617d0, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

constexpr ::StringW const& __cordl_internal_get_playerName() const;

constexpr ::StringW& __cordl_internal_get_playerName() ;

constexpr void __cordl_internal_set_playerName(::StringW  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkplayerName, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_NetworkplayerName() ;

/// @brief Method set_NetworkplayerName, addr 0x181526c70, size 0x80, virtual false, abstract: false, final false
inline void set_NetworkplayerName(::ByRefConst<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Player() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Player(Player && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Player(Player const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19337};

/// @brief Field playerName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___playerName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Chat::Player, ___playerName) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Chat::Player) == 0x70, "Size mismatch!");

} // namespace end def Mirror::Examples::Chat
