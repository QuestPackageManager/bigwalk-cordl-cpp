#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldMenuManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(WorldMenuManager)
namespace GlobalNamespace {
class ArmHud;
}
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class BadConnectionWarning;
}
namespace GlobalNamespace {
class Crosshair;
}
namespace GlobalNamespace {
class DisconnectConfirmMenu;
}
namespace GlobalNamespace {
class EndingTransition;
}
namespace GlobalNamespace {
class KickConfirmMenu;
}
namespace GlobalNamespace {
class ModerationConfirmedMenu;
}
namespace GlobalNamespace {
class ModerationKickConfirmMenu;
}
namespace GlobalNamespace {
class ModerationMenu;
}
namespace GlobalNamespace {
class ModerationReportConfirmMenu;
}
namespace GlobalNamespace {
class ModerationSilenceConfirmMenu;
}
namespace GlobalNamespace {
class NmouseObject;
}
namespace GlobalNamespace {
class PauseMenu;
}
namespace GlobalNamespace {
class SessionMenu;
}
namespace GlobalNamespace {
class SessionPasswordMenu;
}
namespace GlobalNamespace {
class SettingsMenu;
}
namespace GlobalNamespace {
class SignTextInput;
}
namespace GlobalNamespace {
class TeachingHud;
}
namespace GlobalNamespace {
class TeleportMenu;
}
namespace GlobalNamespace {
class TextChatInput;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class WorldMenuManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WorldMenuManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WorldMenuManager*, "", "WorldMenuManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: WorldMenuManager
class CORDL_TYPE WorldMenuManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field armHud, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_armHud, put=__cordl_internal_set_armHud)) ::GlobalNamespace::ArmHud*  armHud;

/// @brief Field badConnectionWarning, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_badConnectionWarning, put=__cordl_internal_set_badConnectionWarning)) ::UnityW<::GlobalNamespace::BadConnectionWarning>  badConnectionWarning;

/// @brief Field binocularsMask, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_binocularsMask, put=__cordl_internal_set_binocularsMask)) ::UnityW<::UnityEngine::Transform>  binocularsMask;

/// @brief Field crosshair, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_crosshair, put=__cordl_internal_set_crosshair)) ::GlobalNamespace::Crosshair*  crosshair;

/// @brief Field detailsCleared, offset 0x179, size 0x1 
 __declspec(property(get=__cordl_internal_get_detailsCleared, put=__cordl_internal_set_detailsCleared)) bool  detailsCleared;

/// @brief Field detailsOverlay, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailsOverlay, put=__cordl_internal_set_detailsOverlay)) ::UnityW<::UnityEngine::Transform>  detailsOverlay;

/// @brief Field detailsToggledOn, offset 0x178, size 0x1 
 __declspec(property(get=__cordl_internal_get_detailsToggledOn, put=__cordl_internal_set_detailsToggledOn)) bool  detailsToggledOn;

/// @brief Field disconnectConfirmMenuClient, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_disconnectConfirmMenuClient, put=__cordl_internal_set_disconnectConfirmMenuClient)) ::UnityW<::GlobalNamespace::DisconnectConfirmMenu>  disconnectConfirmMenuClient;

 __declspec(property(get=get_disconnectConfirmMenuForCurrentMode)) ::UnityW<::GlobalNamespace::DisconnectConfirmMenu>  disconnectConfirmMenuForCurrentMode;

/// @brief Field disconnectConfirmMenuHost, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_disconnectConfirmMenuHost, put=__cordl_internal_set_disconnectConfirmMenuHost)) ::UnityW<::GlobalNamespace::DisconnectConfirmMenu>  disconnectConfirmMenuHost;

/// @brief Field dreamFadeGroup, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreamFadeGroup, put=__cordl_internal_set_dreamFadeGroup)) ::UnityW<::UnityEngine::CanvasGroup>  dreamFadeGroup;

/// @brief Field endingFadeGroup, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_endingFadeGroup, put=__cordl_internal_set_endingFadeGroup)) ::UnityW<::UnityEngine::CanvasGroup>  endingFadeGroup;

