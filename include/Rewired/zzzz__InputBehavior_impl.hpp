#pragma once
// IWYU pragma private; include "Rewired/InputBehavior.hpp"
#include "Rewired/zzzz__MouseOtherAxisMode_impl.hpp"
#include "Rewired/zzzz__MouseXYAxisDeltaCalc_impl.hpp"
#include "Rewired/zzzz__MouseXYAxisMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__InputBehavior_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__SerializedObject_def.hpp"
#include "Rewired/zzzz__MouseOtherAxisMode_def.hpp"
#include "Rewired/zzzz__MouseXYAxisDeltaCalc_def.hpp"
#include "Rewired/zzzz__MouseXYAxisMode_def.hpp"
//  Writing Method size for method: ::Rewired::InputBehavior.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.qkUAkcZuQOxrxQdCIbcNeIDGckNDA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(int32_t)>(&::Rewired::InputBehavior::qkUAkcZuQOxrxQdCIbcNeIDGckNDA)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"qkUAkcZuQOxrxQdCIbcNeIDGckNDA", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.aReumDhQzarjtJfUbCkMHXtpkjCI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(::StringW)>(&::Rewired::InputBehavior::aReumDhQzarjtJfUbCkMHXtpkjCI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"aReumDhQzarjtJfUbCkMHXtpkjCI", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_joystickAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_joystickAxisSensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_joystickAxisSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_joystickAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_joystickAxisSensitivity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a5180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_joystickAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_digitalAxisSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_digitalAxisSimulation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_digitalAxisSimulation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_digitalAxisSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(bool)>(&::Rewired::InputBehavior::set_digitalAxisSimulation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_digitalAxisSimulation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_digitalAxisSnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_digitalAxisSnap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_digitalAxisSnap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_digitalAxisSnap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(bool)>(&::Rewired::InputBehavior::set_digitalAxisSnap)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_digitalAxisSnap", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_digitalAxisInstantReverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_digitalAxisInstantReverse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_digitalAxisInstantReverse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_digitalAxisInstantReverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(bool)>(&::Rewired::InputBehavior::set_digitalAxisInstantReverse)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_digitalAxisInstantReverse", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_digitalAxisGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_digitalAxisGravity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_digitalAxisGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_digitalAxisGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_digitalAxisGravity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a5120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_digitalAxisGravity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_digitalAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_digitalAxisSensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_digitalAxisSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_digitalAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_digitalAxisSensitivity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a5150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_digitalAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_mouseXYAxisMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::MouseXYAxisMode (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_mouseXYAxisMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_mouseXYAxisMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_mouseXYAxisMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(::Rewired::MouseXYAxisMode)>(&::Rewired::InputBehavior::set_mouseXYAxisMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_mouseXYAxisMode", {}, {::i2c::type_of<::Rewired::MouseXYAxisMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_mouseOtherAxisMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::MouseOtherAxisMode (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_mouseOtherAxisMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_mouseOtherAxisMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_mouseOtherAxisMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(::Rewired::MouseOtherAxisMode)>(&::Rewired::InputBehavior::set_mouseOtherAxisMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_mouseOtherAxisMode", {}, {::i2c::type_of<::Rewired::MouseOtherAxisMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_mouseXYAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_mouseXYAxisSensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f7fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_mouseXYAxisSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_mouseXYAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_mouseXYAxisSensitivity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a51e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_mouseXYAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_mouseXYAxisDeltaCalc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::MouseXYAxisDeltaCalc (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_mouseXYAxisDeltaCalc)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803231b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_mouseXYAxisDeltaCalc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_mouseXYAxisDeltaCalc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(::Rewired::MouseXYAxisDeltaCalc)>(&::Rewired::InputBehavior::set_mouseXYAxisDeltaCalc)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_mouseXYAxisDeltaCalc", {}, {::i2c::type_of<::Rewired::MouseXYAxisDeltaCalc>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_mouseOtherAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_mouseOtherAxisSensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_mouseOtherAxisSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_mouseOtherAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_mouseOtherAxisSensitivity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a51b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_mouseOtherAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_customControllerAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_customControllerAxisSensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_customControllerAxisSensitivity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_customControllerAxisSensitivity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_customControllerAxisSensitivity)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a50f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_customControllerAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_buttonDoublePressSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_buttonDoublePressSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonDoublePressSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_buttonDoublePressSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_buttonDoublePressSpeed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a4f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonDoublePressSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_buttonShortPressTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_buttonShortPressTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonShortPressTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_buttonShortPressTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_buttonShortPressTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a50c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonShortPressTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_buttonShortPressExpiresIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_buttonShortPressExpiresIn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonShortPressExpiresIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_buttonShortPressExpiresIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_buttonShortPressExpiresIn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a5090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonShortPressExpiresIn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_buttonLongPressTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_buttonLongPressTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180315260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonLongPressTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_buttonLongPressTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_buttonLongPressTime)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a5010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonLongPressTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_buttonLongPressExpiresIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_buttonLongPressExpiresIn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonLongPressExpiresIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_buttonLongPressExpiresIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_buttonLongPressExpiresIn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a4fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonLongPressExpiresIn", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_buttonDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_buttonDeadZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonDeadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_buttonDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_buttonDeadZone)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a4f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonDeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_buttonDownBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_buttonDownBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonDownBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_buttonDownBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_buttonDownBuffer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a4fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonDownBuffer", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_buttonRepeatRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_buttonRepeatRate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonRepeatRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_buttonRepeatRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_buttonRepeatRate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a5060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonRepeatRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.get_buttonRepeatDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::get_buttonRepeatDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18034f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonRepeatDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.set_buttonRepeatDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(float_t)>(&::Rewired::InputBehavior::set_buttonRepeatDelay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1819a5040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonRepeatDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1819a4f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(::Rewired::InputBehavior*)>(&::Rewired::InputBehavior::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1819a4e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.ToXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::ToXmlString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a4da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"ToXmlString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.ImportXmlString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputBehavior::*)(::StringW)>(&::Rewired::InputBehavior::ImportXmlString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a4110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"ImportXmlString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.ToJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::ToJsonString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a4d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"ToJsonString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.ImportJsonString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputBehavior::*)(::StringW)>(&::Rewired::InputBehavior::ImportJsonString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1819a4080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"ImportJsonString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.ImportData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::InputBehavior::*)(::Rewired::InputBehavior*)>(&::Rewired::InputBehavior::ImportData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1819a3fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"ImportData", {}, {::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputBehavior* (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::Clone)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1819a3ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::Reset)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1819a4c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.RFoiebKhEkXzfARlVcjvPSNRZlMD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::SerializedObject* (::Rewired::InputBehavior::*)()>(&::Rewired::InputBehavior::RFoiebKhEkXzfARlVcjvPSNRZlMD)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x1819a44d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"RFoiebKhEkXzfARlVcjvPSNRZlMD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.KFXFEeKEaRBLbOnXyDgnWKxLDhPSA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::InputBehavior::*)(::Rewired::Utils::Classes::Data::SerializedObject*)>(&::Rewired::InputBehavior::KFXFEeKEaRBLbOnXyDgnWKxLDhPSA)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1819a41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"KFXFEeKEaRBLbOnXyDgnWKxLDhPSA", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::InputBehavior.xdchdNaLkBKVWLVCAFGeZJuIFZTd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Rewired::InputBehavior*, ::Rewired::InputBehavior*, bool)>(&::Rewired::InputBehavior::xdchdNaLkBKVWLVCAFGeZJuIFZTd)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1819a5210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"xdchdNaLkBKVWLVCAFGeZJuIFZTd", {}, {::i2c::type_of<::Rewired::InputBehavior*>(), ::i2c::type_of<::Rewired::InputBehavior*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::InputBehavior::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr int32_t const& Rewired::InputBehavior::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id = value;
}
constexpr ::StringW& Rewired::InputBehavior::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& Rewired::InputBehavior::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__joystickAxisSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joystickAxisSensitivity;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__joystickAxisSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joystickAxisSensitivity;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__joystickAxisSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joystickAxisSensitivity = value;
}
constexpr bool& Rewired::InputBehavior::__cordl_internal_get__digitalAxisSimulation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisSimulation;
}
constexpr bool const& Rewired::InputBehavior::__cordl_internal_get__digitalAxisSimulation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisSimulation;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__digitalAxisSimulation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____digitalAxisSimulation = value;
}
constexpr bool& Rewired::InputBehavior::__cordl_internal_get__digitalAxisSnap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisSnap;
}
constexpr bool const& Rewired::InputBehavior::__cordl_internal_get__digitalAxisSnap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisSnap;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__digitalAxisSnap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____digitalAxisSnap = value;
}
constexpr bool& Rewired::InputBehavior::__cordl_internal_get__digitalAxisInstantReverse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisInstantReverse;
}
constexpr bool const& Rewired::InputBehavior::__cordl_internal_get__digitalAxisInstantReverse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisInstantReverse;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__digitalAxisInstantReverse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____digitalAxisInstantReverse = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__digitalAxisGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisGravity;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__digitalAxisGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisGravity;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__digitalAxisGravity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____digitalAxisGravity = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__digitalAxisSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisSensitivity;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__digitalAxisSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____digitalAxisSensitivity;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__digitalAxisSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____digitalAxisSensitivity = value;
}
constexpr ::Rewired::MouseXYAxisMode& Rewired::InputBehavior::__cordl_internal_get__mouseXYAxisMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseXYAxisMode;
}
constexpr ::Rewired::MouseXYAxisMode const& Rewired::InputBehavior::__cordl_internal_get__mouseXYAxisMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseXYAxisMode;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__mouseXYAxisMode(::Rewired::MouseXYAxisMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mouseXYAxisMode = value;
}
constexpr ::Rewired::MouseOtherAxisMode& Rewired::InputBehavior::__cordl_internal_get__mouseOtherAxisMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseOtherAxisMode;
}
constexpr ::Rewired::MouseOtherAxisMode const& Rewired::InputBehavior::__cordl_internal_get__mouseOtherAxisMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseOtherAxisMode;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__mouseOtherAxisMode(::Rewired::MouseOtherAxisMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mouseOtherAxisMode = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__mouseXYAxisSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseXYAxisSensitivity;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__mouseXYAxisSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseXYAxisSensitivity;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__mouseXYAxisSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mouseXYAxisSensitivity = value;
}
constexpr ::Rewired::MouseXYAxisDeltaCalc& Rewired::InputBehavior::__cordl_internal_get__mouseXYAxisDeltaCalc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseXYAxisDeltaCalc;
}
constexpr ::Rewired::MouseXYAxisDeltaCalc const& Rewired::InputBehavior::__cordl_internal_get__mouseXYAxisDeltaCalc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseXYAxisDeltaCalc;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__mouseXYAxisDeltaCalc(::Rewired::MouseXYAxisDeltaCalc  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mouseXYAxisDeltaCalc = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__mouseOtherAxisSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseOtherAxisSensitivity;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__mouseOtherAxisSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mouseOtherAxisSensitivity;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__mouseOtherAxisSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mouseOtherAxisSensitivity = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__customControllerAxisSensitivity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customControllerAxisSensitivity;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__customControllerAxisSensitivity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customControllerAxisSensitivity;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__customControllerAxisSensitivity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customControllerAxisSensitivity = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__buttonDoublePressSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonDoublePressSpeed;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__buttonDoublePressSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonDoublePressSpeed;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__buttonDoublePressSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonDoublePressSpeed = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__buttonShortPressTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonShortPressTime;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__buttonShortPressTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonShortPressTime;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__buttonShortPressTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonShortPressTime = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__buttonShortPressExpiresIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonShortPressExpiresIn;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__buttonShortPressExpiresIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonShortPressExpiresIn;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__buttonShortPressExpiresIn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonShortPressExpiresIn = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__buttonLongPressTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonLongPressTime;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__buttonLongPressTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonLongPressTime;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__buttonLongPressTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonLongPressTime = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__buttonLongPressExpiresIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonLongPressExpiresIn;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__buttonLongPressExpiresIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonLongPressExpiresIn;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__buttonLongPressExpiresIn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonLongPressExpiresIn = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__buttonDeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonDeadZone;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__buttonDeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonDeadZone;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__buttonDeadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonDeadZone = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__buttonDownBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonDownBuffer;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__buttonDownBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonDownBuffer;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__buttonDownBuffer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonDownBuffer = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__buttonRepeatRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonRepeatRate;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__buttonRepeatRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonRepeatRate;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__buttonRepeatRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonRepeatRate = value;
}
constexpr float_t& Rewired::InputBehavior::__cordl_internal_get__buttonRepeatDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonRepeatDelay;
}
constexpr float_t const& Rewired::InputBehavior::__cordl_internal_get__buttonRepeatDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonRepeatDelay;
}
constexpr void Rewired::InputBehavior::__cordl_internal_set__buttonRepeatDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonRepeatDelay = value;
}
inline int32_t Rewired::InputBehavior::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::qkUAkcZuQOxrxQdCIbcNeIDGckNDA(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"qkUAkcZuQOxrxQdCIbcNeIDGckNDA", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::InputBehavior::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Rewired::InputBehavior::aReumDhQzarjtJfUbCkMHXtpkjCI(::StringW  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"aReumDhQzarjtJfUbCkMHXtpkjCI", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline float_t Rewired::InputBehavior::get_joystickAxisSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_joystickAxisSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_joystickAxisSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_joystickAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputBehavior::get_digitalAxisSimulation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_digitalAxisSimulation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_digitalAxisSimulation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_digitalAxisSimulation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputBehavior::get_digitalAxisSnap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_digitalAxisSnap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_digitalAxisSnap(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_digitalAxisSnap", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Rewired::InputBehavior::get_digitalAxisInstantReverse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_digitalAxisInstantReverse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_digitalAxisInstantReverse(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_digitalAxisInstantReverse", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_digitalAxisGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_digitalAxisGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_digitalAxisGravity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_digitalAxisGravity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_digitalAxisSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_digitalAxisSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_digitalAxisSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_digitalAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::MouseXYAxisMode Rewired::InputBehavior::get_mouseXYAxisMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_mouseXYAxisMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::MouseXYAxisMode>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_mouseXYAxisMode(::Rewired::MouseXYAxisMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_mouseXYAxisMode", {}, {::i2c::type_of<::Rewired::MouseXYAxisMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::MouseOtherAxisMode Rewired::InputBehavior::get_mouseOtherAxisMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_mouseOtherAxisMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::MouseOtherAxisMode>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_mouseOtherAxisMode(::Rewired::MouseOtherAxisMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_mouseOtherAxisMode", {}, {::i2c::type_of<::Rewired::MouseOtherAxisMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_mouseXYAxisSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_mouseXYAxisSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_mouseXYAxisSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_mouseXYAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::MouseXYAxisDeltaCalc Rewired::InputBehavior::get_mouseXYAxisDeltaCalc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_mouseXYAxisDeltaCalc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::MouseXYAxisDeltaCalc>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_mouseXYAxisDeltaCalc(::Rewired::MouseXYAxisDeltaCalc  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_mouseXYAxisDeltaCalc", {}, {::i2c::type_of<::Rewired::MouseXYAxisDeltaCalc>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_mouseOtherAxisSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_mouseOtherAxisSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_mouseOtherAxisSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_mouseOtherAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_customControllerAxisSensitivity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_customControllerAxisSensitivity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_customControllerAxisSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_customControllerAxisSensitivity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_buttonDoublePressSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonDoublePressSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_buttonDoublePressSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonDoublePressSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_buttonShortPressTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonShortPressTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_buttonShortPressTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonShortPressTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_buttonShortPressExpiresIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonShortPressExpiresIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_buttonShortPressExpiresIn(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonShortPressExpiresIn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_buttonLongPressTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonLongPressTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_buttonLongPressTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonLongPressTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_buttonLongPressExpiresIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonLongPressExpiresIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_buttonLongPressExpiresIn(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonLongPressExpiresIn", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_buttonDeadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonDeadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_buttonDeadZone(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonDeadZone", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_buttonDownBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonDownBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_buttonDownBuffer(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonDownBuffer", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_buttonRepeatRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonRepeatRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_buttonRepeatRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonRepeatRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::InputBehavior::get_buttonRepeatDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"get_buttonRepeatDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::InputBehavior::set_buttonRepeatDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"set_buttonRepeatDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::InputBehavior::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::InputBehavior::_ctor(::Rewired::InputBehavior*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::StringW Rewired::InputBehavior::ToXmlString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"ToXmlString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Rewired::InputBehavior::ImportXmlString(::StringW  xmlString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"ImportXmlString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, xmlString);
}
inline ::StringW Rewired::InputBehavior::ToJsonString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"ToJsonString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Rewired::InputBehavior::ImportJsonString(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"ImportJsonString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, jsonString);
}
inline bool Rewired::InputBehavior::ImportData(::Rewired::InputBehavior*  inputBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"ImportData", {}, {::i2c::type_of<::Rewired::InputBehavior*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inputBehavior);
}
inline ::Rewired::InputBehavior* Rewired::InputBehavior::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputBehavior*>(this, ___internal_method);
}
inline void Rewired::InputBehavior::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Classes::Data::SerializedObject* Rewired::InputBehavior::RFoiebKhEkXzfARlVcjvPSNRZlMD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"RFoiebKhEkXzfARlVcjvPSNRZlMD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::SerializedObject*>(this, ___internal_method);
}
inline void Rewired::InputBehavior::KFXFEeKEaRBLbOnXyDgnWKxLDhPSA(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"KFXFEeKEaRBLbOnXyDgnWKxLDhPSA", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::SerializedObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::InputBehavior::xdchdNaLkBKVWLVCAFGeZJuIFZTd(::Rewired::InputBehavior*  _cordl_fixed_empty_name_whitespace, ::Rewired::InputBehavior*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::InputBehavior*>(),
                        {"xdchdNaLkBKVWLVCAFGeZJuIFZTd", {}, {::i2c::type_of<::Rewired::InputBehavior*>(), ::i2c::type_of<::Rewired::InputBehavior*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::InputBehavior* Rewired::InputBehavior::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputBehavior*>());
}
inline ::Rewired::InputBehavior* Rewired::InputBehavior::New_ctor(::Rewired::InputBehavior*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::InputBehavior*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::InputBehavior::InputBehavior()   {
}
