#pragma once
// IWYU pragma private; include "Rewired/BridgedController.hpp"
#include "Rewired/zzzz__BridgedControllerHWInfo_impl.hpp"
#include "Rewired/zzzz__UnknownControllerHat_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Rewired/zzzz__BridgedController_def.hpp"
#include "Rewired/Interfaces/zzzz__IInputManagerJoystickPublic_def.hpp"
#include "Rewired/Platforms/Custom/zzzz__CustomInputSource_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
//  Writing Method size for method: ::Rewired::BridgedController.get_isUnknownController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::BridgedController::*)()>(&::Rewired::BridgedController::get_isUnknownController)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18195c290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::BridgedController*>(),
                        {"get_isUnknownController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::BridgedController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::BridgedController::*)()>(&::Rewired::BridgedController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::BridgedController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic*& Rewired::BridgedController::__cordl_internal_get_sourceJoystick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceJoystick;
}
constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic* const& Rewired::BridgedController::__cordl_internal_get_sourceJoystick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceJoystick;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_sourceJoystick(::Rewired::Interfaces::IInputManagerJoystickPublic*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceJoystick = value;
}
constexpr ::Rewired::HardwareControllerMap_Game*& Rewired::BridgedController::__cordl_internal_get_gameHardwareMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameHardwareMap;
}
constexpr ::Rewired::HardwareControllerMap_Game* const& Rewired::BridgedController::__cordl_internal_get_gameHardwareMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameHardwareMap;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_gameHardwareMap(::Rewired::HardwareControllerMap_Game*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameHardwareMap = value;
}
constexpr ::System::Guid& Rewired::BridgedController::__cordl_internal_get_controllerTypeGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerTypeGuid;
}
constexpr ::System::Guid const& Rewired::BridgedController::__cordl_internal_get_controllerTypeGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerTypeGuid;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_controllerTypeGuid(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerTypeGuid = value;
}
constexpr ::Rewired::Controller_Extension*& Rewired::BridgedController::__cordl_internal_get_controllerExtension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerExtension;
}
constexpr ::Rewired::Controller_Extension* const& Rewired::BridgedController::__cordl_internal_get_controllerExtension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerExtension;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_controllerExtension(::Rewired::Controller_Extension*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerExtension = value;
}
constexpr ::StringW& Rewired::BridgedController::__cordl_internal_get_instanceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceName;
}
constexpr ::StringW const& Rewired::BridgedController::__cordl_internal_get_instanceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceName;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_instanceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceName = value;
}
constexpr ::StringW& Rewired::BridgedController::__cordl_internal_get_productName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productName;
}
constexpr ::StringW const& Rewired::BridgedController::__cordl_internal_get_productName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___productName;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_productName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___productName = value;
}
constexpr bool& Rewired::BridgedController::__cordl_internal_get_isXInputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isXInputDevice;
}
constexpr bool const& Rewired::BridgedController::__cordl_internal_get_isXInputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isXInputDevice;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_isXInputDevice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isXInputDevice = value;
}
constexpr int32_t& Rewired::BridgedController::__cordl_internal_get_axisCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisCount;
}
constexpr int32_t const& Rewired::BridgedController::__cordl_internal_get_axisCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisCount;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_axisCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisCount = value;
}
constexpr int32_t& Rewired::BridgedController::__cordl_internal_get_buttonCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonCount;
}
constexpr int32_t const& Rewired::BridgedController::__cordl_internal_get_buttonCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonCount;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_buttonCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonCount = value;
}
constexpr ::ArrayW<bool>& Rewired::BridgedController::__cordl_internal_get_isButtonPressureSensitive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isButtonPressureSensitive;
}
constexpr ::ArrayW<bool> const& Rewired::BridgedController::__cordl_internal_get_isButtonPressureSensitive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isButtonPressureSensitive;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_isButtonPressureSensitive(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isButtonPressureSensitive = value;
}
constexpr ::ArrayW<::Rewired::UnknownControllerHat*>& Rewired::BridgedController::__cordl_internal_get_unknownControllerHats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unknownControllerHats;
}
constexpr ::ArrayW<::Rewired::UnknownControllerHat*> const& Rewired::BridgedController::__cordl_internal_get_unknownControllerHats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unknownControllerHats;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_unknownControllerHats(::ArrayW<::Rewired::UnknownControllerHat*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unknownControllerHats = value;
}
constexpr ::Rewired::Platforms::Custom::CustomInputSource*& Rewired::BridgedController::__cordl_internal_get_customInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customInputSource;
}
constexpr ::Rewired::Platforms::Custom::CustomInputSource* const& Rewired::BridgedController::__cordl_internal_get_customInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customInputSource;
}
constexpr void Rewired::BridgedController::__cordl_internal_set_customInputSource(::Rewired::Platforms::Custom::CustomInputSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customInputSource = value;
}
inline bool Rewired::BridgedController::get_isUnknownController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::BridgedController*>(),
                        {"get_isUnknownController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::BridgedController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::BridgedController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::BridgedController* Rewired::BridgedController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::BridgedController*>());
}
// Ctor Parameters []
constexpr ::Rewired::BridgedController::BridgedController()   {
}
