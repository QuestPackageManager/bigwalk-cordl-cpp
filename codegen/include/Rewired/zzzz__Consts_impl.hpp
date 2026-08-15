#pragma once
// IWYU pragma private; include "Rewired/Consts.hpp"
#include "Rewired/Config/zzzz__KeyCombinationOverrideMode_impl.hpp"
#include "Rewired/Config/zzzz__LogLevelFlags_impl.hpp"
#include "Rewired/zzzz__AxisSensitivityType_impl.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_impl.hpp"
#include "Rewired/zzzz__PidVid_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__Consts_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__Keyboard_def.hpp"
#include "Rewired/zzzz__PidVid_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::Rewired::Consts.get_nintendoSwitchPlugin_minPluginVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Rewired::Consts::get_nintendoSwitchPlugin_minPluginVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18183d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_nintendoSwitchPlugin_minPluginVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Consts.get_nintendoSwitch2Plugin_minPluginVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Rewired::Consts::get_nintendoSwitch2Plugin_minPluginVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_nintendoSwitch2Plugin_minPluginVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Consts.get_gameCorePlugin_minPluginVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Rewired::Consts::get_gameCorePlugin_minPluginVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_gameCorePlugin_minPluginVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Consts.get_ps4Plugin_minPluginVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Rewired::Consts::get_ps4Plugin_minPluginVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_ps4Plugin_minPluginVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Consts.get_ps5Plugin_minPluginVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Rewired::Consts::get_ps5Plugin_minPluginVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802edd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_ps5Plugin_minPluginVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Consts.get_commonMouseElementIdentifierInitOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*> (*)()>(&::Rewired::Consts::get_commonMouseElementIdentifierInitOptions)> {
  constexpr static std::size_t size = 0xa00;
  constexpr static std::size_t addrs = 0x18183cbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_commonMouseElementIdentifierInitOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Consts.get_unityUnifiedMouseElementIdentifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* (*)()>(&::Rewired::Consts::get_unityUnifiedMouseElementIdentifiers)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x18183d970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_unityUnifiedMouseElementIdentifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Consts.get_rawInputUnifiedMouseElementIdentifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* (*)()>(&::Rewired::Consts::get_rawInputUnifiedMouseElementIdentifiers)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18183d650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_rawInputUnifiedMouseElementIdentifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Consts.get_keyboardKeyKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::StringW>* (*)()>(&::Rewired::Consts::get_keyboardKeyKeys)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18183d5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_keyboardKeyKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Consts.get_keyboardModifierKeyKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::StringW>* (*)()>(&::Rewired::Consts::get_keyboardModifierKeyKeys)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18183d600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_keyboardModifierKeyKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Consts.get_unknownJoystickElementIdentifiers_orig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ControllerElementIdentifier*> (*)()>(&::Rewired::Consts::get_unknownJoystickElementIdentifiers_orig)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18183dd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_unknownJoystickElementIdentifiers_orig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Consts.JqchBUhZyYvSoUtQQtOuXGRAQuhV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Rewired::ControllerElementIdentifier*> (*)()>(&::Rewired::Consts::JqchBUhZyYvSoUtQQtOuXGRAQuhV)> {
  constexpr static std::size_t size = 0xa20;
  constexpr static std::size_t addrs = 0x181839640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"JqchBUhZyYvSoUtQQtOuXGRAQuhV", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Consts::setStaticF_questionablePidVids(::ArrayW<::Rewired::PidVid>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Rewired::PidVid>, "questionablePidVids", ::Rewired::Consts*>(std::forward<::ArrayW<::Rewired::PidVid>>(value));
}
inline ::ArrayW<::Rewired::PidVid> Rewired::Consts::getStaticF_questionablePidVids()  {
return ::cordl_internals::getStaticField<::ArrayW<::Rewired::PidVid>, "questionablePidVids", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_questionableVIDs(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "questionableVIDs", ::Rewired::Consts*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Rewired::Consts::getStaticF_questionableVIDs()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "questionableVIDs", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_unknownController(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_unknownController", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_unknownController()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_unknownController", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_appleMFiController(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_appleMFiController", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_appleMFiController()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_appleMFiController", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_standardizedGamepad(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_standardizedGamepad", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_standardizedGamepad()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_standardizedGamepad", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_steamController(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_steamController", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_steamController()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_steamController", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_SonyDualShock4(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_SonyDualShock4", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_SonyDualShock4()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_SonyDualShock4", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_SonyPS4AimController(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_SonyPS4AimController", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_SonyPS4AimController()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_SonyPS4AimController", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_SonyPS4Drums(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_SonyPS4Drums", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_SonyPS4Drums()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_SonyPS4Drums", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_SonyPS4FlightStick(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_SonyPS4FlightStick", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_SonyPS4FlightStick()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_SonyPS4FlightStick", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_SonyPS4Guitar(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_SonyPS4Guitar", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_SonyPS4Guitar()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_SonyPS4Guitar", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_SonyPS4SteeringWheel(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_SonyPS4SteeringWheel", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_SonyPS4SteeringWheel()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_SonyPS4SteeringWheel", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_SonyDualSense(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_SonyDualSense", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_SonyDualSense()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_SonyDualSense", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_NintendoSwitchHandheld(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_NintendoSwitchHandheld", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_NintendoSwitchHandheld()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_NintendoSwitchHandheld", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_NintendoSwitchJoyConDual(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_NintendoSwitchJoyConDual", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_NintendoSwitchJoyConDual()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_NintendoSwitchJoyConDual", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_NintendoSwitchJoyConL(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_NintendoSwitchJoyConL", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_NintendoSwitchJoyConL()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_NintendoSwitchJoyConL", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_joystickGuid_NintendoSwitchJoyConR(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "joystickGuid_NintendoSwitchJoyConR", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_joystickGuid_NintendoSwitchJoyConR()  {
return ::cordl_internals::getStaticField<::System::Guid, "joystickGuid_NintendoSwitchJoyConR", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_hardwareTypeGuid_universalKeyboard(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "hardwareTypeGuid_universalKeyboard", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_hardwareTypeGuid_universalKeyboard()  {
return ::cordl_internals::getStaticField<::System::Guid, "hardwareTypeGuid_universalKeyboard", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_hardwareTypeGuid_universalMouse(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "hardwareTypeGuid_universalMouse", ::Rewired::Consts*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Consts::getStaticF_hardwareTypeGuid_universalMouse()  {
return ::cordl_internals::getStaticField<::System::Guid, "hardwareTypeGuid_universalMouse", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_wIuHjYaozNDvlijrfkYQXXYLuSZg(::ArrayW<::System::Guid>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Guid>, "wIuHjYaozNDvlijrfkYQXXYLuSZg", ::Rewired::Consts*>(std::forward<::ArrayW<::System::Guid>>(value));
}
inline ::ArrayW<::System::Guid> Rewired::Consts::getStaticF_wIuHjYaozNDvlijrfkYQXXYLuSZg()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Guid>, "wIuHjYaozNDvlijrfkYQXXYLuSZg", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_reservedHardwareTypeGuids(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Guid>*  value)  {
::cordl_internals::setStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Guid>*, "reservedHardwareTypeGuids", ::Rewired::Consts*>(std::forward<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Guid>*>(value));
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Guid>* Rewired::Consts::getStaticF_reservedHardwareTypeGuids()  {
return ::cordl_internals::getStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Guid>*, "reservedHardwareTypeGuids", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_eYHBvPgAcPIBlFxpObdiuFknkvXFA(::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>, "eYHBvPgAcPIBlFxpObdiuFknkvXFA", ::Rewired::Consts*>(std::forward<::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>>(value));
}
inline ::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*> Rewired::Consts::getStaticF_eYHBvPgAcPIBlFxpObdiuFknkvXFA()  {
return ::cordl_internals::getStaticField<::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>, "eYHBvPgAcPIBlFxpObdiuFknkvXFA", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_XIDFRGrChdAIjmkQnIvyFkrWBMQHA(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*, "XIDFRGrChdAIjmkQnIvyFkrWBMQHA", ::Rewired::Consts*>(std::forward<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*>(value));
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>* Rewired::Consts::getStaticF_XIDFRGrChdAIjmkQnIvyFkrWBMQHA()  {
return ::cordl_internals::getStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*, "XIDFRGrChdAIjmkQnIvyFkrWBMQHA", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_eouuVvDPXMlVYVyxWmXXSnuGijiI(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*, "eouuVvDPXMlVYVyxWmXXSnuGijiI", ::Rewired::Consts*>(std::forward<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*>(value));
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>* Rewired::Consts::getStaticF_eouuVvDPXMlVYVyxWmXXSnuGijiI()  {
return ::cordl_internals::getStaticField<::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*, "eouuVvDPXMlVYVyxWmXXSnuGijiI", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_mouseAxisUnityNames(::System::Collections::Generic::IList_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<::StringW>*, "mouseAxisUnityNames", ::Rewired::Consts*>(std::forward<::System::Collections::Generic::IList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IList_1<::StringW>* Rewired::Consts::getStaticF_mouseAxisUnityNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<::StringW>*, "mouseAxisUnityNames", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_cxtBQFIHjgVAgHHfXEkaGHKOMzdK(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "cxtBQFIHjgVAgHHfXEkaGHKOMzdK", ::Rewired::Consts*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Rewired::Consts::getStaticF_cxtBQFIHjgVAgHHfXEkaGHKOMzdK()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "cxtBQFIHjgVAgHHfXEkaGHKOMzdK", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_mouseButtonUnityNames(::System::Collections::Generic::IList_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<::StringW>*, "mouseButtonUnityNames", ::Rewired::Consts*>(std::forward<::System::Collections::Generic::IList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IList_1<::StringW>* Rewired::Consts::getStaticF_mouseButtonUnityNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<::StringW>*, "mouseButtonUnityNames", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_xWsvcwCsTxFendABMyQZCfBzvpyI(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "xWsvcwCsTxFendABMyQZCfBzvpyI", ::Rewired::Consts*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Rewired::Consts::getStaticF_xWsvcwCsTxFendABMyQZCfBzvpyI()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "xWsvcwCsTxFendABMyQZCfBzvpyI", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_keyboardKeyNames(::System::Collections::Generic::IList_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<::StringW>*, "keyboardKeyNames", ::Rewired::Consts*>(std::forward<::System::Collections::Generic::IList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IList_1<::StringW>* Rewired::Consts::getStaticF_keyboardKeyNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<::StringW>*, "keyboardKeyNames", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_hNMegExVBUfAROLzBDOCuEgbfYwg(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "hNMegExVBUfAROLzBDOCuEgbfYwg", ::Rewired::Consts*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Rewired::Consts::getStaticF_hNMegExVBUfAROLzBDOCuEgbfYwg()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "hNMegExVBUfAROLzBDOCuEgbfYwg", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_keyboardKeyValues(::System::Collections::Generic::IList_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<int32_t>*, "keyboardKeyValues", ::Rewired::Consts*>(std::forward<::System::Collections::Generic::IList_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::IList_1<int32_t>* Rewired::Consts::getStaticF_keyboardKeyValues()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<int32_t>*, "keyboardKeyValues", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF__keyboardKeyValues(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_keyboardKeyValues", ::Rewired::Consts*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Rewired::Consts::getStaticF__keyboardKeyValues()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_keyboardKeyValues", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_WRKdkFuJihzhaMpGifOQBCwWNdXy(::System::Collections::Generic::IList_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<::StringW>*, "WRKdkFuJihzhaMpGifOQBCwWNdXy", ::Rewired::Consts*>(std::forward<::System::Collections::Generic::IList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IList_1<::StringW>* Rewired::Consts::getStaticF_WRKdkFuJihzhaMpGifOQBCwWNdXy()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<::StringW>*, "WRKdkFuJihzhaMpGifOQBCwWNdXy", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_EilBfUqeetCZIUvpscXrHCAoisDdb(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "EilBfUqeetCZIUvpscXrHCAoisDdb", ::Rewired::Consts*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Rewired::Consts::getStaticF_EilBfUqeetCZIUvpscXrHCAoisDdb()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "EilBfUqeetCZIUvpscXrHCAoisDdb", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_zXQHLWMoAWvLcEfnqZLZZafiHzze(::System::Collections::Generic::IList_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<::StringW>*, "zXQHLWMoAWvLcEfnqZLZZafiHzze", ::Rewired::Consts*>(std::forward<::System::Collections::Generic::IList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IList_1<::StringW>* Rewired::Consts::getStaticF_zXQHLWMoAWvLcEfnqZLZZafiHzze()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<::StringW>*, "zXQHLWMoAWvLcEfnqZLZZafiHzze", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_kBZjvPCjYcovspjUeFBiRqUZMxnsA(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "kBZjvPCjYcovspjUeFBiRqUZMxnsA", ::Rewired::Consts*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Rewired::Consts::getStaticF_kBZjvPCjYcovspjUeFBiRqUZMxnsA()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "kBZjvPCjYcovspjUeFBiRqUZMxnsA", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_modifierKeyInfo(::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<int32_t,::Rewired::Keyboard_ModifierKeyInfo*>*  value)  {
::cordl_internals::setStaticField<::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<int32_t,::Rewired::Keyboard_ModifierKeyInfo*>*, "modifierKeyInfo", ::Rewired::Consts*>(std::forward<::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<int32_t,::Rewired::Keyboard_ModifierKeyInfo*>*>(value));
}
inline ::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<int32_t,::Rewired::Keyboard_ModifierKeyInfo*>* Rewired::Consts::getStaticF_modifierKeyInfo()  {
return ::cordl_internals::getStaticField<::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<int32_t,::Rewired::Keyboard_ModifierKeyInfo*>*, "modifierKeyInfo", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_pidVids_sony_dualShock4(::System::Collections::Generic::IList_1<::Rewired::PidVid>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<::Rewired::PidVid>*, "pidVids_sony_dualShock4", ::Rewired::Consts*>(std::forward<::System::Collections::Generic::IList_1<::Rewired::PidVid>*>(value));
}
inline ::System::Collections::Generic::IList_1<::Rewired::PidVid>* Rewired::Consts::getStaticF_pidVids_sony_dualShock4()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<::Rewired::PidVid>*, "pidVids_sony_dualShock4", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_oLzteBuIxWwDoJTFQDlgVCDGWTNi(::ArrayW<::Rewired::PidVid>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Rewired::PidVid>, "oLzteBuIxWwDoJTFQDlgVCDGWTNi", ::Rewired::Consts*>(std::forward<::ArrayW<::Rewired::PidVid>>(value));
}
inline ::ArrayW<::Rewired::PidVid> Rewired::Consts::getStaticF_oLzteBuIxWwDoJTFQDlgVCDGWTNi()  {
return ::cordl_internals::getStaticField<::ArrayW<::Rewired::PidVid>, "oLzteBuIxWwDoJTFQDlgVCDGWTNi", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_productNames_sony_dualShock4(::System::Collections::Generic::IList_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<::StringW>*, "productNames_sony_dualShock4", ::Rewired::Consts*>(std::forward<::System::Collections::Generic::IList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IList_1<::StringW>* Rewired::Consts::getStaticF_productNames_sony_dualShock4()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<::StringW>*, "productNames_sony_dualShock4", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_hFvVzNBRjKyayBGhIpBoCaATREEJ(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "hFvVzNBRjKyayBGhIpBoCaATREEJ", ::Rewired::Consts*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Rewired::Consts::getStaticF_hFvVzNBRjKyayBGhIpBoCaATREEJ()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "hFvVzNBRjKyayBGhIpBoCaATREEJ", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_pidVids_sony_dualSense(::System::Collections::Generic::IList_1<::Rewired::PidVid>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<::Rewired::PidVid>*, "pidVids_sony_dualSense", ::Rewired::Consts*>(std::forward<::System::Collections::Generic::IList_1<::Rewired::PidVid>*>(value));
}
inline ::System::Collections::Generic::IList_1<::Rewired::PidVid>* Rewired::Consts::getStaticF_pidVids_sony_dualSense()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<::Rewired::PidVid>*, "pidVids_sony_dualSense", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_BRHOVWTixQDFZqHJJbBXrkonvDLQ(::ArrayW<::Rewired::PidVid>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Rewired::PidVid>, "BRHOVWTixQDFZqHJJbBXrkonvDLQ", ::Rewired::Consts*>(std::forward<::ArrayW<::Rewired::PidVid>>(value));
}
inline ::ArrayW<::Rewired::PidVid> Rewired::Consts::getStaticF_BRHOVWTixQDFZqHJJbBXrkonvDLQ()  {
return ::cordl_internals::getStaticField<::ArrayW<::Rewired::PidVid>, "BRHOVWTixQDFZqHJJbBXrkonvDLQ", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_productNames_sony_dualSense(::System::Collections::Generic::IList_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IList_1<::StringW>*, "productNames_sony_dualSense", ::Rewired::Consts*>(std::forward<::System::Collections::Generic::IList_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::IList_1<::StringW>* Rewired::Consts::getStaticF_productNames_sony_dualSense()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IList_1<::StringW>*, "productNames_sony_dualSense", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_hprcZpRiKcgIXbADehBfcOLeDVZz(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "hprcZpRiKcgIXbADehBfcOLeDVZz", ::Rewired::Consts*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> Rewired::Consts::getStaticF_hprcZpRiKcgIXbADehBfcOLeDVZz()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "hprcZpRiKcgIXbADehBfcOLeDVZz", ::Rewired::Consts*>();
}
inline void Rewired::Consts::setStaticF_mjRZflfzLtLcNJDIEwNOxulsxadJ(::ArrayW<::Rewired::ControllerElementIdentifier*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Rewired::ControllerElementIdentifier*>, "mjRZflfzLtLcNJDIEwNOxulsxadJ", ::Rewired::Consts*>(std::forward<::ArrayW<::Rewired::ControllerElementIdentifier*>>(value));
}
inline ::ArrayW<::Rewired::ControllerElementIdentifier*> Rewired::Consts::getStaticF_mjRZflfzLtLcNJDIEwNOxulsxadJ()  {
return ::cordl_internals::getStaticField<::ArrayW<::Rewired::ControllerElementIdentifier*>, "mjRZflfzLtLcNJDIEwNOxulsxadJ", ::Rewired::Consts*>();
}
inline int32_t Rewired::Consts::get_nintendoSwitchPlugin_minPluginVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_nintendoSwitchPlugin_minPluginVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Rewired::Consts::get_nintendoSwitch2Plugin_minPluginVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_nintendoSwitch2Plugin_minPluginVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Rewired::Consts::get_gameCorePlugin_minPluginVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_gameCorePlugin_minPluginVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Rewired::Consts::get_ps4Plugin_minPluginVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_ps4Plugin_minPluginVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t Rewired::Consts::get_ps5Plugin_minPluginVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_ps5Plugin_minPluginVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*> Rewired::Consts::get_commonMouseElementIdentifierInitOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_commonMouseElementIdentifierInitOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* Rewired::Consts::get_unityUnifiedMouseElementIdentifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_unityUnifiedMouseElementIdentifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* Rewired::Consts::get_rawInputUnifiedMouseElementIdentifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_rawInputUnifiedMouseElementIdentifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::StringW>* Rewired::Consts::get_keyboardKeyKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_keyboardKeyKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::StringW>* Rewired::Consts::get_keyboardModifierKeyKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_keyboardModifierKeyKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::ArrayW<::Rewired::ControllerElementIdentifier*> Rewired::Consts::get_unknownJoystickElementIdentifiers_orig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"get_unknownJoystickElementIdentifiers_orig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ControllerElementIdentifier*>>(nullptr, ___internal_method);
}
inline ::ArrayW<::Rewired::ControllerElementIdentifier*> Rewired::Consts::JqchBUhZyYvSoUtQQtOuXGRAQuhV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Consts*>(),
                        {"JqchBUhZyYvSoUtQQtOuXGRAQuhV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Rewired::ControllerElementIdentifier*>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Rewired::Consts::Consts()   {
}
constexpr ::Rewired::Config::LogLevelFlags  Rewired::Consts::defaultLogLevel{static_cast<int32_t>(0x7)};
constexpr ::Rewired::AxisSensitivityType  Rewired::Consts::axisDefaultSensitivityType{static_cast<int32_t>(0x0)};
constexpr ::Rewired::Config::KeyCombinationOverrideMode  Rewired::Consts::defaultKeyCombinationOverrideMode{static_cast<int32_t>(0x2)};
