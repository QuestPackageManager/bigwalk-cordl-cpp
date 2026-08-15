#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/NintendoSwitchProControllerExtension.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchGamepadExtension_impl.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchProControllerExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__IHIDControllerExtension_def.hpp"
#include "Rewired/ControllerExtensions/zzzz__NintendoSwitchProControllerExtension_def.hpp"
#include "Rewired/HID/Drivers/zzzz__IDriver_NintendoSwitchProController_def.hpp"
#include "Rewired/Interfaces/zzzz__IControllerVibrator_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE.NlmNDWiahueqSExmHZSOWnicvDFE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HID::Drivers::IDriver_NintendoSwitchProController* (::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE::NlmNDWiahueqSExmHZSOWnicvDFE)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818db180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE*>(),
                        {"NlmNDWiahueqSExmHZSOWnicvDFE", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE::*)(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*)>(&::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Rewired::HID::Drivers::IDriver_NintendoSwitchProController* Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE::NlmNDWiahueqSExmHZSOWnicvDFE()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE*>(),
                        {"NlmNDWiahueqSExmHZSOWnicvDFE", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE::_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE* Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE::New_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE()   {
}
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension.lAKYLmANHEahADkLdJcFOlPBojVX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE* (::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::lAKYLmANHEahADkLdJcFOlPBojVX)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1818db130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>(),
                        {"lAKYLmANHEahADkLdJcFOlPBojVX", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::*)(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*)>(&::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818db0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::*)(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*)>(&::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818db0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::*)()>(&::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::Clone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818db080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>(),
                    {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::__cordl_internal_get_motorIndexLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motorIndexLeft;
}
constexpr int32_t const& Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::__cordl_internal_get_motorIndexLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motorIndexLeft;
}
constexpr void Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::__cordl_internal_set_motorIndexLeft(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motorIndexLeft = value;
}
constexpr int32_t& Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::__cordl_internal_get_motorIndexRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motorIndexRight;
}
constexpr int32_t const& Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::__cordl_internal_get_motorIndexRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motorIndexRight;
}
constexpr void Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::__cordl_internal_set_motorIndexRight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motorIndexRight = value;
}
inline ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE* Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::lAKYLmANHEahADkLdJcFOlPBojVX()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>(),
                        {"lAKYLmANHEahADkLdJcFOlPBojVX", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension_OiCTetfbGVJAdoKNfpVjFiBNfLfE*>(this, ___internal_method);
}
inline void Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::_ctor(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::Rewired::Controller_Extension* Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension* Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::New_ctor(::Rewired::HID::Drivers::IDriver_NintendoSwitchProController*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>(_cordl_fixed_empty_name_whitespace));
}
inline ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension* Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::New_ctor(::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension*>(_cordl_fixed_empty_name_whitespace));
}
/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr  Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::operator ::Rewired::Interfaces::IControllerVibrator*() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::i___Rewired__Interfaces__IControllerVibrator() noexcept {
return static_cast<::Rewired::Interfaces::IControllerVibrator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr  Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::operator ::Rewired::ControllerExtensions::IHIDControllerExtension*() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::ControllerExtensions::IHIDControllerExtension"
constexpr ::Rewired::ControllerExtensions::IHIDControllerExtension* Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::i___Rewired__ControllerExtensions__IHIDControllerExtension() noexcept {
return static_cast<::Rewired::ControllerExtensions::IHIDControllerExtension*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerExtensions::NintendoSwitchProControllerExtension::NintendoSwitchProControllerExtension()   {
}
