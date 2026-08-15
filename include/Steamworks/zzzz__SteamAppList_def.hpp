#pragma once
// IWYU pragma private; include "Steamworks/SteamAppList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamAppList)
namespace Steamworks {
struct AppId_t;
}
// Forward declare root types
namespace Steamworks {
class SteamAppList;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamAppList*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamAppList*, "Steamworks", "SteamAppList");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamAppList
class CORDL_TYPE SteamAppList : public ::System::Object {
public:
// Declarations
/// @brief Method GetAppBuildId, addr 0x180582ec0, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetAppBuildId(::Steamworks::AppId_t  nAppID) ;

/// @brief Method GetAppInstallDir, addr 0x180582f90, size 0x130, virtual false, abstract: false, final false
static inline int32_t GetAppInstallDir(::Steamworks::AppId_t  nAppID, ::by_ref<::StringW>  pchDirectory, int32_t  cchNameMax) ;

/// @brief Method GetAppName, addr 0x1805830c0, size 0x130, virtual false, abstract: false, final false
static inline int32_t GetAppName(::Steamworks::AppId_t  nAppID, ::by_ref<::StringW>  pchName, int32_t  cchNameMax) ;

/// @brief Method GetInstalledApps, addr 0x1805831f0, size 0xf0, virtual false, abstract: false, final false
static inline uint32_t GetInstalledApps(::ArrayW<::Steamworks::AppId_t>  pvecAppID, uint32_t  unMaxAppIDs) ;

/// @brief Method GetNumInstalledApps, addr 0x1805832e0, size 0xd0, virtual false, abstract: false, final false
static inline uint32_t GetNumInstalledApps() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamAppList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamAppList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamAppList(SteamAppList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamAppList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamAppList(SteamAppList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16360};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamAppList) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
