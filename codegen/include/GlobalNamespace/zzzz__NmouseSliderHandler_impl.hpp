#pragma once
// IWYU pragma private; include "GlobalNamespace/NmouseSliderHandler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NmouseSliderHandler_def.hpp"
#include "Rewired/Components/zzzz__PlayerMouse_def.hpp"
#include "Rewired/Integration/UnityUI/zzzz__RewiredStandaloneInputModule_def.hpp"
#include "Rewired/zzzz__Player_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NmouseSliderHandler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NmouseSliderHandler::*)()>(&::GlobalNamespace::NmouseSliderHandler::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18037ef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NmouseSliderHandler.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NmouseSliderHandler::*)()>(&::GlobalNamespace::NmouseSliderHandler::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18037ef90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NmouseSliderHandler.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NmouseSliderHandler::*)()>(&::GlobalNamespace::NmouseSliderHandler::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NmouseSliderHandler.UpdateNMouseStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NmouseSliderHandler::*)()>(&::GlobalNamespace::NmouseSliderHandler::UpdateNMouseStatus)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18037f010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"UpdateNMouseStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NmouseSliderHandler.UpdateSliderValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NmouseSliderHandler::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::NmouseSliderHandler::UpdateSliderValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18037f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"UpdateSliderValue", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NmouseSliderHandler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NmouseSliderHandler::*)()>(&::GlobalNamespace::NmouseSliderHandler::OnDisable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18037ef50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NmouseSliderHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NmouseSliderHandler::*)()>(&::GlobalNamespace::NmouseSliderHandler::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18037f310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_playerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr int32_t const& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_playerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr void GlobalNamespace::NmouseSliderHandler::__cordl_internal_set_playerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerId = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_sliderRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sliderRect;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_sliderRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sliderRect;
}
constexpr void GlobalNamespace::NmouseSliderHandler::__cordl_internal_set_sliderRect(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sliderRect = value;
}
constexpr ::StringW& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_leftClickActionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftClickActionName;
}
constexpr ::StringW const& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_leftClickActionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftClickActionName;
}
constexpr void GlobalNamespace::NmouseSliderHandler::__cordl_internal_set_leftClickActionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftClickActionName = value;
}
constexpr ::UnityW<::Rewired::Components::PlayerMouse>& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_playerMouse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMouse;
}
constexpr ::UnityW<::Rewired::Components::PlayerMouse> const& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_playerMouse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMouse;
}
constexpr void GlobalNamespace::NmouseSliderHandler::__cordl_internal_set_playerMouse(::UnityW<::Rewired::Components::PlayerMouse>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerMouse = value;
}
constexpr ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_rewiredInputModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewiredInputModule;
}
constexpr ::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule> const& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_rewiredInputModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rewiredInputModule;
}
constexpr void GlobalNamespace::NmouseSliderHandler::__cordl_internal_set_rewiredInputModule(::UnityW<::Rewired::Integration::UnityUI::RewiredStandaloneInputModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rewiredInputModule = value;
}
constexpr ::UnityW<::UnityEngine::UI::Slider>& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_slider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slider;
}
constexpr ::UnityW<::UnityEngine::UI::Slider> const& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_slider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slider;
}
constexpr void GlobalNamespace::NmouseSliderHandler::__cordl_internal_set_slider(::UnityW<::UnityEngine::UI::Slider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slider = value;
}
constexpr ::Rewired::Player*& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::Rewired::Player* const& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::NmouseSliderHandler::__cordl_internal_set_player(::Rewired::Player*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr bool& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_isDragging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDragging;
}
constexpr bool const& GlobalNamespace::NmouseSliderHandler::__cordl_internal_get_isDragging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDragging;
}
constexpr void GlobalNamespace::NmouseSliderHandler::__cordl_internal_set_isDragging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDragging = value;
}
inline void GlobalNamespace::NmouseSliderHandler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NmouseSliderHandler::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NmouseSliderHandler::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NmouseSliderHandler::UpdateNMouseStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"UpdateNMouseStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NmouseSliderHandler::UpdateSliderValue(::UnityEngine::Vector2  mouseScreenPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"UpdateSliderValue", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mouseScreenPos);
}
inline void GlobalNamespace::NmouseSliderHandler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NmouseSliderHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NmouseSliderHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NmouseSliderHandler* GlobalNamespace::NmouseSliderHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NmouseSliderHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NmouseSliderHandler::NmouseSliderHandler()   {
}
