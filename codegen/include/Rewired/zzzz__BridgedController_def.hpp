#pragma once
// IWYU pragma private; include "Rewired/BridgedController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__BridgedControllerHWInfo_def.hpp"
#include "Rewired/zzzz__UnknownControllerHat_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BridgedController)
namespace Rewired::Interfaces {
class IInputManagerJoystickPublic;
}
namespace Rewired::Platforms::Custom {
class CustomInputSource;
}
namespace Rewired {
class Controller_Extension;
}
namespace Rewired {
class HardwareControllerMap_Game;
}
// Forward declare root types
namespace Rewired {
class BridgedController;
}
// Write type traits
MARK_REF_T(::Rewired::BridgedController*);
DEFINE_IL2CPP_CLASS(::Rewired::BridgedController*, "Rewired", "BridgedController");
// Dependencies Rewired.BridgedControllerHWInfo, Rewired.UnknownControllerHat, System.Guid
namespace Rewired {
// Is value type: false
// CS Name: Rewired.BridgedController
class CORDL_TYPE BridgedController : public ::Rewired::BridgedControllerHWInfo {
public:
// Declarations
/// @brief Field axisCount, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_axisCount, put=__cordl_internal_set_axisCount)) int32_t  axisCount;

/// @brief Field buttonCount, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonCount, put=__cordl_internal_set_buttonCount)) int32_t  buttonCount;

/// @brief Field controllerExtension, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerExtension, put=__cordl_internal_set_controllerExtension)) ::Rewired::Controller_Extension*  controllerExtension;

/// @brief Field controllerTypeGuid, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_controllerTypeGuid, put=__cordl_internal_set_controllerTypeGuid)) ::System::Guid  controllerTypeGuid;

/// @brief Field customInputSource, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_customInputSource, put=__cordl_internal_set_customInputSource)) ::Rewired::Platforms::Custom::CustomInputSource*  customInputSource;

/// @brief Field gameHardwareMap, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameHardwareMap, put=__cordl_internal_set_gameHardwareMap)) ::Rewired::HardwareControllerMap_Game*  gameHardwareMap;

/// @brief Field instanceName, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_instanceName, put=__cordl_internal_set_instanceName)) ::StringW  instanceName;

/// @brief Field isButtonPressureSensitive, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_isButtonPressureSensitive, put=__cordl_internal_set_isButtonPressureSensitive)) ::ArrayW<bool>  isButtonPressureSensitive;

