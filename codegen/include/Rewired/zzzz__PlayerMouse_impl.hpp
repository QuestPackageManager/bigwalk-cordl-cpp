#pragma once
// IWYU pragma private; include "Rewired/PlayerMouse.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__ScreenRect_impl.hpp"
#include "Rewired/zzzz__PlayerController_impl.hpp"
#include "Rewired/zzzz__PlayerMouse_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rewired/zzzz__PlayerMouse_def.hpp"
#include "Rewired/UI/zzzz__IMouseInputSource_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__ScreenRect_def.hpp"
#include "Rewired/zzzz__IPlayerController_def.hpp"
#include "Rewired/zzzz__IPlayerMouse_def.hpp"
#include "Rewired/zzzz__PlayerController_def.hpp"
#include "Rewired/zzzz__PlayerMouse_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::PlayerMouse_MovementAreaUnit::PlayerMouse_MovementAreaUnit(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::PlayerMouse_MovementAreaUnit::PlayerMouse_MovementAreaUnit()   {
}
constexpr ::Rewired::PlayerMouse_MovementAreaUnit  Rewired::PlayerMouse_MovementAreaUnit::Screen{static_cast<int32_t>(0x0)};
constexpr ::Rewired::PlayerMouse_MovementAreaUnit  Rewired::PlayerMouse_MovementAreaUnit::Pixel{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::PlayerMouse_Definition._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse_Definition::*)()>(&::Rewired::PlayerMouse_Definition::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18195cbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_Definition*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::PlayerMouse_Definition::__cordl_internal_get_defaultToCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultToCenter;
}
constexpr bool const& Rewired::PlayerMouse_Definition::__cordl_internal_get_defaultToCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultToCenter;
}
constexpr void Rewired::PlayerMouse_Definition::__cordl_internal_set_defaultToCenter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultToCenter = value;
}
constexpr bool& Rewired::PlayerMouse_Definition::__cordl_internal_get_clampToMovementArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampToMovementArea;
}
constexpr bool const& Rewired::PlayerMouse_Definition::__cordl_internal_get_clampToMovementArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampToMovementArea;
}
constexpr void Rewired::PlayerMouse_Definition::__cordl_internal_set_clampToMovementArea(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clampToMovementArea = value;
}
constexpr ::Rewired::Utils::Classes::Data::ScreenRect& Rewired::PlayerMouse_Definition::__cordl_internal_get_movementArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementArea;
}
constexpr ::Rewired::Utils::Classes::Data::ScreenRect const& Rewired::PlayerMouse_Definition::__cordl_internal_get_movementArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementArea;
}
constexpr void Rewired::PlayerMouse_Definition::__cordl_internal_set_movementArea(::Rewired::Utils::Classes::Data::ScreenRect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementArea = value;
}
constexpr ::Rewired::PlayerMouse_MovementAreaUnit& Rewired::PlayerMouse_Definition::__cordl_internal_get_movementAreaUnit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementAreaUnit;
}
constexpr ::Rewired::PlayerMouse_MovementAreaUnit const& Rewired::PlayerMouse_Definition::__cordl_internal_get_movementAreaUnit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementAreaUnit;
}
constexpr void Rewired::PlayerMouse_Definition::__cordl_internal_set_movementAreaUnit(::Rewired::PlayerMouse_MovementAreaUnit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementAreaUnit = value;
}
constexpr float_t& Rewired::PlayerMouse_Definition::__cordl_internal_get_pointerSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerSpeed;
}
constexpr float_t const& Rewired::PlayerMouse_Definition::__cordl_internal_get_pointerSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointerSpeed;
}
constexpr void Rewired::PlayerMouse_Definition::__cordl_internal_set_pointerSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointerSpeed = value;
}
constexpr bool& Rewired::PlayerMouse_Definition::__cordl_internal_get_useHardwarePointerPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHardwarePointerPosition;
}
constexpr bool const& Rewired::PlayerMouse_Definition::__cordl_internal_get_useHardwarePointerPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHardwarePointerPosition;
}
constexpr void Rewired::PlayerMouse_Definition::__cordl_internal_set_useHardwarePointerPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useHardwarePointerPosition = value;
}
inline void Rewired::PlayerMouse_Definition::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_Definition*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::PlayerMouse_Definition* Rewired::PlayerMouse_Definition::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerMouse_Definition*>());
}
// Ctor Parameters []
constexpr ::Rewired::PlayerMouse_Definition::PlayerMouse_Definition()   {
}
//  Writing Method size for method: ::Rewired::PlayerMouse_Factory.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerMouse* (*)()>(&::Rewired::PlayerMouse_Factory::Create)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18195d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_Factory*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse_Factory.YMlYmmpzeHlJbofXifEJOyjKghg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerMouse* (*)(int32_t, int32_t)>(&::Rewired::PlayerMouse_Factory::YMlYmmpzeHlJbofXifEJOyjKghg)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x18195d810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_Factory*>(),
                        {"YMlYmmpzeHlJbofXifEJOyjKghg", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse_Factory.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerMouse* (*)(::Rewired::PlayerMouse_Definition*)>(&::Rewired::PlayerMouse_Factory::Create)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18195d7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_Factory*>(),
                        {"Create", {}, {::i2c::type_of<::Rewired::PlayerMouse_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::PlayerMouse* Rewired::PlayerMouse_Factory::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_Factory*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerMouse*>(nullptr, ___internal_method);
}
inline ::Rewired::PlayerMouse* Rewired::PlayerMouse_Factory::YMlYmmpzeHlJbofXifEJOyjKghg(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_Factory*>(),
                        {"YMlYmmpzeHlJbofXifEJOyjKghg", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerMouse*>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::PlayerMouse* Rewired::PlayerMouse_Factory::Create(::Rewired::PlayerMouse_Definition*  definition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_Factory*>(),
                        {"Create", {}, {::i2c::type_of<::Rewired::PlayerMouse_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerMouse*>(nullptr, ___internal_method, definition);
}
// Ctor Parameters []
constexpr ::Rewired::PlayerMouse_Factory::PlayerMouse_Factory()   {
}
//  Writing Method size for method: ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::*)()>(&::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE.hqKMmoXRSJMOzgCsJuzALWvSJTlA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::*)(::Rewired::PlayerController_Axis*)>(&::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::hqKMmoXRSJMOzgCsJuzALWvSJTlA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18196d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>(),
                        {"hqKMmoXRSJMOzgCsJuzALWvSJTlA", {}, {::i2c::type_of<::Rewired::PlayerController_Axis*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE.MPdqJcGblTNSQWrUNXIQQfstJsog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::*)(::Rewired::PlayerController_Axis*)>(&::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::MPdqJcGblTNSQWrUNXIQQfstJsog)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18196d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>(),
                        {"MPdqJcGblTNSQWrUNXIQQfstJsog", {}, {::i2c::type_of<::Rewired::PlayerController_Axis*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::setStaticF___9(::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*  value)  {
::cordl_internals::setStaticField<::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*, "<>9", ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>(std::forward<::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>(value));
}
inline ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE* Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*, "<>9", ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>();
}
inline void Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::setStaticF___9__18_0(::System::Predicate_1<::Rewired::PlayerController_Axis*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::Rewired::PlayerController_Axis*>*, "<>9__18_0", ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>(std::forward<::System::Predicate_1<::Rewired::PlayerController_Axis*>*>(value));
}
inline ::System::Predicate_1<::Rewired::PlayerController_Axis*>* Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::getStaticF___9__18_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::Rewired::PlayerController_Axis*>*, "<>9__18_0", ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>();
}
inline void Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::setStaticF___9__18_1(::System::Predicate_1<::Rewired::PlayerController_Axis*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::Rewired::PlayerController_Axis*>*, "<>9__18_1", ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>(std::forward<::System::Predicate_1<::Rewired::PlayerController_Axis*>*>(value));
}
inline ::System::Predicate_1<::Rewired::PlayerController_Axis*>* Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::getStaticF___9__18_1()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::Rewired::PlayerController_Axis*>*, "<>9__18_1", ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>();
}
inline void Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::hqKMmoXRSJMOzgCsJuzALWvSJTlA(::Rewired::PlayerController_Axis*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>(),
                        {"hqKMmoXRSJMOzgCsJuzALWvSJTlA", {}, {::i2c::type_of<::Rewired::PlayerController_Axis*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::MPdqJcGblTNSQWrUNXIQQfstJsog(::Rewired::PlayerController_Axis*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>(),
                        {"MPdqJcGblTNSQWrUNXIQQfstJsog", {}, {::i2c::type_of<::Rewired::PlayerController_Axis*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE* Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE*>());
}
// Ctor Parameters []
constexpr ::Rewired::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE::PlayerMouse_hYaEEjjjbISPnjzYFWkMeEahhmeBE()   {
}
//  Writing Method size for method: ::Rewired::PlayerMouse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)(::Rewired::PlayerMouse_Definition*)>(&::Rewired::PlayerMouse::_ctor)> {
  constexpr static std::size_t size = 0xaf0;
  constexpr static std::size_t addrs = 0x181964fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerMouse_Definition*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_defaultToCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_defaultToCenter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181965bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_defaultToCenter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.set_defaultToCenter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)(bool)>(&::Rewired::PlayerMouse::set_defaultToCenter)> {
  constexpr static std::size_t size = 0xedb0;
  constexpr static std::size_t addrs = 0x180f18e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_defaultToCenter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_clampToMovementArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_clampToMovementArea)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181965bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_clampToMovementArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.set_clampToMovementArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)(bool)>(&::Rewired::PlayerMouse::set_clampToMovementArea)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181966440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_clampToMovementArea", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_movementArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::ScreenRect (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_movementArea)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181965da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_movementArea", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.set_movementArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)(::Rewired::Utils::Classes::Data::ScreenRect)>(&::Rewired::PlayerMouse::set_movementArea)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_movementArea", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::ScreenRect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_movementAreaUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerMouse_MovementAreaUnit (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_movementAreaUnit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181965d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_movementAreaUnit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.set_movementAreaUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)(::Rewired::PlayerMouse_MovementAreaUnit)>(&::Rewired::PlayerMouse::set_movementAreaUnit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813eff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_movementAreaUnit", {}, {::i2c::type_of<::Rewired::PlayerMouse_MovementAreaUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_screenPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181966010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_screenPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.set_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)(::UnityEngine::Vector2)>(&::Rewired::PlayerMouse::set_screenPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819664c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_screenPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_screenPositionPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_screenPositionPrev)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181965f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_screenPositionPrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_screenPositionDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_screenPositionDelta)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181965f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_screenPositionDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_xAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseAxis* (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_xAxis)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181966190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_xAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_yAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseAxis* (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_yAxis)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181966250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_yAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_wheel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_MouseWheel* (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_wheel)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819660f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_wheel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_leftButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Button* (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_leftButton)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181965c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_leftButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_rightButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Button* (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_rightButton)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181965e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_rightButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_middleButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::PlayerController_Button* (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_middleButton)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181965cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_middleButton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_pointerSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_pointerSpeed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181965e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_pointerSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.set_pointerSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)(float_t)>(&::Rewired::PlayerMouse::set_pointerSpeed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181966450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_pointerSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.get_useHardwarePointerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::get_useHardwarePointerPosition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181966090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_useHardwarePointerPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.set_useHardwarePointerPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)(bool)>(&::Rewired::PlayerMouse::set_useHardwarePointerPosition)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819664d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_useHardwarePointerPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.add_ScreenPositionChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)(::System::Action_1<::UnityEngine::Vector2>*)>(&::Rewired::PlayerMouse::add_ScreenPositionChangedEvent)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181965ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"add_ScreenPositionChangedEvent", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.remove_ScreenPositionChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)(::System::Action_1<::UnityEngine::Vector2>*)>(&::Rewired::PlayerMouse::remove_ScreenPositionChangedEvent)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1819663a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"remove_ScreenPositionChangedEvent", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerMouse::*)(::Rewired::UpdateLoopType)>(&::Rewired::PlayerMouse::Update)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181964ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerMouse*>(),
                    {::i2c::class_of<::Rewired::PlayerMouse*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.UpdateFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::UpdateFinished)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181964ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerMouse*>(),
                    {::i2c::class_of<::Rewired::PlayerMouse*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.ClearVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::ClearVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1819649c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::PlayerMouse*>(),
                    {::i2c::class_of<::Rewired::PlayerMouse*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.usSWBgmLsTTcYVeLeavfZVVJePvH
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)(::UnityEngine::Vector2)>(&::Rewired::PlayerMouse::usSWBgmLsTTcYVeLeavfZVVJePvH)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x181966550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"usSWBgmLsTTcYVeLeavfZVVJePvH", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.XBFUgXdbnZCAnfHZWKaTZYOTkVTQ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::ScreenRect (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::XBFUgXdbnZCAnfHZWKaTZYOTkVTQ)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181964e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"XBFUgXdbnZCAnfHZWKaTZYOTkVTQ", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.wtmIoKYiuDJKMUcXfyNlRgLGeUht
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::wtmIoKYiuDJKMUcXfyNlRgLGeUht)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819666c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"wtmIoKYiuDJKMUcXfyNlRgLGeUht", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.pxwdQCamFsekbqEFVSHiuOWVZMCBA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Rewired::PlayerController_Axis*, float_t, float_t)>(&::Rewired::PlayerMouse::pxwdQCamFsekbqEFVSHiuOWVZMCBA)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181966310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"pxwdQCamFsekbqEFVSHiuOWVZMCBA", {}, {::i2c::type_of<::Rewired::PlayerController_Axis*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.Rewired_UI_IMouseInputSource_get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181964a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.Rewired_UI_IMouseInputSource_GetButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerMouse::*)(int32_t)>(&::Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_GetButtonDown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181964a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonDown", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.Rewired_UI_IMouseInputSource_GetButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerMouse::*)(int32_t)>(&::Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_GetButtonUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181964a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonUp", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.Rewired_UI_IMouseInputSource_GetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerMouse::*)(int32_t)>(&::Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_GetButton)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181964a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.Rewired_UI_IMouseInputSource_get_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_get_screenPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ec930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.Rewired_UI_IMouseInputSource_get_screenPositionDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_get_screenPositionDelta)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817d59c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPositionDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.Rewired_UI_IMouseInputSource_get_wheelDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_get_wheelDelta)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181964a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_wheelDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::PlayerMouse.Rewired_UI_IMouseInputSource_get_locked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::PlayerMouse::*)()>(&::Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_get_locked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_locked", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::PlayerMouse::__cordl_internal_get_kfwQkxVujEMcSrdLoFfuGkuLiZsI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kfwQkxVujEMcSrdLoFfuGkuLiZsI;
}
constexpr int32_t const& Rewired::PlayerMouse::__cordl_internal_get_kfwQkxVujEMcSrdLoFfuGkuLiZsI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kfwQkxVujEMcSrdLoFfuGkuLiZsI;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_kfwQkxVujEMcSrdLoFfuGkuLiZsI(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kfwQkxVujEMcSrdLoFfuGkuLiZsI = value;
}
constexpr int32_t& Rewired::PlayerMouse::__cordl_internal_get_RGtDwpbXCJpurOMyIhyTcBSXHZLlA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RGtDwpbXCJpurOMyIhyTcBSXHZLlA;
}
constexpr int32_t const& Rewired::PlayerMouse::__cordl_internal_get_RGtDwpbXCJpurOMyIhyTcBSXHZLlA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RGtDwpbXCJpurOMyIhyTcBSXHZLlA;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_RGtDwpbXCJpurOMyIhyTcBSXHZLlA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RGtDwpbXCJpurOMyIhyTcBSXHZLlA = value;
}
constexpr int32_t& Rewired::PlayerMouse::__cordl_internal_get_UtADntcSlutEQeJspwSueNlOewcuA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UtADntcSlutEQeJspwSueNlOewcuA;
}
constexpr int32_t const& Rewired::PlayerMouse::__cordl_internal_get_UtADntcSlutEQeJspwSueNlOewcuA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UtADntcSlutEQeJspwSueNlOewcuA;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_UtADntcSlutEQeJspwSueNlOewcuA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UtADntcSlutEQeJspwSueNlOewcuA = value;
}
constexpr int32_t& Rewired::PlayerMouse::__cordl_internal_get_ysLRpgqfCvhlHgMouauUICyvvRoAA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ysLRpgqfCvhlHgMouauUICyvvRoAA;
}
constexpr int32_t const& Rewired::PlayerMouse::__cordl_internal_get_ysLRpgqfCvhlHgMouauUICyvvRoAA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ysLRpgqfCvhlHgMouauUICyvvRoAA;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_ysLRpgqfCvhlHgMouauUICyvvRoAA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ysLRpgqfCvhlHgMouauUICyvvRoAA = value;
}
constexpr int32_t& Rewired::PlayerMouse::__cordl_internal_get_yxjZuSyqSNxSRtBDzQqBHRchvDpW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yxjZuSyqSNxSRtBDzQqBHRchvDpW;
}
constexpr int32_t const& Rewired::PlayerMouse::__cordl_internal_get_yxjZuSyqSNxSRtBDzQqBHRchvDpW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yxjZuSyqSNxSRtBDzQqBHRchvDpW;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_yxjZuSyqSNxSRtBDzQqBHRchvDpW(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yxjZuSyqSNxSRtBDzQqBHRchvDpW = value;
}
constexpr int32_t& Rewired::PlayerMouse::__cordl_internal_get_WNWuCigcveEFhMVbuapWpsEsdhFFA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WNWuCigcveEFhMVbuapWpsEsdhFFA;
}
constexpr int32_t const& Rewired::PlayerMouse::__cordl_internal_get_WNWuCigcveEFhMVbuapWpsEsdhFFA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WNWuCigcveEFhMVbuapWpsEsdhFFA;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_WNWuCigcveEFhMVbuapWpsEsdhFFA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WNWuCigcveEFhMVbuapWpsEsdhFFA = value;
}
constexpr bool& Rewired::PlayerMouse::__cordl_internal_get_bfjBTZiDUhsvlABZFwvuPwteEdoW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bfjBTZiDUhsvlABZFwvuPwteEdoW;
}
constexpr bool const& Rewired::PlayerMouse::__cordl_internal_get_bfjBTZiDUhsvlABZFwvuPwteEdoW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bfjBTZiDUhsvlABZFwvuPwteEdoW;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_bfjBTZiDUhsvlABZFwvuPwteEdoW(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bfjBTZiDUhsvlABZFwvuPwteEdoW = value;
}
constexpr ::UnityEngine::Vector2& Rewired::PlayerMouse::__cordl_internal_get_IwUoWwGWPFaAhWlbgErOIlUOMhpt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IwUoWwGWPFaAhWlbgErOIlUOMhpt;
}
constexpr ::UnityEngine::Vector2 const& Rewired::PlayerMouse::__cordl_internal_get_IwUoWwGWPFaAhWlbgErOIlUOMhpt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IwUoWwGWPFaAhWlbgErOIlUOMhpt;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_IwUoWwGWPFaAhWlbgErOIlUOMhpt(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IwUoWwGWPFaAhWlbgErOIlUOMhpt = value;
}
constexpr ::UnityEngine::Vector2& Rewired::PlayerMouse::__cordl_internal_get_JEjWEIEaJKeinxOrHZhaTdKjmwOe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JEjWEIEaJKeinxOrHZhaTdKjmwOe;
}
constexpr ::UnityEngine::Vector2 const& Rewired::PlayerMouse::__cordl_internal_get_JEjWEIEaJKeinxOrHZhaTdKjmwOe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JEjWEIEaJKeinxOrHZhaTdKjmwOe;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_JEjWEIEaJKeinxOrHZhaTdKjmwOe(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JEjWEIEaJKeinxOrHZhaTdKjmwOe = value;
}
constexpr ::UnityEngine::Vector2& Rewired::PlayerMouse::__cordl_internal_get_oNNHSgQwCsJKJsWwVGydlzjCkUXx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oNNHSgQwCsJKJsWwVGydlzjCkUXx;
}
constexpr ::UnityEngine::Vector2 const& Rewired::PlayerMouse::__cordl_internal_get_oNNHSgQwCsJKJsWwVGydlzjCkUXx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oNNHSgQwCsJKJsWwVGydlzjCkUXx;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_oNNHSgQwCsJKJsWwVGydlzjCkUXx(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oNNHSgQwCsJKJsWwVGydlzjCkUXx = value;
}
constexpr ::UnityEngine::Vector2& Rewired::PlayerMouse::__cordl_internal_get_GDhvrGIrTxtahsNpOlPaQMJktVXq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GDhvrGIrTxtahsNpOlPaQMJktVXq;
}
constexpr ::UnityEngine::Vector2 const& Rewired::PlayerMouse::__cordl_internal_get_GDhvrGIrTxtahsNpOlPaQMJktVXq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GDhvrGIrTxtahsNpOlPaQMJktVXq;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_GDhvrGIrTxtahsNpOlPaQMJktVXq(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GDhvrGIrTxtahsNpOlPaQMJktVXq = value;
}
constexpr ::UnityEngine::Vector2& Rewired::PlayerMouse::__cordl_internal_get_WzDLKslXzaSudYoCtGiApJEoqCOS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WzDLKslXzaSudYoCtGiApJEoqCOS;
}
constexpr ::UnityEngine::Vector2 const& Rewired::PlayerMouse::__cordl_internal_get_WzDLKslXzaSudYoCtGiApJEoqCOS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WzDLKslXzaSudYoCtGiApJEoqCOS;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_WzDLKslXzaSudYoCtGiApJEoqCOS(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WzDLKslXzaSudYoCtGiApJEoqCOS = value;
}
constexpr float_t& Rewired::PlayerMouse::__cordl_internal_get_aVQBIeUaXFDbXeBIcPZRdKmoiims()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aVQBIeUaXFDbXeBIcPZRdKmoiims;
}
constexpr float_t const& Rewired::PlayerMouse::__cordl_internal_get_aVQBIeUaXFDbXeBIcPZRdKmoiims() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aVQBIeUaXFDbXeBIcPZRdKmoiims;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_aVQBIeUaXFDbXeBIcPZRdKmoiims(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aVQBIeUaXFDbXeBIcPZRdKmoiims = value;
}
constexpr bool& Rewired::PlayerMouse::__cordl_internal_get_MwLtRhatJOgryIcpauGnEmbMRSUA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MwLtRhatJOgryIcpauGnEmbMRSUA;
}
constexpr bool const& Rewired::PlayerMouse::__cordl_internal_get_MwLtRhatJOgryIcpauGnEmbMRSUA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MwLtRhatJOgryIcpauGnEmbMRSUA;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_MwLtRhatJOgryIcpauGnEmbMRSUA(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MwLtRhatJOgryIcpauGnEmbMRSUA = value;
}
constexpr ::System::Action_1<::UnityEngine::Vector2>*& Rewired::PlayerMouse::__cordl_internal_get_WCZnSRjScOBFfTcJeTjOJCPWDEUK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WCZnSRjScOBFfTcJeTjOJCPWDEUK;
}
constexpr ::System::Action_1<::UnityEngine::Vector2>* const& Rewired::PlayerMouse::__cordl_internal_get_WCZnSRjScOBFfTcJeTjOJCPWDEUK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WCZnSRjScOBFfTcJeTjOJCPWDEUK;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_WCZnSRjScOBFfTcJeTjOJCPWDEUK(::System::Action_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WCZnSRjScOBFfTcJeTjOJCPWDEUK = value;
}
constexpr bool& Rewired::PlayerMouse::__cordl_internal_get_eOGVnDZwdcJbZfwxyqLyLrskaMsb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eOGVnDZwdcJbZfwxyqLyLrskaMsb;
}
constexpr bool const& Rewired::PlayerMouse::__cordl_internal_get_eOGVnDZwdcJbZfwxyqLyLrskaMsb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eOGVnDZwdcJbZfwxyqLyLrskaMsb;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_eOGVnDZwdcJbZfwxyqLyLrskaMsb(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eOGVnDZwdcJbZfwxyqLyLrskaMsb = value;
}
constexpr ::Rewired::Utils::Classes::Data::ScreenRect& Rewired::PlayerMouse::__cordl_internal_get_HVvcpEeyGHaRmKsFuLLsazjuhIDC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HVvcpEeyGHaRmKsFuLLsazjuhIDC;
}
constexpr ::Rewired::Utils::Classes::Data::ScreenRect const& Rewired::PlayerMouse::__cordl_internal_get_HVvcpEeyGHaRmKsFuLLsazjuhIDC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HVvcpEeyGHaRmKsFuLLsazjuhIDC;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_HVvcpEeyGHaRmKsFuLLsazjuhIDC(::Rewired::Utils::Classes::Data::ScreenRect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HVvcpEeyGHaRmKsFuLLsazjuhIDC = value;
}
constexpr bool& Rewired::PlayerMouse::__cordl_internal_get_eIvqTNHEPxNQOvsNMXVCbdcUNcrJ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eIvqTNHEPxNQOvsNMXVCbdcUNcrJ;
}
constexpr bool const& Rewired::PlayerMouse::__cordl_internal_get_eIvqTNHEPxNQOvsNMXVCbdcUNcrJ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eIvqTNHEPxNQOvsNMXVCbdcUNcrJ;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_eIvqTNHEPxNQOvsNMXVCbdcUNcrJ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eIvqTNHEPxNQOvsNMXVCbdcUNcrJ = value;
}
constexpr ::Rewired::PlayerMouse_MovementAreaUnit& Rewired::PlayerMouse::__cordl_internal_get_yRDWiHVTdvachRcJFiebiUFQGdSCA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yRDWiHVTdvachRcJFiebiUFQGdSCA;
}
constexpr ::Rewired::PlayerMouse_MovementAreaUnit const& Rewired::PlayerMouse::__cordl_internal_get_yRDWiHVTdvachRcJFiebiUFQGdSCA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yRDWiHVTdvachRcJFiebiUFQGdSCA;
}
constexpr void Rewired::PlayerMouse::__cordl_internal_set_yRDWiHVTdvachRcJFiebiUFQGdSCA(::Rewired::PlayerMouse_MovementAreaUnit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yRDWiHVTdvachRcJFiebiUFQGdSCA = value;
}
inline void Rewired::PlayerMouse::setStaticF_ZrlsCvFKbthBoBDkhkkOYYxhuMuo(::Rewired::Utils::Classes::Data::ScreenRect  value)  {
::cordl_internals::setStaticField<::Rewired::Utils::Classes::Data::ScreenRect, "ZrlsCvFKbthBoBDkhkkOYYxhuMuo", ::Rewired::PlayerMouse*>(std::forward<::Rewired::Utils::Classes::Data::ScreenRect>(value));
}
inline ::Rewired::Utils::Classes::Data::ScreenRect Rewired::PlayerMouse::getStaticF_ZrlsCvFKbthBoBDkhkkOYYxhuMuo()  {
return ::cordl_internals::getStaticField<::Rewired::Utils::Classes::Data::ScreenRect, "ZrlsCvFKbthBoBDkhkkOYYxhuMuo", ::Rewired::PlayerMouse*>();
}
inline void Rewired::PlayerMouse::_ctor(::Rewired::PlayerMouse_Definition*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::PlayerMouse_Definition*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::PlayerMouse::get_defaultToCenter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_defaultToCenter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::PlayerMouse::set_defaultToCenter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_defaultToCenter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::PlayerMouse::get_clampToMovementArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_clampToMovementArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::PlayerMouse::set_clampToMovementArea(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_clampToMovementArea", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::Utils::Classes::Data::ScreenRect Rewired::PlayerMouse::get_movementArea()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_movementArea", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::ScreenRect>(this, ___internal_method);
}
inline void Rewired::PlayerMouse::set_movementArea(::Rewired::Utils::Classes::Data::ScreenRect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_movementArea", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::ScreenRect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::PlayerMouse_MovementAreaUnit Rewired::PlayerMouse::get_movementAreaUnit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_movementAreaUnit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerMouse_MovementAreaUnit>(this, ___internal_method);
}
inline void Rewired::PlayerMouse::set_movementAreaUnit(::Rewired::PlayerMouse_MovementAreaUnit  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_movementAreaUnit", {}, {::i2c::type_of<::Rewired::PlayerMouse_MovementAreaUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Rewired::PlayerMouse::get_screenPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_screenPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Rewired::PlayerMouse::set_screenPosition(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_screenPosition", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Rewired::PlayerMouse::get_screenPositionPrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_screenPositionPrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::PlayerMouse::get_screenPositionDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_screenPositionDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseAxis* Rewired::PlayerMouse::get_xAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_xAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseAxis*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseAxis* Rewired::PlayerMouse::get_yAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_yAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseAxis*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_MouseWheel* Rewired::PlayerMouse::get_wheel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_wheel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_MouseWheel*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Button* Rewired::PlayerMouse::get_leftButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_leftButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Button*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Button* Rewired::PlayerMouse::get_rightButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_rightButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Button*>(this, ___internal_method);
}
inline ::Rewired::PlayerController_Button* Rewired::PlayerMouse::get_middleButton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_middleButton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::PlayerController_Button*>(this, ___internal_method);
}
inline float_t Rewired::PlayerMouse::get_pointerSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_pointerSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::PlayerMouse::set_pointerSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_pointerSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::PlayerMouse::get_useHardwarePointerPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"get_useHardwarePointerPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::PlayerMouse::set_useHardwarePointerPosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"set_useHardwarePointerPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlayerMouse::add_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"add_ScreenPositionChangedEvent", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::PlayerMouse::remove_ScreenPositionChangedEvent(::System::Action_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"remove_ScreenPositionChangedEvent", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::PlayerMouse::Update(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerMouse*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, updateLoop);
}
inline void Rewired::PlayerMouse::UpdateFinished()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerMouse*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::PlayerMouse::ClearVars()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::PlayerMouse*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::PlayerMouse::usSWBgmLsTTcYVeLeavfZVVJePvH(::UnityEngine::Vector2  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"usSWBgmLsTTcYVeLeavfZVVJePvH", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Utils::Classes::Data::ScreenRect Rewired::PlayerMouse::XBFUgXdbnZCAnfHZWKaTZYOTkVTQ()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"XBFUgXdbnZCAnfHZWKaTZYOTkVTQ", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::ScreenRect>(this, ___internal_method);
}
inline void Rewired::PlayerMouse::wtmIoKYiuDJKMUcXfyNlRgLGeUht()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"wtmIoKYiuDJKMUcXfyNlRgLGeUht", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Rewired::PlayerMouse::pxwdQCamFsekbqEFVSHiuOWVZMCBA(::Rewired::PlayerController_Axis*  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"pxwdQCamFsekbqEFVSHiuOWVZMCBA", {}, {::i2c::type_of<::Rewired::PlayerController_Axis*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline bool Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_GetButtonDown(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonDown", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_GetButtonUp(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButtonUp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline bool Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_GetButton(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.GetButton", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button);
}
inline ::UnityEngine::Vector2 Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_get_screenPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_get_screenPositionDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_screenPositionDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_get_wheelDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_wheelDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool Rewired::PlayerMouse::Rewired_UI_IMouseInputSource_get_locked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::PlayerMouse*>(),
                        {"Rewired.UI.IMouseInputSource.get_locked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::PlayerMouse* Rewired::PlayerMouse::New_ctor(::Rewired::PlayerMouse_Definition*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::PlayerMouse*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::IPlayerMouse"
constexpr  Rewired::PlayerMouse::operator ::Rewired::IPlayerMouse*() noexcept {
return static_cast<::Rewired::IPlayerMouse*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IPlayerMouse"
constexpr ::Rewired::IPlayerMouse* Rewired::PlayerMouse::i___Rewired__IPlayerMouse() noexcept {
return static_cast<::Rewired::IPlayerMouse*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::IPlayerController"
constexpr  Rewired::PlayerMouse::operator ::Rewired::IPlayerController*() noexcept {
return static_cast<::Rewired::IPlayerController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::IPlayerController"
constexpr ::Rewired::IPlayerController* Rewired::PlayerMouse::i___Rewired__IPlayerController() noexcept {
return static_cast<::Rewired::IPlayerController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::UI::IMouseInputSource"
constexpr  Rewired::PlayerMouse::operator ::Rewired::UI::IMouseInputSource*() noexcept {
return static_cast<::Rewired::UI::IMouseInputSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::UI::IMouseInputSource"
constexpr ::Rewired::UI::IMouseInputSource* Rewired::PlayerMouse::i___Rewired__UI__IMouseInputSource() noexcept {
return static_cast<::Rewired::UI::IMouseInputSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::PlayerMouse::PlayerMouse()   {
}
constexpr ::Rewired::PlayerMouse_MovementAreaUnit  Rewired::PlayerMouse::TRfyQWdUChGowPbCseGeWMaKtRMT{static_cast<int32_t>(0x0)};
