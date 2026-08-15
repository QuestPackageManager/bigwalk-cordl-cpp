#pragma once
// IWYU pragma private; include "GlobalNamespace/WorldMenuManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__WorldMenuManager_def.hpp"
#include "GlobalNamespace/zzzz__ArmHud_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__BadConnectionWarning_def.hpp"
#include "GlobalNamespace/zzzz__Crosshair_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectConfirmMenu_def.hpp"
#include "GlobalNamespace/zzzz__EndingTransition_def.hpp"
#include "GlobalNamespace/zzzz__KickConfirmMenu_def.hpp"
#include "GlobalNamespace/zzzz__ModerationConfirmedMenu_def.hpp"
#include "GlobalNamespace/zzzz__ModerationKickConfirmMenu_def.hpp"
#include "GlobalNamespace/zzzz__ModerationMenu_def.hpp"
#include "GlobalNamespace/zzzz__ModerationReportConfirmMenu_def.hpp"
#include "GlobalNamespace/zzzz__ModerationSilenceConfirmMenu_def.hpp"
#include "GlobalNamespace/zzzz__NmouseObject_def.hpp"
#include "GlobalNamespace/zzzz__PauseMenu_def.hpp"
#include "GlobalNamespace/zzzz__SessionMenu_def.hpp"
#include "GlobalNamespace/zzzz__SessionPasswordMenu_def.hpp"
#include "GlobalNamespace/zzzz__SettingsMenu_def.hpp"
#include "GlobalNamespace/zzzz__SignTextInput_def.hpp"
#include "GlobalNamespace/zzzz__TeachingHud_def.hpp"
#include "GlobalNamespace/zzzz__TeleportMenu_def.hpp"
#include "GlobalNamespace/zzzz__TextChatInput_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.get_pauseMenuForCurrentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PauseMenu> (::GlobalNamespace::WorldMenuManager::*)()>(&::GlobalNamespace::WorldMenuManager::get_pauseMenuForCurrentMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180445aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"get_pauseMenuForCurrentMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.get_disconnectConfirmMenuForCurrentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::DisconnectConfirmMenu> (::GlobalNamespace::WorldMenuManager::*)()>(&::GlobalNamespace::WorldMenuManager::get_disconnectConfirmMenuForCurrentMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180445a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"get_disconnectConfirmMenuForCurrentMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.get_sessionMenuForCurrentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SessionMenu> (::GlobalNamespace::WorldMenuManager::*)()>(&::GlobalNamespace::WorldMenuManager::get_sessionMenuForCurrentMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180445af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"get_sessionMenuForCurrentMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::WorldMenuManager> (*)()>(&::GlobalNamespace::WorldMenuManager::get_instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180445a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldMenuManager::*)()>(&::GlobalNamespace::WorldMenuManager::Awake)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x180444950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldMenuManager::*)()>(&::GlobalNamespace::WorldMenuManager::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180445790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.OpenMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldMenuManager::*)()>(&::GlobalNamespace::WorldMenuManager::OpenMenu)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1804451a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"OpenMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.CloseMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldMenuManager::*)()>(&::GlobalNamespace::WorldMenuManager::CloseMenu)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x180444de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"CloseMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.RefreshHidableHud
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::WorldMenuManager::RefreshHidableHud)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180445350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"RefreshHidableHud", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.SetBinocularsMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldMenuManager::SetBinocularsMask)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804454f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetBinocularsMask", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.SetTelescopeMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldMenuManager::SetTelescopeMask)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180445730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetTelescopeMask", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.SetMuteOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldMenuManager::SetMuteOverlay)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804455b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetMuteOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.SetGameChatMuteOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldMenuManager::SetGameChatMuteOverlay)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180445550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetGameChatMuteOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.SetSilencedWarningOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldMenuManager::SetSilencedWarningOverlay)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804456d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetSilencedWarningOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.SetParentalRestrictionOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldMenuManager::SetParentalRestrictionOverlay)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180445610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetParentalRestrictionOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.SetPushToTalkOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::WorldMenuManager::SetPushToTalkOverlay)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180445670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetPushToTalkOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.get_MenuLockedOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::WorldMenuManager::get_MenuLockedOpen)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1804458b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"get_MenuLockedOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.ApplyMotionOverlaySetting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::WorldMenuManager::ApplyMotionOverlaySetting)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x180444810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"ApplyMotionOverlaySetting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager.RefreshSilencedOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::WorldMenuManager::RefreshSilencedOverlay)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804453f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"RefreshSilencedOverlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WorldMenuManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WorldMenuManager::*)()>(&::GlobalNamespace::WorldMenuManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Crosshair*& GlobalNamespace::WorldMenuManager::__cordl_internal_get_crosshair()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshair;
}
constexpr ::GlobalNamespace::Crosshair* const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_crosshair() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crosshair;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_crosshair(::GlobalNamespace::Crosshair*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crosshair = value;
}
constexpr ::GlobalNamespace::ArmHud*& GlobalNamespace::WorldMenuManager::__cordl_internal_get_armHud()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armHud;
}
constexpr ::GlobalNamespace::ArmHud* const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_armHud() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armHud;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_armHud(::GlobalNamespace::ArmHud*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armHud = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_hideableHud()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideableHud;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_hideableHud() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideableHud;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_hideableHud(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideableHud = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_hiddenWhenMenuOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenWhenMenuOpen;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_hiddenWhenMenuOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hiddenWhenMenuOpen;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_hiddenWhenMenuOpen(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hiddenWhenMenuOpen = value;
}
constexpr ::UnityW<::GlobalNamespace::TeachingHud>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_teachingHud()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teachingHud;
}
constexpr ::UnityW<::GlobalNamespace::TeachingHud> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_teachingHud() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teachingHud;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_teachingHud(::UnityW<::GlobalNamespace::TeachingHud>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teachingHud = value;
}
constexpr ::UnityW<::GlobalNamespace::EndingTransition>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_endingTransition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingTransition;
}
constexpr ::UnityW<::GlobalNamespace::EndingTransition> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_endingTransition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingTransition;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_endingTransition(::UnityW<::GlobalNamespace::EndingTransition>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endingTransition = value;
}
constexpr ::UnityW<::GlobalNamespace::EndingTransition>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_secondEndingTransition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondEndingTransition;
}
constexpr ::UnityW<::GlobalNamespace::EndingTransition> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_secondEndingTransition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondEndingTransition;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_secondEndingTransition(::UnityW<::GlobalNamespace::EndingTransition>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondEndingTransition = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_endingFadeGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingFadeGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_endingFadeGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endingFadeGroup;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_endingFadeGroup(::UnityW<::UnityEngine::CanvasGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endingFadeGroup = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_dreamFadeGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamFadeGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_dreamFadeGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dreamFadeGroup;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_dreamFadeGroup(::UnityW<::UnityEngine::CanvasGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dreamFadeGroup = value;
}
constexpr ::UnityW<::GlobalNamespace::BadConnectionWarning>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_badConnectionWarning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badConnectionWarning;
}
constexpr ::UnityW<::GlobalNamespace::BadConnectionWarning> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_badConnectionWarning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badConnectionWarning;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_badConnectionWarning(::UnityW<::GlobalNamespace::BadConnectionWarning>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badConnectionWarning = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_motionOverlayCross()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionOverlayCross;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_motionOverlayCross() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionOverlayCross;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_motionOverlayCross(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motionOverlayCross = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_motionOverlayDots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionOverlayDots;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_motionOverlayDots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionOverlayDots;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_motionOverlayDots(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motionOverlayDots = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_motionOverlayFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionOverlayFrame;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_motionOverlayFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionOverlayFrame;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_motionOverlayFrame(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motionOverlayFrame = value;
}
constexpr ::UnityW<::GlobalNamespace::NmouseObject>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_nmouseObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nmouseObject;
}
constexpr ::UnityW<::GlobalNamespace::NmouseObject> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_nmouseObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nmouseObject;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_nmouseObject(::UnityW<::GlobalNamespace::NmouseObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nmouseObject = value;
}
constexpr ::UnityW<::GlobalNamespace::PauseMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pauseMenuHost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseMenuHost;
}
constexpr ::UnityW<::GlobalNamespace::PauseMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pauseMenuHost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseMenuHost;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_pauseMenuHost(::UnityW<::GlobalNamespace::PauseMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pauseMenuHost = value;
}
constexpr ::UnityW<::GlobalNamespace::PauseMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pauseMenuClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseMenuClient;
}
constexpr ::UnityW<::GlobalNamespace::PauseMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pauseMenuClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseMenuClient;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_pauseMenuClient(::UnityW<::GlobalNamespace::PauseMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pauseMenuClient = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_settingsMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsMenu;
}
constexpr ::UnityW<::GlobalNamespace::SettingsMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_settingsMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsMenu;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_settingsMenu(::UnityW<::GlobalNamespace::SettingsMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::SessionMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_sessionMenuHost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionMenuHost;
}
constexpr ::UnityW<::GlobalNamespace::SessionMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_sessionMenuHost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionMenuHost;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_sessionMenuHost(::UnityW<::GlobalNamespace::SessionMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionMenuHost = value;
}
constexpr ::UnityW<::GlobalNamespace::SessionMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_sessionMenuClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionMenuClient;
}
constexpr ::UnityW<::GlobalNamespace::SessionMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_sessionMenuClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionMenuClient;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_sessionMenuClient(::UnityW<::GlobalNamespace::SessionMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionMenuClient = value;
}
constexpr ::UnityW<::GlobalNamespace::SessionPasswordMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_sessionPasswordMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionPasswordMenu;
}
constexpr ::UnityW<::GlobalNamespace::SessionPasswordMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_sessionPasswordMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sessionPasswordMenu;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_sessionPasswordMenu(::UnityW<::GlobalNamespace::SessionPasswordMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sessionPasswordMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::KickConfirmMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_kickConfirmMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kickConfirmMenu;
}
constexpr ::UnityW<::GlobalNamespace::KickConfirmMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_kickConfirmMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kickConfirmMenu;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_kickConfirmMenu(::UnityW<::GlobalNamespace::KickConfirmMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kickConfirmMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::DisconnectConfirmMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_disconnectConfirmMenuHost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectConfirmMenuHost;
}
constexpr ::UnityW<::GlobalNamespace::DisconnectConfirmMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_disconnectConfirmMenuHost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectConfirmMenuHost;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_disconnectConfirmMenuHost(::UnityW<::GlobalNamespace::DisconnectConfirmMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disconnectConfirmMenuHost = value;
}
constexpr ::UnityW<::GlobalNamespace::DisconnectConfirmMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_disconnectConfirmMenuClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectConfirmMenuClient;
}
constexpr ::UnityW<::GlobalNamespace::DisconnectConfirmMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_disconnectConfirmMenuClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectConfirmMenuClient;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_disconnectConfirmMenuClient(::UnityW<::GlobalNamespace::DisconnectConfirmMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disconnectConfirmMenuClient = value;
}
constexpr ::UnityW<::GlobalNamespace::ModerationMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationMenu;
}
constexpr ::UnityW<::GlobalNamespace::ModerationMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationMenu;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_moderationMenu(::UnityW<::GlobalNamespace::ModerationMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moderationMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::ModerationKickConfirmMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationKickConfirmMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationKickConfirmMenu;
}
constexpr ::UnityW<::GlobalNamespace::ModerationKickConfirmMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationKickConfirmMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationKickConfirmMenu;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_moderationKickConfirmMenu(::UnityW<::GlobalNamespace::ModerationKickConfirmMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moderationKickConfirmMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationKickConfirmedMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationKickConfirmedMenu;
}
constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationKickConfirmedMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationKickConfirmedMenu;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_moderationKickConfirmedMenu(::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moderationKickConfirmedMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::ModerationSilenceConfirmMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationSilenceConfirmMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationSilenceConfirmMenu;
}
constexpr ::UnityW<::GlobalNamespace::ModerationSilenceConfirmMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationSilenceConfirmMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationSilenceConfirmMenu;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_moderationSilenceConfirmMenu(::UnityW<::GlobalNamespace::ModerationSilenceConfirmMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moderationSilenceConfirmMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationSilenceConfirmedMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationSilenceConfirmedMenu;
}
constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationSilenceConfirmedMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationSilenceConfirmedMenu;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_moderationSilenceConfirmedMenu(::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moderationSilenceConfirmedMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::ModerationReportConfirmMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationReportConfirmMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationReportConfirmMenu;
}
constexpr ::UnityW<::GlobalNamespace::ModerationReportConfirmMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationReportConfirmMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationReportConfirmMenu;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_moderationReportConfirmMenu(::UnityW<::GlobalNamespace::ModerationReportConfirmMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moderationReportConfirmMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationReportConfirmedMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationReportConfirmedMenu;
}
constexpr ::UnityW<::GlobalNamespace::ModerationConfirmedMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_moderationReportConfirmedMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moderationReportConfirmedMenu;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_moderationReportConfirmedMenu(::UnityW<::GlobalNamespace::ModerationConfirmedMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moderationReportConfirmedMenu = value;
}
constexpr ::UnityW<::GlobalNamespace::TeleportMenu>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_teleportMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportMenu;
}
constexpr ::UnityW<::GlobalNamespace::TeleportMenu> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_teleportMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teleportMenu;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_teleportMenu(::UnityW<::GlobalNamespace::TeleportMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teleportMenu = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_gameOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameOverlay;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_gameOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameOverlay;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_gameOverlay(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameOverlay = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_binocularsMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binocularsMask;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_binocularsMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___binocularsMask;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_binocularsMask(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___binocularsMask = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_telescopeMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telescopeMask;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_telescopeMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___telescopeMask;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_telescopeMask(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___telescopeMask = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_detailsOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsOverlay;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_detailsOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsOverlay;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_detailsOverlay(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailsOverlay = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pingOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingOverlay;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pingOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pingOverlay;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_pingOverlay(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pingOverlay = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_muteOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteOverlay;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_muteOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteOverlay;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_muteOverlay(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteOverlay = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_gameChatMuteOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameChatMuteOverlay;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_gameChatMuteOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameChatMuteOverlay;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_gameChatMuteOverlay(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameChatMuteOverlay = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_parentalRestrictionsOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentalRestrictionsOverlay;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_parentalRestrictionsOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentalRestrictionsOverlay;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_parentalRestrictionsOverlay(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentalRestrictionsOverlay = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pushToTalkOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushToTalkOverlay;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pushToTalkOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushToTalkOverlay;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_pushToTalkOverlay(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pushToTalkOverlay = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_silencedWarningOverlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___silencedWarningOverlay;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_silencedWarningOverlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___silencedWarningOverlay;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_silencedWarningOverlay(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___silencedWarningOverlay = value;
}
constexpr ::UnityW<::GlobalNamespace::SignTextInput>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_signTextInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signTextInput;
}
constexpr ::UnityW<::GlobalNamespace::SignTextInput> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_signTextInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___signTextInput;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_signTextInput(::UnityW<::GlobalNamespace::SignTextInput>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___signTextInput = value;
}
constexpr ::UnityW<::GlobalNamespace::TextChatInput>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_textChatInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textChatInput;
}
constexpr ::UnityW<::GlobalNamespace::TextChatInput> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_textChatInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textChatInput;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_textChatInput(::UnityW<::GlobalNamespace::TextChatInput>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textChatInput = value;
}
constexpr bool& GlobalNamespace::WorldMenuManager::__cordl_internal_get_detailsToggledOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsToggledOn;
}
constexpr bool const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_detailsToggledOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsToggledOn;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_detailsToggledOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailsToggledOn = value;
}
constexpr bool& GlobalNamespace::WorldMenuManager::__cordl_internal_get_detailsCleared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsCleared;
}
constexpr bool const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_detailsCleared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailsCleared;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_detailsCleared(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailsCleared = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pauseMenuOpenSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseMenuOpenSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pauseMenuOpenSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseMenuOpenSound;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_pauseMenuOpenSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pauseMenuOpenSound = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pauseMenuCloseSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseMenuCloseSound;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::WorldMenuManager::__cordl_internal_get_pauseMenuCloseSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseMenuCloseSound;
}
constexpr void GlobalNamespace::WorldMenuManager::__cordl_internal_set_pauseMenuCloseSound(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pauseMenuCloseSound = value;
}
inline ::UnityW<::GlobalNamespace::PauseMenu> GlobalNamespace::WorldMenuManager::get_pauseMenuForCurrentMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"get_pauseMenuForCurrentMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PauseMenu>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::DisconnectConfirmMenu> GlobalNamespace::WorldMenuManager::get_disconnectConfirmMenuForCurrentMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"get_disconnectConfirmMenuForCurrentMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::DisconnectConfirmMenu>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SessionMenu> GlobalNamespace::WorldMenuManager::get_sessionMenuForCurrentMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"get_sessionMenuForCurrentMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SessionMenu>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::WorldMenuManager> GlobalNamespace::WorldMenuManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::WorldMenuManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WorldMenuManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldMenuManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldMenuManager::OpenMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"OpenMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldMenuManager::CloseMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"CloseMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WorldMenuManager::RefreshHidableHud()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"RefreshHidableHud", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WorldMenuManager::SetBinocularsMask(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetBinocularsMask", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::WorldMenuManager::SetTelescopeMask(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetTelescopeMask", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::WorldMenuManager::SetMuteOverlay(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetMuteOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::WorldMenuManager::SetGameChatMuteOverlay(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetGameChatMuteOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::WorldMenuManager::SetSilencedWarningOverlay(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetSilencedWarningOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::WorldMenuManager::SetParentalRestrictionOverlay(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetParentalRestrictionOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline void GlobalNamespace::WorldMenuManager::SetPushToTalkOverlay(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"SetPushToTalkOverlay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline bool GlobalNamespace::WorldMenuManager::get_MenuLockedOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"get_MenuLockedOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WorldMenuManager::ApplyMotionOverlaySetting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"ApplyMotionOverlaySetting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WorldMenuManager::RefreshSilencedOverlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {"RefreshSilencedOverlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::WorldMenuManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WorldMenuManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WorldMenuManager* GlobalNamespace::WorldMenuManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WorldMenuManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WorldMenuManager::WorldMenuManager()   {
}
