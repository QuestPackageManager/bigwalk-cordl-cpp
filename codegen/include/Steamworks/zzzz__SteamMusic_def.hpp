#pragma once
// IWYU pragma private; include "Steamworks/SteamMusic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SteamMusic)
namespace Steamworks {
struct AudioPlayback_Status;
}
// Forward declare root types
namespace Steamworks {
class SteamMusic;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamMusic*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamMusic*, "Steamworks", "SteamMusic");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamMusic
class CORDL_TYPE SteamMusic : public ::System::Object {
public:
// Declarations
/// @brief Method BIsEnabled, addr 0x1805b3c20, size 0x30, virtual false, abstract: false, final false
static inline bool BIsEnabled() ;

/// @brief Method BIsPlaying, addr 0x1805b3c50, size 0x30, virtual false, abstract: false, final false
static inline bool BIsPlaying() ;

/// @brief Method GetPlaybackStatus, addr 0x1805b3c80, size 0x30, virtual false, abstract: false, final false
static inline ::Steamworks::AudioPlayback_Status GetPlaybackStatus() ;

/// @brief Method GetVolume, addr 0x1805b3cb0, size 0x30, virtual false, abstract: false, final false
static inline float_t GetVolume() ;

/// @brief Method Pause, addr 0x1805b3ce0, size 0x30, virtual false, abstract: false, final false
static inline void Pause() ;

/// @brief Method Play, addr 0x1805b3d70, size 0x30, virtual false, abstract: false, final false
static inline void Play() ;

/// @brief Method PlayNext, addr 0x1805b3d10, size 0x30, virtual false, abstract: false, final false
static inline void PlayNext() ;

/// @brief Method PlayPrevious, addr 0x1805b3d40, size 0x30, virtual false, abstract: false, final false
static inline void PlayPrevious() ;

/// @brief Method SetVolume, addr 0x1805b3da0, size 0x40, virtual false, abstract: false, final false
static inline void SetVolume(float_t  flVolume) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamMusic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamMusic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamMusic(SteamMusic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamMusic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamMusic(SteamMusic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamMusic) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
