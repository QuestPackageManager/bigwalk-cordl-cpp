#pragma once
// IWYU pragma private; include "GlobalNamespace/MainMenuManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MainMenuManager_def.hpp"
#include "GlobalNamespace/zzzz__CongratsMenu_def.hpp"
#include "GlobalNamespace/zzzz__ConnectingMenu_def.hpp"
#include "GlobalNamespace/zzzz__CreditsMenu_def.hpp"
#include "GlobalNamespace/zzzz__ErrorMenu_def.hpp"
#include "GlobalNamespace/zzzz__ErrorUtils_def.hpp"
#include "GlobalNamespace/zzzz__HostMenuConfirm_def.hpp"
#include "GlobalNamespace/zzzz__HostMenuDeleteConfirm_def.hpp"
#include "GlobalNamespace/zzzz__HostMenuSelect_def.hpp"
#include "GlobalNamespace/zzzz__JoinMenu_def.hpp"
#include "GlobalNamespace/zzzz__LoadingBlockMenu_def.hpp"
#include "GlobalNamespace/zzzz__LoadingMenu_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuManager_def.hpp"
#include "GlobalNamespace/zzzz__MicCheckMenu_def.hpp"
#include "GlobalNamespace/zzzz__NmouseObject_def.hpp"
#include "GlobalNamespace/zzzz__PasswordMenu_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCountMenu_def.hpp"
#include "GlobalNamespace/zzzz__SessionOptionsMenu_def.hpp"
#include "GlobalNamespace/zzzz__SettingsMenu_def.hpp"
#include "GlobalNamespace/zzzz__SplashMenu_def.hpp"
#include "GlobalNamespace/zzzz__TitleMenu_def.hpp"
#include "Shipmates/Events/zzzz__ShowErrorMessageEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MainMenuManager_MainMenuEntryMode::MainMenuManager_MainMenuEntryMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainMenuManager_MainMenuEntryMode::MainMenuManager_MainMenuEntryMode()   {
}
constexpr ::GlobalNamespace::MainMenuManager_MainMenuEntryMode  GlobalNamespace::MainMenuManager_MainMenuEntryMode::MicCheck{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MainMenuManager_MainMenuEntryMode  GlobalNamespace::MainMenuManager_MainMenuEntryMode::NoScreen{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MainMenuManager_MainMenuEntryMode  GlobalNamespace::MainMenuManager_MainMenuEntryMode::CongratsMenu{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MainMenuManager_MainMenuEntryMode  GlobalNamespace::MainMenuManager_MainMenuEntryMode::Congrats2Menu{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MainMenuManager_MainMenuEntryMode  GlobalNamespace::MainMenuManager_MainMenuEntryMode::SplashScreen{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MainMenuManager> (*)()>(&::GlobalNamespace::MainMenuManager::get_instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180436c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.get_ShowErrorMessageEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Shipmates::Events::ShowErrorMessageEvent* (*)()>(&::GlobalNamespace::MainMenuManager::get_ShowErrorMessageEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180436c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"get_ShowErrorMessageEvent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.set_ShowErrorMessageEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Shipmates::Events::ShowErrorMessageEvent*)>(&::GlobalNamespace::MainMenuManager::set_ShowErrorMessageEvent)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x180436c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"set_ShowErrorMessageEvent", {}, {::i2c::type_of<::Shipmates::Events::ShowErrorMessageEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuManager::*)()>(&::GlobalNamespace::MainMenuManager::Awake)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x180435800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.ReturnMainmenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuManager::*)()>(&::GlobalNamespace::MainMenuManager::ReturnMainmenu)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180436950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"ReturnMainmenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuManager::*)()>(&::GlobalNamespace::MainMenuManager::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuManager::*)()>(&::GlobalNamespace::MainMenuManager::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.OnNmouseStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuManager::*)(bool)>(&::GlobalNamespace::MainMenuManager::OnNmouseStateChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180436790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"OnNmouseStateChange", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuManager::*)()>(&::GlobalNamespace::MainMenuManager::LateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.ClearMenus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MainMenuManager::ClearMenus)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x180435b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"ClearMenus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.ShowPasswordMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MainMenuManager::ShowPasswordMenu)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180436b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"ShowPasswordMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.ShowErrorMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::ErrorUtils_ErrorType, ::UnityEngine::GameObject*)>(&::GlobalNamespace::MainMenuManager::ShowErrorMenu)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1804369d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"ShowErrorMenu", {}, {::i2c::type_of<::GlobalNamespace::ErrorUtils_ErrorType>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.SetMusicActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::MainMenuManager::SetMusicActive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180436990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"SetMusicActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.RefreshSelectableSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuManager::*)()>(&::GlobalNamespace::MainMenuManager::RefreshSelectableSelection)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1804367a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"RefreshSelectableSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager.InitiateMenuList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuManager::*)()>(&::GlobalNamespace::MainMenuManager::InitiateMenuList)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x180436100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"InitiateMenuList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MainMenuManager::*)()>(&::GlobalNamespace::MainMenuManager::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180436bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TitleMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_titleMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleMenu;
}
constexpr ::UnityW<::GlobalNamespace::TitleMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_titleMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_titleMenu(::UnityW<::GlobalNamespace::TitleMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::HostMenuSelect>& GlobalNamespace::MainMenuManager::__cordl_internal_get_hostMenuSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostMenuSelect;
}
constexpr ::UnityW<::GlobalNamespace::HostMenuSelect> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_hostMenuSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostMenuSelect;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_hostMenuSelect(::UnityW<::GlobalNamespace::HostMenuSelect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostMenuSelect = value;
}
constexpr ::UnityW<::GlobalNamespace::HostMenuConfirm>& GlobalNamespace::MainMenuManager::__cordl_internal_get_hostMenuConfirm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostMenuConfirm;
}
constexpr ::UnityW<::GlobalNamespace::HostMenuConfirm> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_hostMenuConfirm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostMenuConfirm;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_hostMenuConfirm(::UnityW<::GlobalNamespace::HostMenuConfirm>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostMenuConfirm = value;
}
constexpr ::UnityW<::GlobalNamespace::HostMenuDeleteConfirm>& GlobalNamespace::MainMenuManager::__cordl_internal_get_hostMenuDeleteConfirm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostMenuDeleteConfirm;
}
constexpr ::UnityW<::GlobalNamespace::HostMenuDeleteConfirm> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_hostMenuDeleteConfirm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hostMenuDeleteConfirm;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_hostMenuDeleteConfirm(::UnityW<::GlobalNamespace::HostMenuDeleteConfirm>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hostMenuDeleteConfirm = value;
}
constexpr ::UnityW<::GlobalNamespace::JoinMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_joinMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinMenu;
}
constexpr ::UnityW<::GlobalNamespace::JoinMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_joinMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_joinMenu(::UnityW<::GlobalNamespace::JoinMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::ConnectingMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_connectingMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectingMenu;
}
constexpr ::UnityW<::GlobalNamespace::ConnectingMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_connectingMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectingMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_connectingMenu(::UnityW<::GlobalNamespace::ConnectingMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectingMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::LoadingMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_loadingMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingMenu;
}
constexpr ::UnityW<::GlobalNamespace::LoadingMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_loadingMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_loadingMenu(::UnityW<::GlobalNamespace::LoadingMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::LoadingBlockMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_loadingBlockMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingBlockMenu;
}
constexpr ::UnityW<::GlobalNamespace::LoadingBlockMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_loadingBlockMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loadingBlockMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_loadingBlockMenu(::UnityW<::GlobalNamespace::LoadingBlockMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loadingBlockMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::PasswordMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_passwordMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passwordMenu;
}
constexpr ::UnityW<::GlobalNamespace::PasswordMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_passwordMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passwordMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_passwordMenu(::UnityW<::GlobalNamespace::PasswordMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___passwordMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::ErrorMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_errorMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorMenu;
}
constexpr ::UnityW<::GlobalNamespace::ErrorMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_errorMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_errorMenu(::UnityW<::GlobalNamespace::ErrorMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_settingsMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsMenu;
}
constexpr ::UnityW<::GlobalNamespace::SettingsMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_settingsMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_settingsMenu(::UnityW<::GlobalNamespace::SettingsMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::CreditsMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_creditsMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creditsMenu;
}
constexpr ::UnityW<::GlobalNamespace::CreditsMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_creditsMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___creditsMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_creditsMenu(::UnityW<::GlobalNamespace::CreditsMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___creditsMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::MicCheckMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_micCheckMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micCheckMenu;
}
constexpr ::UnityW<::GlobalNamespace::MicCheckMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_micCheckMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___micCheckMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_micCheckMenu(::UnityW<::GlobalNamespace::MicCheckMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___micCheckMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCountMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_playerCountMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCountMenu;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCountMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_playerCountMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCountMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_playerCountMenu(::UnityW<::GlobalNamespace::PlayerCountMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCountMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::SessionOptionsMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_SessionOptionsMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionOptionsMenu;
}
constexpr ::UnityW<::GlobalNamespace::SessionOptionsMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_SessionOptionsMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SessionOptionsMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_SessionOptionsMenu(::UnityW<::GlobalNamespace::SessionOptionsMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SessionOptionsMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::CongratsMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_congratsMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___congratsMenu;
}
constexpr ::UnityW<::GlobalNamespace::CongratsMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_congratsMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___congratsMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_congratsMenu(::UnityW<::GlobalNamespace::CongratsMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___congratsMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::CongratsMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_congrats2Menu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___congrats2Menu;
}
constexpr ::UnityW<::GlobalNamespace::CongratsMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_congrats2Menu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___congrats2Menu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_congrats2Menu(::UnityW<::GlobalNamespace::CongratsMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___congrats2Menu = value;
}
constexpr ::UnityW<::GlobalNamespace::SplashMenu>& GlobalNamespace::MainMenuManager::__cordl_internal_get_splashMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashMenu;
}
constexpr ::UnityW<::GlobalNamespace::SplashMenu> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_splashMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splashMenu;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_splashMenu(::UnityW<::GlobalNamespace::SplashMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splashMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::NmouseObject>& GlobalNamespace::MainMenuManager::__cordl_internal_get_nMouseObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nMouseObject;
}
constexpr ::UnityW<::GlobalNamespace::NmouseObject> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_nMouseObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nMouseObject;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_nMouseObject(::UnityW<::GlobalNamespace::NmouseObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nMouseObject = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& GlobalNamespace::MainMenuManager::__cordl_internal_get_menus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menus;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& GlobalNamespace::MainMenuManager::__cordl_internal_get_menus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menus;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_menus(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___menus = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::MainMenuManager::__cordl_internal_get_myCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::MainMenuManager::__cordl_internal_get_myCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCamera;
}
constexpr void GlobalNamespace::MainMenuManager::__cordl_internal_set_myCamera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myCamera = value;
}
inline void GlobalNamespace::MainMenuManager::setStaticF_showErrorMessageEvent(::Shipmates::Events::ShowErrorMessageEvent*  value)  {
::cordl_internals::setStaticField<::Shipmates::Events::ShowErrorMessageEvent*, "showErrorMessageEvent", ::GlobalNamespace::MainMenuManager*>(std::forward<::Shipmates::Events::ShowErrorMessageEvent*>(value));
}
inline ::Shipmates::Events::ShowErrorMessageEvent* GlobalNamespace::MainMenuManager::getStaticF_showErrorMessageEvent()  {
return ::cordl_internals::getStaticField<::Shipmates::Events::ShowErrorMessageEvent*, "showErrorMessageEvent", ::GlobalNamespace::MainMenuManager*>();
}
inline void GlobalNamespace::MainMenuManager::setStaticF_entryMode(::GlobalNamespace::MainMenuManager_MainMenuEntryMode  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MainMenuManager_MainMenuEntryMode, "entryMode", ::GlobalNamespace::MainMenuManager*>(std::forward<::GlobalNamespace::MainMenuManager_MainMenuEntryMode>(value));
}
inline ::GlobalNamespace::MainMenuManager_MainMenuEntryMode GlobalNamespace::MainMenuManager::getStaticF_entryMode()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MainMenuManager_MainMenuEntryMode, "entryMode", ::GlobalNamespace::MainMenuManager*>();
}
inline ::UnityW<::GlobalNamespace::MainMenuManager> GlobalNamespace::MainMenuManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MainMenuManager>>(nullptr, ___internal_method);
}
inline ::Shipmates::Events::ShowErrorMessageEvent* GlobalNamespace::MainMenuManager::get_ShowErrorMessageEvent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"get_ShowErrorMessageEvent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Shipmates::Events::ShowErrorMessageEvent*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MainMenuManager::set_ShowErrorMessageEvent(::Shipmates::Events::ShowErrorMessageEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"set_ShowErrorMessageEvent", {}, {::i2c::type_of<::Shipmates::Events::ShowErrorMessageEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MainMenuManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuManager::ReturnMainmenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"ReturnMainmenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuManager::OnNmouseStateChange(bool  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"OnNmouseStateChange", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status);
}
inline void GlobalNamespace::MainMenuManager::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuManager::ClearMenus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"ClearMenus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MainMenuManager::ShowPasswordMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"ShowPasswordMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MainMenuManager::ShowErrorMenu(::GlobalNamespace::ErrorUtils_ErrorType  errorType, ::UnityEngine::GameObject*  returnMenu)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"ShowErrorMenu", {}, {::i2c::type_of<::GlobalNamespace::ErrorUtils_ErrorType>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorType, returnMenu);
}
inline void GlobalNamespace::MainMenuManager::SetMusicActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"SetMusicActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MainMenuManager::RefreshSelectableSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"RefreshSelectableSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuManager::InitiateMenuList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {"InitiateMenuList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MainMenuManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MainMenuManager* GlobalNamespace::MainMenuManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MainMenuManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainMenuManager::MainMenuManager()   {
}
