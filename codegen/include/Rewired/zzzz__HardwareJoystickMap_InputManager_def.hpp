#pragma once
// IWYU pragma private; include "Rewired/HardwareJoystickMap_InputManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Data/Mapping/zzzz__HardwareJoystickMap_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__HardwareControllerMapIdentifier_def.hpp"
#include "Rewired/zzzz__JoystickType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HardwareJoystickMap_InputManager)
namespace Rewired::Data::Mapping {
class HardwareJoystickMap_CompoundElement;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickMap_Platform;
}
namespace Rewired::Internal::Localization {
class DeviceLocalizationInfo;
}
namespace Rewired {
struct HardwareControllerMapIdentifier;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
namespace Rewired {
struct JoystickType;
}
// Forward declare root types
namespace Rewired {
class HardwareJoystickMap_InputManager;
}
// Write type traits
MARK_REF_T(::Rewired::HardwareJoystickMap_InputManager*);
DEFINE_IL2CPP_CLASS(::Rewired::HardwareJoystickMap_InputManager*, "Rewired", "HardwareJoystickMap_InputManager");
// Dependencies Rewired.ControllerElementIdentifier, Rewired.Data.Mapping.HardwareJoystickMap::CompoundElement, Rewired.HardwareControllerMapIdentifier, Rewired.JoystickType, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.HardwareJoystickMap_InputManager
class CORDL_TYPE HardwareJoystickMap_InputManager : public ::System::Object {
public:
// Declarations
/// @brief Field EaEgjavkUTXlNMhNBGIRINhjCoATA, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_EaEgjavkUTXlNMhNBGIRINhjCoATA, put=__cordl_internal_set_EaEgjavkUTXlNMhNBGIRINhjCoATA)) ::Rewired::Internal::Localization::DeviceLocalizationInfo*  EaEgjavkUTXlNMhNBGIRINhjCoATA;

/// @brief Field axisCount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_axisCount, put=__cordl_internal_set_axisCount)) int32_t  axisCount;

/// @brief Field buttonCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonCount, put=__cordl_internal_set_buttonCount)) int32_t  buttonCount;

/// @brief Field compoundElements, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_compoundElements, put=__cordl_internal_set_compoundElements)) ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  compoundElements;

/// @brief Field controllerName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerName, put=__cordl_internal_set_controllerName)) ::StringW  controllerName;