/// @brief Field endingTransition, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_endingTransition, put=__cordl_internal_set_endingTransition)) ::UnityW<::GlobalNamespace::EndingTransition>  endingTransition;

/// @brief Field gameChatMuteOverlay, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameChatMuteOverlay, put=__cordl_internal_set_gameChatMuteOverlay)) ::UnityW<::UnityEngine::Transform>  gameChatMuteOverlay;

/// @brief Field gameOverlay, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameOverlay, put=__cordl_internal_set_gameOverlay)) ::UnityW<::UnityEngine::Transform>  gameOverlay;

/// @brief Field hiddenWhenMenuOpen, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hiddenWhenMenuOpen, put=__cordl_internal_set_hiddenWhenMenuOpen)) ::UnityW<::UnityEngine::Transform>  hiddenWhenMenuOpen;

/// @brief Field hideableHud, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hideableHud, put=__cordl_internal_set_hideableHud)) ::UnityW<::UnityEngine::Transform>  hideableHud;

/// @brief Field kickConfirmMenu, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_kickConfirmMenu, put=__cordl_internal_set_kickConfirmMenu)) ::UnityW<::GlobalNamespace::KickConfirmMenu>  kickConfirmMenu;

/// @brief Field moderationKickConfirmMenu, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_moderationKickConfirmMenu, put=__cordl_internal_set_moderationKickConfirmMenu)) ::UnityW<::GlobalNamespace::ModerationKickConfirmMenu>  moderationKickConfirmMenu;

/// @brief Field moderationKickConfirmedMenu, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_moderationKickConfirmedMenu, put=__cordl_internal_set_moderationKickConfirmedMenu)) ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  moderationKickConfirmedMenu;

/// @brief Field moderationMenu, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_moderationMenu, put=__cordl_internal_set_moderationMenu)) ::UnityW<::GlobalNamespace::ModerationMenu>  moderationMenu;

/// @brief Field moderationReportConfirmMenu, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_moderationReportConfirmMenu, put=__cordl_internal_set_moderationReportConfirmMenu)) ::UnityW<::GlobalNamespace::ModerationReportConfirmMenu>  moderationReportConfirmMenu;

/// @brief Field moderationReportConfirmedMenu, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_moderationReportConfirmedMenu, put=__cordl_internal_set_moderationReportConfirmedMenu)) ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  moderationReportConfirmedMenu;

/// @brief Field moderationSilenceConfirmMenu, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_moderationSilenceConfirmMenu, put=__cordl_internal_set_moderationSilenceConfirmMenu)) ::UnityW<::GlobalNamespace::ModerationSilenceConfirmMenu>  moderationSilenceConfirmMenu;

/// @brief Field moderationSilenceConfirmedMenu, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_moderationSilenceConfirmedMenu, put=__cordl_internal_set_moderationSilenceConfirmedMenu)) ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  moderationSilenceConfirmedMenu;

/// @brief Field motionOverlayCross, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_motionOverlayCross, put=__cordl_internal_set_motionOverlayCross)) ::UnityW<::UnityEngine::Transform>  motionOverlayCross;

/// @brief Field motionOverlayDots, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_motionOverlayDots, put=__cordl_internal_set_motionOverlayDots)) ::UnityW<::UnityEngine::Transform>  motionOverlayDots;

/// @brief Field motionOverlayFrame, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_motionOverlayFrame, put=__cordl_internal_set_motionOverlayFrame)) ::UnityW<::UnityEngine::Transform>  motionOverlayFrame;

/// @brief Field muteOverlay, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_muteOverlay, put=__cordl_internal_set_muteOverlay)) ::UnityW<::UnityEngine::Transform>  muteOverlay;

/// @brief Field nmouseObject, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_nmouseObject, put=__cordl_internal_set_nmouseObject)) ::UnityW<::GlobalNamespace::NmouseObject>  nmouseObject;

/// @brief Field parentalRestrictionsOverlay, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentalRestrictionsOverlay, put=__cordl_internal_set_parentalRestrictionsOverlay)) ::UnityW<::UnityEngine::Transform>  parentalRestrictionsOverlay;

