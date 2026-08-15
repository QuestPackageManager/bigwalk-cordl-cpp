#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BaseManager)
namespace GlobalNamespace {
class AudioConfig;
}
namespace GlobalNamespace {
class ControllerSorter;
}
namespace GlobalNamespace {
class ControlsManager;
}
namespace GlobalNamespace {
class CursorManager;
}
namespace GlobalNamespace {
class DevSettings;
}
namespace GlobalNamespace {
class HouseSteamManager;
}
namespace GlobalNamespace {
class LocalizationManager;
}
namespace GlobalNamespace {
class MainMenuManager;
}
namespace GlobalNamespace {
class NetworkMinder;
}
namespace GlobalNamespace {
class OccasionalsManager;
}
namespace GlobalNamespace {
class PropSharedData;
}
namespace GlobalNamespace {
class SaveManager;
}
namespace GlobalNamespace {
class SettingsWardrobe;
}
namespace Mirror {
class NetworkManager;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BaseManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseManager*, "", "BaseManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BaseManager
class CORDL_TYPE BaseManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AutoHostModeRequested, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AutoHostModeRequested, put=setStaticF_AutoHostModeRequested)) bool  AutoHostModeRequested;

/// @brief Field _networkManager, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__networkManager, put=__cordl_internal_set__networkManager)) ::UnityW<::Mirror::NetworkManager>  _networkManager;

/// @brief Field audioConfig, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioConfig, put=__cordl_internal_set_audioConfig)) ::UnityW<::GlobalNamespace::AudioConfig>  audioConfig;

/// @brief Field controllerSorter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerSorter, put=__cordl_internal_set_controllerSorter)) ::GlobalNamespace::ControllerSorter*  controllerSorter;

/// @brief Field controlsManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlsManager, put=__cordl_internal_set_controlsManager)) ::GlobalNamespace::ControlsManager*  controlsManager;

/// @brief Field cursorManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cursorManager, put=__cordl_internal_set_cursorManager)) ::GlobalNamespace::CursorManager*  cursorManager;

/// @brief Field devSettings, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_devSettings, put=__cordl_internal_set_devSettings)) ::UnityW<::GlobalNamespace::DevSettings>  devSettings;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::BaseManager>  instance;

/// @brief Field localizationManager, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_localizationManager, put=__cordl_internal_set_localizationManager)) ::GlobalNamespace::LocalizationManager*  localizationManager;

/// @brief Field logVerbose, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field mainMenuManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainMenuManager, put=__cordl_internal_set_mainMenuManager)) ::UnityW<::GlobalNamespace::MainMenuManager>  mainMenuManager;

 __declspec(property(get=get_networkManager)) ::UnityW<::Mirror::NetworkManager>  networkManager;

/// @brief Field networkManagerPrefab, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkManagerPrefab, put=__cordl_internal_set_networkManagerPrefab)) ::UnityW<::UnityEngine::GameObject>  networkManagerPrefab;

/// @brief Field networkMinder, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkMinder, put=__cordl_internal_set_networkMinder)) ::GlobalNamespace::NetworkMinder*  networkMinder;

/// @brief Field occasionalsManager, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_occasionalsManager, put=__cordl_internal_set_occasionalsManager)) ::GlobalNamespace::OccasionalsManager*  occasionalsManager;

/// @brief Field onSteamOverlayChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onSteamOverlayChanged, put=setStaticF_onSteamOverlayChanged)) ::System::Action*  onSteamOverlayChanged;

/// @brief Field propSharedData, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_propSharedData, put=__cordl_internal_set_propSharedData)) ::UnityW<::GlobalNamespace::PropSharedData>  propSharedData;

/// @brief Field saveManager, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_saveManager, put=__cordl_internal_set_saveManager)) ::GlobalNamespace::SaveManager*  saveManager;

/// @brief Field settingsWardrobe, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_settingsWardrobe, put=__cordl_internal_set_settingsWardrobe)) ::GlobalNamespace::SettingsWardrobe*  settingsWardrobe;

/// @brief Field steamManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_steamManager, put=__cordl_internal_set_steamManager)) ::GlobalNamespace::HouseSteamManager*  steamManager;

/// @brief Field steamOverlayOpen, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_steamOverlayOpen, put=setStaticF_steamOverlayOpen)) bool  steamOverlayOpen;

/// @brief Method Awake, addr 0x180409150, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BaseManager* New_ctor() ;

/// @brief Method Start, addr 0x180409270, size 0xa0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x180409310, size 0x20, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Mirror::NetworkManager> const& __cordl_internal_get__networkManager() const;

constexpr ::UnityW<::Mirror::NetworkManager>& __cordl_internal_get__networkManager() ;

constexpr ::UnityW<::GlobalNamespace::AudioConfig> const& __cordl_internal_get_audioConfig() const;

constexpr ::UnityW<::GlobalNamespace::AudioConfig>& __cordl_internal_get_audioConfig() ;

constexpr ::GlobalNamespace::ControllerSorter* const& __cordl_internal_get_controllerSorter() const;

constexpr ::GlobalNamespace::ControllerSorter*& __cordl_internal_get_controllerSorter() ;

constexpr ::GlobalNamespace::ControlsManager* const& __cordl_internal_get_controlsManager() const;

constexpr ::GlobalNamespace::ControlsManager*& __cordl_internal_get_controlsManager() ;

constexpr ::GlobalNamespace::CursorManager* const& __cordl_internal_get_cursorManager() const;

constexpr ::GlobalNamespace::CursorManager*& __cordl_internal_get_cursorManager() ;

constexpr ::UnityW<::GlobalNamespace::DevSettings> const& __cordl_internal_get_devSettings() const;

constexpr ::UnityW<::GlobalNamespace::DevSettings>& __cordl_internal_get_devSettings() ;

