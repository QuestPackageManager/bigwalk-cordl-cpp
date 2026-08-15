#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/RailDriverExtension.hpp"
#include "Rewired/zzzz__Controller_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__RailDriverExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__RailDriverExtension_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_RailDriver_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerExtensionSource_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__Joystick_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab::*)(::Rewired::HID::Drivers::IDriver_RailDriver*)>(&::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_RailDriver*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::HID::Drivers::IDriver_RailDriver*& Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab::__cordl_internal_get_pkEbPuPSXbYRoUitnWQtxbPbAHWT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pkEbPuPSXbYRoUitnWQtxbPbAHWT;
}
constexpr ::Rewired::HID::Drivers::IDriver_RailDriver* const& Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab::__cordl_internal_get_pkEbPuPSXbYRoUitnWQtxbPbAHWT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pkEbPuPSXbYRoUitnWQtxbPbAHWT;
}
constexpr void Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab::__cordl_internal_set_pkEbPuPSXbYRoUitnWQtxbPbAHWT(::Rewired::HID::Drivers::IDriver_RailDriver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pkEbPuPSXbYRoUitnWQtxbPbAHWT = value;
}
inline void Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab::_ctor(::Rewired::HID::Drivers::IDriver_RailDriver*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_RailDriver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab* Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab::New_ctor(::Rewired::HID::Drivers::IDriver_RailDriver*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr  Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab::operator ::Rewired::Interfaces::IControllerExtensionSource*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerExtensionSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerExtensionSource"
constexpr ::Rewired::Interfaces::IControllerExtensionSource* Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab::i___Rewired__Interfaces__IControllerExtensionSource() noexcept {
return static_cast<::Rewired::Interfaces::IControllerExtensionSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab()   {
}
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.oHYKtruZSuRRLtPyAilLTdHMyCil
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Joystick* (::Rewired::ControllerExtensions::RailDriverExtension::*)()>(&::Rewired::ControllerExtensions::RailDriverExtension::oHYKtruZSuRRLtPyAilLTdHMyCil)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181884250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"oHYKtruZSuRRLtPyAilLTdHMyCil", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::RailDriverExtension::*)(::Rewired::HID::Drivers::IDriver_RailDriver*)>(&::Rewired::ControllerExtensions::RailDriverExtension::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818deb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_RailDriver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::RailDriverExtension::*)(::Rewired::ControllerExtensions::RailDriverExtension*)>(&::Rewired::ControllerExtensions::RailDriverExtension::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818ca6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::RailDriverExtension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.get_speakerEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerExtensions::RailDriverExtension::*)()>(&::Rewired::ControllerExtensions::RailDriverExtension::get_speakerEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818debc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"get_speakerEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.set_speakerEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::RailDriverExtension::*)(bool)>(&::Rewired::ControllerExtensions::RailDriverExtension::set_speakerEnabled)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818dec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"set_speakerEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.SetLEDDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::RailDriverExtension::*)(int32_t, uint8_t)>(&::Rewired::ControllerExtensions::RailDriverExtension::SetLEDDisplay)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1818de810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"SetLEDDisplay", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.SetLEDDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::RailDriverExtension::*)(uint8_t, uint8_t, uint8_t)>(&::Rewired::ControllerExtensions::RailDriverExtension::SetLEDDisplay)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1818de950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"SetLEDDisplay", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::RailDriverExtension::*)()>(&::Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cbb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_productId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::RailDriverExtension::*)()>(&::Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cb930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_productName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::RailDriverExtension::*)()>(&::Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cb9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::ControllerExtensions::RailDriverExtension::*)()>(&::Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818cb8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::RailDriverExtension::*)()>(&::Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.Rewired_ControllerExtensions_IHIDControllerExtension_get_usage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Rewired::ControllerExtensions::RailDriverExtension::*)()>(&::Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1818cbac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.UpdateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::RailDriverExtension::*)(::Rewired::UpdateLoopType)>(&::Rewired::ControllerExtensions::RailDriverExtension::UpdateData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.SourceUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::RailDriverExtension::*)(::Rewired::Interfaces::IControllerExtensionSource*)>(&::Rewired::ControllerExtensions::RailDriverExtension::SourceUpdated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1818deaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::RailDriverExtension.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::ControllerExtensions::RailDriverExtension::*)()>(&::Rewired::ControllerExtensions::RailDriverExtension::Clone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818de7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab*& Rewired::ControllerExtensions::RailDriverExtension::__cordl_internal_get_JEmCdLvQwNNXzsOBaJbwuoHmazkA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JEmCdLvQwNNXzsOBaJbwuoHmazkA;
}
constexpr ::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab* const& Rewired::ControllerExtensions::RailDriverExtension::__cordl_internal_get_JEmCdLvQwNNXzsOBaJbwuoHmazkA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JEmCdLvQwNNXzsOBaJbwuoHmazkA;
}
constexpr void Rewired::ControllerExtensions::RailDriverExtension::__cordl_internal_set_JEmCdLvQwNNXzsOBaJbwuoHmazkA(::Rewired::ControllerExtensions::RailDriverExtension_QCcBnJKuMLjNUpUOBjfGNOitHNqab*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JEmCdLvQwNNXzsOBaJbwuoHmazkA = value;
}
inline ::Rewired::Joystick* Rewired::ControllerExtensions::RailDriverExtension::oHYKtruZSuRRLtPyAilLTdHMyCil()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"oHYKtruZSuRRLtPyAilLTdHMyCil", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Joystick*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::RailDriverExtension::_ctor(::Rewired::HID::Drivers::IDriver_RailDriver*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_RailDriver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerExtensions::RailDriverExtension::_ctor(::Rewired::ControllerExtensions::RailDriverExtension*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::RailDriverExtension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::ControllerExtensions::RailDriverExtension::get_speakerEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"get_speakerEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::RailDriverExtension::set_speakerEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"set_speakerEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Rewired::ControllerExtensions::RailDriverExtension::SetLEDDisplay(int32_t  digitIndex, uint8_t  digitBitValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"SetLEDDisplay", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digitIndex, digitBitValues);
}
inline void Rewired::ControllerExtensions::RailDriverExtension::SetLEDDisplay(uint8_t  digit1BitValues, uint8_t  digit2BitValues, uint8_t  digit3BitValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"SetLEDDisplay", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digit1BitValues, digit2BitValues, digit3BitValues);
}
inline uint16_t Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_vendorId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_vendorId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_productName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_productName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_manufacturer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_manufacturer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usagePage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usagePage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline uint16_t Rewired::ControllerExtensions::RailDriverExtension::Rewired_ControllerExtensions_IHIDControllerExtension_get_usage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(),
                        {"Rewired.ControllerExtensions.IHIDControllerExtension.get_usage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::RailDriverExtension::UpdateData(::Rewired::UpdateLoopType  updateLoop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateLoop);
}
inline void Rewired::ControllerExtensions::RailDriverExtension::SourceUpdated(::Rewired::Interfaces::IControllerExtensionSource*  source)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline ::Rewired::Controller_Extension* Rewired::ControllerExtensions::RailDriverExtension::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::RailDriverExtension*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::RailDriverExtension* Rewired::ControllerExtensions::RailDriverExtension::New_ctor(::Rewired::HID::Drivers::IDriver_RailDriver*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::RailDriverExtension*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerExtensions::RailDriverExtension* Rewired::ControllerExtensions::RailDriverExtension::New_ctor(::Rewired::ControllerExtensions::RailDriverExtension*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::RailDriverExtension*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::ControllerExtensions::RailDriverExtension::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::ControllerExtensions::RailDriverExtension::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::RailDriverExtension::RailDriverExtension()   {
}