/// @brief Field pauseMenuClient, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_pauseMenuClient, put=__cordl_internal_set_pauseMenuClient)) ::UnityW<::GlobalNamespace::PauseMenu>  pauseMenuClient;

/// @brief Field pauseMenuCloseSound, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_pauseMenuCloseSound, put=__cordl_internal_set_pauseMenuCloseSound)) ::UnityW<::GlobalNamespace::AudioAsset>  pauseMenuCloseSound;

 __declspec(property(get=get_pauseMenuForCurrentMode)) ::UnityW<::GlobalNamespace::PauseMenu>  pauseMenuForCurrentMode;

/// @brief Field pauseMenuHost, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_pauseMenuHost, put=__cordl_internal_set_pauseMenuHost)) ::UnityW<::GlobalNamespace::PauseMenu>  pauseMenuHost;

/// @brief Field pauseMenuOpenSound, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_pauseMenuOpenSound, put=__cordl_internal_set_pauseMenuOpenSound)) ::UnityW<::GlobalNamespace::AudioAsset>  pauseMenuOpenSound;

/// @brief Field pingOverlay, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_pingOverlay, put=__cordl_internal_set_pingOverlay)) ::UnityW<::UnityEngine::Transform>  pingOverlay;

/// @brief Field pushToTalkOverlay, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_pushToTalkOverlay, put=__cordl_internal_set_pushToTalkOverlay)) ::UnityW<::UnityEngine::Transform>  pushToTalkOverlay;

/// @brief Field secondEndingTransition, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_secondEndingTransition, put=__cordl_internal_set_secondEndingTransition)) ::UnityW<::GlobalNamespace::EndingTransition>  secondEndingTransition;

/// @brief Field sessionMenuClient, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionMenuClient, put=__cordl_internal_set_sessionMenuClient)) ::UnityW<::GlobalNamespace::SessionMenu>  sessionMenuClient;

 __declspec(property(get=get_sessionMenuForCurrentMode)) ::UnityW<::GlobalNamespace::SessionMenu>  sessionMenuForCurrentMode;

/// @brief Field sessionMenuHost, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionMenuHost, put=__cordl_internal_set_sessionMenuHost)) ::UnityW<::GlobalNamespace::SessionMenu>  sessionMenuHost;

/// @brief Field sessionPasswordMenu, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sessionPasswordMenu, put=__cordl_internal_set_sessionPasswordMenu)) ::UnityW<::GlobalNamespace::SessionPasswordMenu>  sessionPasswordMenu;

/// @brief Field settingsMenu, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsMenu, put=__cordl_internal_set_settingsMenu)) ::UnityW<::GlobalNamespace::SettingsMenu>  settingsMenu;

/// @brief Field signTextInput, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_signTextInput, put=__cordl_internal_set_signTextInput)) ::UnityW<::GlobalNamespace::SignTextInput>  signTextInput;

/// @brief Field silencedWarningOverlay, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_silencedWarningOverlay, put=__cordl_internal_set_silencedWarningOverlay)) ::UnityW<::UnityEngine::Transform>  silencedWarningOverlay;

/// @brief Field teachingHud, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_teachingHud, put=__cordl_internal_set_teachingHud)) ::UnityW<::GlobalNamespace::TeachingHud>  teachingHud;

/// @brief Field teleportMenu, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportMenu, put=__cordl_internal_set_teleportMenu)) ::UnityW<::GlobalNamespace::TeleportMenu>  teleportMenu;

/// @brief Field telescopeMask, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_telescopeMask, put=__cordl_internal_set_telescopeMask)) ::UnityW<::UnityEngine::Transform>  telescopeMask;

/// @brief Field textChatInput, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_textChatInput, put=__cordl_internal_set_textChatInput)) ::UnityW<::GlobalNamespace::TextChatInput>  textChatInput;

/// @brief Method ApplyMotionOverlaySetting, addr 0x180444810, size 0x140, virtual false, abstract: false, final false
static inline void ApplyMotionOverlaySetting() ;

/// @brief Method Awake, addr 0x180444950, size 0x490, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CloseMenu, addr 0x180444de0, size 0x3c0, virtual false, abstract: false, final false
inline void CloseMenu() ;

static inline ::GlobalNamespace::WorldMenuManager* New_ctor() ;

