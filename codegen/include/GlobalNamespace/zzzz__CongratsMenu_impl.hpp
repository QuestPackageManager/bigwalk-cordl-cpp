#pragma once
// IWYU pragma private; include "GlobalNamespace/CongratsMenu.hpp"
#include "HouseHouse/Medal/zzzz__MedalType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CongratsMenu_def.hpp"
#include "GlobalNamespace/zzzz__ManagedButton_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CongratsMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CongratsMenu::*)()>(&::GlobalNamespace::CongratsMenu::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804311c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CongratsMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CongratsMenu.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CongratsMenu::*)()>(&::GlobalNamespace::CongratsMenu::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180431210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CongratsMenu*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CongratsMenu.ActionContinue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CongratsMenu::*)()>(&::GlobalNamespace::CongratsMenu::ActionContinue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804310c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CongratsMenu*>(),
                        {"ActionContinue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CongratsMenu.GoToTitleMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CongratsMenu::*)()>(&::GlobalNamespace::CongratsMenu::GoToTitleMenu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180431150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CongratsMenu*>(),
                        {"GoToTitleMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CongratsMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CongratsMenu::*)()>(&::GlobalNamespace::CongratsMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CongratsMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CongratsMenu::__cordl_internal_get_fadeInCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::CongratsMenu::__cordl_internal_get_fadeInCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInCurve;
}
constexpr void GlobalNamespace::CongratsMenu::__cordl_internal_set_fadeInCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeInCurve = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::CongratsMenu::__cordl_internal_get_fadeGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::CongratsMenu::__cordl_internal_get_fadeGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeGroup;
}
constexpr void GlobalNamespace::CongratsMenu::__cordl_internal_set_fadeGroup(::UnityW<::UnityEngine::CanvasGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeGroup = value;
}
constexpr float_t& GlobalNamespace::CongratsMenu::__cordl_internal_get_revealButtonTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revealButtonTime;
}
constexpr float_t const& GlobalNamespace::CongratsMenu::__cordl_internal_get_revealButtonTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revealButtonTime;
}
constexpr void GlobalNamespace::CongratsMenu::__cordl_internal_set_revealButtonTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___revealButtonTime = value;
}
constexpr ::UnityW<::GlobalNamespace::ManagedButton>& GlobalNamespace::CongratsMenu::__cordl_internal_get_continueButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueButton;
}
constexpr ::UnityW<::GlobalNamespace::ManagedButton> const& GlobalNamespace::CongratsMenu::__cordl_internal_get_continueButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueButton;
}
constexpr void GlobalNamespace::CongratsMenu::__cordl_internal_set_continueButton(::UnityW<::GlobalNamespace::ManagedButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continueButton = value;
}
constexpr ::HouseHouse::Medal::MedalType& GlobalNamespace::CongratsMenu::__cordl_internal_get_medalType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___medalType;
}
constexpr ::HouseHouse::Medal::MedalType const& GlobalNamespace::CongratsMenu::__cordl_internal_get_medalType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___medalType;
}
constexpr void GlobalNamespace::CongratsMenu::__cordl_internal_set_medalType(::HouseHouse::Medal::MedalType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___medalType = value;
}
constexpr float_t& GlobalNamespace::CongratsMenu::__cordl_internal_get_menuOpenTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuOpenTime;
}
constexpr float_t const& GlobalNamespace::CongratsMenu::__cordl_internal_get_menuOpenTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuOpenTime;
}
constexpr void GlobalNamespace::CongratsMenu::__cordl_internal_set_menuOpenTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___menuOpenTime = value;
}
inline void GlobalNamespace::CongratsMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CongratsMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CongratsMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CongratsMenu*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CongratsMenu::ActionContinue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CongratsMenu*>(),
                        {"ActionContinue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CongratsMenu::GoToTitleMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CongratsMenu*>(),
                        {"GoToTitleMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CongratsMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CongratsMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CongratsMenu* GlobalNamespace::CongratsMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CongratsMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CongratsMenu::CongratsMenu()   {
}
