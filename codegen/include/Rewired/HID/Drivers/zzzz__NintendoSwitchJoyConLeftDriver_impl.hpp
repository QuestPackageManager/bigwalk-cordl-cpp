#pragma once
// IWYU pragma private; include "Rewired/HID/Drivers/NintendoSwitchJoyConLeftDriver.hpp"
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchJoyConDriver_impl.hpp"
#include "Rewired/HID/Drivers/zzzz__NintendoSwitchJoyConLeftDriver_def.hpp"
#include "Rewired/HID/Drivers/zzzz__HIDDeviceDriver_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__NativeBuffer_def.hpp"
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver.get_byteIndexStartSticks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::get_byteIndexStartSticks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180908af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::*)(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*)>(&::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181abae90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver.UpdateButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::*)(::Rewired::Utils::Classes::Data::NativeBuffer*, double_t)>(&::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::UpdateButtons)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181ababa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver.HandleGripStyleStickAxisSwap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::*)(::by_ref<uint16_t>, ::by_ref<uint16_t>)>(&::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::HandleGripStyleStickAxisSwap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abab60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::*)()>(&::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::Finalize)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181abaaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::*)(bool)>(&::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181aba5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(),
                    {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver.Matches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t)>(&::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::Matches)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181abab80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(),
                        {"Matches", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::get_byteIndexStartSticks()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::UpdateButtons(::Rewired::Utils::Classes::Data::NativeBuffer*  inputReport, double_t  timestamp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputReport, timestamp);
}
inline void Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::HandleGripStyleStickAxisSwap(::by_ref<uint16_t>  stickX, ::by_ref<uint16_t>  stickY)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stickX, stickY);
}
inline void Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::Matches(int32_t  vid, int32_t  pid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(),
                        {"Matches", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vid, pid);
}
inline ::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver* Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::New_ctor(::Rewired::HID::Drivers::HIDDeviceDriver_InitArgs*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::HID::Drivers::NintendoSwitchJoyConLeftDriver::NintendoSwitchJoyConLeftDriver()   {
}