/// @brief Method OpenMenu, addr 0x1804451a0, size 0x1b0, virtual false, abstract: false, final false
inline void OpenMenu() ;

/// @brief Method RefreshHidableHud, addr 0x180445350, size 0xa0, virtual false, abstract: false, final false
static inline void RefreshHidableHud() ;

/// @brief Method RefreshSilencedOverlay, addr 0x1804453f0, size 0x100, virtual false, abstract: false, final false
static inline void RefreshSilencedOverlay() ;

/// @brief Method SetBinocularsMask, addr 0x1804454f0, size 0x60, virtual false, abstract: false, final false
static inline void SetBinocularsMask(bool  active) ;

/// @brief Method SetGameChatMuteOverlay, addr 0x180445550, size 0x60, virtual false, abstract: false, final false
static inline void SetGameChatMuteOverlay(bool  active) ;

/// @brief Method SetMuteOverlay, addr 0x1804455b0, size 0x60, virtual false, abstract: false, final false
static inline void SetMuteOverlay(bool  active) ;

/// @brief Method SetParentalRestrictionOverlay, addr 0x180445610, size 0x60, virtual false, abstract: false, final false
static inline void SetParentalRestrictionOverlay(bool  active) ;

/// @brief Method SetPushToTalkOverlay, addr 0x180445670, size 0x60, virtual false, abstract: false, final false
static inline void SetPushToTalkOverlay(bool  active) ;

/// @brief Method SetSilencedWarningOverlay, addr 0x1804456d0, size 0x60, virtual false, abstract: false, final false
static inline void SetSilencedWarningOverlay(bool  active) ;

/// @brief Method SetTelescopeMask, addr 0x180445730, size 0x60, virtual false, abstract: false, final false
static inline void SetTelescopeMask(bool  active) ;

/// @brief Method Update, addr 0x180445790, size 0x120, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::ArmHud* const& __cordl_internal_get_armHud() const;

constexpr ::GlobalNamespace::ArmHud*& __cordl_internal_get_armHud() ;

constexpr ::UnityW<::GlobalNamespace::BadConnectionWarning> const& __cordl_internal_get_badConnectionWarning() const;

constexpr ::UnityW<::GlobalNamespace::BadConnectionWarning>& __cordl_internal_get_badConnectionWarning() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_binocularsMask() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_binocularsMask() ;

constexpr ::GlobalNamespace::Crosshair* const& __cordl_internal_get_crosshair() const;

constexpr ::GlobalNamespace::Crosshair*& __cordl_internal_get_crosshair() ;

constexpr bool const& __cordl_internal_get_detailsCleared() const;

constexpr bool& __cordl_internal_get_detailsCleared() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_detailsOverlay() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_detailsOverlay() ;

constexpr bool const& __cordl_internal_get_detailsToggledOn() const;

constexpr bool& __cordl_internal_get_detailsToggledOn() ;

constexpr ::UnityW<::GlobalNamespace::DisconnectConfirmMenu> const& __cordl_internal_get_disconnectConfirmMenuClient() const;

constexpr ::UnityW<::GlobalNamespace::DisconnectConfirmMenu>& __cordl_internal_get_disconnectConfirmMenuClient() ;

constexpr ::UnityW<::GlobalNamespace::DisconnectConfirmMenu> const& __cordl_internal_get_disconnectConfirmMenuHost() const;

constexpr ::UnityW<::GlobalNamespace::DisconnectConfirmMenu>& __cordl_internal_get_disconnectConfirmMenuHost() ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_dreamFadeGroup() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_dreamFadeGroup() ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_endingFadeGroup() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_endingFadeGroup() ;

constexpr ::UnityW<::GlobalNamespace::EndingTransition> const& __cordl_internal_get_endingTransition() const;

constexpr ::UnityW<::GlobalNamespace::EndingTransition>& __cordl_internal_get_endingTransition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_gameChatMuteOverlay() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_gameChatMuteOverlay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_gameOverlay() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_gameOverlay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_hiddenWhenMenuOpen() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_hiddenWhenMenuOpen() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_hideableHud() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_hideableHud() ;