 __declspec(property(get=get_isUnknownController)) bool  isUnknownController;

/// @brief Field isXInputDevice, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isXInputDevice, put=__cordl_internal_set_isXInputDevice)) bool  isXInputDevice;

/// @brief Field productName, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_productName, put=__cordl_internal_set_productName)) ::StringW  productName;

/// @brief Field sourceJoystick, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceJoystick, put=__cordl_internal_set_sourceJoystick)) ::Rewired::Interfaces::IInputManagerJoystickPublic*  sourceJoystick;

/// @brief Field unknownControllerHats, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_unknownControllerHats, put=__cordl_internal_set_unknownControllerHats)) ::ArrayW<::Rewired::UnknownControllerHat*>  unknownControllerHats;

static inline ::Rewired::BridgedController* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_axisCount() const;

constexpr int32_t& __cordl_internal_get_axisCount() ;

constexpr int32_t const& __cordl_internal_get_buttonCount() const;

constexpr int32_t& __cordl_internal_get_buttonCount() ;

constexpr ::Rewired::Controller_Extension* const& __cordl_internal_get_controllerExtension() const;

constexpr ::Rewired::Controller_Extension*& __cordl_internal_get_controllerExtension() ;

constexpr ::System::Guid const& __cordl_internal_get_controllerTypeGuid() const;

constexpr ::System::Guid& __cordl_internal_get_controllerTypeGuid() ;

constexpr ::Rewired::Platforms::Custom::CustomInputSource* const& __cordl_internal_get_customInputSource() const;

constexpr ::Rewired::Platforms::Custom::CustomInputSource*& __cordl_internal_get_customInputSource() ;

constexpr ::Rewired::HardwareControllerMap_Game* const& __cordl_internal_get_gameHardwareMap() const;

constexpr ::Rewired::HardwareControllerMap_Game*& __cordl_internal_get_gameHardwareMap() ;

constexpr ::StringW const& __cordl_internal_get_instanceName() const;

constexpr ::StringW& __cordl_internal_get_instanceName() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_isButtonPressureSensitive() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_isButtonPressureSensitive() ;

constexpr bool const& __cordl_internal_get_isXInputDevice() const;

constexpr bool& __cordl_internal_get_isXInputDevice() ;

constexpr ::StringW const& __cordl_internal_get_productName() const;

constexpr ::StringW& __cordl_internal_get_productName() ;

constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic* const& __cordl_internal_get_sourceJoystick() const;

constexpr ::Rewired::Interfaces::IInputManagerJoystickPublic*& __cordl_internal_get_sourceJoystick() ;

constexpr ::ArrayW<::Rewired::UnknownControllerHat*> const& __cordl_internal_get_unknownControllerHats() const;

constexpr ::ArrayW<::Rewired::UnknownControllerHat*>& __cordl_internal_get_unknownControllerHats() ;

constexpr void __cordl_internal_set_axisCount(int32_t  value) ;

constexpr void __cordl_internal_set_buttonCount(int32_t  value) ;

constexpr void __cordl_internal_set_controllerExtension(::Rewired::Controller_Extension*  value) ;

constexpr void __cordl_internal_set_controllerTypeGuid(::System::Guid  value) ;

constexpr void __cordl_internal_set_customInputSource(::Rewired::Platforms::Custom::CustomInputSource*  value) ;

constexpr void __cordl_internal_set_gameHardwareMap(::Rewired::HardwareControllerMap_Game*  value) ;

constexpr void __cordl_internal_set_instanceName(::StringW  value) ;

constexpr void __cordl_internal_set_isButtonPressureSensitive(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_isXInputDevice(bool  value) ;

constexpr void __cordl_internal_set_productName(::StringW  value) ;

constexpr void __cordl_internal_set_sourceJoystick(::Rewired::Interfaces::IInputManagerJoystickPublic*  value) ;

constexpr void __cordl_internal_set_unknownControllerHats(::ArrayW<::Rewired::UnknownControllerHat*>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isUnknownController, addr 0x18195c290, size 0x40, virtual false, abstract: false, final false
inline bool get_isUnknownController() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BridgedController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BridgedController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BridgedController(BridgedController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BridgedController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BridgedController(BridgedController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1971};

/// @brief Field sourceJoystick, offset: 0xc0, size: 0x8, def value: None
 ::Rewired::Interfaces::IInputManagerJoystickPublic*  ___sourceJoystick;

/// @brief Field gameHardwareMap, offset: 0xc8, size: 0x8, def value: None
 ::Rewired::HardwareControllerMap_Game*  ___gameHardwareMap;

/// @brief Field controllerTypeGuid, offset: 0xd0, size: 0x10, def value: None
 ::System::Guid  ___controllerTypeGuid;

/// @brief Field controllerExtension, offset: 0xe0, size: 0x8, def value: None
 ::Rewired::Controller_Extension*  ___controllerExtension;

/// @brief Field instanceName, offset: 0xe8, size: 0x8, def value: None
 ::StringW  ___instanceName;

/// @brief Field productName, offset: 0xf0, size: 0x8, def value: None
 ::StringW  ___productName;

/// @brief Field isXInputDevice, offset: 0xf8, size: 0x1, def value: None
 bool  ___isXInputDevice;

/// @brief Field axisCount, offset: 0xfc, size: 0x4, def value: None
 int32_t  ___axisCount;

/// @brief Field buttonCount, offset: 0x100, size: 0x4, def value: None
 int32_t  ___buttonCount;

/// @brief Field isButtonPressureSensitive, offset: 0x108, size: 0x8, def value: None
 ::ArrayW<bool>  ___isButtonPressureSensitive;

/// @brief Field unknownControllerHats, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::Rewired::UnknownControllerHat*>  ___unknownControllerHats;

/// @brief Field customInputSource, offset: 0x118, size: 0x8, def value: None
 ::Rewired::Platforms::Custom::CustomInputSource*  ___customInputSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::BridgedController, ___sourceJoystick) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedController, ___gameHardwareMap) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedController, ___controllerTypeGuid) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedController, ___controllerExtension) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedController, ___instanceName) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedController, ___productName) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedController, ___isXInputDevice) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedController, ___axisCount) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedController, ___buttonCount) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedController, ___isButtonPressureSensitive) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedController, ___unknownControllerHats) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Rewired::BridgedController, ___customInputSource) == 0x118, "Offset mismatch!");

static_assert(sizeof(::Rewired::BridgedController) == 0x120, "Size mismatch!");

} // namespace end def Rewired
