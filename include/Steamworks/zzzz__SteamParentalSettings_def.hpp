#pragma once
// IWYU pragma private; include "Steamworks/SteamParentalSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SteamParentalSettings)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct EParentalFeature;
}
// Forward declare root types
namespace Steamworks {
class SteamParentalSettings;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamParentalSettings*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamParentalSettings*, "Steamworks", "SteamParentalSettings");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamParentalSettings
class CORDL_TYPE SteamParentalSettings : public ::System::Object {
public:
// Declarations
/// @brief Method BIsAppBlocked, addr 0x1805b7500, size 0x40, virtual false, abstract: false, final false
static inline bool BIsAppBlocked(::Steamworks::AppId_t  nAppID) ;

/// @brief Method BIsAppInBlockList, addr 0x1805b7540, size 0x40, virtual false, abstract: false, final false
static inline bool BIsAppInBlockList(::Steamworks::AppId_t  nAppID) ;

/// @brief Method BIsFeatureBlocked, addr 0x1805b7580, size 0x40, virtual false, abstract: false, final false
static inline bool BIsFeatureBlocked(::Steamworks::EParentalFeature  eFeature) ;

/// @brief Method BIsFeatureInBlockList, addr 0x1805b75c0, size 0x40, virtual false, abstract: false, final false
static inline bool BIsFeatureInBlockList(::Steamworks::EParentalFeature  eFeature) ;

/// @brief Method BIsParentalLockEnabled, addr 0x1805b7600, size 0x30, virtual false, abstract: false, final false
static inline bool BIsParentalLockEnabled() ;

/// @brief Method BIsParentalLockLocked, addr 0x1805b7630, size 0x30, virtual false, abstract: false, final false
static inline bool BIsParentalLockLocked() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamParentalSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamParentalSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamParentalSettings(SteamParentalSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamParentalSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamParentalSettings(SteamParentalSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16388};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamParentalSettings) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