constexpr ::UnityW<::GlobalNamespace::KickConfirmMenu> const& __cordl_internal_get_kickConfirmMenu() const;

constexpr ::UnityW<::GlobalNamespace::KickConfirmMenu>& __cordl_internal_get_kickConfirmMenu() ;

constexpr ::UnityW<::GlobalNamespace::ModerationKickConfirmMenu> const& __cordl_internal_get_moderationKickConfirmMenu() const;

constexpr ::UnityW<::GlobalNamespace::ModerationKickConfirmMenu>& __cordl_internal_get_moderationKickConfirmMenu() ;

constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu> const& __cordl_internal_get_moderationKickConfirmedMenu() const;

constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>& __cordl_internal_get_moderationKickConfirmedMenu() ;

constexpr ::UnityW<::GlobalNamespace::ModerationMenu> const& __cordl_internal_get_moderationMenu() const;

constexpr ::UnityW<::GlobalNamespace::ModerationMenu>& __cordl_internal_get_moderationMenu() ;

constexpr ::UnityW<::GlobalNamespace::ModerationReportConfirmMenu> const& __cordl_internal_get_moderationReportConfirmMenu() const;

constexpr ::UnityW<::GlobalNamespace::ModerationReportConfirmMenu>& __cordl_internal_get_moderationReportConfirmMenu() ;

constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu> const& __cordl_internal_get_moderationReportConfirmedMenu() const;

constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>& __cordl_internal_get_moderationReportConfirmedMenu() ;

constexpr ::UnityW<::GlobalNamespace::ModerationSilenceConfirmMenu> const& __cordl_internal_get_moderationSilenceConfirmMenu() const;

constexpr ::UnityW<::GlobalNamespace::ModerationSilenceConfirmMenu>& __cordl_internal_get_moderationSilenceConfirmMenu() ;

constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu> const& __cordl_internal_get_moderationSilenceConfirmedMenu() const;

constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>& __cordl_internal_get_moderationSilenceConfirmedMenu() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_motionOverlayCross() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_motionOverlayCross() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_motionOverlayDots() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_motionOverlayDots() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_motionOverlayFrame() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_motionOverlayFrame() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_muteOverlay() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_muteOverlay() ;

constexpr ::UnityW<::GlobalNamespace::NmouseObject> const& __cordl_internal_get_nmouseObject() const;

constexpr ::UnityW<::GlobalNamespace::NmouseObject>& __cordl_internal_get_nmouseObject() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parentalRestrictionsOverlay() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parentalRestrictionsOverlay() ;

constexpr ::UnityW<::GlobalNamespace::PauseMenu> const& __cordl_internal_get_pauseMenuClient() const;

constexpr ::UnityW<::GlobalNamespace::PauseMenu>& __cordl_internal_get_pauseMenuClient() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_pauseMenuCloseSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_pauseMenuCloseSound() ;

constexpr ::UnityW<::GlobalNamespace::PauseMenu> const& __cordl_internal_get_pauseMenuHost() const;

constexpr ::UnityW<::GlobalNamespace::PauseMenu>& __cordl_internal_get_pauseMenuHost() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_pauseMenuOpenSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_pauseMenuOpenSound() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pingOverlay() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pingOverlay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pushToTalkOverlay() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pushToTalkOverlay() ;

constexpr ::UnityW<::GlobalNamespace::EndingTransition> const& __cordl_internal_get_secondEndingTransition() const;

constexpr ::UnityW<::GlobalNamespace::EndingTransition>& __cordl_internal_get_secondEndingTransition() ;

constexpr ::UnityW<::GlobalNamespace::SessionMenu> const& __cordl_internal_get_sessionMenuClient() const;

constexpr ::UnityW<::GlobalNamespace::SessionMenu>& __cordl_internal_get_sessionMenuClient() ;

constexpr ::UnityW<::GlobalNamespace::SessionMenu> const& __cordl_internal_get_sessionMenuHost() const;

constexpr ::UnityW<::GlobalNamespace::SessionMenu>& __cordl_internal_get_sessionMenuHost() ;

constexpr ::UnityW<::GlobalNamespace::SessionPasswordMenu> const& __cordl_internal_get_sessionPasswordMenu() const;

