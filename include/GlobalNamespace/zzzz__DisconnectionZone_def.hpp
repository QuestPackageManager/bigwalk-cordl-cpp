#pragma once
// IWYU pragma private; include "GlobalNamespace/DisconnectionZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckStateFilter_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DisconnectionZone)
namespace GlobalNamespace {
struct DisconnectionZone_DisconectionSetting;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PlayerZone;
}
namespace GlobalNamespace {
class TrackedPeckState;
}
// Forward declare root types
namespace GlobalNamespace {
class DisconnectionZone;
}
namespace GlobalNamespace {
struct DisconnectionZone_DisconectionSetting;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DisconnectionZone*);
MARK_VAL_T(::GlobalNamespace::DisconnectionZone_DisconectionSetting);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DisconnectionZone*, "", "DisconnectionZone");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DisconnectionZone_DisconectionSetting, "", "DisconnectionZone/DisconectionSetting");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: DisconnectionZone/DisconectionSetting
struct CORDL_TYPE DisconnectionZone_DisconectionSetting {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DisconnectionZone_DisconectionSetting() ;

// Ctor Parameters [CppParam { name: "minPlayers", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DisconnectionZone_DisconectionSetting(int32_t  minPlayers) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5621};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field minPlayers, offset: 0x0, size: 0x4, def value: None
 int32_t  minPlayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DisconnectionZone_DisconectionSetting, minPlayers) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DisconnectionZone_DisconectionSetting) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies DisconnectionZone::DisconectionSetting, PeckStateFilter, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisconnectionZone
class CORDL_TYPE DisconnectionZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DisconectionSetting = ::GlobalNamespace::DisconnectionZone_DisconectionSetting;

 __declspec(property(get=get_currentSettings)) ::GlobalNamespace::DisconnectionZone_DisconectionSetting  currentSettings;

/// @brief Field isActiveFilter, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_isActiveFilter, put=__cordl_internal_set_isActiveFilter)) ::GlobalNamespace::PeckStateFilter  isActiveFilter;

/// @brief Field isActiveSystem, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_isActiveSystem, put=__cordl_internal_set_isActiveSystem)) ::UnityW<::GlobalNamespace::TrackedPeckState>  isActiveSystem;

/// @brief Field isSubscribedToDisconnectEvent, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSubscribedToDisconnectEvent, put=__cordl_internal_set_isSubscribedToDisconnectEvent)) bool  isSubscribedToDisconnectEvent;

/// @brief Field logVerbose, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field onDeplete, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onDeplete, put=__cordl_internal_set_onDeplete)) ::UnityW<::GlobalNamespace::PeckSwitch>  onDeplete;

/// @brief Field playerZone, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerZone, put=__cordl_internal_set_playerZone)) ::UnityW<::GlobalNamespace::PlayerZone>  playerZone;

/// @brief Field setting2Player, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_setting2Player, put=__cordl_internal_set_setting2Player)) ::GlobalNamespace::DisconnectionZone_DisconectionSetting  setting2Player;

/// @brief Field setting3Player, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_setting3Player, put=__cordl_internal_set_setting3Player)) ::GlobalNamespace::DisconnectionZone_DisconectionSetting  setting3Player;

/// @brief Field setting4Player, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_setting4Player, put=__cordl_internal_set_setting4Player)) ::GlobalNamespace::DisconnectionZone_DisconectionSetting  setting4Player;

static inline ::GlobalNamespace::DisconnectionZone* New_ctor() ;

/// @brief Method OnDisable, addr 0x180393020, size 0xe0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDisconnectFromZone, addr 0x180393100, size 0x140, virtual false, abstract: false, final false
inline void OnDisconnectFromZone() ;

/// @brief Method OnEnable, addr 0x180393240, size 0x120, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::GlobalNamespace::PeckStateFilter const& __cordl_internal_get_isActiveFilter() const;

constexpr ::GlobalNamespace::PeckStateFilter& __cordl_internal_get_isActiveFilter() ;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& __cordl_internal_get_isActiveSystem() const;

constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& __cordl_internal_get_isActiveSystem() ;

constexpr bool const& __cordl_internal_get_isSubscribedToDisconnectEvent() const;

constexpr bool& __cordl_internal_get_isSubscribedToDisconnectEvent() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch> const& __cordl_internal_get_onDeplete() const;

constexpr ::UnityW<::GlobalNamespace::PeckSwitch>& __cordl_internal_get_onDeplete() ;

constexpr ::UnityW<::GlobalNamespace::PlayerZone> const& __cordl_internal_get_playerZone() const;

constexpr ::UnityW<::GlobalNamespace::PlayerZone>& __cordl_internal_get_playerZone() ;

constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting const& __cordl_internal_get_setting2Player() const;

constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting& __cordl_internal_get_setting2Player() ;

constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting const& __cordl_internal_get_setting3Player() const;

constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting& __cordl_internal_get_setting3Player() ;

constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting const& __cordl_internal_get_setting4Player() const;

constexpr ::GlobalNamespace::DisconnectionZone_DisconectionSetting& __cordl_internal_get_setting4Player() ;

constexpr void __cordl_internal_set_isActiveFilter(::GlobalNamespace::PeckStateFilter  value) ;

constexpr void __cordl_internal_set_isActiveSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value) ;

constexpr void __cordl_internal_set_isSubscribedToDisconnectEvent(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_onDeplete(::UnityW<::GlobalNamespace::PeckSwitch>  value) ;

constexpr void __cordl_internal_set_playerZone(::UnityW<::GlobalNamespace::PlayerZone>  value) ;

constexpr void __cordl_internal_set_setting2Player(::GlobalNamespace::DisconnectionZone_DisconectionSetting  value) ;

constexpr void __cordl_internal_set_setting3Player(::GlobalNamespace::DisconnectionZone_DisconectionSetting  value) ;

constexpr void __cordl_internal_set_setting4Player(::GlobalNamespace::DisconnectionZone_DisconectionSetting  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_currentSettings, addr 0x180393360, size 0xc0, virtual false, abstract: false, final false
inline ::GlobalNamespace::DisconnectionZone_DisconectionSetting get_currentSettings() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisconnectionZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisconnectionZone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisconnectionZone(DisconnectionZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectionZone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisconnectionZone(DisconnectionZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5622};

/// @brief Field playerZone, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerZone>  ___playerZone;

/// @brief Field onDeplete, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckSwitch>  ___onDeplete;

/// @brief Field isActiveSystem, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrackedPeckState>  ___isActiveSystem;

/// @brief Field isActiveFilter, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::PeckStateFilter  ___isActiveFilter;

/// @brief Field setting4Player, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::DisconnectionZone_DisconectionSetting  ___setting4Player;

/// @brief Field setting3Player, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::DisconnectionZone_DisconectionSetting  ___setting3Player;

/// @brief Field setting2Player, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::DisconnectionZone_DisconectionSetting  ___setting2Player;

/// @brief Field logVerbose, offset: 0x54, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field isSubscribedToDisconnectEvent, offset: 0x55, size: 0x1, def value: None
 bool  ___isSubscribedToDisconnectEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DisconnectionZone, ___playerZone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectionZone, ___onDeplete) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectionZone, ___isActiveSystem) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectionZone, ___isActiveFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectionZone, ___setting4Player) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectionZone, ___setting3Player) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectionZone, ___setting2Player) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectionZone, ___logVerbose) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DisconnectionZone, ___isSubscribedToDisconnectEvent) == 0x55, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DisconnectionZone) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
