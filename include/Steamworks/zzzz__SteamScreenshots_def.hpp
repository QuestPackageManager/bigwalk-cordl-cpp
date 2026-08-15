#pragma once
// IWYU pragma private; include "Steamworks/SteamScreenshots.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamScreenshots)
namespace Steamworks {
struct CSteamID;
}
namespace Steamworks {
struct EVRScreenshotType;
}
namespace Steamworks {
struct PublishedFileId_t;
}
namespace Steamworks {
struct ScreenshotHandle;
}
// Forward declare root types
namespace Steamworks {
class SteamScreenshots;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamScreenshots*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamScreenshots*, "Steamworks", "SteamScreenshots");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamScreenshots
class CORDL_TYPE SteamScreenshots : public ::System::Object {
public:
// Declarations
/// @brief Method AddScreenshotToLibrary, addr 0x1805ba250, size 0x180, virtual false, abstract: false, final false
static inline ::Steamworks::ScreenshotHandle AddScreenshotToLibrary(::StringW  pchFilename, ::StringW  pchThumbnailFilename, int32_t  nWidth, int32_t  nHeight) ;

/// @brief Method AddVRScreenshotToLibrary, addr 0x1805ba3d0, size 0x180, virtual false, abstract: false, final false
static inline ::Steamworks::ScreenshotHandle AddVRScreenshotToLibrary(::Steamworks::EVRScreenshotType  eType, ::StringW  pchFilename, ::StringW  pchVRFilename) ;

/// @brief Method HookScreenshots, addr 0x1805ba550, size 0x40, virtual false, abstract: false, final false
static inline void HookScreenshots(bool  bHook) ;

/// @brief Method IsScreenshotsHooked, addr 0x1805ba590, size 0x30, virtual false, abstract: false, final false
static inline bool IsScreenshotsHooked() ;

/// @brief Method SetLocation, addr 0x1805ba5c0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetLocation(::Steamworks::ScreenshotHandle  hScreenshot, ::StringW  pchLocation) ;

/// @brief Method TagPublishedFile, addr 0x1805ba6a0, size 0x40, virtual false, abstract: false, final false
static inline bool TagPublishedFile(::Steamworks::ScreenshotHandle  hScreenshot, ::Steamworks::PublishedFileId_t  unPublishedFileID) ;

/// @brief Method TagUser, addr 0x1805ba6e0, size 0x40, virtual false, abstract: false, final false
static inline bool TagUser(::Steamworks::ScreenshotHandle  hScreenshot, ::Steamworks::CSteamID  steamID) ;

/// @brief Method TriggerScreenshot, addr 0x1805ba720, size 0x30, virtual false, abstract: false, final false
static inline void TriggerScreenshot() ;

/// @brief Method WriteScreenshot, addr 0x1805ba750, size 0x70, virtual false, abstract: false, final false
static inline ::Steamworks::ScreenshotHandle WriteScreenshot(::ArrayW<uint8_t>  pubRGB, uint32_t  cubRGB, int32_t  nWidth, int32_t  nHeight) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamScreenshots() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamScreenshots", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamScreenshots(SteamScreenshots && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamScreenshots", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamScreenshots(SteamScreenshots const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16391};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamScreenshots) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