 __declspec(property(get=get_deviceLocalizationInfo)) ::Rewired::Internal::Localization::DeviceLocalizationInfo*  deviceLocalizationInfo;

/// @brief Field elementIdentifiers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_elementIdentifiers, put=__cordl_internal_set_elementIdentifiers)) ::ArrayW<::Rewired::ControllerElementIdentifier*>  elementIdentifiers;

/// @brief Field hardwareMapIdentifier, offset 0x18, size 0x1c 
 __declspec(property(get=__cordl_internal_get_hardwareMapIdentifier, put=__cordl_internal_set_hardwareMapIdentifier)) ::Rewired::HardwareControllerMapIdentifier  hardwareMapIdentifier;

/// @brief Field isUnknownController, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_isUnknownController, put=__cordl_internal_set_isUnknownController)) bool  isUnknownController;

/// @brief Field joystickTypes, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_joystickTypes, put=__cordl_internal_set_joystickTypes)) ::ArrayW<::Rewired::JoystickType>  joystickTypes;

/// @brief Field map, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_map, put=__cordl_internal_set_map)) ::Rewired::Data::Mapping::HardwareJoystickMap_Platform*  map;

/// @brief Field useSystemName, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSystemName, put=__cordl_internal_set_useSystemName)) bool  useSystemName;

static inline ::Rewired::HardwareJoystickMap_InputManager* New_ctor(::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace, ::ArrayW<::Rewired::JoystickType>  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Data::Mapping::HardwareJoystickMap_Platform*  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method ToGameHardwareControllerMap, addr 0x1819a2d50, size 0x580, virtual false, abstract: false, final false
inline ::Rewired::HardwareControllerMap_Game* ToGameHardwareControllerMap() ;

constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo* const& __cordl_internal_get_EaEgjavkUTXlNMhNBGIRINhjCoATA() const;

constexpr ::Rewired::Internal::Localization::DeviceLocalizationInfo*& __cordl_internal_get_EaEgjavkUTXlNMhNBGIRINhjCoATA() ;

constexpr int32_t const& __cordl_internal_get_axisCount() const;

constexpr int32_t& __cordl_internal_get_axisCount() ;

constexpr int32_t const& __cordl_internal_get_buttonCount() const;

constexpr int32_t& __cordl_internal_get_buttonCount() ;

constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*> const& __cordl_internal_get_compoundElements() const;

constexpr ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>& __cordl_internal_get_compoundElements() ;

constexpr ::StringW const& __cordl_internal_get_controllerName() const;

constexpr ::StringW& __cordl_internal_get_controllerName() ;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*> const& __cordl_internal_get_elementIdentifiers() const;

constexpr ::ArrayW<::Rewired::ControllerElementIdentifier*>& __cordl_internal_get_elementIdentifiers() ;

constexpr ::Rewired::HardwareControllerMapIdentifier const& __cordl_internal_get_hardwareMapIdentifier() const;

constexpr ::Rewired::HardwareControllerMapIdentifier& __cordl_internal_get_hardwareMapIdentifier() ;

constexpr bool const& __cordl_internal_get_isUnknownController() const;

constexpr bool& __cordl_internal_get_isUnknownController() ;

constexpr ::ArrayW<::Rewired::JoystickType> const& __cordl_internal_get_joystickTypes() const;

constexpr ::ArrayW<::Rewired::JoystickType>& __cordl_internal_get_joystickTypes() ;

constexpr ::Rewired::Data::Mapping::HardwareJoystickMap_Platform* const& __cordl_internal_get_map() const;

constexpr ::Rewired::Data::Mapping::HardwareJoystickMap_Platform*& __cordl_internal_get_map() ;

constexpr bool const& __cordl_internal_get_useSystemName() const;

constexpr bool& __cordl_internal_get_useSystemName() ;

constexpr void __cordl_internal_set_EaEgjavkUTXlNMhNBGIRINhjCoATA(::Rewired::Internal::Localization::DeviceLocalizationInfo*  value) ;

constexpr void __cordl_internal_set_axisCount(int32_t  value) ;

constexpr void __cordl_internal_set_buttonCount(int32_t  value) ;

constexpr void __cordl_internal_set_compoundElements(::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  value) ;

constexpr void __cordl_internal_set_controllerName(::StringW  value) ;

constexpr void __cordl_internal_set_elementIdentifiers(::ArrayW<::Rewired::ControllerElementIdentifier*>  value) ;

constexpr void __cordl_internal_set_hardwareMapIdentifier(::Rewired::HardwareControllerMapIdentifier  value) ;

constexpr void __cordl_internal_set_isUnknownController(bool  value) ;

constexpr void __cordl_internal_set_joystickTypes(::ArrayW<::Rewired::JoystickType>  value) ;

constexpr void __cordl_internal_set_map(::Rewired::Data::Mapping::HardwareJoystickMap_Platform*  value) ;

constexpr void __cordl_internal_set_useSystemName(bool  value) ;

/// @brief Method .ctor, addr 0x1819a32d0, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::Rewired::HardwareControllerMapIdentifier  _cordl_fixed_empty_name_whitespace, ::ArrayW<::Rewired::JoystickType>  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Internal::Localization::DeviceLocalizationInfo*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Data::Mapping::HardwareJoystickMap_Platform*  _cordl_fixed_empty_name_whitespace_param_3, ::StringW  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7, ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method get_deviceLocalizationInfo, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Internal::Localization::DeviceLocalizationInfo* get_deviceLocalizationInfo() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HardwareJoystickMap_InputManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMap_InputManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HardwareJoystickMap_InputManager(HardwareJoystickMap_InputManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HardwareJoystickMap_InputManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HardwareJoystickMap_InputManager(HardwareJoystickMap_InputManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2073};

/// @brief Field controllerName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___controllerName;

/// @brief Field hardwareMapIdentifier, offset: 0x18, size: 0x1c, def value: None
 ::Rewired::HardwareControllerMapIdentifier  ___hardwareMapIdentifier;

/// @brief Field map, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Data::Mapping::HardwareJoystickMap_Platform*  ___map;

/// @brief Field buttonCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___buttonCount;

/// @brief Field axisCount, offset: 0x44, size: 0x4, def value: None
 int32_t  ___axisCount;

/// @brief Field elementIdentifiers, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::Rewired::ControllerElementIdentifier*>  ___elementIdentifiers;

/// @brief Field compoundElements, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>  ___compoundElements;

/// @brief Field useSystemName, offset: 0x58, size: 0x1, def value: None
 bool  ___useSystemName;

/// @brief Field isUnknownController, offset: 0x59, size: 0x1, def value: None
 bool  ___isUnknownController;

/// @brief Field joystickTypes, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::Rewired::JoystickType>  ___joystickTypes;

/// @brief Field EaEgjavkUTXlNMhNBGIRINhjCoATA, offset: 0x68, size: 0x8, def value: None
 ::Rewired::Internal::Localization::DeviceLocalizationInfo*  ___EaEgjavkUTXlNMhNBGIRINhjCoATA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::HardwareJoystickMap_InputManager, ___controllerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareJoystickMap_InputManager, ___hardwareMapIdentifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareJoystickMap_InputManager, ___map) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareJoystickMap_InputManager, ___buttonCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareJoystickMap_InputManager, ___axisCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareJoystickMap_InputManager, ___elementIdentifiers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareJoystickMap_InputManager, ___compoundElements) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareJoystickMap_InputManager, ___useSystemName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareJoystickMap_InputManager, ___isUnknownController) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareJoystickMap_InputManager, ___joystickTypes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::HardwareJoystickMap_InputManager, ___EaEgjavkUTXlNMhNBGIRINhjCoATA) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::HardwareJoystickMap_InputManager) == 0x70, "Size mismatch!");

} // namespace end def Rewired