constexpr ::GlobalNamespace::LocalizationManager* const& __cordl_internal_get_localizationManager() const;

constexpr ::GlobalNamespace::LocalizationManager*& __cordl_internal_get_localizationManager() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::MainMenuManager> const& __cordl_internal_get_mainMenuManager() const;

constexpr ::UnityW<::GlobalNamespace::MainMenuManager>& __cordl_internal_get_mainMenuManager() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_networkManagerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_networkManagerPrefab() ;

constexpr ::GlobalNamespace::NetworkMinder* const& __cordl_internal_get_networkMinder() const;

constexpr ::GlobalNamespace::NetworkMinder*& __cordl_internal_get_networkMinder() ;

constexpr ::GlobalNamespace::OccasionalsManager* const& __cordl_internal_get_occasionalsManager() const;

constexpr ::GlobalNamespace::OccasionalsManager*& __cordl_internal_get_occasionalsManager() ;

constexpr ::UnityW<::GlobalNamespace::PropSharedData> const& __cordl_internal_get_propSharedData() const;

constexpr ::UnityW<::GlobalNamespace::PropSharedData>& __cordl_internal_get_propSharedData() ;

constexpr ::GlobalNamespace::SaveManager* const& __cordl_internal_get_saveManager() const;

constexpr ::GlobalNamespace::SaveManager*& __cordl_internal_get_saveManager() ;

constexpr ::GlobalNamespace::SettingsWardrobe* const& __cordl_internal_get_settingsWardrobe() const;

constexpr ::GlobalNamespace::SettingsWardrobe*& __cordl_internal_get_settingsWardrobe() ;

constexpr ::GlobalNamespace::HouseSteamManager* const& __cordl_internal_get_steamManager() const;

constexpr ::GlobalNamespace::HouseSteamManager*& __cordl_internal_get_steamManager() ;

constexpr void __cordl_internal_set__networkManager(::UnityW<::Mirror::NetworkManager>  value) ;

constexpr void __cordl_internal_set_audioConfig(::UnityW<::GlobalNamespace::AudioConfig>  value) ;

constexpr void __cordl_internal_set_controllerSorter(::GlobalNamespace::ControllerSorter*  value) ;

constexpr void __cordl_internal_set_controlsManager(::GlobalNamespace::ControlsManager*  value) ;

constexpr void __cordl_internal_set_cursorManager(::GlobalNamespace::CursorManager*  value) ;

constexpr void __cordl_internal_set_devSettings(::UnityW<::GlobalNamespace::DevSettings>  value) ;

constexpr void __cordl_internal_set_localizationManager(::GlobalNamespace::LocalizationManager*  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_mainMenuManager(::UnityW<::GlobalNamespace::MainMenuManager>  value) ;

constexpr void __cordl_internal_set_networkManagerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_networkMinder(::GlobalNamespace::NetworkMinder*  value) ;

constexpr void __cordl_internal_set_occasionalsManager(::GlobalNamespace::OccasionalsManager*  value) ;

constexpr void __cordl_internal_set_propSharedData(::UnityW<::GlobalNamespace::PropSharedData>  value) ;

constexpr void __cordl_internal_set_saveManager(::GlobalNamespace::SaveManager*  value) ;

constexpr void __cordl_internal_set_settingsWardrobe(::GlobalNamespace::SettingsWardrobe*  value) ;

constexpr void __cordl_internal_set_steamManager(::GlobalNamespace::HouseSteamManager*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_AutoHostModeRequested() ;

static inline ::UnityW<::GlobalNamespace::BaseManager> getStaticF_instance() ;

static inline ::System::Action* getStaticF_onSteamOverlayChanged() ;

static inline bool getStaticF_steamOverlayOpen() ;

/// @brief Method get_networkManager, addr 0x180409330, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::Mirror::NetworkManager> get_networkManager() ;

static inline void setStaticF_AutoHostModeRequested(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::BaseManager>  value) ;

static inline void setStaticF_onSteamOverlayChanged(::System::Action*  value) ;

static inline void setStaticF_steamOverlayOpen(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseManager(BaseManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseManager(BaseManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5155};

/// @brief Field cursorManager, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::CursorManager*  ___cursorManager;

/// @brief Field steamManager, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::HouseSteamManager*  ___steamManager;

/// @brief Field controlsManager, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ControlsManager*  ___controlsManager;

/// @brief Field mainMenuManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MainMenuManager>  ___mainMenuManager;

/// @brief Field localizationManager, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::LocalizationManager*  ___localizationManager;

/// @brief Field networkMinder, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::NetworkMinder*  ___networkMinder;

/// @brief Field settingsWardrobe, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::SettingsWardrobe*  ___settingsWardrobe;

/// @brief Field controllerSorter, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::ControllerSorter*  ___controllerSorter;

/// @brief Field saveManager, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::SaveManager*  ___saveManager;

/// @brief Field occasionalsManager, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::OccasionalsManager*  ___occasionalsManager;

/// @brief Field devSettings, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DevSettings>  ___devSettings;

/// @brief Field propSharedData, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropSharedData>  ___propSharedData;

/// @brief Field networkManagerPrefab, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___networkManagerPrefab;

/// @brief Field audioConfig, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioConfig>  ___audioConfig;

/// @brief Field _networkManager, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Mirror::NetworkManager>  ____networkManager;

/// @brief Field logVerbose, offset: 0x98, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseManager, ___cursorManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___steamManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___controlsManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___mainMenuManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___localizationManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___networkMinder) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___settingsWardrobe) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___controllerSorter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___saveManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___occasionalsManager) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___devSettings) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___propSharedData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___networkManagerPrefab) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___audioConfig) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ____networkManager) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseManager, ___logVerbose) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseManager) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
