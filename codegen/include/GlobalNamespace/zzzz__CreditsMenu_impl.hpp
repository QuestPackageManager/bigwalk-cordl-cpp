#pragma once
// IWYU pragma private; include "GlobalNamespace/CreditsMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CreditsMenu_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreditsMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsMenu::*)()>(&::GlobalNamespace::CreditsMenu::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180431580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsMenu.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsMenu::*)()>(&::GlobalNamespace::CreditsMenu::Update)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1804315a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsMenu*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsMenu.ActionGoToTitleMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsMenu::*)()>(&::GlobalNamespace::CreditsMenu::ActionGoToTitleMenu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180431150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsMenu*>(),
                        {"ActionGoToTitleMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreditsMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreditsMenu::*)()>(&::GlobalNamespace::CreditsMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CreditsMenu::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::CreditsMenu::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::CreditsMenu::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GlobalNamespace::CreditsMenu::__cordl_internal_get_elapsedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsedTime;
}
constexpr float_t const& GlobalNamespace::CreditsMenu::__cordl_internal_get_elapsedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elapsedTime;
}
constexpr void GlobalNamespace::CreditsMenu::__cordl_internal_set_elapsedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elapsedTime = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::CreditsMenu::__cordl_internal_get_rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::CreditsMenu::__cordl_internal_get_rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectTransform;
}
constexpr void GlobalNamespace::CreditsMenu::__cordl_internal_set_rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rectTransform = value;
}
constexpr float_t& GlobalNamespace::CreditsMenu::__cordl_internal_get_fastForwardMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastForwardMultiplier;
}
constexpr float_t const& GlobalNamespace::CreditsMenu::__cordl_internal_get_fastForwardMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastForwardMultiplier;
}
constexpr void GlobalNamespace::CreditsMenu::__cordl_internal_set_fastForwardMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastForwardMultiplier = value;
}
constexpr float_t& GlobalNamespace::CreditsMenu::__cordl_internal_get_rewindMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewindMultiplier;
}
constexpr float_t const& GlobalNamespace::CreditsMenu::__cordl_internal_get_rewindMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewindMultiplier;
}
constexpr void GlobalNamespace::CreditsMenu::__cordl_internal_set_rewindMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rewindMultiplier = value;
}
constexpr bool& GlobalNamespace::CreditsMenu::__cordl_internal_get_mouse0Cleared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouse0Cleared;
}
constexpr bool const& GlobalNamespace::CreditsMenu::__cordl_internal_get_mouse0Cleared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouse0Cleared;
}
constexpr void GlobalNamespace::CreditsMenu::__cordl_internal_set_mouse0Cleared(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mouse0Cleared = value;
}
constexpr bool& GlobalNamespace::CreditsMenu::__cordl_internal_get_mouse1Cleared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouse1Cleared;
}
constexpr bool const& GlobalNamespace::CreditsMenu::__cordl_internal_get_mouse1Cleared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mouse1Cleared;
}
constexpr void GlobalNamespace::CreditsMenu::__cordl_internal_set_mouse1Cleared(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mouse1Cleared = value;
}
inline void GlobalNamespace::CreditsMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsMenu*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsMenu::ActionGoToTitleMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsMenu*>(),
                        {"ActionGoToTitleMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CreditsMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreditsMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreditsMenu* GlobalNamespace::CreditsMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreditsMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreditsMenu::CreditsMenu()   {
}
