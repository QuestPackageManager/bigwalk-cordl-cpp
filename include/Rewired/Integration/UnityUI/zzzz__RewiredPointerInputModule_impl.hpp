#pragma once
// IWYU pragma private; include "Rewired/Integration/UnityUI/RewiredPointerInputModule.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rewired/Integration/UnityUI/zzzz__RewiredPointerInputModule_def.hpp"
#include "Rewired/Integration/UnityUI/zzzz__PlayerPointerEventData_def.hpp"
#include "Rewired/Integration/UnityUI/zzzz__PointerEventType_def.hpp"
#include "Rewired/Integration/UnityUI/zzzz__RewiredPointerInputModule_def.hpp"
#include "Rewired/UI/zzzz__IMouseInputSource_def.hpp"
#include "Rewired/UI/zzzz__ITouchInputSource_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState.AnyPressesThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::AnyPressesThisFrame)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803ab660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>(),
                        {"AnyPressesThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState.AnyReleasesThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::AnyReleasesThisFrame)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803ab6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>(),
                        {"AnyReleasesThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState.GetButtonState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState* (::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::GetButtonState)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803ab740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>(),
                        {"GetButtonState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState.SetButtonState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::*)(int32_t, ::UnityEngine::EventSystems::PointerEventData_FramePressState, ::Rewired::Integration::UnityUI::PlayerPointerEventData*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::SetButtonState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ab860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>(),
                        {"SetButtonState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_FramePressState>(), ::i2c::type_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ab8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>*& Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::__cordl_internal_get_m_TrackedButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedButtons;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>* const& Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::__cordl_internal_get_m_TrackedButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedButtons;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::__cordl_internal_set_m_TrackedButtons(::System::Collections::Generic::List_1<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackedButtons = value;
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::AnyPressesThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>(),
                        {"AnyPressesThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::AnyReleasesThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>(),
                        {"AnyReleasesThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState* Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::GetButtonState(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>(),
                        {"GetButtonState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>(this, ___internal_method, button);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::SetButtonState(int32_t  button, ::UnityEngine::EventSystems::PointerEventData_FramePressState  stateForMouseButton, ::Rewired::Integration::UnityUI::PlayerPointerEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>(),
                        {"SetButtonState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_FramePressState>(), ::i2c::type_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, stateForMouseButton, data);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState* Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>());
}
// Ctor Parameters []
constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState::RewiredPointerInputModule_MouseState()   {
}
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData.PressedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::PressedThisFrame)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803ab620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>(),
                        {"PressedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData.ReleasedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::ReleasedThisFrame)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803ab640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>(),
                        {"ReleasedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState& Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::__cordl_internal_get_buttonState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonState;
}
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState const& Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::__cordl_internal_get_buttonState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonState;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::__cordl_internal_set_buttonState(::UnityEngine::EventSystems::PointerEventData_FramePressState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonState = value;
}
constexpr ::Rewired::Integration::UnityUI::PlayerPointerEventData*& Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::__cordl_internal_get_buttonData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonData;
}
constexpr ::Rewired::Integration::UnityUI::PlayerPointerEventData* const& Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::__cordl_internal_get_buttonData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonData;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::__cordl_internal_set_buttonData(::Rewired::Integration::UnityUI::PlayerPointerEventData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonData = value;
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::PressedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>(),
                        {"PressedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::ReleasedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>(),
                        {"ReleasedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData* Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>());
}
// Ctor Parameters []
constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData::RewiredPointerInputModule_MouseButtonEventData()   {
}
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState.get_eventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData* (::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::get_eventData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>(),
                        {"get_eventData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState.set_eventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::*)(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::set_eventData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>(),
                        {"set_eventData", {}, {::i2c::type_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState.get_button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::get_button)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>(),
                        {"get_button", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState.set_button
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::set_button)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>(),
                        {"set_button", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::__cordl_internal_get_m_Button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Button;
}
constexpr int32_t const& Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::__cordl_internal_get_m_Button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Button;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::__cordl_internal_set_m_Button(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Button = value;
}
constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*& Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::__cordl_internal_get_m_EventData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EventData;
}
constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData* const& Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::__cordl_internal_get_m_EventData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EventData;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::__cordl_internal_set_m_EventData(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EventData = value;
}
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData* Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::get_eventData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>(),
                        {"get_eventData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::set_eventData(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>(),
                        {"set_eventData", {}, {::i2c::type_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::get_button()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>(),
                        {"get_button", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::set_button(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>(),
                        {"set_button", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState* Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>());
}
// Ctor Parameters []
constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState::RewiredPointerInputModule_ButtonState()   {
}
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_IMouseInputSource_get_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_playerId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803b5e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_playerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_ITouchInputSource_get_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_ITouchInputSource_get_playerId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803b5e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.ITouchInputSource.get_playerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_IMouseInputSource_get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_enabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803b5db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_IMouseInputSource_get_locked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_locked)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803b5e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_locked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_IMouseInputSource_get_buttonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_buttonCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803b5d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_buttonCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_IMouseInputSource_GetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_GetButtonDown)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803b5c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonDown", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_IMouseInputSource_GetButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_GetButtonUp)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803b5c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonUp", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_IMouseInputSource_GetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_GetButton)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803b5ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.GetButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_IMouseInputSource_get_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_screenPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803b5f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_IMouseInputSource_get_screenPositionDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_screenPositionDelta)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803b5ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPositionDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_IMouseInputSource_get_wheelDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_wheelDelta)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803b5fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_wheelDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_ITouchInputSource_get_touchSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_ITouchInputSource_get_touchSupported)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803b6160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.ITouchInputSource.get_touchSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_ITouchInputSource_get_touchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_ITouchInputSource_get_touchCount)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803b6100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.ITouchInputSource.get_touchCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.Rewired_UI_ITouchInputSource_GetTouch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Touch (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_ITouchInputSource_GetTouch)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803b6020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.ITouchInputSource.GetTouch", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.TryUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::TryUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803b61c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"TryUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource.GetCorrectedTouchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)(::UnityEngine::Vector2)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::GetCorrectedTouchPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"GetCorrectedTouchPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b6220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::__cordl_internal_get_m_MousePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MousePosition;
}
constexpr ::UnityEngine::Vector2 const& Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::__cordl_internal_get_m_MousePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MousePosition;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::__cordl_internal_set_m_MousePosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MousePosition = value;
}
constexpr ::UnityEngine::Vector2& Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::__cordl_internal_get_m_MousePositionPrev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MousePositionPrev;
}
constexpr ::UnityEngine::Vector2 const& Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::__cordl_internal_get_m_MousePositionPrev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MousePositionPrev;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::__cordl_internal_set_m_MousePositionPrev(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MousePositionPrev = value;
}
constexpr int32_t& Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::__cordl_internal_get_m_LastUpdatedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastUpdatedFrame;
}
constexpr int32_t const& Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::__cordl_internal_get_m_LastUpdatedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastUpdatedFrame;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::__cordl_internal_set_m_LastUpdatedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastUpdatedFrame = value;
}
inline int32_t Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_playerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_playerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_ITouchInputSource_get_playerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.ITouchInputSource.get_playerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_locked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_locked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_buttonCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_buttonCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_GetButtonDown(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonDown", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_GetButtonUp(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonUp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_GetButton(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.GetButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline ::UnityEngine::Vector2 Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_screenPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_screenPositionDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPositionDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_IMouseInputSource_get_wheelDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.IMouseInputSource.get_wheelDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_ITouchInputSource_get_touchSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.ITouchInputSource.get_touchSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_ITouchInputSource_get_touchCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.ITouchInputSource.get_touchCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Touch Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::Rewired_UI_ITouchInputSource_GetTouch(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"Rewired.UI.ITouchInputSource.GetTouch", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch>(this, ___internal_method, index);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::TryUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"TryUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::GetCorrectedTouchPosition(::UnityEngine::Vector2  rawTouchPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {"GetCorrectedTouchPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, rawTouchPos);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource* Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>());
}
/// @brief Convert operator to "::Rewired::UI::IMouseInputSource"
constexpr  Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::operator ::Rewired::UI::IMouseInputSource*() noexcept {
return static_cast<::Rewired::UI::IMouseInputSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::UI::IMouseInputSource"
constexpr ::Rewired::UI::IMouseInputSource* Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::i___Rewired__UI__IMouseInputSource() noexcept {
return static_cast<::Rewired::UI::IMouseInputSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::UI::ITouchInputSource"
constexpr  Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::operator ::Rewired::UI::ITouchInputSource*() noexcept {
return static_cast<::Rewired::UI::ITouchInputSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::UI::ITouchInputSource"
constexpr ::Rewired::UI::ITouchInputSource* Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::i___Rewired__UI__ITouchInputSource() noexcept {
return static_cast<::Rewired::UI::ITouchInputSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource::RewiredPointerInputModule_UnityInputSource()   {
}
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.get_defaultInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource* (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::get_defaultInputSource)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ae800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"get_defaultInputSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.get_defaultMouseInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::UI::IMouseInputSource* (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::get_defaultMouseInputSource)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ae800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"get_defaultMouseInputSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.get_defaultTouchInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::UI::ITouchInputSource* (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::get_defaultTouchInputSource)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ae800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"get_defaultTouchInputSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.IsDefaultMouse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(::Rewired::UI::IMouseInputSource*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::IsDefaultMouse)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1803ade30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"IsDefaultMouse", {}, {::i2c::type_of<::Rewired::UI::IMouseInputSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.GetMouseInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::UI::IMouseInputSource* (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t, int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetMouseInputSource)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803acbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetMouseInputSource", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.RemoveMouseInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(::Rewired::UI::IMouseInputSource*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::RemoveMouseInputSource)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803ae290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"RemoveMouseInputSource", {}, {::i2c::type_of<::Rewired::UI::IMouseInputSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.AddMouseInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(::Rewired::UI::IMouseInputSource*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::AddMouseInputSource)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1803ac430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"AddMouseInputSource", {}, {::i2c::type_of<::Rewired::UI::IMouseInputSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.GetMouseInputSourceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetMouseInputSourceCount)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803acad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetMouseInputSourceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.GetTouchInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::UI::ITouchInputSource* (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t, int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetTouchInputSource)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803adaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetTouchInputSource", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.RemoveTouchInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(::Rewired::UI::ITouchInputSource*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::RemoveTouchInputSource)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803ae350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"RemoveTouchInputSource", {}, {::i2c::type_of<::Rewired::UI::ITouchInputSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.AddTouchInputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(::Rewired::UI::ITouchInputSource*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::AddTouchInputSource)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ac4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"AddTouchInputSource", {}, {::i2c::type_of<::Rewired::UI::ITouchInputSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.GetTouchInputSourceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetTouchInputSourceCount)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803adac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetTouchInputSourceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.ClearMouseInputSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::ClearMouseInputSources)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803ac520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"ClearMouseInputSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.get_isMouseSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::get_isMouseSupported)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803ae860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.IsDefaultPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::IsDefaultPlayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.GetPointerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t, int32_t, int32_t, ::by_ref<::Rewired::Integration::UnityUI::PlayerPointerEventData*>, bool, ::Rewired::Integration::UnityUI::PointerEventType)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetPointerData)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x1803ad6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetPointerData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Rewired::Integration::UnityUI::PlayerPointerEventData*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::Integration::UnityUI::PointerEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.CreatePointerEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Integration::UnityUI::PlayerPointerEventData* (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t, int32_t, int32_t, ::Rewired::Integration::UnityUI::PointerEventType)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::CreatePointerEventData)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1803ac810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"CreatePointerEventData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Integration::UnityUI::PointerEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.RemovePointerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(::Rewired::Integration::UnityUI::PlayerPointerEventData*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::RemovePointerData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803ae2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"RemovePointerData", {}, {::i2c::type_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.GetTouchPointerEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Integration::UnityUI::PlayerPointerEventData* (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t, int32_t, ::UnityEngine::Touch, ::by_ref<bool>, ::by_ref<bool>)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetTouchPointerEventData)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1803adb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetTouchPointerEventData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Touch>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.GetMousePointerEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState* (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t, int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetMousePointerEventData)> {
  constexpr static std::size_t size = 0x9c0;
  constexpr static std::size_t addrs = 0x1803accf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.GetLastPointerEventData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Integration::UnityUI::PlayerPointerEventData* (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t, int32_t, int32_t, bool, ::Rewired::Integration::UnityUI::PointerEventType)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::GetLastPointerEventData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803ac9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetLastPointerEventData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::Integration::UnityUI::PointerEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.ShouldStartDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, bool)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::ShouldStartDrag)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803ae390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"ShouldStartDrag", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.ProcessMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(::Rewired::Integration::UnityUI::PlayerPointerEventData*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::ProcessMove)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1803ae1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.ProcessDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(::Rewired::Integration::UnityUI::PlayerPointerEventData*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::ProcessDrag)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1803adfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.IsPointerOverGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803ade90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.ClearSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::ClearSelection)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1803ac560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"ClearSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::ToString)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1803ae4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                    {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.DeselectIfSelectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::DeselectIfSelectionChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1803ac940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"DeselectIfSelectionChanged", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.CopyFromTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::EventSystems::PointerEventData*)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::CopyFromTo)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1803ac700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"CopyFromTo", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule.StateForMouseButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData_FramePressState (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)(int32_t, int32_t, int32_t)>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::StateForMouseButton)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1803ae3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"StateForMouseButton", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Integration::UnityUI::RewiredPointerInputModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Integration::UnityUI::RewiredPointerInputModule::*)()>(&::Rewired::Integration::UnityUI::RewiredPointerInputModule::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803ae720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Rewired::UI::IMouseInputSource*>*& Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_get_m_MouseInputSourcesList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseInputSourcesList;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::UI::IMouseInputSource*>* const& Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_get_m_MouseInputSourcesList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseInputSourcesList;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_set_m_MouseInputSourcesList(::System::Collections::Generic::List_1<::Rewired::UI::IMouseInputSource*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseInputSourcesList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Integration::UnityUI::PlayerPointerEventData*>*>>*& Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_get_m_PlayerPointerData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayerPointerData;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Integration::UnityUI::PlayerPointerEventData*>*>>* const& Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_get_m_PlayerPointerData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayerPointerData;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_set_m_PlayerPointerData(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Integration::UnityUI::PlayerPointerEventData*>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayerPointerData = value;
}
constexpr ::Rewired::UI::ITouchInputSource*& Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_get_m_UserDefaultTouchInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UserDefaultTouchInputSource;
}
constexpr ::Rewired::UI::ITouchInputSource* const& Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_get_m_UserDefaultTouchInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UserDefaultTouchInputSource;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_set_m_UserDefaultTouchInputSource(::Rewired::UI::ITouchInputSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UserDefaultTouchInputSource = value;
}
constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*& Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_get___m_DefaultInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____m_DefaultInputSource;
}
constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource* const& Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_get___m_DefaultInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____m_DefaultInputSource;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_set___m_DefaultInputSource(::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____m_DefaultInputSource = value;
}
constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*& Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_get_m_MouseState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseState;
}
constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState* const& Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_get_m_MouseState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseState;
}
constexpr void Rewired::Integration::UnityUI::RewiredPointerInputModule::__cordl_internal_set_m_MouseState(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseState = value;
}
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource* Rewired::Integration::UnityUI::RewiredPointerInputModule::get_defaultInputSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"get_defaultInputSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*>(this, ___internal_method);
}
inline ::Rewired::UI::IMouseInputSource* Rewired::Integration::UnityUI::RewiredPointerInputModule::get_defaultMouseInputSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"get_defaultMouseInputSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::UI::IMouseInputSource*>(this, ___internal_method);
}
inline ::Rewired::UI::ITouchInputSource* Rewired::Integration::UnityUI::RewiredPointerInputModule::get_defaultTouchInputSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"get_defaultTouchInputSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::UI::ITouchInputSource*>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule::IsDefaultMouse(::Rewired::UI::IMouseInputSource*  mouse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"IsDefaultMouse", {}, {::i2c::type_of<::Rewired::UI::IMouseInputSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mouse);
}
inline ::Rewired::UI::IMouseInputSource* Rewired::Integration::UnityUI::RewiredPointerInputModule::GetMouseInputSource(int32_t  playerId, int32_t  mouseIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetMouseInputSource", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::UI::IMouseInputSource*>(this, ___internal_method, playerId, mouseIndex);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::RemoveMouseInputSource(::Rewired::UI::IMouseInputSource*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"RemoveMouseInputSource", {}, {::i2c::type_of<::Rewired::UI::IMouseInputSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::AddMouseInputSource(::Rewired::UI::IMouseInputSource*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"AddMouseInputSource", {}, {::i2c::type_of<::Rewired::UI::IMouseInputSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline int32_t Rewired::Integration::UnityUI::RewiredPointerInputModule::GetMouseInputSourceCount(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetMouseInputSourceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId);
}
inline ::Rewired::UI::ITouchInputSource* Rewired::Integration::UnityUI::RewiredPointerInputModule::GetTouchInputSource(int32_t  playerId, int32_t  sourceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetTouchInputSource", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::UI::ITouchInputSource*>(this, ___internal_method, playerId, sourceIndex);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::RemoveTouchInputSource(::Rewired::UI::ITouchInputSource*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"RemoveTouchInputSource", {}, {::i2c::type_of<::Rewired::UI::ITouchInputSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::AddTouchInputSource(::Rewired::UI::ITouchInputSource*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"AddTouchInputSource", {}, {::i2c::type_of<::Rewired::UI::ITouchInputSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline int32_t Rewired::Integration::UnityUI::RewiredPointerInputModule::GetTouchInputSourceCount(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetTouchInputSourceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, playerId);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::ClearMouseInputSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"ClearMouseInputSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule::get_isMouseSupported()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule::IsDefaultPlayer(int32_t  playerId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule::GetPointerData(int32_t  playerId, int32_t  pointerIndex, int32_t  pointerTypeId, ::by_ref<::Rewired::Integration::UnityUI::PlayerPointerEventData*>  data, bool  create, ::Rewired::Integration::UnityUI::PointerEventType  pointerEventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetPointerData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Rewired::Integration::UnityUI::PlayerPointerEventData*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::Integration::UnityUI::PointerEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId, pointerIndex, pointerTypeId, data, create, pointerEventType);
}
inline ::Rewired::Integration::UnityUI::PlayerPointerEventData* Rewired::Integration::UnityUI::RewiredPointerInputModule::CreatePointerEventData(int32_t  playerId, int32_t  pointerIndex, int32_t  pointerTypeId, ::Rewired::Integration::UnityUI::PointerEventType  pointerEventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"CreatePointerEventData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::Integration::UnityUI::PointerEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(this, ___internal_method, playerId, pointerIndex, pointerTypeId, pointerEventType);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::RemovePointerData(::Rewired::Integration::UnityUI::PlayerPointerEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"RemovePointerData", {}, {::i2c::type_of<::Rewired::Integration::UnityUI::PlayerPointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::Rewired::Integration::UnityUI::PlayerPointerEventData* Rewired::Integration::UnityUI::RewiredPointerInputModule::GetTouchPointerEventData(int32_t  playerId, int32_t  touchDeviceIndex, ::UnityEngine::Touch  input, ::by_ref<bool>  pressed, ::by_ref<bool>  released)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetTouchPointerEventData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Touch>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(this, ___internal_method, playerId, touchDeviceIndex, input, pressed, released);
}
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState* Rewired::Integration::UnityUI::RewiredPointerInputModule::GetMousePointerEventData(int32_t  playerId, int32_t  mouseIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*>(this, ___internal_method, playerId, mouseIndex);
}
inline ::Rewired::Integration::UnityUI::PlayerPointerEventData* Rewired::Integration::UnityUI::RewiredPointerInputModule::GetLastPointerEventData(int32_t  playerId, int32_t  pointerIndex, int32_t  pointerTypeId, bool  ignorePointerTypeId, ::Rewired::Integration::UnityUI::PointerEventType  pointerEventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"GetLastPointerEventData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Rewired::Integration::UnityUI::PointerEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Integration::UnityUI::PlayerPointerEventData*>(this, ___internal_method, playerId, pointerIndex, pointerTypeId, ignorePointerTypeId, pointerEventType);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule::ShouldStartDrag(::UnityEngine::Vector2  pressPos, ::UnityEngine::Vector2  currentPos, float_t  threshold, bool  useDragThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"ShouldStartDrag", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pressPos, currentPos, threshold, useDragThreshold);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::ProcessMove(::Rewired::Integration::UnityUI::PlayerPointerEventData*  pointerEvent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::ProcessDrag(::Rewired::Integration::UnityUI::PlayerPointerEventData*  pointerEvent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent);
}
inline bool Rewired::Integration::UnityUI::RewiredPointerInputModule::IsPointerOverGameObject(int32_t  pointerTypeId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerTypeId);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::ClearSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"ClearSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Rewired::Integration::UnityUI::RewiredPointerInputModule::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::DeselectIfSelectionChanged(::UnityEngine::GameObject*  currentOverGo, ::UnityEngine::EventSystems::BaseEventData*  pointerEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"DeselectIfSelectionChanged", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentOverGo, pointerEvent);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::CopyFromTo(::UnityEngine::EventSystems::PointerEventData*  from, ::UnityEngine::EventSystems::PointerEventData*  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"CopyFromTo", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to);
}
inline ::UnityEngine::EventSystems::PointerEventData_FramePressState Rewired::Integration::UnityUI::RewiredPointerInputModule::StateForMouseButton(int32_t  playerId, int32_t  mouseIndex, int32_t  buttonId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {"StateForMouseButton", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData_FramePressState>(this, ___internal_method, playerId, mouseIndex, buttonId);
}
inline void Rewired::Integration::UnityUI::RewiredPointerInputModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule* Rewired::Integration::UnityUI::RewiredPointerInputModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Integration::UnityUI::RewiredPointerInputModule*>());
}
// Ctor Parameters []
constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule::RewiredPointerInputModule()   {
}
