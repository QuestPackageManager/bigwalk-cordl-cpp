#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/RailDriverDriver.hpp"
#include "GlobalNamespace/zzzz__WLETGeuJfanxUuxlAoBgHTRHTfCG_impl.hpp"
#include "Rewired/HID/Drivers/zzzz__HIDDeviceDriver_impl.hpp"
#include "Rewired/HID/Drivers/zzzz__RailDriverDriver_def.hpp"
#include "GlobalNamespace/zzzz__fmjOcSgFrjmQzJlrXgwToxkjNXXo_def.hpp"
#include "GlobalNamespace/zzzz__nxSccnjzMkUjLoMzgjhhzPVcPAxF_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/HID/Drivers/zzzz__HIDDeviceDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IControllerDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_RailDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__RailDriverDriver_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__NativeBuffer_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA()   {
}
constexpr ::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA  Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA::Speaker{static_cast<int32_t>(0x0)};
constexpr ::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA  Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA::LED{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.get_SpeakerEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::RailDriverDriver::*)()>(&::Rewired::HID::Drivers::RailDriverDriver::get_SpeakerEnabled)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180347a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"get_SpeakerEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.set_SpeakerEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::RailDriverDriver::*)(bool)>(&::Rewired::HID::Drivers::RailDriverDriver::set_SpeakerEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abc7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"set_SpeakerEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.SetLEDDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::RailDriverDriver::*)(int32_t, uint8_t)>(&::Rewired::HID::Drivers::RailDriverDriver::SetLEDDisplay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181abc0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"SetLEDDisplay", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.SetLEDDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::RailDriverDriver::*)(uint8_t, uint8_t, uint8_t)>(&::Rewired::HID::Drivers::RailDriverDriver::SetLEDDisplay)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181abc0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"SetLEDDisplay", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::HID::Drivers::RailDriverDriver::*)()>(&::Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181abc090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_productId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::HID::Drivers::RailDriverDriver::*)()>(&::Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abc020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_productName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::HID::Drivers::RailDriverDriver::*)()>(&::Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181abc040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::HID::Drivers::RailDriverDriver::*)()>(&::Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181abc010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::HID::Drivers::RailDriverDriver::*)()>(&::Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abc050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.Rewired_ControllerExtensions_IHIDControllerExtension_get_usage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::HID::Drivers::RailDriverDriver::*)()>(&::Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abc070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::RailDriverDriver::*)(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*)>(&::Rewired::HID::Drivers::RailDriverDriver::_ctor)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x181abc1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::RailDriverDriver::*)(::Rewired::UpdateLoopType)>(&::Rewired::HID::Drivers::RailDriverDriver::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.ParseInputReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::RailDriverDriver::*)(::System::IntPtr, int32_t, double_t)>(&::Rewired::HID::Drivers::RailDriverDriver::ParseInputReport)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181abbce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.CreateControllerExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::HID::Drivers::RailDriverDriver::*)()>(&::Rewired::HID::Drivers::RailDriverDriver::CreateControllerExtension)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181abbbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.ACymrcHNQNWdsDZQaMZlCNCEnexm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::RailDriverDriver::*)(::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA, ::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo)>(&::Rewired::HID::Drivers::RailDriverDriver::ACymrcHNQNWdsDZQaMZlCNCEnexm)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181abba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"ACymrcHNQNWdsDZQaMZlCNCEnexm", {}, {::i2c::type_of<::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA>(), ::i2c::type_of<::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.gTrwdVrmzNcOVEopdtOQgtkTEAvdA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::RailDriverDriver::*)(::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA)>(&::Rewired::HID::Drivers::RailDriverDriver::gTrwdVrmzNcOVEopdtOQgtkTEAvdA)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181abc6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"gTrwdVrmzNcOVEopdtOQgtkTEAvdA", {}, {::i2c::type_of<::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.tundpagSUPiFXWzaRzIdzltKoyOj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::RailDriverDriver::*)(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo)>(&::Rewired::HID::Drivers::RailDriverDriver::tundpagSUPiFXWzaRzIdzltKoyOj)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181abc840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"tundpagSUPiFXWzaRzIdzltKoyOj", {}, {::i2c::type_of<::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.RQEMjktmkTlAGWAydQMEHSGqbdyg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::RailDriverDriver::*)(::Rewired::Utils::Classes::Data::NativeBuffer*, double_t)>(&::Rewired::HID::Drivers::RailDriverDriver::RQEMjktmkTlAGWAydQMEHSGqbdyg)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x181abbdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"RQEMjktmkTlAGWAydQMEHSGqbdyg", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.IlCbGyHsGnzOvpXfpEcOEjvSXSTX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::RailDriverDriver::*)(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>, ::Rewired::Utils::Classes::Data::NativeBuffer*, double_t)>(&::Rewired::HID::Drivers::RailDriverDriver::IlCbGyHsGnzOvpXfpEcOEjvSXSTX)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181ab0360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"IlCbGyHsGnzOvpXfpEcOEjvSXSTX", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::RailDriverDriver::*)()>(&::Rewired::HID::Drivers::RailDriverDriver::Finalize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abbc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::RailDriverDriver::*)(bool)>(&::Rewired::HID::Drivers::RailDriverDriver::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181abbbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::RailDriverDriver.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::Rewired::HID::Drivers::RailDriverDriver::Matches)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abbcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Matches", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_QXRDlKfZjoWlvJuxRyIYqvogUzTC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QXRDlKfZjoWlvJuxRyIYqvogUzTC;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_QXRDlKfZjoWlvJuxRyIYqvogUzTC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QXRDlKfZjoWlvJuxRyIYqvogUzTC;
}
constexpr void Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_set_QXRDlKfZjoWlvJuxRyIYqvogUzTC(::Rewired::Utils::Classes::Data::NativeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QXRDlKfZjoWlvJuxRyIYqvogUzTC = value;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_mwWtjpZGAYGufSRCtwgcmrOSNLWK()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mwWtjpZGAYGufSRCtwgcmrOSNLWK;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_mwWtjpZGAYGufSRCtwgcmrOSNLWK() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mwWtjpZGAYGufSRCtwgcmrOSNLWK;
}
constexpr void Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_set_mwWtjpZGAYGufSRCtwgcmrOSNLWK(::Rewired::Utils::Classes::Data::NativeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mwWtjpZGAYGufSRCtwgcmrOSNLWK = value;
}
constexpr bool& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_UlqnEHxkiWvnhoZDCumDdOavClzf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UlqnEHxkiWvnhoZDCumDdOavClzf;
}
constexpr bool const& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_UlqnEHxkiWvnhoZDCumDdOavClzf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UlqnEHxkiWvnhoZDCumDdOavClzf;
}
constexpr void Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_set_UlqnEHxkiWvnhoZDCumDdOavClzf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UlqnEHxkiWvnhoZDCumDdOavClzf = value;
}
constexpr ::ArrayW<uint8_t>& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_SSkeLqafBdJGBpvKLEolBfjfmPaD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SSkeLqafBdJGBpvKLEolBfjfmPaD;
}
constexpr ::ArrayW<uint8_t> const& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_SSkeLqafBdJGBpvKLEolBfjfmPaD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SSkeLqafBdJGBpvKLEolBfjfmPaD;
}
constexpr void Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_set_SSkeLqafBdJGBpvKLEolBfjfmPaD(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SSkeLqafBdJGBpvKLEolBfjfmPaD = value;
}
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_ZWjHVcLbwTSyLccpgdQcjiWenxtf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZWjHVcLbwTSyLccpgdQcjiWenxtf;
}
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice* const& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_ZWjHVcLbwTSyLccpgdQcjiWenxtf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ZWjHVcLbwTSyLccpgdQcjiWenxtf;
}
constexpr void Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_set_ZWjHVcLbwTSyLccpgdQcjiWenxtf(::Rewired::HID::Drivers::HIDDeviceDriver_IHIDDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ZWjHVcLbwTSyLccpgdQcjiWenxtf = value;
}
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_bvxSfagdoQExZFbvrhEZxmZhFjKb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bvxSfagdoQExZFbvrhEZxmZhFjKb;
}
constexpr ::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties const& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_bvxSfagdoQExZFbvrhEZxmZhFjKb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bvxSfagdoQExZFbvrhEZxmZhFjKb;
}
constexpr void Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_set_bvxSfagdoQExZFbvrhEZxmZhFjKb(::Rewired::HID::Drivers::HIDDeviceDriver_HIDProperties  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bvxSfagdoQExZFbvrhEZxmZhFjKb = value;
}
constexpr ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_eHoVmjdpWnxUaCsagbvbDGUKzXAU()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eHoVmjdpWnxUaCsagbvbDGUKzXAU;
}
constexpr ::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG const& Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_get_eHoVmjdpWnxUaCsagbvbDGUKzXAU() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eHoVmjdpWnxUaCsagbvbDGUKzXAU;
}
constexpr void Rewired::HID::Drivers::RailDriverDriver::__cordl_internal_set_eHoVmjdpWnxUaCsagbvbDGUKzXAU(::GlobalNamespace::WLETGeuJfanxUuxlAoBgHTRHTfCG  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eHoVmjdpWnxUaCsagbvbDGUKzXAU = value;
}
inline bool Rewired::HID::Drivers::RailDriverDriver::get_SpeakerEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"get_SpeakerEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::RailDriverDriver::set_SpeakerEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"set_SpeakerEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::HID::Drivers::RailDriverDriver::SetLEDDisplay(int32_t  digitIndex, uint8_t  digitBitValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"SetLEDDisplay", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digitIndex, digitBitValues);
}
inline void Rewired::HID::Drivers::RailDriverDriver::SetLEDDisplay(uint8_t  digit1BitValues, uint8_t  digit2BitValues, uint8_t  digit3BitValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"SetLEDDisplay", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digit1BitValues, digit2BitValues, digit3BitValues);
}
inline uint16_t Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline ::StringW Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint16_t Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::HID::Drivers::RailDriverDriver::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::RailDriverDriver::_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::HID::Drivers::RailDriverDriver::Update(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline bool Rewired::HID::Drivers::RailDriverDriver::ParseInputReport(::System::IntPtr  inputReportPtr, int32_t  inputReportLength, double_t  timestamp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inputReportPtr, inputReportLength, timestamp);
}
inline ::Rewired::Controller_Extension* Rewired::HID::Drivers::RailDriverDriver::CreateControllerExtension()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline bool Rewired::HID::Drivers::RailDriverDriver::ACymrcHNQNWdsDZQaMZlCNCEnexm(::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA  _cordl_fixed_empty_name_whitespace, ::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"ACymrcHNQNWdsDZQaMZlCNCEnexm", {}, {::i2c::type_of<::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA>(), ::i2c::type_of<::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::HID::Drivers::RailDriverDriver::gTrwdVrmzNcOVEopdtOQgtkTEAvdA(::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"gTrwdVrmzNcOVEopdtOQgtkTEAvdA", {}, {::i2c::type_of<::Rewired::HID::Drivers::RailDriverDriver_PhinPfZMESbSnHPnOlAMlgizPhiCA>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::HID::Drivers::RailDriverDriver::tundpagSUPiFXWzaRzIdzltKoyOj(::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"tundpagSUPiFXWzaRzIdzltKoyOj", {}, {::i2c::type_of<::GlobalNamespace::fmjOcSgFrjmQzJlrXgwToxkjNXXo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::HID::Drivers::RailDriverDriver::RQEMjktmkTlAGWAydQMEHSGqbdyg(::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace, double_t  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"RQEMjktmkTlAGWAydQMEHSGqbdyg", {}, {::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::HID::Drivers::RailDriverDriver::IlCbGyHsGnzOvpXfpEcOEjvSXSTX(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::Classes::Data::NativeBuffer*  _cordl_fixed_empty_name_whitespace_param_1, double_t  _cordl_fixed_empty_name_whitespace_param_2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"IlCbGyHsGnzOvpXfpEcOEjvSXSTX", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>>(), ::i2c::type_of<::Rewired::Utils::Classes::Data::NativeBuffer*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2);
}
inline void Rewired::HID::Drivers::RailDriverDriver::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::RailDriverDriver::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool Rewired::HID::Drivers::RailDriverDriver::Matches(int32_t  vid, int32_t  pid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::RailDriverDriver*>(),
                        {"Matches", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vid, pid);
}
inline ::Rewired::HID::Drivers::RailDriverDriver* Rewired::HID::Drivers::RailDriverDriver::New_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HID::Drivers::RailDriverDriver*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::HID::Drivers::RailDriverDriver::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::HID::Drivers::RailDriverDriver::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_RailDriver"
constexpr  Rewired::HID::Drivers::RailDriverDriver::operator ::Rewired::HID::Drivers::IDriver_RailDriver*() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_RailDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IDriver_RailDriver"
constexpr ::Rewired::HID::Drivers::IDriver_RailDriver* Rewired::HID::Drivers::RailDriverDriver::i___Rewired__HID__Drivers__IDriver_RailDriver() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_RailDriver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr  Rewired::HID::Drivers::RailDriverDriver::operator ::Rewired::HID::Drivers::IControllerDriver*() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* Rewired::HID::Drivers::RailDriverDriver::i___Rewired__HID__Drivers__IControllerDriver() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::HID::Drivers::RailDriverDriver::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::HID::Drivers::RailDriverDriver::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::RailDriverDriver::RailDriverDriver()   {
}
