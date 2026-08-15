#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/NintendoSwitchProControllerDriver.hpp"
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchGamepadDriver_impl.hpp"
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchProControllerDriver_def.hpp"
#include "GlobalNamespace/zzzz__nxSccnjzMkUjLoMzgjhhzPVcPAxF_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/HID/Drivers/zzzz__HIDDeviceDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IControllerDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchController_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchProController_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__NativeBuffer_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchProControllerDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::*)(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*)>(&::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x181abb690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchProControllerDriver.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::*)(::Rewired::UpdateLoopType)>(&::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181abb680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchProControllerDriver.CreateControllerExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::CreateControllerExtension)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181abaea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchProControllerDriver.UpdateButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::*)(::Rewired::Utils::Classes::Data::NativeBuffer*, double_t)>(&::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::UpdateButtons)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x181abaf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchProControllerDriver.UpdateElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::*)(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>, ::Rewired::Utils::Classes::Data::NativeBuffer*, double_t)>(&::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::UpdateElements)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181abb3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchProControllerDriver.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::Finalize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181aba640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchProControllerDriver.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::*)(bool)>(&::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181abaee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchProControllerDriver.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::Matches)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abaf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(),
                        {"Matches", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Rewired::HID::Drivers::NintendoSwitchProControllerDriver::__cordl_internal_get_rtWGVHavRYRsTeqAGWodOVbeRMTpA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rtWGVHavRYRsTeqAGWodOVbeRMTpA;
}
constexpr ::ArrayW<uint8_t> const& Rewired::HID::Drivers::NintendoSwitchProControllerDriver::__cordl_internal_get_rtWGVHavRYRsTeqAGWodOVbeRMTpA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rtWGVHavRYRsTeqAGWodOVbeRMTpA;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchProControllerDriver::__cordl_internal_set_rtWGVHavRYRsTeqAGWodOVbeRMTpA(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rtWGVHavRYRsTeqAGWodOVbeRMTpA = value;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer*& Rewired::HID::Drivers::NintendoSwitchProControllerDriver::__cordl_internal_get_zkJdvOpbwnwobMcMRbxWDWXBEnYUA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zkJdvOpbwnwobMcMRbxWDWXBEnYUA;
}
constexpr ::Rewired::Utils::Classes::Data::NativeBuffer* const& Rewired::HID::Drivers::NintendoSwitchProControllerDriver::__cordl_internal_get_zkJdvOpbwnwobMcMRbxWDWXBEnYUA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zkJdvOpbwnwobMcMRbxWDWXBEnYUA;
}
constexpr void Rewired::HID::Drivers::NintendoSwitchProControllerDriver::__cordl_internal_set_zkJdvOpbwnwobMcMRbxWDWXBEnYUA(::Rewired::Utils::Classes::Data::NativeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zkJdvOpbwnwobMcMRbxWDWXBEnYUA = value;
}
inline void Rewired::HID::Drivers::NintendoSwitchProControllerDriver::_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::HID::Drivers::NintendoSwitchProControllerDriver::Update(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline ::Rewired::Controller_Extension* Rewired::HID::Drivers::NintendoSwitchProControllerDriver::CreateControllerExtension()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchProControllerDriver::UpdateButtons(::Rewired::Utils::Classes::Data::NativeBuffer*  inputReport, double_t  timestamp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputReport, timestamp);
}
inline void Rewired::HID::Drivers::NintendoSwitchProControllerDriver::UpdateElements(::ArrayW<::GlobalNamespace::nxSccnjzMkUjLoMzgjhhzPVcPAxF*>  elements, ::Rewired::Utils::Classes::Data::NativeBuffer*  inputReport, double_t  timestamp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elements, inputReport, timestamp);
}
inline void Rewired::HID::Drivers::NintendoSwitchProControllerDriver::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchProControllerDriver::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool Rewired::HID::Drivers::NintendoSwitchProControllerDriver::Matches(int32_t  vid, int32_t  pid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(),
                        {"Matches", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vid, pid);
}
inline ::Rewired::HID::Drivers::NintendoSwitchProControllerDriver* Rewired::HID::Drivers::NintendoSwitchProControllerDriver::New_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HID::Drivers::NintendoSwitchProControllerDriver*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchProController"
constexpr  Rewired::HID::Drivers::NintendoSwitchProControllerDriver::operator ::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchProController"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchProController* Rewired::HID::Drivers::NintendoSwitchProControllerDriver::i___Rewired__HID__Drivers__IDriver_NintendoSwitchProController() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr  Rewired::HID::Drivers::NintendoSwitchProControllerDriver::operator ::Rewired::HID::Drivers::IDriver_NintendoSwitchController*() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IDriver_NintendoSwitchController"
constexpr ::Rewired::HID::Drivers::IDriver_NintendoSwitchController* Rewired::HID::Drivers::NintendoSwitchProControllerDriver::i___Rewired__HID__Drivers__IDriver_NintendoSwitchController() noexcept {
return static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr  Rewired::HID::Drivers::NintendoSwitchProControllerDriver::operator ::Rewired::HID::Drivers::IControllerDriver*() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* Rewired::HID::Drivers::NintendoSwitchProControllerDriver::i___Rewired__HID__Drivers__IControllerDriver() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::HID::Drivers::NintendoSwitchProControllerDriver::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::HID::Drivers::NintendoSwitchProControllerDriver::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::NintendoSwitchProControllerDriver::NintendoSwitchProControllerDriver()   {
}
