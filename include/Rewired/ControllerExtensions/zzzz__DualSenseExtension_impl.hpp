#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseExtension.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__TimerAbs_impl.hpp"
#include "Rewired/zzzz__Controller_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseMicrophoneLightMode_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseOtherLightBrightness_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSensePlayerLightFlags_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectStates_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerType_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualSenseVibrationMode_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__DualShock4MotorType_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualSenseTriggerEffect_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IDualShock4Extension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_DualSense_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerExtensionSource_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerVibrator_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Joystick_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::*)(::Rewired::HID::Drivers::IDriver_DualSense*, bool, int32_t)>(&::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818d0ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::HID::Drivers::IDriver_DualSense*& Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::__cordl_internal_get_uyopYkjxQqLhvREnKMWqVXEzpDCK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uyopYkjxQqLhvREnKMWqVXEzpDCK;
}
constexpr ::Rewired::HID::Drivers::IDriver_DualSense* const& Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::__cordl_internal_get_uyopYkjxQqLhvREnKMWqVXEzpDCK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uyopYkjxQqLhvREnKMWqVXEzpDCK;
}
constexpr void Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::__cordl_internal_set_uyopYkjxQqLhvREnKMWqVXEzpDCK(::Rewired::HID::Drivers::IDriver_DualSense*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uyopYkjxQqLhvREnKMWqVXEzpDCK = value;
}
constexpr bool& Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::__cordl_internal_get_NuTmymqbiCSWczvtqsqSZyLVPaJC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NuTmymqbiCSWczvtqsqSZyLVPaJC;
}
constexpr bool const& Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::__cordl_internal_get_NuTmymqbiCSWczvtqsqSZyLVPaJC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NuTmymqbiCSWczvtqsqSZyLVPaJC;
}
constexpr void Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::__cordl_internal_set_NuTmymqbiCSWczvtqsqSZyLVPaJC(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NuTmymqbiCSWczvtqsqSZyLVPaJC = value;
}
constexpr int32_t& Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::__cordl_internal_get_VBgmgOgtnPGHJnbJuQZpneRICWCI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VBgmgOgtnPGHJnbJuQZpneRICWCI;
}
constexpr int32_t const& Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::__cordl_internal_get_VBgmgOgtnPGHJnbJuQZpneRICWCI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VBgmgOgtnPGHJnbJuQZpneRICWCI;
}
constexpr void Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::__cordl_internal_set_VBgmgOgtnPGHJnbJuQZpneRICWCI(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VBgmgOgtnPGHJnbJuQZpneRICWCI = value;
}
inline void Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::_ctor(::Rewired::HID::Drivers::IDriver_DualSense*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_DualSense*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME* Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::New_ctor(::Rewired::HID::Drivers::IDriver_DualSense*  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr  Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::operator ::Rewired::Interfaces::IControllerExtensionSource*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerExtensionSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::i___Rewired__Interfaces__IControllerExtensionSource() noexcept {
return static_cast<::Rewired::Interfaces::IControllerExtensionSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME()   {
}
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.NkQrRSKycEhEaDHvMiKGCrnInQEh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Joystick* (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::NkQrRSKycEhEaDHvMiKGCrnInQEh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181884250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"NkQrRSKycEhEaDHvMiKGCrnInQEh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::HID::Drivers::IDriver_DualSense*)>(&::Rewired::ControllerExtensions::DualSenseExtension::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818cca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_DualSense*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualSenseExtension*)>(&::Rewired::ControllerExtensions::DualSenseExtension::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818cc970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseExtension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.get_vibrationMotorCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::get_vibrationMotorCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1818cd0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_vibrationMotorCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t, float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cc6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t, float_t, float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cc360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t, float_t, bool)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cc180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t, float_t, float_t, bool)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetVibration)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818cc5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::GetVibration)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818cb5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.StopVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::StopVibration)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818cc7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"StopVibration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetVibrationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseVibrationMode (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::GetVibrationMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cb440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetVibrationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetVibrationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualSenseVibrationMode)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetVibrationMode)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818cc080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibrationMode", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseVibrationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualShock4MotorType)>(&::Rewired::ControllerExtensions::DualSenseExtension::GetVibration)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818cb4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualShock4MotorType, float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cc380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualShock4MotorType, float_t, float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cc680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualShock4MotorType, float_t, bool)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cc6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualShock4MotorType, float_t, float_t, bool)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetVibration)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1818cc1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(float_t, float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetVibration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818cc3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetVibration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(float_t, float_t, float_t, float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetVibration)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1818cc3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.get_lightColorRed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::get_lightColorRed)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818ccd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_lightColorRed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.set_lightColorRed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::set_lightColorRed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818cd2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_lightColorRed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.get_lightColorGreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::get_lightColorGreen)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818ccd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_lightColorGreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.set_lightColorGreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::set_lightColorGreen)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818cd2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_lightColorGreen", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.get_lightColorBlue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::get_lightColorBlue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818ccc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_lightColorBlue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.set_lightColorBlue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::set_lightColorBlue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818cd270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_lightColorBlue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetLightColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::GetLightColor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1818cabc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetLightColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetLightColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::UnityEngine::Color)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetLightColor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818cbd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetLightColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(float_t, float_t, float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetLightColor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1818cbe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetLightColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(float_t, float_t, float_t, float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetLightColor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1818cbbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.get_microphoneLightMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::get_microphoneLightMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818ccea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_microphoneLightMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.set_microphoneLightMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode)>(&::Rewired::ControllerExtensions::DualSenseExtension::set_microphoneLightMode)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818cd330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_microphoneLightMode", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.get_otherLightBrightness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseOtherLightBrightness (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::get_otherLightBrightness)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818ccf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_otherLightBrightness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.set_otherLightBrightness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualSenseOtherLightBrightness)>(&::Rewired::ControllerExtensions::DualSenseExtension::set_otherLightBrightness)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818cd3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_otherLightBrightness", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseOtherLightBrightness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.get_playerLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSensePlayerLightFlags (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::get_playerLights)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818ccfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_playerLights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.set_playerLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualSensePlayerLightFlags)>(&::Rewired::ControllerExtensions::DualSenseExtension::set_playerLights)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818cd490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_playerLights", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSensePlayerLightFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetAccelerometerValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::GetAccelerometerValueRaw)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ca740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetAccelerometerValueRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetAccelerometerValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::GetAccelerometerValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ca800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetAccelerometerValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetLastGyroscopeValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::GetLastGyroscopeValueRaw)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818caa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetLastGyroscopeValueRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetLastGyroscopeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::GetLastGyroscopeValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818cab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetLastGyroscopeValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetGyroscopeValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::GetGyroscopeValueRaw)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ca8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetGyroscopeValueRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetGyroscopeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::GetGyroscopeValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ca980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetGyroscopeValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::GetOrientation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818cad00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.ResetOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::ResetOrientation)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cb810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"ResetOrientation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.get_maxTouches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::get_maxTouches)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_maxTouches", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.get_touchCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::get_touchCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cd050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_touchCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetTouchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::GetTouchId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818cade0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTouchId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetTouchPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t, ::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ControllerExtensions::DualSenseExtension::GetTouchPosition)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818cb260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTouchPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetTouchPositionByTouchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t, ::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ControllerExtensions::DualSenseExtension::GetTouchPositionByTouchId)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818cb180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTouchPositionByTouchId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetTouchPositionAbsolute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t, ::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ControllerExtensions::DualSenseExtension::GetTouchPositionAbsolute)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1818cb010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTouchPositionAbsolute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetTouchPositionAbsoluteByTouchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t, ::by_ref<::UnityEngine::Vector2>)>(&::Rewired::ControllerExtensions::DualSenseExtension::GetTouchPositionAbsoluteByTouchId)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1818caea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTouchPositionAbsoluteByTouchId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.IsTouching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::IsTouching)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818cb750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"IsTouching", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.IsTouchingByTouchId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualSenseExtension::*)(int32_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::IsTouchingByTouchId)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818cb690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"IsTouchingByTouchId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.get_batteryLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::get_batteryLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818ccbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_batteryLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.get_batteryCharging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::get_batteryCharging)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818ccb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_batteryCharging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SetTriggerEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualSenseTriggerType, ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*)>(&::Rewired::ControllerExtensions::DualSenseExtension::SetTriggerEffect)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1818cbf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetTriggerEffect", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseTriggerType>(), ::i2c::type_of<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.GetTriggerEffectStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::DualSenseTriggerEffectStates (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::GetTriggerEffectStates)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818cb340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTriggerEffectStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValue)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ca980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValueRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValueRaw)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818ca8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValueRaw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cbb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_productId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cb930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_productName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cb9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cb8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_usage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cbac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::UpdateLoopType)>(&::Rewired::ControllerExtensions::DualSenseExtension::UpdateData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818cc8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.SourceUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::Interfaces::IControllerExtensionSource*)>(&::Rewired::ControllerExtensions::DualSenseExtension::SourceUpdated)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1818cc6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::Clone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818ca700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.lwvgqpiprGaTISOGPvbQyrUIbWrh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)()>(&::Rewired::ControllerExtensions::DualSenseExtension::lwvgqpiprGaTISOGPvbQyrUIbWrh)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1818cd140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"lwvgqpiprGaTISOGPvbQyrUIbWrh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::DualSenseExtension.mZKeWlwsivuxfGHICEMvTHwEAEiF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::DualSenseExtension::*)(::Rewired::ControllerExtensions::DualShock4MotorType, float_t, float_t)>(&::Rewired::ControllerExtensions::DualSenseExtension::mZKeWlwsivuxfGHICEMvTHwEAEiF)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cd1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"mZKeWlwsivuxfGHICEMvTHwEAEiF", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME*& Rewired::ControllerExtensions::DualSenseExtension::__cordl_internal_get_MnanwUNPQviUPtDUHlQrGEQAgPJD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MnanwUNPQviUPtDUHlQrGEQAgPJD;
}
constexpr ::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME* const& Rewired::ControllerExtensions::DualSenseExtension::__cordl_internal_get_MnanwUNPQviUPtDUHlQrGEQAgPJD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MnanwUNPQviUPtDUHlQrGEQAgPJD;
}
constexpr void Rewired::ControllerExtensions::DualSenseExtension::__cordl_internal_set_MnanwUNPQviUPtDUHlQrGEQAgPJD(::Rewired::ControllerExtensions::DualSenseExtension_EzAQcQAXjumsSIFbGwMZpuMGcPME*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MnanwUNPQviUPtDUHlQrGEQAgPJD = value;
}
constexpr bool& Rewired::ControllerExtensions::DualSenseExtension::__cordl_internal_get_CAkovduPlPEUDbzGcLoeERvtOlkt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CAkovduPlPEUDbzGcLoeERvtOlkt;
}
constexpr bool const& Rewired::ControllerExtensions::DualSenseExtension::__cordl_internal_get_CAkovduPlPEUDbzGcLoeERvtOlkt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CAkovduPlPEUDbzGcLoeERvtOlkt;
}
constexpr void Rewired::ControllerExtensions::DualSenseExtension::__cordl_internal_set_CAkovduPlPEUDbzGcLoeERvtOlkt(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CAkovduPlPEUDbzGcLoeERvtOlkt = value;
}
constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>& Rewired::ControllerExtensions::DualSenseExtension::__cordl_internal_get_NxHenEVjAdyFDfsRQKuRixdwXbEL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NxHenEVjAdyFDfsRQKuRixdwXbEL;
}
constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*> const& Rewired::ControllerExtensions::DualSenseExtension::__cordl_internal_get_NxHenEVjAdyFDfsRQKuRixdwXbEL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NxHenEVjAdyFDfsRQKuRixdwXbEL;
}
constexpr void Rewired::ControllerExtensions::DualSenseExtension::__cordl_internal_set_NxHenEVjAdyFDfsRQKuRixdwXbEL(::ArrayW<::Rewired::Utils::Classes::Utility::TimerAbs*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NxHenEVjAdyFDfsRQKuRixdwXbEL = value;
}
inline ::Rewired::Joystick* Rewired::ControllerExtensions::DualSenseExtension::NkQrRSKycEhEaDHvMiKGCrnInQEh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"NkQrRSKycEhEaDHvMiKGCrnInQEh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Joystick*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::_ctor(::Rewired::HID::Drivers::IDriver_DualSense*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_DualSense*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::_ctor(::Rewired::ControllerExtensions::DualSenseExtension*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseExtension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Rewired::ControllerExtensions::DualSenseExtension::get_vibrationMotorCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_vibrationMotorCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetVibration(int32_t  motorIndex, float_t  motorLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, duration);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetVibration(int32_t  motorIndex, float_t  motorLevel, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, stopOtherMotors);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetVibration(int32_t  motorIndex, float_t  motorLevel, float_t  duration, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motorIndex, motorLevel, duration, stopOtherMotors);
}
inline float_t Rewired::ControllerExtensions::DualSenseExtension::GetVibration(int32_t  motorIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetVibration", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, motorIndex);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::StopVibration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"StopVibration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::DualSenseVibrationMode Rewired::ControllerExtensions::DualSenseExtension::GetVibrationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetVibrationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseVibrationMode>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetVibrationMode(::Rewired::ControllerExtensions::DualSenseVibrationMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibrationMode", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseVibrationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline float_t Rewired::ControllerExtensions::DualSenseExtension::GetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, motor);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motor, motorLevel);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motor, motorLevel, duration);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motor, motorLevel, stopOtherMotors);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetVibration(::Rewired::ControllerExtensions::DualShock4MotorType  motor, float_t  motorLevel, float_t  duration, bool  stopOtherMotors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, motor, motorLevel, duration, stopOtherMotors);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftMotorLevel, rightMotorLevel);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetVibration(float_t  leftMotorLevel, float_t  rightMotorLevel, float_t  leftMotorDuration, float_t  rightMotorDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetVibration", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftMotorLevel, rightMotorLevel, leftMotorDuration, rightMotorDuration);
}
inline float_t Rewired::ControllerExtensions::DualSenseExtension::get_lightColorRed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_lightColorRed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::set_lightColorRed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_lightColorRed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ControllerExtensions::DualSenseExtension::get_lightColorGreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_lightColorGreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::set_lightColorGreen(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_lightColorGreen", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Rewired::ControllerExtensions::DualSenseExtension::get_lightColorBlue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_lightColorBlue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::set_lightColorBlue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_lightColorBlue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Rewired::ControllerExtensions::DualSenseExtension::GetLightColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetLightColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetLightColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetLightColor(float_t  red, float_t  green, float_t  blue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, red, green, blue);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SetLightColor(float_t  red, float_t  green, float_t  blue, float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetLightColor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, red, green, blue, intensity);
}
inline ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode Rewired::ControllerExtensions::DualSenseExtension::get_microphoneLightMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_microphoneLightMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::set_microphoneLightMode(::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_microphoneLightMode", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness Rewired::ControllerExtensions::DualSenseExtension::get_otherLightBrightness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_otherLightBrightness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseOtherLightBrightness>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::set_otherLightBrightness(::Rewired::ControllerExtensions::DualSenseOtherLightBrightness  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_otherLightBrightness", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseOtherLightBrightness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::ControllerExtensions::DualSensePlayerLightFlags Rewired::ControllerExtensions::DualSenseExtension::get_playerLights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_playerLights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSensePlayerLightFlags>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::set_playerLights(::Rewired::ControllerExtensions::DualSensePlayerLightFlags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"set_playerLights", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSensePlayerLightFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualSenseExtension::GetAccelerometerValueRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetAccelerometerValueRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualSenseExtension::GetAccelerometerValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetAccelerometerValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualSenseExtension::GetLastGyroscopeValueRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetLastGyroscopeValueRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualSenseExtension::GetLastGyroscopeValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetLastGyroscopeValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualSenseExtension::GetGyroscopeValueRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetGyroscopeValueRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualSenseExtension::GetGyroscopeValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetGyroscopeValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Rewired::ControllerExtensions::DualSenseExtension::GetOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::ResetOrientation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"ResetOrientation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Rewired::ControllerExtensions::DualSenseExtension::get_maxTouches()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_maxTouches", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::ControllerExtensions::DualSenseExtension::get_touchCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_touchCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Rewired::ControllerExtensions::DualSenseExtension::GetTouchId(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTouchId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
inline bool Rewired::ControllerExtensions::DualSenseExtension::GetTouchPosition(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTouchPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, position);
}
inline bool Rewired::ControllerExtensions::DualSenseExtension::GetTouchPositionByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTouchPositionByTouchId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, touchId, position);
}
inline bool Rewired::ControllerExtensions::DualSenseExtension::GetTouchPositionAbsolute(int32_t  index, ::by_ref<::UnityEngine::Vector2>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTouchPositionAbsolute", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, position);
}
inline bool Rewired::ControllerExtensions::DualSenseExtension::GetTouchPositionAbsoluteByTouchId(int32_t  touchId, ::by_ref<::UnityEngine::Vector2>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTouchPositionAbsoluteByTouchId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, touchId, position);
}
inline bool Rewired::ControllerExtensions::DualSenseExtension::IsTouching(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"IsTouching", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline bool Rewired::ControllerExtensions::DualSenseExtension::IsTouchingByTouchId(int32_t  touchId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"IsTouchingByTouchId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, touchId);
}
inline float_t Rewired::ControllerExtensions::DualSenseExtension::get_batteryLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_batteryLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Rewired::ControllerExtensions::DualSenseExtension::get_batteryCharging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"get_batteryCharging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::ControllerExtensions::DualSenseExtension::SetTriggerEffect(::Rewired::ControllerExtensions::DualSenseTriggerType  trigger, ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*  effect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"SetTriggerEffect", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualSenseTriggerType>(), ::i2c::type_of<::Rewired::ControllerExtensions::IDualSenseTriggerEffect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, trigger, effect);
}
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectStates Rewired::ControllerExtensions::DualSenseExtension::GetTriggerEffectStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"GetTriggerEffectStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::DualSenseTriggerEffectStates>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValueRaw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IDualShock4Extension.GetGyroscopeValueRaw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::DualSenseExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::UpdateData(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::Rewired::Controller_Extension* Rewired::ControllerExtensions::DualSenseExtension::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::lwvgqpiprGaTISOGPvbQyrUIbWrh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"lwvgqpiprGaTISOGPvbQyrUIbWrh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::DualSenseExtension::mZKeWlwsivuxfGHICEMvTHwEAEiF(::Rewired::ControllerExtensions::DualShock4MotorType  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::DualSenseExtension*>(),
                        {"mZKeWlwsivuxfGHICEMvTHwEAEiF", {}, {::i2c::type_of<::Rewired::ControllerExtensions::DualShock4MotorType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline ::Rewired::ControllerExtensions::DualSenseExtension* Rewired::ControllerExtensions::DualSenseExtension::New_ctor(::Rewired::HID::Drivers::IDriver_DualSense*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::DualSenseExtension*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerExtensions::DualSenseExtension* Rewired::ControllerExtensions::DualSenseExtension::New_ctor(::Rewired::ControllerExtensions::DualSenseExtension*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::DualSenseExtension*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr  Rewired::ControllerExtensions::DualSenseExtension::operator ::Rewired::Interfaces::IControllerVibrator*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* Rewired::ControllerExtensions::DualSenseExtension::i___Rewired__Interfaces__IControllerVibrator() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr  Rewired::ControllerExtensions::DualSenseExtension::operator ::Rewired::ControllerExtensions::IDualShock4Extension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IDualShock4Extension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr ::Rewired::ControllerExtensions::IDualShock4Extension* Rewired::ControllerExtensions::DualSenseExtension::i___Rewired__ControllerExtensions__IDualShock4Extension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IDualShock4Extension*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseExtension"
constexpr  Rewired::ControllerExtensions::DualSenseExtension::operator ::Rewired::ControllerExtensions::IDualSenseExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IDualSenseExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseExtension"
constexpr ::Rewired::ControllerExtensions::IDualSenseExtension* Rewired::ControllerExtensions::DualSenseExtension::i___Rewired__ControllerExtensions__IDualSenseExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IDualSenseExtension*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::ControllerExtensions::DualSenseExtension::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::ControllerExtensions::DualSenseExtension::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::DualSenseExtension::DualSenseExtension()   {
}
