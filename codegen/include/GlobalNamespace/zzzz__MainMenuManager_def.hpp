#pragma once
// IWYU pragma private; include "GlobalNamespace/MainMenuManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainMenuManager)
namespace GlobalNamespace {
class CongratsMenu;
}
namespace GlobalNamespace {
class ConnectingMenu;
}
namespace GlobalNamespace {
class CreditsMenu;
}
namespace GlobalNamespace {
class ErrorMenu;
}
namespace GlobalNamespace {
struct ErrorUtils_ErrorType;
}
namespace GlobalNamespace {
class HostMenuConfirm;
}
namespace GlobalNamespace {
class HostMenuDeleteConfirm;
}
namespace GlobalNamespace {
class HostMenuSelect;
}
namespace GlobalNamespace {
class JoinMenu;
}
namespace GlobalNamespace {
class LoadingBlockMenu;
}
namespace GlobalNamespace {
class LoadingMenu;
}
namespace GlobalNamespace {
struct MainMenuManager_MainMenuEntryMode;
}
namespace GlobalNamespace {
class MicCheckMenu;
}
namespace GlobalNamespace {
class NmouseObject;
}
namespace GlobalNamespace {
class PasswordMenu;
}
namespace GlobalNamespace {
class PlayerCountMenu;
}
namespace GlobalNamespace {
class SessionOptionsMenu;
}
namespace GlobalNamespace {
class SettingsMenu;
}
namespace GlobalNamespace {
class SplashMenu;
}
namespace GlobalNamespace {
class TitleMenu;
}
namespace Shipmates::Events {
class ShowErrorMessageEvent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
// Forward declare root types
namespace GlobalNamespace {
struct MainMenuManager_MainMenuEntryMode;
}
namespace GlobalNamespace {
class MainMenuManager;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MainMenuManager_MainMenuEntryMode);
MARK_REF_T(::GlobalNamespace::MainMenuManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainMenuManager_MainMenuEntryMode, "", "MainMenuManager/MainMenuEntryMode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MainMenuManager*, "", "MainMenuManager");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MainMenuManager/MainMenuEntryMode
struct CORDL_TYPE MainMenuManager_MainMenuEntryMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MainMenuManager_MainMenuEntryMode_Unwrapped
enum struct __MainMenuManager_MainMenuEntryMode_Unwrapped : int32_t {
__E_MicCheck = static_cast<int32_t>(0x0),
__E_NoScreen = static_cast<int32_t>(0x1),
__E_CongratsMenu = static_cast<int32_t>(0x2),
__E_Congrats2Menu = static_cast<int32_t>(0x3),
__E_SplashScreen = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MainMenuManager_MainMenuEntryMode_Unwrapped () const noexcept {
return static_cast<__MainMenuManager_MainMenuEntryMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MainMenuManager_MainMenuEntryMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MainMenuManager_MainMenuEntryMode(int32_t  value__) noexcept;

/// @brief Field Congrats2Menu value: I32(3)
static ::GlobalNamespace::MainMenuManager_MainMenuEntryMode const Congrats2Menu;

/// @brief Field CongratsMenu value: I32(2)
static ::GlobalNamespace::MainMenuManager_MainMenuEntryMode const CongratsMenu;

/// @brief Field MicCheck value: I32(0)
static ::GlobalNamespace::MainMenuManager_MainMenuEntryMode const MicCheck;

/// @brief Field NoScreen value: I32(1)
static ::GlobalNamespace::MainMenuManager_MainMenuEntryMode const NoScreen;

/// @brief Field SplashScreen value: I32(4)
static ::GlobalNamespace::MainMenuManager_MainMenuEntryMode const SplashScreen;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5307};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainMenuManager_MainMenuEntryMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainMenuManager_MainMenuEntryMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies MainMenuManager::MainMenuEntryMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MainMenuManager
class CORDL_TYPE MainMenuManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MainMenuEntryMode = ::GlobalNamespace::MainMenuManager_MainMenuEntryMode;

/// @brief Field SessionOptionsMenu, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionOptionsMenu, put=__cordl_internal_set_SessionOptionsMenu)) ::UnityW<::GlobalNamespace::SessionOptionsMenu>  SessionOptionsMenu;

/// @brief Field congrats2Menu, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_congrats2Menu, put=__cordl_internal_set_congrats2Menu)) ::UnityW<::GlobalNamespace::CongratsMenu>  congrats2Menu;

/// @brief Field congratsMenu, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_congratsMenu, put=__cordl_internal_set_congratsMenu)) ::UnityW<::GlobalNamespace::CongratsMenu>  congratsMenu;

/// @brief Field connectingMenu, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectingMenu, put=__cordl_internal_set_connectingMenu)) ::UnityW<::GlobalNamespace::ConnectingMenu>  connectingMenu;

/// @brief Field creditsMenu, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_creditsMenu, put=__cordl_internal_set_creditsMenu)) ::UnityW<::GlobalNamespace::CreditsMenu>  creditsMenu;

/// @brief Field entryMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_entryMode, put=setStaticF_entryMode)) ::GlobalNamespace::MainMenuManager_MainMenuEntryMode  entryMode;

/// @brief Field errorMenu, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_errorMenu, put=__cordl_internal_set_errorMenu)) ::UnityW<::GlobalNamespace::ErrorMenu>  errorMenu;

/// @brief Field hostMenuConfirm, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostMenuConfirm, put=__cordl_internal_set_hostMenuConfirm)) ::UnityW<::GlobalNamespace::HostMenuConfirm>  hostMenuConfirm;

/// @brief Field hostMenuDeleteConfirm, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostMenuDeleteConfirm, put=__cordl_internal_set_hostMenuDeleteConfirm)) ::UnityW<::GlobalNamespace::HostMenuDeleteConfirm>  hostMenuDeleteConfirm;

/// @brief Field hostMenuSelect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hostMenuSelect, put=__cordl_internal_set_hostMenuSelect)) ::UnityW<::GlobalNamespace::HostMenuSelect>  hostMenuSelect;

/// @brief Field joinMenu, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_joinMenu, put=__cordl_internal_set_joinMenu)) ::UnityW<::GlobalNamespace::JoinMenu>  joinMenu;

/// @brief Field loadingBlockMenu, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingBlockMenu, put=__cordl_internal_set_loadingBlockMenu)) ::UnityW<::GlobalNamespace::LoadingBlockMenu>  loadingBlockMenu;

/// @brief Field loadingMenu, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingMenu, put=__cordl_internal_set_loadingMenu)) ::UnityW<::GlobalNamespace::LoadingMenu>  loadingMenu;

/// @brief Field menus, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_menus, put=__cordl_internal_set_menus)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  menus;

/// @brief Field micCheckMenu, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_micCheckMenu, put=__cordl_internal_set_micCheckMenu)) ::UnityW<::GlobalNamespace::MicCheckMenu>  micCheckMenu;

/// @brief Field myCamera, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_myCamera, put=__cordl_internal_set_myCamera)) ::UnityW<::UnityEngine::Camera>  myCamera;

/// @brief Field nMouseObject, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nMouseObject, put=__cordl_internal_set_nMouseObject)) ::UnityW<::GlobalNamespace::NmouseObject>  nMouseObject;

/// @brief Field passwordMenu, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_passwordMenu, put=__cordl_internal_set_passwordMenu)) ::UnityW<::GlobalNamespace::PasswordMenu>  passwordMenu;

/// @brief Field playerCountMenu, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerCountMenu, put=__cordl_internal_set_playerCountMenu)) ::UnityW<::GlobalNamespace::PlayerCountMenu>  playerCountMenu;

/// @brief Field settingsMenu, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsMenu, put=__cordl_internal_set_settingsMenu)) ::UnityW<::GlobalNamespace::SettingsMenu>  settingsMenu;

/// @brief Field showErrorMessageEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_showErrorMessageEvent, put=setStaticF_showErrorMessageEvent)) ::Shipmates::Events::ShowErrorMessageEvent*  showErrorMessageEvent;

/// @brief Field splashMenu, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_splashMenu, put=__cordl_internal_set_splashMenu)) ::UnityW<::GlobalNamespace::SplashMenu>  splashMenu;

/// @brief Field titleMenu, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_titleMenu, put=__cordl_internal_set_titleMenu)) ::UnityW<::GlobalNamespace::TitleMenu>  titleMenu;

/// @brief Method Awake, addr 0x180435800, size 0x340, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearMenus, addr 0x180435b40, size 0x5c0, virtual false, abstract: false, final false
static inline void ClearMenus() ;

/// @brief Method InitiateMenuList, addr 0x180436100, size 0x690, virtual false, abstract: false, final false
inline void InitiateMenuList() ;

/// @brief Method LateUpdate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::MainMenuManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnNmouseStateChange, addr 0x180436790, size 0x10, virtual false, abstract: false, final false
inline void OnNmouseStateChange(bool  status) ;

/// @brief Method RefreshSelectableSelection, addr 0x1804367a0, size 0x1b0, virtual false, abstract: false, final false
inline void RefreshSelectableSelection() ;

/// @brief Method ReturnMainmenu, addr 0x180436950, size 0x40, virtual false, abstract: false, final false
inline void ReturnMainmenu() ;

/// @brief Method SetMusicActive, addr 0x180436990, size 0x40, virtual false, abstract: false, final false
static inline void SetMusicActive(bool  value) ;

/// @brief Method ShowErrorMenu, addr 0x1804369d0, size 0x170, virtual false, abstract: false, final false
static inline void ShowErrorMenu(::GlobalNamespace::ErrorUtils_ErrorType  errorType, ::UnityEngine::GameObject*  returnMenu) ;

/// @brief Method ShowPasswordMenu, addr 0x180436b40, size 0x90, virtual false, abstract: false, final false
static inline void ShowPasswordMenu() ;

constexpr ::UnityW<::GlobalNamespace::SessionOptionsMenu> const& __cordl_internal_get_SessionOptionsMenu() const;

constexpr ::UnityW<::GlobalNamespace::SessionOptionsMenu>& __cordl_internal_get_SessionOptionsMenu() ;

constexpr ::UnityW<::GlobalNamespace::CongratsMenu> const& __cordl_internal_get_congrats2Menu() const;

constexpr ::UnityW<::GlobalNamespace::CongratsMenu>& __cordl_internal_get_congrats2Menu() ;

constexpr ::UnityW<::GlobalNamespace::CongratsMenu> const& __cordl_internal_get_congratsMenu() const;

constexpr ::UnityW<::GlobalNamespace::CongratsMenu>& __cordl_internal_get_congratsMenu() ;

constexpr ::UnityW<::GlobalNamespace::ConnectingMenu> const& __cordl_internal_get_connectingMenu() const;

constexpr ::UnityW<::GlobalNamespace::ConnectingMenu>& __cordl_internal_get_connectingMenu() ;

constexpr ::UnityW<::GlobalNamespace::CreditsMenu> const& __cordl_internal_get_creditsMenu() const;

constexpr ::UnityW<::GlobalNamespace::CreditsMenu>& __cordl_internal_get_creditsMenu() ;

constexpr ::UnityW<::GlobalNamespace::ErrorMenu> const& __cordl_internal_get_errorMenu() const;

constexpr ::UnityW<::GlobalNamespace::ErrorMenu>& __cordl_internal_get_errorMenu() ;

constexpr ::UnityW<::GlobalNamespace::HostMenuConfirm> const& __cordl_internal_get_hostMenuConfirm() const;

constexpr ::UnityW<::GlobalNamespace::HostMenuConfirm>& __cordl_internal_get_hostMenuConfirm() ;

constexpr ::UnityW<::GlobalNamespace::HostMenuDeleteConfirm> const& __cordl_internal_get_hostMenuDeleteConfirm() const;

constexpr ::UnityW<::GlobalNamespace::HostMenuDeleteConfirm>& __cordl_internal_get_hostMenuDeleteConfirm() ;

constexpr ::UnityW<::GlobalNamespace::HostMenuSelect> const& __cordl_internal_get_hostMenuSelect() const;

constexpr ::UnityW<::GlobalNamespace::HostMenuSelect>& __cordl_internal_get_hostMenuSelect() ;

constexpr ::UnityW<::GlobalNamespace::JoinMenu> const& __cordl_internal_get_joinMenu() const;

constexpr ::UnityW<::GlobalNamespace::JoinMenu>& __cordl_internal_get_joinMenu() ;

constexpr ::UnityW<::GlobalNamespace::LoadingBlockMenu> const& __cordl_internal_get_loadingBlockMenu() const;

constexpr ::UnityW<::GlobalNamespace::LoadingBlockMenu>& __cordl_internal_get_loadingBlockMenu() ;

constexpr ::UnityW<::GlobalNamespace::LoadingMenu> const& __cordl_internal_get_loadingMenu() const;

constexpr ::UnityW<::GlobalNamespace::LoadingMenu>& __cordl_internal_get_loadingMenu() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& __cordl_internal_get_menus() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& __cordl_internal_get_menus() ;

constexpr ::UnityW<::GlobalNamespace::MicCheckMenu> const& __cordl_internal_get_micCheckMenu() const;

constexpr ::UnityW<::GlobalNamespace::MicCheckMenu>& __cordl_internal_get_micCheckMenu() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_myCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_myCamera() ;

constexpr ::UnityW<::GlobalNamespace::NmouseObject> const& __cordl_internal_get_nMouseObject() const;

constexpr ::UnityW<::GlobalNamespace::NmouseObject>& __cordl_internal_get_nMouseObject() ;

constexpr ::UnityW<::GlobalNamespace::PasswordMenu> const& __cordl_internal_get_passwordMenu() const;

constexpr ::UnityW<::GlobalNamespace::PasswordMenu>& __cordl_internal_get_passwordMenu() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCountMenu> const& __cordl_internal_get_playerCountMenu() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCountMenu>& __cordl_internal_get_playerCountMenu() ;

constexpr ::UnityW<::GlobalNamespace::SettingsMenu> const& __cordl_internal_get_settingsMenu() const;

constexpr ::UnityW<::GlobalNamespace::SettingsMenu>& __cordl_internal_get_settingsMenu() ;

constexpr ::UnityW<::GlobalNamespace::SplashMenu> const& __cordl_internal_get_splashMenu() const;

constexpr ::UnityW<::GlobalNamespace::SplashMenu>& __cordl_internal_get_splashMenu() ;

constexpr ::UnityW<::GlobalNamespace::TitleMenu> const& __cordl_internal_get_titleMenu() const;

constexpr ::UnityW<::GlobalNamespace::TitleMenu>& __cordl_internal_get_titleMenu() ;

constexpr void __cordl_internal_set_SessionOptionsMenu(::UnityW<::GlobalNamespace::SessionOptionsMenu>  value) ;

constexpr void __cordl_internal_set_congrats2Menu(::UnityW<::GlobalNamespace::CongratsMenu>  value) ;

constexpr void __cordl_internal_set_congratsMenu(::UnityW<::GlobalNamespace::CongratsMenu>  value) ;

constexpr void __cordl_internal_set_connectingMenu(::UnityW<::GlobalNamespace::ConnectingMenu>  value) ;

constexpr void __cordl_internal_set_creditsMenu(::UnityW<::GlobalNamespace::CreditsMenu>  value) ;

constexpr void __cordl_internal_set_errorMenu(::UnityW<::GlobalNamespace::ErrorMenu>  value) ;

constexpr void __cordl_internal_set_hostMenuConfirm(::UnityW<::GlobalNamespace::HostMenuConfirm>  value) ;

constexpr void __cordl_internal_set_hostMenuDeleteConfirm(::UnityW<::GlobalNamespace::HostMenuDeleteConfirm>  value) ;

constexpr void __cordl_internal_set_hostMenuSelect(::UnityW<::GlobalNamespace::HostMenuSelect>  value) ;

constexpr void __cordl_internal_set_joinMenu(::UnityW<::GlobalNamespace::JoinMenu>  value) ;

constexpr void __cordl_internal_set_loadingBlockMenu(::UnityW<::GlobalNamespace::LoadingBlockMenu>  value) ;

constexpr void __cordl_internal_set_loadingMenu(::UnityW<::GlobalNamespace::LoadingMenu>  value) ;

constexpr void __cordl_internal_set_menus(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  value) ;

constexpr void __cordl_internal_set_micCheckMenu(::UnityW<::GlobalNamespace::MicCheckMenu>  value) ;

constexpr void __cordl_internal_set_myCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_nMouseObject(::UnityW<::GlobalNamespace::NmouseObject>  value) ;

constexpr void __cordl_internal_set_passwordMenu(::UnityW<::GlobalNamespace::PasswordMenu>  value) ;

constexpr void __cordl_internal_set_playerCountMenu(::UnityW<::GlobalNamespace::PlayerCountMenu>  value) ;

constexpr void __cordl_internal_set_settingsMenu(::UnityW<::GlobalNamespace::SettingsMenu>  value) ;

constexpr void __cordl_internal_set_splashMenu(::UnityW<::GlobalNamespace::SplashMenu>  value) ;

constexpr void __cordl_internal_set_titleMenu(::UnityW<::GlobalNamespace::TitleMenu>  value) ;

/// @brief Method .ctor, addr 0x180436bd0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::MainMenuManager_MainMenuEntryMode getStaticF_entryMode() ;

static inline ::Shipmates::Events::ShowErrorMessageEvent* getStaticF_showErrorMessageEvent() ;

/// @brief Method get_ShowErrorMessageEvent, addr 0x180436c30, size 0x20, virtual false, abstract: false, final false
static inline ::Shipmates::Events::ShowErrorMessageEvent* get_ShowErrorMessageEvent() ;

/// @brief Method get_instance, addr 0x180436c50, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::MainMenuManager> get_instance() ;

static inline void setStaticF_entryMode(::GlobalNamespace::MainMenuManager_MainMenuEntryMode  value) ;

static inline void setStaticF_showErrorMessageEvent(::Shipmates::Events::ShowErrorMessageEvent*  value) ;

/// @brief Method set_ShowErrorMessageEvent, addr 0x180436c80, size 0x110, virtual false, abstract: false, final false
static inline void set_ShowErrorMessageEvent(::Shipmates::Events::ShowErrorMessageEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainMenuManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainMenuManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainMenuManager(MainMenuManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainMenuManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainMenuManager(MainMenuManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5308};

/// @brief Field titleMenu, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TitleMenu>  ___titleMenu;

/// @brief Field hostMenuSelect, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HostMenuSelect>  ___hostMenuSelect;

/// @brief Field hostMenuConfirm, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HostMenuConfirm>  ___hostMenuConfirm;

/// @brief Field hostMenuDeleteConfirm, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HostMenuDeleteConfirm>  ___hostMenuDeleteConfirm;

/// @brief Field joinMenu, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::JoinMenu>  ___joinMenu;

/// @brief Field connectingMenu, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ConnectingMenu>  ___connectingMenu;

/// @brief Field loadingMenu, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LoadingMenu>  ___loadingMenu;

/// @brief Field loadingBlockMenu, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LoadingBlockMenu>  ___loadingBlockMenu;

/// @brief Field passwordMenu, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PasswordMenu>  ___passwordMenu;

/// @brief Field errorMenu, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ErrorMenu>  ___errorMenu;

/// @brief Field settingsMenu, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsMenu>  ___settingsMenu;

/// @brief Field creditsMenu, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CreditsMenu>  ___creditsMenu;

/// @brief Field micCheckMenu, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MicCheckMenu>  ___micCheckMenu;

/// @brief Field playerCountMenu, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCountMenu>  ___playerCountMenu;

/// @brief Field SessionOptionsMenu, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SessionOptionsMenu>  ___SessionOptionsMenu;

/// @brief Field congratsMenu, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CongratsMenu>  ___congratsMenu;

/// @brief Field congrats2Menu, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CongratsMenu>  ___congrats2Menu;

/// @brief Field splashMenu, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SplashMenu>  ___splashMenu;

/// @brief Field nMouseObject, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NmouseObject>  ___nMouseObject;

/// @brief Field menus, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  ___menus;

/// @brief Field myCamera, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___myCamera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___titleMenu) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___hostMenuSelect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___hostMenuConfirm) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___hostMenuDeleteConfirm) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___joinMenu) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___connectingMenu) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___loadingMenu) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___loadingBlockMenu) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___passwordMenu) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___errorMenu) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___settingsMenu) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___creditsMenu) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___micCheckMenu) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___playerCountMenu) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___SessionOptionsMenu) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___congratsMenu) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___congrats2Menu) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___splashMenu) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___nMouseObject) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___menus) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainMenuManager, ___myCamera) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MainMenuManager) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
