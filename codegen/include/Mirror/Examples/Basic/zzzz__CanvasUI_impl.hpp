#pragma once
// IWYU pragma private; include "Mirror/Examples/Basic/CanvasUI.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Mirror/Examples/Basic/zzzz__CanvasUI_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Basic::CanvasUI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::CanvasUI::*)()>(&::Mirror::Examples::Basic::CanvasUI::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181557960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::CanvasUI*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::CanvasUI.SetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Mirror::Examples::Basic::CanvasUI::SetActive)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1815579c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::CanvasUI*>(),
                        {"SetActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::CanvasUI.GetPlayersPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (*)()>(&::Mirror::Examples::Basic::CanvasUI::GetPlayersPanel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181557990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::CanvasUI*>(),
                        {"GetPlayersPanel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Basic::CanvasUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Basic::CanvasUI::*)()>(&::Mirror::Examples::Basic::CanvasUI::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::CanvasUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& Mirror::Examples::Basic::CanvasUI::__cordl_internal_get_mainPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainPanel;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Mirror::Examples::Basic::CanvasUI::__cordl_internal_get_mainPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainPanel;
}
constexpr void Mirror::Examples::Basic::CanvasUI::__cordl_internal_set_mainPanel(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainPanel = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Mirror::Examples::Basic::CanvasUI::__cordl_internal_get_playersPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersPanel;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Mirror::Examples::Basic::CanvasUI::__cordl_internal_get_playersPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersPanel;
}
constexpr void Mirror::Examples::Basic::CanvasUI::__cordl_internal_set_playersPanel(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersPanel = value;
}
inline void Mirror::Examples::Basic::CanvasUI::setStaticF_instance(::UnityW<::Mirror::Examples::Basic::CanvasUI>  value)  {
::cordl_internals::setStaticField<::UnityW<::Mirror::Examples::Basic::CanvasUI>, "instance", ::Mirror::Examples::Basic::CanvasUI*>(std::forward<::UnityW<::Mirror::Examples::Basic::CanvasUI>>(value));
}
inline ::UnityW<::Mirror::Examples::Basic::CanvasUI> Mirror::Examples::Basic::CanvasUI::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Mirror::Examples::Basic::CanvasUI>, "instance", ::Mirror::Examples::Basic::CanvasUI*>();
}
inline void Mirror::Examples::Basic::CanvasUI::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::CanvasUI*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Basic::CanvasUI::SetActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::CanvasUI*>(),
                        {"SetActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, active);
}
inline ::UnityW<::UnityEngine::RectTransform> Mirror::Examples::Basic::CanvasUI::GetPlayersPanel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::CanvasUI*>(),
                        {"GetPlayersPanel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(nullptr, ___internal_method);
}
inline void Mirror::Examples::Basic::CanvasUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Basic::CanvasUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Basic::CanvasUI* Mirror::Examples::Basic::CanvasUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Basic::CanvasUI*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Basic::CanvasUI::CanvasUI()   {
}
