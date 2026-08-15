#pragma once
// IWYU pragma private; include "Rewired/Data/ConfigVars.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Config/zzzz__KeyCombinationOverrideMode_def.hpp"
#include "Rewired/Config/zzzz__LogLevelFlags_def.hpp"
#include "Rewired/Config/zzzz__ThrottleCalibrationMode_def.hpp"
#include "Rewired/Config/zzzz__UpdateLoopSetting_def.hpp"
#include "Rewired/Config/zzzz__UpdateMode_def.hpp"
#include "Rewired/Platforms/zzzz__GameCoreScarlettPrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__GameCoreXboxOnePrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__LinuxStandalonePrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__OSXStandalonePrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__PS4PrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__PS5PrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__WebGLPrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__WindowsStandalonePrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__WindowsUWPPrimaryInputSource_def.hpp"
#include "Rewired/Platforms/zzzz__XboxOnePrimaryInputSource_def.hpp"
#include "Rewired/zzzz__AxisSensitivity2DType_def.hpp"
#include "Rewired/zzzz__AxisSensitivityType_def.hpp"
#include "Rewired/zzzz__DeadZone2DType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConfigVars)
namespace Rewired::Config {
struct EnhancedDeviceSupportDeviceType;
}
namespace Rewired::Config {
struct LogLevelFlags;
}
namespace Rewired::Config {
struct ThrottleCalibrationMode;
}
namespace Rewired::Config {
struct UpdateLoopSetting;
}
namespace Rewired::Data {
struct ConfigVars_AllPlatformVar;
}
namespace Rewired::Data {
class ConfigVars_EditorVars;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_GameCoreScarlett;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_GameCoreXboxOne;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_LinuxStandalone;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_OSXStandalone;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_PS5;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_WindowsStandalone;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_WindowsUWP;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars;
}
namespace Rewired::Data {
class ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA;
}
namespace Rewired::Data {
class ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG;
}
namespace Rewired::Data {
class ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ;
}
namespace Rewired::Data {
class IConfigVars_Internal;
}
namespace Rewired::Platforms {
struct EditorPlatform;
}
namespace Rewired::Platforms {
struct GameCoreScarlettPrimaryInputSource;
}
namespace Rewired::Platforms {
struct GameCoreXboxOnePrimaryInputSource;
}
namespace Rewired::Platforms {
struct LinuxStandalonePrimaryInputSource;
}
namespace Rewired::Platforms {
struct OSXStandalonePrimaryInputSource;
}
namespace Rewired::Platforms {
struct PS4PrimaryInputSource;
}
namespace Rewired::Platforms {
struct PS5PrimaryInputSource;
}
namespace Rewired::Platforms {
struct Platform;
}
namespace Rewired::Platforms {
struct WebGLPrimaryInputSource;
}
namespace Rewired::Platforms {
struct WebplayerPlatform;
}
namespace Rewired::Platforms {
struct WindowsStandalonePrimaryInputSource;
}
namespace Rewired::Platforms {
struct WindowsUWPPrimaryInputSource;
}
namespace Rewired::Platforms {
struct XboxOnePrimaryInputSource;
}
namespace Rewired::Utils::Classes::Data {
template<typename TKey>
class KeyedGetSetValueStore_1;
}
namespace Rewired {
struct AxisSensitivity2DType;
}
namespace Rewired {
struct AxisSensitivityType;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
struct DeadZone2DType;
}
namespace Rewired {
struct MultiBoolValue;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Data {
struct ConfigVars_AllPlatformVar;
}
namespace Rewired::Data {
class ConfigVars;
}
namespace Rewired::Data {
class ConfigVars_EditorVars;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_GameCoreScarlett;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_GameCoreXboxOne;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_LinuxStandalone;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_OSXStandalone;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_PS5;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_WindowsStandalone;
}
namespace Rewired::Data {
class ConfigVars_PlatformVars_WindowsUWP;
}
namespace Rewired::Data {
class ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA;
}
namespace Rewired::Data {
class ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG;
}
namespace Rewired::Data {
class ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ;
}
// Write type traits
MARK_VAL_T(::Rewired::Data::ConfigVars_AllPlatformVar);
MARK_REF_T(::Rewired::Data::ConfigVars*);
MARK_REF_T(::Rewired::Data::ConfigVars_EditorVars*);
MARK_REF_T(::Rewired::Data::ConfigVars_PlatformVars*);
MARK_REF_T(::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett*);
MARK_REF_T(::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne*);
MARK_REF_T(::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone*);
MARK_REF_T(::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone*);
MARK_REF_T(::Rewired::Data::ConfigVars_PlatformVars_PS5*);
MARK_REF_T(::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone*);
MARK_REF_T(::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP*);
MARK_REF_T(::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*);
MARK_REF_T(::Rewired::Data::ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG*);
MARK_REF_T(::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_AllPlatformVar, "Rewired.Data", "ConfigVars/AllPlatformVar");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars*, "Rewired.Data", "ConfigVars");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_EditorVars*, "Rewired.Data", "ConfigVars/EditorVars");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_PlatformVars*, "Rewired.Data", "ConfigVars/PlatformVars");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett*, "Rewired.Data", "ConfigVars/PlatformVars_GameCoreScarlett");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne*, "Rewired.Data", "ConfigVars/PlatformVars_GameCoreXboxOne");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone*, "Rewired.Data", "ConfigVars/PlatformVars_LinuxStandalone");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone*, "Rewired.Data", "ConfigVars/PlatformVars_OSXStandalone");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_PlatformVars_PS5*, "Rewired.Data", "ConfigVars/PlatformVars_PS5");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone*, "Rewired.Data", "ConfigVars/PlatformVars_WindowsStandalone");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP*, "Rewired.Data", "ConfigVars/PlatformVars_WindowsUWP");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*, "Rewired.Data", "ConfigVars/pljdBUONjhfKQgiZFfpQAZfurbjVA");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG*, "Rewired.Data", "ConfigVars/tgobutipgBRzzwLODlcNqbqQJQRG");
DEFINE_IL2CPP_CLASS(::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*, "Rewired.Data", "ConfigVars/wCuCruHZFVksIWXfZnezHvfbwGUJ");
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/tgobutipgBRzzwLODlcNqbqQJQRG
class CORDL_TYPE ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG(ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG(ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG const& ) = delete;

/// @brief Field ALxUAKvoAgCDWstqHCQzIYiqAYVbb offset 0xffffffff size 0x8
static constexpr ::ConstString  ALxUAKvoAgCDWstqHCQzIYiqAYVbb{u"activateActionButtonsOnNegativeValue"};

/// @brief Field AzOEwPpFWptgLbKIBYJnbogDRwbr offset 0xffffffff size 0x8
static constexpr ::ConstString  AzOEwPpFWptgLbKIBYJnbogDRwbr{u"defaultAxisSensitivityType"};

/// @brief Field CGjTElXerSjIfiSpHAOlLrZlotju offset 0xffffffff size 0x8
static constexpr ::ConstString  CGjTElXerSjIfiSpHAOlLrZlotju{u"runInEditMode"};

/// @brief Field KgsNfkpoyNHLukNWrulgaFysixvO offset 0xffffffff size 0x8
static constexpr ::ConstString  KgsNfkpoyNHLukNWrulgaFysixvO{u"updateLoop"};

/// @brief Field MvbKhbWJewlZAfFtHjpXdobFtklW offset 0xffffffff size 0x8
static constexpr ::ConstString  MvbKhbWJewlZAfFtHjpXdobFtklW{u"joystickRefreshRate"};

/// @brief Field NDdCcBiOZpvuLuecgIFEnzymOhYSA offset 0xffffffff size 0x8
static constexpr ::ConstString  NDdCcBiOZpvuLuecgIFEnzymOhYSA{u"throttleCalibrationMode"};

/// @brief Field NGAuYQvqNAAfnwJVoQOWlaFejmqY offset 0xffffffff size 0x8
static constexpr ::ConstString  NGAuYQvqNAAfnwJVoQOWlaFejmqY{u"windowsStandalone_useSteamRawInputControllerWorkaround"};

/// @brief Field NxNaVyHdJJkQbaUGOUDONFrOwKvDA offset 0xffffffff size 0x8
static constexpr ::ConstString  NxNaVyHdJJkQbaUGOUDONFrOwKvDA{u"windowsStandalonePrimaryInputSource"};

/// @brief Field RCmaFfLQZbkqfIHGbhcViMaiQtdn offset 0xffffffff size 0x8
static constexpr ::ConstString  RCmaFfLQZbkqfIHGbhcViMaiQtdn{u"disableKeyboard"};

/// @brief Field RlZfNweHikkVqJuhNTDoDBaPHTSZA offset 0xffffffff size 0x8
static constexpr ::ConstString  RlZfNweHikkVqJuhNTDoDBaPHTSZA{u"gameCoreScarlett_primaryInputSource"};

/// @brief Field SVBsVUyKXiDHBpIArciwsVrolikJ offset 0xffffffff size 0x8
static constexpr ::ConstString  SVBsVUyKXiDHBpIArciwsVrolikJ{u"ignoreInputWhenAppNotInFocus"};

/// @brief Field UxNgOpEbFzXktGMykLTeDFroPfKkA offset 0xffffffff size 0x8
static constexpr ::ConstString  UxNgOpEbFzXktGMykLTeDFroPfKkA{u"useNativeMouse"};

/// @brief Field WsuHtoVkejBdWWftJFROKDmbfSAKA offset 0xffffffff size 0x8
static constexpr ::ConstString  WsuHtoVkejBdWWftJFROKDmbfSAKA{u"force4WayHats"};

/// @brief Field XRLGCkXHqneEkZXdyjRqBYoxTZZfA offset 0xffffffff size 0x8
static constexpr ::ConstString  XRLGCkXHqneEkZXdyjRqBYoxTZZfA{u"logLevel"};

/// @brief Field XYLadXqXkdgzlFnSdYOPJsnFlPOyA offset 0xffffffff size 0x8
static constexpr ::ConstString  XYLadXqXkdgzlFnSdYOPJsnFlPOyA{u"logToScreen"};

/// @brief Field XvMkaagaASIzCOzsybefHhyacKfe offset 0xffffffff size 0x8
static constexpr ::ConstString  XvMkaagaASIzCOzsybefHhyacKfe{u"deferControllerConnectedEventsOnStart"};

/// @brief Field ZAOhJXjjYHqCJreooDRXwJQzNsHkA offset 0xffffffff size 0x8
static constexpr ::ConstString  ZAOhJXjjYHqCJreooDRXwJQzNsHkA{u"allowInputInEditorSceneView"};

/// @brief Field ZLNfjXPcTlZHhMACbpGZEgmbPQyl offset 0xffffffff size 0x8
static constexpr ::ConstString  ZLNfjXPcTlZHhMACbpGZEgmbPQyl{u"disableMouse"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2323};

/// @brief Field cacHHWeZhdqYzaSbxgbqAXUjjoZQA offset 0xffffffff size 0x8
static constexpr ::ConstString  cacHHWeZhdqYzaSbxgbqAXUjjoZQA{u"ps5_primaryInputSource"};

/// @brief Field cllbyriWcNgBvSTFGfVZpmUSMPrTA offset 0xffffffff size 0x8
static constexpr ::ConstString  cllbyriWcNgBvSTFGfVZpmUSMPrTA{u"assignJoysticksToPlayingPlayersOnly"};

/// @brief Field dfdBHhESlScGUlaAPEKHgJgclXtIb offset 0xffffffff size 0x8
static constexpr ::ConstString  dfdBHhESlScGUlaAPEKHgJgclXtIb{u"windowsUWP_primaryInputSource"};

/// @brief Field eNgaxBQoiswUSzSGGSluqHTtgye offset 0xffffffff size 0x8
static constexpr ::ConstString  eNgaxBQoiswUSzSGGSluqHTtgye{u"autoAssignJoysticks"};

/// @brief Field fSTzukgtEuGJZKQedksiTeDuIeAbA offset 0xffffffff size 0x8
static constexpr ::ConstString  fSTzukgtEuGJZKQedksiTeDuIeAbA{u"webGL_primaryInputSource"};

/// @brief Field hbdlUhWFPvdKpoJCfXGakOfMvCun offset 0xffffffff size 0x8
static constexpr ::ConstString  hbdlUhWFPvdKpoJCfXGakOfMvCun{u"distributeJoysticksEvenly"};

/// @brief Field hyCOmOKTEtQuRAmaTChbDaeMeRifA offset 0xffffffff size 0x8
static constexpr ::ConstString  hyCOmOKTEtQuRAmaTChbDaeMeRifA{u"gameCoreXboxOne_primaryInputSource"};

/// @brief Field iEIJXJbqpOfbPqCfQBzLcOsiXroqA offset 0xffffffff size 0x8
static constexpr ::ConstString  iEIJXJbqpOfbPqCfQBzLcOsiXroqA{u"xboxOne_primaryInputSource"};

/// @brief Field iJGvAREPLLVhNXTTdUEvIpQSWfAW offset 0xffffffff size 0x8
static constexpr ::ConstString  iJGvAREPLLVhNXTTdUEvIpQSWfAW{u"reassignJoystickToPreviousOwnerOnReconnect"};

/// @brief Field mnrLaxZHOBiEQFSaypEsBKQhRtdoc offset 0xffffffff size 0x8
static constexpr ::ConstString  mnrLaxZHOBiEQFSaypEsBKQhRtdoc{u"maxJoysticksPerPlayer"};

/// @brief Field nxeHxHTfrudtonMFrAeljoFxERxCb offset 0xffffffff size 0x8
static constexpr ::ConstString  nxeHxHTfrudtonMFrAeljoFxERxCb{u"useNativeKeyboard"};

/// @brief Field ohzsNRmEWduOFJNCgGRhgmPUwGZJ offset 0xffffffff size 0x8
static constexpr ::ConstString  ohzsNRmEWduOFJNCgGRhgmPUwGZJ{u"assignJoysticksBySystemId"};

/// @brief Field ovVwLLDLMZeTYmNUHfUtKgQLPkUw offset 0xffffffff size 0x8
static constexpr ::ConstString  ovVwLLDLMZeTYmNUHfUtKgQLPkUw{u"defaultJoystickAxis2DDeadZoneType"};

/// @brief Field pFQViAmXlqcejFlXkfIbWKcchAKg offset 0xffffffff size 0x8
static constexpr ::ConstString  pFQViAmXlqcejFlXkfIbWKcchAKg{u"ps4_assignJoysticksByPS4JoyId"};

/// @brief Field qPqTslAwHkxYPKOQRCynEyFhVAQG offset 0xffffffff size 0x8
static constexpr ::ConstString  qPqTslAwHkxYPKOQRCynEyFhVAQG{u"android_supportUnknownGamepads"};

/// @brief Field sBQmgyXphnbYERCitFrGNwBzRiSv offset 0xffffffff size 0x8
static constexpr ::ConstString  sBQmgyXphnbYERCitFrGNwBzRiSv{u"alwaysUseUnityInput"};

/// @brief Field sVUQYHtFSnySPHzafyUzcEaFRyFC offset 0xffffffff size 0x8
static constexpr ::ConstString  sVUQYHtFSnySPHzafyUzcEaFRyFC{u"osxStandalone_useEnhancedDeviceSupport"};

/// @brief Field siEgxRoiHGfuyvEGUOiGkypDrbgU offset 0xffffffff size 0x8
static constexpr ::ConstString  siEgxRoiHGfuyvEGUOiGkypDrbgU{u"useXInput"};

/// @brief Field wUEfydqkIYadZHbPidlkdGROGwhdA offset 0xffffffff size 0x8
static constexpr ::ConstString  wUEfydqkIYadZHbPidlkdGROGwhdA{u"useEnhancedDeviceSupport"};

/// @brief Field wcwvzwxRQcPHluGCaHCCkyTQUCfp offset 0xffffffff size 0x8
static constexpr ::ConstString  wcwvzwxRQcPHluGCaHCCkyTQUCfp{u"defaultJoystickAxis2DSensitivityType"};

/// @brief Field xrMMNkHFOvqGAlHoQGyGRtZtRjdN offset 0xffffffff size 0x8
static constexpr ::ConstString  xrMMNkHFOvqGAlHoQGyGRtZtRjdN{u"linux_primaryInputSource"};

/// @brief Field xulOCHGjBlCVmEHOBFnEmtIdcApg offset 0xffffffff size 0x8
static constexpr ::ConstString  xulOCHGjBlCVmEHOBFnEmtIdcApg{u"ps4_primaryInputSource"};

/// @brief Field yNPmJFvLTBxbcdjDwoHeBnVIZAoq offset 0xffffffff size 0x8
static constexpr ::ConstString  yNPmJFvLTBxbcdjDwoHeBnVIZAoq{u"useSteamControllerSupport"};

/// @brief Field ylTQdrgfnoCUkDkaiEQMlmvyJubyA offset 0xffffffff size 0x8
static constexpr ::ConstString  ylTQdrgfnoCUkDkaiEQMlmvyJubyA{u"osx_primaryInputSource"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Data::ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/PlatformVars
class CORDL_TYPE ConfigVars_PlatformVars : public ::System::Object {
public:
// Declarations
/// @brief Field disableKeyboard, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableKeyboard, put=__cordl_internal_set_disableKeyboard)) bool  disableKeyboard;

/// @brief Field disableMouse, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableMouse, put=__cordl_internal_set_disableMouse)) bool  disableMouse;

/// @brief Field ignoreInputWhenAppNotInFocus, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreInputWhenAppNotInFocus, put=__cordl_internal_set_ignoreInputWhenAppNotInFocus)) bool  ignoreInputWhenAppNotInFocus;

static inline ::Rewired::Data::ConfigVars_PlatformVars* New_ctor() ;

constexpr bool const& __cordl_internal_get_disableKeyboard() const;

constexpr bool& __cordl_internal_get_disableKeyboard() ;

constexpr bool const& __cordl_internal_get_disableMouse() const;

constexpr bool& __cordl_internal_get_disableMouse() ;

constexpr bool const& __cordl_internal_get_ignoreInputWhenAppNotInFocus() const;

constexpr bool& __cordl_internal_get_ignoreInputWhenAppNotInFocus() ;

constexpr void __cordl_internal_set_disableKeyboard(bool  value) ;

constexpr void __cordl_internal_set_disableMouse(bool  value) ;

constexpr void __cordl_internal_set_ignoreInputWhenAppNotInFocus(bool  value) ;

/// @brief Method .ctor, addr 0x181883130, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_PlatformVars() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_PlatformVars(ConfigVars_PlatformVars && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_PlatformVars(ConfigVars_PlatformVars const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2324};

/// @brief Field disableKeyboard, offset: 0x10, size: 0x1, def value: None
 bool  ___disableKeyboard;

/// @brief Field disableMouse, offset: 0x11, size: 0x1, def value: None
 bool  ___disableMouse;

/// @brief Field ignoreInputWhenAppNotInFocus, offset: 0x12, size: 0x1, def value: None
 bool  ___ignoreInputWhenAppNotInFocus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars, ___disableKeyboard) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars, ___disableMouse) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars, ___ignoreInputWhenAppNotInFocus) == 0x12, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_PlatformVars) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.ConfigVars::PlatformVars
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/PlatformVars_WindowsStandalone
class CORDL_TYPE ConfigVars_PlatformVars_WindowsStandalone : public ::Rewired::Data::ConfigVars_PlatformVars {
public:
// Declarations
/// @brief Field enhancedDeviceSupportExcludedDeviceTypes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes, put=__cordl_internal_set_enhancedDeviceSupportExcludedDeviceTypes)) ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  enhancedDeviceSupportExcludedDeviceTypes;

/// @brief Field joystickRefreshRate, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_joystickRefreshRate, put=__cordl_internal_set_joystickRefreshRate)) int32_t  joystickRefreshRate;

/// @brief Field useNativeKeyboard, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_useNativeKeyboard, put=__cordl_internal_set_useNativeKeyboard)) bool  useNativeKeyboard;

/// @brief Field useWindowsGamingInput, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_useWindowsGamingInput, put=__cordl_internal_set_useWindowsGamingInput)) bool  useWindowsGamingInput;

static inline ::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>* const& __cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*& __cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes() ;

constexpr int32_t const& __cordl_internal_get_joystickRefreshRate() const;

constexpr int32_t& __cordl_internal_get_joystickRefreshRate() ;

constexpr bool const& __cordl_internal_get_useNativeKeyboard() const;

constexpr bool& __cordl_internal_get_useNativeKeyboard() ;

constexpr bool const& __cordl_internal_get_useWindowsGamingInput() const;

constexpr bool& __cordl_internal_get_useWindowsGamingInput() ;

constexpr void __cordl_internal_set_enhancedDeviceSupportExcludedDeviceTypes(::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  value) ;

constexpr void __cordl_internal_set_joystickRefreshRate(int32_t  value) ;

constexpr void __cordl_internal_set_useNativeKeyboard(bool  value) ;

constexpr void __cordl_internal_set_useWindowsGamingInput(bool  value) ;

/// @brief Method .ctor, addr 0x181883150, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_PlatformVars_WindowsStandalone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_WindowsStandalone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_PlatformVars_WindowsStandalone(ConfigVars_PlatformVars_WindowsStandalone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_WindowsStandalone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_PlatformVars_WindowsStandalone(ConfigVars_PlatformVars_WindowsStandalone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2325};

/// @brief Field useNativeKeyboard, offset: 0x13, size: 0x1, def value: None
 bool  ___useNativeKeyboard;

/// @brief Field joystickRefreshRate, offset: 0x14, size: 0x4, def value: None
 int32_t  ___joystickRefreshRate;

/// @brief Field useWindowsGamingInput, offset: 0x18, size: 0x1, def value: None
 bool  ___useWindowsGamingInput;

/// @brief Field enhancedDeviceSupportExcludedDeviceTypes, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  ___enhancedDeviceSupportExcludedDeviceTypes;

/// @brief Size padding 0x30 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone, ___useNativeKeyboard) == 0x13, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone, ___joystickRefreshRate) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone, ___useWindowsGamingInput) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone, ___enhancedDeviceSupportExcludedDeviceTypes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.ConfigVars::PlatformVars
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/PlatformVars_OSXStandalone
class CORDL_TYPE ConfigVars_PlatformVars_OSXStandalone : public ::Rewired::Data::ConfigVars_PlatformVars {
public:
// Declarations
/// @brief Field assignJoysticksByUserId, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_assignJoysticksByUserId, put=__cordl_internal_set_assignJoysticksByUserId)) bool  assignJoysticksByUserId;

/// @brief Field enhancedDeviceSupportExcludedDeviceTypes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes, put=__cordl_internal_set_enhancedDeviceSupportExcludedDeviceTypes)) ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  enhancedDeviceSupportExcludedDeviceTypes;

/// @brief Field useAppleGameController, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_useAppleGameController, put=__cordl_internal_set_useAppleGameController)) bool  useAppleGameController;

static inline ::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone* New_ctor() ;

constexpr bool const& __cordl_internal_get_assignJoysticksByUserId() const;

constexpr bool& __cordl_internal_get_assignJoysticksByUserId() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>* const& __cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*& __cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes() ;

constexpr bool const& __cordl_internal_get_useAppleGameController() const;

constexpr bool& __cordl_internal_get_useAppleGameController() ;

constexpr void __cordl_internal_set_assignJoysticksByUserId(bool  value) ;

constexpr void __cordl_internal_set_enhancedDeviceSupportExcludedDeviceTypes(::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  value) ;

constexpr void __cordl_internal_set_useAppleGameController(bool  value) ;

/// @brief Method .ctor, addr 0x181883130, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_PlatformVars_OSXStandalone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_OSXStandalone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_PlatformVars_OSXStandalone(ConfigVars_PlatformVars_OSXStandalone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_OSXStandalone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_PlatformVars_OSXStandalone(ConfigVars_PlatformVars_OSXStandalone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2326};

/// @brief Field useAppleGameController, offset: 0x13, size: 0x1, def value: None
 bool  ___useAppleGameController;

/// @brief Field assignJoysticksByUserId, offset: 0x14, size: 0x1, def value: None
 bool  ___assignJoysticksByUserId;

/// @brief Field enhancedDeviceSupportExcludedDeviceTypes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  ___enhancedDeviceSupportExcludedDeviceTypes;

/// @brief Size padding 0x28 - 0x20 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone, ___useAppleGameController) == 0x13, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone, ___assignJoysticksByUserId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone, ___enhancedDeviceSupportExcludedDeviceTypes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.ConfigVars::PlatformVars
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/PlatformVars_LinuxStandalone
class CORDL_TYPE ConfigVars_PlatformVars_LinuxStandalone : public ::Rewired::Data::ConfigVars_PlatformVars {
public:
// Declarations
/// @brief Field enhancedDeviceSupportExcludedDeviceTypes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes, put=__cordl_internal_set_enhancedDeviceSupportExcludedDeviceTypes)) ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  enhancedDeviceSupportExcludedDeviceTypes;

/// @brief Field useEnhancedDeviceSupport, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_useEnhancedDeviceSupport, put=__cordl_internal_set_useEnhancedDeviceSupport)) bool  useEnhancedDeviceSupport;

static inline ::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>* const& __cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*& __cordl_internal_get_enhancedDeviceSupportExcludedDeviceTypes() ;

constexpr bool const& __cordl_internal_get_useEnhancedDeviceSupport() const;

constexpr bool& __cordl_internal_get_useEnhancedDeviceSupport() ;

constexpr void __cordl_internal_set_enhancedDeviceSupportExcludedDeviceTypes(::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  value) ;

constexpr void __cordl_internal_set_useEnhancedDeviceSupport(bool  value) ;

/// @brief Method .ctor, addr 0x181883140, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_PlatformVars_LinuxStandalone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_LinuxStandalone", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_PlatformVars_LinuxStandalone(ConfigVars_PlatformVars_LinuxStandalone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_LinuxStandalone", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_PlatformVars_LinuxStandalone(ConfigVars_PlatformVars_LinuxStandalone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2327};

/// @brief Field useEnhancedDeviceSupport, offset: 0x13, size: 0x1, def value: None
 bool  ___useEnhancedDeviceSupport;

/// @brief Field enhancedDeviceSupportExcludedDeviceTypes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  ___enhancedDeviceSupportExcludedDeviceTypes;

/// @brief Size padding 0x28 - 0x20 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone, ___useEnhancedDeviceSupport) == 0x13, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone, ___enhancedDeviceSupportExcludedDeviceTypes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.ConfigVars::PlatformVars
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/PlatformVars_WindowsUWP
class CORDL_TYPE ConfigVars_PlatformVars_WindowsUWP : public ::Rewired::Data::ConfigVars_PlatformVars {
public:
// Declarations
/// @brief Field useGamepadAPI, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_useGamepadAPI, put=__cordl_internal_set_useGamepadAPI)) bool  useGamepadAPI;

/// @brief Field useHIDAPI, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_useHIDAPI, put=__cordl_internal_set_useHIDAPI)) bool  useHIDAPI;

static inline ::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP* New_ctor() ;

constexpr bool const& __cordl_internal_get_useGamepadAPI() const;

constexpr bool& __cordl_internal_get_useGamepadAPI() ;

constexpr bool const& __cordl_internal_get_useHIDAPI() const;

constexpr bool& __cordl_internal_get_useHIDAPI() ;

constexpr void __cordl_internal_set_useGamepadAPI(bool  value) ;

constexpr void __cordl_internal_set_useHIDAPI(bool  value) ;

/// @brief Method .ctor, addr 0x18187ec60, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_PlatformVars_WindowsUWP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_WindowsUWP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_PlatformVars_WindowsUWP(ConfigVars_PlatformVars_WindowsUWP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_WindowsUWP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_PlatformVars_WindowsUWP(ConfigVars_PlatformVars_WindowsUWP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2328};

/// @brief Field useGamepadAPI, offset: 0x13, size: 0x1, def value: None
 bool  ___useGamepadAPI;

/// @brief Field useHIDAPI, offset: 0x14, size: 0x1, def value: None
 bool  ___useHIDAPI;

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP, ___useGamepadAPI) == 0x13, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP, ___useHIDAPI) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.ConfigVars::PlatformVars
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/PlatformVars_GameCoreXboxOne
class CORDL_TYPE ConfigVars_PlatformVars_GameCoreXboxOne : public ::Rewired::Data::ConfigVars_PlatformVars {
public:
// Declarations
/// @brief Field assignJoysticksByUserId, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_assignJoysticksByUserId, put=__cordl_internal_set_assignJoysticksByUserId)) bool  assignJoysticksByUserId;

static inline ::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne* New_ctor() ;

constexpr bool const& __cordl_internal_get_assignJoysticksByUserId() const;

constexpr bool& __cordl_internal_get_assignJoysticksByUserId() ;

constexpr void __cordl_internal_set_assignJoysticksByUserId(bool  value) ;

/// @brief Method .ctor, addr 0x181883130, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_PlatformVars_GameCoreXboxOne() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_GameCoreXboxOne", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_PlatformVars_GameCoreXboxOne(ConfigVars_PlatformVars_GameCoreXboxOne && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_GameCoreXboxOne", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_PlatformVars_GameCoreXboxOne(ConfigVars_PlatformVars_GameCoreXboxOne const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2329};

/// @brief Field assignJoysticksByUserId, offset: 0x13, size: 0x1, def value: None
 bool  ___assignJoysticksByUserId;

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne, ___assignJoysticksByUserId) == 0x13, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.ConfigVars::PlatformVars
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/PlatformVars_GameCoreScarlett
class CORDL_TYPE ConfigVars_PlatformVars_GameCoreScarlett : public ::Rewired::Data::ConfigVars_PlatformVars {
public:
// Declarations
/// @brief Field assignJoysticksByUserId, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_assignJoysticksByUserId, put=__cordl_internal_set_assignJoysticksByUserId)) bool  assignJoysticksByUserId;

static inline ::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett* New_ctor() ;

constexpr bool const& __cordl_internal_get_assignJoysticksByUserId() const;

constexpr bool& __cordl_internal_get_assignJoysticksByUserId() ;

constexpr void __cordl_internal_set_assignJoysticksByUserId(bool  value) ;

/// @brief Method .ctor, addr 0x181883130, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_PlatformVars_GameCoreScarlett() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_GameCoreScarlett", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_PlatformVars_GameCoreScarlett(ConfigVars_PlatformVars_GameCoreScarlett && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_GameCoreScarlett", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_PlatformVars_GameCoreScarlett(ConfigVars_PlatformVars_GameCoreScarlett const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2330};

/// @brief Field assignJoysticksByUserId, offset: 0x13, size: 0x1, def value: None
 bool  ___assignJoysticksByUserId;

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett, ___assignJoysticksByUserId) == 0x13, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.Data.ConfigVars::PlatformVars
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/PlatformVars_PS5
class CORDL_TYPE ConfigVars_PlatformVars_PS5 : public ::Rewired::Data::ConfigVars_PlatformVars {
public:
// Declarations
/// @brief Field assignJoysticksByPS5JoyId, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_assignJoysticksByPS5JoyId, put=__cordl_internal_set_assignJoysticksByPS5JoyId)) bool  assignJoysticksByPS5JoyId;

static inline ::Rewired::Data::ConfigVars_PlatformVars_PS5* New_ctor() ;

constexpr bool const& __cordl_internal_get_assignJoysticksByPS5JoyId() const;

constexpr bool& __cordl_internal_get_assignJoysticksByPS5JoyId() ;

constexpr void __cordl_internal_set_assignJoysticksByPS5JoyId(bool  value) ;

/// @brief Method .ctor, addr 0x181883140, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_PlatformVars_PS5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_PS5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_PlatformVars_PS5(ConfigVars_PlatformVars_PS5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_PlatformVars_PS5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_PlatformVars_PS5(ConfigVars_PlatformVars_PS5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2331};

/// @brief Field assignJoysticksByPS5JoyId, offset: 0x13, size: 0x1, def value: None
 bool  ___assignJoysticksByPS5JoyId;

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_PlatformVars_PS5, ___assignJoysticksByPS5JoyId) == 0x13, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_PlatformVars_PS5) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/EditorVars
class CORDL_TYPE ConfigVars_EditorVars : public ::System::Object {
public:
// Declarations
/// @brief Field exportConsts_actions, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_actions, put=__cordl_internal_set_exportConsts_actions)) bool  exportConsts_actions;

/// @brief Field exportConsts_actionsClassName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_actionsClassName, put=__cordl_internal_set_exportConsts_actionsClassName)) ::StringW  exportConsts_actionsClassName;

/// @brief Field exportConsts_actionsCreateClassesForActionCategories, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_actionsCreateClassesForActionCategories, put=__cordl_internal_set_exportConsts_actionsCreateClassesForActionCategories)) bool  exportConsts_actionsCreateClassesForActionCategories;

/// @brief Field exportConsts_actionsIncludeActionCategory, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_actionsIncludeActionCategory, put=__cordl_internal_set_exportConsts_actionsIncludeActionCategory)) bool  exportConsts_actionsIncludeActionCategory;

/// @brief Field exportConsts_allCapsConstantNames, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_allCapsConstantNames, put=__cordl_internal_set_exportConsts_allCapsConstantNames)) bool  exportConsts_allCapsConstantNames;

/// @brief Field exportConsts_customControllers, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_customControllers, put=__cordl_internal_set_exportConsts_customControllers)) bool  exportConsts_customControllers;

/// @brief Field exportConsts_customControllersAxesClassName, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_customControllersAxesClassName, put=__cordl_internal_set_exportConsts_customControllersAxesClassName)) ::StringW  exportConsts_customControllersAxesClassName;

/// @brief Field exportConsts_customControllersButtonsClassName, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_customControllersButtonsClassName, put=__cordl_internal_set_exportConsts_customControllersButtonsClassName)) ::StringW  exportConsts_customControllersButtonsClassName;

/// @brief Field exportConsts_customControllersClassName, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_customControllersClassName, put=__cordl_internal_set_exportConsts_customControllersClassName)) ::StringW  exportConsts_customControllersClassName;

/// @brief Field exportConsts_inputBehaviors, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_inputBehaviors, put=__cordl_internal_set_exportConsts_inputBehaviors)) bool  exportConsts_inputBehaviors;

/// @brief Field exportConsts_inputBehaviorsClassName, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_inputBehaviorsClassName, put=__cordl_internal_set_exportConsts_inputBehaviorsClassName)) ::StringW  exportConsts_inputBehaviorsClassName;

/// @brief Field exportConsts_layoutManagerRuleSets, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_layoutManagerRuleSets, put=__cordl_internal_set_exportConsts_layoutManagerRuleSets)) bool  exportConsts_layoutManagerRuleSets;

/// @brief Field exportConsts_layoutManagerRuleSetsClassName, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_layoutManagerRuleSetsClassName, put=__cordl_internal_set_exportConsts_layoutManagerRuleSetsClassName)) ::StringW  exportConsts_layoutManagerRuleSetsClassName;

/// @brief Field exportConsts_layouts, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_layouts, put=__cordl_internal_set_exportConsts_layouts)) bool  exportConsts_layouts;

/// @brief Field exportConsts_layoutsClassName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_layoutsClassName, put=__cordl_internal_set_exportConsts_layoutsClassName)) ::StringW  exportConsts_layoutsClassName;

/// @brief Field exportConsts_mapCategories, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_mapCategories, put=__cordl_internal_set_exportConsts_mapCategories)) bool  exportConsts_mapCategories;

/// @brief Field exportConsts_mapCategoriesClassName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_mapCategoriesClassName, put=__cordl_internal_set_exportConsts_mapCategoriesClassName)) ::StringW  exportConsts_mapCategoriesClassName;

/// @brief Field exportConsts_mapEnablerRuleSets, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_mapEnablerRuleSets, put=__cordl_internal_set_exportConsts_mapEnablerRuleSets)) bool  exportConsts_mapEnablerRuleSets;

/// @brief Field exportConsts_mapEnablerRuleSetsClassName, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_mapEnablerRuleSetsClassName, put=__cordl_internal_set_exportConsts_mapEnablerRuleSetsClassName)) ::StringW  exportConsts_mapEnablerRuleSetsClassName;

/// @brief Field exportConsts_namespace, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_namespace, put=__cordl_internal_set_exportConsts_namespace)) ::StringW  exportConsts_namespace;

/// @brief Field exportConsts_parentClassName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_parentClassName, put=__cordl_internal_set_exportConsts_parentClassName)) ::StringW  exportConsts_parentClassName;

/// @brief Field exportConsts_players, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_players, put=__cordl_internal_set_exportConsts_players)) bool  exportConsts_players;

/// @brief Field exportConsts_playersClassName, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_exportConsts_playersClassName, put=__cordl_internal_set_exportConsts_playersClassName)) ::StringW  exportConsts_playersClassName;

/// @brief Field exportConsts_useNamespace, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_useNamespace, put=__cordl_internal_set_exportConsts_useNamespace)) bool  exportConsts_useNamespace;

/// @brief Field exportConsts_useParentClass, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_exportConsts_useParentClass, put=__cordl_internal_set_exportConsts_useParentClass)) bool  exportConsts_useParentClass;

static inline ::Rewired::Data::ConfigVars_EditorVars* New_ctor() ;

constexpr bool const& __cordl_internal_get_exportConsts_actions() const;

constexpr bool& __cordl_internal_get_exportConsts_actions() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_actionsClassName() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_actionsClassName() ;

constexpr bool const& __cordl_internal_get_exportConsts_actionsCreateClassesForActionCategories() const;

constexpr bool& __cordl_internal_get_exportConsts_actionsCreateClassesForActionCategories() ;

constexpr bool const& __cordl_internal_get_exportConsts_actionsIncludeActionCategory() const;

constexpr bool& __cordl_internal_get_exportConsts_actionsIncludeActionCategory() ;

constexpr bool const& __cordl_internal_get_exportConsts_allCapsConstantNames() const;

constexpr bool& __cordl_internal_get_exportConsts_allCapsConstantNames() ;

constexpr bool const& __cordl_internal_get_exportConsts_customControllers() const;

constexpr bool& __cordl_internal_get_exportConsts_customControllers() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_customControllersAxesClassName() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_customControllersAxesClassName() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_customControllersButtonsClassName() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_customControllersButtonsClassName() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_customControllersClassName() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_customControllersClassName() ;

constexpr bool const& __cordl_internal_get_exportConsts_inputBehaviors() const;

constexpr bool& __cordl_internal_get_exportConsts_inputBehaviors() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_inputBehaviorsClassName() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_inputBehaviorsClassName() ;

constexpr bool const& __cordl_internal_get_exportConsts_layoutManagerRuleSets() const;

constexpr bool& __cordl_internal_get_exportConsts_layoutManagerRuleSets() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_layoutManagerRuleSetsClassName() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_layoutManagerRuleSetsClassName() ;

constexpr bool const& __cordl_internal_get_exportConsts_layouts() const;

constexpr bool& __cordl_internal_get_exportConsts_layouts() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_layoutsClassName() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_layoutsClassName() ;

constexpr bool const& __cordl_internal_get_exportConsts_mapCategories() const;

constexpr bool& __cordl_internal_get_exportConsts_mapCategories() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_mapCategoriesClassName() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_mapCategoriesClassName() ;

constexpr bool const& __cordl_internal_get_exportConsts_mapEnablerRuleSets() const;

constexpr bool& __cordl_internal_get_exportConsts_mapEnablerRuleSets() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_mapEnablerRuleSetsClassName() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_mapEnablerRuleSetsClassName() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_namespace() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_namespace() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_parentClassName() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_parentClassName() ;

constexpr bool const& __cordl_internal_get_exportConsts_players() const;

constexpr bool& __cordl_internal_get_exportConsts_players() ;

constexpr ::StringW const& __cordl_internal_get_exportConsts_playersClassName() const;

constexpr ::StringW& __cordl_internal_get_exportConsts_playersClassName() ;

constexpr bool const& __cordl_internal_get_exportConsts_useNamespace() const;

constexpr bool& __cordl_internal_get_exportConsts_useNamespace() ;

constexpr bool const& __cordl_internal_get_exportConsts_useParentClass() const;

constexpr bool& __cordl_internal_get_exportConsts_useParentClass() ;

constexpr void __cordl_internal_set_exportConsts_actions(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_actionsClassName(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_actionsCreateClassesForActionCategories(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_actionsIncludeActionCategory(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_allCapsConstantNames(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_customControllers(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_customControllersAxesClassName(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_customControllersButtonsClassName(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_customControllersClassName(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_inputBehaviors(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_inputBehaviorsClassName(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_layoutManagerRuleSets(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_layoutManagerRuleSetsClassName(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_layouts(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_layoutsClassName(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_mapCategories(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_mapCategoriesClassName(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_mapEnablerRuleSets(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_mapEnablerRuleSetsClassName(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_namespace(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_parentClassName(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_players(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_playersClassName(::StringW  value) ;

constexpr void __cordl_internal_set_exportConsts_useNamespace(bool  value) ;

constexpr void __cordl_internal_set_exportConsts_useParentClass(bool  value) ;

/// @brief Method .ctor, addr 0x18187fe70, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_EditorVars() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_EditorVars", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_EditorVars(ConfigVars_EditorVars && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_EditorVars", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_EditorVars(ConfigVars_EditorVars const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2332};

/// @brief Field exportConsts_useParentClass, offset: 0x10, size: 0x1, def value: None
 bool  ___exportConsts_useParentClass;

/// @brief Field exportConsts_parentClassName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___exportConsts_parentClassName;

/// @brief Field exportConsts_useNamespace, offset: 0x20, size: 0x1, def value: None
 bool  ___exportConsts_useNamespace;

/// @brief Field exportConsts_namespace, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___exportConsts_namespace;

/// @brief Field exportConsts_actions, offset: 0x30, size: 0x1, def value: None
 bool  ___exportConsts_actions;

/// @brief Field exportConsts_actionsClassName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___exportConsts_actionsClassName;

/// @brief Field exportConsts_actionsIncludeActionCategory, offset: 0x40, size: 0x1, def value: None
 bool  ___exportConsts_actionsIncludeActionCategory;

/// @brief Field exportConsts_actionsCreateClassesForActionCategories, offset: 0x41, size: 0x1, def value: None
 bool  ___exportConsts_actionsCreateClassesForActionCategories;

/// @brief Field exportConsts_mapCategories, offset: 0x42, size: 0x1, def value: None
 bool  ___exportConsts_mapCategories;

/// @brief Field exportConsts_mapCategoriesClassName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___exportConsts_mapCategoriesClassName;

/// @brief Field exportConsts_layouts, offset: 0x50, size: 0x1, def value: None
 bool  ___exportConsts_layouts;

/// @brief Field exportConsts_layoutsClassName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___exportConsts_layoutsClassName;

/// @brief Field exportConsts_players, offset: 0x60, size: 0x1, def value: None
 bool  ___exportConsts_players;

/// @brief Field exportConsts_playersClassName, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___exportConsts_playersClassName;

/// @brief Field exportConsts_inputBehaviors, offset: 0x70, size: 0x1, def value: None
 bool  ___exportConsts_inputBehaviors;

/// @brief Field exportConsts_inputBehaviorsClassName, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___exportConsts_inputBehaviorsClassName;

/// @brief Field exportConsts_customControllers, offset: 0x80, size: 0x1, def value: None
 bool  ___exportConsts_customControllers;

/// @brief Field exportConsts_customControllersClassName, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___exportConsts_customControllersClassName;

/// @brief Field exportConsts_customControllersAxesClassName, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___exportConsts_customControllersAxesClassName;

/// @brief Field exportConsts_customControllersButtonsClassName, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___exportConsts_customControllersButtonsClassName;

/// @brief Field exportConsts_layoutManagerRuleSets, offset: 0xa0, size: 0x1, def value: None
 bool  ___exportConsts_layoutManagerRuleSets;

/// @brief Field exportConsts_layoutManagerRuleSetsClassName, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___exportConsts_layoutManagerRuleSetsClassName;

/// @brief Field exportConsts_mapEnablerRuleSets, offset: 0xb0, size: 0x1, def value: None
 bool  ___exportConsts_mapEnablerRuleSets;

/// @brief Field exportConsts_mapEnablerRuleSetsClassName, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___exportConsts_mapEnablerRuleSetsClassName;

/// @brief Field exportConsts_allCapsConstantNames, offset: 0xc0, size: 0x1, def value: None
 bool  ___exportConsts_allCapsConstantNames;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_useParentClass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_parentClassName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_useNamespace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_namespace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_actions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_actionsClassName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_actionsIncludeActionCategory) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_actionsCreateClassesForActionCategories) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_mapCategories) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_mapCategoriesClassName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_layouts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_layoutsClassName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_players) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_playersClassName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_inputBehaviors) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_inputBehaviorsClassName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_customControllers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_customControllersClassName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_customControllersAxesClassName) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_customControllersButtonsClassName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_layoutManagerRuleSets) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_layoutManagerRuleSetsClassName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_mapEnablerRuleSets) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_mapEnablerRuleSetsClassName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_EditorVars, ___exportConsts_allCapsConstantNames) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_EditorVars) == 0xc8, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/pljdBUONjhfKQgiZFfpQAZfurbjVA
class CORDL_TYPE ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA : public ::System::Object {
public:
// Declarations
/// @brief Field aZpBvklAbWbaBtvtNfcgaQowMzrkA, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_aZpBvklAbWbaBtvtNfcgaQowMzrkA, put=__cordl_internal_set_aZpBvklAbWbaBtvtNfcgaQowMzrkA)) ::StringW  aZpBvklAbWbaBtvtNfcgaQowMzrkA;

/// @brief Field qoNNkkrmHyMmJegDKHkbwBdPdqXA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_qoNNkkrmHyMmJegDKHkbwBdPdqXA, put=__cordl_internal_set_qoNNkkrmHyMmJegDKHkbwBdPdqXA)) ::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*  qoNNkkrmHyMmJegDKHkbwBdPdqXA;

static inline ::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA* New_ctor(::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::StringW const& __cordl_internal_get_aZpBvklAbWbaBtvtNfcgaQowMzrkA() const;

constexpr ::StringW& __cordl_internal_get_aZpBvklAbWbaBtvtNfcgaQowMzrkA() ;

constexpr ::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>* const& __cordl_internal_get_qoNNkkrmHyMmJegDKHkbwBdPdqXA() const;

constexpr ::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*& __cordl_internal_get_qoNNkkrmHyMmJegDKHkbwBdPdqXA() ;

constexpr void __cordl_internal_set_aZpBvklAbWbaBtvtNfcgaQowMzrkA(::StringW  value) ;

constexpr void __cordl_internal_set_qoNNkkrmHyMmJegDKHkbwBdPdqXA(::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*  _cordl_fixed_empty_name_whitespace, ::StringW  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA(ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA(ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2333};

/// @brief Field qoNNkkrmHyMmJegDKHkbwBdPdqXA, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::Rewired::Data::ConfigVars_PlatformVars*>*  ___qoNNkkrmHyMmJegDKHkbwBdPdqXA;

/// @brief Field aZpBvklAbWbaBtvtNfcgaQowMzrkA, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___aZpBvklAbWbaBtvtNfcgaQowMzrkA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA, ___qoNNkkrmHyMmJegDKHkbwBdPdqXA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA, ___aZpBvklAbWbaBtvtNfcgaQowMzrkA) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars/wCuCruHZFVksIWXfZnezHvfbwGUJ
class CORDL_TYPE ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ : public ::System::Object {
public:
// Declarations
/// @brief Field ACUqIBxnbgphkOMYlvPzUhnQutam, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ACUqIBxnbgphkOMYlvPzUhnQutam, put=__cordl_internal_set_ACUqIBxnbgphkOMYlvPzUhnQutam)) ::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*  ACUqIBxnbgphkOMYlvPzUhnQutam;

/// @brief Field ScuMLcCuxLgtysqqhUzecltYEkrC, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScuMLcCuxLgtysqqhUzecltYEkrC, put=__cordl_internal_set_ScuMLcCuxLgtysqqhUzecltYEkrC)) ::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*  ScuMLcCuxLgtysqqhUzecltYEkrC;

static inline ::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ* New_ctor(::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*  _cordl_fixed_empty_name_whitespace, ::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>* const& __cordl_internal_get_ACUqIBxnbgphkOMYlvPzUhnQutam() const;

constexpr ::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*& __cordl_internal_get_ACUqIBxnbgphkOMYlvPzUhnQutam() ;

constexpr ::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>* const& __cordl_internal_get_ScuMLcCuxLgtysqqhUzecltYEkrC() const;

constexpr ::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*& __cordl_internal_get_ScuMLcCuxLgtysqqhUzecltYEkrC() ;

constexpr void __cordl_internal_set_ACUqIBxnbgphkOMYlvPzUhnQutam(::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*  value) ;

constexpr void __cordl_internal_set_ScuMLcCuxLgtysqqhUzecltYEkrC(::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0x1803224a0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*  _cordl_fixed_empty_name_whitespace, ::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ(ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ(ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2334};

/// @brief Field ScuMLcCuxLgtysqqhUzecltYEkrC, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<::Rewired::Platforms::Platform,::System::Object*>*  ___ScuMLcCuxLgtysqqhUzecltYEkrC;

/// @brief Field ACUqIBxnbgphkOMYlvPzUhnQutam, offset: 0x18, size: 0x8, def value: None
 ::System::Action_2<::Rewired::Platforms::Platform,::System::Object*>*  ___ACUqIBxnbgphkOMYlvPzUhnQutam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ, ___ScuMLcCuxLgtysqqhUzecltYEkrC) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ, ___ACUqIBxnbgphkOMYlvPzUhnQutam) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies 
namespace Rewired::Data {
// Is value type: true
// CS Name: Rewired.Data.ConfigVars/AllPlatformVar
struct CORDL_TYPE ConfigVars_AllPlatformVar {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConfigVars_AllPlatformVar_Unwrapped
enum struct __ConfigVars_AllPlatformVar_Unwrapped : int32_t {
__E_DisableKeyboard = static_cast<int32_t>(0x0),
__E_IgnoreInputWhenAppNotInFocus = static_cast<int32_t>(0x1),
__E_DisableMouse = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConfigVars_AllPlatformVar_Unwrapped () const noexcept {
return static_cast<__ConfigVars_AllPlatformVar_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars_AllPlatformVar() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConfigVars_AllPlatformVar(int32_t  value__) noexcept;

/// @brief Field DisableKeyboard value: I32(0)
static ::Rewired::Data::ConfigVars_AllPlatformVar const DisableKeyboard;

/// @brief Field DisableMouse value: I32(2)
static ::Rewired::Data::ConfigVars_AllPlatformVar const DisableMouse;

/// @brief Field IgnoreInputWhenAppNotInFocus value: I32(1)
static ::Rewired::Data::ConfigVars_AllPlatformVar const IgnoreInputWhenAppNotInFocus;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2335};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars_AllPlatformVar, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars_AllPlatformVar) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies Rewired.AxisSensitivity2DType, Rewired.AxisSensitivityType, Rewired.Config.KeyCombinationOverrideMode, Rewired.Config.LogLevelFlags, Rewired.Config.ThrottleCalibrationMode, Rewired.Config.UpdateLoopSetting, Rewired.Config.UpdateMode, Rewired.DeadZone2DType, Rewired.Platforms.GameCoreScarlettPrimaryInputSource, Rewired.Platforms.GameCoreXboxOnePrimaryInputSource, Rewired.Platforms.LinuxStandalonePrimaryInputSource, Rewired.Platforms.OSXStandalonePrimaryInputSource, Rewired.Platforms.PS4PrimaryInputSource, Rewired.Platforms.PS5PrimaryInputSource, Rewired.Platforms.WebGLPrimaryInputSource, Rewired.Platforms.WindowsStandalonePrimaryInputSource, Rewired.Platforms.WindowsUWPPrimaryInputSource, Rewired.Platforms.XboxOnePrimaryInputSource, System.Object
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.ConfigVars
class CORDL_TYPE ConfigVars : public ::System::Object {
public:
// Declarations
using AllPlatformVar = ::Rewired::Data::ConfigVars_AllPlatformVar;

using EditorVars = ::Rewired::Data::ConfigVars_EditorVars;

using PlatformVars = ::Rewired::Data::ConfigVars_PlatformVars;

using PlatformVars_GameCoreScarlett = ::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett;

using PlatformVars_GameCoreXboxOne = ::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne;

using PlatformVars_LinuxStandalone = ::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone;

using PlatformVars_OSXStandalone = ::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone;

using PlatformVars_PS5 = ::Rewired::Data::ConfigVars_PlatformVars_PS5;

using PlatformVars_WindowsStandalone = ::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone;

using PlatformVars_WindowsUWP = ::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP;

using pljdBUONjhfKQgiZFfpQAZfurbjVA = ::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA;

using tgobutipgBRzzwLODlcNqbqQJQRG = ::Rewired::Data::ConfigVars_tgobutipgBRzzwLODlcNqbqQJQRG;

using wCuCruHZFVksIWXfZnezHvfbwGUJ = ::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ;

 __declspec(property(get=Rewired_Data_IConfigVars_Internal_get_values)) ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>*  Rewired_Data_IConfigVars_Internal_values;

/// @brief Field __configVarsValues, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get___configVarsValues, put=__cordl_internal_set___configVarsValues)) ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>*  __configVarsValues;

/// @brief Field __getSetPlatformVariableDict, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get___getSetPlatformVariableDict, put=__cordl_internal_set___getSetPlatformVariableDict)) ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>*  __getSetPlatformVariableDict;

/// @brief Field __platformVarsDict, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get___platformVarsDict, put=__cordl_internal_set___platformVarsDict)) ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>*  __platformVarsDict;

/// @brief Field __valueDelegates, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get___valueDelegates, put=__cordl_internal_set___valueDelegates)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  __valueDelegates;

/// @brief Field activateActionButtonsOnNegativeValue, offset 0xfc, size 0x1 
 __declspec(property(get=__cordl_internal_get_activateActionButtonsOnNegativeValue, put=__cordl_internal_set_activateActionButtonsOnNegativeValue)) bool  activateActionButtonsOnNegativeValue;

/// @brief Field allowInputInEditorSceneView, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowInputInEditorSceneView, put=__cordl_internal_set_allowInputInEditorSceneView)) bool  allowInputInEditorSceneView;

/// @brief Field alwaysUseUnityInput, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysUseUnityInput, put=__cordl_internal_set_alwaysUseUnityInput)) bool  alwaysUseUnityInput;

/// @brief Field android_supportUnknownGamepads, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_android_supportUnknownGamepads, put=__cordl_internal_set_android_supportUnknownGamepads)) bool  android_supportUnknownGamepads;

/// @brief Field assignJoysticksToPlayingPlayersOnly, offset 0xe5, size 0x1 
 __declspec(property(get=__cordl_internal_get_assignJoysticksToPlayingPlayersOnly, put=__cordl_internal_set_assignJoysticksToPlayingPlayersOnly)) bool  assignJoysticksToPlayingPlayersOnly;

/// @brief Field autoAssignJoysticks, offset 0xe4, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoAssignJoysticks, put=__cordl_internal_set_autoAssignJoysticks)) bool  autoAssignJoysticks;

/// @brief Field defaultAxisSensitivityType, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultAxisSensitivityType, put=__cordl_internal_set_defaultAxisSensitivityType)) ::Rewired::AxisSensitivityType  defaultAxisSensitivityType;

/// @brief Field defaultJoystickAxis2DDeadZoneType, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultJoystickAxis2DDeadZoneType, put=__cordl_internal_set_defaultJoystickAxis2DDeadZoneType)) ::Rewired::DeadZone2DType  defaultJoystickAxis2DDeadZoneType;

/// @brief Field defaultJoystickAxis2DSensitivityType, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultJoystickAxis2DSensitivityType, put=__cordl_internal_set_defaultJoystickAxis2DSensitivityType)) ::Rewired::AxisSensitivity2DType  defaultJoystickAxis2DSensitivityType;

/// @brief Field deferControllerConnectedEventsOnStart, offset 0xfd, size 0x1 
 __declspec(property(get=__cordl_internal_get_deferControllerConnectedEventsOnStart, put=__cordl_internal_set_deferControllerConnectedEventsOnStart)) bool  deferControllerConnectedEventsOnStart;

/// @brief Field distributeJoysticksEvenly, offset 0xe6, size 0x1 
 __declspec(property(get=__cordl_internal_get_distributeJoysticksEvenly, put=__cordl_internal_set_distributeJoysticksEvenly)) bool  distributeJoysticksEvenly;

/// @brief Field editorSettings, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_editorSettings, put=__cordl_internal_set_editorSettings)) ::Rewired::Data::ConfigVars_EditorVars*  editorSettings;

/// @brief Field force4WayHats, offset 0xf4, size 0x1 
 __declspec(property(get=__cordl_internal_get_force4WayHats, put=__cordl_internal_set_force4WayHats)) bool  force4WayHats;

/// @brief Field gameCoreScarlett_primaryInputSource, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameCoreScarlett_primaryInputSource, put=__cordl_internal_set_gameCoreScarlett_primaryInputSource)) ::Rewired::Platforms::GameCoreScarlettPrimaryInputSource  gameCoreScarlett_primaryInputSource;

/// @brief Field gameCoreXboxOne_primaryInputSource, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameCoreXboxOne_primaryInputSource, put=__cordl_internal_set_gameCoreXboxOne_primaryInputSource)) ::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource  gameCoreXboxOne_primaryInputSource;

/// @brief Field generateKeyEventsOnKeyCombinationOverride, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_generateKeyEventsOnKeyCombinationOverride, put=__cordl_internal_set_generateKeyEventsOnKeyCombinationOverride)) bool  generateKeyEventsOnKeyCombinationOverride;

 __declspec(property(get=get_getSetPlatformVariableDict)) ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>*  getSetPlatformVariableDict;

/// @brief Field keyCombinationOverrideMode, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_keyCombinationOverrideMode, put=__cordl_internal_set_keyCombinationOverrideMode)) ::Rewired::Config::KeyCombinationOverrideMode  keyCombinationOverrideMode;

/// @brief Field linux_primaryInputSource, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_linux_primaryInputSource, put=__cordl_internal_set_linux_primaryInputSource)) ::Rewired::Platforms::LinuxStandalonePrimaryInputSource  linux_primaryInputSource;

/// @brief Field logLevel, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_logLevel, put=__cordl_internal_set_logLevel)) ::Rewired::Config::LogLevelFlags  logLevel;

/// @brief Field logToScreen, offset 0x4b, size 0x1 
 __declspec(property(get=__cordl_internal_get_logToScreen, put=__cordl_internal_set_logToScreen)) bool  logToScreen;

/// @brief Field maxJoysticksPerPlayer, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxJoysticksPerPlayer, put=__cordl_internal_set_maxJoysticksPerPlayer)) int32_t  maxJoysticksPerPlayer;

/// @brief Field osxStandalone_useEnhancedDeviceSupport, offset 0x47, size 0x1 
 __declspec(property(get=__cordl_internal_get_osxStandalone_useEnhancedDeviceSupport, put=__cordl_internal_set_osxStandalone_useEnhancedDeviceSupport)) bool  osxStandalone_useEnhancedDeviceSupport;

/// @brief Field osx_primaryInputSource, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_osx_primaryInputSource, put=__cordl_internal_set_osx_primaryInputSource)) ::Rewired::Platforms::OSXStandalonePrimaryInputSource  osx_primaryInputSource;

 __declspec(property(get=get_platformVarsDict)) ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>*  platformVarsDict;

/// @brief Field platformVars_android, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_android, put=__cordl_internal_set_platformVars_android)) ::Rewired::Data::ConfigVars_PlatformVars*  platformVars_android;

/// @brief Field platformVars_gameCoreScarlett, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_gameCoreScarlett, put=__cordl_internal_set_platformVars_gameCoreScarlett)) ::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett*  platformVars_gameCoreScarlett;

/// @brief Field platformVars_gameCoreXboxOne, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_gameCoreXboxOne, put=__cordl_internal_set_platformVars_gameCoreXboxOne)) ::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne*  platformVars_gameCoreXboxOne;

/// @brief Field platformVars_iOS, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_iOS, put=__cordl_internal_set_platformVars_iOS)) ::Rewired::Data::ConfigVars_PlatformVars*  platformVars_iOS;

/// @brief Field platformVars_linuxStandalone, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_linuxStandalone, put=__cordl_internal_set_platformVars_linuxStandalone)) ::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone*  platformVars_linuxStandalone;

/// @brief Field platformVars_osxStandalone, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_osxStandalone, put=__cordl_internal_set_platformVars_osxStandalone)) ::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone*  platformVars_osxStandalone;

/// @brief Field platformVars_ps4, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_ps4, put=__cordl_internal_set_platformVars_ps4)) ::Rewired::Data::ConfigVars_PlatformVars*  platformVars_ps4;

/// @brief Field platformVars_ps5, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_ps5, put=__cordl_internal_set_platformVars_ps5)) ::Rewired::Data::ConfigVars_PlatformVars_PS5*  platformVars_ps5;

/// @brief Field platformVars_psVita, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_psVita, put=__cordl_internal_set_platformVars_psVita)) ::Rewired::Data::ConfigVars_PlatformVars*  platformVars_psVita;

/// @brief Field platformVars_switch, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_switch, put=__cordl_internal_set_platformVars_switch)) ::Rewired::Data::ConfigVars_PlatformVars*  platformVars_switch;

/// @brief Field platformVars_switch2, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_switch2, put=__cordl_internal_set_platformVars_switch2)) ::Rewired::Data::ConfigVars_PlatformVars*  platformVars_switch2;

/// @brief Field platformVars_tvOS, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_tvOS, put=__cordl_internal_set_platformVars_tvOS)) ::Rewired::Data::ConfigVars_PlatformVars*  platformVars_tvOS;

/// @brief Field platformVars_unknown, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_unknown, put=__cordl_internal_set_platformVars_unknown)) ::Rewired::Data::ConfigVars_PlatformVars*  platformVars_unknown;

/// @brief Field platformVars_webGL, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_webGL, put=__cordl_internal_set_platformVars_webGL)) ::Rewired::Data::ConfigVars_PlatformVars*  platformVars_webGL;

/// @brief Field platformVars_windowsStandalone, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_windowsStandalone, put=__cordl_internal_set_platformVars_windowsStandalone)) ::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone*  platformVars_windowsStandalone;

/// @brief Field platformVars_windowsUWP, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_windowsUWP, put=__cordl_internal_set_platformVars_windowsUWP)) ::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP*  platformVars_windowsUWP;

/// @brief Field platformVars_xboxOne, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_platformVars_xboxOne, put=__cordl_internal_set_platformVars_xboxOne)) ::Rewired::Data::ConfigVars_PlatformVars*  platformVars_xboxOne;

/// @brief Field ps4_assignJoysticksByPS4JoyId, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_ps4_assignJoysticksByPS4JoyId, put=__cordl_internal_set_ps4_assignJoysticksByPS4JoyId)) bool  ps4_assignJoysticksByPS4JoyId;

/// @brief Field ps4_primaryInputSource, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ps4_primaryInputSource, put=__cordl_internal_set_ps4_primaryInputSource)) ::Rewired::Platforms::PS4PrimaryInputSource  ps4_primaryInputSource;

/// @brief Field ps5_primaryInputSource, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ps5_primaryInputSource, put=__cordl_internal_set_ps5_primaryInputSource)) ::Rewired::Platforms::PS5PrimaryInputSource  ps5_primaryInputSource;

/// @brief Field reassignJoystickToPreviousOwnerOnReconnect, offset 0xe7, size 0x1 
 __declspec(property(get=__cordl_internal_get_reassignJoystickToPreviousOwnerOnReconnect, put=__cordl_internal_set_reassignJoystickToPreviousOwnerOnReconnect)) bool  reassignJoystickToPreviousOwnerOnReconnect;

/// @brief Field runInEditMode, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_runInEditMode, put=__cordl_internal_set_runInEditMode)) bool  runInEditMode;

/// @brief Field throttleCalibrationMode, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_throttleCalibrationMode, put=__cordl_internal_set_throttleCalibrationMode)) ::Rewired::Config::ThrottleCalibrationMode  throttleCalibrationMode;

/// @brief Field unityUsePhysicalKeys, offset 0x4e, size 0x1 
 __declspec(property(get=__cordl_internal_get_unityUsePhysicalKeys, put=__cordl_internal_set_unityUsePhysicalKeys)) bool  unityUsePhysicalKeys;

/// @brief Field updateLoop, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateLoop, put=__cordl_internal_set_updateLoop)) ::Rewired::Config::UpdateLoopSetting  updateLoop;

/// @brief Field updateMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateMode, put=__cordl_internal_set_updateMode)) ::Rewired::Config::UpdateMode  updateMode;

/// @brief Field useEnhancedDeviceSupport, offset 0x46, size 0x1 
 __declspec(property(get=__cordl_internal_get_useEnhancedDeviceSupport, put=__cordl_internal_set_useEnhancedDeviceSupport)) bool  useEnhancedDeviceSupport;

/// @brief Field useNativeMouse, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_useNativeMouse, put=__cordl_internal_set_useNativeMouse)) bool  useNativeMouse;

/// @brief Field useSteamControllerSupport, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSteamControllerSupport, put=__cordl_internal_set_useSteamControllerSupport)) bool  useSteamControllerSupport;

/// @brief Field useXInput, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_useXInput, put=__cordl_internal_set_useXInput)) bool  useXInput;

 __declspec(property(get=get_valueDelegates)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  valueDelegates;

/// @brief Field webGL_primaryInputSource, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_webGL_primaryInputSource, put=__cordl_internal_set_webGL_primaryInputSource)) ::Rewired::Platforms::WebGLPrimaryInputSource  webGL_primaryInputSource;

/// @brief Field windowsStandalonePrimaryInputSource, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_windowsStandalonePrimaryInputSource, put=__cordl_internal_set_windowsStandalonePrimaryInputSource)) ::Rewired::Platforms::WindowsStandalonePrimaryInputSource  windowsStandalonePrimaryInputSource;

/// @brief Field windowsUWP_primaryInputSource, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_windowsUWP_primaryInputSource, put=__cordl_internal_set_windowsUWP_primaryInputSource)) ::Rewired::Platforms::WindowsUWPPrimaryInputSource  windowsUWP_primaryInputSource;

/// @brief Field xboxOne_primaryInputSource, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_xboxOne_primaryInputSource, put=__cordl_internal_set_xboxOne_primaryInputSource)) ::Rewired::Platforms::XboxOnePrimaryInputSource  xboxOne_primaryInputSource;

/// @brief Convert operator to "::Rewired::Data::IConfigVars_Internal"
constexpr operator  ::Rewired::Data::IConfigVars_Internal*() noexcept;

/// @brief Method DoesPlatformUseFallback, addr 0x181876510, size 0x80, virtual false, abstract: false, final false
inline bool DoesPlatformUseFallback(::Rewired::Platforms::Platform  platform, ::Rewired::Platforms::WebplayerPlatform  webplayerPlatform, bool  isEditor) ;

/// @brief Method Editor_GetAllSerializedPlatformVar, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T Editor_GetAllSerializedPlatformVar(::Rewired::Data::ConfigVars_AllPlatformVar  var) ;

/// @brief Method Editor_SetAllSerializedPlatformVar, addr 0x181876590, size 0x140, virtual false, abstract: false, final false
inline void Editor_SetAllSerializedPlatformVar(::Rewired::Data::ConfigVars_AllPlatformVar  var, ::System::Object*  value) ;

/// @brief Method GetAllSerializedPlatformVar_multiBool, addr 0x1818766d0, size 0x220, virtual false, abstract: false, final false
inline ::Rewired::MultiBoolValue GetAllSerializedPlatformVar_multiBool(::Rewired::Data::ConfigVars_AllPlatformVar  var) ;

/// @brief Method GetDebugConfigSettings, addr 0x1818768f0, size 0x310, virtual false, abstract: false, final false
inline ::StringW GetDebugConfigSettings() ;

/// @brief Method GetOrCreatePlatformVars, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetOrCreatePlatformVars(::by_ref<T>  var) ;

/// @brief Method GetPlatformVar_assignJoysticksBySystemId, addr 0x181876c00, size 0x200, virtual false, abstract: false, final false
inline bool GetPlatformVar_assignJoysticksBySystemId() ;

/// @brief Method GetPlatformVar_disableKeyboard, addr 0x181876e00, size 0x60, virtual false, abstract: false, final false
inline bool GetPlatformVar_disableKeyboard() ;

/// @brief Method GetPlatformVar_disableMouse, addr 0x181876e60, size 0x60, virtual false, abstract: false, final false
inline bool GetPlatformVar_disableMouse() ;

/// @brief Method GetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes, addr 0x181876ec0, size 0x1e0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>* GetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes() ;

/// @brief Method GetPlatformVar_ignoreInputWhenAppNotInFocus, addr 0x1818770a0, size 0x60, virtual false, abstract: false, final false
inline bool GetPlatformVar_ignoreInputWhenAppNotInFocus() ;

/// @brief Method GetPlatformVar_joystickRefreshRate, addr 0x181877100, size 0xe0, virtual false, abstract: false, final false
inline int32_t GetPlatformVar_joystickRefreshRate() ;

/// @brief Method GetPlatformVar_useAppleGameController, addr 0x1818771e0, size 0xe0, virtual false, abstract: false, final false
inline bool GetPlatformVar_useAppleGameController() ;

/// @brief Method GetPlatformVar_useEnhancedDeviceSupport, addr 0x1818772c0, size 0x100, virtual false, abstract: false, final false
inline bool GetPlatformVar_useEnhancedDeviceSupport() ;

/// @brief Method GetPlatformVar_useNativeKeyboard, addr 0x1818773c0, size 0x190, virtual false, abstract: false, final false
inline bool GetPlatformVar_useNativeKeyboard() ;

/// @brief Method GetPlatformVar_useNativeMouse, addr 0x181877550, size 0x100, virtual false, abstract: false, final false
inline bool GetPlatformVar_useNativeMouse() ;

/// @brief Method GetPlatformVar_useWindowsGamingInput, addr 0x181877650, size 0xd0, virtual false, abstract: false, final false
inline bool GetPlatformVar_useWindowsGamingInput() ;

/// @brief Method GetPlatformVars, addr 0x181877890, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* GetPlatformVars() ;

/// @brief Method GetPlatformVars, addr 0x1818777a0, size 0xf0, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* GetPlatformVars(::Rewired::Platforms::Platform  platform) ;

/// @brief Method GetPlatformVarsRelPath, addr 0x181877720, size 0x80, virtual false, abstract: false, final false
inline ::StringW GetPlatformVarsRelPath(::Rewired::Platforms::Platform  platform) ;

/// @brief Method IsEditModeInputSupported, addr 0x1818778e0, size 0xe0, virtual false, abstract: false, final false
inline bool IsEditModeInputSupported(::Rewired::ControllerType  controllerType, ::Rewired::Platforms::EditorPlatform  editorPlatform) ;

/// @brief Method IsNativeKeyboardAllowed, addr 0x1818779c0, size 0x20, virtual false, abstract: false, final false
static inline bool IsNativeKeyboardAllowed(::Rewired::Platforms::Platform  platform, bool  unityUsePhysicalKeys) ;

static inline ::Rewired::Data::ConfigVars* New_ctor() ;

/// @brief Method Rewired.Data.IConfigVars_Internal.get_values, addr 0x1818779e0, size 0x90, virtual true, abstract: false, final true
inline ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>* Rewired_Data_IConfigVars_Internal_get_values() ;

/// @brief Method SetPlatformVar_assignJoysticksBySystemId, addr 0x181877a70, size 0x210, virtual false, abstract: false, final false
inline bool SetPlatformVar_assignJoysticksBySystemId(bool  value) ;

/// @brief Method SetPlatformVar_disableKeyboard, addr 0x181877c80, size 0x70, virtual false, abstract: false, final false
inline bool SetPlatformVar_disableKeyboard(bool  value) ;

/// @brief Method SetPlatformVar_disableMouse, addr 0x181877cf0, size 0x70, virtual false, abstract: false, final false
inline bool SetPlatformVar_disableMouse(bool  value) ;

/// @brief Method SetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes, addr 0x181877d60, size 0x310, virtual false, abstract: false, final false
inline bool SetPlatformVar_enhancedDeviceSupportExcludedDeviceTypes(::System::Collections::Generic::IList_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  value) ;

/// @brief Method SetPlatformVar_ignoreInputWhenAppNotInFocus, addr 0x181878070, size 0xb0, virtual false, abstract: false, final false
inline bool SetPlatformVar_ignoreInputWhenAppNotInFocus(bool  value) ;

/// @brief Method SetPlatformVar_joystickRefreshRate, addr 0x181878120, size 0xf0, virtual false, abstract: false, final false
inline bool SetPlatformVar_joystickRefreshRate(int32_t  value) ;

/// @brief Method SetPlatformVar_useAppleGameController, addr 0x181878210, size 0xf0, virtual false, abstract: false, final false
inline bool SetPlatformVar_useAppleGameController(bool  value) ;

/// @brief Method SetPlatformVar_useEnhancedDeviceSupport, addr 0x181878300, size 0x130, virtual false, abstract: false, final false
inline bool SetPlatformVar_useEnhancedDeviceSupport(bool  value) ;

/// @brief Method SetPlatformVar_useNativeKeyboard, addr 0x181878430, size 0x110, virtual false, abstract: false, final false
inline bool SetPlatformVar_useNativeKeyboard(bool  value) ;

/// @brief Method SetPlatformVar_useNativeMouse, addr 0x181878540, size 0x80, virtual false, abstract: false, final false
inline bool SetPlatformVar_useNativeMouse(bool  value) ;

/// @brief Method SetPlatformVar_useWindowsGamingInput, addr 0x1818785c0, size 0xf0, virtual false, abstract: false, final false
inline bool SetPlatformVar_useWindowsGamingInput(bool  value) ;

constexpr ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>* const& __cordl_internal_get___configVarsValues() const;

constexpr ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>*& __cordl_internal_get___configVarsValues() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>* const& __cordl_internal_get___getSetPlatformVariableDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>*& __cordl_internal_get___getSetPlatformVariableDict() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>* const& __cordl_internal_get___platformVarsDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>*& __cordl_internal_get___platformVarsDict() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get___valueDelegates() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get___valueDelegates() ;

constexpr bool const& __cordl_internal_get_activateActionButtonsOnNegativeValue() const;

constexpr bool& __cordl_internal_get_activateActionButtonsOnNegativeValue() ;

constexpr bool const& __cordl_internal_get_allowInputInEditorSceneView() const;

constexpr bool& __cordl_internal_get_allowInputInEditorSceneView() ;

constexpr bool const& __cordl_internal_get_alwaysUseUnityInput() const;

constexpr bool& __cordl_internal_get_alwaysUseUnityInput() ;

constexpr bool const& __cordl_internal_get_android_supportUnknownGamepads() const;

constexpr bool& __cordl_internal_get_android_supportUnknownGamepads() ;

constexpr bool const& __cordl_internal_get_assignJoysticksToPlayingPlayersOnly() const;

constexpr bool& __cordl_internal_get_assignJoysticksToPlayingPlayersOnly() ;

constexpr bool const& __cordl_internal_get_autoAssignJoysticks() const;

constexpr bool& __cordl_internal_get_autoAssignJoysticks() ;

constexpr ::Rewired::AxisSensitivityType const& __cordl_internal_get_defaultAxisSensitivityType() const;

constexpr ::Rewired::AxisSensitivityType& __cordl_internal_get_defaultAxisSensitivityType() ;

constexpr ::Rewired::DeadZone2DType const& __cordl_internal_get_defaultJoystickAxis2DDeadZoneType() const;

constexpr ::Rewired::DeadZone2DType& __cordl_internal_get_defaultJoystickAxis2DDeadZoneType() ;

constexpr ::Rewired::AxisSensitivity2DType const& __cordl_internal_get_defaultJoystickAxis2DSensitivityType() const;

constexpr ::Rewired::AxisSensitivity2DType& __cordl_internal_get_defaultJoystickAxis2DSensitivityType() ;

constexpr bool const& __cordl_internal_get_deferControllerConnectedEventsOnStart() const;

constexpr bool& __cordl_internal_get_deferControllerConnectedEventsOnStart() ;

constexpr bool const& __cordl_internal_get_distributeJoysticksEvenly() const;

constexpr bool& __cordl_internal_get_distributeJoysticksEvenly() ;

constexpr ::Rewired::Data::ConfigVars_EditorVars* const& __cordl_internal_get_editorSettings() const;

constexpr ::Rewired::Data::ConfigVars_EditorVars*& __cordl_internal_get_editorSettings() ;

constexpr bool const& __cordl_internal_get_force4WayHats() const;

constexpr bool& __cordl_internal_get_force4WayHats() ;

constexpr ::Rewired::Platforms::GameCoreScarlettPrimaryInputSource const& __cordl_internal_get_gameCoreScarlett_primaryInputSource() const;

constexpr ::Rewired::Platforms::GameCoreScarlettPrimaryInputSource& __cordl_internal_get_gameCoreScarlett_primaryInputSource() ;

constexpr ::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource const& __cordl_internal_get_gameCoreXboxOne_primaryInputSource() const;

constexpr ::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource& __cordl_internal_get_gameCoreXboxOne_primaryInputSource() ;

constexpr bool const& __cordl_internal_get_generateKeyEventsOnKeyCombinationOverride() const;

constexpr bool& __cordl_internal_get_generateKeyEventsOnKeyCombinationOverride() ;

constexpr ::Rewired::Config::KeyCombinationOverrideMode const& __cordl_internal_get_keyCombinationOverrideMode() const;

constexpr ::Rewired::Config::KeyCombinationOverrideMode& __cordl_internal_get_keyCombinationOverrideMode() ;

constexpr ::Rewired::Platforms::LinuxStandalonePrimaryInputSource const& __cordl_internal_get_linux_primaryInputSource() const;

constexpr ::Rewired::Platforms::LinuxStandalonePrimaryInputSource& __cordl_internal_get_linux_primaryInputSource() ;

constexpr ::Rewired::Config::LogLevelFlags const& __cordl_internal_get_logLevel() const;

constexpr ::Rewired::Config::LogLevelFlags& __cordl_internal_get_logLevel() ;

constexpr bool const& __cordl_internal_get_logToScreen() const;

constexpr bool& __cordl_internal_get_logToScreen() ;

constexpr int32_t const& __cordl_internal_get_maxJoysticksPerPlayer() const;

constexpr int32_t& __cordl_internal_get_maxJoysticksPerPlayer() ;

constexpr bool const& __cordl_internal_get_osxStandalone_useEnhancedDeviceSupport() const;

constexpr bool& __cordl_internal_get_osxStandalone_useEnhancedDeviceSupport() ;

constexpr ::Rewired::Platforms::OSXStandalonePrimaryInputSource const& __cordl_internal_get_osx_primaryInputSource() const;

constexpr ::Rewired::Platforms::OSXStandalonePrimaryInputSource& __cordl_internal_get_osx_primaryInputSource() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& __cordl_internal_get_platformVars_android() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars*& __cordl_internal_get_platformVars_android() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett* const& __cordl_internal_get_platformVars_gameCoreScarlett() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett*& __cordl_internal_get_platformVars_gameCoreScarlett() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne* const& __cordl_internal_get_platformVars_gameCoreXboxOne() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne*& __cordl_internal_get_platformVars_gameCoreXboxOne() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& __cordl_internal_get_platformVars_iOS() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars*& __cordl_internal_get_platformVars_iOS() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone* const& __cordl_internal_get_platformVars_linuxStandalone() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone*& __cordl_internal_get_platformVars_linuxStandalone() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone* const& __cordl_internal_get_platformVars_osxStandalone() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone*& __cordl_internal_get_platformVars_osxStandalone() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& __cordl_internal_get_platformVars_ps4() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars*& __cordl_internal_get_platformVars_ps4() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_PS5* const& __cordl_internal_get_platformVars_ps5() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_PS5*& __cordl_internal_get_platformVars_ps5() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& __cordl_internal_get_platformVars_psVita() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars*& __cordl_internal_get_platformVars_psVita() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& __cordl_internal_get_platformVars_switch() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars*& __cordl_internal_get_platformVars_switch() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& __cordl_internal_get_platformVars_switch2() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars*& __cordl_internal_get_platformVars_switch2() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& __cordl_internal_get_platformVars_tvOS() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars*& __cordl_internal_get_platformVars_tvOS() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& __cordl_internal_get_platformVars_unknown() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars*& __cordl_internal_get_platformVars_unknown() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& __cordl_internal_get_platformVars_webGL() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars*& __cordl_internal_get_platformVars_webGL() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone* const& __cordl_internal_get_platformVars_windowsStandalone() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone*& __cordl_internal_get_platformVars_windowsStandalone() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP* const& __cordl_internal_get_platformVars_windowsUWP() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP*& __cordl_internal_get_platformVars_windowsUWP() ;

constexpr ::Rewired::Data::ConfigVars_PlatformVars* const& __cordl_internal_get_platformVars_xboxOne() const;

constexpr ::Rewired::Data::ConfigVars_PlatformVars*& __cordl_internal_get_platformVars_xboxOne() ;

constexpr bool const& __cordl_internal_get_ps4_assignJoysticksByPS4JoyId() const;

constexpr bool& __cordl_internal_get_ps4_assignJoysticksByPS4JoyId() ;

constexpr ::Rewired::Platforms::PS4PrimaryInputSource const& __cordl_internal_get_ps4_primaryInputSource() const;

constexpr ::Rewired::Platforms::PS4PrimaryInputSource& __cordl_internal_get_ps4_primaryInputSource() ;

constexpr ::Rewired::Platforms::PS5PrimaryInputSource const& __cordl_internal_get_ps5_primaryInputSource() const;

constexpr ::Rewired::Platforms::PS5PrimaryInputSource& __cordl_internal_get_ps5_primaryInputSource() ;

constexpr bool const& __cordl_internal_get_reassignJoystickToPreviousOwnerOnReconnect() const;

constexpr bool& __cordl_internal_get_reassignJoystickToPreviousOwnerOnReconnect() ;

constexpr bool const& __cordl_internal_get_runInEditMode() const;

constexpr bool& __cordl_internal_get_runInEditMode() ;

constexpr ::Rewired::Config::ThrottleCalibrationMode const& __cordl_internal_get_throttleCalibrationMode() const;

constexpr ::Rewired::Config::ThrottleCalibrationMode& __cordl_internal_get_throttleCalibrationMode() ;

constexpr bool const& __cordl_internal_get_unityUsePhysicalKeys() const;

constexpr bool& __cordl_internal_get_unityUsePhysicalKeys() ;

constexpr ::Rewired::Config::UpdateLoopSetting const& __cordl_internal_get_updateLoop() const;

constexpr ::Rewired::Config::UpdateLoopSetting& __cordl_internal_get_updateLoop() ;

constexpr ::Rewired::Config::UpdateMode const& __cordl_internal_get_updateMode() const;

constexpr ::Rewired::Config::UpdateMode& __cordl_internal_get_updateMode() ;

constexpr bool const& __cordl_internal_get_useEnhancedDeviceSupport() const;

constexpr bool& __cordl_internal_get_useEnhancedDeviceSupport() ;

constexpr bool const& __cordl_internal_get_useNativeMouse() const;

constexpr bool& __cordl_internal_get_useNativeMouse() ;

constexpr bool const& __cordl_internal_get_useSteamControllerSupport() const;

constexpr bool& __cordl_internal_get_useSteamControllerSupport() ;

constexpr bool const& __cordl_internal_get_useXInput() const;

constexpr bool& __cordl_internal_get_useXInput() ;

constexpr ::Rewired::Platforms::WebGLPrimaryInputSource const& __cordl_internal_get_webGL_primaryInputSource() const;

constexpr ::Rewired::Platforms::WebGLPrimaryInputSource& __cordl_internal_get_webGL_primaryInputSource() ;

constexpr ::Rewired::Platforms::WindowsStandalonePrimaryInputSource const& __cordl_internal_get_windowsStandalonePrimaryInputSource() const;

constexpr ::Rewired::Platforms::WindowsStandalonePrimaryInputSource& __cordl_internal_get_windowsStandalonePrimaryInputSource() ;

constexpr ::Rewired::Platforms::WindowsUWPPrimaryInputSource const& __cordl_internal_get_windowsUWP_primaryInputSource() const;

constexpr ::Rewired::Platforms::WindowsUWPPrimaryInputSource& __cordl_internal_get_windowsUWP_primaryInputSource() ;

constexpr ::Rewired::Platforms::XboxOnePrimaryInputSource const& __cordl_internal_get_xboxOne_primaryInputSource() const;

constexpr ::Rewired::Platforms::XboxOnePrimaryInputSource& __cordl_internal_get_xboxOne_primaryInputSource() ;

constexpr void __cordl_internal_set___configVarsValues(::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>*  value) ;

constexpr void __cordl_internal_set___getSetPlatformVariableDict(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>*  value) ;

constexpr void __cordl_internal_set___platformVarsDict(::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>*  value) ;

constexpr void __cordl_internal_set___valueDelegates(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set_activateActionButtonsOnNegativeValue(bool  value) ;

constexpr void __cordl_internal_set_allowInputInEditorSceneView(bool  value) ;

constexpr void __cordl_internal_set_alwaysUseUnityInput(bool  value) ;

constexpr void __cordl_internal_set_android_supportUnknownGamepads(bool  value) ;

constexpr void __cordl_internal_set_assignJoysticksToPlayingPlayersOnly(bool  value) ;

constexpr void __cordl_internal_set_autoAssignJoysticks(bool  value) ;

constexpr void __cordl_internal_set_defaultAxisSensitivityType(::Rewired::AxisSensitivityType  value) ;

constexpr void __cordl_internal_set_defaultJoystickAxis2DDeadZoneType(::Rewired::DeadZone2DType  value) ;

constexpr void __cordl_internal_set_defaultJoystickAxis2DSensitivityType(::Rewired::AxisSensitivity2DType  value) ;

constexpr void __cordl_internal_set_deferControllerConnectedEventsOnStart(bool  value) ;

constexpr void __cordl_internal_set_distributeJoysticksEvenly(bool  value) ;

constexpr void __cordl_internal_set_editorSettings(::Rewired::Data::ConfigVars_EditorVars*  value) ;

constexpr void __cordl_internal_set_force4WayHats(bool  value) ;

constexpr void __cordl_internal_set_gameCoreScarlett_primaryInputSource(::Rewired::Platforms::GameCoreScarlettPrimaryInputSource  value) ;

constexpr void __cordl_internal_set_gameCoreXboxOne_primaryInputSource(::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource  value) ;

constexpr void __cordl_internal_set_generateKeyEventsOnKeyCombinationOverride(bool  value) ;

constexpr void __cordl_internal_set_keyCombinationOverrideMode(::Rewired::Config::KeyCombinationOverrideMode  value) ;

constexpr void __cordl_internal_set_linux_primaryInputSource(::Rewired::Platforms::LinuxStandalonePrimaryInputSource  value) ;

constexpr void __cordl_internal_set_logLevel(::Rewired::Config::LogLevelFlags  value) ;

constexpr void __cordl_internal_set_logToScreen(bool  value) ;

constexpr void __cordl_internal_set_maxJoysticksPerPlayer(int32_t  value) ;

constexpr void __cordl_internal_set_osxStandalone_useEnhancedDeviceSupport(bool  value) ;

constexpr void __cordl_internal_set_osx_primaryInputSource(::Rewired::Platforms::OSXStandalonePrimaryInputSource  value) ;

constexpr void __cordl_internal_set_platformVars_android(::Rewired::Data::ConfigVars_PlatformVars*  value) ;

constexpr void __cordl_internal_set_platformVars_gameCoreScarlett(::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett*  value) ;

constexpr void __cordl_internal_set_platformVars_gameCoreXboxOne(::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne*  value) ;

constexpr void __cordl_internal_set_platformVars_iOS(::Rewired::Data::ConfigVars_PlatformVars*  value) ;

constexpr void __cordl_internal_set_platformVars_linuxStandalone(::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone*  value) ;

constexpr void __cordl_internal_set_platformVars_osxStandalone(::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone*  value) ;

constexpr void __cordl_internal_set_platformVars_ps4(::Rewired::Data::ConfigVars_PlatformVars*  value) ;

constexpr void __cordl_internal_set_platformVars_ps5(::Rewired::Data::ConfigVars_PlatformVars_PS5*  value) ;

constexpr void __cordl_internal_set_platformVars_psVita(::Rewired::Data::ConfigVars_PlatformVars*  value) ;

constexpr void __cordl_internal_set_platformVars_switch(::Rewired::Data::ConfigVars_PlatformVars*  value) ;

constexpr void __cordl_internal_set_platformVars_switch2(::Rewired::Data::ConfigVars_PlatformVars*  value) ;

constexpr void __cordl_internal_set_platformVars_tvOS(::Rewired::Data::ConfigVars_PlatformVars*  value) ;

constexpr void __cordl_internal_set_platformVars_unknown(::Rewired::Data::ConfigVars_PlatformVars*  value) ;

constexpr void __cordl_internal_set_platformVars_webGL(::Rewired::Data::ConfigVars_PlatformVars*  value) ;

constexpr void __cordl_internal_set_platformVars_windowsStandalone(::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone*  value) ;

constexpr void __cordl_internal_set_platformVars_windowsUWP(::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP*  value) ;

constexpr void __cordl_internal_set_platformVars_xboxOne(::Rewired::Data::ConfigVars_PlatformVars*  value) ;

constexpr void __cordl_internal_set_ps4_assignJoysticksByPS4JoyId(bool  value) ;

constexpr void __cordl_internal_set_ps4_primaryInputSource(::Rewired::Platforms::PS4PrimaryInputSource  value) ;

constexpr void __cordl_internal_set_ps5_primaryInputSource(::Rewired::Platforms::PS5PrimaryInputSource  value) ;

constexpr void __cordl_internal_set_reassignJoystickToPreviousOwnerOnReconnect(bool  value) ;

constexpr void __cordl_internal_set_runInEditMode(bool  value) ;

constexpr void __cordl_internal_set_throttleCalibrationMode(::Rewired::Config::ThrottleCalibrationMode  value) ;

constexpr void __cordl_internal_set_unityUsePhysicalKeys(bool  value) ;

constexpr void __cordl_internal_set_updateLoop(::Rewired::Config::UpdateLoopSetting  value) ;

constexpr void __cordl_internal_set_updateMode(::Rewired::Config::UpdateMode  value) ;

constexpr void __cordl_internal_set_useEnhancedDeviceSupport(bool  value) ;

constexpr void __cordl_internal_set_useNativeMouse(bool  value) ;

constexpr void __cordl_internal_set_useSteamControllerSupport(bool  value) ;

constexpr void __cordl_internal_set_useXInput(bool  value) ;

constexpr void __cordl_internal_set_webGL_primaryInputSource(::Rewired::Platforms::WebGLPrimaryInputSource  value) ;

constexpr void __cordl_internal_set_windowsStandalonePrimaryInputSource(::Rewired::Platforms::WindowsStandalonePrimaryInputSource  value) ;

constexpr void __cordl_internal_set_windowsUWP_primaryInputSource(::Rewired::Platforms::WindowsUWPPrimaryInputSource  value) ;

constexpr void __cordl_internal_set_xboxOne_primaryInputSource(::Rewired::Platforms::XboxOnePrimaryInputSource  value) ;

/// @brief Method .ctor, addr 0x181879230, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_getSetPlatformVariableDict>b__62_0, addr 0x1818786b0, size 0x40, virtual false, abstract: false, final false
inline ::System::Object* _get_getSetPlatformVariableDict_b__62_0(::Rewired::Platforms::Platform  p) ;

/// @brief Method <get_getSetPlatformVariableDict>b__62_1, addr 0x1818786f0, size 0x60, virtual false, abstract: false, final false
inline void _get_getSetPlatformVariableDict_b__62_1(::Rewired::Platforms::Platform  platform, ::System::Object*  value) ;

/// @brief Method <get_getSetPlatformVariableDict>b__62_2, addr 0x181878750, size 0x40, virtual false, abstract: false, final false
inline ::System::Object* _get_getSetPlatformVariableDict_b__62_2(::Rewired::Platforms::Platform  p) ;

/// @brief Method <get_getSetPlatformVariableDict>b__62_3, addr 0x181878790, size 0x60, virtual false, abstract: false, final false
inline void _get_getSetPlatformVariableDict_b__62_3(::Rewired::Platforms::Platform  platform, ::System::Object*  value) ;

/// @brief Method <get_getSetPlatformVariableDict>b__62_4, addr 0x1818787f0, size 0x40, virtual false, abstract: false, final false
inline ::System::Object* _get_getSetPlatformVariableDict_b__62_4(::Rewired::Platforms::Platform  platform) ;

/// @brief Method <get_getSetPlatformVariableDict>b__62_5, addr 0x181878830, size 0x60, virtual false, abstract: false, final false
inline void _get_getSetPlatformVariableDict_b__62_5(::Rewired::Platforms::Platform  platform, ::System::Object*  value) ;

/// @brief Method <get_platformVarsDict>b__59_0, addr 0x181878890, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_0() ;

/// @brief Method <get_platformVarsDict>b__59_1, addr 0x181878980, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_1() ;

/// @brief Method <get_platformVarsDict>b__59_10, addr 0x1818788a0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_10() ;

/// @brief Method <get_platformVarsDict>b__59_11, addr 0x1818788c0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_11() ;

/// @brief Method <get_platformVarsDict>b__59_12, addr 0x1818788e0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_12() ;

/// @brief Method <get_platformVarsDict>b__59_13, addr 0x181878900, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_13() ;

/// @brief Method <get_platformVarsDict>b__59_14, addr 0x181878920, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_14() ;

/// @brief Method <get_platformVarsDict>b__59_15, addr 0x181878940, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_15() ;

/// @brief Method <get_platformVarsDict>b__59_16, addr 0x181878960, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_16() ;

/// @brief Method <get_platformVarsDict>b__59_2, addr 0x181878990, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_2() ;

/// @brief Method <get_platformVarsDict>b__59_3, addr 0x1818789a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_3() ;

/// @brief Method <get_platformVarsDict>b__59_4, addr 0x1818789b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_4() ;

/// @brief Method <get_platformVarsDict>b__59_5, addr 0x1818789c0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_5() ;

/// @brief Method <get_platformVarsDict>b__59_6, addr 0x1818789e0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_6() ;

/// @brief Method <get_platformVarsDict>b__59_7, addr 0x181878a00, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_7() ;

/// @brief Method <get_platformVarsDict>b__59_8, addr 0x181878a20, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_8() ;

/// @brief Method <get_platformVarsDict>b__59_9, addr 0x181878a20, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Data::ConfigVars_PlatformVars* _get_platformVarsDict_b__59_9() ;

/// @brief Method <get_valueDelegates>b__102_0, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Config::UpdateLoopSetting _get_valueDelegates_b__102_0() ;

/// @brief Method <get_valueDelegates>b__102_1, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_1(::Rewired::Config::UpdateLoopSetting  x) ;

/// @brief Method <get_valueDelegates>b__102_10, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::WindowsUWPPrimaryInputSource _get_valueDelegates_b__102_10() ;

/// @brief Method <get_valueDelegates>b__102_11, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_11(::Rewired::Platforms::WindowsUWPPrimaryInputSource  x) ;

/// @brief Method <get_valueDelegates>b__102_12, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::XboxOnePrimaryInputSource _get_valueDelegates_b__102_12() ;

/// @brief Method <get_valueDelegates>b__102_13, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_13(::Rewired::Platforms::XboxOnePrimaryInputSource  x) ;

/// @brief Method <get_valueDelegates>b__102_14, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource _get_valueDelegates_b__102_14() ;

/// @brief Method <get_valueDelegates>b__102_15, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_15(::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource  x) ;

/// @brief Method <get_valueDelegates>b__102_16, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::GameCoreScarlettPrimaryInputSource _get_valueDelegates_b__102_16() ;

/// @brief Method <get_valueDelegates>b__102_17, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_17(::Rewired::Platforms::GameCoreScarlettPrimaryInputSource  x) ;

/// @brief Method <get_valueDelegates>b__102_18, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::PS4PrimaryInputSource _get_valueDelegates_b__102_18() ;

/// @brief Method <get_valueDelegates>b__102_19, addr 0x180393000, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_19(::Rewired::Platforms::PS4PrimaryInputSource  x) ;

/// @brief Method <get_valueDelegates>b__102_2, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_2() ;

/// @brief Method <get_valueDelegates>b__102_20, addr 0x1803231b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::PS5PrimaryInputSource _get_valueDelegates_b__102_20() ;

/// @brief Method <get_valueDelegates>b__102_21, addr 0x180323270, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_21(::Rewired::Platforms::PS5PrimaryInputSource  x) ;

/// @brief Method <get_valueDelegates>b__102_22, addr 0x1803eb0e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::WebGLPrimaryInputSource _get_valueDelegates_b__102_22() ;

/// @brief Method <get_valueDelegates>b__102_23, addr 0x180511530, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_23(::Rewired::Platforms::WebGLPrimaryInputSource  x) ;

/// @brief Method <get_valueDelegates>b__102_24, addr 0x180468800, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_24() ;

/// @brief Method <get_valueDelegates>b__102_25, addr 0x180468810, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_25(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_26, addr 0x181878a40, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_26() ;

/// @brief Method <get_valueDelegates>b__102_27, addr 0x181878a50, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_27(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_28, addr 0x1802fdd10, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_28() ;

/// @brief Method <get_valueDelegates>b__102_29, addr 0x180503b70, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_29(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_3, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_3(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_30, addr 0x180503b50, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_30() ;

/// @brief Method <get_valueDelegates>b__102_31, addr 0x180503bb0, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_31(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_32, addr 0x181878a60, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_32() ;

/// @brief Method <get_valueDelegates>b__102_33, addr 0x181878a70, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_33(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_34, addr 0x181878a80, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_34() ;

/// @brief Method <get_valueDelegates>b__102_35, addr 0x181878a90, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_35(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_36, addr 0x1804a5a20, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_36() ;

/// @brief Method <get_valueDelegates>b__102_37, addr 0x1804a5a50, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_37(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_38, addr 0x1804a5a30, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_38() ;

/// @brief Method <get_valueDelegates>b__102_39, addr 0x1804a5a70, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_39(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_4, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::WindowsStandalonePrimaryInputSource _get_valueDelegates_b__102_4() ;

/// @brief Method <get_valueDelegates>b__102_40, addr 0x1813ef6d0, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_valueDelegates_b__102_40() ;

/// @brief Method <get_valueDelegates>b__102_41, addr 0x1813eff50, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_41(int32_t  x) ;

/// @brief Method <get_valueDelegates>b__102_42, addr 0x181878aa0, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_42() ;

/// @brief Method <get_valueDelegates>b__102_43, addr 0x181878ab0, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_43(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_44, addr 0x181878ac0, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_44() ;

/// @brief Method <get_valueDelegates>b__102_45, addr 0x181878ad0, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_45(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_46, addr 0x181878ae0, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_46() ;

/// @brief Method <get_valueDelegates>b__102_47, addr 0x181878af0, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_47(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_48, addr 0x181878b00, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_48() ;

/// @brief Method <get_valueDelegates>b__102_49, addr 0x181878b10, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_49(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_5, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_5(::Rewired::Platforms::WindowsStandalonePrimaryInputSource  x) ;

/// @brief Method <get_valueDelegates>b__102_50, addr 0x180cbfa90, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::DeadZone2DType _get_valueDelegates_b__102_50() ;

/// @brief Method <get_valueDelegates>b__102_51, addr 0x180cbfe50, size 0x40, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_51(::Rewired::DeadZone2DType  x) ;

/// @brief Method <get_valueDelegates>b__102_52, addr 0x180418710, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisSensitivity2DType _get_valueDelegates_b__102_52() ;

/// @brief Method <get_valueDelegates>b__102_53, addr 0x1813effe0, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_53(::Rewired::AxisSensitivity2DType  x) ;

/// @brief Method <get_valueDelegates>b__102_54, addr 0x1813ef7e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisSensitivityType _get_valueDelegates_b__102_54() ;

/// @brief Method <get_valueDelegates>b__102_55, addr 0x1813effd0, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_55(::Rewired::AxisSensitivityType  x) ;

/// @brief Method <get_valueDelegates>b__102_56, addr 0x181878b20, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_56() ;

/// @brief Method <get_valueDelegates>b__102_57, addr 0x181878b30, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_57(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_58, addr 0x181465ce0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Config::ThrottleCalibrationMode _get_valueDelegates_b__102_58() ;

/// @brief Method <get_valueDelegates>b__102_59, addr 0x180cbfe10, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_59(::Rewired::Config::ThrottleCalibrationMode  x) ;

/// @brief Method <get_valueDelegates>b__102_6, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::OSXStandalonePrimaryInputSource _get_valueDelegates_b__102_6() ;

/// @brief Method <get_valueDelegates>b__102_60, addr 0x180cbfac0, size 0x230, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_60() ;

/// @brief Method <get_valueDelegates>b__102_61, addr 0x180cbff00, size 0xa720, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_61(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_62, addr 0x181878b40, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_62() ;

/// @brief Method <get_valueDelegates>b__102_63, addr 0x181878b50, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_63(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_64, addr 0x1813abac0, size 0x1810, virtual false, abstract: false, final false
inline ::Rewired::Config::LogLevelFlags _get_valueDelegates_b__102_64() ;

/// @brief Method <get_valueDelegates>b__102_65, addr 0x181878b60, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_65(::Rewired::Config::LogLevelFlags  x) ;

/// @brief Method <get_valueDelegates>b__102_66, addr 0x181876e00, size 0x60, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_66() ;

/// @brief Method <get_valueDelegates>b__102_67, addr 0x181878b70, size 0x70, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_67(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_68, addr 0x181876e60, size 0x60, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_68() ;

/// @brief Method <get_valueDelegates>b__102_69, addr 0x181878be0, size 0x70, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_69(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_7, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_7(::Rewired::Platforms::OSXStandalonePrimaryInputSource  x) ;

/// @brief Method <get_valueDelegates>b__102_70, addr 0x1818770a0, size 0x60, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_70() ;

/// @brief Method <get_valueDelegates>b__102_71, addr 0x181878c50, size 0xb0, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_71(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_72, addr 0x181878d00, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_72() ;

/// @brief Method <get_valueDelegates>b__102_73, addr 0x181878d10, size 0x110, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_73(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_74, addr 0x181878e20, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_74() ;

/// @brief Method <get_valueDelegates>b__102_75, addr 0x181878e30, size 0x70, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_75(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_76, addr 0x181878ea0, size 0x190, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_76() ;

/// @brief Method <get_valueDelegates>b__102_77, addr 0x181879030, size 0x110, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_77(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_78, addr 0x181877100, size 0xe0, virtual false, abstract: false, final false
inline int32_t _get_valueDelegates_b__102_78() ;

/// @brief Method <get_valueDelegates>b__102_79, addr 0x181879140, size 0xd0, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_79(int32_t  x) ;

/// @brief Method <get_valueDelegates>b__102_8, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::LinuxStandalonePrimaryInputSource _get_valueDelegates_b__102_8() ;

/// @brief Method <get_valueDelegates>b__102_80, addr 0x181879210, size 0x10, virtual false, abstract: false, final false
inline bool _get_valueDelegates_b__102_80() ;

/// @brief Method <get_valueDelegates>b__102_81, addr 0x181879220, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_81(bool  x) ;

/// @brief Method <get_valueDelegates>b__102_9, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void _get_valueDelegates_b__102_9(::Rewired::Platforms::LinuxStandalonePrimaryInputSource  x) ;

/// @brief Method get_getSetPlatformVariableDict, addr 0x181879280, size 0x230, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>* get_getSetPlatformVariableDict() ;

/// @brief Method get_platformVarsDict, addr 0x1818794b0, size 0x800, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>* get_platformVarsDict() ;

/// @brief Method get_valueDelegates, addr 0x181879cb0, size 0x1540, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* get_valueDelegates() ;

/// @brief Convert to "::Rewired::Data::IConfigVars_Internal"
constexpr ::Rewired::Data::IConfigVars_Internal* i___Rewired__Data__IConfigVars_Internal() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConfigVars() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigVars(ConfigVars && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigVars", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigVars(ConfigVars const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2336};

/// @brief Field updateMode, offset: 0x10, size: 0x4, def value: None
 ::Rewired::Config::UpdateMode  ___updateMode;

/// @brief Field updateLoop, offset: 0x14, size: 0x4, def value: None
 ::Rewired::Config::UpdateLoopSetting  ___updateLoop;

/// @brief Field alwaysUseUnityInput, offset: 0x18, size: 0x1, def value: None
 bool  ___alwaysUseUnityInput;

/// @brief Field windowsStandalonePrimaryInputSource, offset: 0x1c, size: 0x4, def value: None
 ::Rewired::Platforms::WindowsStandalonePrimaryInputSource  ___windowsStandalonePrimaryInputSource;

/// @brief Field osx_primaryInputSource, offset: 0x20, size: 0x4, def value: None
 ::Rewired::Platforms::OSXStandalonePrimaryInputSource  ___osx_primaryInputSource;

/// @brief Field linux_primaryInputSource, offset: 0x24, size: 0x4, def value: None
 ::Rewired::Platforms::LinuxStandalonePrimaryInputSource  ___linux_primaryInputSource;

/// @brief Field windowsUWP_primaryInputSource, offset: 0x28, size: 0x4, def value: None
 ::Rewired::Platforms::WindowsUWPPrimaryInputSource  ___windowsUWP_primaryInputSource;

/// @brief Field xboxOne_primaryInputSource, offset: 0x2c, size: 0x4, def value: None
 ::Rewired::Platforms::XboxOnePrimaryInputSource  ___xboxOne_primaryInputSource;

/// @brief Field gameCoreXboxOne_primaryInputSource, offset: 0x30, size: 0x4, def value: None
 ::Rewired::Platforms::GameCoreXboxOnePrimaryInputSource  ___gameCoreXboxOne_primaryInputSource;

/// @brief Field gameCoreScarlett_primaryInputSource, offset: 0x34, size: 0x4, def value: None
 ::Rewired::Platforms::GameCoreScarlettPrimaryInputSource  ___gameCoreScarlett_primaryInputSource;

/// @brief Field ps4_primaryInputSource, offset: 0x38, size: 0x4, def value: None
 ::Rewired::Platforms::PS4PrimaryInputSource  ___ps4_primaryInputSource;

/// @brief Field ps5_primaryInputSource, offset: 0x3c, size: 0x4, def value: None
 ::Rewired::Platforms::PS5PrimaryInputSource  ___ps5_primaryInputSource;

/// @brief Field webGL_primaryInputSource, offset: 0x40, size: 0x4, def value: None
 ::Rewired::Platforms::WebGLPrimaryInputSource  ___webGL_primaryInputSource;

/// @brief Field useXInput, offset: 0x44, size: 0x1, def value: None
 bool  ___useXInput;

/// @brief Field useNativeMouse, offset: 0x45, size: 0x1, def value: None
 bool  ___useNativeMouse;

/// @brief Field useEnhancedDeviceSupport, offset: 0x46, size: 0x1, def value: None
 bool  ___useEnhancedDeviceSupport;

/// @brief Field osxStandalone_useEnhancedDeviceSupport, offset: 0x47, size: 0x1, def value: None
 bool  ___osxStandalone_useEnhancedDeviceSupport;

/// @brief Field android_supportUnknownGamepads, offset: 0x48, size: 0x1, def value: None
 bool  ___android_supportUnknownGamepads;

/// @brief Field ps4_assignJoysticksByPS4JoyId, offset: 0x49, size: 0x1, def value: None
 bool  ___ps4_assignJoysticksByPS4JoyId;

/// @brief Field useSteamControllerSupport, offset: 0x4a, size: 0x1, def value: None
 bool  ___useSteamControllerSupport;

/// @brief Field logToScreen, offset: 0x4b, size: 0x1, def value: None
 bool  ___logToScreen;

/// @brief Field runInEditMode, offset: 0x4c, size: 0x1, def value: None
 bool  ___runInEditMode;

/// @brief Field allowInputInEditorSceneView, offset: 0x4d, size: 0x1, def value: None
 bool  ___allowInputInEditorSceneView;

/// @brief Field unityUsePhysicalKeys, offset: 0x4e, size: 0x1, def value: None
 bool  ___unityUsePhysicalKeys;

/// @brief Field keyCombinationOverrideMode, offset: 0x50, size: 0x4, def value: None
 ::Rewired::Config::KeyCombinationOverrideMode  ___keyCombinationOverrideMode;

/// @brief Field generateKeyEventsOnKeyCombinationOverride, offset: 0x54, size: 0x1, def value: None
 bool  ___generateKeyEventsOnKeyCombinationOverride;

/// @brief Field platformVars_windowsStandalone, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars_WindowsStandalone*  ___platformVars_windowsStandalone;

/// @brief Field platformVars_linuxStandalone, offset: 0x60, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars_LinuxStandalone*  ___platformVars_linuxStandalone;

/// @brief Field platformVars_osxStandalone, offset: 0x68, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars_OSXStandalone*  ___platformVars_osxStandalone;

/// @brief Field platformVars_windowsUWP, offset: 0x70, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars_WindowsUWP*  ___platformVars_windowsUWP;

/// @brief Field platformVars_iOS, offset: 0x78, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars*  ___platformVars_iOS;

/// @brief Field platformVars_tvOS, offset: 0x80, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars*  ___platformVars_tvOS;

/// @brief Field platformVars_android, offset: 0x88, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars*  ___platformVars_android;

/// @brief Field platformVars_ps4, offset: 0x90, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars*  ___platformVars_ps4;

/// @brief Field platformVars_ps5, offset: 0x98, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars_PS5*  ___platformVars_ps5;

/// @brief Field platformVars_psVita, offset: 0xa0, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars*  ___platformVars_psVita;

/// @brief Field platformVars_xboxOne, offset: 0xa8, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars*  ___platformVars_xboxOne;

/// @brief Field platformVars_gameCoreXboxOne, offset: 0xb0, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars_GameCoreXboxOne*  ___platformVars_gameCoreXboxOne;

/// @brief Field platformVars_gameCoreScarlett, offset: 0xb8, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars_GameCoreScarlett*  ___platformVars_gameCoreScarlett;

/// @brief Field platformVars_switch, offset: 0xc0, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars*  ___platformVars_switch;

/// @brief Field platformVars_switch2, offset: 0xc8, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars*  ___platformVars_switch2;

/// @brief Field platformVars_webGL, offset: 0xd0, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars*  ___platformVars_webGL;

/// @brief Field platformVars_unknown, offset: 0xd8, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_PlatformVars*  ___platformVars_unknown;

/// @brief Field maxJoysticksPerPlayer, offset: 0xe0, size: 0x4, def value: None
 int32_t  ___maxJoysticksPerPlayer;

/// @brief Field autoAssignJoysticks, offset: 0xe4, size: 0x1, def value: None
 bool  ___autoAssignJoysticks;

/// @brief Field assignJoysticksToPlayingPlayersOnly, offset: 0xe5, size: 0x1, def value: None
 bool  ___assignJoysticksToPlayingPlayersOnly;

/// @brief Field distributeJoysticksEvenly, offset: 0xe6, size: 0x1, def value: None
 bool  ___distributeJoysticksEvenly;

/// @brief Field reassignJoystickToPreviousOwnerOnReconnect, offset: 0xe7, size: 0x1, def value: None
 bool  ___reassignJoystickToPreviousOwnerOnReconnect;

/// @brief Field defaultJoystickAxis2DDeadZoneType, offset: 0xe8, size: 0x4, def value: None
 ::Rewired::DeadZone2DType  ___defaultJoystickAxis2DDeadZoneType;

/// @brief Field defaultJoystickAxis2DSensitivityType, offset: 0xec, size: 0x4, def value: None
 ::Rewired::AxisSensitivity2DType  ___defaultJoystickAxis2DSensitivityType;

/// @brief Field defaultAxisSensitivityType, offset: 0xf0, size: 0x4, def value: None
 ::Rewired::AxisSensitivityType  ___defaultAxisSensitivityType;

/// @brief Field force4WayHats, offset: 0xf4, size: 0x1, def value: None
 bool  ___force4WayHats;

/// @brief Field throttleCalibrationMode, offset: 0xf8, size: 0x4, def value: None
 ::Rewired::Config::ThrottleCalibrationMode  ___throttleCalibrationMode;

/// @brief Field activateActionButtonsOnNegativeValue, offset: 0xfc, size: 0x1, def value: None
 bool  ___activateActionButtonsOnNegativeValue;

/// @brief Field deferControllerConnectedEventsOnStart, offset: 0xfd, size: 0x1, def value: None
 bool  ___deferControllerConnectedEventsOnStart;

/// @brief Field logLevel, offset: 0x100, size: 0x4, def value: None
 ::Rewired::Config::LogLevelFlags  ___logLevel;

/// @brief Field editorSettings, offset: 0x108, size: 0x8, def value: None
 ::Rewired::Data::ConfigVars_EditorVars*  ___editorSettings;

/// @brief Field __platformVarsDict, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_pljdBUONjhfKQgiZFfpQAZfurbjVA*>*  _____platformVarsDict;

/// @brief Field __getSetPlatformVariableDict, offset: 0x118, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Data::ConfigVars_wCuCruHZFVksIWXfZnezHvfbwGUJ*>*  _____getSetPlatformVariableDict;

/// @brief Field __configVarsValues, offset: 0x120, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::KeyedGetSetValueStore_1<::StringW>*  _____configVarsValues;

/// @brief Field __valueDelegates, offset: 0x128, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _____valueDelegates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::ConfigVars, ___updateMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___updateLoop) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___alwaysUseUnityInput) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___windowsStandalonePrimaryInputSource) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___osx_primaryInputSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___linux_primaryInputSource) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___windowsUWP_primaryInputSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___xboxOne_primaryInputSource) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___gameCoreXboxOne_primaryInputSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___gameCoreScarlett_primaryInputSource) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___ps4_primaryInputSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___ps5_primaryInputSource) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___webGL_primaryInputSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___useXInput) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___useNativeMouse) == 0x45, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___useEnhancedDeviceSupport) == 0x46, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___osxStandalone_useEnhancedDeviceSupport) == 0x47, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___android_supportUnknownGamepads) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___ps4_assignJoysticksByPS4JoyId) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___useSteamControllerSupport) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___logToScreen) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___runInEditMode) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___allowInputInEditorSceneView) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___unityUsePhysicalKeys) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___keyCombinationOverrideMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___generateKeyEventsOnKeyCombinationOverride) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_windowsStandalone) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_linuxStandalone) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_osxStandalone) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_windowsUWP) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_iOS) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_tvOS) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_android) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_ps4) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_ps5) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_psVita) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_xboxOne) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_gameCoreXboxOne) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_gameCoreScarlett) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_switch) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_switch2) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_webGL) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___platformVars_unknown) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___maxJoysticksPerPlayer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___autoAssignJoysticks) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___assignJoysticksToPlayingPlayersOnly) == 0xe5, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___distributeJoysticksEvenly) == 0xe6, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___reassignJoystickToPreviousOwnerOnReconnect) == 0xe7, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___defaultJoystickAxis2DDeadZoneType) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___defaultJoystickAxis2DSensitivityType) == 0xec, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___defaultAxisSensitivityType) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___force4WayHats) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___throttleCalibrationMode) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___activateActionButtonsOnNegativeValue) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___deferControllerConnectedEventsOnStart) == 0xfd, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___logLevel) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, ___editorSettings) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, _____platformVarsDict) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, _____getSetPlatformVariableDict) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, _____configVarsValues) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::ConfigVars, _____valueDelegates) == 0x128, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::ConfigVars) == 0x130, "Size mismatch!");

} // namespace end def Rewired::Data
