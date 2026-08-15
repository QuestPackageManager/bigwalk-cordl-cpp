#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/NintendoSwitchJoyConExtension.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchGamepadExtension_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConGripStyle_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConType_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchJoyCon_def.hpp"
#include "Rewired/Interfaces/zzzz__IAxisCalibrationIndexMap_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerVibrator_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe.ZhXRnOEiqWGQeGDcDpKgOMKqyxdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon* (::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe::ZhXRnOEiqWGQeGDcDpKgOMKqyxdd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818eeff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe*>(),
                        {"ZhXRnOEiqWGQeGDcDpKgOMKqyxdd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe::*)(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*)>(&::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon* Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe::ZhXRnOEiqWGQeGDcDpKgOMKqyxdd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe*>(),
                        {"ZhXRnOEiqWGQeGDcDpKgOMKqyxdd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe::_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe* Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe::New_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe()   {
}
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension.WqvJzRdAMKWdpORMBtYGOkbkzYo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe* (::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::WqvJzRdAMKWdpORMBtYGOkbkzYo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818dad70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {"WqvJzRdAMKWdpORMBtYGOkbkzYo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::*)(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*)>(&::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818dadc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::*)(::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*)>(&::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ca6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension.get_joyConType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchJoyConType (::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::get_joyConType)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818daee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {"get_joyConType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension.get_joyConGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle (::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::get_joyConGripStyle)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818dae20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {"get_joyConGripStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension.set_joyConGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::*)(::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle)>(&::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::set_joyConGripStyle)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818dafb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {"set_joyConGripStyle", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension.IEhvUnDSATtyyGLIJXaVxtEHKnhc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::*)(int32_t)>(&::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::IEhvUnDSATtyyGLIJXaVxtEHKnhc)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1818dac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {"IEhvUnDSATtyyGLIJXaVxtEHKnhc", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::Clone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818dabe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(), 7}
                ));
    return ___internal_method;
  }
};
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe* Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::WqvJzRdAMKWdpORMBtYGOkbkzYo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {"WqvJzRdAMKWdpORMBtYGOkbkzYo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension_tEFGDsrbecSclRcvraoDkLUyYBYe*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::_ctor(::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConType Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::get_joyConType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {"get_joyConType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchJoyConType>(this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::get_joyConGripStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {"get_joyConGripStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::set_joyConGripStyle(::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {"set_joyConGripStyle", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::IEhvUnDSATtyyGLIJXaVxtEHKnhc(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(),
                        {"IEhvUnDSATtyyGLIJXaVxtEHKnhc", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Controller_Extension* Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension* Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::New_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension* Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::New_ctor(::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr  Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::operator ::Rewired::Interfaces::IControllerVibrator*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::i___Rewired__Interfaces__IControllerVibrator() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr  Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::operator ::Rewired::Interfaces::IAxisCalibrationIndexMap*() noexcept {
return static_cast<::Rewired::Interfaces::IAxisCalibrationIndexMap*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr ::Rewired::Interfaces::IAxisCalibrationIndexMap* Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::i___Rewired__Interfaces__IAxisCalibrationIndexMap() noexcept {
return static_cast<::Rewired::Interfaces::IAxisCalibrationIndexMap*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::NintendoSwitchJoyConExtension::NintendoSwitchJoyConExtension()   {
}
