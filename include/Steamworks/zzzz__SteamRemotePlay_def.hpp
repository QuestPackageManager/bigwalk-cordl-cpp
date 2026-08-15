#pragma once
// IWYU pragma private; include "Steamworks/SteamRemotePlay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamRemotePlay)
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct ESteamDeviceFormFactor;
}
namespace Steamworks {
struct RemotePlaySessionID_t;
}
// Forward declare root types
namespace Steamworks {
class SteamRemotePlay;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamRemotePlay*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamRemotePlay*, "Steamworks", "SteamRemotePlay");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamRemotePlay
class CORDL_TYPE SteamRemotePlay : public ::System::Object {
public:
// Declarations
/// @brief Method BGetSessionClientResolution, addr 0x1805b7bf0, size 0x60, virtual false, abstract: false, final false
static inline bool BGetSessionClientResolution(::Steamworks::RemotePlaySessionID_t  unSessionID, ::by_ref<int32_t>  pnResolutionX, ::by_ref<int32_t>  pnResolutionY) ;

/// @brief Method BSendRemotePlayTogetherInvite, addr 0x1805b7c50, size 0x40, virtual false, abstract: false, final false
static inline bool BSendRemotePlayTogetherInvite(::Steamworks::CSteamID  steamIDFriend) ;

/// @brief Method GetSessionClientFormFactor, addr 0x1805b7c90, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamDeviceFormFactor GetSessionClientFormFactor(::Steamworks::RemotePlaySessionID_t  unSessionID) ;

/// @brief Method GetSessionClientName, addr 0x1805b7cd0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetSessionClientName(::Steamworks::RemotePlaySessionID_t  unSessionID) ;

/// @brief Method GetSessionCount, addr 0x1805b7d10, size 0x30, virtual false, abstract: false, final false
static inline uint32_t GetSessionCount() ;

/// @brief Method GetSessionID, addr 0x1805b7d40, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::RemotePlaySessionID_t GetSessionID(int32_t  iSessionIndex) ;

/// @brief Method GetSessionSteamID, addr 0x1805b7d80, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::CSteamID GetSessionSteamID(::Steamworks::RemotePlaySessionID_t  unSessionID) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamRemotePlay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamRemotePlay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamRemotePlay(SteamRemotePlay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamRemotePlay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamRemotePlay(SteamRemotePlay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16389};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamRemotePlay) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
