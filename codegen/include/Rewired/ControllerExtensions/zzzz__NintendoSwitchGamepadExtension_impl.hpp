#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/NintendoSwitchGamepadExtension.hpp"
#include "Rewired/zzzz__Controller_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchGamepadExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchGamepadExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchGamepadVibration_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchController_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerExtensionSource_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerVibrator_def.hpp"
#include "Rewired/zzzz__Joystick_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base.get_driver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchController* (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::get_driver)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*>(),
                        {"get_driver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::*)(::Rewired::HID::Drivers::IDriver_NintendoSwitchController*)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*& Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::__cordl_internal_get__driver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____driver;
}
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* const& Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::__cordl_internal_get__driver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____driver;
}
constexpr void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::__cordl_internal_set__driver(::Rewired::HID::Drivers::IDriver_NintendoSwitchController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____driver = value;
}
inline ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::get_driver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*>(),
                        {"get_driver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchController*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base* Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::New_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchController*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr  Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::operator ::Rewired::Interfaces::IControllerExtensionSource*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerExtensionSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::i___Rewired__Interfaces__IControllerExtensionSource() noexcept {
return static_cast<::Rewired::Interfaces::IControllerExtensionSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base::NintendoSwitchGamepadExtension_ExtSource_Base()   {
}
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.get_isValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::get_isValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"get_isValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.get_joystick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Joystick* (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::get_joystick)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181884250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"get_joystick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.get_source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::get_source)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"get_source", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ca6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ca6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.get_vibrationMotorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::get_vibrationMotorCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818da780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"get_vibrationMotorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.GetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::GetVibration)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1818d9b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"GetVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, float_t, float_t, float_t, float_t)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818da4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, float_t, float_t, float_t, float_t, bool)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818d9e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, float_t, float_t, float_t, float_t, float_t)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818da2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, float_t, float_t, float_t, float_t, float_t, bool)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1818d9fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818d9ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration, float_t)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818da3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration, float_t, bool)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818da1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration, bool)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818da0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.StopVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::StopVibration)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1818da6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"StopVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.StopVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::StopVibration)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818da650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"StopVibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.Rewired_Interfaces_IControllerVibrator_SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, float_t)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_Interfaces_IControllerVibrator_SetVibration)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.Interfaces.IControllerVibrator.SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.Rewired_Interfaces_IControllerVibrator_SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, float_t, float_t)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_Interfaces_IControllerVibrator_SetVibration)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d9dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.Interfaces.IControllerVibrator.SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.Rewired_Interfaces_IControllerVibrator_SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, float_t, bool)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_Interfaces_IControllerVibrator_SetVibration)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.Interfaces.IControllerVibrator.SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.Rewired_Interfaces_IControllerVibrator_SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t, float_t, float_t, bool)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_Interfaces_IControllerVibrator_SetVibration)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d9dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.Interfaces.IControllerVibrator.SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.Rewired_Interfaces_IControllerVibrator_GetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(int32_t)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_Interfaces_IControllerVibrator_GetVibration)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818d9d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.Interfaces.IControllerVibrator.GetVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cbb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_productId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cb930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_productName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cb9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cb8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_usage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cbac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(::Rewired::UpdateLoopType)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::UpdateData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension.SourceUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::*)(::Rewired::Interfaces::IControllerExtensionSource*)>(&::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SourceUpdated)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818da580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*& Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::__cordl_internal_get_YNhdApBddeBptfHMccwSWkhWyxmDA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YNhdApBddeBptfHMccwSWkhWyxmDA;
}
constexpr ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base* const& Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::__cordl_internal_get_YNhdApBddeBptfHMccwSWkhWyxmDA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___YNhdApBddeBptfHMccwSWkhWyxmDA;
}
constexpr void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::__cordl_internal_set_YNhdApBddeBptfHMccwSWkhWyxmDA(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___YNhdApBddeBptfHMccwSWkhWyxmDA = value;
}
constexpr bool& Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::__cordl_internal_get_nHBlPHThrHEnhhAdqmZnzcmHJhHO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nHBlPHThrHEnhhAdqmZnzcmHJhHO;
}
constexpr bool const& Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::__cordl_internal_get_nHBlPHThrHEnhhAdqmZnzcmHJhHO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nHBlPHThrHEnhhAdqmZnzcmHJhHO;
}
constexpr void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::__cordl_internal_set_nHBlPHThrHEnhhAdqmZnzcmHJhHO(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nHBlPHThrHEnhhAdqmZnzcmHJhHO = value;
}
inline bool Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::get_isValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"get_isValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Joystick* Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::get_joystick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"get_joystick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Joystick*>(this, ___internal_method);
}
inline ::System::Object* Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::get_source()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"get_source", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::_ctor(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::_ctor(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::get_vibrationMotorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"get_vibrationMotorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::GetVibration(int32_t  motorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"GetVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(this, ___internal_method, motorIndex);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, amplitudeLow, frequencyLow, amplitudeHigh, frequencyHigh);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, amplitudeLow, frequencyLow, amplitudeHigh, frequencyHigh, stopOtherMotors);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, amplitudeLow, frequencyLow, amplitudeHigh, frequencyHigh, duration);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration(int32_t  motorIndex, float_t  amplitudeLow, float_t  frequencyLow, float_t  amplitudeHigh, float_t  frequencyHigh, float_t  duration, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, amplitudeLow, frequencyLow, amplitudeHigh, frequencyHigh, duration, stopOtherMotors);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration(int32_t  motorIndex, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  vibration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, vibration);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration(int32_t  motorIndex, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  vibration, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, vibration, duration);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration(int32_t  motorIndex, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  vibration, float_t  duration, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, vibration, duration, stopOtherMotors);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SetVibration(int32_t  motorIndex, ::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration  vibration, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadVibration>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, vibration, stopOtherMotors);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::StopVibration(int32_t  motorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"StopVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::StopVibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"StopVibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_Interfaces_IControllerVibrator_SetVibration(int32_t  motorIndex, float_t  motorLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.Interfaces.IControllerVibrator.SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_Interfaces_IControllerVibrator_SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.Interfaces.IControllerVibrator.SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, duration);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_Interfaces_IControllerVibrator_SetVibration(int32_t  motorIndex, float_t  motorLevel, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.Interfaces.IControllerVibrator.SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, stopOtherMotors);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_Interfaces_IControllerVibrator_SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.Interfaces.IControllerVibrator.SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, duration, stopOtherMotors);
}
inline float_t Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_Interfaces_IControllerVibrator_GetVibration(int32_t  motorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.Interfaces.IControllerVibrator.GetVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, motorIndex);
}
inline uint16_t Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::UpdateData(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline void Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension* Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::New_ctor(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension_ExtSource_Base*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension* Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::New_ctor(::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr  Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::operator ::Rewired::Interfaces::IControllerVibrator*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::i___Rewired__Interfaces__IControllerVibrator() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::NintendoSwitchGamepadExtension::NintendoSwitchGamepadExtension()   {
}
