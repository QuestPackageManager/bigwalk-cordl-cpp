#pragma once
// IWYU pragma private; include "Rewired/HardwareJoystickMap_InputManager.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_impl.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_impl.hpp"
#include "Rewired/zzzz__HardwareControllerMapIdentifier_impl.hpp"
#include "Rewired/zzzz__JoystickType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__HardwareJoystickMap_InputManager_def.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "Rewired/Internal/Localization/zzzz__DeviceLocalizationInfo_def.hpp"
#include "Rewired/zzzz__HardwareControllerMapIdentifier_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/zzzz__JoystickType_def.hpp"
//  Writing Method size for method: ::Rewired::HardwareJoystickMap_InputManager.get_deviceLocalizationInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Internal::Localization::DeviceLocalizationInfo* (::Rewired::HardwareJoystickMap_InputManager::*)()>(&::Rewired::HardwareJoystickMap_InputManager::get_deviceLocalizationInfo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareJoystickMap_InputManager*>(),
                        {"get_deviceLocalizationInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareJoystickMap_InputManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::HardwareJoystickMap_InputManager::*)(::Rewired::HardwareControllerMapIdentifier, ::ArrayW<::Rewired::JoystickType>, ::Rewired::Internal::Localization::DeviceLocalizationInfo*, ::Rewired::Data::Mapping::HardwareJoystickMap_Platform*, ::StringW, int32_t, int32_t, int32_t, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>)>(&::Rewired::HardwareJoystickMap_InputManager::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1819a32d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareJoystickMap_InputManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HardwareControllerMapIdentifier>(), ::i2c::type_of<::ArrayW<::Rewired::JoystickType>>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::HardwareJoystickMap_InputManager.ToGameHardwareControllerMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareControllerMap_Game* (::Rewired::HardwareJoystickMap_InputManager::*)()>(&::Rewired::HardwareJoystickMap_InputManager::ToGameHardwareControllerMap)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x1819a2d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareJoystickMap_InputManager*>(),
                        {"ToGameHardwareControllerMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_controllerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerName;
}
constexpr ::StringW const& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_controllerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerName;
}
constexpr void Rewired::HardwareJoystickMap_InputManager::__cordl_internal_set_controllerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerName = value;
}
constexpr ::Rewired::HardwareControllerMapIdentifier& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_hardwareMapIdentifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareMapIdentifier;
}
constexpr ::Rewired::HardwareControllerMapIdentifier const& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_hardwareMapIdentifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hardwareMapIdentifier;
}
constexpr void Rewired::HardwareJoystickMap_InputManager::__cordl_internal_set_hardwareMapIdentifier(::Rewired::HardwareControllerMapIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hardwareMapIdentifier = value;
}
constexpr ::Rewired::Data::Mapping::HardwareJoystickMap_Platform*& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr ::Rewired::Data::Mapping::HardwareJoystickMap_Platform* const& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
constexpr void Rewired::HardwareJoystickMap_InputManager::__cordl_internal_set_map(::Rewired::Data::Mapping::HardwareJoystickMap_Platform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___map = value;
}
constexpr int32_t& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_buttonCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonCount;
}
constexpr int32_t const& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_buttonCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonCount;
}
constexpr void Rewired::HardwareJoystickMap_InputManager::__cordl_internal_set_buttonCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonCount = value;
}
constexpr int32_t& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_axisCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisCount;
}
constexpr int32_t const& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_axisCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisCount;
}
constexpr void Rewired::HardwareJoystickMap_InputManager::__cordl_internal_set_axisCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisCount = value;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_elementIdentifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifiers;
}
constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_elementIdentifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementIdentifiers;
}
constexpr void Rewired::HardwareJoystickMap_InputManager::__cordl_internal_set_elementIdentifiers(::ArrayW<::Rewired::ControllerElementIdentifier*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementIdentifiers = value;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_compoundElements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compoundElements;
}
constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*> const& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_compoundElements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compoundElements;
}
constexpr void Rewired::HardwareJoystickMap_InputManager::__cordl_internal_set_compoundElements(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compoundElements = value;
}
constexpr bool& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_useSystemName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSystemName;
}
constexpr bool const& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_useSystemName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useSystemName;
}
constexpr void Rewired::HardwareJoystickMap_InputManager::__cordl_internal_set_useSystemName(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useSystemName = value;
}
constexpr bool& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_isUnknownController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isUnknownController;
}
constexpr bool const& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_isUnknownController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isUnknownController;
}
constexpr void Rewired::HardwareJoystickMap_InputManager::__cordl_internal_set_isUnknownController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isUnknownController = value;
}
constexpr ::ArrayW<::Rewired::JoystickType>& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_joystickTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickTypes;
}
constexpr ::ArrayW<::Rewired::JoystickType> const& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_joystickTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joystickTypes;
}
constexpr void Rewired::HardwareJoystickMap_InputManager::__cordl_internal_set_joystickTypes(::ArrayW<::Rewired::JoystickType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joystickTypes = value;
}
constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo*& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_EaEgjavkUTXlNMhNBGIRINhjCoATA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EaEgjavkUTXlNMhNBGIRINhjCoATA;
}
constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo* const& Rewired::HardwareJoystickMap_InputManager::__cordl_internal_get_EaEgjavkUTXlNMhNBGIRINhjCoATA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EaEgjavkUTXlNMhNBGIRINhjCoATA;
}
constexpr void Rewired::HardwareJoystickMap_InputManager::__cordl_internal_set_EaEgjavkUTXlNMhNBGIRINhjCoATA(::Rewired::Internal::Localization::DeviceLocalizationInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EaEgjavkUTXlNMhNBGIRINhjCoATA = value;
}
inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* Rewired::HardwareJoystickMap_InputManager::get_deviceLocalizationInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareJoystickMap_InputManager*>(),
                        {"get_deviceLocalizationInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(this, ___internal_method);
}
inline void Rewired::HardwareJoystickMap_InputManager::_ctor(::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace, ::ArrayW<::Rewired::JoystickType>  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Data::Mapping::HardwareJoystickMap_Platform*  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_8)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareJoystickMap_InputManager*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::HardwareControllerMapIdentifier>(), ::i2c::type_of<::ArrayW<::Rewired::JoystickType>>(), ::i2c::type_of<::Rewired::Internal::Localization::DeviceLocalizationInfo*>(), ::i2c::type_of<::Rewired::Data::Mapping::HardwareJoystickMap_Platform*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8);
}
inline ::Rewired::HardwareControllerMap_Game* Rewired::HardwareJoystickMap_InputManager::ToGameHardwareControllerMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::HardwareJoystickMap_InputManager*>(),
                        {"ToGameHardwareControllerMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareControllerMap_Game*>(this, ___internal_method);
}
inline ::Rewired::HardwareJoystickMap_InputManager* Rewired::HardwareJoystickMap_InputManager::New_ctor(::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace, ::ArrayW<::Rewired::JoystickType>  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Data::Mapping::HardwareJoystickMap_Platform*  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_8)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::HardwareJoystickMap_InputManager*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8));
}
// Ctor Parameters []
constexpr ::Rewired::HardwareJoystickMap_InputManager::HardwareJoystickMap_InputManager()   {
}
