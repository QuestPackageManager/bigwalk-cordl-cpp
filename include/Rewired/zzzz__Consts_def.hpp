#pragma once
// IWYU pragma private; include "Rewired/Consts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Config/zzzz__KeyCombinationOverrideMode_def.hpp"
#include "Rewired/Config/zzzz__LogLevelFlags_def.hpp"
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
#include "Rewired/zzzz__ControllerElementIdentifier_def.hpp"
#include "Rewired/zzzz__PidVid_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Consts)
namespace Rewired::Utils::Interfaces {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace Rewired {
class ControllerElementIdentifier;
}
namespace Rewired {
class ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC;
}
namespace Rewired {
class Keyboard_ModifierKeyInfo;
}
namespace Rewired {
struct PidVid;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
class Consts;
}
// Write type traits
MARK_REF_T(::Rewired::Consts*);
DEFINE_IL2CPP_CLASS(::Rewired::Consts*, "Rewired", "Consts");
// Dependencies Rewired.AxisSensitivityType, Rewired.Config.KeyCombinationOverrideMode, Rewired.Config.LogLevelFlags, Rewired.ControllerElementIdentifier, Rewired.ControllerElementIdentifier::oFNOTMFwKymAUgwtBfqShdJAZAC, Rewired.PidVid, System.Guid, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.Consts
class CORDL_TYPE Consts : public ::System::Object {
public:
// Declarations
/// @brief Field BRHOVWTixQDFZqHJJbBXrkonvDLQ, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BRHOVWTixQDFZqHJJbBXrkonvDLQ, put=setStaticF_BRHOVWTixQDFZqHJJbBXrkonvDLQ)) ::ArrayW<::Rewired::PidVid>  BRHOVWTixQDFZqHJJbBXrkonvDLQ;

/// @brief Field EilBfUqeetCZIUvpscXrHCAoisDdb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EilBfUqeetCZIUvpscXrHCAoisDdb, put=setStaticF_EilBfUqeetCZIUvpscXrHCAoisDdb)) ::ArrayW<::StringW>  EilBfUqeetCZIUvpscXrHCAoisDdb;

/// @brief Field WRKdkFuJihzhaMpGifOQBCwWNdXy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WRKdkFuJihzhaMpGifOQBCwWNdXy, put=setStaticF_WRKdkFuJihzhaMpGifOQBCwWNdXy)) ::System::Collections::Generic::IList_1<::StringW>*  WRKdkFuJihzhaMpGifOQBCwWNdXy;

/// @brief Field XIDFRGrChdAIjmkQnIvyFkrWBMQHA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_XIDFRGrChdAIjmkQnIvyFkrWBMQHA, put=setStaticF_XIDFRGrChdAIjmkQnIvyFkrWBMQHA)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*  XIDFRGrChdAIjmkQnIvyFkrWBMQHA;

/// @brief Field _keyboardKeyValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__keyboardKeyValues, put=setStaticF__keyboardKeyValues)) ::ArrayW<int32_t>  _keyboardKeyValues;

/// @brief Field cxtBQFIHjgVAgHHfXEkaGHKOMzdK, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cxtBQFIHjgVAgHHfXEkaGHKOMzdK, put=setStaticF_cxtBQFIHjgVAgHHfXEkaGHKOMzdK)) ::ArrayW<::StringW>  cxtBQFIHjgVAgHHfXEkaGHKOMzdK;

/// @brief Field eYHBvPgAcPIBlFxpObdiuFknkvXFA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_eYHBvPgAcPIBlFxpObdiuFknkvXFA, put=setStaticF_eYHBvPgAcPIBlFxpObdiuFknkvXFA)) ::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>  eYHBvPgAcPIBlFxpObdiuFknkvXFA;

/// @brief Field eouuVvDPXMlVYVyxWmXXSnuGijiI, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_eouuVvDPXMlVYVyxWmXXSnuGijiI, put=setStaticF_eouuVvDPXMlVYVyxWmXXSnuGijiI)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*  eouuVvDPXMlVYVyxWmXXSnuGijiI;

/// @brief Field hFvVzNBRjKyayBGhIpBoCaATREEJ, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_hFvVzNBRjKyayBGhIpBoCaATREEJ, put=setStaticF_hFvVzNBRjKyayBGhIpBoCaATREEJ)) ::ArrayW<::StringW>  hFvVzNBRjKyayBGhIpBoCaATREEJ;

/// @brief Field hNMegExVBUfAROLzBDOCuEgbfYwg, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_hNMegExVBUfAROLzBDOCuEgbfYwg, put=setStaticF_hNMegExVBUfAROLzBDOCuEgbfYwg)) ::ArrayW<::StringW>  hNMegExVBUfAROLzBDOCuEgbfYwg;

/// @brief Field hardwareTypeGuid_universalKeyboard, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_hardwareTypeGuid_universalKeyboard, put=setStaticF_hardwareTypeGuid_universalKeyboard)) ::System::Guid  hardwareTypeGuid_universalKeyboard;

/// @brief Field hardwareTypeGuid_universalMouse, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_hardwareTypeGuid_universalMouse, put=setStaticF_hardwareTypeGuid_universalMouse)) ::System::Guid  hardwareTypeGuid_universalMouse;

/// @brief Field hprcZpRiKcgIXbADehBfcOLeDVZz, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_hprcZpRiKcgIXbADehBfcOLeDVZz, put=setStaticF_hprcZpRiKcgIXbADehBfcOLeDVZz)) ::ArrayW<::StringW>  hprcZpRiKcgIXbADehBfcOLeDVZz;

/// @brief Field joystickGuid_NintendoSwitchHandheld, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_NintendoSwitchHandheld, put=setStaticF_joystickGuid_NintendoSwitchHandheld)) ::System::Guid  joystickGuid_NintendoSwitchHandheld;

/// @brief Field joystickGuid_NintendoSwitchJoyConDual, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_NintendoSwitchJoyConDual, put=setStaticF_joystickGuid_NintendoSwitchJoyConDual)) ::System::Guid  joystickGuid_NintendoSwitchJoyConDual;

/// @brief Field joystickGuid_NintendoSwitchJoyConL, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_NintendoSwitchJoyConL, put=setStaticF_joystickGuid_NintendoSwitchJoyConL)) ::System::Guid  joystickGuid_NintendoSwitchJoyConL;

/// @brief Field joystickGuid_NintendoSwitchJoyConR, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_NintendoSwitchJoyConR, put=setStaticF_joystickGuid_NintendoSwitchJoyConR)) ::System::Guid  joystickGuid_NintendoSwitchJoyConR;

/// @brief Field joystickGuid_SonyDualSense, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_SonyDualSense, put=setStaticF_joystickGuid_SonyDualSense)) ::System::Guid  joystickGuid_SonyDualSense;

/// @brief Field joystickGuid_SonyDualShock4, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_SonyDualShock4, put=setStaticF_joystickGuid_SonyDualShock4)) ::System::Guid  joystickGuid_SonyDualShock4;

/// @brief Field joystickGuid_SonyPS4AimController, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_SonyPS4AimController, put=setStaticF_joystickGuid_SonyPS4AimController)) ::System::Guid  joystickGuid_SonyPS4AimController;

/// @brief Field joystickGuid_SonyPS4Drums, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_SonyPS4Drums, put=setStaticF_joystickGuid_SonyPS4Drums)) ::System::Guid  joystickGuid_SonyPS4Drums;

/// @brief Field joystickGuid_SonyPS4FlightStick, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_SonyPS4FlightStick, put=setStaticF_joystickGuid_SonyPS4FlightStick)) ::System::Guid  joystickGuid_SonyPS4FlightStick;

/// @brief Field joystickGuid_SonyPS4Guitar, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_SonyPS4Guitar, put=setStaticF_joystickGuid_SonyPS4Guitar)) ::System::Guid  joystickGuid_SonyPS4Guitar;

/// @brief Field joystickGuid_SonyPS4SteeringWheel, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_SonyPS4SteeringWheel, put=setStaticF_joystickGuid_SonyPS4SteeringWheel)) ::System::Guid  joystickGuid_SonyPS4SteeringWheel;

/// @brief Field joystickGuid_appleMFiController, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_appleMFiController, put=setStaticF_joystickGuid_appleMFiController)) ::System::Guid  joystickGuid_appleMFiController;

/// @brief Field joystickGuid_standardizedGamepad, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_standardizedGamepad, put=setStaticF_joystickGuid_standardizedGamepad)) ::System::Guid  joystickGuid_standardizedGamepad;

/// @brief Field joystickGuid_steamController, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_steamController, put=setStaticF_joystickGuid_steamController)) ::System::Guid  joystickGuid_steamController;

/// @brief Field joystickGuid_unknownController, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_joystickGuid_unknownController, put=setStaticF_joystickGuid_unknownController)) ::System::Guid  joystickGuid_unknownController;

/// @brief Field kBZjvPCjYcovspjUeFBiRqUZMxnsA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kBZjvPCjYcovspjUeFBiRqUZMxnsA, put=setStaticF_kBZjvPCjYcovspjUeFBiRqUZMxnsA)) ::ArrayW<::StringW>  kBZjvPCjYcovspjUeFBiRqUZMxnsA;

/// @brief Field keyboardKeyNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyboardKeyNames, put=setStaticF_keyboardKeyNames)) ::System::Collections::Generic::IList_1<::StringW>*  keyboardKeyNames;

/// @brief Field keyboardKeyValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyboardKeyValues, put=setStaticF_keyboardKeyValues)) ::System::Collections::Generic::IList_1<int32_t>*  keyboardKeyValues;

/// @brief Field mjRZflfzLtLcNJDIEwNOxulsxadJ, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mjRZflfzLtLcNJDIEwNOxulsxadJ, put=setStaticF_mjRZflfzLtLcNJDIEwNOxulsxadJ)) ::ArrayW<::Rewired::ControllerElementIdentifier*>  mjRZflfzLtLcNJDIEwNOxulsxadJ;

/// @brief Field modifierKeyInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_modifierKeyInfo, put=setStaticF_modifierKeyInfo)) ::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<int32_t,::Rewired::Keyboard_ModifierKeyInfo*>*  modifierKeyInfo;

/// @brief Field mouseAxisUnityNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mouseAxisUnityNames, put=setStaticF_mouseAxisUnityNames)) ::System::Collections::Generic::IList_1<::StringW>*  mouseAxisUnityNames;

/// @brief Field mouseButtonUnityNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mouseButtonUnityNames, put=setStaticF_mouseButtonUnityNames)) ::System::Collections::Generic::IList_1<::StringW>*  mouseButtonUnityNames;

/// @brief Field oLzteBuIxWwDoJTFQDlgVCDGWTNi, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_oLzteBuIxWwDoJTFQDlgVCDGWTNi, put=setStaticF_oLzteBuIxWwDoJTFQDlgVCDGWTNi)) ::ArrayW<::Rewired::PidVid>  oLzteBuIxWwDoJTFQDlgVCDGWTNi;

/// @brief Field pidVids_sony_dualSense, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pidVids_sony_dualSense, put=setStaticF_pidVids_sony_dualSense)) ::System::Collections::Generic::IList_1<::Rewired::PidVid>*  pidVids_sony_dualSense;

/// @brief Field pidVids_sony_dualShock4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pidVids_sony_dualShock4, put=setStaticF_pidVids_sony_dualShock4)) ::System::Collections::Generic::IList_1<::Rewired::PidVid>*  pidVids_sony_dualShock4;

/// @brief Field productNames_sony_dualSense, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_productNames_sony_dualSense, put=setStaticF_productNames_sony_dualSense)) ::System::Collections::Generic::IList_1<::StringW>*  productNames_sony_dualSense;

/// @brief Field productNames_sony_dualShock4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_productNames_sony_dualShock4, put=setStaticF_productNames_sony_dualShock4)) ::System::Collections::Generic::IList_1<::StringW>*  productNames_sony_dualShock4;

/// @brief Field questionablePidVids, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_questionablePidVids, put=setStaticF_questionablePidVids)) ::ArrayW<::Rewired::PidVid>  questionablePidVids;

/// @brief Field questionableVIDs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_questionableVIDs, put=setStaticF_questionableVIDs)) ::ArrayW<int32_t>  questionableVIDs;

/// @brief Field reservedHardwareTypeGuids, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reservedHardwareTypeGuids, put=setStaticF_reservedHardwareTypeGuids)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Guid>*  reservedHardwareTypeGuids;

/// @brief Field wIuHjYaozNDvlijrfkYQXXYLuSZg, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_wIuHjYaozNDvlijrfkYQXXYLuSZg, put=setStaticF_wIuHjYaozNDvlijrfkYQXXYLuSZg)) ::ArrayW<::System::Guid>  wIuHjYaozNDvlijrfkYQXXYLuSZg;

/// @brief Field xWsvcwCsTxFendABMyQZCfBzvpyI, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_xWsvcwCsTxFendABMyQZCfBzvpyI, put=setStaticF_xWsvcwCsTxFendABMyQZCfBzvpyI)) ::ArrayW<::StringW>  xWsvcwCsTxFendABMyQZCfBzvpyI;

/// @brief Field zXQHLWMoAWvLcEfnqZLZZafiHzze, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zXQHLWMoAWvLcEfnqZLZZafiHzze, put=setStaticF_zXQHLWMoAWvLcEfnqZLZZafiHzze)) ::System::Collections::Generic::IList_1<::StringW>*  zXQHLWMoAWvLcEfnqZLZZafiHzze;

/// @brief Method JqchBUhZyYvSoUtQQtOuXGRAQuhV, addr 0x181839640, size 0xa20, virtual false, abstract: false, final false
static inline ::ArrayW<::Rewired::ControllerElementIdentifier*> JqchBUhZyYvSoUtQQtOuXGRAQuhV() ;

static inline ::ArrayW<::Rewired::PidVid> getStaticF_BRHOVWTixQDFZqHJJbBXrkonvDLQ() ;

static inline ::ArrayW<::StringW> getStaticF_EilBfUqeetCZIUvpscXrHCAoisDdb() ;

static inline ::System::Collections::Generic::IList_1<::StringW>* getStaticF_WRKdkFuJihzhaMpGifOQBCwWNdXy() ;

static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>* getStaticF_XIDFRGrChdAIjmkQnIvyFkrWBMQHA() ;

static inline ::ArrayW<int32_t> getStaticF__keyboardKeyValues() ;

static inline ::ArrayW<::StringW> getStaticF_cxtBQFIHjgVAgHHfXEkaGHKOMzdK() ;

static inline ::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*> getStaticF_eYHBvPgAcPIBlFxpObdiuFknkvXFA() ;

static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>* getStaticF_eouuVvDPXMlVYVyxWmXXSnuGijiI() ;

static inline ::ArrayW<::StringW> getStaticF_hFvVzNBRjKyayBGhIpBoCaATREEJ() ;

static inline ::ArrayW<::StringW> getStaticF_hNMegExVBUfAROLzBDOCuEgbfYwg() ;

static inline ::System::Guid getStaticF_hardwareTypeGuid_universalKeyboard() ;

static inline ::System::Guid getStaticF_hardwareTypeGuid_universalMouse() ;

static inline ::ArrayW<::StringW> getStaticF_hprcZpRiKcgIXbADehBfcOLeDVZz() ;

static inline ::System::Guid getStaticF_joystickGuid_NintendoSwitchHandheld() ;

static inline ::System::Guid getStaticF_joystickGuid_NintendoSwitchJoyConDual() ;

static inline ::System::Guid getStaticF_joystickGuid_NintendoSwitchJoyConL() ;

static inline ::System::Guid getStaticF_joystickGuid_NintendoSwitchJoyConR() ;

static inline ::System::Guid getStaticF_joystickGuid_SonyDualSense() ;

static inline ::System::Guid getStaticF_joystickGuid_SonyDualShock4() ;

static inline ::System::Guid getStaticF_joystickGuid_SonyPS4AimController() ;

static inline ::System::Guid getStaticF_joystickGuid_SonyPS4Drums() ;

static inline ::System::Guid getStaticF_joystickGuid_SonyPS4FlightStick() ;

static inline ::System::Guid getStaticF_joystickGuid_SonyPS4Guitar() ;

static inline ::System::Guid getStaticF_joystickGuid_SonyPS4SteeringWheel() ;

static inline ::System::Guid getStaticF_joystickGuid_appleMFiController() ;

static inline ::System::Guid getStaticF_joystickGuid_standardizedGamepad() ;

static inline ::System::Guid getStaticF_joystickGuid_steamController() ;

static inline ::System::Guid getStaticF_joystickGuid_unknownController() ;

static inline ::ArrayW<::StringW> getStaticF_kBZjvPCjYcovspjUeFBiRqUZMxnsA() ;

static inline ::System::Collections::Generic::IList_1<::StringW>* getStaticF_keyboardKeyNames() ;

static inline ::System::Collections::Generic::IList_1<int32_t>* getStaticF_keyboardKeyValues() ;

static inline ::ArrayW<::Rewired::ControllerElementIdentifier*> getStaticF_mjRZflfzLtLcNJDIEwNOxulsxadJ() ;

static inline ::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<int32_t,::Rewired::Keyboard_ModifierKeyInfo*>* getStaticF_modifierKeyInfo() ;

static inline ::System::Collections::Generic::IList_1<::StringW>* getStaticF_mouseAxisUnityNames() ;

static inline ::System::Collections::Generic::IList_1<::StringW>* getStaticF_mouseButtonUnityNames() ;

static inline ::ArrayW<::Rewired::PidVid> getStaticF_oLzteBuIxWwDoJTFQDlgVCDGWTNi() ;

static inline ::System::Collections::Generic::IList_1<::Rewired::PidVid>* getStaticF_pidVids_sony_dualSense() ;

static inline ::System::Collections::Generic::IList_1<::Rewired::PidVid>* getStaticF_pidVids_sony_dualShock4() ;

static inline ::System::Collections::Generic::IList_1<::StringW>* getStaticF_productNames_sony_dualSense() ;

static inline ::System::Collections::Generic::IList_1<::StringW>* getStaticF_productNames_sony_dualShock4() ;

static inline ::ArrayW<::Rewired::PidVid> getStaticF_questionablePidVids() ;

static inline ::ArrayW<int32_t> getStaticF_questionableVIDs() ;

static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Guid>* getStaticF_reservedHardwareTypeGuids() ;

static inline ::ArrayW<::System::Guid> getStaticF_wIuHjYaozNDvlijrfkYQXXYLuSZg() ;

static inline ::ArrayW<::StringW> getStaticF_xWsvcwCsTxFendABMyQZCfBzvpyI() ;

static inline ::System::Collections::Generic::IList_1<::StringW>* getStaticF_zXQHLWMoAWvLcEfnqZLZZafiHzze() ;

/// @brief Method get_commonMouseElementIdentifierInitOptions, addr 0x18183cbc0, size 0xa00, virtual false, abstract: false, final false
static inline ::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*> get_commonMouseElementIdentifierInitOptions() ;

/// @brief Method get_gameCorePlugin_minPluginVersion, addr 0x1802edd00, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_gameCorePlugin_minPluginVersion() ;

/// @brief Method get_keyboardKeyKeys, addr 0x18183d5c0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IList_1<::StringW>* get_keyboardKeyKeys() ;

/// @brief Method get_keyboardModifierKeyKeys, addr 0x18183d600, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IList_1<::StringW>* get_keyboardModifierKeyKeys() ;

/// @brief Method get_nintendoSwitch2Plugin_minPluginVersion, addr 0x1802edd00, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_nintendoSwitch2Plugin_minPluginVersion() ;

/// @brief Method get_nintendoSwitchPlugin_minPluginVersion, addr 0x18183d640, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_nintendoSwitchPlugin_minPluginVersion() ;

/// @brief Method get_ps4Plugin_minPluginVersion, addr 0x1802edd00, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_ps4Plugin_minPluginVersion() ;

/// @brief Method get_ps5Plugin_minPluginVersion, addr 0x1802edd00, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_ps5Plugin_minPluginVersion() ;

/// @brief Method get_rawInputUnifiedMouseElementIdentifiers, addr 0x18183d650, size 0x320, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* get_rawInputUnifiedMouseElementIdentifiers() ;

/// @brief Method get_unityUnifiedMouseElementIdentifiers, addr 0x18183d970, size 0x3a0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IList_1<::Rewired::ControllerElementIdentifier*>* get_unityUnifiedMouseElementIdentifiers() ;

/// @brief Method get_unknownJoystickElementIdentifiers_orig, addr 0x18183dd10, size 0x40, virtual false, abstract: false, final false
static inline ::ArrayW<::Rewired::ControllerElementIdentifier*> get_unknownJoystickElementIdentifiers_orig() ;

static inline void setStaticF_BRHOVWTixQDFZqHJJbBXrkonvDLQ(::ArrayW<::Rewired::PidVid>  value) ;

static inline void setStaticF_EilBfUqeetCZIUvpscXrHCAoisDdb(::ArrayW<::StringW>  value) ;

static inline void setStaticF_WRKdkFuJihzhaMpGifOQBCwWNdXy(::System::Collections::Generic::IList_1<::StringW>*  value) ;

static inline void setStaticF_XIDFRGrChdAIjmkQnIvyFkrWBMQHA(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*  value) ;

static inline void setStaticF__keyboardKeyValues(::ArrayW<int32_t>  value) ;

static inline void setStaticF_cxtBQFIHjgVAgHHfXEkaGHKOMzdK(::ArrayW<::StringW>  value) ;

static inline void setStaticF_eYHBvPgAcPIBlFxpObdiuFknkvXFA(::ArrayW<::Rewired::ControllerElementIdentifier_oFNOTMFwKymAUgwtBfqShdJAZAC*>  value) ;

static inline void setStaticF_eouuVvDPXMlVYVyxWmXXSnuGijiI(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Rewired::ControllerElementIdentifier*>*  value) ;

static inline void setStaticF_hFvVzNBRjKyayBGhIpBoCaATREEJ(::ArrayW<::StringW>  value) ;

static inline void setStaticF_hNMegExVBUfAROLzBDOCuEgbfYwg(::ArrayW<::StringW>  value) ;

static inline void setStaticF_hardwareTypeGuid_universalKeyboard(::System::Guid  value) ;

static inline void setStaticF_hardwareTypeGuid_universalMouse(::System::Guid  value) ;

static inline void setStaticF_hprcZpRiKcgIXbADehBfcOLeDVZz(::ArrayW<::StringW>  value) ;

static inline void setStaticF_joystickGuid_NintendoSwitchHandheld(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_NintendoSwitchJoyConDual(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_NintendoSwitchJoyConL(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_NintendoSwitchJoyConR(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_SonyDualSense(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_SonyDualShock4(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_SonyPS4AimController(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_SonyPS4Drums(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_SonyPS4FlightStick(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_SonyPS4Guitar(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_SonyPS4SteeringWheel(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_appleMFiController(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_standardizedGamepad(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_steamController(::System::Guid  value) ;

static inline void setStaticF_joystickGuid_unknownController(::System::Guid  value) ;

static inline void setStaticF_kBZjvPCjYcovspjUeFBiRqUZMxnsA(::ArrayW<::StringW>  value) ;

static inline void setStaticF_keyboardKeyNames(::System::Collections::Generic::IList_1<::StringW>*  value) ;

static inline void setStaticF_keyboardKeyValues(::System::Collections::Generic::IList_1<int32_t>*  value) ;

static inline void setStaticF_mjRZflfzLtLcNJDIEwNOxulsxadJ(::ArrayW<::Rewired::ControllerElementIdentifier*>  value) ;

static inline void setStaticF_modifierKeyInfo(::Rewired::Utils::Interfaces::IReadOnlyDictionary_2<int32_t,::Rewired::Keyboard_ModifierKeyInfo*>*  value) ;

static inline void setStaticF_mouseAxisUnityNames(::System::Collections::Generic::IList_1<::StringW>*  value) ;

static inline void setStaticF_mouseButtonUnityNames(::System::Collections::Generic::IList_1<::StringW>*  value) ;

static inline void setStaticF_oLzteBuIxWwDoJTFQDlgVCDGWTNi(::ArrayW<::Rewired::PidVid>  value) ;

static inline void setStaticF_pidVids_sony_dualSense(::System::Collections::Generic::IList_1<::Rewired::PidVid>*  value) ;

static inline void setStaticF_pidVids_sony_dualShock4(::System::Collections::Generic::IList_1<::Rewired::PidVid>*  value) ;

static inline void setStaticF_productNames_sony_dualSense(::System::Collections::Generic::IList_1<::StringW>*  value) ;

static inline void setStaticF_productNames_sony_dualShock4(::System::Collections::Generic::IList_1<::StringW>*  value) ;

static inline void setStaticF_questionablePidVids(::ArrayW<::Rewired::PidVid>  value) ;

static inline void setStaticF_questionableVIDs(::ArrayW<int32_t>  value) ;

static inline void setStaticF_reservedHardwareTypeGuids(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Guid>*  value) ;

static inline void setStaticF_wIuHjYaozNDvlijrfkYQXXYLuSZg(::ArrayW<::System::Guid>  value) ;

static inline void setStaticF_xWsvcwCsTxFendABMyQZCfBzvpyI(::ArrayW<::StringW>  value) ;

static inline void setStaticF_zXQHLWMoAWvLcEfnqZLZZafiHzze(::System::Collections::Generic::IList_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Consts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Consts", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Consts(Consts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Consts", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Consts(Consts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1812};

/// @brief Field allFlagsIntEnum offset 0xffffffff size 0x4
static constexpr int32_t  allFlagsIntEnum{static_cast<int32_t>(0xffffffff)};

/// @brief Field allowInputWhenEditorPaused offset 0xffffffff size 0x1
static constexpr bool  allowInputWhenEditorPaused{true};

/// @brief Field appleGCControllerMaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  appleGCControllerMaxAxes{static_cast<int32_t>(0x20)};

/// @brief Field appleGCControllerMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  appleGCControllerMaxButtons{static_cast<int32_t>(0x80)};

/// @brief Field appleGCControllerMaxCompoundElements offset 0xffffffff size 0x4
static constexpr int32_t  appleGCControllerMaxCompoundElements{static_cast<int32_t>(0x20)};

/// @brief Field appleGCControllerUnknownJoystickAxisCount offset 0xffffffff size 0x4
static constexpr int32_t  appleGCControllerUnknownJoystickAxisCount{static_cast<int32_t>(0x20)};

/// @brief Field appleGCControllerUnknownJoystickButtonCount offset 0xffffffff size 0x4
static constexpr int32_t  appleGCControllerUnknownJoystickButtonCount{static_cast<int32_t>(0x80)};

/// @brief Field axisDefaultSensitivity offset 0xffffffff size 0x4
static constexpr float_t  axisDefaultSensitivity{static_cast<float_t>(1.0f)};

/// @brief Field axisDefaultSensitivityType value: I32(0)
static ::Rewired::AxisSensitivityType const axisDefaultSensitivityType;

/// @brief Field buttonsPerHat offset 0xffffffff size 0x4
static constexpr int32_t  buttonsPerHat{static_cast<int32_t>(0x8)};

/// @brief Field calibrationMapDataVersion offset 0xffffffff size 0x4
static constexpr int32_t  calibrationMapDataVersion{static_cast<int32_t>(0x4)};

/// @brief Field controllerElementType_trueElements_maxValue offset 0xffffffff size 0x4
static constexpr int32_t  controllerElementType_trueElements_maxValue{static_cast<int32_t>(0x63)};

/// @brief Field controllerElementType_trueElements_minValue offset 0xffffffff size 0x4
static constexpr int32_t  controllerElementType_trueElements_minValue{static_cast<int32_t>(0x0)};

/// @brief Field controllerMapDataVersion offset 0xffffffff size 0x4
static constexpr int32_t  controllerMapDataVersion{static_cast<int32_t>(0x2)};

/// @brief Field controllerRefreshWaitTimeout offset 0xffffffff size 0x4
static constexpr float_t  controllerRefreshWaitTimeout{static_cast<float_t>(0.5f)};

/// @brief Field controllerTemplateMapDataVersion offset 0xffffffff size 0x4
static constexpr int32_t  controllerTemplateMapDataVersion{static_cast<int32_t>(0x1)};

/// @brief Field copyrightYear offset 0xffffffff size 0x8
static constexpr ::ConstString  copyrightYear{u"2025"};

/// @brief Field customPlatformMaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  customPlatformMaxAxes{static_cast<int32_t>(0x80)};

/// @brief Field customPlatformMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  customPlatformMaxButtons{static_cast<int32_t>(0x100)};

/// @brief Field dataVersion offset 0xffffffff size 0x4
static constexpr int32_t  dataVersion{static_cast<int32_t>(0x1)};

/// @brief Field defaultAbsoluteAxisPollingDeadZone offset 0xffffffff size 0x4
static constexpr float_t  defaultAbsoluteAxisPollingDeadZone{static_cast<float_t>(0.7f)};

/// @brief Field defaultButtonDeadZone offset 0xffffffff size 0x4
static constexpr float_t  defaultButtonDeadZone{static_cast<float_t>(0.5f)};

/// @brief Field defaultButtonDoublePressSpeed offset 0xffffffff size 0x4
static constexpr float_t  defaultButtonDoublePressSpeed{static_cast<float_t>(0.3f)};

/// @brief Field defaultButtonLongPressExpiresIn offset 0xffffffff size 0x4
static constexpr float_t  defaultButtonLongPressExpiresIn{static_cast<float_t>(0.0f)};

/// @brief Field defaultButtonLongPressTime offset 0xffffffff size 0x4
static constexpr float_t  defaultButtonLongPressTime{static_cast<float_t>(1.0f)};

/// @brief Field defaultButtonRepeatDelay offset 0xffffffff size 0x4
static constexpr float_t  defaultButtonRepeatDelay{static_cast<float_t>(0.0f)};

/// @brief Field defaultButtonRepeatRate offset 0xffffffff size 0x4
static constexpr float_t  defaultButtonRepeatRate{static_cast<float_t>(30.0f)};

/// @brief Field defaultButtonShortPressExpiresIn offset 0xffffffff size 0x4
static constexpr float_t  defaultButtonShortPressExpiresIn{static_cast<float_t>(0.0f)};

/// @brief Field defaultButtonShortPressTime offset 0xffffffff size 0x4
static constexpr float_t  defaultButtonShortPressTime{static_cast<float_t>(0.25f)};

/// @brief Field defaultGenerateKeyEventsOnKeyCombinationOverride offset 0xffffffff size 0x1
static constexpr bool  defaultGenerateKeyEventsOnKeyCombinationOverride{true};

/// @brief Field defaultInputBehaviorAxisSensitivity offset 0xffffffff size 0x4
static constexpr float_t  defaultInputBehaviorAxisSensitivity{static_cast<float_t>(1.0f)};

/// @brief Field defaultInputBehaviorAxisSimulation_enabled offset 0xffffffff size 0x1
static constexpr bool  defaultInputBehaviorAxisSimulation_enabled{false};

/// @brief Field defaultInputBehaviorAxisSimulation_gravity offset 0xffffffff size 0x4
static constexpr float_t  defaultInputBehaviorAxisSimulation_gravity{static_cast<float_t>(3.0f)};

/// @brief Field defaultInputBehaviorAxisSimulation_sensitivity offset 0xffffffff size 0x4
static constexpr float_t  defaultInputBehaviorAxisSimulation_sensitivity{static_cast<float_t>(3.0f)};

/// @brief Field defaultInputBehaviorAxisSmoothing_instantReverse offset 0xffffffff size 0x1
static constexpr bool  defaultInputBehaviorAxisSmoothing_instantReverse{false};

/// @brief Field defaultInputBehaviorAxisSmoothing_snap offset 0xffffffff size 0x1
static constexpr bool  defaultInputBehaviorAxisSmoothing_snap{true};

/// @brief Field defaultInputThreadUpdateRateFPS offset 0xffffffff size 0x4
static constexpr int32_t  defaultInputThreadUpdateRateFPS{static_cast<int32_t>(0xf0)};

/// @brief Field defaultKeyCombinationOverrideMode value: I32(2)
static ::Rewired::Config::KeyCombinationOverrideMode const defaultKeyCombinationOverrideMode;

/// @brief Field defaultLogLevel value: I32(7)
static ::Rewired::Config::LogLevelFlags const defaultLogLevel;

/// @brief Field defaultMouseOtherAxisPollingDeadzone offset 0xffffffff size 0x4
static constexpr float_t  defaultMouseOtherAxisPollingDeadzone{static_cast<float_t>(2.0f)};

/// @brief Field defaultMouseXYAxisPollingDeadzone offset 0xffffffff size 0x4
static constexpr float_t  defaultMouseXYAxisPollingDeadzone{static_cast<float_t>(100.0f)};

/// @brief Field defaultNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  defaultNamespace{u"Rewired"};

/// @brief Field defaultOutputRefreshRateFPS offset 0xffffffff size 0x4
static constexpr int32_t  defaultOutputRefreshRateFPS{static_cast<int32_t>(0x64)};

/// @brief Field defaultRelativeAxisPollingDeadZone offset 0xffffffff size 0x4
static constexpr float_t  defaultRelativeAxisPollingDeadZone{static_cast<float_t>(100.0f)};

/// @brief Field directInputHatSpan offset 0xffffffff size 0x4
static constexpr int32_t  directInputHatSpan{static_cast<int32_t>(0x1194)};

/// @brief Field directInputHatSpan4Way offset 0xffffffff size 0x4
static constexpr int32_t  directInputHatSpan4Way{static_cast<int32_t>(0x2328)};

/// @brief Field directInputHatZeroValue offset 0xffffffff size 0x4
static constexpr int32_t  directInputHatZeroValue{static_cast<int32_t>(0xffffffff)};

/// @brief Field directInputJoystickStateByteSize offset 0xffffffff size 0x4
static constexpr int32_t  directInputJoystickStateByteSize{static_cast<int32_t>(0x108)};

/// @brief Field directInputLastDirectionValue offset 0xffffffff size 0x4
static constexpr int32_t  directInputLastDirectionValue{static_cast<int32_t>(0x7b0c)};

/// @brief Field directInputLastDirectionValue4Way offset 0xffffffff size 0x4
static constexpr int32_t  directInputLastDirectionValue4Way{static_cast<int32_t>(0x6978)};

/// @brief Field directInputMaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  directInputMaxAxes{static_cast<int32_t>(0x20)};

/// @brief Field directInputMaxAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  directInputMaxAxisValue{static_cast<int32_t>(0xffff)};

/// @brief Field directInputMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  directInputMaxButtons{static_cast<int32_t>(0x80)};

/// @brief Field directInputMaxHatValue offset 0xffffffff size 0x4
static constexpr int32_t  directInputMaxHatValue{static_cast<int32_t>(0x8ca0)};

/// @brief Field directInputMaxHats offset 0xffffffff size 0x4
static constexpr int32_t  directInputMaxHats{static_cast<int32_t>(0x4)};

/// @brief Field directInputMaxSliders offset 0xffffffff size 0x4
static constexpr int32_t  directInputMaxSliders{static_cast<int32_t>(0x2)};

/// @brief Field directInputMinAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  directInputMinAxisValue{static_cast<int32_t>(0xffff0001)};

/// @brief Field directInputUnknownJoystickHatButtonStartIndex offset 0xffffffff size 0x4
static constexpr int32_t  directInputUnknownJoystickHatButtonStartIndex{static_cast<int32_t>(0x80)};

/// @brief Field directInputUnknownJoystickHatCount offset 0xffffffff size 0x4
static constexpr int32_t  directInputUnknownJoystickHatCount{static_cast<int32_t>(0x2)};

/// @brief Field directInput_hatValue_down offset 0xffffffff size 0x4
static constexpr int32_t  directInput_hatValue_down{static_cast<int32_t>(0x4650)};

/// @brief Field directInput_hatValue_left offset 0xffffffff size 0x4
static constexpr int32_t  directInput_hatValue_left{static_cast<int32_t>(0x6978)};

/// @brief Field directInput_hatValue_right offset 0xffffffff size 0x4
static constexpr int32_t  directInput_hatValue_right{static_cast<int32_t>(0x2328)};

/// @brief Field directInput_hatValue_up offset 0xffffffff size 0x4
static constexpr int32_t  directInput_hatValue_up{static_cast<int32_t>(0x0)};

/// @brief Field editorGUIUpdateInterval offset 0xffffffff size 0x4
static constexpr float_t  editorGUIUpdateInterval{static_cast<float_t>(0.5f)};

/// @brief Field fallbackPollingTimeout offset 0xffffffff size 0x4
static constexpr float_t  fallbackPollingTimeout{static_cast<float_t>(1.0f)};

/// @brief Field gameCoreMaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  gameCoreMaxAxes{static_cast<int32_t>(0x20)};

/// @brief Field gameCoreMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  gameCoreMaxButtons{static_cast<int32_t>(0x100)};

/// @brief Field gameCoreMaxHats offset 0xffffffff size 0x4
static constexpr int32_t  gameCoreMaxHats{static_cast<int32_t>(0x4)};

/// @brief Field gameCorePluginEditorRuntimeAssembly offset 0xffffffff size 0x8
static constexpr ::ConstString  gameCorePluginEditorRuntimeAssembly{u"Rewired_GameCore_EditorRuntime"};

/// @brief Field gameCorePluginInputManagerFullClassPath offset 0xffffffff size 0x8
static constexpr ::ConstString  gameCorePluginInputManagerFullClassPath{u"Rewired.Platforms.GameCore.GameCoreInputManager"};

/// @brief Field gameCoreUnknownJoystickAxisCount offset 0xffffffff size 0x4
static constexpr int32_t  gameCoreUnknownJoystickAxisCount{static_cast<int32_t>(0x20)};

/// @brief Field gameCoreUnknownJoystickButtonCount offset 0xffffffff size 0x4
static constexpr int32_t  gameCoreUnknownJoystickButtonCount{static_cast<int32_t>(0x80)};

/// @brief Field gameCoreUnknownJoystickHatCount offset 0xffffffff size 0x4
static constexpr int32_t  gameCoreUnknownJoystickHatCount{static_cast<int32_t>(0x2)};

/// @brief Field hardwareButtonDeadZone offset 0xffffffff size 0x4
static constexpr float_t  hardwareButtonDeadZone{static_cast<float_t>(0.01f)};

/// @brief Field hidOutputReportRefreshRateFPS offset 0xffffffff size 0x4
static constexpr int32_t  hidOutputReportRefreshRateFPS{static_cast<int32_t>(0x64)};

/// @brief Field hidOutputReportThreadKillTimeout offset 0xffffffff size 0x4
static constexpr int32_t  hidOutputReportThreadKillTimeout{static_cast<int32_t>(0x2710)};

/// @brief Field hwDefinitionVariantTag_RawInputDirectInput_xboxOneController_combinedTriggers offset 0xffffffff size 0x8
static constexpr ::ConstString  hwDefinitionVariantTag_RawInputDirectInput_xboxOneController_combinedTriggers{u"[CombinedTriggers]"};

/// @brief Field hwDefinitionVariantTag_RawInputDirectInput_xboxOneController_splitTriggers offset 0xffffffff size 0x8
static constexpr ::ConstString  hwDefinitionVariantTag_RawInputDirectInput_xboxOneController_splitTriggers{u"[SplitTriggers]"};

/// @brief Field inputBehaviorDataVersion offset 0xffffffff size 0x4
static constexpr int32_t  inputBehaviorDataVersion{static_cast<int32_t>(0x5)};

/// @brief Field internalDriverHatSpan offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverHatSpan{static_cast<int32_t>(0x1194)};

/// @brief Field internalDriverHatSpan4Way offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverHatSpan4Way{static_cast<int32_t>(0x2328)};

/// @brief Field internalDriverHatZeroValue offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverHatZeroValue{static_cast<int32_t>(0xffffffff)};

/// @brief Field internalDriverLastDirectionValue offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverLastDirectionValue{static_cast<int32_t>(0x7b0c)};

/// @brief Field internalDriverLastDirectionValue4Way offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverLastDirectionValue4Way{static_cast<int32_t>(0x6978)};

/// @brief Field internalDriverMaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverMaxAxes{static_cast<int32_t>(0x38)};

/// @brief Field internalDriverMaxAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverMaxAxisValue{static_cast<int32_t>(0xffff)};

/// @brief Field internalDriverMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverMaxButtons{static_cast<int32_t>(0x100)};

/// @brief Field internalDriverMaxHatValue offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverMaxHatValue{static_cast<int32_t>(0x8ca0)};

/// @brief Field internalDriverMaxHats offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverMaxHats{static_cast<int32_t>(0x4)};

/// @brief Field internalDriverMaxSliders offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverMaxSliders{static_cast<int32_t>(0x2)};

/// @brief Field internalDriverMinAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverMinAxisValue{static_cast<int32_t>(0xffff0001)};

/// @brief Field internalDriverUnifiedMouseAxisCount offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverUnifiedMouseAxisCount{static_cast<int32_t>(0x3)};

/// @brief Field internalDriverUnifiedMouseAxisUnityEquivalencyMultiplier offset 0xffffffff size 0x4
static constexpr float_t  internalDriverUnifiedMouseAxisUnityEquivalencyMultiplier{static_cast<float_t>(0.5f)};

/// @brief Field internalDriverUnifiedMouseButtonCount offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverUnifiedMouseButtonCount{static_cast<int32_t>(0x5)};

/// @brief Field internalDriverUnknownJoystickHatButtonStartIndex offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverUnknownJoystickHatButtonStartIndex{static_cast<int32_t>(0x80)};

/// @brief Field internalDriverUnknownJoystickHatCount offset 0xffffffff size 0x4
static constexpr int32_t  internalDriverUnknownJoystickHatCount{static_cast<int32_t>(0x2)};

/// @brief Field internalDriver_hatValue_down offset 0xffffffff size 0x4
static constexpr int32_t  internalDriver_hatValue_down{static_cast<int32_t>(0x4650)};

/// @brief Field internalDriver_hatValue_left offset 0xffffffff size 0x4
static constexpr int32_t  internalDriver_hatValue_left{static_cast<int32_t>(0x6978)};

/// @brief Field internalDriver_hatValue_right offset 0xffffffff size 0x4
static constexpr int32_t  internalDriver_hatValue_right{static_cast<int32_t>(0x2328)};

/// @brief Field internalDriver_hatValue_up offset 0xffffffff size 0x4
static constexpr int32_t  internalDriver_hatValue_up{static_cast<int32_t>(0x0)};

/// @brief Field isTrial offset 0xffffffff size 0x1
static constexpr bool  isTrial{false};

/// @brief Field joystickInputReportRingBufferCapacity offset 0xffffffff size 0x4
static constexpr int32_t  joystickInputReportRingBufferCapacity{static_cast<int32_t>(0x3c)};

/// @brief Field joystickInputReportRingBufferCapacityDuration offset 0xffffffff size 0x4
static constexpr float_t  joystickInputReportRingBufferCapacityDuration{static_cast<float_t>(0.25f)};

/// @brief Field joystickRefreshPollCheckTimeout offset 0xffffffff size 0x4
static constexpr float_t  joystickRefreshPollCheckTimeout{static_cast<float_t>(1.0f)};

/// @brief Field keyboardKeyCount offset 0xffffffff size 0x4
static constexpr int32_t  keyboardKeyCount{static_cast<int32_t>(0x84)};

/// @brief Field keyboardModifierKeyCount offset 0xffffffff size 0x4
static constexpr int32_t  keyboardModifierKeyCount{static_cast<int32_t>(0x8)};

/// @brief Field linuxHatSpan offset 0xffffffff size 0x4
static constexpr int32_t  linuxHatSpan{static_cast<int32_t>(0x1194)};

/// @brief Field linuxHatSpan4Way offset 0xffffffff size 0x4
static constexpr int32_t  linuxHatSpan4Way{static_cast<int32_t>(0x2328)};

/// @brief Field linuxHatZeroValue offset 0xffffffff size 0x4
static constexpr int32_t  linuxHatZeroValue{static_cast<int32_t>(0xffffffff)};

/// @brief Field linuxLastDirectionValue offset 0xffffffff size 0x4
static constexpr int32_t  linuxLastDirectionValue{static_cast<int32_t>(0x7b0c)};

/// @brief Field linuxLastDirectionValue4Way offset 0xffffffff size 0x4
static constexpr int32_t  linuxLastDirectionValue4Way{static_cast<int32_t>(0x6978)};

/// @brief Field linuxMaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  linuxMaxAxes{static_cast<int32_t>(0x38)};

/// @brief Field linuxMaxAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  linuxMaxAxisValue{static_cast<int32_t>(0x7fff)};

/// @brief Field linuxMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  linuxMaxButtons{static_cast<int32_t>(0x100)};

/// @brief Field linuxMaxHatValue offset 0xffffffff size 0x4
static constexpr int32_t  linuxMaxHatValue{static_cast<int32_t>(0x8ca0)};

/// @brief Field linuxMaxHats offset 0xffffffff size 0x4
static constexpr int32_t  linuxMaxHats{static_cast<int32_t>(0x4)};

/// @brief Field linuxMaxSliders offset 0xffffffff size 0x4
static constexpr int32_t  linuxMaxSliders{static_cast<int32_t>(0x2)};

/// @brief Field linuxMinAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  linuxMinAxisValue{static_cast<int32_t>(0xffff8000)};

/// @brief Field linuxUnifiedMouseAxisCount offset 0xffffffff size 0x4
static constexpr int32_t  linuxUnifiedMouseAxisCount{static_cast<int32_t>(0x3)};

/// @brief Field linuxUnifiedMouseAxisUnityEquivalencyMultiplier offset 0xffffffff size 0x4
static constexpr float_t  linuxUnifiedMouseAxisUnityEquivalencyMultiplier{static_cast<float_t>(0.5f)};

/// @brief Field linuxUnifiedMouseButtonCount offset 0xffffffff size 0x4
static constexpr int32_t  linuxUnifiedMouseButtonCount{static_cast<int32_t>(0x5)};

/// @brief Field linuxUnknownJoystickHatButtonStartIndex offset 0xffffffff size 0x4
static constexpr int32_t  linuxUnknownJoystickHatButtonStartIndex{static_cast<int32_t>(0x80)};

/// @brief Field linuxUnknownJoystickHatCount offset 0xffffffff size 0x4
static constexpr int32_t  linuxUnknownJoystickHatCount{static_cast<int32_t>(0x2)};

/// @brief Field linux_hatValue_down offset 0xffffffff size 0x4
static constexpr int32_t  linux_hatValue_down{static_cast<int32_t>(0x4650)};

/// @brief Field linux_hatValue_left offset 0xffffffff size 0x4
static constexpr int32_t  linux_hatValue_left{static_cast<int32_t>(0x6978)};

/// @brief Field linux_hatValue_right offset 0xffffffff size 0x4
static constexpr int32_t  linux_hatValue_right{static_cast<int32_t>(0x2328)};

/// @brief Field linux_hatValue_up offset 0xffffffff size 0x4
static constexpr int32_t  linux_hatValue_up{static_cast<int32_t>(0x0)};

/// @brief Field maxButtonLongPressExpiresIn offset 0xffffffff size 0x4
static constexpr float_t  maxButtonLongPressExpiresIn{static_cast<float_t>(3.4028235e38f)};

/// @brief Field maxButtonLongPressTime offset 0xffffffff size 0x4
static constexpr float_t  maxButtonLongPressTime{static_cast<float_t>(3.4028235e38f)};

/// @brief Field maxButtonShortPressExpiresIn offset 0xffffffff size 0x4
static constexpr float_t  maxButtonShortPressExpiresIn{static_cast<float_t>(3.4028235e38f)};

/// @brief Field maxButtonShortPressTime offset 0xffffffff size 0x4
static constexpr float_t  maxButtonShortPressTime{static_cast<float_t>(3.4028235e38f)};

/// @brief Field maxDoubleButtonPressSpeed offset 0xffffffff size 0x4
static constexpr float_t  maxDoubleButtonPressSpeed{static_cast<float_t>(10.0f)};

/// @brief Field maxInputThreadUpdateRateFPS offset 0xffffffff size 0x4
static constexpr int32_t  maxInputThreadUpdateRateFPS{static_cast<int32_t>(0x7d0)};

/// @brief Field menuRoot offset 0xffffffff size 0x8
static constexpr ::ConstString  menuRoot{u"Window/Rewired"};

/// @brief Field minButtonLongPressExpiresIn offset 0xffffffff size 0x4
static constexpr float_t  minButtonLongPressExpiresIn{static_cast<float_t>(0.0f)};

/// @brief Field minButtonLongPressTime offset 0xffffffff size 0x4
static constexpr float_t  minButtonLongPressTime{static_cast<float_t>(0.0f)};

/// @brief Field minButtonRepeatRate offset 0xffffffff size 0x4
static constexpr float_t  minButtonRepeatRate{static_cast<float_t>(0.001f)};

/// @brief Field minButtonShortPressExpiresIn offset 0xffffffff size 0x4
static constexpr float_t  minButtonShortPressExpiresIn{static_cast<float_t>(0.0f)};

/// @brief Field minButtonShortPressTime offset 0xffffffff size 0x4
static constexpr float_t  minButtonShortPressTime{static_cast<float_t>(0.0f)};

/// @brief Field minDoubleButtonPressSpeed offset 0xffffffff size 0x4
static constexpr float_t  minDoubleButtonPressSpeed{static_cast<float_t>(0.01f)};

/// @brief Field mouseAxisPollingTimerLength offset 0xffffffff size 0x4
static constexpr float_t  mouseAxisPollingTimerLength{static_cast<float_t>(1.0f)};

/// @brief Field nintendoSwitch2PluginEditorRuntimeAssembly offset 0xffffffff size 0x8
static constexpr ::ConstString  nintendoSwitch2PluginEditorRuntimeAssembly{u"Rewired_NintendoSwitch2_EditorRuntime"};

/// @brief Field nintendoSwitch2PluginHWJoystickMapGuid_Handheld offset 0xffffffff size 0x8
static constexpr ::ConstString  nintendoSwitch2PluginHWJoystickMapGuid_Handheld{u"2560014c-e7a5-4675-bc63-1b46337b12cb"};

/// @brief Field nintendoSwitch2PluginHWJoystickMapGuid_JoyConDual offset 0xffffffff size 0x8
static constexpr ::ConstString  nintendoSwitch2PluginHWJoystickMapGuid_JoyConDual{u"b5cb8488-8551-41c2-944a-64dfcf74b4c7"};

/// @brief Field nintendoSwitch2PluginInputManagerFullClassPath offset 0xffffffff size 0x8
static constexpr ::ConstString  nintendoSwitch2PluginInputManagerFullClassPath{u"Rewired.Platforms.Switch2.NintendoSwitch2InputManager"};

/// @brief Field nintendoSwitchPluginEditorRuntimeAssembly offset 0xffffffff size 0x8
static constexpr ::ConstString  nintendoSwitchPluginEditorRuntimeAssembly{u"Rewired_NintendoSwitch_EditorRuntime"};

/// @brief Field nintendoSwitchPluginHWJoystickMapGuid_Handheld offset 0xffffffff size 0x8
static constexpr ::ConstString  nintendoSwitchPluginHWJoystickMapGuid_Handheld{u"1fbdd13b-0795-4173-8a95-a2a75de9d204"};

/// @brief Field nintendoSwitchPluginHWJoystickMapGuid_JoyConDual offset 0xffffffff size 0x8
static constexpr ::ConstString  nintendoSwitchPluginHWJoystickMapGuid_JoyConDual{u"521b808c-0248-4526-bc10-f1d16ee76bf1"};

/// @brief Field nintendoSwitchPluginInputManagerFullClassPath offset 0xffffffff size 0x8
static constexpr ::ConstString  nintendoSwitchPluginInputManagerFullClassPath{u"Rewired.Platforms.Switch.NintendoSwitchInputManager"};

/// @brief Field osxHatSpan offset 0xffffffff size 0x4
static constexpr int32_t  osxHatSpan{static_cast<int32_t>(0x1194)};

/// @brief Field osxHatSpan4Way offset 0xffffffff size 0x4
static constexpr int32_t  osxHatSpan4Way{static_cast<int32_t>(0x2328)};

/// @brief Field osxInputHatZeroValue offset 0xffffffff size 0x4
static constexpr int32_t  osxInputHatZeroValue{static_cast<int32_t>(0xffffffff)};

/// @brief Field osxLastDirectionValue offset 0xffffffff size 0x4
static constexpr int32_t  osxLastDirectionValue{static_cast<int32_t>(0x7b0c)};

/// @brief Field osxLastDirectionValue4Way offset 0xffffffff size 0x4
static constexpr int32_t  osxLastDirectionValue4Way{static_cast<int32_t>(0x6978)};

/// @brief Field osxMaxAxesPerStick offset 0xffffffff size 0x4
static constexpr int32_t  osxMaxAxesPerStick{static_cast<int32_t>(0xe)};

/// @brief Field osxMaxAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  osxMaxAxisValue{static_cast<int32_t>(0x10000)};

/// @brief Field osxMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  osxMaxButtons{static_cast<int32_t>(0x80)};

/// @brief Field osxMaxHatValue offset 0xffffffff size 0x4
static constexpr int32_t  osxMaxHatValue{static_cast<int32_t>(0x8ca0)};

/// @brief Field osxMaxHatsPerStick offset 0xffffffff size 0x4
static constexpr int32_t  osxMaxHatsPerStick{static_cast<int32_t>(0x4)};

/// @brief Field osxMaxPressureSensitiveButtonValue offset 0xffffffff size 0x4
static constexpr int32_t  osxMaxPressureSensitiveButtonValue{static_cast<int32_t>(0x10000)};

/// @brief Field osxMaxSticks offset 0xffffffff size 0x4
static constexpr int32_t  osxMaxSticks{static_cast<int32_t>(0x4)};

/// @brief Field osxMinAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  osxMinAxisValue{static_cast<int32_t>(0xffff0000)};

/// @brief Field osxMinPressureSensitiveButtonValue offset 0xffffffff size 0x4
static constexpr int32_t  osxMinPressureSensitiveButtonValue{static_cast<int32_t>(0x0)};

/// @brief Field osxPreventSystemSleepInterval offset 0xffffffff size 0x4
static constexpr float_t  osxPreventSystemSleepInterval{static_cast<float_t>(30.0f)};

/// @brief Field osxUnknownJoystickHatButtonStartIndex offset 0xffffffff size 0x4
static constexpr int32_t  osxUnknownJoystickHatButtonStartIndex{static_cast<int32_t>(0x80)};

/// @brief Field osxUnknownJoystickHatCount offset 0xffffffff size 0x4
static constexpr int32_t  osxUnknownJoystickHatCount{static_cast<int32_t>(0x10)};

/// @brief Field osxXInputOutputReportRefreshRateFPS offset 0xffffffff size 0x4
static constexpr int32_t  osxXInputOutputReportRefreshRateFPS{static_cast<int32_t>(0x3c)};

/// @brief Field osx_hatValue_down offset 0xffffffff size 0x4
static constexpr int32_t  osx_hatValue_down{static_cast<int32_t>(0x4650)};

/// @brief Field osx_hatValue_left offset 0xffffffff size 0x4
static constexpr int32_t  osx_hatValue_left{static_cast<int32_t>(0x6978)};

/// @brief Field osx_hatValue_right offset 0xffffffff size 0x4
static constexpr int32_t  osx_hatValue_right{static_cast<int32_t>(0x2328)};

/// @brief Field osx_hatValue_up offset 0xffffffff size 0x4
static constexpr int32_t  osx_hatValue_up{static_cast<int32_t>(0x0)};

/// @brief Field playerControllerMapLayoutManagerDataVersion offset 0xffffffff size 0x4
static constexpr int32_t  playerControllerMapLayoutManagerDataVersion{static_cast<int32_t>(0x1)};

/// @brief Field playerMapEnablerDataVersion offset 0xffffffff size 0x4
static constexpr int32_t  playerMapEnablerDataVersion{static_cast<int32_t>(0x1)};

/// @brief Field pressureSensitiveButtonDeadZone offset 0xffffffff size 0x4
static constexpr float_t  pressureSensitiveButtonDeadZone{static_cast<float_t>(0.001f)};

/// @brief Field programVersion1 offset 0xffffffff size 0x4
static constexpr int32_t  programVersion1{static_cast<int32_t>(0x1)};

/// @brief Field programVersion2 offset 0xffffffff size 0x4
static constexpr int32_t  programVersion2{static_cast<int32_t>(0x1)};

/// @brief Field programVersion3 offset 0xffffffff size 0x4
static constexpr int32_t  programVersion3{static_cast<int32_t>(0x3b)};

/// @brief Field programVersion4 offset 0xffffffff size 0x4
static constexpr int32_t  programVersion4{static_cast<int32_t>(0x2)};

/// @brief Field ps4PluginEditorRuntimeAssembly offset 0xffffffff size 0x8
static constexpr ::ConstString  ps4PluginEditorRuntimeAssembly{u"Rewired_PlayStation4_EditorRuntime"};

/// @brief Field ps5PluginEditorRuntimeAssembly offset 0xffffffff size 0x8
static constexpr ::ConstString  ps5PluginEditorRuntimeAssembly{u"Rewired_PlayStation5_EditorRuntime"};

/// @brief Field rawInputHatSpan offset 0xffffffff size 0x4
static constexpr int32_t  rawInputHatSpan{static_cast<int32_t>(0x1194)};

/// @brief Field rawInputHatSpan4Way offset 0xffffffff size 0x4
static constexpr int32_t  rawInputHatSpan4Way{static_cast<int32_t>(0x2328)};

/// @brief Field rawInputHatZeroValue offset 0xffffffff size 0x4
static constexpr int32_t  rawInputHatZeroValue{static_cast<int32_t>(0xffffffff)};

/// @brief Field rawInputLastDirectionValue offset 0xffffffff size 0x4
static constexpr int32_t  rawInputLastDirectionValue{static_cast<int32_t>(0x7b0c)};

/// @brief Field rawInputLastDirectionValue4Way offset 0xffffffff size 0x4
static constexpr int32_t  rawInputLastDirectionValue4Way{static_cast<int32_t>(0x6978)};

/// @brief Field rawInputMaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  rawInputMaxAxes{static_cast<int32_t>(0x38)};

/// @brief Field rawInputMaxAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  rawInputMaxAxisValue{static_cast<int32_t>(0xffff)};

/// @brief Field rawInputMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  rawInputMaxButtons{static_cast<int32_t>(0x100)};

/// @brief Field rawInputMaxHatValue offset 0xffffffff size 0x4
static constexpr int32_t  rawInputMaxHatValue{static_cast<int32_t>(0x8ca0)};

/// @brief Field rawInputMaxHats offset 0xffffffff size 0x4
static constexpr int32_t  rawInputMaxHats{static_cast<int32_t>(0x4)};

/// @brief Field rawInputMaxSliders offset 0xffffffff size 0x4
static constexpr int32_t  rawInputMaxSliders{static_cast<int32_t>(0x2)};

/// @brief Field rawInputMinAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  rawInputMinAxisValue{static_cast<int32_t>(0xffff0001)};

/// @brief Field rawInputUnifiedKeyboardButtonCount offset 0xffffffff size 0x4
static constexpr int32_t  rawInputUnifiedKeyboardButtonCount{static_cast<int32_t>(0x84)};

/// @brief Field rawInputUnifiedMouseAxisCount offset 0xffffffff size 0x4
static constexpr int32_t  rawInputUnifiedMouseAxisCount{static_cast<int32_t>(0x4)};

/// @brief Field rawInputUnifiedMouseAxisUnityEquivalencyMultiplier offset 0xffffffff size 0x4
static constexpr float_t  rawInputUnifiedMouseAxisUnityEquivalencyMultiplier{static_cast<float_t>(0.5f)};

/// @brief Field rawInputUnifiedMouseButtonCount offset 0xffffffff size 0x4
static constexpr int32_t  rawInputUnifiedMouseButtonCount{static_cast<int32_t>(0x5)};

/// @brief Field rawInputUnknownJoystickHatButtonStartIndex offset 0xffffffff size 0x4
static constexpr int32_t  rawInputUnknownJoystickHatButtonStartIndex{static_cast<int32_t>(0x80)};

/// @brief Field rawInputUnknownJoystickHatCount offset 0xffffffff size 0x4
static constexpr int32_t  rawInputUnknownJoystickHatCount{static_cast<int32_t>(0x2)};

/// @brief Field rawInput_hatValue_down offset 0xffffffff size 0x4
static constexpr int32_t  rawInput_hatValue_down{static_cast<int32_t>(0x4650)};

/// @brief Field rawInput_hatValue_left offset 0xffffffff size 0x4
static constexpr int32_t  rawInput_hatValue_left{static_cast<int32_t>(0x6978)};

/// @brief Field rawInput_hatValue_right offset 0xffffffff size 0x4
static constexpr int32_t  rawInput_hatValue_right{static_cast<int32_t>(0x2328)};

/// @brief Field rawInput_hatValue_up offset 0xffffffff size 0x4
static constexpr int32_t  rawInput_hatValue_up{static_cast<int32_t>(0x0)};

/// @brief Field relativeAxisPollingTimerLength offset 0xffffffff size 0x4
static constexpr float_t  relativeAxisPollingTimerLength{static_cast<float_t>(1.0f)};

/// @brief Field resourecesDLLPath_linux offset 0xffffffff size 0x8
static constexpr ::ConstString  resourecesDLLPath_linux{u"Libs/Rewired_Linux"};

/// @brief Field resourecesDLLPath_osxStandalone offset 0xffffffff size 0x8
static constexpr ::ConstString  resourecesDLLPath_osxStandalone{u"Libs/Rewired_OSX"};

/// @brief Field resourecesDLLPath_windowsStandalone offset 0xffffffff size 0x8
static constexpr ::ConstString  resourecesDLLPath_windowsStandalone{u"Libs/Rewired_Windows"};

/// @brief Field rewiredEditorAssembly offset 0xffffffff size 0x8
static constexpr ::ConstString  rewiredEditorAssembly{u"Rewired_Editor"};

/// @brief Field rewiredEditorInputEditorClassFullName offset 0xffffffff size 0x8
static constexpr ::ConstString  rewiredEditorInputEditorClassFullName{u"Rewired.Editor.InputEditor"};

/// @brief Field schemaBaseLocation offset 0xffffffff size 0x8
static constexpr ::ConstString  schemaBaseLocation{u"http://guavaman.com/schemas/rewired/"};

/// @brief Field schemaNameSpace offset 0xffffffff size 0x8
static constexpr ::ConstString  schemaNameSpace{u"http://guavaman.com/rewired"};

/// @brief Field schemaVersionCalibrationMap offset 0xffffffff size 0x8
static constexpr ::ConstString  schemaVersionCalibrationMap{u"1.3"};

/// @brief Field schemaVersionControllerMap offset 0xffffffff size 0x8
static constexpr ::ConstString  schemaVersionControllerMap{u"1.1"};

/// @brief Field schemaVersionControllerTemplateMap offset 0xffffffff size 0x8
static constexpr ::ConstString  schemaVersionControllerTemplateMap{u"1.0"};

/// @brief Field schemaVersionInputBehavior offset 0xffffffff size 0x8
static constexpr ::ConstString  schemaVersionInputBehavior{u"1.4"};

/// @brief Field schemaVersionPlayerControllerMapLayoutManagerData offset 0xffffffff size 0x8
static constexpr ::ConstString  schemaVersionPlayerControllerMapLayoutManagerData{u"1.0"};

/// @brief Field schemaVersionPlayerEnabledMapsHelperData offset 0xffffffff size 0x8
static constexpr ::ConstString  schemaVersionPlayerEnabledMapsHelperData{u"1.0"};

/// @brief Field sdl2AxisZeroValue offset 0xffffffff size 0x4
static constexpr int32_t  sdl2AxisZeroValue{static_cast<int32_t>(0x0)};

/// @brief Field sdl2HatSpan offset 0xffffffff size 0x4
static constexpr int32_t  sdl2HatSpan{static_cast<int32_t>(0x1194)};

/// @brief Field sdl2HatSpan4Way offset 0xffffffff size 0x4
static constexpr int32_t  sdl2HatSpan4Way{static_cast<int32_t>(0x2328)};

/// @brief Field sdl2HatZeroValue offset 0xffffffff size 0x4
static constexpr int32_t  sdl2HatZeroValue{static_cast<int32_t>(0xffffffff)};

/// @brief Field sdl2LastDirectionValue offset 0xffffffff size 0x4
static constexpr int32_t  sdl2LastDirectionValue{static_cast<int32_t>(0x7b0c)};

/// @brief Field sdl2LastDirectionValue4Way offset 0xffffffff size 0x4
static constexpr int32_t  sdl2LastDirectionValue4Way{static_cast<int32_t>(0x6978)};

/// @brief Field sdl2MaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  sdl2MaxAxes{static_cast<int32_t>(0x38)};

/// @brief Field sdl2MaxAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  sdl2MaxAxisValue{static_cast<int32_t>(0x8000)};

/// @brief Field sdl2MaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  sdl2MaxButtons{static_cast<int32_t>(0x100)};

/// @brief Field sdl2MaxHatValue offset 0xffffffff size 0x4
static constexpr int32_t  sdl2MaxHatValue{static_cast<int32_t>(0x8ca0)};

/// @brief Field sdl2MaxHats offset 0xffffffff size 0x4
static constexpr int32_t  sdl2MaxHats{static_cast<int32_t>(0x4)};

/// @brief Field sdl2MaxSliders offset 0xffffffff size 0x4
static constexpr int32_t  sdl2MaxSliders{static_cast<int32_t>(0x2)};

/// @brief Field sdl2MinAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  sdl2MinAxisValue{static_cast<int32_t>(0xffff8001)};

/// @brief Field sdl2UnifiedMouseAxisCount offset 0xffffffff size 0x4
static constexpr int32_t  sdl2UnifiedMouseAxisCount{static_cast<int32_t>(0x3)};

/// @brief Field sdl2UnifiedMouseAxisUnityEquivalencyMultiplier offset 0xffffffff size 0x4
static constexpr float_t  sdl2UnifiedMouseAxisUnityEquivalencyMultiplier{static_cast<float_t>(0.5f)};

/// @brief Field sdl2UnifiedMouseButtonCount offset 0xffffffff size 0x4
static constexpr int32_t  sdl2UnifiedMouseButtonCount{static_cast<int32_t>(0x5)};

/// @brief Field sdl2UnknownJoystickHatButtonStartIndex offset 0xffffffff size 0x4
static constexpr int32_t  sdl2UnknownJoystickHatButtonStartIndex{static_cast<int32_t>(0x80)};

/// @brief Field sdl2UnknownJoystickHatCount offset 0xffffffff size 0x4
static constexpr int32_t  sdl2UnknownJoystickHatCount{static_cast<int32_t>(0x2)};

/// @brief Field sdl2_hatValue_down offset 0xffffffff size 0x4
static constexpr int32_t  sdl2_hatValue_down{static_cast<int32_t>(0x4650)};

/// @brief Field sdl2_hatValue_left offset 0xffffffff size 0x4
static constexpr int32_t  sdl2_hatValue_left{static_cast<int32_t>(0x6978)};

/// @brief Field sdl2_hatValue_right offset 0xffffffff size 0x4
static constexpr int32_t  sdl2_hatValue_right{static_cast<int32_t>(0x2328)};

/// @brief Field sdl2_hatValue_up offset 0xffffffff size 0x4
static constexpr int32_t  sdl2_hatValue_up{static_cast<int32_t>(0x0)};

/// @brief Field systemPlayerId offset 0xffffffff size 0x4
static constexpr int32_t  systemPlayerId{static_cast<int32_t>(0x98967f)};

/// @brief Field unityJoystickAxisCount offset 0xffffffff size 0x4
static constexpr int32_t  unityJoystickAxisCount{static_cast<int32_t>(0x1d)};

/// @brief Field unityJoystickAxisSuffix offset 0xffffffff size 0x8
static constexpr ::ConstString  unityJoystickAxisSuffix{u"Axis"};

/// @brief Field unityJoystickButtonCount offset 0xffffffff size 0x4
static constexpr int32_t  unityJoystickButtonCount{static_cast<int32_t>(0x14)};

/// @brief Field unityJoystickButtonSuffix offset 0xffffffff size 0x8
static constexpr ::ConstString  unityJoystickButtonSuffix{u"Button"};

/// @brief Field unityJoystickLastJoystickIdWithButtonKeyCodes offset 0xffffffff size 0x4
static constexpr int32_t  unityJoystickLastJoystickIdWithButtonKeyCodes{static_cast<int32_t>(0x10)};

/// @brief Field unityJoystickPrefix offset 0xffffffff size 0x8
static constexpr ::ConstString  unityJoystickPrefix{u"Joy"};

/// @brief Field unityJoystickStartingButtonKeycodeValue offset 0xffffffff size 0x4
static constexpr int32_t  unityJoystickStartingButtonKeycodeValue{static_cast<int32_t>(0x15e)};

/// @brief Field unityMajorVersion offset 0xffffffff size 0x4
static constexpr int32_t  unityMajorVersion{static_cast<int32_t>(0x1770)};

/// @brief Field unityMajorVersionIdentifier offset 0xffffffff size 0x8
static constexpr ::ConstString  unityMajorVersionIdentifier{u"U6000"};

/// @brief Field unityMaxJoysticks offset 0xffffffff size 0x4
static constexpr int32_t  unityMaxJoysticks{static_cast<int32_t>(0x10)};

/// @brief Field unityMouseAxisCount offset 0xffffffff size 0x4
static constexpr int32_t  unityMouseAxisCount{static_cast<int32_t>(0x4)};

/// @brief Field unityMouseButtonCount offset 0xffffffff size 0x4
static constexpr int32_t  unityMouseButtonCount{static_cast<int32_t>(0x7)};

/// @brief Field unknownJoystickAxisElementIdentifierStartIndex offset 0xffffffff size 0x4
static constexpr int32_t  unknownJoystickAxisElementIdentifierStartIndex{static_cast<int32_t>(0x0)};

/// @brief Field unknownJoystickButtonElementIdentifierStartIndex offset 0xffffffff size 0x4
static constexpr int32_t  unknownJoystickButtonElementIdentifierStartIndex{static_cast<int32_t>(0x20)};

/// @brief Field unknownJoystickButtonsPerHat offset 0xffffffff size 0x4
static constexpr int32_t  unknownJoystickButtonsPerHat{static_cast<int32_t>(0x8)};

/// @brief Field unknownJoystickDefaultAxisDeadZone offset 0xffffffff size 0x4
static constexpr float_t  unknownJoystickDefaultAxisDeadZone{static_cast<float_t>(0.1f)};

/// @brief Field unknownJoystickHatElementIdentifierStartIndex offset 0xffffffff size 0x4
static constexpr int32_t  unknownJoystickHatElementIdentifierStartIndex{static_cast<int32_t>(0xa0)};

/// @brief Field unknownJoystickMaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  unknownJoystickMaxAxes{static_cast<int32_t>(0x20)};

/// @brief Field unknownJoystickMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  unknownJoystickMaxButtons{static_cast<int32_t>(0x80)};

/// @brief Field unknownJoystickMaxHats offset 0xffffffff size 0x4
static constexpr int32_t  unknownJoystickMaxHats{static_cast<int32_t>(0x10)};

/// @brief Field unknownJoystickName offset 0xffffffff size 0x8
static constexpr ::ConstString  unknownJoystickName{u"Unknown Controller"};

/// @brief Field updateLoopTypeCount offset 0xffffffff size 0x4
static constexpr int32_t  updateLoopTypeCount{static_cast<int32_t>(0x3)};

/// @brief Field vendorId_sony offset 0xffffffff size 0x4
static constexpr int32_t  vendorId_sony{static_cast<int32_t>(0x54c)};

/// @brief Field webGLMaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  webGLMaxAxes{static_cast<int32_t>(0x80)};

/// @brief Field webGLMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  webGLMaxButtons{static_cast<int32_t>(0x100)};

/// @brief Field windowsGamingInputHatZeroValue offset 0xffffffff size 0x4
static constexpr int32_t  windowsGamingInputHatZeroValue{static_cast<int32_t>(0xffffffff)};

/// @brief Field windowsGamingInputMaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  windowsGamingInputMaxAxes{static_cast<int32_t>(0x20)};

/// @brief Field windowsGamingInputMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  windowsGamingInputMaxButtons{static_cast<int32_t>(0x80)};

/// @brief Field windowsGamingInputMaxCompoundElements offset 0xffffffff size 0x4
static constexpr int32_t  windowsGamingInputMaxCompoundElements{static_cast<int32_t>(0x20)};

/// @brief Field windowsGamingInputMaxHats offset 0xffffffff size 0x4
static constexpr int32_t  windowsGamingInputMaxHats{static_cast<int32_t>(0x10)};

/// @brief Field windowsGamingInputUnknownJoystickAxisCount offset 0xffffffff size 0x4
static constexpr int32_t  windowsGamingInputUnknownJoystickAxisCount{static_cast<int32_t>(0x20)};

/// @brief Field windowsGamingInputUnknownJoystickButtonCount offset 0xffffffff size 0x4
static constexpr int32_t  windowsGamingInputUnknownJoystickButtonCount{static_cast<int32_t>(0x80)};

/// @brief Field windowsGamingInputUnknownJoystickHatCount offset 0xffffffff size 0x4
static constexpr int32_t  windowsGamingInputUnknownJoystickHatCount{static_cast<int32_t>(0x10)};

/// @brief Field windowsUWPDirectionsPerHat offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPDirectionsPerHat{static_cast<int32_t>(0x8)};

/// @brief Field windowsUWPHatSpan offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPHatSpan{static_cast<int32_t>(0x1194)};

/// @brief Field windowsUWPHatSpan4Way offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPHatSpan4Way{static_cast<int32_t>(0x2328)};

/// @brief Field windowsUWPHatZeroValue offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPHatZeroValue{static_cast<int32_t>(0xffffffff)};

/// @brief Field windowsUWPLastDirectionValue offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPLastDirectionValue{static_cast<int32_t>(0x7b0c)};

/// @brief Field windowsUWPLastDirectionValue4Way offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPLastDirectionValue4Way{static_cast<int32_t>(0x6978)};

/// @brief Field windowsUWPMaxAxes offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPMaxAxes{static_cast<int32_t>(0x38)};

/// @brief Field windowsUWPMaxAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPMaxAxisValue{static_cast<int32_t>(0x7fff)};

/// @brief Field windowsUWPMaxButtons offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPMaxButtons{static_cast<int32_t>(0x100)};

/// @brief Field windowsUWPMaxHatValue offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPMaxHatValue{static_cast<int32_t>(0x8ca0)};

/// @brief Field windowsUWPMaxHats offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPMaxHats{static_cast<int32_t>(0x4)};

/// @brief Field windowsUWPMaxSliders offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPMaxSliders{static_cast<int32_t>(0x2)};

/// @brief Field windowsUWPMinAxisValue offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPMinAxisValue{static_cast<int32_t>(0xffff8000)};

/// @brief Field windowsUWPUnifiedMouseAxisCount offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPUnifiedMouseAxisCount{static_cast<int32_t>(0x3)};

/// @brief Field windowsUWPUnifiedMouseAxisUnityEquivalencyMultiplier offset 0xffffffff size 0x4
static constexpr float_t  windowsUWPUnifiedMouseAxisUnityEquivalencyMultiplier{static_cast<float_t>(0.5f)};

/// @brief Field windowsUWPUnifiedMouseButtonCount offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPUnifiedMouseButtonCount{static_cast<int32_t>(0x5)};

/// @brief Field windowsUWPUnknownJoystickHatButtonStartIndex offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPUnknownJoystickHatButtonStartIndex{static_cast<int32_t>(0x80)};

/// @brief Field windowsUWPUnknownJoystickHatCount offset 0xffffffff size 0x4
static constexpr int32_t  windowsUWPUnknownJoystickHatCount{static_cast<int32_t>(0x2)};

/// @brief Field xInputAllowedVibrationInterval offset 0xffffffff size 0x4
static constexpr float_t  xInputAllowedVibrationInterval{static_cast<float_t>(0.01f)};

/// @brief Field xInputControllerVibrationRenewalInterval offset 0xffffffff size 0x4
static constexpr float_t  xInputControllerVibrationRenewalInterval{static_cast<float_t>(1.5f)};

/// @brief Field xInputMaxVibration offset 0xffffffff size 0x4
static constexpr int32_t  xInputMaxVibration{static_cast<int32_t>(0xffff)};

/// @brief Field xInputMinVibration offset 0xffffffff size 0x4
static constexpr int32_t  xInputMinVibration{static_cast<int32_t>(0x0)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Consts) == 0x10, "Size mismatch!");

} // namespace end def Rewired