constexpr ::UnityW<::GlobalNamespace::SessionPasswordMenu>& __cordl_internal_get_sessionPasswordMenu() ;

constexpr ::UnityW<::GlobalNamespace::SettingsMenu> const& __cordl_internal_get_settingsMenu() const;

constexpr ::UnityW<::GlobalNamespace::SettingsMenu>& __cordl_internal_get_settingsMenu() ;

constexpr ::UnityW<::GlobalNamespace::SignTextInput> const& __cordl_internal_get_signTextInput() const;

constexpr ::UnityW<::GlobalNamespace::SignTextInput>& __cordl_internal_get_signTextInput() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_silencedWarningOverlay() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_silencedWarningOverlay() ;

constexpr ::UnityW<::GlobalNamespace::TeachingHud> const& __cordl_internal_get_teachingHud() const;

constexpr ::UnityW<::GlobalNamespace::TeachingHud>& __cordl_internal_get_teachingHud() ;

constexpr ::UnityW<::GlobalNamespace::TeleportMenu> const& __cordl_internal_get_teleportMenu() const;

constexpr ::UnityW<::GlobalNamespace::TeleportMenu>& __cordl_internal_get_teleportMenu() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_telescopeMask() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_telescopeMask() ;

constexpr ::UnityW<::GlobalNamespace::TextChatInput> const& __cordl_internal_get_textChatInput() const;

constexpr ::UnityW<::GlobalNamespace::TextChatInput>& __cordl_internal_get_textChatInput() ;

constexpr void __cordl_internal_set_armHud(::GlobalNamespace::ArmHud*  value) ;

constexpr void __cordl_internal_set_badConnectionWarning(::UnityW<::GlobalNamespace::BadConnectionWarning>  value) ;

