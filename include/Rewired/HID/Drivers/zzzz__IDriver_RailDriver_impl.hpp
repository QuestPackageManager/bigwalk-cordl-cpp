#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/IDriver_RailDriver.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_RailDriver_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IControllerDriver_def.hpp"
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_RailDriver.get_SpeakerEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::HID::Drivers::IDriver_RailDriver::*)()>(&::Rewired::HID::Drivers::IDriver_RailDriver::get_SpeakerEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_RailDriver.set_SpeakerEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_RailDriver::*)(bool)>(&::Rewired::HID::Drivers::IDriver_RailDriver::set_SpeakerEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_RailDriver.SetLEDDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_RailDriver::*)(int32_t, uint8_t)>(&::Rewired::HID::Drivers::IDriver_RailDriver::SetLEDDisplay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::IDriver_RailDriver.SetLEDDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::IDriver_RailDriver::*)(uint8_t, uint8_t, uint8_t)>(&::Rewired::HID::Drivers::IDriver_RailDriver::SetLEDDisplay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Rewired::HID::Drivers::IDriver_RailDriver::get_SpeakerEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::IDriver_RailDriver::set_SpeakerEnabled(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::HID::Drivers::IDriver_RailDriver::SetLEDDisplay(int32_t  digitIndex, uint8_t  digitBitValues)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digitIndex, digitBitValues);
}
inline void Rewired::HID::Drivers::IDriver_RailDriver::SetLEDDisplay(uint8_t  digit1BitValues, uint8_t  digit2BitValues, uint8_t  digit3BitValues)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::IDriver_RailDriver*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digit1BitValues, digit2BitValues, digit3BitValues);
}
/// @brief Convert operator to "::Rewired::HID::Drivers::IControllerDriver"
constexpr  Rewired::HID::Drivers::IDriver_RailDriver::operator ::Rewired::HID::Drivers::IControllerDriver*() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::HID::Drivers::IControllerDriver"
constexpr ::Rewired::HID::Drivers::IControllerDriver* Rewired::HID::Drivers::IDriver_RailDriver::i___Rewired__HID__Drivers__IControllerDriver() noexcept {
return static_cast<::Rewired::HID::Drivers::IControllerDriver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::HID::Drivers::IDriver_RailDriver::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::HID::Drivers::IDriver_RailDriver::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
