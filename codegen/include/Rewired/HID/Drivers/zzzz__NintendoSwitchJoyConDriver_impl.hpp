#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/NintendoSwitchJoyConDriver.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConGripStyle_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConType_impl.hpp"
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchGamepadDriver_impl.hpp"
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchJoyConDriver_def.hpp"
#include "GlobalNamespace/zzzz__nxSccnjzMkUjLoMzgjhhzPVcPAxF_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConGripStyle_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchJoyConType_def.hpp"
#include "Rewired/HID/Drivers/zzzz__HIDDeviceDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IControllerDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchController_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchJoyCon_def.hpp"
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchGamepadDriver_def.hpp"
#include "Rewired/Interfaces/zzzz__IAxisCalibrationIndexMap_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__NativeBuffer_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver.get_buttonAxisReadBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::get_buttonAxisReadBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180337120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {"get_buttonAxisReadBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver.get_byteIndexStartSticks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::get_byteIndexStartSticks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver.get_joyConType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchJoyConType (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::get_joyConType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d37f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {"get_joyConType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver.get_joyConGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::get_joyConGripStyle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181abaad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {"get_joyConGripStyle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver.set_joyConGripStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)(::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle)>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::set_joyConGripStyle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181abaae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {"set_joyConGripStyle", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver.Rewired_Interfaces_IAxisCalibrationIndexMap_GetMappedAxisIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)(int32_t)>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::Rewired_Interfaces_IAxisCalibrationIndexMap_GetMappedAxisIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181aba6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {"Rewired.Interfaces.IAxisCalibrationIndexMap.GetMappedAxisIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt)>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181aba8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver.CreateControllerExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::CreateControllerExtension)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181aba5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver.UpdateElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>, ::Rewired::Utils::Classes::Data::NativeBuffer*, double_t)>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::UpdateElements)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181aba6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver.HandleGripStyleStickAxisSwap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)(::by_ref<uint16_t>, ::by_ref<uint16_t>)>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::HandleGripStyleStickAxisSwap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::Finalize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181aba640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::*)(bool)>(&::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181aba5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 16}
                ));
    return ___internal_method;
  }
};
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_get_pOXoSrecMiMunSUIyFVITAHSSrSL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pOXoSrecMiMunSUIyFVITAHSSrSL;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_get_pOXoSrecMiMunSUIyFVITAHSSrSL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pOXoSrecMiMunSUIyFVITAHSSrSL;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_set_pOXoSrecMiMunSUIyFVITAHSSrSL(::Rewired::Utils::Classes::Data::NativeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pOXoSrecMiMunSUIyFVITAHSSrSL = value;
}
constexpr ::Rewired::ControllerExtensions::NintendoSwitchJoyConType& Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_get_OaZwlTAcOPHUiBHHLAaYnysVAnXI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OaZwlTAcOPHUiBHHLAaYnysVAnXI;
}
constexpr ::Rewired::ControllerExtensions::NintendoSwitchJoyConType const& Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_get_OaZwlTAcOPHUiBHHLAaYnysVAnXI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OaZwlTAcOPHUiBHHLAaYnysVAnXI;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_set_OaZwlTAcOPHUiBHHLAaYnysVAnXI(::Rewired::ControllerExtensions::NintendoSwitchJoyConType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OaZwlTAcOPHUiBHHLAaYnysVAnXI = value;
}
constexpr ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle& Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_get_RSOTuyEWQUdQXWEAUjvXOVbUCxeCA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RSOTuyEWQUdQXWEAUjvXOVbUCxeCA;
}
constexpr ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle const& Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_get_RSOTuyEWQUdQXWEAUjvXOVbUCxeCA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RSOTuyEWQUdQXWEAUjvXOVbUCxeCA;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_set_RSOTuyEWQUdQXWEAUjvXOVbUCxeCA(::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RSOTuyEWQUdQXWEAUjvXOVbUCxeCA = value;
}
constexpr ::ArrayW<uint8_t>& Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_get_nskZjLhKeGNfCmuQDmJbgDBxYUAg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nskZjLhKeGNfCmuQDmJbgDBxYUAg;
}
constexpr ::ArrayW<uint8_t> const& Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_get_nskZjLhKeGNfCmuQDmJbgDBxYUAg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nskZjLhKeGNfCmuQDmJbgDBxYUAg;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchJoyConDriver::__cordl_internal_set_nskZjLhKeGNfCmuQDmJbgDBxYUAg(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nskZjLhKeGNfCmuQDmJbgDBxYUAg = value;
}
inline ::ArrayW<uint8_t> Rewired::HID::Drivers::NintendoSwitchJoyConDriver::get_buttonAxisReadBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {"get_buttonAxisReadBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Rewired::HID::Drivers::NintendoSwitchJoyConDriver::get_byteIndexStartSticks()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConType Rewired::HID::Drivers::NintendoSwitchJoyConDriver::get_joyConType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {"get_joyConType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchJoyConType>(this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle Rewired::HID::Drivers::NintendoSwitchJoyConDriver::get_joyConGripStyle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {"get_joyConGripStyle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchJoyConDriver::set_joyConGripStyle(::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {"set_joyConGripStyle", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchJoyConGripStyle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Rewired::HID::Drivers::NintendoSwitchJoyConDriver::Rewired_Interfaces_IAxisCalibrationIndexMap_GetMappedAxisIndex(int32_t  elementIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {"Rewired.Interfaces.IAxisCalibrationIndexMap.GetMappedAxisIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elementIndex);
}
inline void Rewired::HID::Drivers::NintendoSwitchJoyConDriver::_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>(), ::i2c::type_of<::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::Controller_Extension* Rewired::HID::Drivers::NintendoSwitchJoyConDriver::CreateControllerExtension()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchJoyConDriver::UpdateElements(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>  elements, ::Rewired::Utils::Classes::Data::NativeBuffer*  inputReport, double_t  timestamp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elements, inputReport, timestamp);
}
inline void Rewired::HID::Drivers::NintendoSwitchJoyConDriver::HandleGripStyleStickAxisSwap(::by_ref<uint16_t>  stickX, ::by_ref<uint16_t>  stickY)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stickX, stickY);
}
inline void Rewired::HID::Drivers::NintendoSwitchJoyConDriver::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchJoyConDriver::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver* Rewired::HID::Drivers::NintendoSwitchJoyConDriver::New_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace, ::Rewired::HID::Drivers::NintendoSwitchGamepadDriver_kxbStqETdjAoKtnWpeFPyxfdoDkt  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HID::Drivers::NintendoSwitchJoyConDriver*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon"
constexpr  Rewired::HID::Drivers::NintendoSwitchJoyConDriver::operator ::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon* Rewired::HID::Drivers::NintendoSwitchJoyConDriver::i___Rewired__HID__Drivers__IDriver_NintendoSwitchJoyCon() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchJoyCon*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr  Rewired::HID::Drivers::NintendoSwitchJoyConDriver::operator ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* Rewired::HID::Drivers::NintendoSwitchJoyConDriver::i___Rewired__HID__Drivers__IDriver_NintendoSwitchController() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr  Rewired::HID::Drivers::NintendoSwitchJoyConDriver::operator ::Rewired::HID::Drivers::IControllerDriver*() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* Rewired::HID::Drivers::NintendoSwitchJoyConDriver::i___Rewired__HID__Drivers__IControllerDriver() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::HID::Drivers::NintendoSwitchJoyConDriver::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::HID::Drivers::NintendoSwitchJoyConDriver::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr  Rewired::HID::Drivers::NintendoSwitchJoyConDriver::operator ::Rewired::Interfaces::IAxisCalibrationIndexMap*() noexcept {
return static_cast<::Rewired::Interfaces::IAxisCalibrationIndexMap*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IAxisCalibrationIndexMap"
constexpr ::Rewired::Interfaces::IAxisCalibrationIndexMap* Rewired::HID::Drivers::NintendoSwitchJoyConDriver::i___Rewired__Interfaces__IAxisCalibrationIndexMap() noexcept {
return static_cast<::Rewired::Interfaces::IAxisCalibrationIndexMap*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::NintendoSwitchJoyConDriver::NintendoSwitchJoyConDriver()   {
}
