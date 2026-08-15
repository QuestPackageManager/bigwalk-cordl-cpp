#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BaseManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioConfig_def.hpp"
#include "GlobalNamespace/zzzz__ControllerSorter_def.hpp"
#include "GlobalNamespace/zzzz__ControlsManager_def.hpp"
#include "GlobalNamespace/zzzz__CursorManager_def.hpp"
#include "GlobalNamespace/zzzz__DevSettings_def.hpp"
#include "GlobalNamespace/zzzz__HouseSteamManager_def.hpp"
#include "GlobalNamespace/zzzz__LocalizationManager_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuManager_def.hpp"
#include "GlobalNamespace/zzzz__NetworkMinder_def.hpp"
#include "GlobalNamespace/zzzz__OccasionalsManager_def.hpp"
#include "GlobalNamespace/zzzz__PropSharedData_def.hpp"
#include "GlobalNamespace/zzzz__SaveManager_def.hpp"
#include "GlobalNamespace/zzzz__SettingsWardrobe_def.hpp"
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseManager.get_networkManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Mirror::NetworkManager> (::GlobalNamespace::BaseManager::*)()>(&::GlobalNamespace::BaseManager::get_networkManager)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180409330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseManager*>(),
                        {"get_networkManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseManager::*)()>(&::GlobalNamespace::BaseManager::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180409150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseManager::*)()>(&::GlobalNamespace::BaseManager::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180409270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseManager::*)()>(&::GlobalNamespace::BaseManager::Update)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180409310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseManager::*)()>(&::GlobalNamespace::BaseManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CursorManager*& GlobalNamespace::BaseManager::__cordl_internal_get_cursorManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cursorManager;
}
constexpr ::GlobalNamespace::CursorManager* const& GlobalNamespace::BaseManager::__cordl_internal_get_cursorManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cursorManager;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_cursorManager(::GlobalNamespace::CursorManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cursorManager = value;
}
constexpr ::GlobalNamespace::HouseSteamManager*& GlobalNamespace::BaseManager::__cordl_internal_get_steamManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamManager;
}
constexpr ::GlobalNamespace::HouseSteamManager* const& GlobalNamespace::BaseManager::__cordl_internal_get_steamManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamManager;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_steamManager(::GlobalNamespace::HouseSteamManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steamManager = value;
}
constexpr ::GlobalNamespace::ControlsManager*& GlobalNamespace::BaseManager::__cordl_internal_get_controlsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlsManager;
}
constexpr ::GlobalNamespace::ControlsManager* const& GlobalNamespace::BaseManager::__cordl_internal_get_controlsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controlsManager;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_controlsManager(::GlobalNamespace::ControlsManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controlsManager = value;
}
constexpr ::UnityW<::GlobalNamespace::MainMenuManager>& GlobalNamespace::BaseManager::__cordl_internal_get_mainMenuManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMenuManager;
}
constexpr ::UnityW<::GlobalNamespace::MainMenuManager> const& GlobalNamespace::BaseManager::__cordl_internal_get_mainMenuManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMenuManager;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_mainMenuManager(::UnityW<::GlobalNamespace::MainMenuManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainMenuManager = value;
}
constexpr ::GlobalNamespace::LocalizationManager*& GlobalNamespace::BaseManager::__cordl_internal_get_localizationManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizationManager;
}
constexpr ::GlobalNamespace::LocalizationManager* const& GlobalNamespace::BaseManager::__cordl_internal_get_localizationManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localizationManager;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_localizationManager(::GlobalNamespace::LocalizationManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localizationManager = value;
}
constexpr ::GlobalNamespace::NetworkMinder*& GlobalNamespace::BaseManager::__cordl_internal_get_networkMinder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkMinder;
}
constexpr ::GlobalNamespace::NetworkMinder* const& GlobalNamespace::BaseManager::__cordl_internal_get_networkMinder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkMinder;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_networkMinder(::GlobalNamespace::NetworkMinder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkMinder = value;
}
constexpr ::GlobalNamespace::SettingsWardrobe*& GlobalNamespace::BaseManager::__cordl_internal_get_settingsWardrobe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsWardrobe;
}
constexpr ::GlobalNamespace::SettingsWardrobe* const& GlobalNamespace::BaseManager::__cordl_internal_get_settingsWardrobe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsWardrobe;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_settingsWardrobe(::GlobalNamespace::SettingsWardrobe*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsWardrobe = value;
}
constexpr ::GlobalNamespace::ControllerSorter*& GlobalNamespace::BaseManager::__cordl_internal_get_controllerSorter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerSorter;
}
constexpr ::GlobalNamespace::ControllerSorter* const& GlobalNamespace::BaseManager::__cordl_internal_get_controllerSorter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerSorter;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_controllerSorter(::GlobalNamespace::ControllerSorter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerSorter = value;
}
constexpr ::GlobalNamespace::SaveManager*& GlobalNamespace::BaseManager::__cordl_internal_get_saveManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveManager;
}
constexpr ::GlobalNamespace::SaveManager* const& GlobalNamespace::BaseManager::__cordl_internal_get_saveManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveManager;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_saveManager(::GlobalNamespace::SaveManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveManager = value;
}
constexpr ::GlobalNamespace::OccasionalsManager*& GlobalNamespace::BaseManager::__cordl_internal_get_occasionalsManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalsManager;
}
constexpr ::GlobalNamespace::OccasionalsManager* const& GlobalNamespace::BaseManager::__cordl_internal_get_occasionalsManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___occasionalsManager;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_occasionalsManager(::GlobalNamespace::OccasionalsManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___occasionalsManager = value;
}
constexpr ::UnityW<::GlobalNamespace::DevSettings>& GlobalNamespace::BaseManager::__cordl_internal_get_devSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devSettings;
}
constexpr ::UnityW<::GlobalNamespace::DevSettings> const& GlobalNamespace::BaseManager::__cordl_internal_get_devSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devSettings;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_devSettings(::UnityW<::GlobalNamespace::DevSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___devSettings = value;
}
constexpr ::UnityW<::GlobalNamespace::PropSharedData>& GlobalNamespace::BaseManager::__cordl_internal_get_propSharedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propSharedData;
}
constexpr ::UnityW<::GlobalNamespace::PropSharedData> const& GlobalNamespace::BaseManager::__cordl_internal_get_propSharedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propSharedData;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_propSharedData(::UnityW<::GlobalNamespace::PropSharedData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propSharedData = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BaseManager::__cordl_internal_get_networkManagerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkManagerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BaseManager::__cordl_internal_get_networkManagerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkManagerPrefab;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_networkManagerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkManagerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioConfig>& GlobalNamespace::BaseManager::__cordl_internal_get_audioConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioConfig> const& GlobalNamespace::BaseManager::__cordl_internal_get_audioConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioConfig;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_audioConfig(::UnityW<::GlobalNamespace::AudioConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioConfig = value;
}
constexpr ::UnityW<::Mirror::NetworkManager>& GlobalNamespace::BaseManager::__cordl_internal_get__networkManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkManager;
}
constexpr ::UnityW<::Mirror::NetworkManager> const& GlobalNamespace::BaseManager::__cordl_internal_get__networkManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____networkManager;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set__networkManager(::UnityW<::Mirror::NetworkManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____networkManager = value;
}
constexpr bool& GlobalNamespace::BaseManager::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::BaseManager::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::BaseManager::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
inline void GlobalNamespace::BaseManager::setStaticF_instance(::UnityW<::GlobalNamespace::BaseManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::BaseManager>, "instance", ::GlobalNamespace::BaseManager*>(std::forward<::UnityW<::GlobalNamespace::BaseManager>>(value));
}
inline ::UnityW<::GlobalNamespace::BaseManager> GlobalNamespace::BaseManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::BaseManager>, "instance", ::GlobalNamespace::BaseManager*>();
}
inline void GlobalNamespace::BaseManager::setStaticF_AutoHostModeRequested(bool  value)  {
::cordl_internals::setStaticField<bool, "AutoHostModeRequested", ::GlobalNamespace::BaseManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::BaseManager::getStaticF_AutoHostModeRequested()  {
return ::cordl_internals::getStaticField<bool, "AutoHostModeRequested", ::GlobalNamespace::BaseManager*>();
}
inline void GlobalNamespace::BaseManager::setStaticF_onSteamOverlayChanged(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onSteamOverlayChanged", ::GlobalNamespace::BaseManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::BaseManager::getStaticF_onSteamOverlayChanged()  {
return ::cordl_internals::getStaticField<::System::Action*, "onSteamOverlayChanged", ::GlobalNamespace::BaseManager*>();
}
inline void GlobalNamespace::BaseManager::setStaticF_steamOverlayOpen(bool  value)  {
::cordl_internals::setStaticField<bool, "steamOverlayOpen", ::GlobalNamespace::BaseManager*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::BaseManager::getStaticF_steamOverlayOpen()  {
return ::cordl_internals::getStaticField<bool, "steamOverlayOpen", ::GlobalNamespace::BaseManager*>();
}
inline ::UnityW<::Mirror::NetworkManager> GlobalNamespace::BaseManager::get_networkManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseManager*>(),
                        {"get_networkManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Mirror::NetworkManager>>(this, ___internal_method);
}
inline void GlobalNamespace::BaseManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseManager* GlobalNamespace::BaseManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BaseManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseManager::BaseManager()   {
}
