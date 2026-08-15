#pragma once
// IWYU pragma private; include "GlobalNamespace/SplashMenu.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SplashMenu_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SplashMenu.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplashMenu::*)()>(&::GlobalNamespace::SplashMenu::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804401c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplashMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplashMenu.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplashMenu::*)()>(&::GlobalNamespace::SplashMenu::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804401e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplashMenu*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplashMenu.GoToTitleMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplashMenu::*)()>(&::GlobalNamespace::SplashMenu::GoToTitleMenu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180431150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplashMenu*>(),
                        {"GoToTitleMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplashMenu.ActionContinue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplashMenu::*)()>(&::GlobalNamespace::SplashMenu::ActionContinue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180440110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplashMenu*>(),
                        {"ActionContinue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplashMenu._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplashMenu::*)()>(&::GlobalNamespace::SplashMenu::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplashMenu*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SplashMenu::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GlobalNamespace::SplashMenu::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GlobalNamespace::SplashMenu::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SplashMenu::__cordl_internal_get_alphaCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SplashMenu::__cordl_internal_get_alphaCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alphaCurve;
}
constexpr void GlobalNamespace::SplashMenu::__cordl_internal_set_alphaCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alphaCurve = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::SplashMenu::__cordl_internal_get_fadeGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::SplashMenu::__cordl_internal_get_fadeGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeGroup;
}
constexpr void GlobalNamespace::SplashMenu::__cordl_internal_set_fadeGroup(::UnityW<::UnityEngine::CanvasGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeGroup = value;
}
constexpr float_t& GlobalNamespace::SplashMenu::__cordl_internal_get__entryTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryTime;
}
constexpr float_t const& GlobalNamespace::SplashMenu::__cordl_internal_get__entryTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____entryTime;
}
constexpr void GlobalNamespace::SplashMenu::__cordl_internal_set__entryTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____entryTime = value;
}
inline void GlobalNamespace::SplashMenu::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplashMenu*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplashMenu::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplashMenu*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplashMenu::GoToTitleMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplashMenu*>(),
                        {"GoToTitleMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplashMenu::ActionContinue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplashMenu*>(),
                        {"ActionContinue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SplashMenu::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplashMenu*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SplashMenu* GlobalNamespace::SplashMenu::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SplashMenu*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplashMenu::SplashMenu()   {
}