constexpr void __cordl_internal_set_binocularsMask(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_crosshair(::GlobalNamespace::Crosshair*  value) ;

constexpr void __cordl_internal_set_detailsCleared(bool  value) ;

constexpr void __cordl_internal_set_detailsOverlay(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_detailsToggledOn(bool  value) ;

constexpr void __cordl_internal_set_disconnectConfirmMenuClient(::UnityW<::GlobalNamespace::DisconnectConfirmMenu>  value) ;

constexpr void __cordl_internal_set_disconnectConfirmMenuHost(::UnityW<::GlobalNamespace::DisconnectConfirmMenu>  value) ;

constexpr void __cordl_internal_set_dreamFadeGroup(::UnityW<::UnityEngine::CanvasGroup>  value) ;

constexpr void __cordl_internal_set_endingFadeGroup(::UnityW<::UnityEngine::CanvasGroup>  value) ;

constexpr void __cordl_internal_set_endingTransition(::UnityW<::GlobalNamespace::EndingTransition>  value) ;

constexpr void __cordl_internal_set_gameChatMuteOverlay(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gameOverlay(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hiddenWhenMenuOpen(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_hideableHud(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_kickConfirmMenu(::UnityW<::GlobalNamespace::KickConfirmMenu>  value) ;

constexpr void __cordl_internal_set_moderationKickConfirmMenu(::UnityW<::GlobalNamespace::ModerationKickConfirmMenu>  value) ;

constexpr void __cordl_internal_set_moderationKickConfirmedMenu(::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  value) ;

constexpr void __cordl_internal_set_moderationMenu(::UnityW<::GlobalNamespace::ModerationMenu>  value) ;

constexpr void __cordl_internal_set_moderationReportConfirmMenu(::UnityW<::GlobalNamespace::ModerationReportConfirmMenu>  value) ;

constexpr void __cordl_internal_set_moderationReportConfirmedMenu(::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  value) ;

constexpr void __cordl_internal_set_moderationSilenceConfirmMenu(::UnityW<::GlobalNamespace::ModerationSilenceConfirmMenu>  value) ;

constexpr void __cordl_internal_set_moderationSilenceConfirmedMenu(::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  value) ;

constexpr void __cordl_internal_set_motionOverlayCross(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_motionOverlayDots(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_motionOverlayFrame(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_muteOverlay(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_nmouseObject(::UnityW<::GlobalNamespace::NmouseObject>  value) ;

constexpr void __cordl_internal_set_parentalRestrictionsOverlay(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pauseMenuClient(::UnityW<::GlobalNamespace::PauseMenu>  value) ;

constexpr void __cordl_internal_set_pauseMenuCloseSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_pauseMenuHost(::UnityW<::GlobalNamespace::PauseMenu>  value) ;

constexpr void __cordl_internal_set_pauseMenuOpenSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_pingOverlay(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_pushToTalkOverlay(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_secondEndingTransition(::UnityW<::GlobalNamespace::EndingTransition>  value) ;

constexpr void __cordl_internal_set_sessionMenuClient(::UnityW<::GlobalNamespace::SessionMenu>  value) ;

constexpr void __cordl_internal_set_sessionMenuHost(::UnityW<::GlobalNamespace::SessionMenu>  value) ;

constexpr void __cordl_internal_set_sessionPasswordMenu(::UnityW<::GlobalNamespace::SessionPasswordMenu>  value) ;

constexpr void __cordl_internal_set_settingsMenu(::UnityW<::GlobalNamespace::SettingsMenu>  value) ;

constexpr void __cordl_internal_set_signTextInput(::UnityW<::GlobalNamespace::SignTextInput>  value) ;

constexpr void __cordl_internal_set_silencedWarningOverlay(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_teachingHud(::UnityW<::GlobalNamespace::TeachingHud>  value) ;

constexpr void __cordl_internal_set_teleportMenu(::UnityW<::GlobalNamespace::TeleportMenu>  value) ;

constexpr void __cordl_internal_set_telescopeMask(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_textChatInput(::UnityW<::GlobalNamespace::TextChatInput>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MenuLockedOpen, addr 0x1804458b0, size 0x180, virtual false, abstract: false, final false
static inline bool get_MenuLockedOpen() ;

/// @brief Method get_disconnectConfirmMenuForCurrentMode, addr 0x180445a30, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::DisconnectConfirmMenu> get_disconnectConfirmMenuForCurrentMode() ;

/// @brief Method get_instance, addr 0x180445a80, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::WorldMenuManager> get_instance() ;

/// @brief Method get_pauseMenuForCurrentMode, addr 0x180445aa0, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PauseMenu> get_pauseMenuForCurrentMode() ;

/// @brief Method get_sessionMenuForCurrentMode, addr 0x180445af0, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SessionMenu> get_sessionMenuForCurrentMode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorldMenuManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorldMenuManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WorldMenuManager(WorldMenuManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorldMenuManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorldMenuManager(WorldMenuManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5274};

/// @brief Field crosshair, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::Crosshair*  ___crosshair;

/// @brief Field armHud, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ArmHud*  ___armHud;

/// @brief Field hideableHud, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___hideableHud;

/// @brief Field hiddenWhenMenuOpen, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___hiddenWhenMenuOpen;

/// @brief Field teachingHud, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TeachingHud>  ___teachingHud;

/// @brief Field endingTransition, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EndingTransition>  ___endingTransition;

/// @brief Field secondEndingTransition, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EndingTransition>  ___secondEndingTransition;

/// @brief Field endingFadeGroup, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ___endingFadeGroup;

/// @brief Field dreamFadeGroup, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ___dreamFadeGroup;

/// @brief Field badConnectionWarning, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BadConnectionWarning>  ___badConnectionWarning;

/// @brief Field motionOverlayCross, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___motionOverlayCross;

/// @brief Field motionOverlayDots, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___motionOverlayDots;

/// @brief Field motionOverlayFrame, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___motionOverlayFrame;

/// @brief Field nmouseObject, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NmouseObject>  ___nmouseObject;

/// @brief Field pauseMenuHost, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PauseMenu>  ___pauseMenuHost;

/// @brief Field pauseMenuClient, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PauseMenu>  ___pauseMenuClient;

/// @brief Field settingsMenu, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsMenu>  ___settingsMenu;

/// @brief Field sessionMenuHost, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SessionMenu>  ___sessionMenuHost;

/// @brief Field sessionMenuClient, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SessionMenu>  ___sessionMenuClient;

/// @brief Field sessionPasswordMenu, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SessionPasswordMenu>  ___sessionPasswordMenu;

/// @brief Field kickConfirmMenu, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KickConfirmMenu>  ___kickConfirmMenu;

/// @brief Field disconnectConfirmMenuHost, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DisconnectConfirmMenu>  ___disconnectConfirmMenuHost;

/// @brief Field disconnectConfirmMenuClient, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DisconnectConfirmMenu>  ___disconnectConfirmMenuClient;

/// @brief Field moderationMenu, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModerationMenu>  ___moderationMenu;

/// @brief Field moderationKickConfirmMenu, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModerationKickConfirmMenu>  ___moderationKickConfirmMenu;

/// @brief Field moderationKickConfirmedMenu, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  ___moderationKickConfirmedMenu;

/// @brief Field moderationSilenceConfirmMenu, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModerationSilenceConfirmMenu>  ___moderationSilenceConfirmMenu;

/// @brief Field moderationSilenceConfirmedMenu, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  ___moderationSilenceConfirmedMenu;

/// @brief Field moderationReportConfirmMenu, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModerationReportConfirmMenu>  ___moderationReportConfirmMenu;

/// @brief Field moderationReportConfirmedMenu, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  ___moderationReportConfirmedMenu;

/// @brief Field teleportMenu, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TeleportMenu>  ___teleportMenu;

/// @brief Field gameOverlay, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___gameOverlay;

/// @brief Field binocularsMask, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___binocularsMask;

/// @brief Field telescopeMask, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___telescopeMask;

/// @brief Field detailsOverlay, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___detailsOverlay;

/// @brief Field pingOverlay, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pingOverlay;

/// @brief Field muteOverlay, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___muteOverlay;

/// @brief Field gameChatMuteOverlay, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___gameChatMuteOverlay;

/// @brief Field parentalRestrictionsOverlay, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parentalRestrictionsOverlay;

/// @brief Field pushToTalkOverlay, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___pushToTalkOverlay;

/// @brief Field silencedWarningOverlay, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___silencedWarningOverlay;

/// @brief Field signTextInput, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SignTextInput>  ___signTextInput;

/// @brief Field textChatInput, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TextChatInput>  ___textChatInput;

/// @brief Field detailsToggledOn, offset: 0x178, size: 0x1, def value: None
 bool  ___detailsToggledOn;

/// @brief Field detailsCleared, offset: 0x179, size: 0x1, def value: None
 bool  ___detailsCleared;

/// @brief Field pauseMenuOpenSound, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___pauseMenuOpenSound;

/// @brief Field pauseMenuCloseSound, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___pauseMenuCloseSound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___crosshair) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___armHud) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___hideableHud) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___hiddenWhenMenuOpen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___teachingHud) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___endingTransition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___secondEndingTransition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___endingFadeGroup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___dreamFadeGroup) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___badConnectionWarning) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___motionOverlayCross) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___motionOverlayDots) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___motionOverlayFrame) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___nmouseObject) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___pauseMenuHost) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___pauseMenuClient) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___settingsMenu) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___sessionMenuHost) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___sessionMenuClient) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___sessionPasswordMenu) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___kickConfirmMenu) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___disconnectConfirmMenuHost) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___disconnectConfirmMenuClient) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___moderationMenu) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___moderationKickConfirmMenu) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___moderationKickConfirmedMenu) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___moderationSilenceConfirmMenu) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___moderationSilenceConfirmedMenu) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___moderationReportConfirmMenu) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___moderationReportConfirmedMenu) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___teleportMenu) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___gameOverlay) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___binocularsMask) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___telescopeMask) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___detailsOverlay) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___pingOverlay) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___muteOverlay) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___gameChatMuteOverlay) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___parentalRestrictionsOverlay) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___pushToTalkOverlay) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___silencedWarningOverlay) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___signTextInput) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___textChatInput) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___detailsToggledOn) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___detailsCleared) == 0x179, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___pauseMenuOpenSound) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WorldMenuManager, ___pauseMenuCloseSound) == 0x188, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WorldMenuManager) == 0x190, "Size mismatch!");

} // namespace end def GlobalNamespace
