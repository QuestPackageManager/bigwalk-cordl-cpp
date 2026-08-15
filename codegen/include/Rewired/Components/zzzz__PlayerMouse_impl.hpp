#pragma once
// IWYU pragma private; include "Rewired/Components/PlayerMouse.hpp"
#include "Rewired/Components/zzzz__PlayerController_impl.hpp"
#include "Rewired/zzzz__PlayerMouse_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rewired/Components/zzzz__PlayerMouse_def.hpp"
#include "Rewired/Components/zzzz__PlayerController_def.hpp"
#include "Rewired/Components/zzzz__PlayerMouse_def.hpp"
#include "Rewired/UI/zzzz__IMouseInputSource_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__ScreenRect_def.hpp"
#include "Rewired/zzzz__IPlayerController_def.hpp"
#include "Rewired/zzzz__IPlayerMouse_def.hpp"
#include "Rewired/zzzz__PlayerController_def.hpp"
#include "Rewired/zzzz__PlayerMouse_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler::*)()>(&::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler::_ctor)> {
  constexpr static std::size_t size = 0x8190;
  constexpr static std::size_t addrs = 0x180da3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Components::PlayerMouse_ScreenPositionChangedHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler* Rewired::Components::PlayerMouse_ScreenPositionChangedHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler*>());
}
// Ctor Parameters []
constexpr ::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler::PlayerMouse_ScreenPositionChangedHandler()   {
}
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.wQuAHMHFhSPOjfeaaDeAMQJmXqiBA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerMouse* (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::wQuAHMHFhSPOjfeaaDeAMQJmXqiBA)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818de7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"wQuAHMHFhSPOjfeaaDeAMQJmXqiBA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_defaultToCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_defaultToCenter)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818ddf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_defaultToCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.set_defaultToCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)(bool)>(&::Rewired::Components::PlayerMouse::set_defaultToCenter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818de400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_defaultToCenter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_clampToMovementArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_clampToMovementArea)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818ddec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_clampToMovementArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.set_clampToMovementArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)(bool)>(&::Rewired::Components::PlayerMouse::set_clampToMovementArea)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818de380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_clampToMovementArea", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_movementArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::ScreenRect (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_movementArea)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818de030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_movementArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.set_movementArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)(::Rewired::Utils::Classes::Data::ScreenRect)>(&::Rewired::Components::PlayerMouse::set_movementArea)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1818de500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_movementArea", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::ScreenRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_movementAreaUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerMouse_MovementAreaUnit (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_movementAreaUnit)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818ddfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_movementAreaUnit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.set_movementAreaUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)(::Rewired::PlayerMouse_MovementAreaUnit)>(&::Rewired::Components::PlayerMouse::set_movementAreaUnit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818de480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_movementAreaUnit", {}, {::i2c::type_of<::Rewired::PlayerMouse_MovementAreaUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_screenPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818de1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_screenPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.set_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)(::UnityEngine::Vector2)>(&::Rewired::Components::PlayerMouse::set_screenPosition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818de720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_screenPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_screenPositionPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_screenPositionPrev)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818de190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_screenPositionPrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_screenPositionDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_screenPositionDelta)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818de140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_screenPositionDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseAxis* (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_xAxis)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818de2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_xAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseAxis* (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_yAxis)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818de300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_yAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_wheel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseWheel* (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_wheel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818de280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_wheel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_leftButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Button* (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_leftButton)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818ddf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_leftButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_rightButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Button* (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_rightButton)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818de100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_rightButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_middleButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Button* (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_middleButton)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818ddfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_middleButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_pointerSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_pointerSpeed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818de0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_pointerSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.set_pointerSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)(float_t)>(&::Rewired::Components::PlayerMouse::set_pointerSpeed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818de690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_pointerSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.get_useHardwarePointerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::get_useHardwarePointerPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818de230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_useHardwarePointerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.set_useHardwarePointerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)(bool)>(&::Rewired::Components::PlayerMouse::set_useHardwarePointerPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818de760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_useHardwarePointerPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.add_ScreenPositionChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)(::System::Action_1<::UnityEngine::Vector2>*)>(&::Rewired::Components::PlayerMouse::add_ScreenPositionChangedEvent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818dde80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"add_ScreenPositionChangedEvent", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.remove_ScreenPositionChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)(::System::Action_1<::UnityEngine::Vector2>*)>(&::Rewired::Components::PlayerMouse::remove_ScreenPositionChangedEvent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818de340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"remove_ScreenPositionChangedEvent", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.OnValidated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::OnValidated)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x1818dccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                    {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.OnReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::OnReset)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1818dcb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                    {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.CreateSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController* (::Rewired::Components::PlayerMouse::*)(::System::Object*)>(&::Rewired::Components::PlayerMouse::CreateSource)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x1818dc770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                    {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Deinitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::Deinitialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818dcac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                    {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::Subscribe)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1818dd450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                    {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::Unsubscribe)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1818ddc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                    {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.UUnQYdFiQCuZVltLDIYbKpiELMyh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Rewired::Components::PlayerController_ElementInfo*>* (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::UUnQYdFiQCuZVltLDIYbKpiELMyh)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x1818dd5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                    {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.LvzDApjGvExguIQPjzTBGHaIBXzV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)(::UnityEngine::Vector2)>(&::Rewired::Components::PlayerMouse::LvzDApjGvExguIQPjzTBGHaIBXzV)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818dcad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"LvzDApjGvExguIQPjzTBGHaIBXzV", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Rewired_UI_IMouseInputSource_get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_get_enabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818dd290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Rewired_UI_IMouseInputSource_GetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Components::PlayerMouse::*)(int32_t)>(&::Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_GetButtonDown)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818dd1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonDown", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Rewired_UI_IMouseInputSource_GetButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Components::PlayerMouse::*)(int32_t)>(&::Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_GetButtonUp)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818dd1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonUp", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Rewired_UI_IMouseInputSource_GetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Components::PlayerMouse::*)(int32_t)>(&::Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_GetButton)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818dd240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Rewired_UI_IMouseInputSource_get_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_get_screenPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818dd390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Rewired_UI_IMouseInputSource_get_screenPositionDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_get_screenPositionDelta)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818dd330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPositionDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Rewired_UI_IMouseInputSource_get_wheelDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_get_wheelDelta)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818dd3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_wheelDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Rewired_UI_IMouseInputSource_get_locked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_get_locked)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818dd2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_locked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818ddd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Rewired_IPlayerController_get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Components::PlayerMouse::*)()>(&::Rewired::Components::PlayerMouse::Rewired_IPlayerController_get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.IPlayerController.get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Components::PlayerMouse.Rewired_IPlayerController_set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Components::PlayerMouse::*)(bool)>(&::Rewired::Components::PlayerMouse::Rewired_IPlayerController_set_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818db9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.IPlayerController.set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Components::PlayerMouse::__cordl_internal_get__defaultToCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultToCenter;
}
constexpr bool const& Rewired::Components::PlayerMouse::__cordl_internal_get__defaultToCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultToCenter;
}
constexpr void Rewired::Components::PlayerMouse::__cordl_internal_set__defaultToCenter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultToCenter = value;
}
constexpr float_t& Rewired::Components::PlayerMouse::__cordl_internal_get__pointerSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerSpeed;
}
constexpr float_t const& Rewired::Components::PlayerMouse::__cordl_internal_get__pointerSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointerSpeed;
}
constexpr void Rewired::Components::PlayerMouse::__cordl_internal_set__pointerSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointerSpeed = value;
}
constexpr bool& Rewired::Components::PlayerMouse::__cordl_internal_get__useHardwarePointerPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHardwarePointerPosition;
}
constexpr bool const& Rewired::Components::PlayerMouse::__cordl_internal_get__useHardwarePointerPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHardwarePointerPosition;
}
constexpr void Rewired::Components::PlayerMouse::__cordl_internal_set__useHardwarePointerPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useHardwarePointerPosition = value;
}
constexpr bool& Rewired::Components::PlayerMouse::__cordl_internal_get__clampToMovementArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clampToMovementArea;
}
constexpr bool const& Rewired::Components::PlayerMouse::__cordl_internal_get__clampToMovementArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clampToMovementArea;
}
constexpr void Rewired::Components::PlayerMouse::__cordl_internal_set__clampToMovementArea(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clampToMovementArea = value;
}
constexpr ::UnityEngine::Rect& Rewired::Components::PlayerMouse::__cordl_internal_get__movementArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementArea;
}
constexpr ::UnityEngine::Rect const& Rewired::Components::PlayerMouse::__cordl_internal_get__movementArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementArea;
}
constexpr void Rewired::Components::PlayerMouse::__cordl_internal_set__movementArea(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movementArea = value;
}
constexpr ::Rewired::PlayerMouse_MovementAreaUnit& Rewired::Components::PlayerMouse::__cordl_internal_get__movementAreaUnit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementAreaUnit;
}
constexpr ::Rewired::PlayerMouse_MovementAreaUnit const& Rewired::Components::PlayerMouse::__cordl_internal_get__movementAreaUnit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementAreaUnit;
}
constexpr void Rewired::Components::PlayerMouse::__cordl_internal_set__movementAreaUnit(::Rewired::PlayerMouse_MovementAreaUnit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movementAreaUnit = value;
}
constexpr ::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler*& Rewired::Components::PlayerMouse::__cordl_internal_get__onScreenPositionChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onScreenPositionChanged;
}
constexpr ::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler* const& Rewired::Components::PlayerMouse::__cordl_internal_get__onScreenPositionChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onScreenPositionChanged;
}
constexpr void Rewired::Components::PlayerMouse::__cordl_internal_set__onScreenPositionChanged(::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onScreenPositionChanged = value;
}
inline ::Rewired::PlayerMouse* Rewired::Components::PlayerMouse::wQuAHMHFhSPOjfeaaDeAMQJmXqiBA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"wQuAHMHFhSPOjfeaaDeAMQJmXqiBA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerMouse*>(this, ___internal_method);
}
inline bool Rewired::Components::PlayerMouse::get_defaultToCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_defaultToCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::set_defaultToCenter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_defaultToCenter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Components::PlayerMouse::get_clampToMovementArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_clampToMovementArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::set_clampToMovementArea(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_clampToMovementArea", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Utils::Classes::Data::ScreenRect Rewired::Components::PlayerMouse::get_movementArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_movementArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::ScreenRect>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::set_movementArea(::Rewired::Utils::Classes::Data::ScreenRect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_movementArea", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::ScreenRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::PlayerMouse_MovementAreaUnit Rewired::Components::PlayerMouse::get_movementAreaUnit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_movementAreaUnit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerMouse_MovementAreaUnit>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::set_movementAreaUnit(::Rewired::PlayerMouse_MovementAreaUnit  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_movementAreaUnit", {}, {::i2c::type_of<::Rewired::PlayerMouse_MovementAreaUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Rewired::Components::PlayerMouse::get_screenPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_screenPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::set_screenPosition(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_screenPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Rewired::Components::PlayerMouse::get_screenPositionPrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_screenPositionPrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Components::PlayerMouse::get_screenPositionDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_screenPositionDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseAxis* Rewired::Components::PlayerMouse::get_xAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_xAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseAxis*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseAxis* Rewired::Components::PlayerMouse::get_yAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_yAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseAxis*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseWheel* Rewired::Components::PlayerMouse::get_wheel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_wheel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseWheel*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Button* Rewired::Components::PlayerMouse::get_leftButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_leftButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Button*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Button* Rewired::Components::PlayerMouse::get_rightButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_rightButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Button*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Button* Rewired::Components::PlayerMouse::get_middleButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_middleButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Button*>(this, ___internal_method);
}
inline float_t Rewired::Components::PlayerMouse::get_pointerSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_pointerSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::set_pointerSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_pointerSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::Components::PlayerMouse::get_useHardwarePointerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"get_useHardwarePointerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::set_useHardwarePointerPosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"set_useHardwarePointerPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Components::PlayerMouse::add_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"add_ScreenPositionChangedEvent", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Components::PlayerMouse::remove_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"remove_ScreenPositionChangedEvent", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::Components::PlayerMouse::OnValidated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::OnReset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::PlayerController* Rewired::Components::PlayerMouse::CreateSource(::System::Object*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController*>(this, ___internal_method, args);
}
inline void Rewired::Components::PlayerMouse::Deinitialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::Subscribe()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::Unsubscribe()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Rewired::Components::PlayerController_ElementInfo*>* Rewired::Components::PlayerMouse::UUnQYdFiQCuZVltLDIYbKpiELMyh()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Components::PlayerMouse*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Rewired::Components::PlayerController_ElementInfo*>*>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::LvzDApjGvExguIQPjzTBGHaIBXzV(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"LvzDApjGvExguIQPjzTBGHaIBXzV", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_GetButtonDown(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonDown", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_GetButtonUp(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonUp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_GetButton(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline ::UnityEngine::Vector2 Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_get_screenPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_get_screenPositionDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPositionDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_get_wheelDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_wheelDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool Rewired::Components::PlayerMouse::Rewired_UI_IMouseInputSource_get_locked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_locked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Components::PlayerMouse::Rewired_IPlayerController_get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.IPlayerController.get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Components::PlayerMouse::Rewired_IPlayerController_set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Components::PlayerMouse*>(),
                        {"Rewired.IPlayerController.set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Components::PlayerMouse* Rewired::Components::PlayerMouse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Components::PlayerMouse*>());
}
/// @brief Convert operator to "::Rewired::IPlayerMouse"
constexpr  Rewired::Components::PlayerMouse::operator ::Rewired::IPlayerMouse*() noexcept {
return static_cast<::Rewired::IPlayerMouse*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IPlayerMouse"
constexpr ::Rewired::IPlayerMouse* Rewired::Components::PlayerMouse::i___Rewired__IPlayerMouse() noexcept {
return static_cast<::Rewired::IPlayerMouse*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::IPlayerController"
constexpr  Rewired::Components::PlayerMouse::operator ::Rewired::IPlayerController*() noexcept {
return static_cast<::Rewired::IPlayerController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IPlayerController"
constexpr ::Rewired::IPlayerController* Rewired::Components::PlayerMouse::i___Rewired__IPlayerController() noexcept {
return static_cast<::Rewired::IPlayerController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::UI::IMouseInputSource"
constexpr  Rewired::Components::PlayerMouse::operator ::Rewired::UI::IMouseInputSource*() noexcept {
return static_cast<::Rewired::UI::IMouseInputSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::UI::IMouseInputSource"
constexpr ::Rewired::UI::IMouseInputSource* Rewired::Components::PlayerMouse::i___Rewired__UI__IMouseInputSource() noexcept {
return static_cast<::Rewired::UI::IMouseInputSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Components::PlayerMouse::PlayerMouse()   {
}
