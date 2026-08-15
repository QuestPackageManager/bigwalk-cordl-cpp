#pragma once
// IWYU pragma private; include "Steamworks/GameServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameServer)
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct EServerMode;
}
namespace Steamworks {
struct HSteamPipe;
}
namespace Steamworks {
struct HSteamUser;
}
// Forward declare root types
namespace Steamworks {
class GameServer;
}
// Write type traits
MARK_REF_T(::Steamworks::GameServer*);
DEFINE_IL2CPP_CLASS(::Steamworks::GameServer*, "Steamworks", "GameServer");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.GameServer
class CORDL_TYPE GameServer : public ::System::Object {
public:
// Declarations
/// @brief Method BSecure, addr 0x1805504e0, size 0x70, virtual false, abstract: false, final false
static inline bool BSecure() ;

/// @brief Method GetHSteamPipe, addr 0x180550550, size 0x20, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamPipe GetHSteamPipe() ;

/// @brief Method GetHSteamUser, addr 0x180550570, size 0x70, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamUser GetHSteamUser() ;

/// @brief Method GetSteamID, addr 0x1805505e0, size 0x90, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetSteamID() ;

/// @brief Method Init, addr 0x180550670, size 0x1e0, virtual false, abstract: false, final false
static inline bool Init(uint32_t  unIP, uint16_t  usGamePort, uint16_t  usQueryPort, ::Steamworks::EServerMode  eServerMode, ::StringW  pchVersionString) ;

/// @brief Method ReleaseCurrentThreadMemory, addr 0x180550850, size 0x70, virtual false, abstract: false, final false
static inline void ReleaseCurrentThreadMemory() ;

/// @brief Method RunCallbacks, addr 0x1805508c0, size 0x10, virtual false, abstract: false, final false
static inline void RunCallbacks() ;

/// @brief Method Shutdown, addr 0x1805508d0, size 0xc00, virtual false, abstract: false, final false
static inline void Shutdown() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameServer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameServer(GameServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameServer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameServer(GameServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16020};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::GameServer) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
