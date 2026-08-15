#pragma once
// IWYU pragma private; include "Rewired/IPlayerMouse.hpp"
#include "Rewired/zzzz__IPlayerMouse_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__ScreenRect_def.hpp"
#include "Rewired/zzzz__IPlayerController_def.hpp"
#include "Rewired/zzzz__PlayerController_def.hpp"
#include "Rewired/zzzz__PlayerMouse_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_defaultToCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_defaultToCenter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_movementArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::ScreenRect (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_movementArea)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.set_movementArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::IPlayerMouse::*)(::Rewired::Utils::Classes::Data::ScreenRect)>(&::Rewired::IPlayerMouse::set_movementArea)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_movementAreaUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerMouse_MovementAreaUnit (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_movementAreaUnit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.set_movementAreaUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::IPlayerMouse::*)(::Rewired::PlayerMouse_MovementAreaUnit)>(&::Rewired::IPlayerMouse::set_movementAreaUnit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_screenPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_screenPositionPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_screenPositionPrev)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_screenPositionDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_screenPositionDelta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseAxis* (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_xAxis)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseAxis* (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_yAxis)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_wheel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseWheel* (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_wheel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_leftButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Button* (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_leftButton)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_rightButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Button* (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_rightButton)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_middleButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Button* (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_middleButton)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_pointerSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_pointerSpeed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.get_useHardwarePointerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::IPlayerMouse::*)()>(&::Rewired::IPlayerMouse::get_useHardwarePointerPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.add_ScreenPositionChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::IPlayerMouse::*)(::System::Action_1<::UnityEngine::Vector2>*)>(&::Rewired::IPlayerMouse::add_ScreenPositionChangedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::IPlayerMouse.remove_ScreenPositionChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::IPlayerMouse::*)(::System::Action_1<::UnityEngine::Vector2>*)>(&::Rewired::IPlayerMouse::remove_ScreenPositionChangedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::IPlayerMouse*>(),
                    {::i2c::class_of<::Rewired::IPlayerMouse*>(), 17}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::IPlayerMouse::get_defaultToCenter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::ScreenRect Rewired::IPlayerMouse::get_movementArea()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::ScreenRect>(this, ___internal_method);
}
inline void Rewired::IPlayerMouse::set_movementArea(::Rewired::Utils::Classes::Data::ScreenRect  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::PlayerMouse_MovementAreaUnit Rewired::IPlayerMouse::get_movementAreaUnit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerMouse_MovementAreaUnit>(this, ___internal_method);
}
inline void Rewired::IPlayerMouse::set_movementAreaUnit(::Rewired::PlayerMouse_MovementAreaUnit  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Rewired::IPlayerMouse::get_screenPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::IPlayerMouse::get_screenPositionPrev()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::IPlayerMouse::get_screenPositionDelta()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseAxis* Rewired::IPlayerMouse::get_xAxis()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseAxis*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseAxis* Rewired::IPlayerMouse::get_yAxis()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseAxis*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseWheel* Rewired::IPlayerMouse::get_wheel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseWheel*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Button* Rewired::IPlayerMouse::get_leftButton()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Button*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Button* Rewired::IPlayerMouse::get_rightButton()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Button*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Button* Rewired::IPlayerMouse::get_middleButton()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Button*>(this, ___internal_method);
}
inline float_t Rewired::IPlayerMouse::get_pointerSpeed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Rewired::IPlayerMouse::get_useHardwarePointerPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::IPlayerMouse::add_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::IPlayerMouse::remove_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::IPlayerMouse*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::Rewired::IPlayerController"
constexpr  Rewired::IPlayerMouse::operator ::Rewired::IPlayerController*() noexcept {
return static_cast<::Rewired::IPlayerController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IPlayerController"
constexpr ::Rewired::IPlayerController* Rewired::IPlayerMouse::i___Rewired__IPlayerController() noexcept {
return static_cast<::Rewired::IPlayerController*>(static_cast<void*>(this));
}
