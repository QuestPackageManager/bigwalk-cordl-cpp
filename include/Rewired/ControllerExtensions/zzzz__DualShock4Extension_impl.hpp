#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualShock4Extension.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__TimerAbs_impl.hpp"
#include "Rewired/zzzz__Controller_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualShock4Extension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualShock4Extension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualShock4MotorType_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualShock4Extension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_DualShock4_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerExtensionSource_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerVibrator_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Joystick_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::*)(::Rewired::HID::Drivers::IDriver_DualShock4*, bool, int32_t)>(&::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d0ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_DualShock4*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::HID::Drivers::IDriver_DualShock4*& Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::__cordl_internal_get_UIRpbAIrxwXGQkfuyYzMaTtonjne()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UIRpbAIrxwXGQkfuyYzMaTtonjne;
}
constexpr ::Rewired::HID::Drivers::IDriver_DualShock4* const& Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::__cordl_internal_get_UIRpbAIrxwXGQkfuyYzMaTtonjne() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UIRpbAIrxwXGQkfuyYzMaTtonjne;
}
constexpr void Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::__cordl_internal_set_UIRpbAIrxwXGQkfuyYzMaTtonjne(::Rewired::HID::Drivers::IDriver_DualShock4*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UIRpbAIrxwXGQkfuyYzMaTtonjne = value;
}
constexpr bool& Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::__cordl_internal_get_DhNywUsWdSQXiRjOHpNxiHQLCnvy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DhNywUsWdSQXiRjOHpNxiHQLCnvy;
}
constexpr bool const& Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::__cordl_internal_get_DhNywUsWdSQXiRjOHpNxiHQLCnvy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DhNywUsWdSQXiRjOHpNxiHQLCnvy;
}
constexpr void Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::__cordl_internal_set_DhNywUsWdSQXiRjOHpNxiHQLCnvy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DhNywUsWdSQXiRjOHpNxiHQLCnvy = value;
}
constexpr int32_t& Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::__cordl_internal_get_jkAALzAeYEEPJnafXDGegddqBSEoA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jkAALzAeYEEPJnafXDGegddqBSEoA;
}
constexpr int32_t const& Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::__cordl_internal_get_jkAALzAeYEEPJnafXDGegddqBSEoA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jkAALzAeYEEPJnafXDGegddqBSEoA;
}
constexpr void Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::__cordl_internal_set_jkAALzAeYEEPJnafXDGegddqBSEoA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jkAALzAeYEEPJnafXDGegddqBSEoA = value;
}
inline void Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::_ctor(::Rewired::HID::Drivers::IDriver_DualShock4*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_DualShock4*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj* Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::New_ctor(::Rewired::HID::Drivers::IDriver_DualShock4*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr  Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::operator ::Rewired::Interfaces::IControllerExtensionSource*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerExtensionSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::i___Rewired__Interfaces__IControllerExtensionSource() noexcept {
return static_cast<::Rewired::Interfaces::IControllerExtensionSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj()   {
}
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.sfRlTJPfEOqSRmPZojRnbkoHbEzC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Joystick* (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::sfRlTJPfEOqSRmPZojRnbkoHbEzC)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181884250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"sfRlTJPfEOqSRmPZojRnbkoHbEzC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(::Rewired::HID::Drivers::IDriver_DualShock4*)>(&::Rewired::ControllerExtensions::DualShock4Extension::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818cfd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_DualShock4*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(::Rewired::ControllerExtensions::DualShock4Extension*)>(&::Rewired::ControllerExtensions::DualShock4Extension::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818cc970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4Extension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.get_vibrationMotorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::get_vibrationMotorCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818cd0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_vibrationMotorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t, float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cf850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t, float_t, float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cf570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t, float_t, bool)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cf530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t, float_t, float_t, bool)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetVibration)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818cf770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::GetVibration)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818cecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.StopVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::StopVibration)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818cfbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"StopVibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualShock4Extension::*)(::Rewired::ControllerExtensions::DualShock4MotorType)>(&::Rewired::ControllerExtensions::DualShock4Extension::GetVibration)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818ced90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(::Rewired::ControllerExtensions::DualShock4MotorType, float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cf870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(::Rewired::ControllerExtensions::DualShock4MotorType, float_t, float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cf510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(::Rewired::ControllerExtensions::DualShock4MotorType, float_t, bool)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cf750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(::Rewired::ControllerExtensions::DualShock4MotorType, float_t, float_t, bool)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetVibration)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1818cf590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(float_t, float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cf550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(float_t, float_t, float_t, float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetVibration)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1818cf890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.get_lightColorRed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::get_lightColorRed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818d00b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_lightColorRed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.set_lightColorRed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::set_lightColorRed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d0370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"set_lightColorRed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.get_lightColorGreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::get_lightColorGreen)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818d0020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_lightColorGreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.set_lightColorGreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::set_lightColorGreen)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d0330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"set_lightColorGreen", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.get_lightColorBlue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::get_lightColorBlue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_lightColorBlue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.set_lightColorBlue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::set_lightColorBlue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d02f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"set_lightColorBlue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetLightColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::GetLightColor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1818ce530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetLightColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetLightColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(::UnityEngine::Color)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetLightColor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818cf1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetLightColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(float_t, float_t, float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetLightColor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1818cf090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetLightColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(float_t, float_t, float_t, float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetLightColor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1818cf2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SetLightFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(float_t, float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::SetLightFlash)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818cf430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetLightFlash", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.StopLightFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::StopLightFlash)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cfb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"StopLightFlash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetAccelerometerValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::GetAccelerometerValueRaw)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ce0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetAccelerometerValueRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetAccelerometerValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::GetAccelerometerValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ce170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetAccelerometerValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetLastGyroscopeValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::GetLastGyroscopeValueRaw)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ce3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetLastGyroscopeValueRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetLastGyroscopeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::GetLastGyroscopeValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ce470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetLastGyroscopeValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetGyroscopeValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::GetGyroscopeValueRaw)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ce230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetGyroscopeValueRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetGyroscopeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::GetGyroscopeValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ce2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetGyroscopeValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::GetOrientation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818ce670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.ResetOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::ResetOrientation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cf000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"ResetOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.get_maxTouches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::get_maxTouches)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818d0140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_maxTouches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.get_touchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::get_touchCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818d01c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_touchCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetTouchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::GetTouchId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ce750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetTouchId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetTouchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t, ::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ControllerExtensions::DualShock4Extension::GetTouchPosition)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818cebd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetTouchPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetTouchPositionByTouchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t, ::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ControllerExtensions::DualShock4Extension::GetTouchPositionByTouchId)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818ceaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetTouchPositionByTouchId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetTouchPositionAbsolute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t, ::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ControllerExtensions::DualShock4Extension::GetTouchPositionAbsolute)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1818ce980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetTouchPositionAbsolute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.GetTouchPositionAbsoluteByTouchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t, ::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ControllerExtensions::DualShock4Extension::GetTouchPositionAbsoluteByTouchId)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1818ce810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetTouchPositionAbsoluteByTouchId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.IsTouching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::IsTouching)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818cef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"IsTouching", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.IsTouchingByTouchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualShock4Extension::*)(int32_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::IsTouchingByTouchId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818cee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"IsTouchingByTouchId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.get_batteryLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::get_batteryLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_batteryLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.get_batteryCharging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::get_batteryCharging)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cfe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_batteryCharging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ce2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValueRaw)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ce230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValueRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cbb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.Rewired_ControllerExtensions_IHIDControllerExtension_get_productId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cb930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.Rewired_ControllerExtensions_IHIDControllerExtension_get_productName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cb9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cb8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.Rewired_ControllerExtensions_IHIDControllerExtension_get_usage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cbac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(::Rewired::UpdateLoopType)>(&::Rewired::ControllerExtensions::DualShock4Extension::UpdateData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818cfcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.SourceUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(::Rewired::Interfaces::IControllerExtensionSource*)>(&::Rewired::ControllerExtensions::DualShock4Extension::SourceUpdated)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818cfa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::Clone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818ce070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.ougRAHUFqYghlvlKuwaYmCrrnruO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)()>(&::Rewired::ControllerExtensions::DualShock4Extension::ougRAHUFqYghlvlKuwaYmCrrnruO)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818d0240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"ougRAHUFqYghlvlKuwaYmCrrnruO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualShock4Extension.iyxLrURzUpdqycPDuaqAPkgHwSCL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualShock4Extension::*)(::Rewired::ControllerExtensions::DualShock4MotorType, float_t, float_t)>(&::Rewired::ControllerExtensions::DualShock4Extension::iyxLrURzUpdqycPDuaqAPkgHwSCL)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cd1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"iyxLrURzUpdqycPDuaqAPkgHwSCL", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj*& Rewired::ControllerExtensions::DualShock4Extension::__cordl_internal_get_sZHGsHNnujQSNCuSwbYZgHeXBmNg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sZHGsHNnujQSNCuSwbYZgHeXBmNg;
}
constexpr ::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj* const& Rewired::ControllerExtensions::DualShock4Extension::__cordl_internal_get_sZHGsHNnujQSNCuSwbYZgHeXBmNg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sZHGsHNnujQSNCuSwbYZgHeXBmNg;
}
constexpr void Rewired::ControllerExtensions::DualShock4Extension::__cordl_internal_set_sZHGsHNnujQSNCuSwbYZgHeXBmNg(::Rewired::ControllerExtensions::DualShock4Extension_YWgXExcQGxQjyoNXlNThZztJubtj*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sZHGsHNnujQSNCuSwbYZgHeXBmNg = value;
}
constexpr bool& Rewired::ControllerExtensions::DualShock4Extension::__cordl_internal_get_IlkoSqlRFHOuUAtWMTegFWTxdiFT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IlkoSqlRFHOuUAtWMTegFWTxdiFT;
}
constexpr bool const& Rewired::ControllerExtensions::DualShock4Extension::__cordl_internal_get_IlkoSqlRFHOuUAtWMTegFWTxdiFT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IlkoSqlRFHOuUAtWMTegFWTxdiFT;
}
constexpr void Rewired::ControllerExtensions::DualShock4Extension::__cordl_internal_set_IlkoSqlRFHOuUAtWMTegFWTxdiFT(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IlkoSqlRFHOuUAtWMTegFWTxdiFT = value;
}
constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>& Rewired::ControllerExtensions::DualShock4Extension::__cordl_internal_get_OhuyaZMjePSLVSTMFRmMMFXkVUnC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OhuyaZMjePSLVSTMFRmMMFXkVUnC;
}
constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*> const& Rewired::ControllerExtensions::DualShock4Extension::__cordl_internal_get_OhuyaZMjePSLVSTMFRmMMFXkVUnC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OhuyaZMjePSLVSTMFRmMMFXkVUnC;
}
constexpr void Rewired::ControllerExtensions::DualShock4Extension::__cordl_internal_set_OhuyaZMjePSLVSTMFRmMMFXkVUnC(::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OhuyaZMjePSLVSTMFRmMMFXkVUnC = value;
}
inline ::Rewired::Joystick* Rewired::ControllerExtensions::DualShock4Extension::sfRlTJPfEOqSRmPZojRnbkoHbEzC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"sfRlTJPfEOqSRmPZojRnbkoHbEzC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Joystick*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::_ctor(::Rewired::HID::Drivers::IDriver_DualShock4*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_DualShock4*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::_ctor(::Rewired::ControllerExtensions::DualShock4Extension*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4Extension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerExtensions::DualShock4Extension::get_vibrationMotorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_vibrationMotorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetVibration(int32_t  motorIndex, float_t  motorLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, duration);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetVibration(int32_t  motorIndex, float_t  motorLevel, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, stopOtherMotors);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, duration, stopOtherMotors);
}
inline float_t Rewired::ControllerExtensions::DualShock4Extension::GetVibration(int32_t  motorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, motorIndex);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::StopVibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"StopVibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Rewired::ControllerExtensions::DualShock4Extension::GetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, motor);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motor, motorLevel);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motor, motorLevel, duration);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motor, motorLevel, stopOtherMotors);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, float_t  duration, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motor, motorLevel, duration, stopOtherMotors);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftMotorLevel, rightMotorLevel);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel, float_t  leftMotorDuration, float_t  rightMotorDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftMotorLevel, rightMotorLevel, leftMotorDuration, rightMotorDuration);
}
inline float_t Rewired::ControllerExtensions::DualShock4Extension::get_lightColorRed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_lightColorRed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::set_lightColorRed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"set_lightColorRed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ControllerExtensions::DualShock4Extension::get_lightColorGreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_lightColorGreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::set_lightColorGreen(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"set_lightColorGreen", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ControllerExtensions::DualShock4Extension::get_lightColorBlue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_lightColorBlue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::set_lightColorBlue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"set_lightColorBlue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Rewired::ControllerExtensions::DualShock4Extension::GetLightColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetLightColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetLightColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetLightColor(float_t  red, float_t  green, float_t  blue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, red, green, blue);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetLightColor(float_t  red, float_t  green, float_t  blue, float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, red, green, blue, intensity);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SetLightFlash(float_t  onDuration, float_t  offDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"SetLightFlash", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onDuration, offDuration);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::StopLightFlash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"StopLightFlash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualShock4Extension::GetAccelerometerValueRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetAccelerometerValueRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualShock4Extension::GetAccelerometerValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetAccelerometerValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualShock4Extension::GetLastGyroscopeValueRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetLastGyroscopeValueRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualShock4Extension::GetLastGyroscopeValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetLastGyroscopeValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualShock4Extension::GetGyroscopeValueRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetGyroscopeValueRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualShock4Extension::GetGyroscopeValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetGyroscopeValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Rewired::ControllerExtensions::DualShock4Extension::GetOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::ResetOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"ResetOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::ControllerExtensions::DualShock4Extension::get_maxTouches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_maxTouches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::ControllerExtensions::DualShock4Extension::get_touchCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_touchCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::ControllerExtensions::DualShock4Extension::GetTouchId(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetTouchId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline bool Rewired::ControllerExtensions::DualShock4Extension::GetTouchPosition(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetTouchPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, position);
}
inline bool Rewired::ControllerExtensions::DualShock4Extension::GetTouchPositionByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetTouchPositionByTouchId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, touchId, position);
}
inline bool Rewired::ControllerExtensions::DualShock4Extension::GetTouchPositionAbsolute(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetTouchPositionAbsolute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, position);
}
inline bool Rewired::ControllerExtensions::DualShock4Extension::GetTouchPositionAbsoluteByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"GetTouchPositionAbsoluteByTouchId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, touchId, position);
}
inline bool Rewired::ControllerExtensions::DualShock4Extension::IsTouching(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"IsTouching", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline bool Rewired::ControllerExtensions::DualShock4Extension::IsTouchingByTouchId(int32_t  touchId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"IsTouchingByTouchId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, touchId);
}
inline float_t Rewired::ControllerExtensions::DualShock4Extension::get_batteryLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_batteryLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Rewired::ControllerExtensions::DualShock4Extension::get_batteryCharging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"get_batteryCharging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValueRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValueRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::DualShock4Extension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::UpdateData(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::Rewired::Controller_Extension* Rewired::ControllerExtensions::DualShock4Extension::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::ougRAHUFqYghlvlKuwaYmCrrnruO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"ougRAHUFqYghlvlKuwaYmCrrnruO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualShock4Extension::iyxLrURzUpdqycPDuaqAPkgHwSCL(::Rewired::ControllerExtensions::DualShock4MotorType  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualShock4Extension*>(),
                        {"iyxLrURzUpdqycPDuaqAPkgHwSCL", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ControllerExtensions::DualShock4Extension* Rewired::ControllerExtensions::DualShock4Extension::New_ctor(::Rewired::HID::Drivers::IDriver_DualShock4*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::DualShock4Extension*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerExtensions::DualShock4Extension* Rewired::ControllerExtensions::DualShock4Extension::New_ctor(::Rewired::ControllerExtensions::DualShock4Extension*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::DualShock4Extension*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr  Rewired::ControllerExtensions::DualShock4Extension::operator ::Rewired::Interfaces::IControllerVibrator*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* Rewired::ControllerExtensions::DualShock4Extension::i___Rewired__Interfaces__IControllerVibrator() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr  Rewired::ControllerExtensions::DualShock4Extension::operator ::Rewired::ControllerExtensions::IDualShock4Extension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IDualShock4Extension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr ::Rewired::ControllerExtensions::IDualShock4Extension* Rewired::ControllerExtensions::DualShock4Extension::i___Rewired__ControllerExtensions__IDualShock4Extension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IDualShock4Extension*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::ControllerExtensions::DualShock4Extension::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::ControllerExtensions::DualShock4Extension::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualShock4Extension::DualShock4Extension()   {
}
