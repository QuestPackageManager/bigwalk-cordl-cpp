#pragma once
// IWYU pragma private; include "Steamworks/SteamAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SteamAPI)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct HSteamPipe;
}
namespace Steamworks {
struct HSteamUser;
}
// Forward declare root types
namespace Steamworks {
class SteamAPI;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamAPI*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamAPI*, "Steamworks", "SteamAPI");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamAPI
class CORDL_TYPE SteamAPI : public ::System::Object {
public:
// Declarations
/// @brief Method GetHSteamPipe, addr 0x180582ae0, size 0x20, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamPipe GetHSteamPipe() ;

/// @brief Method GetHSteamUser, addr 0x180582b00, size 0x70, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamUser GetHSteamUser() ;

/// @brief Method Init, addr 0x180582b70, size 0x90, virtual false, abstract: false, final false
static inline bool Init() ;

/// @brief Method IsSteamRunning, addr 0x18057a3f0, size 0x70, virtual false, abstract: false, final false
static inline bool IsSteamRunning() ;

/// @brief Method ReleaseCurrentThreadMemory, addr 0x18057a860, size 0x70, virtual false, abstract: false, final false
static inline void ReleaseCurrentThreadMemory() ;

/// @brief Method RestartAppIfNecessary, addr 0x18057a8d0, size 0x80, virtual false, abstract: false, final false
static inline bool RestartAppIfNecessary(::Steamworks::AppId_t  unOwnAppID) ;

/// @brief Method RunCallbacks, addr 0x180582c00, size 0x10, virtual false, abstract: false, final false
static inline void RunCallbacks() ;

/// @brief Method Shutdown, addr 0x180582c10, size 0x2b0, virtual false, abstract: false, final false
static inline void Shutdown() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamAPI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamAPI(SteamAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamAPI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamAPI(SteamAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16019};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamAPI) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
