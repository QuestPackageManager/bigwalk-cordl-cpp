#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerMenu.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayerMenu)
namespace GlobalNamespace {
class PlayerCharacter;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerMenu;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerMenu*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerMenu*, "", "PlayerMenu");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerMenu
class CORDL_TYPE PlayerMenu : public ::System::Object {
public:
// Declarations
/// @brief Field _menuEyesDamped, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__menuEyesDamped, put=__cordl_internal_set__menuEyesDamped)) float_t  _menuEyesDamped;

/// @brief Field _menuEyesVelocity, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__menuEyesVelocity, put=__cordl_internal_set__menuEyesVelocity)) float_t  _menuEyesVelocity;

 __declspec(property(get=get_hasMenuEyes)) bool  hasMenuEyes;

/// @brief Field localApplicationHasNoFocus, offset 0x17, size 0x1 
 __declspec(property(get=__cordl_internal_get_localApplicationHasNoFocus, put=__cordl_internal_set_localApplicationHasNoFocus)) bool  localApplicationHasNoFocus;

/// @brief Field localHasMenuOpen, offset 0x16, size 0x1 
 __declspec(property(get=__cordl_internal_get_localHasMenuOpen, put=__cordl_internal_set_localHasMenuOpen)) bool  localHasMenuOpen;

/// @brief Field localHasSteamOverlay, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_localHasSteamOverlay, put=__cordl_internal_set_localHasSteamOverlay)) bool  localHasSteamOverlay;

/// @brief Field lockMenu, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_lockMenu, put=__cordl_internal_set_lockMenu)) bool  lockMenu;

/// @brief Field logVerbose, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field playerCharacter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCharacter, put=__cordl_internal_set_playerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  playerCharacter;

/// @brief Field smoothTime, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothTime, put=__cordl_internal_set_smoothTime)) float_t  smoothTime;

/// @brief Method BlockActionsPostMenu, addr 0x1803543e0, size 0x30, virtual false, abstract: false, final false
inline void BlockActionsPostMenu() ;

/// @brief Method Initialize, addr 0x180354410, size 0x100, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

static inline ::GlobalNamespace::PlayerMenu* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180354510, size 0xf0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetFocus, addr 0x180354600, size 0x80, virtual false, abstract: false, final false
inline void SetFocus(bool  hasFocus) ;

/// @brief Method SetMenuOpen, addr 0x180354680, size 0xd0, virtual false, abstract: false, final false
inline void SetMenuOpen(bool  hasMenuOpen) ;

/// @brief Method SetSteamOverlay, addr 0x180354750, size 0x80, virtual false, abstract: false, final false
inline void SetSteamOverlay() ;

/// @brief Method Update, addr 0x180354820, size 0x100, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateRemoteMenuEyes, addr 0x1803547d0, size 0x50, virtual false, abstract: false, final false
inline void UpdateRemoteMenuEyes() ;

constexpr float_t const& __cordl_internal_get__menuEyesDamped() const;

constexpr float_t& __cordl_internal_get__menuEyesDamped() ;

constexpr float_t const& __cordl_internal_get__menuEyesVelocity() const;

constexpr float_t& __cordl_internal_get__menuEyesVelocity() ;

constexpr bool const& __cordl_internal_get_localApplicationHasNoFocus() const;

constexpr bool& __cordl_internal_get_localApplicationHasNoFocus() ;

constexpr bool const& __cordl_internal_get_localHasMenuOpen() const;

constexpr bool& __cordl_internal_get_localHasMenuOpen() ;

constexpr bool const& __cordl_internal_get_localHasSteamOverlay() const;

constexpr bool& __cordl_internal_get_localHasSteamOverlay() ;

constexpr bool const& __cordl_internal_get_lockMenu() const;

constexpr bool& __cordl_internal_get_lockMenu() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_playerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_playerCharacter() ;

constexpr float_t const& __cordl_internal_get_smoothTime() const;

constexpr float_t& __cordl_internal_get_smoothTime() ;

constexpr void __cordl_internal_set__menuEyesDamped(float_t  value) ;

constexpr void __cordl_internal_set__menuEyesVelocity(float_t  value) ;

constexpr void __cordl_internal_set_localApplicationHasNoFocus(bool  value) ;

constexpr void __cordl_internal_set_localHasMenuOpen(bool  value) ;

constexpr void __cordl_internal_set_localHasSteamOverlay(bool  value) ;

constexpr void __cordl_internal_set_lockMenu(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_playerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_smoothTime(float_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_hasMenuEyes, addr 0x180354920, size 0x70, virtual false, abstract: false, final false
inline bool get_hasMenuEyes() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerMenu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerMenu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMenu(PlayerMenu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMenu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMenu(PlayerMenu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5471};

/// @brief Field smoothTime, offset: 0x10, size: 0x4, def value: None
 float_t  ___smoothTime;

/// @brief Field logVerbose, offset: 0x14, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field lockMenu, offset: 0x15, size: 0x1, def value: None
 bool  ___lockMenu;

/// @brief Field localHasMenuOpen, offset: 0x16, size: 0x1, def value: None
 bool  ___localHasMenuOpen;

/// @brief Field localApplicationHasNoFocus, offset: 0x17, size: 0x1, def value: None
 bool  ___localApplicationHasNoFocus;

/// @brief Field localHasSteamOverlay, offset: 0x18, size: 0x1, def value: None
 bool  ___localHasSteamOverlay;

/// @brief Field playerCharacter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___playerCharacter;

/// @brief Field _menuEyesDamped, offset: 0x28, size: 0x4, def value: None
 float_t  ____menuEyesDamped;

/// @brief Field _menuEyesVelocity, offset: 0x2c, size: 0x4, def value: None
 float_t  ____menuEyesVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerMenu, ___smoothTime) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMenu, ___logVerbose) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMenu, ___lockMenu) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMenu, ___localHasMenuOpen) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMenu, ___localApplicationHasNoFocus) == 0x17, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMenu, ___localHasSteamOverlay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMenu, ___playerCharacter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMenu, ____menuEyesDamped) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerMenu, ____menuEyesVelocity) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerMenu) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
