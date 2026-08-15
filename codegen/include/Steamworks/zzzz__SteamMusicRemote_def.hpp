#pragma once
// IWYU pragma private; include "Steamworks/SteamMusicRemote.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamMusicRemote)
namespace Steamworks {
struct AudioPlayback_Status;
}
// Forward declare root types
namespace Steamworks {
class SteamMusicRemote;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamMusicRemote*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamMusicRemote*, "Steamworks", "SteamMusicRemote");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamMusicRemote
class CORDL_TYPE SteamMusicRemote : public ::System::Object {
public:
// Declarations
/// @brief Method BActivationSuccess, addr 0x1805b3140, size 0x40, virtual false, abstract: false, final false
static inline bool BActivationSuccess(bool  bValue) ;

/// @brief Method BIsCurrentMusicRemote, addr 0x1805b3180, size 0x30, virtual false, abstract: false, final false
static inline bool BIsCurrentMusicRemote() ;

/// @brief Method CurrentEntryDidChange, addr 0x1805b31b0, size 0x30, virtual false, abstract: false, final false
static inline bool CurrentEntryDidChange() ;

/// @brief Method CurrentEntryIsAvailable, addr 0x1805b31e0, size 0x40, virtual false, abstract: false, final false
static inline bool CurrentEntryIsAvailable(bool  bAvailable) ;

/// @brief Method CurrentEntryWillChange, addr 0x1805b3220, size 0x30, virtual false, abstract: false, final false
static inline bool CurrentEntryWillChange() ;

/// @brief Method DeregisterSteamMusicRemote, addr 0x1805b3250, size 0x30, virtual false, abstract: false, final false
static inline bool DeregisterSteamMusicRemote() ;

/// @brief Method EnableLooped, addr 0x1805b3280, size 0x40, virtual false, abstract: false, final false
static inline bool EnableLooped(bool  bValue) ;

/// @brief Method EnablePlayNext, addr 0x1805b32c0, size 0x40, virtual false, abstract: false, final false
static inline bool EnablePlayNext(bool  bValue) ;

/// @brief Method EnablePlayPrevious, addr 0x1805b3300, size 0x40, virtual false, abstract: false, final false
static inline bool EnablePlayPrevious(bool  bValue) ;

/// @brief Method EnablePlaylists, addr 0x1805b3340, size 0x40, virtual false, abstract: false, final false
static inline bool EnablePlaylists(bool  bValue) ;

/// @brief Method EnableQueue, addr 0x1805b3380, size 0x40, virtual false, abstract: false, final false
static inline bool EnableQueue(bool  bValue) ;

/// @brief Method EnableShuffled, addr 0x1805b33c0, size 0x40, virtual false, abstract: false, final false
static inline bool EnableShuffled(bool  bValue) ;

/// @brief Method PlaylistDidChange, addr 0x1805b3400, size 0x30, virtual false, abstract: false, final false
static inline bool PlaylistDidChange() ;

/// @brief Method PlaylistWillChange, addr 0x1805b3430, size 0x30, virtual false, abstract: false, final false
static inline bool PlaylistWillChange() ;

/// @brief Method QueueDidChange, addr 0x1805b3460, size 0x30, virtual false, abstract: false, final false
static inline bool QueueDidChange() ;

/// @brief Method QueueWillChange, addr 0x1805b3490, size 0x30, virtual false, abstract: false, final false
static inline bool QueueWillChange() ;

/// @brief Method RegisterSteamMusicRemote, addr 0x1805b34c0, size 0xe0, virtual false, abstract: false, final false
static inline bool RegisterSteamMusicRemote(::StringW  pchName) ;

/// @brief Method ResetPlaylistEntries, addr 0x1805b35a0, size 0x30, virtual false, abstract: false, final false
static inline bool ResetPlaylistEntries() ;

/// @brief Method ResetQueueEntries, addr 0x1805b35d0, size 0x30, virtual false, abstract: false, final false
static inline bool ResetQueueEntries() ;

/// @brief Method SetCurrentPlaylistEntry, addr 0x1805b3600, size 0x40, virtual false, abstract: false, final false
static inline bool SetCurrentPlaylistEntry(int32_t  nID) ;

/// @brief Method SetCurrentQueueEntry, addr 0x1805b3640, size 0x40, virtual false, abstract: false, final false
static inline bool SetCurrentQueueEntry(int32_t  nID) ;

/// @brief Method SetDisplayName, addr 0x1805b3680, size 0xe0, virtual false, abstract: false, final false
static inline bool SetDisplayName(::StringW  pchDisplayName) ;

/// @brief Method SetPNGIcon_64x64, addr 0x1805b3760, size 0x50, virtual false, abstract: false, final false
static inline bool SetPNGIcon_64x64(::ArrayW<uint8_t>  pvBuffer, uint32_t  cbBufferLength) ;

/// @brief Method SetPlaylistEntry, addr 0x1805b37b0, size 0x100, virtual false, abstract: false, final false
static inline bool SetPlaylistEntry(int32_t  nID, int32_t  nPosition, ::StringW  pchEntryText) ;

/// @brief Method SetQueueEntry, addr 0x1805b38b0, size 0x100, virtual false, abstract: false, final false
static inline bool SetQueueEntry(int32_t  nID, int32_t  nPosition, ::StringW  pchEntryText) ;

/// @brief Method UpdateCurrentEntryCoverArt, addr 0x1805b39b0, size 0x50, virtual false, abstract: false, final false
static inline bool UpdateCurrentEntryCoverArt(::ArrayW<uint8_t>  pvBuffer, uint32_t  cbBufferLength) ;

/// @brief Method UpdateCurrentEntryElapsedSeconds, addr 0x1805b3a00, size 0x40, virtual false, abstract: false, final false
static inline bool UpdateCurrentEntryElapsedSeconds(int32_t  nValue) ;

/// @brief Method UpdateCurrentEntryText, addr 0x1805b3a40, size 0xe0, virtual false, abstract: false, final false
static inline bool UpdateCurrentEntryText(::StringW  pchText) ;

/// @brief Method UpdateLooped, addr 0x1805b3b20, size 0x40, virtual false, abstract: false, final false
static inline bool UpdateLooped(bool  bValue) ;

/// @brief Method UpdatePlaybackStatus, addr 0x1805b3b60, size 0x40, virtual false, abstract: false, final false
static inline bool UpdatePlaybackStatus(::Steamworks::AudioPlayback_Status  nStatus) ;

/// @brief Method UpdateShuffled, addr 0x1805b3ba0, size 0x40, virtual false, abstract: false, final false
static inline bool UpdateShuffled(bool  bValue) ;

/// @brief Method UpdateVolume, addr 0x1805b3be0, size 0x40, virtual false, abstract: false, final false
static inline bool UpdateVolume(float_t  flValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamMusicRemote() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamMusicRemote", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamMusicRemote(SteamMusicRemote && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamMusicRemote", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamMusicRemote(SteamMusicRemote const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16383};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamMusicRemote) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
