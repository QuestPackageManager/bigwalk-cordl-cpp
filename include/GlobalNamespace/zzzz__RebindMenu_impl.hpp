#pragma once
// IWYU pragma private; include "GlobalNamespace/RebindMenu.hpp"
#include "GlobalNamespace/zzzz__Rebinder_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RebindMenu_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedText_def.hpp"
#include "GlobalNamespace/zzzz__RebindAction_def.hpp"
#include "GlobalNamespace/zzzz__RebindMenu_def.hpp"
#include "GlobalNamespace/zzzz__RebindRow_def.hpp"
#include "GlobalNamespace/zzzz__Rebinder_def.hpp"
#include "GlobalNamespace/zzzz__SettingsMenu_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::RebindMenu_WarningType::RebindMenu_WarningType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RebindMenu_WarningType::RebindMenu_WarningType()   {
}
constexpr ::GlobalNamespace::RebindMenu_WarningType  GlobalNamespace::RebindMenu_WarningType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RebindMenu_WarningType  GlobalNamespace::RebindMenu_WarningType::Invalid{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RebindMenu_WarningType  GlobalNamespace::RebindMenu_WarningType::NoGamepad{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18043d4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::OnDisable)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18043cc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.CreateNewRow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::RebindRow> (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::CreateNewRow)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043c200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"CreateNewRow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::Initialize)> {
  constexpr static std::size_t size = 0x9d0;
  constexpr static std::size_t addrs = 0x18043c240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.SetVerticalNavigation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::Selectable*, ::UnityEngine::UI::Selectable*, ::UnityEngine::UI::Selectable*)>(&::GlobalNamespace::RebindMenu::SetVerticalNavigation)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18043d400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"SetVerticalNavigation", {}, {::i2c::type_of<::UnityEngine::UI::Selectable*>(), ::i2c::type_of<::UnityEngine::UI::Selectable*>(), ::i2c::type_of<::UnityEngine::UI::Selectable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.ResetToDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::ResetToDefault)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18043d270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"ResetToDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.RefreshAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::RefreshAll)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18043cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"RefreshAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.RecordChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::RecordChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18043cfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"RecordChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.RefreshWarnings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::RefreshWarnings)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18043d190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"RefreshWarnings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.AreBindingsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::AreBindingsValid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18043c180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"AreBindingsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.get_IsLockedOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::get_IsLockedOpen)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18043d4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"get_IsLockedOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.ActionBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::ActionBack)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18043c140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::Save)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18043d2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"Save", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18043ced0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu.OnControlsChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::OnControlsChange)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18043cc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"OnControlsChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RebindMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RebindMenu::*)()>(&::GlobalNamespace::RebindMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RebindMenu::__cordl_internal_get_rowPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rowPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RebindMenu::__cordl_internal_get_rowPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rowPrefab;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_rowPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rowPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RebindMenu::__cordl_internal_get_rowParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rowParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RebindMenu::__cordl_internal_get_rowParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rowParent;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_rowParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rowParent = value;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable>& GlobalNamespace::RebindMenu::__cordl_internal_get_resetButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetButton;
}
constexpr ::UnityW<::UnityEngine::UI::Selectable> const& GlobalNamespace::RebindMenu::__cordl_internal_get_resetButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetButton;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_resetButton(::UnityW<::UnityEngine::UI::Selectable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetButton = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RebindAction*>*& GlobalNamespace::RebindMenu::__cordl_internal_get_actions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actions;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RebindAction*>* const& GlobalNamespace::RebindMenu::__cordl_internal_get_actions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actions;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_actions(::System::Collections::Generic::List_1<::GlobalNamespace::RebindAction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actions = value;
}
constexpr bool& GlobalNamespace::RebindMenu::__cordl_internal_get_needsToBeSaved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsToBeSaved;
}
constexpr bool const& GlobalNamespace::RebindMenu::__cordl_internal_get_needsToBeSaved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___needsToBeSaved;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_needsToBeSaved(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___needsToBeSaved = value;
}
constexpr ::GlobalNamespace::Rebinder_RebindType& GlobalNamespace::RebindMenu::__cordl_internal_get_rebindType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindType;
}
constexpr ::GlobalNamespace::Rebinder_RebindType const& GlobalNamespace::RebindMenu::__cordl_internal_get_rebindType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebindType;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_rebindType(::GlobalNamespace::Rebinder_RebindType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebindType = value;
}
constexpr ::GlobalNamespace::Rebinder_LayoutType& GlobalNamespace::RebindMenu::__cordl_internal_get_layoutType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layoutType;
}
constexpr ::GlobalNamespace::Rebinder_LayoutType const& GlobalNamespace::RebindMenu::__cordl_internal_get_layoutType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layoutType;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_layoutType(::GlobalNamespace::Rebinder_LayoutType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layoutType = value;
}
constexpr ::GlobalNamespace::Rebinder*& GlobalNamespace::RebindMenu::__cordl_internal_get_rebinder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebinder;
}
constexpr ::GlobalNamespace::Rebinder* const& GlobalNamespace::RebindMenu::__cordl_internal_get_rebinder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rebinder;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_rebinder(::GlobalNamespace::Rebinder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rebinder = value;
}
constexpr ::UnityW<::GlobalNamespace::SettingsMenu>& GlobalNamespace::RebindMenu::__cordl_internal_get_settingsMenu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsMenu;
}
constexpr ::UnityW<::GlobalNamespace::SettingsMenu> const& GlobalNamespace::RebindMenu::__cordl_internal_get_settingsMenu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsMenu;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_settingsMenu(::UnityW<::GlobalNamespace::SettingsMenu>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsMenu = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RebindMenu::__cordl_internal_get_warningArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningArea;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RebindMenu::__cordl_internal_get_warningArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningArea;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_warningArea(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningArea = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText>& GlobalNamespace::RebindMenu::__cordl_internal_get_warningText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningText;
}
constexpr ::UnityW<::GlobalNamespace::LocalizedText> const& GlobalNamespace::RebindMenu::__cordl_internal_get_warningText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___warningText;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_warningText(::UnityW<::GlobalNamespace::LocalizedText>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___warningText = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RebindMenu::__cordl_internal_get_backArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backArea;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RebindMenu::__cordl_internal_get_backArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backArea;
}
constexpr void GlobalNamespace::RebindMenu::__cordl_internal_set_backArea(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backArea = value;
}
inline void GlobalNamespace::RebindMenu::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::RebindRow> GlobalNamespace::RebindMenu::CreateNewRow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"CreateNewRow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::RebindRow>>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::SetVerticalNavigation(::UnityEngine::UI::Selectable*  selectable, ::UnityEngine::UI::Selectable*  above, ::UnityEngine::UI::Selectable*  below)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"SetVerticalNavigation", {}, {::i2c::type_of<::UnityEngine::UI::Selectable*>(), ::i2c::type_of<::UnityEngine::UI::Selectable*>(), ::i2c::type_of<::UnityEngine::UI::Selectable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, selectable, above, below);
}
inline void GlobalNamespace::RebindMenu::ResetToDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"ResetToDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::RefreshAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"RefreshAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::RecordChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"RecordChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::RefreshWarnings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"RefreshWarnings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RebindMenu::AreBindingsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"AreBindingsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::RebindMenu::get_IsLockedOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"get_IsLockedOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::ActionBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"ActionBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::Save()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"Save", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::OnControlsChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {"OnControlsChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RebindMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RebindMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RebindMenu* GlobalNamespace::RebindMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RebindMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RebindMenu::RebindMenu()   {
}
