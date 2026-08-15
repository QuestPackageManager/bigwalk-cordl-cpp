#pragma once
// IWYU pragma private; include "Steamworks/SteamVideo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamVideo)
namespace Steamworks {
struct AppId_t;
}
// Forward declare root types
namespace Steamworks {
class SteamVideo;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamVideo*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamVideo*, "Steamworks", "SteamVideo");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamVideo
class CORDL_TYPE SteamVideo : public ::System::Object {
public:
// Declarations
/// @brief Method GetOPFSettings, addr 0x1805c0a60, size 0x40, virtual false, abstract: false, final false
static inline void GetOPFSettings(::Steamworks::AppId_t  unVideoAppID) ;

/// @brief Method GetOPFStringForApp, addr 0x1805c0aa0, size 0xb0, virtual false, abstract: false, final false
static inline bool GetOPFStringForApp(::Steamworks::AppId_t  unVideoAppID, ::by_ref<::StringW>  pchBuffer, ::by_ref<int32_t>  pnBufferSize) ;

/// @brief Method GetVideoURL, addr 0x1805c0b50, size 0x40, virtual false, abstract: false, final false
static inline void GetVideoURL(::Steamworks::AppId_t  unVideoAppID) ;

/// @brief Method IsBroadcasting, addr 0x1805c0b90, size 0x40, virtual false, abstract: false, final false
static inline bool IsBroadcasting(::by_ref<int32_t>  pnNumViewers) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamVideo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamVideo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamVideo(SteamVideo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamVideo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamVideo(SteamVideo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16396};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamVideo) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
