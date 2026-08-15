#pragma once
// IWYU pragma private; include "Rewired/Data/ConfigVars.hpp"
#include "Rewired/Config/zzzz__KeyCombinationOverrideMode_impl.hpp"
#include "Rewired/Config/zzzz__LogLevelFlags_impl.hpp"
#include "Rewired/Config/zzzz__ThrottleCalibrationMode_impl.hpp"
#include "Rewired/Config/zzzz__UpdateLoopSetting_impl.hpp"
#include "Rewired/Config/zzzz__UpdateMode_impl.hpp"
#include "Rewired/Data/zzzz__ConfigVars_impl.hpp"
#include "Rewired/Platforms/zzzz__GameCoreScarlettPrimaryInputSource_impl.hpp"
#include "Rewired/Platforms/zzzz__GameCoreXboxOnePrimaryInputSource_impl.hpp"
#include "Rewired/Platforms/zzzz__LinuxStandalonePrimaryInputSource_impl.hpp"
#include "Rewired/Platforms/zzzz__OSXStandalonePrimaryInputSource_impl.hpp"
#include "Rewired/Platforms/zzzz__PS4PrimaryInputSource_impl.hpp"
#include "Rewired/Platforms/zzzz__PS5PrimaryInputSource_impl.hpp"
#include "Rewired/Platforms/zzzz__WebGLPrimaryInputSource_impl.hpp"
#include "Rewired/Platforms/zzzz__WindowsStandalonePrimaryInputSource_impl.hpp"
#include "Rewired/Platforms/zzzz__WindowsUWPPrimaryInputSource_impl.hpp"
#include "Rewired/Platforms/zzzz__XboxOnePrimaryInputSource_impl.hpp"
#include "Rewired/zzzz__AxisSensitivity2DType_impl.hpp"
#include "Rewired/zzzz__AxisSensitivityType_impl.hpp"
#include "Rewired/zzzz__DeadZone2DType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/zzzz__ConfigVars_def.hpp"
#include "Rewired/Config/zzzz__EnhancedDeviceSupportDeviceType_def.hpp"
#include "Rewired/Config/zzzz__LogLevelFlags_def.hpp"
#include "Rewired/Config/zzzz__ThrottleCalibrationMode_def.hpp"
#include "Rewired/Config/zzzz__UpdateLoopSetting_def.hpp"
#include "Rewired/Data/zzzz__ConfigVars_def.hpp"
#include "Rewired/Data/zzzz__IConfigVars_Internal_def.hpp"
#include "Rewired/Platforms/zzzz__EditorPlatform_def.hpp"
#include "Rewired/Platforms/zzzz__GameCoreScarlettPrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__GameCoreXboxOnePrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__LinuxStandalonePrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__OSXStandalonePrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__PS4PrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__PS5PrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
#include "Rewired/Platforms/zzzz__WebGLPrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_def.hpp"
#include "Rewired/Platforms/zzzz__WindowsStandalonePrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__WindowsUWPPrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__XboxOnePrimaryInputSource_def.hpp"
#include "Rewired/Utils/Classes/Data/zzzz__KeyedGetSetValueStore_1_def.hpp"
#include "Rewired/zzzz__AxisSensitivity2DType_def.hpp"
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__DeadZone2DType_def.hpp"
#include "Rewired/zzzz__MultiBoolValue_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG::ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG()   {
}
//  Writing Method size for method: ::Rewired::Data::ConfigVars_PlatformVars._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars_PlatformVars::*)()>(&::Rewired::Data::ConfigVars_PlatformVars::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181883130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::ConfigVars_PlatformVars::__cordl_internal_get_disableKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableKeyboard;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars::__cordl_internal_get_disableKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableKeyboard;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars::__cordl_internal_set_disableKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableKeyboard = value;
}
constexpr bool& Rewired::Data::ConfigVars_PlatformVars::__cordl_internal_get_disableMouse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableMouse;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars::__cordl_internal_get_disableMouse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableMouse;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars::__cordl_internal_set_disableMouse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableMouse = value;
}
constexpr bool& Rewired::Data::ConfigVars_PlatformVars::__cordl_internal_get_ignoreInputWhenAppNotInFocus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreInputWhenAppNotInFocus;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars::__cordl_internal_get_ignoreInputWhenAppNotInFocus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreInputWhenAppNotInFocus;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars::__cordl_internal_set_ignoreInputWhenAppNotInFocus(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreInputWhenAppNotInFocus = value;
}
inline void Rewired::Data::ConfigVars_PlatformVars::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars_PlatformVars::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars_PlatformVars*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_PlatformVars::ConfigVars_PlatformVars()   {
}
//  Writing Method size for method: ::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::*)()>(&::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181883150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_get_useNativeKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNativeKeyboard;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_get_useNativeKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNativeKeyboard;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_set_useNativeKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useNativeKeyboard = value;
}
constexpr int32_t& Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_get_joystickRefreshRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickRefreshRate;
}
constexpr int32_t const& Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_get_joystickRefreshRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickRefreshRate;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_set_joystickRefreshRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickRefreshRate = value;
}
constexpr bool& Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_get_useWindowsGamingInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWindowsGamingInput;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_get_useWindowsGamingInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useWindowsGamingInput;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_set_useWindowsGamingInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useWindowsGamingInput = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*& Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enhancedDeviceSupportExcludedDeviceTypes;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>* const& Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enhancedDeviceSupportExcludedDeviceTypes;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::__cordl_internal_set_enhancedDeviceSupportExcludedDeviceTypes(::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enhancedDeviceSupportExcludedDeviceTypes = value;
}
inline void Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone* Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone::ConfigVars_PlatformVars_WindowsStandalone()   {
}
//  Writing Method size for method: ::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::*)()>(&::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181883130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::__cordl_internal_get_useAppleGameController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useAppleGameController;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::__cordl_internal_get_useAppleGameController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useAppleGameController;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::__cordl_internal_set_useAppleGameController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useAppleGameController = value;
}
constexpr bool& Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::__cordl_internal_get_assignJoysticksByUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignJoysticksByUserId;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::__cordl_internal_get_assignJoysticksByUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignJoysticksByUserId;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::__cordl_internal_set_assignJoysticksByUserId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assignJoysticksByUserId = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*& Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::__cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enhancedDeviceSupportExcludedDeviceTypes;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>* const& Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::__cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enhancedDeviceSupportExcludedDeviceTypes;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::__cordl_internal_set_enhancedDeviceSupportExcludedDeviceTypes(::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enhancedDeviceSupportExcludedDeviceTypes = value;
}
inline void Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone* Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone::ConfigVars_PlatformVars_OSXStandalone()   {
}
//  Writing Method size for method: ::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone::*)()>(&::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181883140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone::__cordl_internal_get_useEnhancedDeviceSupport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useEnhancedDeviceSupport;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone::__cordl_internal_get_useEnhancedDeviceSupport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useEnhancedDeviceSupport;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone::__cordl_internal_set_useEnhancedDeviceSupport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useEnhancedDeviceSupport = value;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*& Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone::__cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enhancedDeviceSupportExcludedDeviceTypes;
}
constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>* const& Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone::__cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enhancedDeviceSupportExcludedDeviceTypes;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone::__cordl_internal_set_enhancedDeviceSupportExcludedDeviceTypes(::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enhancedDeviceSupportExcludedDeviceTypes = value;
}
inline void Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone* Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone::ConfigVars_PlatformVars_LinuxStandalone()   {
}
//  Writing Method size for method: ::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP::*)()>(&::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18187ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::ConfigVars_PlatformVars_WindowsUWP::__cordl_internal_get_useGamepadAPI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGamepadAPI;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars_WindowsUWP::__cordl_internal_get_useGamepadAPI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGamepadAPI;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_WindowsUWP::__cordl_internal_set_useGamepadAPI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useGamepadAPI = value;
}
constexpr bool& Rewired::Data::ConfigVars_PlatformVars_WindowsUWP::__cordl_internal_get_useHIDAPI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHIDAPI;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars_WindowsUWP::__cordl_internal_get_useHIDAPI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useHIDAPI;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_WindowsUWP::__cordl_internal_set_useHIDAPI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useHIDAPI = value;
}
inline void Rewired::Data::ConfigVars_PlatformVars_WindowsUWP::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP* Rewired::Data::ConfigVars_PlatformVars_WindowsUWP::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP::ConfigVars_PlatformVars_WindowsUWP()   {
}
//  Writing Method size for method: ::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne::*)()>(&::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181883130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne::__cordl_internal_get_assignJoysticksByUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignJoysticksByUserId;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne::__cordl_internal_get_assignJoysticksByUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignJoysticksByUserId;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne::__cordl_internal_set_assignJoysticksByUserId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assignJoysticksByUserId = value;
}
inline void Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne* Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne::ConfigVars_PlatformVars_GameCoreXboxOne()   {
}
//  Writing Method size for method: ::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett::*)()>(&::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181883130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett::__cordl_internal_get_assignJoysticksByUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignJoysticksByUserId;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett::__cordl_internal_get_assignJoysticksByUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignJoysticksByUserId;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett::__cordl_internal_set_assignJoysticksByUserId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assignJoysticksByUserId = value;
}
inline void Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett* Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett::ConfigVars_PlatformVars_GameCoreScarlett()   {
}
//  Writing Method size for method: ::Rewired::Data::ConfigVars_PlatformVars_PS5._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars_PlatformVars_PS5::*)()>(&::Rewired::Data::ConfigVars_PlatformVars_PS5::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181883140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_PS5*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::ConfigVars_PlatformVars_PS5::__cordl_internal_get_assignJoysticksByPS5JoyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignJoysticksByPS5JoyId;
}
constexpr bool const& Rewired::Data::ConfigVars_PlatformVars_PS5::__cordl_internal_get_assignJoysticksByPS5JoyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignJoysticksByPS5JoyId;
}
constexpr void Rewired::Data::ConfigVars_PlatformVars_PS5::__cordl_internal_set_assignJoysticksByPS5JoyId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assignJoysticksByPS5JoyId = value;
}
inline void Rewired::Data::ConfigVars_PlatformVars_PS5::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_PlatformVars_PS5*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars_PS5* Rewired::Data::ConfigVars_PlatformVars_PS5::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars_PlatformVars_PS5*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_PlatformVars_PS5::ConfigVars_PlatformVars_PS5()   {
}
//  Writing Method size for method: ::Rewired::Data::ConfigVars_EditorVars._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars_EditorVars::*)()>(&::Rewired::Data::ConfigVars_EditorVars::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18187fe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_EditorVars*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_useParentClass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_useParentClass;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_useParentClass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_useParentClass;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_useParentClass(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_useParentClass = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_parentClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_parentClassName;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_parentClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_parentClassName;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_parentClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_parentClassName = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_useNamespace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_useNamespace;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_useNamespace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_useNamespace;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_useNamespace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_useNamespace = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_namespace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_namespace;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_namespace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_namespace;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_namespace(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_namespace = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_actions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_actions;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_actions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_actions;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_actions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_actions = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_actionsClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_actionsClassName;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_actionsClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_actionsClassName;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_actionsClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_actionsClassName = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_actionsIncludeActionCategory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_actionsIncludeActionCategory;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_actionsIncludeActionCategory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_actionsIncludeActionCategory;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_actionsIncludeActionCategory(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_actionsIncludeActionCategory = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_actionsCreateClassesForActionCategories()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_actionsCreateClassesForActionCategories;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_actionsCreateClassesForActionCategories() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_actionsCreateClassesForActionCategories;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_actionsCreateClassesForActionCategories(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_actionsCreateClassesForActionCategories = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_mapCategories()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_mapCategories;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_mapCategories() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_mapCategories;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_mapCategories(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_mapCategories = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_mapCategoriesClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_mapCategoriesClassName;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_mapCategoriesClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_mapCategoriesClassName;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_mapCategoriesClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_mapCategoriesClassName = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_layouts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_layouts;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_layouts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_layouts;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_layouts(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_layouts = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_layoutsClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_layoutsClassName;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_layoutsClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_layoutsClassName;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_layoutsClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_layoutsClassName = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_players;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_players;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_players(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_players = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_playersClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_playersClassName;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_playersClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_playersClassName;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_playersClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_playersClassName = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_inputBehaviors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_inputBehaviors;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_inputBehaviors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_inputBehaviors;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_inputBehaviors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_inputBehaviors = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_inputBehaviorsClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_inputBehaviorsClassName;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_inputBehaviorsClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_inputBehaviorsClassName;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_inputBehaviorsClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_inputBehaviorsClassName = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_customControllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_customControllers;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_customControllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_customControllers;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_customControllers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_customControllers = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_customControllersClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_customControllersClassName;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_customControllersClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_customControllersClassName;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_customControllersClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_customControllersClassName = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_customControllersAxesClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_customControllersAxesClassName;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_customControllersAxesClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_customControllersAxesClassName;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_customControllersAxesClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_customControllersAxesClassName = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_customControllersButtonsClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_customControllersButtonsClassName;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_customControllersButtonsClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_customControllersButtonsClassName;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_customControllersButtonsClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_customControllersButtonsClassName = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_layoutManagerRuleSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_layoutManagerRuleSets;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_layoutManagerRuleSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_layoutManagerRuleSets;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_layoutManagerRuleSets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_layoutManagerRuleSets = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_layoutManagerRuleSetsClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_layoutManagerRuleSetsClassName;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_layoutManagerRuleSetsClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_layoutManagerRuleSetsClassName;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_layoutManagerRuleSetsClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_layoutManagerRuleSetsClassName = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_mapEnablerRuleSets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_mapEnablerRuleSets;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_mapEnablerRuleSets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_mapEnablerRuleSets;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_mapEnablerRuleSets(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_mapEnablerRuleSets = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_mapEnablerRuleSetsClassName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_mapEnablerRuleSetsClassName;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_mapEnablerRuleSetsClassName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_mapEnablerRuleSetsClassName;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_mapEnablerRuleSetsClassName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_mapEnablerRuleSetsClassName = value;
}
constexpr bool& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_allCapsConstantNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_allCapsConstantNames;
}
constexpr bool const& Rewired::Data::ConfigVars_EditorVars::__cordl_internal_get_exportConsts_allCapsConstantNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exportConsts_allCapsConstantNames;
}
constexpr void Rewired::Data::ConfigVars_EditorVars::__cordl_internal_set_exportConsts_allCapsConstantNames(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exportConsts_allCapsConstantNames = value;
}
inline void Rewired::Data::ConfigVars_EditorVars::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_EditorVars*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_EditorVars* Rewired::Data::ConfigVars_EditorVars::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars_EditorVars*>());
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_EditorVars::ConfigVars_EditorVars()   {
}
//  Writing Method size for method: ::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA::*)(::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*, ::StringW)>(&::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803224a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*& Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA::__cordl_internal_get_qoNNkkrmHyMmJegDKHkbwBdPdqXA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qoNNkkrmHyMmJegDKHkbwBdPdqXA;
}
constexpr ::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>* const& Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA::__cordl_internal_get_qoNNkkrmHyMmJegDKHkbwBdPdqXA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___qoNNkkrmHyMmJegDKHkbwBdPdqXA;
}
constexpr void Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA::__cordl_internal_set_qoNNkkrmHyMmJegDKHkbwBdPdqXA(::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___qoNNkkrmHyMmJegDKHkbwBdPdqXA = value;
}
constexpr ::StringW& Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA::__cordl_internal_get_aZpBvklAbWbaBtvtNfcgaQowMzrkA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aZpBvklAbWbaBtvtNfcgaQowMzrkA;
}
constexpr ::StringW const& Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA::__cordl_internal_get_aZpBvklAbWbaBtvtNfcgaQowMzrkA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aZpBvklAbWbaBtvtNfcgaQowMzrkA;
}
constexpr void Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA::__cordl_internal_set_aZpBvklAbWbaBtvtNfcgaQowMzrkA(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aZpBvklAbWbaBtvtNfcgaQowMzrkA = value;
}
inline void Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA::_ctor(::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA* Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA::New_ctor(::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA()   {
}
//  Writing Method size for method: ::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ::*)(::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*, ::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*)>(&::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803224a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*>(), ::i2c::type_of<::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*& Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ::__cordl_internal_get_ScuMLcCuxLgtysqqhUzecltYEkrC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScuMLcCuxLgtysqqhUzecltYEkrC;
}
constexpr ::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>* const& Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ::__cordl_internal_get_ScuMLcCuxLgtysqqhUzecltYEkrC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScuMLcCuxLgtysqqhUzecltYEkrC;
}
constexpr void Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ::__cordl_internal_set_ScuMLcCuxLgtysqqhUzecltYEkrC(::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScuMLcCuxLgtysqqhUzecltYEkrC = value;
}
constexpr ::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*& Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ::__cordl_internal_get_ACUqIBxnbgphkOMYlvPzUhnQutam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ACUqIBxnbgphkOMYlvPzUhnQutam;
}
constexpr ::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>* const& Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ::__cordl_internal_get_ACUqIBxnbgphkOMYlvPzUhnQutam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ACUqIBxnbgphkOMYlvPzUhnQutam;
}
constexpr void Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ::__cordl_internal_set_ACUqIBxnbgphkOMYlvPzUhnQutam(::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ACUqIBxnbgphkOMYlvPzUhnQutam = value;
}
inline void Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ::_ctor(::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*  _cordl_fixed_empty_name_whitespace, ::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*>(), ::i2c::type_of<::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline ::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ* Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ::New_ctor(::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*  _cordl_fixed_empty_name_whitespace, ::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rewired::Data::ConfigVars_AllPlatformVar::ConfigVars_AllPlatformVar(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars_AllPlatformVar::ConfigVars_AllPlatformVar()   {
}
constexpr ::Rewired::Data::ConfigVars_AllPlatformVar  Rewired::Data::ConfigVars_AllPlatformVar::DisableKeyboard{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Data::ConfigVars_AllPlatformVar  Rewired::Data::ConfigVars_AllPlatformVar::IgnoreInputWhenAppNotInFocus{static_cast<int32_t>(0x1)};
constexpr ::Rewired::Data::ConfigVars_AllPlatformVar  Rewired::Data::ConfigVars_AllPlatformVar::DisableMouse{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.get_platformVarsDict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::get_platformVarsDict)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x1818794b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"get_platformVarsDict", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.get_getSetPlatformVariableDict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::get_getSetPlatformVariableDict)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181879280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"get_getSetPlatformVariableDict", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181879230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.DoesPlatformUseFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::Platform, ::Rewired::Platforms::WebplayerPlatform, bool)>(&::Rewired::Data::ConfigVars::DoesPlatformUseFallback)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181876510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"DoesPlatformUseFallback", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::WebplayerPlatform>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetDebugConfigSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetDebugConfigSettings)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x1818768f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetDebugConfigSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVarsRelPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::Platform)>(&::Rewired::Data::ConfigVars::GetPlatformVarsRelPath)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181877720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVarsRelPath", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::Platform)>(&::Rewired::Data::ConfigVars::GetPlatformVars)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818777a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVars", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.Editor_SetAllSerializedPlatformVar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Data::ConfigVars_AllPlatformVar, ::System::Object*)>(&::Rewired::Data::ConfigVars::Editor_SetAllSerializedPlatformVar)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181876590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"Editor_SetAllSerializedPlatformVar", {}, {::i2c::type_of<::Rewired::Data::ConfigVars_AllPlatformVar>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVar_disableKeyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVar_disableKeyboard)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181876e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_disableKeyboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.SetPlatformVar_disableKeyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::SetPlatformVar_disableKeyboard)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181877c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_disableKeyboard", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVar_disableMouse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVar_disableMouse)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181876e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_disableMouse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.SetPlatformVar_disableMouse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::SetPlatformVar_disableMouse)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181877cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_disableMouse", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVar_ignoreInputWhenAppNotInFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVar_ignoreInputWhenAppNotInFocus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818770a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_ignoreInputWhenAppNotInFocus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVar_useEnhancedDeviceSupport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVar_useEnhancedDeviceSupport)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1818772c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_useEnhancedDeviceSupport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVar_useNativeMouse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVar_useNativeMouse)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181877550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_useNativeMouse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVar_useNativeKeyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVar_useNativeKeyboard)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1818773c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_useNativeKeyboard", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVar_joystickRefreshRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVar_joystickRefreshRate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181877100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_joystickRefreshRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVar_assignJoysticksBySystemId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVar_assignJoysticksBySystemId)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181876c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_assignJoysticksBySystemId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVar_useAppleGameController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVar_useAppleGameController)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818771e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_useAppleGameController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVar_useWindowsGamingInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVar_useWindowsGamingInput)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181877650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_useWindowsGamingInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181876ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.SetPlatformVar_ignoreInputWhenAppNotInFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::SetPlatformVar_ignoreInputWhenAppNotInFocus)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181878070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_ignoreInputWhenAppNotInFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.SetPlatformVar_useEnhancedDeviceSupport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::SetPlatformVar_useEnhancedDeviceSupport)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181878300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_useEnhancedDeviceSupport", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.SetPlatformVar_useNativeMouse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::SetPlatformVar_useNativeMouse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181878540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_useNativeMouse", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.SetPlatformVar_useNativeKeyboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::SetPlatformVar_useNativeKeyboard)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181878430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_useNativeKeyboard", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.SetPlatformVar_joystickRefreshRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(int32_t)>(&::Rewired::Data::ConfigVars::SetPlatformVar_joystickRefreshRate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181878120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_joystickRefreshRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.SetPlatformVar_assignJoysticksBySystemId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::SetPlatformVar_assignJoysticksBySystemId)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181877a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_assignJoysticksBySystemId", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.SetPlatformVar_useAppleGameController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::SetPlatformVar_useAppleGameController)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181878210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_useAppleGameController", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.SetPlatformVar_useWindowsGamingInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::SetPlatformVar_useWindowsGamingInput)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1818785c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_useWindowsGamingInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.SetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*)>(&::Rewired::Data::ConfigVars::SetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x181877d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetPlatformVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::GetPlatformVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181877890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVars", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.GetAllSerializedPlatformVar_multiBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::MultiBoolValue (::Rewired::Data::ConfigVars::*)(::Rewired::Data::ConfigVars_AllPlatformVar)>(&::Rewired::Data::ConfigVars::GetAllSerializedPlatformVar_multiBool)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1818766d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetAllSerializedPlatformVar_multiBool", {}, {::i2c::type_of<::Rewired::Data::ConfigVars_AllPlatformVar>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.IsEditModeInputSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)(::Rewired::ControllerType, ::Rewired::Platforms::EditorPlatform)>(&::Rewired::Data::ConfigVars::IsEditModeInputSupported)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1818778e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"IsEditModeInputSupported", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.IsNativeKeyboardAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Rewired::Platforms::Platform, bool)>(&::Rewired::Data::ConfigVars::IsNativeKeyboardAllowed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818779c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"IsNativeKeyboardAllowed", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.Rewired_Data_IConfigVars_Internal_get_values
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::Rewired_Data_IConfigVars_Internal_get_values)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1818779e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"Rewired.Data.IConfigVars_Internal.get_values", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars.get_valueDelegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::get_valueDelegates)> {
  constexpr static std::size_t size = 0x1540;
  constexpr static std::size_t addrs = 0x181879cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"get_valueDelegates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818789a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818789b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_5)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818789c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_5", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_6)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818789e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_7)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181878a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_7", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_8)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181878a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_9)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181878a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_9", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_10)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818788a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_10", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_11)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818788c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_11", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_12
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_12)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818788e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_12", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_13
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_13)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181878900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_13", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_14
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_14)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181878920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_14", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_15
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_15)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181878940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_15", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_platformVarsDict_b__59_16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::ConfigVars_PlatformVars* (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_16)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181878960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_16", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_getSetPlatformVariableDict_b__62_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::Platform)>(&::Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818786b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_0", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_getSetPlatformVariableDict_b__62_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::Platform, ::System::Object*)>(&::Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818786f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_1", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_getSetPlatformVariableDict_b__62_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::Platform)>(&::Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_2)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181878750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_2", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_getSetPlatformVariableDict_b__62_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::Platform, ::System::Object*)>(&::Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_3)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181878790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_3", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_getSetPlatformVariableDict_b__62_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::Platform)>(&::Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_4)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818787f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_4", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_getSetPlatformVariableDict_b__62_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::Platform, ::System::Object*)>(&::Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_5)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181878830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_5", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Config::UpdateLoopSetting (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Config::UpdateLoopSetting)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803924c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_1", {}, {::i2c::type_of<::Rewired::Config::UpdateLoopSetting>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_3)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_3", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::WindowsStandalonePrimaryInputSource (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::WindowsStandalonePrimaryInputSource)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_5)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_5", {}, {::i2c::type_of<::Rewired::Platforms::WindowsStandalonePrimaryInputSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::OSXStandalonePrimaryInputSource (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_6)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::OSXStandalonePrimaryInputSource)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_7)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_7", {}, {::i2c::type_of<::Rewired::Platforms::OSXStandalonePrimaryInputSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::LinuxStandalonePrimaryInputSource (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_8)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_8", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::LinuxStandalonePrimaryInputSource)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_9)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_9", {}, {::i2c::type_of<::Rewired::Platforms::LinuxStandalonePrimaryInputSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::WindowsUWPPrimaryInputSource (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_10)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_10", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::WindowsUWPPrimaryInputSource)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_11)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_11", {}, {::i2c::type_of<::Rewired::Platforms::WindowsUWPPrimaryInputSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_12
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::XboxOnePrimaryInputSource (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_12)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_12", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_13
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::XboxOnePrimaryInputSource)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_13)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_13", {}, {::i2c::type_of<::Rewired::Platforms::XboxOnePrimaryInputSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_14
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_14)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_14", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_15
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_15)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_15", {}, {::i2c::type_of<::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::GameCoreScarlettPrimaryInputSource (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_16)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_16", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_17
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::GameCoreScarlettPrimaryInputSource)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_17)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_17", {}, {::i2c::type_of<::Rewired::Platforms::GameCoreScarlettPrimaryInputSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_18
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::PS4PrimaryInputSource (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_18)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_18", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_19
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::PS4PrimaryInputSource)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_19)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_19", {}, {::i2c::type_of<::Rewired::Platforms::PS4PrimaryInputSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_20
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::PS5PrimaryInputSource (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_20)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803231b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_20", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_21
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::PS5PrimaryInputSource)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_21)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180323270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_21", {}, {::i2c::type_of<::Rewired::Platforms::PS5PrimaryInputSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_22
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Platforms::WebGLPrimaryInputSource (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_22)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803eb0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_22", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_23
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Platforms::WebGLPrimaryInputSource)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_23)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180511530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_23", {}, {::i2c::type_of<::Rewired::Platforms::WebGLPrimaryInputSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_24
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_24)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_24", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_25
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_25)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_25", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_26
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_26)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_26", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_27
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_27)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_27", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_28
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_28)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fdd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_28", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_29
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_29)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_29", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_30
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_30)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_30", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_31
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_31)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180503bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_31", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_32)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_33
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_33)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_33", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_34
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_34)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_34", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_35
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_35)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_35", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_36
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_36)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_36", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_37
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_37)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_37", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_38
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_38)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_38", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_39
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_39)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_39", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_40
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_40)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_40", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_41
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(int32_t)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_41)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813eff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_41", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_42
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_42)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_42", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_43
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_43)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_43", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_44
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_44)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_44", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_45
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_45)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_45", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_46
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_46)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_46", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_47
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_47)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_47", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_48
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_48)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_48", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_49
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_49)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_49", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_50
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::DeadZone2DType (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_50)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180cbfa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_50", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_51
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::DeadZone2DType)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_51)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x180cbfe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_51", {}, {::i2c::type_of<::Rewired::DeadZone2DType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_52
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisSensitivity2DType (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_52)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180418710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_52", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_53
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::AxisSensitivity2DType)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_53)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813effe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_53", {}, {::i2c::type_of<::Rewired::AxisSensitivity2DType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_54
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisSensitivityType (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_54)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_54", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_55
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::AxisSensitivityType)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_55)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813effd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_55", {}, {::i2c::type_of<::Rewired::AxisSensitivityType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_56
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_56)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_56", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_57
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_57)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_57", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_58
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Config::ThrottleCalibrationMode (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_58)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181465ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_58", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_59
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Config::ThrottleCalibrationMode)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_59)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180cbfe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_59", {}, {::i2c::type_of<::Rewired::Config::ThrottleCalibrationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_60
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_60)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x180cbfac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_60", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_61
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_61)> {
  constexpr static std::size_t size = 0xa720;
  constexpr static std::size_t addrs = 0x180cbff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_61", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_62
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_62)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_62", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_63
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_63)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_63", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Config::LogLevelFlags (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_64)> {
  constexpr static std::size_t size = 0x1810;
  constexpr static std::size_t addrs = 0x1813abac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_65
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(::Rewired::Config::LogLevelFlags)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_65)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_65", {}, {::i2c::type_of<::Rewired::Config::LogLevelFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_66
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_66)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181876e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_66", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_67
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_67)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181878b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_67", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_68
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_68)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181876e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_68", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_69
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_69)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181878be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_69", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_70
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_70)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818770a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_70", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_71
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_71)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181878c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_71", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_72
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_72)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_72", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_73
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_73)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181878d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_73", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_74
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_74)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181878e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_74", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_75
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_75)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181878e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_75", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_76
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_76)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x181878ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_76", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_77
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_77)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181879030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_77", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_78
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_78)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181877100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_78", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_79
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(int32_t)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_79)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181879140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_79", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_80
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::ConfigVars::*)()>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_80)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181879210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_80", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::ConfigVars._get_valueDelegates_b__102_81
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::ConfigVars::*)(bool)>(&::Rewired::Data::ConfigVars::_get_valueDelegates_b__102_81)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181879220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_81", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Config::UpdateMode& Rewired::Data::ConfigVars::__cordl_internal_get_updateMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMode;
}
constexpr ::Rewired::Config::UpdateMode const& Rewired::Data::ConfigVars::__cordl_internal_get_updateMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateMode;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_updateMode(::Rewired::Config::UpdateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateMode = value;
}
constexpr ::Rewired::Config::UpdateLoopSetting& Rewired::Data::ConfigVars::__cordl_internal_get_updateLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateLoop;
}
constexpr ::Rewired::Config::UpdateLoopSetting const& Rewired::Data::ConfigVars::__cordl_internal_get_updateLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateLoop;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_updateLoop(::Rewired::Config::UpdateLoopSetting  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateLoop = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_alwaysUseUnityInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysUseUnityInput;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_alwaysUseUnityInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysUseUnityInput;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_alwaysUseUnityInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysUseUnityInput = value;
}
constexpr ::Rewired::Platforms::WindowsStandalonePrimaryInputSource& Rewired::Data::ConfigVars::__cordl_internal_get_windowsStandalonePrimaryInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowsStandalonePrimaryInputSource;
}
constexpr ::Rewired::Platforms::WindowsStandalonePrimaryInputSource const& Rewired::Data::ConfigVars::__cordl_internal_get_windowsStandalonePrimaryInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowsStandalonePrimaryInputSource;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_windowsStandalonePrimaryInputSource(::Rewired::Platforms::WindowsStandalonePrimaryInputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windowsStandalonePrimaryInputSource = value;
}
constexpr ::Rewired::Platforms::OSXStandalonePrimaryInputSource& Rewired::Data::ConfigVars::__cordl_internal_get_osx_primaryInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osx_primaryInputSource;
}
constexpr ::Rewired::Platforms::OSXStandalonePrimaryInputSource const& Rewired::Data::ConfigVars::__cordl_internal_get_osx_primaryInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osx_primaryInputSource;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_osx_primaryInputSource(::Rewired::Platforms::OSXStandalonePrimaryInputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osx_primaryInputSource = value;
}
constexpr ::Rewired::Platforms::LinuxStandalonePrimaryInputSource& Rewired::Data::ConfigVars::__cordl_internal_get_linux_primaryInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linux_primaryInputSource;
}
constexpr ::Rewired::Platforms::LinuxStandalonePrimaryInputSource const& Rewired::Data::ConfigVars::__cordl_internal_get_linux_primaryInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___linux_primaryInputSource;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_linux_primaryInputSource(::Rewired::Platforms::LinuxStandalonePrimaryInputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___linux_primaryInputSource = value;
}
constexpr ::Rewired::Platforms::WindowsUWPPrimaryInputSource& Rewired::Data::ConfigVars::__cordl_internal_get_windowsUWP_primaryInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowsUWP_primaryInputSource;
}
constexpr ::Rewired::Platforms::WindowsUWPPrimaryInputSource const& Rewired::Data::ConfigVars::__cordl_internal_get_windowsUWP_primaryInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowsUWP_primaryInputSource;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_windowsUWP_primaryInputSource(::Rewired::Platforms::WindowsUWPPrimaryInputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windowsUWP_primaryInputSource = value;
}
constexpr ::Rewired::Platforms::XboxOnePrimaryInputSource& Rewired::Data::ConfigVars::__cordl_internal_get_xboxOne_primaryInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xboxOne_primaryInputSource;
}
constexpr ::Rewired::Platforms::XboxOnePrimaryInputSource const& Rewired::Data::ConfigVars::__cordl_internal_get_xboxOne_primaryInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xboxOne_primaryInputSource;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_xboxOne_primaryInputSource(::Rewired::Platforms::XboxOnePrimaryInputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xboxOne_primaryInputSource = value;
}
constexpr ::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource& Rewired::Data::ConfigVars::__cordl_internal_get_gameCoreXboxOne_primaryInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameCoreXboxOne_primaryInputSource;
}
constexpr ::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource const& Rewired::Data::ConfigVars::__cordl_internal_get_gameCoreXboxOne_primaryInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameCoreXboxOne_primaryInputSource;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_gameCoreXboxOne_primaryInputSource(::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameCoreXboxOne_primaryInputSource = value;
}
constexpr ::Rewired::Platforms::GameCoreScarlettPrimaryInputSource& Rewired::Data::ConfigVars::__cordl_internal_get_gameCoreScarlett_primaryInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameCoreScarlett_primaryInputSource;
}
constexpr ::Rewired::Platforms::GameCoreScarlettPrimaryInputSource const& Rewired::Data::ConfigVars::__cordl_internal_get_gameCoreScarlett_primaryInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameCoreScarlett_primaryInputSource;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_gameCoreScarlett_primaryInputSource(::Rewired::Platforms::GameCoreScarlettPrimaryInputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameCoreScarlett_primaryInputSource = value;
}
constexpr ::Rewired::Platforms::PS4PrimaryInputSource& Rewired::Data::ConfigVars::__cordl_internal_get_ps4_primaryInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps4_primaryInputSource;
}
constexpr ::Rewired::Platforms::PS4PrimaryInputSource const& Rewired::Data::ConfigVars::__cordl_internal_get_ps4_primaryInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps4_primaryInputSource;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_ps4_primaryInputSource(::Rewired::Platforms::PS4PrimaryInputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ps4_primaryInputSource = value;
}
constexpr ::Rewired::Platforms::PS5PrimaryInputSource& Rewired::Data::ConfigVars::__cordl_internal_get_ps5_primaryInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps5_primaryInputSource;
}
constexpr ::Rewired::Platforms::PS5PrimaryInputSource const& Rewired::Data::ConfigVars::__cordl_internal_get_ps5_primaryInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps5_primaryInputSource;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_ps5_primaryInputSource(::Rewired::Platforms::PS5PrimaryInputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ps5_primaryInputSource = value;
}
constexpr ::Rewired::Platforms::WebGLPrimaryInputSource& Rewired::Data::ConfigVars::__cordl_internal_get_webGL_primaryInputSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_primaryInputSource;
}
constexpr ::Rewired::Platforms::WebGLPrimaryInputSource const& Rewired::Data::ConfigVars::__cordl_internal_get_webGL_primaryInputSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___webGL_primaryInputSource;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_webGL_primaryInputSource(::Rewired::Platforms::WebGLPrimaryInputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___webGL_primaryInputSource = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_useXInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useXInput;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_useXInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useXInput;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_useXInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useXInput = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_useNativeMouse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNativeMouse;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_useNativeMouse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useNativeMouse;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_useNativeMouse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useNativeMouse = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_useEnhancedDeviceSupport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useEnhancedDeviceSupport;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_useEnhancedDeviceSupport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useEnhancedDeviceSupport;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_useEnhancedDeviceSupport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useEnhancedDeviceSupport = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_osxStandalone_useEnhancedDeviceSupport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osxStandalone_useEnhancedDeviceSupport;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_osxStandalone_useEnhancedDeviceSupport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___osxStandalone_useEnhancedDeviceSupport;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_osxStandalone_useEnhancedDeviceSupport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___osxStandalone_useEnhancedDeviceSupport = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_android_supportUnknownGamepads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___android_supportUnknownGamepads;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_android_supportUnknownGamepads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___android_supportUnknownGamepads;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_android_supportUnknownGamepads(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___android_supportUnknownGamepads = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_ps4_assignJoysticksByPS4JoyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps4_assignJoysticksByPS4JoyId;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_ps4_assignJoysticksByPS4JoyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ps4_assignJoysticksByPS4JoyId;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_ps4_assignJoysticksByPS4JoyId(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ps4_assignJoysticksByPS4JoyId = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_useSteamControllerSupport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSteamControllerSupport;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_useSteamControllerSupport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSteamControllerSupport;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_useSteamControllerSupport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSteamControllerSupport = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_logToScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logToScreen;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_logToScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logToScreen;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_logToScreen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logToScreen = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_runInEditMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runInEditMode;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_runInEditMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runInEditMode;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_runInEditMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runInEditMode = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_allowInputInEditorSceneView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowInputInEditorSceneView;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_allowInputInEditorSceneView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowInputInEditorSceneView;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_allowInputInEditorSceneView(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowInputInEditorSceneView = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_unityUsePhysicalKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityUsePhysicalKeys;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_unityUsePhysicalKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unityUsePhysicalKeys;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_unityUsePhysicalKeys(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unityUsePhysicalKeys = value;
}
constexpr ::Rewired::Config::KeyCombinationOverrideMode& Rewired::Data::ConfigVars::__cordl_internal_get_keyCombinationOverrideMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCombinationOverrideMode;
}
constexpr ::Rewired::Config::KeyCombinationOverrideMode const& Rewired::Data::ConfigVars::__cordl_internal_get_keyCombinationOverrideMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyCombinationOverrideMode;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_keyCombinationOverrideMode(::Rewired::Config::KeyCombinationOverrideMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyCombinationOverrideMode = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_generateKeyEventsOnKeyCombinationOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generateKeyEventsOnKeyCombinationOverride;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_generateKeyEventsOnKeyCombinationOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generateKeyEventsOnKeyCombinationOverride;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_generateKeyEventsOnKeyCombinationOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___generateKeyEventsOnKeyCombinationOverride = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_windowsStandalone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_windowsStandalone;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_windowsStandalone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_windowsStandalone;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_windowsStandalone(::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_windowsStandalone = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_linuxStandalone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_linuxStandalone;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_linuxStandalone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_linuxStandalone;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_linuxStandalone(::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_linuxStandalone = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_osxStandalone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_osxStandalone;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_osxStandalone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_osxStandalone;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_osxStandalone(::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_osxStandalone = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_windowsUWP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_windowsUWP;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_windowsUWP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_windowsUWP;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_windowsUWP(::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_windowsUWP = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_iOS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_iOS;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_iOS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_iOS;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_iOS(::Rewired::Data::ConfigVars_PlatformVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_iOS = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_tvOS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_tvOS;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_tvOS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_tvOS;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_tvOS(::Rewired::Data::ConfigVars_PlatformVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_tvOS = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_android()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_android;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_android() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_android;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_android(::Rewired::Data::ConfigVars_PlatformVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_android = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_ps4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_ps4;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_ps4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_ps4;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_ps4(::Rewired::Data::ConfigVars_PlatformVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_ps4 = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_PS5*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_ps5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_ps5;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_PS5* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_ps5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_ps5;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_ps5(::Rewired::Data::ConfigVars_PlatformVars_PS5*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_ps5 = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_psVita()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_psVita;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_psVita() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_psVita;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_psVita(::Rewired::Data::ConfigVars_PlatformVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_psVita = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_xboxOne()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_xboxOne;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_xboxOne() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_xboxOne;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_xboxOne(::Rewired::Data::ConfigVars_PlatformVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_xboxOne = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_gameCoreXboxOne()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_gameCoreXboxOne;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_gameCoreXboxOne() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_gameCoreXboxOne;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_gameCoreXboxOne(::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_gameCoreXboxOne = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_gameCoreScarlett()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_gameCoreScarlett;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_gameCoreScarlett() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_gameCoreScarlett;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_gameCoreScarlett(::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_gameCoreScarlett = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_switch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_switch;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_switch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_switch;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_switch(::Rewired::Data::ConfigVars_PlatformVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_switch = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_switch2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_switch2;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_switch2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_switch2;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_switch2(::Rewired::Data::ConfigVars_PlatformVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_switch2 = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_webGL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_webGL;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_webGL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_webGL;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_webGL(::Rewired::Data::ConfigVars_PlatformVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_webGL = value;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars*& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_unknown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_unknown;
}
constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& Rewired::Data::ConfigVars::__cordl_internal_get_platformVars_unknown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformVars_unknown;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_platformVars_unknown(::Rewired::Data::ConfigVars_PlatformVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformVars_unknown = value;
}
constexpr int32_t& Rewired::Data::ConfigVars::__cordl_internal_get_maxJoysticksPerPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxJoysticksPerPlayer;
}
constexpr int32_t const& Rewired::Data::ConfigVars::__cordl_internal_get_maxJoysticksPerPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxJoysticksPerPlayer;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_maxJoysticksPerPlayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxJoysticksPerPlayer = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_autoAssignJoysticks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoAssignJoysticks;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_autoAssignJoysticks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoAssignJoysticks;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_autoAssignJoysticks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoAssignJoysticks = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_assignJoysticksToPlayingPlayersOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignJoysticksToPlayingPlayersOnly;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_assignJoysticksToPlayingPlayersOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___assignJoysticksToPlayingPlayersOnly;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_assignJoysticksToPlayingPlayersOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___assignJoysticksToPlayingPlayersOnly = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_distributeJoysticksEvenly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distributeJoysticksEvenly;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_distributeJoysticksEvenly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distributeJoysticksEvenly;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_distributeJoysticksEvenly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distributeJoysticksEvenly = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_reassignJoystickToPreviousOwnerOnReconnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reassignJoystickToPreviousOwnerOnReconnect;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_reassignJoystickToPreviousOwnerOnReconnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reassignJoystickToPreviousOwnerOnReconnect;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_reassignJoystickToPreviousOwnerOnReconnect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reassignJoystickToPreviousOwnerOnReconnect = value;
}
constexpr ::Rewired::DeadZone2DType& Rewired::Data::ConfigVars::__cordl_internal_get_defaultJoystickAxis2DDeadZoneType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultJoystickAxis2DDeadZoneType;
}
constexpr ::Rewired::DeadZone2DType const& Rewired::Data::ConfigVars::__cordl_internal_get_defaultJoystickAxis2DDeadZoneType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultJoystickAxis2DDeadZoneType;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_defaultJoystickAxis2DDeadZoneType(::Rewired::DeadZone2DType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultJoystickAxis2DDeadZoneType = value;
}
constexpr ::Rewired::AxisSensitivity2DType& Rewired::Data::ConfigVars::__cordl_internal_get_defaultJoystickAxis2DSensitivityType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultJoystickAxis2DSensitivityType;
}
constexpr ::Rewired::AxisSensitivity2DType const& Rewired::Data::ConfigVars::__cordl_internal_get_defaultJoystickAxis2DSensitivityType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultJoystickAxis2DSensitivityType;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_defaultJoystickAxis2DSensitivityType(::Rewired::AxisSensitivity2DType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultJoystickAxis2DSensitivityType = value;
}
constexpr ::Rewired::AxisSensitivityType& Rewired::Data::ConfigVars::__cordl_internal_get_defaultAxisSensitivityType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAxisSensitivityType;
}
constexpr ::Rewired::AxisSensitivityType const& Rewired::Data::ConfigVars::__cordl_internal_get_defaultAxisSensitivityType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultAxisSensitivityType;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_defaultAxisSensitivityType(::Rewired::AxisSensitivityType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultAxisSensitivityType = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_force4WayHats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force4WayHats;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_force4WayHats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___force4WayHats;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_force4WayHats(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___force4WayHats = value;
}
constexpr ::Rewired::Config::ThrottleCalibrationMode& Rewired::Data::ConfigVars::__cordl_internal_get_throttleCalibrationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throttleCalibrationMode;
}
constexpr ::Rewired::Config::ThrottleCalibrationMode const& Rewired::Data::ConfigVars::__cordl_internal_get_throttleCalibrationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throttleCalibrationMode;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_throttleCalibrationMode(::Rewired::Config::ThrottleCalibrationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throttleCalibrationMode = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_activateActionButtonsOnNegativeValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateActionButtonsOnNegativeValue;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_activateActionButtonsOnNegativeValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activateActionButtonsOnNegativeValue;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_activateActionButtonsOnNegativeValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activateActionButtonsOnNegativeValue = value;
}
constexpr bool& Rewired::Data::ConfigVars::__cordl_internal_get_deferControllerConnectedEventsOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deferControllerConnectedEventsOnStart;
}
constexpr bool const& Rewired::Data::ConfigVars::__cordl_internal_get_deferControllerConnectedEventsOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deferControllerConnectedEventsOnStart;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_deferControllerConnectedEventsOnStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deferControllerConnectedEventsOnStart = value;
}
constexpr ::Rewired::Config::LogLevelFlags& Rewired::Data::ConfigVars::__cordl_internal_get_logLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLevel;
}
constexpr ::Rewired::Config::LogLevelFlags const& Rewired::Data::ConfigVars::__cordl_internal_get_logLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logLevel;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_logLevel(::Rewired::Config::LogLevelFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logLevel = value;
}
constexpr ::Rewired::Data::ConfigVars_EditorVars*& Rewired::Data::ConfigVars::__cordl_internal_get_editorSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorSettings;
}
constexpr ::Rewired::Data::ConfigVars_EditorVars* const& Rewired::Data::ConfigVars::__cordl_internal_get_editorSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorSettings;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set_editorSettings(::Rewired::Data::ConfigVars_EditorVars*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorSettings = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>*& Rewired::Data::ConfigVars::__cordl_internal_get___platformVarsDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____platformVarsDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>* const& Rewired::Data::ConfigVars::__cordl_internal_get___platformVarsDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____platformVarsDict;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set___platformVarsDict(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____platformVarsDict = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>*& Rewired::Data::ConfigVars::__cordl_internal_get___getSetPlatformVariableDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____getSetPlatformVariableDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>* const& Rewired::Data::ConfigVars::__cordl_internal_get___getSetPlatformVariableDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____getSetPlatformVariableDict;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set___getSetPlatformVariableDict(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____getSetPlatformVariableDict = value;
}
constexpr ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>*& Rewired::Data::ConfigVars::__cordl_internal_get___configVarsValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____configVarsValues;
}
constexpr ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>* const& Rewired::Data::ConfigVars::__cordl_internal_get___configVarsValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____configVarsValues;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set___configVarsValues(::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____configVarsValues = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& Rewired::Data::ConfigVars::__cordl_internal_get___valueDelegates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____valueDelegates;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& Rewired::Data::ConfigVars::__cordl_internal_get___valueDelegates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____valueDelegates;
}
constexpr void Rewired::Data::ConfigVars::__cordl_internal_set___valueDelegates(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____valueDelegates = value;
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>* Rewired::Data::ConfigVars::get_platformVarsDict()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"get_platformVarsDict", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>* Rewired::Data::ConfigVars::get_getSetPlatformVariableDict()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"get_getSetPlatformVariableDict", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>*>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Data::ConfigVars::DoesPlatformUseFallback(::Rewired::Platforms::Platform  platform, ::Rewired::Platforms::WebplayerPlatform  webplayerPlatform, bool  isEditor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"DoesPlatformUseFallback", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::Rewired::Platforms::WebplayerPlatform>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, platform, webplayerPlatform, isEditor);
}
inline ::StringW Rewired::Data::ConfigVars::GetDebugConfigSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetDebugConfigSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Rewired::Data::ConfigVars::GetPlatformVarsRelPath(::Rewired::Platforms::Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVarsRelPath", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, platform);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::GetPlatformVars(::Rewired::Platforms::Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVars", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method, platform);
}
template<typename T>
inline T Rewired::Data::ConfigVars::Editor_GetAllSerializedPlatformVar(::Rewired::Data::ConfigVars_AllPlatformVar  var)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                    {"Editor_GetAllSerializedPlatformVar", {::i2c::class_of<T>()}, {::i2c::type_of<::Rewired::Data::ConfigVars_AllPlatformVar>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, var);
}
inline void Rewired::Data::ConfigVars::Editor_SetAllSerializedPlatformVar(::Rewired::Data::ConfigVars_AllPlatformVar  var, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"Editor_SetAllSerializedPlatformVar", {}, {::i2c::type_of<::Rewired::Data::ConfigVars_AllPlatformVar>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, var, value);
}
inline bool Rewired::Data::ConfigVars::GetPlatformVar_disableKeyboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_disableKeyboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::ConfigVars::SetPlatformVar_disableKeyboard(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_disableKeyboard", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Rewired::Data::ConfigVars::GetPlatformVar_disableMouse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_disableMouse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::ConfigVars::SetPlatformVar_disableMouse(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_disableMouse", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Rewired::Data::ConfigVars::GetPlatformVar_ignoreInputWhenAppNotInFocus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_ignoreInputWhenAppNotInFocus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::ConfigVars::GetPlatformVar_useEnhancedDeviceSupport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_useEnhancedDeviceSupport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::ConfigVars::GetPlatformVar_useNativeMouse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_useNativeMouse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::ConfigVars::GetPlatformVar_useNativeKeyboard()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_useNativeKeyboard", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Rewired::Data::ConfigVars::GetPlatformVar_joystickRefreshRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_joystickRefreshRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Rewired::Data::ConfigVars::GetPlatformVar_assignJoysticksBySystemId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_assignJoysticksBySystemId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::ConfigVars::GetPlatformVar_useAppleGameController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_useAppleGameController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Rewired::Data::ConfigVars::GetPlatformVar_useWindowsGamingInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_useWindowsGamingInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>* Rewired::Data::ConfigVars::GetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*>(this, ___internal_method);
}
inline bool Rewired::Data::ConfigVars::SetPlatformVar_ignoreInputWhenAppNotInFocus(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_ignoreInputWhenAppNotInFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Rewired::Data::ConfigVars::SetPlatformVar_useEnhancedDeviceSupport(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_useEnhancedDeviceSupport", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Rewired::Data::ConfigVars::SetPlatformVar_useNativeMouse(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_useNativeMouse", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Rewired::Data::ConfigVars::SetPlatformVar_useNativeKeyboard(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_useNativeKeyboard", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Rewired::Data::ConfigVars::SetPlatformVar_joystickRefreshRate(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_joystickRefreshRate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Rewired::Data::ConfigVars::SetPlatformVar_assignJoysticksBySystemId(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_assignJoysticksBySystemId", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Rewired::Data::ConfigVars::SetPlatformVar_useAppleGameController(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_useAppleGameController", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Rewired::Data::ConfigVars::SetPlatformVar_useWindowsGamingInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_useWindowsGamingInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Rewired::Data::ConfigVars::SetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes(::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"SetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::GetPlatformVars()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetPlatformVars", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
template<typename T>
inline T Rewired::Data::ConfigVars::GetOrCreatePlatformVars(::by_ref<T>  var)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                    {"GetOrCreatePlatformVars", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, var);
}
inline ::Rewired::MultiBoolValue Rewired::Data::ConfigVars::GetAllSerializedPlatformVar_multiBool(::Rewired::Data::ConfigVars_AllPlatformVar  var)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"GetAllSerializedPlatformVar_multiBool", {}, {::i2c::type_of<::Rewired::Data::ConfigVars_AllPlatformVar>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::MultiBoolValue>(this, ___internal_method, var);
}
inline bool Rewired::Data::ConfigVars::IsEditModeInputSupported(::Rewired::ControllerType  controllerType, ::Rewired::Platforms::EditorPlatform  editorPlatform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"IsEditModeInputSupported", {}, {::i2c::type_of<::Rewired::ControllerType>(), ::i2c::type_of<::Rewired::Platforms::EditorPlatform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, controllerType, editorPlatform);
}
inline bool Rewired::Data::ConfigVars::IsNativeKeyboardAllowed(::Rewired::Platforms::Platform  platform, bool  unityUsePhysicalKeys)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"IsNativeKeyboardAllowed", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, platform, unityUsePhysicalKeys);
}
inline ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>* Rewired::Data::ConfigVars::Rewired_Data_IConfigVars_Internal_get_values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"Rewired.Data.IConfigVars_Internal.get_values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Rewired::Data::ConfigVars::get_valueDelegates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"get_valueDelegates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_5()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_5", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_7()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_7", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_9()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_9", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_11()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_11", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_12()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_12", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_13()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_13", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_14()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_14", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_15()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_15", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::Rewired::Data::ConfigVars_PlatformVars* Rewired::Data::ConfigVars::_get_platformVarsDict_b__59_16()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_platformVarsDict>b__59_16", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::ConfigVars_PlatformVars*>(this, ___internal_method);
}
inline ::System::Object* Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_0(::Rewired::Platforms::Platform  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_0", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, p);
}
inline void Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_1(::Rewired::Platforms::Platform  platform, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_1", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform, value);
}
inline ::System::Object* Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_2(::Rewired::Platforms::Platform  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_2", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, p);
}
inline void Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_3(::Rewired::Platforms::Platform  platform, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_3", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform, value);
}
inline ::System::Object* Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_4(::Rewired::Platforms::Platform  platform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_4", {}, {::i2c::type_of<::Rewired::Platforms::Platform>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, platform);
}
inline void Rewired::Data::ConfigVars::_get_getSetPlatformVariableDict_b__62_5(::Rewired::Platforms::Platform  platform, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_getSetPlatformVariableDict>b__62_5", {}, {::i2c::type_of<::Rewired::Platforms::Platform>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, platform, value);
}
inline ::Rewired::Config::UpdateLoopSetting Rewired::Data::ConfigVars::_get_valueDelegates_b__102_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Config::UpdateLoopSetting>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_1(::Rewired::Config::UpdateLoopSetting  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_1", {}, {::i2c::type_of<::Rewired::Config::UpdateLoopSetting>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_3(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_3", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::WindowsStandalonePrimaryInputSource Rewired::Data::ConfigVars::_get_valueDelegates_b__102_4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::WindowsStandalonePrimaryInputSource>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_5(::Rewired::Platforms::WindowsStandalonePrimaryInputSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_5", {}, {::i2c::type_of<::Rewired::Platforms::WindowsStandalonePrimaryInputSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::OSXStandalonePrimaryInputSource Rewired::Data::ConfigVars::_get_valueDelegates_b__102_6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::OSXStandalonePrimaryInputSource>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_7(::Rewired::Platforms::OSXStandalonePrimaryInputSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_7", {}, {::i2c::type_of<::Rewired::Platforms::OSXStandalonePrimaryInputSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::LinuxStandalonePrimaryInputSource Rewired::Data::ConfigVars::_get_valueDelegates_b__102_8()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_8", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::LinuxStandalonePrimaryInputSource>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_9(::Rewired::Platforms::LinuxStandalonePrimaryInputSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_9", {}, {::i2c::type_of<::Rewired::Platforms::LinuxStandalonePrimaryInputSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::WindowsUWPPrimaryInputSource Rewired::Data::ConfigVars::_get_valueDelegates_b__102_10()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_10", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::WindowsUWPPrimaryInputSource>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_11(::Rewired::Platforms::WindowsUWPPrimaryInputSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_11", {}, {::i2c::type_of<::Rewired::Platforms::WindowsUWPPrimaryInputSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::XboxOnePrimaryInputSource Rewired::Data::ConfigVars::_get_valueDelegates_b__102_12()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_12", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::XboxOnePrimaryInputSource>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_13(::Rewired::Platforms::XboxOnePrimaryInputSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_13", {}, {::i2c::type_of<::Rewired::Platforms::XboxOnePrimaryInputSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource Rewired::Data::ConfigVars::_get_valueDelegates_b__102_14()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_14", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_15(::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_15", {}, {::i2c::type_of<::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::GameCoreScarlettPrimaryInputSource Rewired::Data::ConfigVars::_get_valueDelegates_b__102_16()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_16", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::GameCoreScarlettPrimaryInputSource>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_17(::Rewired::Platforms::GameCoreScarlettPrimaryInputSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_17", {}, {::i2c::type_of<::Rewired::Platforms::GameCoreScarlettPrimaryInputSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::PS4PrimaryInputSource Rewired::Data::ConfigVars::_get_valueDelegates_b__102_18()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_18", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::PS4PrimaryInputSource>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_19(::Rewired::Platforms::PS4PrimaryInputSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_19", {}, {::i2c::type_of<::Rewired::Platforms::PS4PrimaryInputSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::PS5PrimaryInputSource Rewired::Data::ConfigVars::_get_valueDelegates_b__102_20()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_20", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::PS5PrimaryInputSource>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_21(::Rewired::Platforms::PS5PrimaryInputSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_21", {}, {::i2c::type_of<::Rewired::Platforms::PS5PrimaryInputSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Platforms::WebGLPrimaryInputSource Rewired::Data::ConfigVars::_get_valueDelegates_b__102_22()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_22", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Platforms::WebGLPrimaryInputSource>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_23(::Rewired::Platforms::WebGLPrimaryInputSource  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_23", {}, {::i2c::type_of<::Rewired::Platforms::WebGLPrimaryInputSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_24()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_24", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_25(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_25", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_26()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_26", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_27(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_27", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_28()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_28", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_29(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_29", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_30()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_30", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_31(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_31", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_33(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_33", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_34()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_34", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_35(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_35", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_36()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_36", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_37(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_37", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_38()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_38", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_39(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_39", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline int32_t Rewired::Data::ConfigVars::_get_valueDelegates_b__102_40()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_40", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_41(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_41", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_42()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_42", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_43(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_43", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_44()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_44", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_45(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_45", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_46()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_46", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_47(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_47", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_48()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_48", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_49(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_49", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::DeadZone2DType Rewired::Data::ConfigVars::_get_valueDelegates_b__102_50()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_50", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::DeadZone2DType>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_51(::Rewired::DeadZone2DType  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_51", {}, {::i2c::type_of<::Rewired::DeadZone2DType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::AxisSensitivity2DType Rewired::Data::ConfigVars::_get_valueDelegates_b__102_52()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_52", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisSensitivity2DType>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_53(::Rewired::AxisSensitivity2DType  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_53", {}, {::i2c::type_of<::Rewired::AxisSensitivity2DType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::AxisSensitivityType Rewired::Data::ConfigVars::_get_valueDelegates_b__102_54()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_54", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisSensitivityType>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_55(::Rewired::AxisSensitivityType  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_55", {}, {::i2c::type_of<::Rewired::AxisSensitivityType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_56()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_56", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_57(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_57", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Config::ThrottleCalibrationMode Rewired::Data::ConfigVars::_get_valueDelegates_b__102_58()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_58", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Config::ThrottleCalibrationMode>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_59(::Rewired::Config::ThrottleCalibrationMode  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_59", {}, {::i2c::type_of<::Rewired::Config::ThrottleCalibrationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_60()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_60", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_61(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_61", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_62()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_62", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_63(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_63", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Config::LogLevelFlags Rewired::Data::ConfigVars::_get_valueDelegates_b__102_64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Config::LogLevelFlags>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_65(::Rewired::Config::LogLevelFlags  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_65", {}, {::i2c::type_of<::Rewired::Config::LogLevelFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_66()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_66", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_67(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_67", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_68()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_68", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_69(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_69", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_70()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_70", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_71(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_71", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_72()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_72", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_73(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_73", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_74()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_74", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_75(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_75", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_76()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_76", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_77(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_77", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline int32_t Rewired::Data::ConfigVars::_get_valueDelegates_b__102_78()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_78", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_79(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_79", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline bool Rewired::Data::ConfigVars::_get_valueDelegates_b__102_80()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_80", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::Data::ConfigVars::_get_valueDelegates_b__102_81(bool  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::ConfigVars*>(),
                        {"<get_valueDelegates>b__102_81", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Rewired::Data::ConfigVars* Rewired::Data::ConfigVars::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::ConfigVars*>());
}
/// @brief Convert operator to "::Rewired::Data::IConfigVars_Internal"
constexpr  Rewired::Data::ConfigVars::operator ::Rewired::Data::IConfigVars_Internal*() noexcept {
return static_cast<::Rewired::Data::IConfigVars_Internal*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Data::IConfigVars_Internal"
constexpr ::Rewired::Data::IConfigVars_Internal* Rewired::Data::ConfigVars::i___Rewired__Data__IConfigVars_Internal() noexcept {
return static_cast<::Rewired::Data::IConfigVars_Internal*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::ConfigVars::ConfigVars()   {
}
