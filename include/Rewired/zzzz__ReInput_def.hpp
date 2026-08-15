#pragma once
// IWYU pragma private; include "Rewired/ReInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/zzzz__EditorPlatform_def.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__ValueWatcher_def.hpp"
#include "Rewired/Utils/Classes/zzzz__CodeHelper_def.hpp"
#include "Rewired/zzzz__ControllerPollingInfo_def.hpp"
#include "Rewired/zzzz__ElementAssignmentConflictCheck_def.hpp"
#include "Rewired/zzzz__ElementAssignmentConflictInfo_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ReInput)
namespace GlobalNamespace {
class CtHdKMFzCRXTgyaDegxJEBJGblBAb;
}
namespace GlobalNamespace {
class SxwAKlGxfwTiLpPYZbEjtHsOIaxx;
}
namespace GlobalNamespace {
class TcdPIZMIwGFYJfZZOMhQGedCCqvbA;
}
namespace GlobalNamespace {
class fIDBlwaEffvZlKwGsbfYddhFcgaWA;
}
namespace GlobalNamespace {
class iBnOrSWQobsJCFvoFuqXUiRVYcrM;
}
namespace Rewired::Config {
struct EnhancedDeviceSupportDeviceType;
}
namespace Rewired::Config {
struct KeyCombinationOverrideMode;
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
namespace Rewired::Config {
struct UpdateMode;
}
namespace Rewired::Data::Mapping {
struct HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickMap;
}
namespace Rewired::Data::Mapping {
class HardwareJoystickTemplateMap;
}
namespace Rewired::Data::Mapping {
class IHardwareControllerTemplateMap;
}
namespace Rewired::Data {
class ConfigVars;
}
namespace Rewired::Data {
class ControllerDataFiles;
}
namespace Rewired::Data {
class IConfigVars_Internal;
}
namespace Rewired::Data {
class UserDataStore;
}
namespace Rewired::Data {
class UserData;
}
namespace Rewired::Interfaces {
class IControllerAssigner;
}
namespace Rewired::Interfaces {
class IGlyphProvider;
}
namespace Rewired::Interfaces {
class ILocalizedStringProvider;
}
namespace Rewired::Interfaces {
class IUserDataStore;
}
namespace Rewired::Platforms {
struct EditorPlatform;
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
template<typename TKey,typename TValue>
class ADictionary_2;
}
namespace Rewired::Utils::Classes::Utility {
class StopwatchBase;
}
namespace Rewired::Utils::Classes::Utility {
class TimerAbs;
}
namespace Rewired::Utils::Classes::Utility {
template<typename T>
class ValueWatcher_1;
}
namespace Rewired::Utils {
template<typename T>
class SafeAction_1;
}
namespace Rewired::Utils {
class SafeAction;
}
namespace Rewired::Utils {
struct UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
class ActiveControllerChangedDelegate;
}
namespace Rewired {
struct AxisSensitivity2DType;
}
namespace Rewired {
struct AxisSensitivityType;
}
namespace Rewired {
class BridgedControllerHWInfo;
}
namespace Rewired {
class BridgedController;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu;
}
namespace Rewired {
class ControllerDisconnectedEventArgs;
}
namespace Rewired {
class ControllerElementIdentifier;
}
namespace Rewired {
class ControllerHelper_ReInput_ConflictCheckingHelper;
}
namespace Rewired {
class ControllerHelper_ReInput_PollingHelper;
}
namespace Rewired {
struct ControllerIdentifier;
}
namespace Rewired {
class ControllerMapEnabler_RuleSet;
}
namespace Rewired {
class ControllerMapLayoutManager_RuleSet;
}
namespace Rewired {
class ControllerMap;
}
namespace Rewired {
struct ControllerPollingInfo;
}
namespace Rewired {
class ControllerStatusChangedEventArgs;
}
namespace Rewired {
class ControllerTemplateMap;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
class Controller;
}
namespace Rewired {
class CustomControllerMap;
}
namespace Rewired {
class CustomController;
}
namespace Rewired {
struct DeadZone2DType;
}
namespace Rewired {
struct ElementAssignmentConflictCheck;
}
namespace Rewired {
struct ElementAssignmentConflictInfo;
}
namespace Rewired {
class HardwareJoystickMap_InputManager;
}
namespace Rewired {
class InputAction;
}
namespace Rewired {
class InputBehavior;
}
namespace Rewired {
class InputCategory;
}
namespace Rewired {
class InputLayout;
}
namespace Rewired {
class InputManager_Base;
}
namespace Rewired {
struct InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK;
}
namespace Rewired {
class InputMapCategory;
}
namespace Rewired {
class JoystickMap;
}
namespace Rewired {
class Joystick;
}
namespace Rewired {
class KeyboardMap;
}
namespace Rewired {
class Keyboard;
}
namespace Rewired {
class MouseMap;
}
namespace Rewired {
class Mouse;
}
namespace Rewired {
class OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA;
}
namespace Rewired {
class OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG;
}
namespace Rewired {
class PlatformInputManager;
}
namespace Rewired {
class Player;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi;
}
namespace Rewired {
class ReInput_ConfigHelper;
}
namespace Rewired {
class ReInput_ControllerHelper;
}
namespace Rewired {
class ReInput_GlyphHelper;
}
namespace Rewired {
class ReInput_LocalizationHelper;
}
namespace Rewired {
class ReInput_MappingHelper;
}
namespace Rewired {
class ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA;
}
namespace Rewired {
class ReInput_PlayerHelper;
}
namespace Rewired {
class ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL;
}
namespace Rewired {
class ReInput_TimeHelper;
}
namespace Rewired {
class ReInput_UnityTouch;
}
namespace Rewired {
class ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA;
}
namespace Rewired {
struct RewiredVersion;
}
namespace Rewired {
class UpdateControllerInfoEventArgs;
}
namespace Rewired {
struct UpdateLoopType;
}
namespace Rewired {
class rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
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
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct FullScreenMode;
}
namespace UnityEngine {
struct Touch;
}
// Forward declare root types
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH;
}
namespace Rewired {
class ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu;
}
namespace Rewired {
class ControllerHelper_ReInput_ConflictCheckingHelper;
}
namespace Rewired {
class ControllerHelper_ReInput_PollingHelper;
}
namespace Rewired {
class OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA;
}
namespace Rewired {
class OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA;
}
namespace Rewired {
class PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi;
}
namespace Rewired {
class ReInput;
}
namespace Rewired {
class ReInput_ConfigHelper;
}
namespace Rewired {
class ReInput_ControllerHelper;
}
namespace Rewired {
class ReInput_GlyphHelper;
}
namespace Rewired {
class ReInput_LocalizationHelper;
}
namespace Rewired {
class ReInput_MappingHelper;
}
namespace Rewired {
class ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA;
}
namespace Rewired {
class ReInput_PlayerHelper;
}
namespace Rewired {
class ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL;
}
namespace Rewired {
class ReInput_TimeHelper;
}
namespace Rewired {
class ReInput_UnityTouch;
}
namespace Rewired {
class ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA;
}
namespace Rewired {
class rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe;
}
// Write type traits
MARK_REF_T(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA*);
MARK_REF_T(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq*);
MARK_REF_T(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA*);
MARK_REF_T(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb*);
MARK_REF_T(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp*);
MARK_REF_T(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu*);
MARK_REF_T(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH*);
MARK_REF_T(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu*);
MARK_REF_T(::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper*);
MARK_REF_T(::Rewired::ControllerHelper_ReInput_PollingHelper*);
MARK_REF_T(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA*);
MARK_REF_T(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA*);
MARK_REF_T(::Rewired::PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi*);
MARK_REF_T(::Rewired::ReInput*);
MARK_REF_T(::Rewired::ReInput_ConfigHelper*);
MARK_REF_T(::Rewired::ReInput_ControllerHelper*);
MARK_REF_T(::Rewired::ReInput_GlyphHelper*);
MARK_REF_T(::Rewired::ReInput_LocalizationHelper*);
MARK_REF_T(::Rewired::ReInput_MappingHelper*);
MARK_REF_T(::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA*);
MARK_REF_T(::Rewired::ReInput_PlayerHelper*);
MARK_REF_T(::Rewired::ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL*);
MARK_REF_T(::Rewired::ReInput_TimeHelper*);
MARK_REF_T(::Rewired::ReInput_UnityTouch*);
MARK_REF_T(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA*);
MARK_REF_T(::Rewired::rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe*);
DEFINE_IL2CPP_CLASS(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA*, "Rewired", "ReInput/ControllerHelper/ConflictCheckingHelper/IfvilbdRIJhBIQTDsHgzmZvMNFqIA");
DEFINE_IL2CPP_CLASS(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq*, "Rewired", "ReInput/ControllerHelper/ConflictCheckingHelper/LBpnzEohFNnJvipeCRAKDBmYwIPq");
DEFINE_IL2CPP_CLASS(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA*, "Rewired", "ReInput/ControllerHelper/ConflictCheckingHelper/QUjuilLLzVYzcECTVRcXiOaiElGEA");
DEFINE_IL2CPP_CLASS(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb*, "Rewired", "ReInput/ControllerHelper/ConflictCheckingHelper/TmRDOBjeHpaXMDUmGlASeEtrpZrb");
DEFINE_IL2CPP_CLASS(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp*, "Rewired", "ReInput/ControllerHelper/ConflictCheckingHelper/hDLEHhmVTmgRAiUDEYUqZcDylNIp");
DEFINE_IL2CPP_CLASS(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu*, "Rewired", "ReInput/ControllerHelper/ConflictCheckingHelper/iNMANLDfKPIlAmjWIBCEvJTArumu");
DEFINE_IL2CPP_CLASS(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH*, "Rewired", "ReInput/ControllerHelper/ConflictCheckingHelper/kDDIsxzeRooJLyqQrsgfNKuyFvXH");
DEFINE_IL2CPP_CLASS(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu*, "Rewired", "ReInput/ControllerHelper/ConflictCheckingHelper/laIMjBqXXgNwEhEmBtrsVVWtgGZu");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper*, "Rewired", "ReInput/ControllerHelper/ConflictCheckingHelper");
DEFINE_IL2CPP_CLASS(::Rewired::ControllerHelper_ReInput_PollingHelper*, "Rewired", "ReInput/ControllerHelper/PollingHelper");
DEFINE_IL2CPP_CLASS(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA*, "Rewired", "ReInput/OTQjebRZYlpFkdIetXjwvnEMmlUA/DQBCXjbYgmqUoDcCcWrJiBvLuqlwA");
DEFINE_IL2CPP_CLASS(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG*, "Rewired", "ReInput/OTQjebRZYlpFkdIetXjwvnEMmlUA/eWQsXkRAasexpyVwueBHMLdWvNUG");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu*, "Rewired", "ReInput/ControllerHelper/PollingHelper/AeQcAnYRhvgIfAEKLxrvDamuBCEu");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ*, "Rewired", "ReInput/ControllerHelper/PollingHelper/KCrqicwQMnVZoxImizzUCCzWhIQ");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA*, "Rewired", "ReInput/ControllerHelper/PollingHelper/LFWccMoiaViMbcrVlXjYWFAcHVyCA");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA*, "Rewired", "ReInput/ControllerHelper/PollingHelper/NhopCuggsucNcuMnKcKAiNsbwTcQA");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA*, "Rewired", "ReInput/ControllerHelper/PollingHelper/OvDuNcQIJehTjHhyFJrOyKpaSQHFA");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA*, "Rewired", "ReInput/ControllerHelper/PollingHelper/PtJRxoIpFXvjtsKTlFyrEXMoYaHOA");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA*, "Rewired", "ReInput/ControllerHelper/PollingHelper/RzYPFzjIPshYwBhqeWOHTFJOsSzqA");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal*, "Rewired", "ReInput/ControllerHelper/PollingHelper/dQoMdWVFXINramacisZfuoJkjcal");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl*, "Rewired", "ReInput/ControllerHelper/PollingHelper/dlicCejglcQvNZPeQARHUCbJoXcl");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD*, "Rewired", "ReInput/ControllerHelper/PollingHelper/kexbXobyqaTQKkdFYEvyXQqnbGnD");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA*, "Rewired", "ReInput/ControllerHelper/PollingHelper/sfniBjkvwDDCbjHhXVEMvWZCxzKgA");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq*, "Rewired", "ReInput/ControllerHelper/PollingHelper/wNYqfDTOSwahByUEfWjpyuVKIccq");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq*, "Rewired", "ReInput/ControllerHelper/PollingHelper/ycYZKozAUnsMThXNMlLpdDXcFjmq");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA*, "Rewired", "ReInput/ControllerHelper/PollingHelper/zAZnUAodryLaGWohFsJUbhPoFHlcA");
DEFINE_IL2CPP_CLASS(::Rewired::PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi*, "Rewired", "ReInput/ControllerHelper/PollingHelper/zbSlPlSbfsBRvPkhNWbAuBGEGlAi");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput*, "Rewired", "ReInput");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput_ConfigHelper*, "Rewired", "ReInput/ConfigHelper");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput_ControllerHelper*, "Rewired", "ReInput/ControllerHelper");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput_GlyphHelper*, "Rewired", "ReInput/GlyphHelper");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput_LocalizationHelper*, "Rewired", "ReInput/LocalizationHelper");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput_MappingHelper*, "Rewired", "ReInput/MappingHelper");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA*, "Rewired", "ReInput/OTQjebRZYlpFkdIetXjwvnEMmlUA");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput_PlayerHelper*, "Rewired", "ReInput/PlayerHelper");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL*, "Rewired", "ReInput/RQLhKTngKDYrTeABCdLlsdFYiTLL");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput_TimeHelper*, "Rewired", "ReInput/TimeHelper");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput_UnityTouch*, "Rewired", "ReInput/UnityTouch");
DEFINE_IL2CPP_CLASS(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA*, "Rewired", "ReInput/rpPewHaUdxWXHuOjVjaJGYrVlsVkA");
DEFINE_IL2CPP_CLASS(::Rewired::rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe*, "Rewired", "ReInput/rpPewHaUdxWXHuOjVjaJGYrVlsVkA/wYLxRNkBkMbLQjNZyywgeAFqmnpe");
// Dependencies Rewired.Utils.Classes.CodeHelper
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/LocalizationHelper
class CORDL_TYPE ReInput_LocalizationHelper : public ::Rewired::Utils::Classes::CodeHelper {
public:
// Declarations
/// @brief Field ZaHjtKcioMnzOjbhyKCPzYTWicvY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ZaHjtKcioMnzOjbhyKCPzYTWicvY, put=setStaticF_ZaHjtKcioMnzOjbhyKCPzYTWicvY)) ::Rewired::ReInput_LocalizationHelper*  ZaHjtKcioMnzOjbhyKCPzYTWicvY;

 __declspec(property(get=get_localizedStringProvider, put=set_localizedStringProvider)) ::Rewired::Interfaces::ILocalizedStringProvider*  localizedStringProvider;

 __declspec(property(get=get_prefetch, put=set_prefetch)) bool  prefetch;

/// @brief Method EyzmWeQgHknizYzLgdnJeApKzvoP, addr 0x1819e07e0, size 0x30, virtual false, abstract: false, final false
static inline void EyzmWeQgHknizYzLgdnJeApKzvoP() ;

static inline ::Rewired::ReInput_LocalizationHelper* New_ctor() ;

/// @brief Method PJPcgKOuzKJrJiSbxTpaEfSdFEdC, addr 0x1819e0810, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_LocalizationHelper* PJPcgKOuzKJrJiSbxTpaEfSdFEdC() ;

/// @brief Method Reload, addr 0x1819e0870, size 0x70, virtual false, abstract: false, final false
inline void Reload() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::ReInput_LocalizationHelper* getStaticF_ZaHjtKcioMnzOjbhyKCPzYTWicvY() ;

/// @brief Method get_localizedStringProvider, addr 0x1819e08e0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Interfaces::ILocalizedStringProvider* get_localizedStringProvider() ;

/// @brief Method get_prefetch, addr 0x1819e0950, size 0x70, virtual false, abstract: false, final false
inline bool get_prefetch() ;

static inline void setStaticF_ZaHjtKcioMnzOjbhyKCPzYTWicvY(::Rewired::ReInput_LocalizationHelper*  value) ;

/// @brief Method set_localizedStringProvider, addr 0x1819e09c0, size 0x70, virtual false, abstract: false, final false
inline void set_localizedStringProvider(::Rewired::Interfaces::ILocalizedStringProvider*  value) ;

/// @brief Method set_prefetch, addr 0x1819e0a30, size 0x70, virtual false, abstract: false, final false
inline void set_prefetch(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput_LocalizationHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput_LocalizationHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput_LocalizationHelper(ReInput_LocalizationHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput_LocalizationHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput_LocalizationHelper(ReInput_LocalizationHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ReInput_LocalizationHelper) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Utils.Classes.CodeHelper
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/GlyphHelper
class CORDL_TYPE ReInput_GlyphHelper : public ::Rewired::Utils::Classes::CodeHelper {
public:
// Declarations
/// @brief Field FqXbHRhVeOhiuOzrDiGsYctiwvIQ, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FqXbHRhVeOhiuOzrDiGsYctiwvIQ, put=setStaticF_FqXbHRhVeOhiuOzrDiGsYctiwvIQ)) ::Rewired::ReInput_GlyphHelper*  FqXbHRhVeOhiuOzrDiGsYctiwvIQ;

 __declspec(property(get=get_glyphProvider, put=set_glyphProvider)) ::Rewired::Interfaces::IGlyphProvider*  glyphProvider;

 __declspec(property(get=get_prefetch, put=set_prefetch)) bool  prefetch;

static inline ::Rewired::ReInput_GlyphHelper* New_ctor() ;

/// @brief Method Reload, addr 0x1819e00c0, size 0x70, virtual false, abstract: false, final false
inline void Reload() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::ReInput_GlyphHelper* getStaticF_FqXbHRhVeOhiuOzrDiGsYctiwvIQ() ;

/// @brief Method get_glyphProvider, addr 0x1819e0130, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::Interfaces::IGlyphProvider* get_glyphProvider() ;

/// @brief Method get_prefetch, addr 0x1819e01a0, size 0x70, virtual false, abstract: false, final false
inline bool get_prefetch() ;

/// @brief Method kfULVcUAcEvMjLhkOKBXQlaxDAWEA, addr 0x1819e0210, size 0x30, virtual false, abstract: false, final false
static inline void kfULVcUAcEvMjLhkOKBXQlaxDAWEA() ;

static inline void setStaticF_FqXbHRhVeOhiuOzrDiGsYctiwvIQ(::Rewired::ReInput_GlyphHelper*  value) ;

/// @brief Method set_glyphProvider, addr 0x1819e0240, size 0x70, virtual false, abstract: false, final false
inline void set_glyphProvider(::Rewired::Interfaces::IGlyphProvider*  value) ;

/// @brief Method set_prefetch, addr 0x1819e02b0, size 0x70, virtual false, abstract: false, final false
inline void set_prefetch(bool  value) ;

/// @brief Method xVplmeMCEkFdlRooMzjHdrMgbOTb, addr 0x1819e0320, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_GlyphHelper* xVplmeMCEkFdlRooMzjHdrMgbOTb() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput_GlyphHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput_GlyphHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput_GlyphHelper(ReInput_GlyphHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput_GlyphHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput_GlyphHelper(ReInput_GlyphHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2171};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ReInput_GlyphHelper) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Utils.Classes.CodeHelper
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ConfigHelper
class CORDL_TYPE ReInput_ConfigHelper : public ::Rewired::Utils::Classes::CodeHelper {
public:
// Declarations
/// @brief Field FkdwqqqvNAKPpnyjhoGgsPnaHhLi, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FkdwqqqvNAKPpnyjhoGgsPnaHhLi, put=setStaticF_FkdwqqqvNAKPpnyjhoGgsPnaHhLi)) ::Rewired::ReInput_ConfigHelper*  FkdwqqqvNAKPpnyjhoGgsPnaHhLi;

 __declspec(property(get=get_activateActionButtonsOnNegativeValue, put=set_activateActionButtonsOnNegativeValue)) bool  activateActionButtonsOnNegativeValue;

 __declspec(property(get=get_alwaysUseUnityInput, put=set_alwaysUseUnityInput)) bool  alwaysUseUnityInput;

 __declspec(property(get=get_android_supportUnknownGamepads, put=set_android_supportUnknownGamepads)) bool  android_supportUnknownGamepads;

 __declspec(property(get=get_assignJoysticksToPlayingPlayersOnly, put=set_assignJoysticksToPlayingPlayersOnly)) bool  assignJoysticksToPlayingPlayersOnly;

 __declspec(property(get=get_autoAssignJoysticks, put=set_autoAssignJoysticks)) bool  autoAssignJoysticks;

 __declspec(property(get=get_defaultAbsoluteAxisPollingDeadZone, put=set_defaultAbsoluteAxisPollingDeadZone)) float_t  defaultAbsoluteAxisPollingDeadZone;

 __declspec(property(get=get_defaultAxisSensitivityType, put=set_defaultAxisSensitivityType)) ::Rewired::AxisSensitivityType  defaultAxisSensitivityType;

 __declspec(property(get=get_defaultJoystickAxis2DDeadZoneType, put=set_defaultJoystickAxis2DDeadZoneType)) ::Rewired::DeadZone2DType  defaultJoystickAxis2DDeadZoneType;

 __declspec(property(get=get_defaultJoystickAxis2DSensitivityType, put=set_defaultJoystickAxis2DSensitivityType)) ::Rewired::AxisSensitivity2DType  defaultJoystickAxis2DSensitivityType;

 __declspec(property(get=get_defaultRelativeAxisPollingDeadZone, put=set_defaultRelativeAxisPollingDeadZone)) float_t  defaultRelativeAxisPollingDeadZone;

 __declspec(property(get=get_deferControllerConnectedEventsOnStart, put=set_deferControllerConnectedEventsOnStart)) bool  deferControllerConnectedEventsOnStart;

 __declspec(property(get=get_disableNativeInput, put=set_disableNativeInput)) bool  disableNativeInput;

 __declspec(property(get=get_distributeJoysticksEvenly, put=set_distributeJoysticksEvenly)) bool  distributeJoysticksEvenly;

 __declspec(property(get=get_enhancedDeviceSupport, put=set_enhancedDeviceSupport)) bool  enhancedDeviceSupport;

 __declspec(property(get=get_enhancedDeviceSupportExcludedDeviceTypes, put=set_enhancedDeviceSupportExcludedDeviceTypes)) ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  enhancedDeviceSupportExcludedDeviceTypes;

 __declspec(property(get=get_force4WayHats, put=set_force4WayHats)) bool  force4WayHats;

 __declspec(property(get=get_generateKeyEventsOnKeyCombinationOverride, put=set_generateKeyEventsOnKeyCombinationOverride)) bool  generateKeyEventsOnKeyCombinationOverride;

 __declspec(property(get=get_ignoreInputWhenAppNotInFocus, put=set_ignoreInputWhenAppNotInFocus)) bool  ignoreInputWhenAppNotInFocus;

 __declspec(property(get=get_joystickRefreshRate, put=set_joystickRefreshRate)) int32_t  joystickRefreshRate;

 __declspec(property(get=get_keyCombinationOverrideMode, put=set_keyCombinationOverrideMode)) ::Rewired::Config::KeyCombinationOverrideMode  keyCombinationOverrideMode;

 __declspec(property(get=get_linuxStandalonePrimaryInputSource, put=set_linuxStandalonePrimaryInputSource)) ::Rewired::Platforms::LinuxStandalonePrimaryInputSource  linuxStandalonePrimaryInputSource;

 __declspec(property(get=get_logLevel, put=set_logLevel)) ::Rewired::Config::LogLevelFlags  logLevel;

 __declspec(property(get=get_maxJoysticksPerPlayer, put=set_maxJoysticksPerPlayer)) int32_t  maxJoysticksPerPlayer;

 __declspec(property(get=get_nativeKeyboardSupport, put=set_nativeKeyboardSupport)) bool  nativeKeyboardSupport;

 __declspec(property(get=get_nativeMouseSupport, put=set_nativeMouseSupport)) bool  nativeMouseSupport;

 __declspec(property(get=get_osxStandalonePrimaryInputSource, put=set_osxStandalonePrimaryInputSource)) ::Rewired::Platforms::OSXStandalonePrimaryInputSource  osxStandalonePrimaryInputSource;

 __declspec(property(get=get_ps4PrimaryInputSource, put=set_ps4PrimaryInputSource)) ::Rewired::Platforms::PS4PrimaryInputSource  ps4PrimaryInputSource;

 __declspec(property(get=get_reassignJoystickToPreviousOwnerOnReconnect, put=set_reassignJoystickToPreviousOwnerOnReconnect)) bool  reassignJoystickToPreviousOwnerOnReconnect;

/// @brief Field sDExKftfoyHhHPFMGaJpEYDRPJuwA, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_sDExKftfoyHhHPFMGaJpEYDRPJuwA, put=__cordl_internal_set_sDExKftfoyHhHPFMGaJpEYDRPJuwA)) float_t  sDExKftfoyHhHPFMGaJpEYDRPJuwA;

/// @brief Field sJoYcQJNkEHcTnlLfIuMtueUZgzN, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_sJoYcQJNkEHcTnlLfIuMtueUZgzN, put=__cordl_internal_set_sJoYcQJNkEHcTnlLfIuMtueUZgzN)) float_t  sJoYcQJNkEHcTnlLfIuMtueUZgzN;

 __declspec(property(get=get_throttleCalibrationMode, put=set_throttleCalibrationMode)) ::Rewired::Config::ThrottleCalibrationMode  throttleCalibrationMode;

 __declspec(property(get=get_updateLoop, put=set_updateLoop)) ::Rewired::Config::UpdateLoopSetting  updateLoop;

 __declspec(property(get=get_updateMode, put=set_updateMode)) ::Rewired::Config::UpdateMode  updateMode;

 __declspec(property(get=get_useAppleGameControllerFramework, put=set_useAppleGameControllerFramework)) bool  useAppleGameControllerFramework;

 __declspec(property(get=get_useWindowsGamingInput, put=set_useWindowsGamingInput)) bool  useWindowsGamingInput;

 __declspec(property(get=get_useXInput, put=set_useXInput)) bool  useXInput;

 __declspec(property(get=get_webGLPrimaryInputSource, put=set_webGLPrimaryInputSource)) ::Rewired::Platforms::WebGLPrimaryInputSource  webGLPrimaryInputSource;

 __declspec(property(get=get_windowsStandalonePrimaryInputSource, put=set_windowsStandalonePrimaryInputSource)) ::Rewired::Platforms::WindowsStandalonePrimaryInputSource  windowsStandalonePrimaryInputSource;

 __declspec(property(get=get_windowsUWPPrimaryInputSource, put=set_windowsUWPPrimaryInputSource)) ::Rewired::Platforms::WindowsUWPPrimaryInputSource  windowsUWPPrimaryInputSource;

 __declspec(property(get=get_windowsUWPSupportGamepads, put=set_windowsUWPSupportGamepads)) bool  windowsUWPSupportGamepads;

 __declspec(property(get=get_windowsUWPSupportHIDDevices, put=set_windowsUWPSupportHIDDevices)) bool  windowsUWPSupportHIDDevices;

 __declspec(property(get=get_xboxOnePrimaryInputSource, put=set_xboxOnePrimaryInputSource)) ::Rewired::Platforms::XboxOnePrimaryInputSource  xboxOnePrimaryInputSource;

static inline ::Rewired::ReInput_ConfigHelper* New_ctor() ;

constexpr float_t const& __cordl_internal_get_sDExKftfoyHhHPFMGaJpEYDRPJuwA() const;

constexpr float_t& __cordl_internal_get_sDExKftfoyHhHPFMGaJpEYDRPJuwA() ;

constexpr float_t const& __cordl_internal_get_sJoYcQJNkEHcTnlLfIuMtueUZgzN() const;

constexpr float_t& __cordl_internal_get_sJoYcQJNkEHcTnlLfIuMtueUZgzN() ;

constexpr void __cordl_internal_set_sDExKftfoyHhHPFMGaJpEYDRPJuwA(float_t  value) ;

constexpr void __cordl_internal_set_sJoYcQJNkEHcTnlLfIuMtueUZgzN(float_t  value) ;

/// @brief Method .ctor, addr 0x1819dc8c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method dECTuXSpLsTFpppCJWBIXWCYCzGj, addr 0x1819dc8d0, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_ConfigHelper* dECTuXSpLsTFpppCJWBIXWCYCzGj() ;

static inline ::Rewired::ReInput_ConfigHelper* getStaticF_FkdwqqqvNAKPpnyjhoGgsPnaHhLi() ;

/// @brief Method get_activateActionButtonsOnNegativeValue, addr 0x1819dc940, size 0x80, virtual false, abstract: false, final false
inline bool get_activateActionButtonsOnNegativeValue() ;

/// @brief Method get_alwaysUseUnityInput, addr 0x1819dc9c0, size 0x80, virtual false, abstract: false, final false
inline bool get_alwaysUseUnityInput() ;

/// @brief Method get_android_supportUnknownGamepads, addr 0x1819dca40, size 0x80, virtual false, abstract: false, final false
inline bool get_android_supportUnknownGamepads() ;

/// @brief Method get_assignJoysticksToPlayingPlayersOnly, addr 0x1819dcac0, size 0x80, virtual false, abstract: false, final false
inline bool get_assignJoysticksToPlayingPlayersOnly() ;

/// @brief Method get_autoAssignJoysticks, addr 0x1819dcb40, size 0x80, virtual false, abstract: false, final false
inline bool get_autoAssignJoysticks() ;

/// @brief Method get_defaultAbsoluteAxisPollingDeadZone, addr 0x1819dcbc0, size 0x80, virtual false, abstract: false, final false
inline float_t get_defaultAbsoluteAxisPollingDeadZone() ;

/// @brief Method get_defaultAxisSensitivityType, addr 0x1819dcc40, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::AxisSensitivityType get_defaultAxisSensitivityType() ;

/// @brief Method get_defaultJoystickAxis2DDeadZoneType, addr 0x1819dccc0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::DeadZone2DType get_defaultJoystickAxis2DDeadZoneType() ;

/// @brief Method get_defaultJoystickAxis2DSensitivityType, addr 0x1819dcd40, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::AxisSensitivity2DType get_defaultJoystickAxis2DSensitivityType() ;

/// @brief Method get_defaultRelativeAxisPollingDeadZone, addr 0x1819dcdc0, size 0x80, virtual false, abstract: false, final false
inline float_t get_defaultRelativeAxisPollingDeadZone() ;

/// @brief Method get_deferControllerConnectedEventsOnStart, addr 0x1819dce40, size 0x80, virtual false, abstract: false, final false
inline bool get_deferControllerConnectedEventsOnStart() ;

/// @brief Method get_disableNativeInput, addr 0x1819dc9c0, size 0x80, virtual false, abstract: false, final false
inline bool get_disableNativeInput() ;

/// @brief Method get_distributeJoysticksEvenly, addr 0x1819dcec0, size 0x80, virtual false, abstract: false, final false
inline bool get_distributeJoysticksEvenly() ;

/// @brief Method get_enhancedDeviceSupport, addr 0x1819dd020, size 0x80, virtual false, abstract: false, final false
inline bool get_enhancedDeviceSupport() ;

/// @brief Method get_enhancedDeviceSupportExcludedDeviceTypes, addr 0x1819dcf40, size 0xe0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>* get_enhancedDeviceSupportExcludedDeviceTypes() ;

/// @brief Method get_force4WayHats, addr 0x1819dd0a0, size 0x80, virtual false, abstract: false, final false
inline bool get_force4WayHats() ;

/// @brief Method get_generateKeyEventsOnKeyCombinationOverride, addr 0x1819dd120, size 0x80, virtual false, abstract: false, final false
inline bool get_generateKeyEventsOnKeyCombinationOverride() ;

/// @brief Method get_ignoreInputWhenAppNotInFocus, addr 0x1819dd1a0, size 0x80, virtual false, abstract: false, final false
inline bool get_ignoreInputWhenAppNotInFocus() ;

/// @brief Method get_joystickRefreshRate, addr 0x1819dd220, size 0x80, virtual false, abstract: false, final false
inline int32_t get_joystickRefreshRate() ;

/// @brief Method get_keyCombinationOverrideMode, addr 0x1819dd2a0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Config::KeyCombinationOverrideMode get_keyCombinationOverrideMode() ;

/// @brief Method get_linuxStandalonePrimaryInputSource, addr 0x1819dd320, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Platforms::LinuxStandalonePrimaryInputSource get_linuxStandalonePrimaryInputSource() ;

/// @brief Method get_logLevel, addr 0x1819dd3a0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Config::LogLevelFlags get_logLevel() ;

/// @brief Method get_maxJoysticksPerPlayer, addr 0x1819dd420, size 0x80, virtual false, abstract: false, final false
inline int32_t get_maxJoysticksPerPlayer() ;

/// @brief Method get_nativeKeyboardSupport, addr 0x1819dd4a0, size 0x80, virtual false, abstract: false, final false
inline bool get_nativeKeyboardSupport() ;

/// @brief Method get_nativeMouseSupport, addr 0x1819dd520, size 0x80, virtual false, abstract: false, final false
inline bool get_nativeMouseSupport() ;

/// @brief Method get_osxStandalonePrimaryInputSource, addr 0x1819dd5a0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Platforms::OSXStandalonePrimaryInputSource get_osxStandalonePrimaryInputSource() ;

/// @brief Method get_ps4PrimaryInputSource, addr 0x1819dd620, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Platforms::PS4PrimaryInputSource get_ps4PrimaryInputSource() ;

/// @brief Method get_reassignJoystickToPreviousOwnerOnReconnect, addr 0x1819dd6a0, size 0x80, virtual false, abstract: false, final false
inline bool get_reassignJoystickToPreviousOwnerOnReconnect() ;

/// @brief Method get_throttleCalibrationMode, addr 0x1819dd720, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Config::ThrottleCalibrationMode get_throttleCalibrationMode() ;

/// @brief Method get_updateLoop, addr 0x1819dd7a0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Config::UpdateLoopSetting get_updateLoop() ;

/// @brief Method get_updateMode, addr 0x1819dd820, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Config::UpdateMode get_updateMode() ;

/// @brief Method get_useAppleGameControllerFramework, addr 0x1819dd8a0, size 0xc0, virtual false, abstract: false, final false
inline bool get_useAppleGameControllerFramework() ;

/// @brief Method get_useWindowsGamingInput, addr 0x1819dd960, size 0xf0, virtual false, abstract: false, final false
inline bool get_useWindowsGamingInput() ;

/// @brief Method get_useXInput, addr 0x1819dda50, size 0xf0, virtual false, abstract: false, final false
inline bool get_useXInput() ;

/// @brief Method get_webGLPrimaryInputSource, addr 0x1819ddb40, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Platforms::WebGLPrimaryInputSource get_webGLPrimaryInputSource() ;

/// @brief Method get_windowsStandalonePrimaryInputSource, addr 0x1819ddbc0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Platforms::WindowsStandalonePrimaryInputSource get_windowsStandalonePrimaryInputSource() ;

/// @brief Method get_windowsUWPPrimaryInputSource, addr 0x1819ddc40, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Platforms::WindowsUWPPrimaryInputSource get_windowsUWPPrimaryInputSource() ;

/// @brief Method get_windowsUWPSupportGamepads, addr 0x1819ddcc0, size 0xf0, virtual false, abstract: false, final false
inline bool get_windowsUWPSupportGamepads() ;

/// @brief Method get_windowsUWPSupportHIDDevices, addr 0x1819dddb0, size 0xf0, virtual false, abstract: false, final false
inline bool get_windowsUWPSupportHIDDevices() ;

/// @brief Method get_xboxOnePrimaryInputSource, addr 0x1819ddea0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Platforms::XboxOnePrimaryInputSource get_xboxOnePrimaryInputSource() ;

static inline void setStaticF_FkdwqqqvNAKPpnyjhoGgsPnaHhLi(::Rewired::ReInput_ConfigHelper*  value) ;

/// @brief Method set_activateActionButtonsOnNegativeValue, addr 0x1819ddf20, size 0xa0, virtual false, abstract: false, final false
inline void set_activateActionButtonsOnNegativeValue(bool  value) ;

/// @brief Method set_alwaysUseUnityInput, addr 0x1819ddfc0, size 0xd0, virtual false, abstract: false, final false
inline void set_alwaysUseUnityInput(bool  value) ;

/// @brief Method set_android_supportUnknownGamepads, addr 0x1819de090, size 0xd0, virtual false, abstract: false, final false
inline void set_android_supportUnknownGamepads(bool  value) ;

/// @brief Method set_assignJoysticksToPlayingPlayersOnly, addr 0x1819de160, size 0xa0, virtual false, abstract: false, final false
inline void set_assignJoysticksToPlayingPlayersOnly(bool  value) ;

/// @brief Method set_autoAssignJoysticks, addr 0x1819de200, size 0xa0, virtual false, abstract: false, final false
inline void set_autoAssignJoysticks(bool  value) ;

/// @brief Method set_defaultAbsoluteAxisPollingDeadZone, addr 0x1819de2a0, size 0x90, virtual false, abstract: false, final false
inline void set_defaultAbsoluteAxisPollingDeadZone(float_t  value) ;

/// @brief Method set_defaultAxisSensitivityType, addr 0x1819de330, size 0xa0, virtual false, abstract: false, final false
inline void set_defaultAxisSensitivityType(::Rewired::AxisSensitivityType  value) ;

/// @brief Method set_defaultJoystickAxis2DDeadZoneType, addr 0x1819de3d0, size 0xa0, virtual false, abstract: false, final false
inline void set_defaultJoystickAxis2DDeadZoneType(::Rewired::DeadZone2DType  value) ;

/// @brief Method set_defaultJoystickAxis2DSensitivityType, addr 0x1819de470, size 0xa0, virtual false, abstract: false, final false
inline void set_defaultJoystickAxis2DSensitivityType(::Rewired::AxisSensitivity2DType  value) ;

/// @brief Method set_defaultRelativeAxisPollingDeadZone, addr 0x1819de510, size 0x90, virtual false, abstract: false, final false
inline void set_defaultRelativeAxisPollingDeadZone(float_t  value) ;

/// @brief Method set_deferControllerConnectedEventsOnStart, addr 0x1819de5a0, size 0xa0, virtual false, abstract: false, final false
inline void set_deferControllerConnectedEventsOnStart(bool  value) ;

/// @brief Method set_disableNativeInput, addr 0x1819ddfc0, size 0xd0, virtual false, abstract: false, final false
inline void set_disableNativeInput(bool  value) ;

/// @brief Method set_distributeJoysticksEvenly, addr 0x1819de640, size 0xa0, virtual false, abstract: false, final false
inline void set_distributeJoysticksEvenly(bool  value) ;

/// @brief Method set_enhancedDeviceSupport, addr 0x1819de7b0, size 0xd0, virtual false, abstract: false, final false
inline void set_enhancedDeviceSupport(bool  value) ;

/// @brief Method set_enhancedDeviceSupportExcludedDeviceTypes, addr 0x1819de6e0, size 0xd0, virtual false, abstract: false, final false
inline void set_enhancedDeviceSupportExcludedDeviceTypes(::System::Collections::Generic::List_1<::Rewired::Config::EnhancedDeviceSupportDeviceType>*  value) ;

/// @brief Method set_force4WayHats, addr 0x1819de880, size 0xa0, virtual false, abstract: false, final false
inline void set_force4WayHats(bool  value) ;

/// @brief Method set_generateKeyEventsOnKeyCombinationOverride, addr 0x1819de920, size 0xa0, virtual false, abstract: false, final false
inline void set_generateKeyEventsOnKeyCombinationOverride(bool  value) ;

/// @brief Method set_ignoreInputWhenAppNotInFocus, addr 0x1819de9c0, size 0x120, virtual false, abstract: false, final false
inline void set_ignoreInputWhenAppNotInFocus(bool  value) ;

/// @brief Method set_joystickRefreshRate, addr 0x1819deae0, size 0xb0, virtual false, abstract: false, final false
inline void set_joystickRefreshRate(int32_t  value) ;

/// @brief Method set_keyCombinationOverrideMode, addr 0x1819deb90, size 0xa0, virtual false, abstract: false, final false
inline void set_keyCombinationOverrideMode(::Rewired::Config::KeyCombinationOverrideMode  value) ;

/// @brief Method set_linuxStandalonePrimaryInputSource, addr 0x1819dec30, size 0xd0, virtual false, abstract: false, final false
inline void set_linuxStandalonePrimaryInputSource(::Rewired::Platforms::LinuxStandalonePrimaryInputSource  value) ;

/// @brief Method set_logLevel, addr 0x1819ded00, size 0xa0, virtual false, abstract: false, final false
inline void set_logLevel(::Rewired::Config::LogLevelFlags  value) ;

/// @brief Method set_maxJoysticksPerPlayer, addr 0x1819deda0, size 0xb0, virtual false, abstract: false, final false
inline void set_maxJoysticksPerPlayer(int32_t  value) ;

/// @brief Method set_nativeKeyboardSupport, addr 0x1819dee50, size 0xd0, virtual false, abstract: false, final false
inline void set_nativeKeyboardSupport(bool  value) ;

/// @brief Method set_nativeMouseSupport, addr 0x1819def20, size 0xd0, virtual false, abstract: false, final false
inline void set_nativeMouseSupport(bool  value) ;

/// @brief Method set_osxStandalonePrimaryInputSource, addr 0x1819deff0, size 0xd0, virtual false, abstract: false, final false
inline void set_osxStandalonePrimaryInputSource(::Rewired::Platforms::OSXStandalonePrimaryInputSource  value) ;

/// @brief Method set_ps4PrimaryInputSource, addr 0x1819df0c0, size 0xd0, virtual false, abstract: false, final false
inline void set_ps4PrimaryInputSource(::Rewired::Platforms::PS4PrimaryInputSource  value) ;

/// @brief Method set_reassignJoystickToPreviousOwnerOnReconnect, addr 0x1819df190, size 0xa0, virtual false, abstract: false, final false
inline void set_reassignJoystickToPreviousOwnerOnReconnect(bool  value) ;

/// @brief Method set_throttleCalibrationMode, addr 0x1819df230, size 0xc0, virtual false, abstract: false, final false
inline void set_throttleCalibrationMode(::Rewired::Config::ThrottleCalibrationMode  value) ;

/// @brief Method set_updateLoop, addr 0x1819df2f0, size 0xe0, virtual false, abstract: false, final false
inline void set_updateLoop(::Rewired::Config::UpdateLoopSetting  value) ;

/// @brief Method set_updateMode, addr 0x1819df3d0, size 0xd0, virtual false, abstract: false, final false
inline void set_updateMode(::Rewired::Config::UpdateMode  value) ;

/// @brief Method set_useAppleGameControllerFramework, addr 0x1819df4a0, size 0x100, virtual false, abstract: false, final false
inline void set_useAppleGameControllerFramework(bool  value) ;

/// @brief Method set_useWindowsGamingInput, addr 0x1819df5a0, size 0x2c0, virtual false, abstract: false, final false
inline void set_useWindowsGamingInput(bool  value) ;

/// @brief Method set_useXInput, addr 0x1819df860, size 0x2c0, virtual false, abstract: false, final false
inline void set_useXInput(bool  value) ;

/// @brief Method set_webGLPrimaryInputSource, addr 0x1819dfb20, size 0xd0, virtual false, abstract: false, final false
inline void set_webGLPrimaryInputSource(::Rewired::Platforms::WebGLPrimaryInputSource  value) ;

/// @brief Method set_windowsStandalonePrimaryInputSource, addr 0x1819dfbf0, size 0x110, virtual false, abstract: false, final false
inline void set_windowsStandalonePrimaryInputSource(::Rewired::Platforms::WindowsStandalonePrimaryInputSource  value) ;

/// @brief Method set_windowsUWPPrimaryInputSource, addr 0x1819dfd00, size 0xd0, virtual false, abstract: false, final false
inline void set_windowsUWPPrimaryInputSource(::Rewired::Platforms::WindowsUWPPrimaryInputSource  value) ;

/// @brief Method set_windowsUWPSupportGamepads, addr 0x1819dfdd0, size 0x110, virtual false, abstract: false, final false
inline void set_windowsUWPSupportGamepads(bool  value) ;

/// @brief Method set_windowsUWPSupportHIDDevices, addr 0x1819dfee0, size 0x110, virtual false, abstract: false, final false
inline void set_windowsUWPSupportHIDDevices(bool  value) ;

/// @brief Method set_xboxOnePrimaryInputSource, addr 0x1819dfff0, size 0xd0, virtual false, abstract: false, final false
inline void set_xboxOnePrimaryInputSource(::Rewired::Platforms::XboxOnePrimaryInputSource  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput_ConfigHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput_ConfigHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput_ConfigHelper(ReInput_ConfigHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput_ConfigHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput_ConfigHelper(ReInput_ConfigHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2172};

/// @brief Field sJoYcQJNkEHcTnlLfIuMtueUZgzN, offset: 0x10, size: 0x4, def value: None
 float_t  ___sJoYcQJNkEHcTnlLfIuMtueUZgzN;

/// @brief Field sDExKftfoyHhHPFMGaJpEYDRPJuwA, offset: 0x14, size: 0x4, def value: None
 float_t  ___sDExKftfoyHhHPFMGaJpEYDRPJuwA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ReInput_ConfigHelper, ___sJoYcQJNkEHcTnlLfIuMtueUZgzN) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_ConfigHelper, ___sDExKftfoyHhHPFMGaJpEYDRPJuwA) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Rewired::ReInput_ConfigHelper) == 0x18, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/AeQcAnYRhvgIfAEKLxrvDamuBCEu
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu : public ::System::Object {
public:
// Declarations
/// @brief Field FPTGeucVMIHuJOuknnrxnVXvpOYCA, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_FPTGeucVMIHuJOuknnrxnVXvpOYCA, put=__cordl_internal_set_FPTGeucVMIHuJOuknnrxnVXvpOYCA)) ::Rewired::ControllerPollingInfo  FPTGeucVMIHuJOuknnrxnVXvpOYCA;

/// @brief Field KeilCeIhITzEcovUdCOjVekocUym, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeilCeIhITzEcovUdCOjVekocUym, put=__cordl_internal_set_KeilCeIhITzEcovUdCOjVekocUym)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  KeilCeIhITzEcovUdCOjVekocUym;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field aQLhJiBaLDtKyzqYuTccMJisaNgF, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_aQLhJiBaLDtKyzqYuTccMJisaNgF, put=__cordl_internal_set_aQLhJiBaLDtKyzqYuTccMJisaNgF)) ::Rewired::ControllerHelper_ReInput_PollingHelper*  aQLhJiBaLDtKyzqYuTccMJisaNgF;

/// @brief Field dYSUgzFkzdCDIpdHhmQLAbKKqAcm, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_dYSUgzFkzdCDIpdHhmQLAbKKqAcm, put=__cordl_internal_set_dYSUgzFkzdCDIpdHhmQLAbKKqAcm)) int32_t  dYSUgzFkzdCDIpdHhmQLAbKKqAcm;

/// @brief Field pahLFAcvvrlcYVkFXjuEBfthYhmcA, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_pahLFAcvvrlcYVkFXjuEBfthYhmcA, put=__cordl_internal_set_pahLFAcvvrlcYVkFXjuEBfthYhmcA)) int32_t  pahLFAcvvrlcYVkFXjuEBfthYhmcA;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BMxCuEfltYdZXCQzhLiLZpcNwKJLb, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void BMxCuEfltYdZXCQzhLiLZpcNwKJLb() ;

/// @brief Method MoveNext, addr 0x18185ec70, size 0x530, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x18185f1a0, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18185f1a0, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x18185f220, size 0x190, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_FPTGeucVMIHuJOuknnrxnVXvpOYCA() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_FPTGeucVMIHuJOuknnrxnVXvpOYCA() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_KeilCeIhITzEcovUdCOjVekocUym() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_KeilCeIhITzEcovUdCOjVekocUym() ;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper* const& __cordl_internal_get_aQLhJiBaLDtKyzqYuTccMJisaNgF() const;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper*& __cordl_internal_get_aQLhJiBaLDtKyzqYuTccMJisaNgF() ;

constexpr int32_t const& __cordl_internal_get_dYSUgzFkzdCDIpdHhmQLAbKKqAcm() const;

constexpr int32_t& __cordl_internal_get_dYSUgzFkzdCDIpdHhmQLAbKKqAcm() ;

constexpr int32_t const& __cordl_internal_get_pahLFAcvvrlcYVkFXjuEBfthYhmcA() const;

constexpr int32_t& __cordl_internal_get_pahLFAcvvrlcYVkFXjuEBfthYhmcA() ;

constexpr void __cordl_internal_set_FPTGeucVMIHuJOuknnrxnVXvpOYCA(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_KeilCeIhITzEcovUdCOjVekocUym(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_aQLhJiBaLDtKyzqYuTccMJisaNgF(::Rewired::ControllerHelper_ReInput_PollingHelper*  value) ;

constexpr void __cordl_internal_set_dYSUgzFkzdCDIpdHhmQLAbKKqAcm(int32_t  value) ;

constexpr void __cordl_internal_set_pahLFAcvvrlcYVkFXjuEBfthYhmcA(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method bfZUFaUCcbdmQmInQCiQPuGFACUR, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void bfZUFaUCcbdmQmInQCiQPuGFACUR() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method kCDzqfEoOcglvbJIfondAgGhetKq, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void kCDzqfEoOcglvbJIfondAgGhetKq() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu(PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu(PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2173};

/// @brief Field dYSUgzFkzdCDIpdHhmQLAbKKqAcm, offset: 0x10, size: 0x4, def value: None
 int32_t  ___dYSUgzFkzdCDIpdHhmQLAbKKqAcm;

/// @brief Field FPTGeucVMIHuJOuknnrxnVXvpOYCA, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___FPTGeucVMIHuJOuknnrxnVXvpOYCA;

/// @brief Field pahLFAcvvrlcYVkFXjuEBfthYhmcA, offset: 0x50, size: 0x4, def value: None
 int32_t  ___pahLFAcvvrlcYVkFXjuEBfthYhmcA;

/// @brief Field aQLhJiBaLDtKyzqYuTccMJisaNgF, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ControllerHelper_ReInput_PollingHelper*  ___aQLhJiBaLDtKyzqYuTccMJisaNgF;

/// @brief Field KeilCeIhITzEcovUdCOjVekocUym, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___KeilCeIhITzEcovUdCOjVekocUym;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu, ___dYSUgzFkzdCDIpdHhmQLAbKKqAcm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu, ___FPTGeucVMIHuJOuknnrxnVXvpOYCA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu, ___pahLFAcvvrlcYVkFXjuEBfthYhmcA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu, ___aQLhJiBaLDtKyzqYuTccMJisaNgF) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu, ___KeilCeIhITzEcovUdCOjVekocUym) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/kexbXobyqaTQKkdFYEvyXQqnbGnD
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD : public ::System::Object {
public:
// Declarations
/// @brief Field KxxdSaiPGKMlamHcMcGEuVtLRgUIA, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_KxxdSaiPGKMlamHcMcGEuVtLRgUIA, put=__cordl_internal_set_KxxdSaiPGKMlamHcMcGEuVtLRgUIA)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  KxxdSaiPGKMlamHcMcGEuVtLRgUIA;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field exNTFOKKgZoFvjoMYUOemDdtWacd, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_exNTFOKKgZoFvjoMYUOemDdtWacd, put=__cordl_internal_set_exNTFOKKgZoFvjoMYUOemDdtWacd)) int32_t  exNTFOKKgZoFvjoMYUOemDdtWacd;

/// @brief Field nvdcVVJQuGjljyoMCrWFkDoXMuuf, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_nvdcVVJQuGjljyoMCrWFkDoXMuuf, put=__cordl_internal_set_nvdcVVJQuGjljyoMCrWFkDoXMuuf)) ::Rewired::ControllerPollingInfo  nvdcVVJQuGjljyoMCrWFkDoXMuuf;

/// @brief Field tDpAhdpMXLMfjYaWFvOtArxjyFFL, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tDpAhdpMXLMfjYaWFvOtArxjyFFL, put=__cordl_internal_set_tDpAhdpMXLMfjYaWFvOtArxjyFFL)) ::Rewired::ControllerHelper_ReInput_PollingHelper*  tDpAhdpMXLMfjYaWFvOtArxjyFFL;

/// @brief Field uVffbxeSjDDIsEAFfMZsgLQjfbjKd, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_uVffbxeSjDDIsEAFfMZsgLQjfbjKd, put=__cordl_internal_set_uVffbxeSjDDIsEAFfMZsgLQjfbjKd)) int32_t  uVffbxeSjDDIsEAFfMZsgLQjfbjKd;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181873e00, size 0x6a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x1818744a0, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1818744a0, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867910, size 0x1f0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method XBJhLOqddEkTyblFhSgdsnXkNeZp, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void XBJhLOqddEkTyblFhSgdsnXkNeZp() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_KxxdSaiPGKMlamHcMcGEuVtLRgUIA() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_KxxdSaiPGKMlamHcMcGEuVtLRgUIA() ;

constexpr int32_t const& __cordl_internal_get_exNTFOKKgZoFvjoMYUOemDdtWacd() const;

constexpr int32_t& __cordl_internal_get_exNTFOKKgZoFvjoMYUOemDdtWacd() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_nvdcVVJQuGjljyoMCrWFkDoXMuuf() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_nvdcVVJQuGjljyoMCrWFkDoXMuuf() ;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper* const& __cordl_internal_get_tDpAhdpMXLMfjYaWFvOtArxjyFFL() const;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper*& __cordl_internal_get_tDpAhdpMXLMfjYaWFvOtArxjyFFL() ;

constexpr int32_t const& __cordl_internal_get_uVffbxeSjDDIsEAFfMZsgLQjfbjKd() const;

constexpr int32_t& __cordl_internal_get_uVffbxeSjDDIsEAFfMZsgLQjfbjKd() ;

constexpr void __cordl_internal_set_KxxdSaiPGKMlamHcMcGEuVtLRgUIA(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_exNTFOKKgZoFvjoMYUOemDdtWacd(int32_t  value) ;

constexpr void __cordl_internal_set_nvdcVVJQuGjljyoMCrWFkDoXMuuf(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_tDpAhdpMXLMfjYaWFvOtArxjyFFL(::Rewired::ControllerHelper_ReInput_PollingHelper*  value) ;

constexpr void __cordl_internal_set_uVffbxeSjDDIsEAFfMZsgLQjfbjKd(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method auboiMExERaYwZZmlgdiKOtEiBzw, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void auboiMExERaYwZZmlgdiKOtEiBzw() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method qLGWqYdQfHTSKlxRCKgHAkqdkchq, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void qLGWqYdQfHTSKlxRCKgHAkqdkchq() ;

/// @brief Method vgMSglHaKASqSIrrgCePmiFXNlww, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void vgMSglHaKASqSIrrgCePmiFXNlww() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD(PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD(PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2174};

/// @brief Field exNTFOKKgZoFvjoMYUOemDdtWacd, offset: 0x10, size: 0x4, def value: None
 int32_t  ___exNTFOKKgZoFvjoMYUOemDdtWacd;

/// @brief Field nvdcVVJQuGjljyoMCrWFkDoXMuuf, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___nvdcVVJQuGjljyoMCrWFkDoXMuuf;

/// @brief Field uVffbxeSjDDIsEAFfMZsgLQjfbjKd, offset: 0x50, size: 0x4, def value: None
 int32_t  ___uVffbxeSjDDIsEAFfMZsgLQjfbjKd;

/// @brief Field tDpAhdpMXLMfjYaWFvOtArxjyFFL, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ControllerHelper_ReInput_PollingHelper*  ___tDpAhdpMXLMfjYaWFvOtArxjyFFL;

/// @brief Field KxxdSaiPGKMlamHcMcGEuVtLRgUIA, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___KxxdSaiPGKMlamHcMcGEuVtLRgUIA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD, ___exNTFOKKgZoFvjoMYUOemDdtWacd) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD, ___nvdcVVJQuGjljyoMCrWFkDoXMuuf) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD, ___uVffbxeSjDDIsEAFfMZsgLQjfbjKd) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD, ___tDpAhdpMXLMfjYaWFvOtArxjyFFL) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD, ___KxxdSaiPGKMlamHcMcGEuVtLRgUIA) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/ycYZKozAUnsMThXNMlLpdDXcFjmq
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq : public ::System::Object {
public:
// Declarations
/// @brief Field BNhNeiMbPvKXqdwFKumlddPjgYNfA, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_BNhNeiMbPvKXqdwFKumlddPjgYNfA, put=__cordl_internal_set_BNhNeiMbPvKXqdwFKumlddPjgYNfA)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  BNhNeiMbPvKXqdwFKumlddPjgYNfA;

/// @brief Field HzEKziqoDDeLXXvjqpfmGDAApvhp, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_HzEKziqoDDeLXXvjqpfmGDAApvhp, put=__cordl_internal_set_HzEKziqoDDeLXXvjqpfmGDAApvhp)) ::Rewired::ControllerHelper_ReInput_PollingHelper*  HzEKziqoDDeLXXvjqpfmGDAApvhp;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field irYgjThTLgHJPlXgIxBrBhUtAFpcb, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_irYgjThTLgHJPlXgIxBrBhUtAFpcb, put=__cordl_internal_set_irYgjThTLgHJPlXgIxBrBhUtAFpcb)) int32_t  irYgjThTLgHJPlXgIxBrBhUtAFpcb;

/// @brief Field jkNIItwwSeOLTYibhOauWuObfohm, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_jkNIItwwSeOLTYibhOauWuObfohm, put=__cordl_internal_set_jkNIItwwSeOLTYibhOauWuObfohm)) ::Rewired::ControllerPollingInfo  jkNIItwwSeOLTYibhOauWuObfohm;

/// @brief Field pIySNBzxLQZcJnZfQkisAvIjrlRL, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_pIySNBzxLQZcJnZfQkisAvIjrlRL, put=__cordl_internal_set_pIySNBzxLQZcJnZfQkisAvIjrlRL)) int32_t  pIySNBzxLQZcJnZfQkisAvIjrlRL;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181875040, size 0x6a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method OfAYJHTjwTyDDjbDzQhivvltIdcM, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void OfAYJHTjwTyDDjbDzQhivvltIdcM() ;

/// @brief Method SJtIDDPrMgIjvahAfXhvVtBPayMR, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void SJtIDDPrMgIjvahAfXhvVtBPayMR() ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x1818756e0, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1818756e0, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867910, size 0x1f0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method WcljFyZoIyEfjgtexSFYkiGoNpxQ, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void WcljFyZoIyEfjgtexSFYkiGoNpxQ() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_BNhNeiMbPvKXqdwFKumlddPjgYNfA() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_BNhNeiMbPvKXqdwFKumlddPjgYNfA() ;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper* const& __cordl_internal_get_HzEKziqoDDeLXXvjqpfmGDAApvhp() const;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper*& __cordl_internal_get_HzEKziqoDDeLXXvjqpfmGDAApvhp() ;

constexpr int32_t const& __cordl_internal_get_irYgjThTLgHJPlXgIxBrBhUtAFpcb() const;

constexpr int32_t& __cordl_internal_get_irYgjThTLgHJPlXgIxBrBhUtAFpcb() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_jkNIItwwSeOLTYibhOauWuObfohm() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_jkNIItwwSeOLTYibhOauWuObfohm() ;

constexpr int32_t const& __cordl_internal_get_pIySNBzxLQZcJnZfQkisAvIjrlRL() const;

constexpr int32_t& __cordl_internal_get_pIySNBzxLQZcJnZfQkisAvIjrlRL() ;

constexpr void __cordl_internal_set_BNhNeiMbPvKXqdwFKumlddPjgYNfA(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_HzEKziqoDDeLXXvjqpfmGDAApvhp(::Rewired::ControllerHelper_ReInput_PollingHelper*  value) ;

constexpr void __cordl_internal_set_irYgjThTLgHJPlXgIxBrBhUtAFpcb(int32_t  value) ;

constexpr void __cordl_internal_set_jkNIItwwSeOLTYibhOauWuObfohm(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_pIySNBzxLQZcJnZfQkisAvIjrlRL(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method fKRadmlAhIqXGvhBqtbnsZsfRRit, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void fKRadmlAhIqXGvhBqtbnsZsfRRit() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq(PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq(PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2175};

/// @brief Field irYgjThTLgHJPlXgIxBrBhUtAFpcb, offset: 0x10, size: 0x4, def value: None
 int32_t  ___irYgjThTLgHJPlXgIxBrBhUtAFpcb;

/// @brief Field jkNIItwwSeOLTYibhOauWuObfohm, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___jkNIItwwSeOLTYibhOauWuObfohm;

/// @brief Field pIySNBzxLQZcJnZfQkisAvIjrlRL, offset: 0x50, size: 0x4, def value: None
 int32_t  ___pIySNBzxLQZcJnZfQkisAvIjrlRL;

/// @brief Field HzEKziqoDDeLXXvjqpfmGDAApvhp, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ControllerHelper_ReInput_PollingHelper*  ___HzEKziqoDDeLXXvjqpfmGDAApvhp;

/// @brief Field BNhNeiMbPvKXqdwFKumlddPjgYNfA, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___BNhNeiMbPvKXqdwFKumlddPjgYNfA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq, ___irYgjThTLgHJPlXgIxBrBhUtAFpcb) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq, ___jkNIItwwSeOLTYibhOauWuObfohm) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq, ___pIySNBzxLQZcJnZfQkisAvIjrlRL) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq, ___HzEKziqoDDeLXXvjqpfmGDAApvhp) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq, ___BNhNeiMbPvKXqdwFKumlddPjgYNfA) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/zAZnUAodryLaGWohFsJUbhPoFHlcA
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA : public ::System::Object {
public:
// Declarations
/// @brief Field JAWHTNCUzmAHRcvTEXQrGpLChzVjA, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_JAWHTNCUzmAHRcvTEXQrGpLChzVjA, put=__cordl_internal_set_JAWHTNCUzmAHRcvTEXQrGpLChzVjA)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  JAWHTNCUzmAHRcvTEXQrGpLChzVjA;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field YBsoKsXohGtMrwzCjOQrclaEjuoD, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_YBsoKsXohGtMrwzCjOQrclaEjuoD, put=__cordl_internal_set_YBsoKsXohGtMrwzCjOQrclaEjuoD)) ::Rewired::ControllerPollingInfo  YBsoKsXohGtMrwzCjOQrclaEjuoD;

/// @brief Field qJOXNOQDDeuaxFppKTWrTfQSJFqh, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_qJOXNOQDDeuaxFppKTWrTfQSJFqh, put=__cordl_internal_set_qJOXNOQDDeuaxFppKTWrTfQSJFqh)) int32_t  qJOXNOQDDeuaxFppKTWrTfQSJFqh;

/// @brief Field vYQBrqsqooJfJIKjzSdiKzXcOFGd, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_vYQBrqsqooJfJIKjzSdiKzXcOFGd, put=__cordl_internal_set_vYQBrqsqooJfJIKjzSdiKzXcOFGd)) ::Rewired::ControllerHelper_ReInput_PollingHelper*  vYQBrqsqooJfJIKjzSdiKzXcOFGd;

/// @brief Field xSlCCLVtTslMXJvByLupsjNLQQOJ, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_xSlCCLVtTslMXJvByLupsjNLQQOJ, put=__cordl_internal_set_xSlCCLVtTslMXJvByLupsjNLQQOJ)) int32_t  xSlCCLVtTslMXJvByLupsjNLQQOJ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181875760, size 0x6a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181875e00, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181875e00, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867910, size 0x1f0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method ZsQPCCsTjXiCkhvXkndsYZbPIwRS, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void ZsQPCCsTjXiCkhvXkndsYZbPIwRS() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_JAWHTNCUzmAHRcvTEXQrGpLChzVjA() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_JAWHTNCUzmAHRcvTEXQrGpLChzVjA() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_YBsoKsXohGtMrwzCjOQrclaEjuoD() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_YBsoKsXohGtMrwzCjOQrclaEjuoD() ;

constexpr int32_t const& __cordl_internal_get_qJOXNOQDDeuaxFppKTWrTfQSJFqh() const;

constexpr int32_t& __cordl_internal_get_qJOXNOQDDeuaxFppKTWrTfQSJFqh() ;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper* const& __cordl_internal_get_vYQBrqsqooJfJIKjzSdiKzXcOFGd() const;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper*& __cordl_internal_get_vYQBrqsqooJfJIKjzSdiKzXcOFGd() ;

constexpr int32_t const& __cordl_internal_get_xSlCCLVtTslMXJvByLupsjNLQQOJ() const;

constexpr int32_t& __cordl_internal_get_xSlCCLVtTslMXJvByLupsjNLQQOJ() ;

constexpr void __cordl_internal_set_JAWHTNCUzmAHRcvTEXQrGpLChzVjA(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_YBsoKsXohGtMrwzCjOQrclaEjuoD(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_qJOXNOQDDeuaxFppKTWrTfQSJFqh(int32_t  value) ;

constexpr void __cordl_internal_set_vYQBrqsqooJfJIKjzSdiKzXcOFGd(::Rewired::ControllerHelper_ReInput_PollingHelper*  value) ;

constexpr void __cordl_internal_set_xSlCCLVtTslMXJvByLupsjNLQQOJ(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method lyatNgXoVEImYSfforyUlanpeyTf, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void lyatNgXoVEImYSfforyUlanpeyTf() ;

/// @brief Method szUtrKyTzcWsKAsEhkqYSbRMhJbS, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void szUtrKyTzcWsKAsEhkqYSbRMhJbS() ;

/// @brief Method tiStmNLJUkbnENCjhaIbCiAOxnOpA, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void tiStmNLJUkbnENCjhaIbCiAOxnOpA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA(PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA(PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2176};

/// @brief Field xSlCCLVtTslMXJvByLupsjNLQQOJ, offset: 0x10, size: 0x4, def value: None
 int32_t  ___xSlCCLVtTslMXJvByLupsjNLQQOJ;

/// @brief Field YBsoKsXohGtMrwzCjOQrclaEjuoD, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___YBsoKsXohGtMrwzCjOQrclaEjuoD;

/// @brief Field qJOXNOQDDeuaxFppKTWrTfQSJFqh, offset: 0x50, size: 0x4, def value: None
 int32_t  ___qJOXNOQDDeuaxFppKTWrTfQSJFqh;

/// @brief Field vYQBrqsqooJfJIKjzSdiKzXcOFGd, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ControllerHelper_ReInput_PollingHelper*  ___vYQBrqsqooJfJIKjzSdiKzXcOFGd;

/// @brief Field JAWHTNCUzmAHRcvTEXQrGpLChzVjA, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___JAWHTNCUzmAHRcvTEXQrGpLChzVjA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA, ___xSlCCLVtTslMXJvByLupsjNLQQOJ) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA, ___YBsoKsXohGtMrwzCjOQrclaEjuoD) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA, ___qJOXNOQDDeuaxFppKTWrTfQSJFqh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA, ___vYQBrqsqooJfJIKjzSdiKzXcOFGd) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA, ___JAWHTNCUzmAHRcvTEXQrGpLChzVjA) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/LFWccMoiaViMbcrVlXjYWFAcHVyCA
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA : public ::System::Object {
public:
// Declarations
/// @brief Field AvhbgWFFSnqvqnKFfnIRRuBNZBTj, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_AvhbgWFFSnqvqnKFfnIRRuBNZBTj, put=__cordl_internal_set_AvhbgWFFSnqvqnKFfnIRRuBNZBTj)) ::Rewired::ControllerHelper_ReInput_PollingHelper*  AvhbgWFFSnqvqnKFfnIRRuBNZBTj;

/// @brief Field KBRDBONmLeBEQaFpcJaMElVXGuGXA, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_KBRDBONmLeBEQaFpcJaMElVXGuGXA, put=__cordl_internal_set_KBRDBONmLeBEQaFpcJaMElVXGuGXA)) int32_t  KBRDBONmLeBEQaFpcJaMElVXGuGXA;

/// @brief Field MVubgtgrgQeacsZsDHArSKMGZqCd, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_MVubgtgrgQeacsZsDHArSKMGZqCd, put=__cordl_internal_set_MVubgtgrgQeacsZsDHArSKMGZqCd)) ::Rewired::ControllerPollingInfo  MVubgtgrgQeacsZsDHArSKMGZqCd;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field hvtgOIoEAcRPHMlUgbXVjadHBVgR, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_hvtgOIoEAcRPHMlUgbXVjadHBVgR, put=__cordl_internal_set_hvtgOIoEAcRPHMlUgbXVjadHBVgR)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  hvtgOIoEAcRPHMlUgbXVjadHBVgR;

/// @brief Field ySMxgGGvxhMapBXNIHFBUWQKvrRn, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_ySMxgGGvxhMapBXNIHFBUWQKvrRn, put=__cordl_internal_set_ySMxgGGvxhMapBXNIHFBUWQKvrRn)) int32_t  ySMxgGGvxhMapBXNIHFBUWQKvrRn;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method EtRPSYGVdNNTcYkCdJkRQrARHAMN, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void EtRPSYGVdNNTcYkCdJkRQrARHAMN() ;

/// @brief Method MoveNext, addr 0x1818671f0, size 0x6a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181867890, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181867890, size 0x80, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867910, size 0x1f0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method TQNgsoIpfgLhrcSuYNhTBVRvidKyA, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void TQNgsoIpfgLhrcSuYNhTBVRvidKyA() ;

/// @brief Method WarFtAhQOYBnAsOMeuOmMxFdgNjdA, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void WarFtAhQOYBnAsOMeuOmMxFdgNjdA() ;

/// @brief Method XlUWSpdQMVQFYxbylpEQjTAbcdKs, addr 0x180d75a40, size 0x15100, virtual false, abstract: false, final false
inline void XlUWSpdQMVQFYxbylpEQjTAbcdKs() ;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper* const& __cordl_internal_get_AvhbgWFFSnqvqnKFfnIRRuBNZBTj() const;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper*& __cordl_internal_get_AvhbgWFFSnqvqnKFfnIRRuBNZBTj() ;

constexpr int32_t const& __cordl_internal_get_KBRDBONmLeBEQaFpcJaMElVXGuGXA() const;

constexpr int32_t& __cordl_internal_get_KBRDBONmLeBEQaFpcJaMElVXGuGXA() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_MVubgtgrgQeacsZsDHArSKMGZqCd() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_MVubgtgrgQeacsZsDHArSKMGZqCd() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_hvtgOIoEAcRPHMlUgbXVjadHBVgR() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_hvtgOIoEAcRPHMlUgbXVjadHBVgR() ;

constexpr int32_t const& __cordl_internal_get_ySMxgGGvxhMapBXNIHFBUWQKvrRn() const;

constexpr int32_t& __cordl_internal_get_ySMxgGGvxhMapBXNIHFBUWQKvrRn() ;

constexpr void __cordl_internal_set_AvhbgWFFSnqvqnKFfnIRRuBNZBTj(::Rewired::ControllerHelper_ReInput_PollingHelper*  value) ;

constexpr void __cordl_internal_set_KBRDBONmLeBEQaFpcJaMElVXGuGXA(int32_t  value) ;

constexpr void __cordl_internal_set_MVubgtgrgQeacsZsDHArSKMGZqCd(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_hvtgOIoEAcRPHMlUgbXVjadHBVgR(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_ySMxgGGvxhMapBXNIHFBUWQKvrRn(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA(PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA(PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2177};

/// @brief Field KBRDBONmLeBEQaFpcJaMElVXGuGXA, offset: 0x10, size: 0x4, def value: None
 int32_t  ___KBRDBONmLeBEQaFpcJaMElVXGuGXA;

/// @brief Field MVubgtgrgQeacsZsDHArSKMGZqCd, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___MVubgtgrgQeacsZsDHArSKMGZqCd;

/// @brief Field ySMxgGGvxhMapBXNIHFBUWQKvrRn, offset: 0x50, size: 0x4, def value: None
 int32_t  ___ySMxgGGvxhMapBXNIHFBUWQKvrRn;

/// @brief Field AvhbgWFFSnqvqnKFfnIRRuBNZBTj, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ControllerHelper_ReInput_PollingHelper*  ___AvhbgWFFSnqvqnKFfnIRRuBNZBTj;

/// @brief Field hvtgOIoEAcRPHMlUgbXVjadHBVgR, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___hvtgOIoEAcRPHMlUgbXVjadHBVgR;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA, ___KBRDBONmLeBEQaFpcJaMElVXGuGXA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA, ___MVubgtgrgQeacsZsDHArSKMGZqCd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA, ___ySMxgGGvxhMapBXNIHFBUWQKvrRn) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA, ___AvhbgWFFSnqvqnKFfnIRRuBNZBTj) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA, ___hvtgOIoEAcRPHMlUgbXVjadHBVgR) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA) == 0x68, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/PtJRxoIpFXvjtsKTlFyrEXMoYaHOA
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA : public ::System::Object {
public:
// Declarations
/// @brief Field AfJaLGJPJWVfGFYrGHNDNkgmDbfz, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_AfJaLGJPJWVfGFYrGHNDNkgmDbfz, put=__cordl_internal_set_AfJaLGJPJWVfGFYrGHNDNkgmDbfz)) ::Rewired::ControllerPollingInfo  AfJaLGJPJWVfGFYrGHNDNkgmDbfz;

/// @brief Field NUVtVfarevfumCeVymMrBqjsNNEmA, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_NUVtVfarevfumCeVymMrBqjsNNEmA, put=__cordl_internal_set_NUVtVfarevfumCeVymMrBqjsNNEmA)) int32_t  NUVtVfarevfumCeVymMrBqjsNNEmA;

/// @brief Field NsymxVSfetlbjAGiMGtnuxiDIGTx, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_NsymxVSfetlbjAGiMGtnuxiDIGTx, put=__cordl_internal_set_NsymxVSfetlbjAGiMGtnuxiDIGTx)) ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  NsymxVSfetlbjAGiMGtnuxiDIGTx;

/// @brief Field ShwAawjZwwEohGFyumzOOPCeIzMG, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShwAawjZwwEohGFyumzOOPCeIzMG, put=__cordl_internal_set_ShwAawjZwwEohGFyumzOOPCeIzMG)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ShwAawjZwwEohGFyumzOOPCeIzMG;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field UPusdkGSayecgMpLeroZhhGWevnHA, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_UPusdkGSayecgMpLeroZhhGWevnHA, put=__cordl_internal_set_UPusdkGSayecgMpLeroZhhGWevnHA)) int32_t  UPusdkGSayecgMpLeroZhhGWevnHA;

/// @brief Field iBplUkHfeYaCInnZvuzVMlnbCZZl, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_iBplUkHfeYaCInnZvuzVMlnbCZZl, put=__cordl_internal_set_iBplUkHfeYaCInnZvuzVMlnbCZZl)) int32_t  iBplUkHfeYaCInnZvuzVMlnbCZZl;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181871cc0, size 0x2d0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181871f90, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181871f90, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867050, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_AfJaLGJPJWVfGFYrGHNDNkgmDbfz() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_AfJaLGJPJWVfGFYrGHNDNkgmDbfz() ;

constexpr int32_t const& __cordl_internal_get_NUVtVfarevfumCeVymMrBqjsNNEmA() const;

constexpr int32_t& __cordl_internal_get_NUVtVfarevfumCeVymMrBqjsNNEmA() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::CustomController*>* const& __cordl_internal_get_NsymxVSfetlbjAGiMGtnuxiDIGTx() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*& __cordl_internal_get_NsymxVSfetlbjAGiMGtnuxiDIGTx() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_ShwAawjZwwEohGFyumzOOPCeIzMG() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_ShwAawjZwwEohGFyumzOOPCeIzMG() ;

constexpr int32_t const& __cordl_internal_get_UPusdkGSayecgMpLeroZhhGWevnHA() const;

constexpr int32_t& __cordl_internal_get_UPusdkGSayecgMpLeroZhhGWevnHA() ;

constexpr int32_t const& __cordl_internal_get_iBplUkHfeYaCInnZvuzVMlnbCZZl() const;

constexpr int32_t& __cordl_internal_get_iBplUkHfeYaCInnZvuzVMlnbCZZl() ;

constexpr void __cordl_internal_set_AfJaLGJPJWVfGFYrGHNDNkgmDbfz(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_NUVtVfarevfumCeVymMrBqjsNNEmA(int32_t  value) ;

constexpr void __cordl_internal_set_NsymxVSfetlbjAGiMGtnuxiDIGTx(::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  value) ;

constexpr void __cordl_internal_set_ShwAawjZwwEohGFyumzOOPCeIzMG(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_UPusdkGSayecgMpLeroZhhGWevnHA(int32_t  value) ;

constexpr void __cordl_internal_set_iBplUkHfeYaCInnZvuzVMlnbCZZl(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method xmDmxmQxmkLlPxfADCRHsrKdhiaCA, addr 0x181867100, size 0x30, virtual false, abstract: false, final false
inline void xmDmxmQxmkLlPxfADCRHsrKdhiaCA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA(PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA(PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2178};

/// @brief Field iBplUkHfeYaCInnZvuzVMlnbCZZl, offset: 0x10, size: 0x4, def value: None
 int32_t  ___iBplUkHfeYaCInnZvuzVMlnbCZZl;

/// @brief Field AfJaLGJPJWVfGFYrGHNDNkgmDbfz, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___AfJaLGJPJWVfGFYrGHNDNkgmDbfz;

/// @brief Field UPusdkGSayecgMpLeroZhhGWevnHA, offset: 0x50, size: 0x4, def value: None
 int32_t  ___UPusdkGSayecgMpLeroZhhGWevnHA;

/// @brief Field NsymxVSfetlbjAGiMGtnuxiDIGTx, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  ___NsymxVSfetlbjAGiMGtnuxiDIGTx;

/// @brief Field NUVtVfarevfumCeVymMrBqjsNNEmA, offset: 0x60, size: 0x4, def value: None
 int32_t  ___NUVtVfarevfumCeVymMrBqjsNNEmA;

/// @brief Field ShwAawjZwwEohGFyumzOOPCeIzMG, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___ShwAawjZwwEohGFyumzOOPCeIzMG;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA, ___iBplUkHfeYaCInnZvuzVMlnbCZZl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA, ___AfJaLGJPJWVfGFYrGHNDNkgmDbfz) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA, ___UPusdkGSayecgMpLeroZhhGWevnHA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA, ___NsymxVSfetlbjAGiMGtnuxiDIGTx) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA, ___NUVtVfarevfumCeVymMrBqjsNNEmA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA, ___ShwAawjZwwEohGFyumzOOPCeIzMG) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/zbSlPlSbfsBRvPkhNWbAuBGEGlAi
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi : public ::System::Object {
public:
// Declarations
/// @brief Field DhCGJBkJdgacryyDXRQQoYmkneLs, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_DhCGJBkJdgacryyDXRQQoYmkneLs, put=__cordl_internal_set_DhCGJBkJdgacryyDXRQQoYmkneLs)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  DhCGJBkJdgacryyDXRQQoYmkneLs;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field UsIyjQrJRkEcgOvBQCTCKphMPlunA, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_UsIyjQrJRkEcgOvBQCTCKphMPlunA, put=__cordl_internal_set_UsIyjQrJRkEcgOvBQCTCKphMPlunA)) int32_t  UsIyjQrJRkEcgOvBQCTCKphMPlunA;

/// @brief Field mwyxOzDRQAZVwcaTVZpWKalsPYPi, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_mwyxOzDRQAZVwcaTVZpWKalsPYPi, put=__cordl_internal_set_mwyxOzDRQAZVwcaTVZpWKalsPYPi)) ::Rewired::ControllerPollingInfo  mwyxOzDRQAZVwcaTVZpWKalsPYPi;

/// @brief Field usnUIuzJAhaAiXvtyEgCJtpRfhvv, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_usnUIuzJAhaAiXvtyEgCJtpRfhvv, put=__cordl_internal_set_usnUIuzJAhaAiXvtyEgCJtpRfhvv)) ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  usnUIuzJAhaAiXvtyEgCJtpRfhvv;

/// @brief Field vypowRkmGTHHyHXGbJFbXnTNIFAB, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_vypowRkmGTHHyHXGbJFbXnTNIFAB, put=__cordl_internal_set_vypowRkmGTHHyHXGbJFbXnTNIFAB)) int32_t  vypowRkmGTHHyHXGbJFbXnTNIFAB;

/// @brief Field xzrsbvOngNRopQZXmhjceOHTeoIB, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_xzrsbvOngNRopQZXmhjceOHTeoIB, put=__cordl_internal_set_xzrsbvOngNRopQZXmhjceOHTeoIB)) int32_t  xzrsbvOngNRopQZXmhjceOHTeoIB;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method JKkvemLdtxoNYZkTGkBFcYGKxYfe, addr 0x181867100, size 0x30, virtual false, abstract: false, final false
inline void JKkvemLdtxoNYZkTGkBFcYGKxYfe() ;

/// @brief Method MoveNext, addr 0x181875e80, size 0x2e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181876160, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181876160, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867050, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_DhCGJBkJdgacryyDXRQQoYmkneLs() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_DhCGJBkJdgacryyDXRQQoYmkneLs() ;

constexpr int32_t const& __cordl_internal_get_UsIyjQrJRkEcgOvBQCTCKphMPlunA() const;

constexpr int32_t& __cordl_internal_get_UsIyjQrJRkEcgOvBQCTCKphMPlunA() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_mwyxOzDRQAZVwcaTVZpWKalsPYPi() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_mwyxOzDRQAZVwcaTVZpWKalsPYPi() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::CustomController*>* const& __cordl_internal_get_usnUIuzJAhaAiXvtyEgCJtpRfhvv() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*& __cordl_internal_get_usnUIuzJAhaAiXvtyEgCJtpRfhvv() ;

constexpr int32_t const& __cordl_internal_get_vypowRkmGTHHyHXGbJFbXnTNIFAB() const;

constexpr int32_t& __cordl_internal_get_vypowRkmGTHHyHXGbJFbXnTNIFAB() ;

constexpr int32_t const& __cordl_internal_get_xzrsbvOngNRopQZXmhjceOHTeoIB() const;

constexpr int32_t& __cordl_internal_get_xzrsbvOngNRopQZXmhjceOHTeoIB() ;

constexpr void __cordl_internal_set_DhCGJBkJdgacryyDXRQQoYmkneLs(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_UsIyjQrJRkEcgOvBQCTCKphMPlunA(int32_t  value) ;

constexpr void __cordl_internal_set_mwyxOzDRQAZVwcaTVZpWKalsPYPi(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_usnUIuzJAhaAiXvtyEgCJtpRfhvv(::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  value) ;

constexpr void __cordl_internal_set_vypowRkmGTHHyHXGbJFbXnTNIFAB(int32_t  value) ;

constexpr void __cordl_internal_set_xzrsbvOngNRopQZXmhjceOHTeoIB(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi(PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi(PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2179};

/// @brief Field xzrsbvOngNRopQZXmhjceOHTeoIB, offset: 0x10, size: 0x4, def value: None
 int32_t  ___xzrsbvOngNRopQZXmhjceOHTeoIB;

/// @brief Field mwyxOzDRQAZVwcaTVZpWKalsPYPi, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___mwyxOzDRQAZVwcaTVZpWKalsPYPi;

/// @brief Field vypowRkmGTHHyHXGbJFbXnTNIFAB, offset: 0x50, size: 0x4, def value: None
 int32_t  ___vypowRkmGTHHyHXGbJFbXnTNIFAB;

/// @brief Field usnUIuzJAhaAiXvtyEgCJtpRfhvv, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  ___usnUIuzJAhaAiXvtyEgCJtpRfhvv;

/// @brief Field UsIyjQrJRkEcgOvBQCTCKphMPlunA, offset: 0x60, size: 0x4, def value: None
 int32_t  ___UsIyjQrJRkEcgOvBQCTCKphMPlunA;

/// @brief Field DhCGJBkJdgacryyDXRQQoYmkneLs, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___DhCGJBkJdgacryyDXRQQoYmkneLs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi, ___xzrsbvOngNRopQZXmhjceOHTeoIB) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi, ___mwyxOzDRQAZVwcaTVZpWKalsPYPi) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi, ___vypowRkmGTHHyHXGbJFbXnTNIFAB) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi, ___usnUIuzJAhaAiXvtyEgCJtpRfhvv) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi, ___UsIyjQrJRkEcgOvBQCTCKphMPlunA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi, ___DhCGJBkJdgacryyDXRQQoYmkneLs) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/sfniBjkvwDDCbjHhXVEMvWZCxzKgA
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA : public ::System::Object {
public:
// Declarations
/// @brief Field GqfACCFzQVlVnPcJmajqKuTkAzrxA, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_GqfACCFzQVlVnPcJmajqKuTkAzrxA, put=__cordl_internal_set_GqfACCFzQVlVnPcJmajqKuTkAzrxA)) int32_t  GqfACCFzQVlVnPcJmajqKuTkAzrxA;

/// @brief Field OkmxcyXADNxuqaxObqYFPOkkYiWC, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_OkmxcyXADNxuqaxObqYFPOkkYiWC, put=__cordl_internal_set_OkmxcyXADNxuqaxObqYFPOkkYiWC)) int32_t  OkmxcyXADNxuqaxObqYFPOkkYiWC;

/// @brief Field QYEOFbpoZofmuQSNtTLHfGOVIOJn, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_QYEOFbpoZofmuQSNtTLHfGOVIOJn, put=__cordl_internal_set_QYEOFbpoZofmuQSNtTLHfGOVIOJn)) ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  QYEOFbpoZofmuQSNtTLHfGOVIOJn;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field aGVcWfVAWZrUaLgYGemajTSlGVoE, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_aGVcWfVAWZrUaLgYGemajTSlGVoE, put=__cordl_internal_set_aGVcWfVAWZrUaLgYGemajTSlGVoE)) ::Rewired::ControllerPollingInfo  aGVcWfVAWZrUaLgYGemajTSlGVoE;

/// @brief Field dhDvyLrknLptXyqyolPIsigYPsag, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_dhDvyLrknLptXyqyolPIsigYPsag, put=__cordl_internal_set_dhDvyLrknLptXyqyolPIsigYPsag)) int32_t  dhDvyLrknLptXyqyolPIsigYPsag;

/// @brief Field ofvBhYCXpuktvHgHLKrrabpgEZLKB, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ofvBhYCXpuktvHgHLKrrabpgEZLKB, put=__cordl_internal_set_ofvBhYCXpuktvHgHLKrrabpgEZLKB)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ofvBhYCXpuktvHgHLKrrabpgEZLKB;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1818749a0, size 0x2e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181874c80, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181874c80, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867050, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_GqfACCFzQVlVnPcJmajqKuTkAzrxA() const;

constexpr int32_t& __cordl_internal_get_GqfACCFzQVlVnPcJmajqKuTkAzrxA() ;

constexpr int32_t const& __cordl_internal_get_OkmxcyXADNxuqaxObqYFPOkkYiWC() const;

constexpr int32_t& __cordl_internal_get_OkmxcyXADNxuqaxObqYFPOkkYiWC() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::CustomController*>* const& __cordl_internal_get_QYEOFbpoZofmuQSNtTLHfGOVIOJn() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*& __cordl_internal_get_QYEOFbpoZofmuQSNtTLHfGOVIOJn() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_aGVcWfVAWZrUaLgYGemajTSlGVoE() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_aGVcWfVAWZrUaLgYGemajTSlGVoE() ;

constexpr int32_t const& __cordl_internal_get_dhDvyLrknLptXyqyolPIsigYPsag() const;

constexpr int32_t& __cordl_internal_get_dhDvyLrknLptXyqyolPIsigYPsag() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_ofvBhYCXpuktvHgHLKrrabpgEZLKB() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_ofvBhYCXpuktvHgHLKrrabpgEZLKB() ;

constexpr void __cordl_internal_set_GqfACCFzQVlVnPcJmajqKuTkAzrxA(int32_t  value) ;

constexpr void __cordl_internal_set_OkmxcyXADNxuqaxObqYFPOkkYiWC(int32_t  value) ;

constexpr void __cordl_internal_set_QYEOFbpoZofmuQSNtTLHfGOVIOJn(::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  value) ;

constexpr void __cordl_internal_set_aGVcWfVAWZrUaLgYGemajTSlGVoE(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_dhDvyLrknLptXyqyolPIsigYPsag(int32_t  value) ;

constexpr void __cordl_internal_set_ofvBhYCXpuktvHgHLKrrabpgEZLKB(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method gUvfCbedUpbGuKhwRQAeKsItNgyJA, addr 0x181867100, size 0x30, virtual false, abstract: false, final false
inline void gUvfCbedUpbGuKhwRQAeKsItNgyJA() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA(PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA(PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2180};

/// @brief Field OkmxcyXADNxuqaxObqYFPOkkYiWC, offset: 0x10, size: 0x4, def value: None
 int32_t  ___OkmxcyXADNxuqaxObqYFPOkkYiWC;

/// @brief Field aGVcWfVAWZrUaLgYGemajTSlGVoE, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___aGVcWfVAWZrUaLgYGemajTSlGVoE;

/// @brief Field GqfACCFzQVlVnPcJmajqKuTkAzrxA, offset: 0x50, size: 0x4, def value: None
 int32_t  ___GqfACCFzQVlVnPcJmajqKuTkAzrxA;

/// @brief Field QYEOFbpoZofmuQSNtTLHfGOVIOJn, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  ___QYEOFbpoZofmuQSNtTLHfGOVIOJn;

/// @brief Field dhDvyLrknLptXyqyolPIsigYPsag, offset: 0x60, size: 0x4, def value: None
 int32_t  ___dhDvyLrknLptXyqyolPIsigYPsag;

/// @brief Field ofvBhYCXpuktvHgHLKrrabpgEZLKB, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___ofvBhYCXpuktvHgHLKrrabpgEZLKB;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA, ___OkmxcyXADNxuqaxObqYFPOkkYiWC) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA, ___aGVcWfVAWZrUaLgYGemajTSlGVoE) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA, ___GqfACCFzQVlVnPcJmajqKuTkAzrxA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA, ___QYEOFbpoZofmuQSNtTLHfGOVIOJn) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA, ___dhDvyLrknLptXyqyolPIsigYPsag) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA, ___ofvBhYCXpuktvHgHLKrrabpgEZLKB) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/NhopCuggsucNcuMnKcKAiNsbwTcQA
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA : public ::System::Object {
public:
// Declarations
/// @brief Field EfPtyGJLJVSEkenEDLCdpaKruvb, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_EfPtyGJLJVSEkenEDLCdpaKruvb, put=__cordl_internal_set_EfPtyGJLJVSEkenEDLCdpaKruvb)) int32_t  EfPtyGJLJVSEkenEDLCdpaKruvb;

/// @brief Field IMHTbJgywvDkUHLguibkPlbUighN, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_IMHTbJgywvDkUHLguibkPlbUighN, put=__cordl_internal_set_IMHTbJgywvDkUHLguibkPlbUighN)) int32_t  IMHTbJgywvDkUHLguibkPlbUighN;

/// @brief Field QAQYAWiJltYwOPEQJINJXGvnbuzFA, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_QAQYAWiJltYwOPEQJINJXGvnbuzFA, put=__cordl_internal_set_QAQYAWiJltYwOPEQJINJXGvnbuzFA)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  QAQYAWiJltYwOPEQJINJXGvnbuzFA;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field XIeQrZxqldHFHcvBbVCyiZbMCHkC, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_XIeQrZxqldHFHcvBbVCyiZbMCHkC, put=__cordl_internal_set_XIeQrZxqldHFHcvBbVCyiZbMCHkC)) int32_t  XIeQrZxqldHFHcvBbVCyiZbMCHkC;

/// @brief Field bHfTMGdoyhCfkJVzrVKluoFjHMsSA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_bHfTMGdoyhCfkJVzrVKluoFjHMsSA, put=__cordl_internal_set_bHfTMGdoyhCfkJVzrVKluoFjHMsSA)) ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  bHfTMGdoyhCfkJVzrVKluoFjHMsSA;

/// @brief Field uWZVCQjkYacEamqyHgckPpKfXnbM, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_uWZVCQjkYacEamqyHgckPpKfXnbM, put=__cordl_internal_set_uWZVCQjkYacEamqyHgckPpKfXnbM)) ::Rewired::ControllerPollingInfo  uWZVCQjkYacEamqyHgckPpKfXnbM;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AWTPhplZVLfvSSiSuBlGFwGbqZQO, addr 0x181867100, size 0x30, virtual false, abstract: false, final false
inline void AWTPhplZVLfvSSiSuBlGFwGbqZQO() ;

/// @brief Method MoveNext, addr 0x18186d3b0, size 0x2e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x18186d690, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18186d690, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867050, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_EfPtyGJLJVSEkenEDLCdpaKruvb() const;

constexpr int32_t& __cordl_internal_get_EfPtyGJLJVSEkenEDLCdpaKruvb() ;

constexpr int32_t const& __cordl_internal_get_IMHTbJgywvDkUHLguibkPlbUighN() const;

constexpr int32_t& __cordl_internal_get_IMHTbJgywvDkUHLguibkPlbUighN() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_QAQYAWiJltYwOPEQJINJXGvnbuzFA() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_QAQYAWiJltYwOPEQJINJXGvnbuzFA() ;

constexpr int32_t const& __cordl_internal_get_XIeQrZxqldHFHcvBbVCyiZbMCHkC() const;

constexpr int32_t& __cordl_internal_get_XIeQrZxqldHFHcvBbVCyiZbMCHkC() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::CustomController*>* const& __cordl_internal_get_bHfTMGdoyhCfkJVzrVKluoFjHMsSA() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*& __cordl_internal_get_bHfTMGdoyhCfkJVzrVKluoFjHMsSA() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_uWZVCQjkYacEamqyHgckPpKfXnbM() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_uWZVCQjkYacEamqyHgckPpKfXnbM() ;

constexpr void __cordl_internal_set_EfPtyGJLJVSEkenEDLCdpaKruvb(int32_t  value) ;

constexpr void __cordl_internal_set_IMHTbJgywvDkUHLguibkPlbUighN(int32_t  value) ;

constexpr void __cordl_internal_set_QAQYAWiJltYwOPEQJINJXGvnbuzFA(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_XIeQrZxqldHFHcvBbVCyiZbMCHkC(int32_t  value) ;

constexpr void __cordl_internal_set_bHfTMGdoyhCfkJVzrVKluoFjHMsSA(::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  value) ;

constexpr void __cordl_internal_set_uWZVCQjkYacEamqyHgckPpKfXnbM(::Rewired::ControllerPollingInfo  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA(PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA(PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2181};

/// @brief Field XIeQrZxqldHFHcvBbVCyiZbMCHkC, offset: 0x10, size: 0x4, def value: None
 int32_t  ___XIeQrZxqldHFHcvBbVCyiZbMCHkC;

/// @brief Field uWZVCQjkYacEamqyHgckPpKfXnbM, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___uWZVCQjkYacEamqyHgckPpKfXnbM;

/// @brief Field EfPtyGJLJVSEkenEDLCdpaKruvb, offset: 0x50, size: 0x4, def value: None
 int32_t  ___EfPtyGJLJVSEkenEDLCdpaKruvb;

/// @brief Field bHfTMGdoyhCfkJVzrVKluoFjHMsSA, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  ___bHfTMGdoyhCfkJVzrVKluoFjHMsSA;

/// @brief Field IMHTbJgywvDkUHLguibkPlbUighN, offset: 0x60, size: 0x4, def value: None
 int32_t  ___IMHTbJgywvDkUHLguibkPlbUighN;

/// @brief Field QAQYAWiJltYwOPEQJINJXGvnbuzFA, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___QAQYAWiJltYwOPEQJINJXGvnbuzFA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA, ___XIeQrZxqldHFHcvBbVCyiZbMCHkC) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA, ___uWZVCQjkYacEamqyHgckPpKfXnbM) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA, ___EfPtyGJLJVSEkenEDLCdpaKruvb) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA, ___bHfTMGdoyhCfkJVzrVKluoFjHMsSA) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA, ___IMHTbJgywvDkUHLguibkPlbUighN) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA, ___QAQYAWiJltYwOPEQJINJXGvnbuzFA) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/dlicCejglcQvNZPeQARHUCbJoXcl
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl : public ::System::Object {
public:
// Declarations
/// @brief Field FcpBEWldmkVPHBhoSJYaDecVjPhR, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_FcpBEWldmkVPHBhoSJYaDecVjPhR, put=__cordl_internal_set_FcpBEWldmkVPHBhoSJYaDecVjPhR)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  FcpBEWldmkVPHBhoSJYaDecVjPhR;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field TmpogtQsgxLLsoyHRHYxtfckWkEv, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_TmpogtQsgxLLsoyHRHYxtfckWkEv, put=__cordl_internal_set_TmpogtQsgxLLsoyHRHYxtfckWkEv)) int32_t  TmpogtQsgxLLsoyHRHYxtfckWkEv;

/// @brief Field gICmXKUNMqVNCqxDanPFWCYWbUQu, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_gICmXKUNMqVNCqxDanPFWCYWbUQu, put=__cordl_internal_set_gICmXKUNMqVNCqxDanPFWCYWbUQu)) ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  gICmXKUNMqVNCqxDanPFWCYWbUQu;

/// @brief Field lsHUaQOHGSDdRaLRJddBpcoFVlSqA, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_lsHUaQOHGSDdRaLRJddBpcoFVlSqA, put=__cordl_internal_set_lsHUaQOHGSDdRaLRJddBpcoFVlSqA)) int32_t  lsHUaQOHGSDdRaLRJddBpcoFVlSqA;

/// @brief Field qOrQRpBNbRsBlJJSUOLOKDyreHHHA, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_qOrQRpBNbRsBlJJSUOLOKDyreHHHA, put=__cordl_internal_set_qOrQRpBNbRsBlJJSUOLOKDyreHHHA)) int32_t  qOrQRpBNbRsBlJJSUOLOKDyreHHHA;

/// @brief Field uvyZrKtrrinZIOtPyBUpTRUshsJx, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_uvyZrKtrrinZIOtPyBUpTRUshsJx, put=__cordl_internal_set_uvyZrKtrrinZIOtPyBUpTRUshsJx)) ::Rewired::ControllerPollingInfo  uvyZrKtrrinZIOtPyBUpTRUshsJx;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method HUvwCGSJpjktwsfsNPVuKEgnExQL, addr 0x181867100, size 0x30, virtual false, abstract: false, final false
inline void HUvwCGSJpjktwsfsNPVuKEgnExQL() ;

/// @brief Method MoveNext, addr 0x181872c90, size 0x2e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181872f70, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181872f70, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867050, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_FcpBEWldmkVPHBhoSJYaDecVjPhR() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_FcpBEWldmkVPHBhoSJYaDecVjPhR() ;

constexpr int32_t const& __cordl_internal_get_TmpogtQsgxLLsoyHRHYxtfckWkEv() const;

constexpr int32_t& __cordl_internal_get_TmpogtQsgxLLsoyHRHYxtfckWkEv() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::CustomController*>* const& __cordl_internal_get_gICmXKUNMqVNCqxDanPFWCYWbUQu() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*& __cordl_internal_get_gICmXKUNMqVNCqxDanPFWCYWbUQu() ;

constexpr int32_t const& __cordl_internal_get_lsHUaQOHGSDdRaLRJddBpcoFVlSqA() const;

constexpr int32_t& __cordl_internal_get_lsHUaQOHGSDdRaLRJddBpcoFVlSqA() ;

constexpr int32_t const& __cordl_internal_get_qOrQRpBNbRsBlJJSUOLOKDyreHHHA() const;

constexpr int32_t& __cordl_internal_get_qOrQRpBNbRsBlJJSUOLOKDyreHHHA() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_uvyZrKtrrinZIOtPyBUpTRUshsJx() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_uvyZrKtrrinZIOtPyBUpTRUshsJx() ;

constexpr void __cordl_internal_set_FcpBEWldmkVPHBhoSJYaDecVjPhR(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_TmpogtQsgxLLsoyHRHYxtfckWkEv(int32_t  value) ;

constexpr void __cordl_internal_set_gICmXKUNMqVNCqxDanPFWCYWbUQu(::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  value) ;

constexpr void __cordl_internal_set_lsHUaQOHGSDdRaLRJddBpcoFVlSqA(int32_t  value) ;

constexpr void __cordl_internal_set_qOrQRpBNbRsBlJJSUOLOKDyreHHHA(int32_t  value) ;

constexpr void __cordl_internal_set_uvyZrKtrrinZIOtPyBUpTRUshsJx(::Rewired::ControllerPollingInfo  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl(PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl(PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2182};

/// @brief Field TmpogtQsgxLLsoyHRHYxtfckWkEv, offset: 0x10, size: 0x4, def value: None
 int32_t  ___TmpogtQsgxLLsoyHRHYxtfckWkEv;

/// @brief Field uvyZrKtrrinZIOtPyBUpTRUshsJx, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___uvyZrKtrrinZIOtPyBUpTRUshsJx;

/// @brief Field lsHUaQOHGSDdRaLRJddBpcoFVlSqA, offset: 0x50, size: 0x4, def value: None
 int32_t  ___lsHUaQOHGSDdRaLRJddBpcoFVlSqA;

/// @brief Field gICmXKUNMqVNCqxDanPFWCYWbUQu, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  ___gICmXKUNMqVNCqxDanPFWCYWbUQu;

/// @brief Field qOrQRpBNbRsBlJJSUOLOKDyreHHHA, offset: 0x60, size: 0x4, def value: None
 int32_t  ___qOrQRpBNbRsBlJJSUOLOKDyreHHHA;

/// @brief Field FcpBEWldmkVPHBhoSJYaDecVjPhR, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___FcpBEWldmkVPHBhoSJYaDecVjPhR;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl, ___TmpogtQsgxLLsoyHRHYxtfckWkEv) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl, ___uvyZrKtrrinZIOtPyBUpTRUshsJx) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl, ___lsHUaQOHGSDdRaLRJddBpcoFVlSqA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl, ___gICmXKUNMqVNCqxDanPFWCYWbUQu) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl, ___qOrQRpBNbRsBlJJSUOLOKDyreHHHA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl, ___FcpBEWldmkVPHBhoSJYaDecVjPhR) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/dQoMdWVFXINramacisZfuoJkjcal
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal : public ::System::Object {
public:
// Declarations
/// @brief Field BlYgRIkthzhlhCjWjydwSuVnxPmHb, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlYgRIkthzhlhCjWjydwSuVnxPmHb, put=__cordl_internal_set_BlYgRIkthzhlhCjWjydwSuVnxPmHb)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  BlYgRIkthzhlhCjWjydwSuVnxPmHb;

/// @brief Field LSOGqOayZQFKoqQoHPUBTVSHcFbFb, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_LSOGqOayZQFKoqQoHPUBTVSHcFbFb, put=__cordl_internal_set_LSOGqOayZQFKoqQoHPUBTVSHcFbFb)) int32_t  LSOGqOayZQFKoqQoHPUBTVSHcFbFb;

/// @brief Field LomJvCYLvIRAUHKGDqgITaMmFyyW, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_LomJvCYLvIRAUHKGDqgITaMmFyyW, put=__cordl_internal_set_LomJvCYLvIRAUHKGDqgITaMmFyyW)) ::Rewired::ControllerPollingInfo  LomJvCYLvIRAUHKGDqgITaMmFyyW;

/// @brief Field OkQzFUqmEiIRDFrINyXNnkFQacAs, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_OkQzFUqmEiIRDFrINyXNnkFQacAs, put=__cordl_internal_set_OkQzFUqmEiIRDFrINyXNnkFQacAs)) int32_t  OkQzFUqmEiIRDFrINyXNnkFQacAs;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field YkXnUOngBHiGVWKORjCgnPtSBtvdA, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_YkXnUOngBHiGVWKORjCgnPtSBtvdA, put=__cordl_internal_set_YkXnUOngBHiGVWKORjCgnPtSBtvdA)) int32_t  YkXnUOngBHiGVWKORjCgnPtSBtvdA;

/// @brief Field vDYrBkTWHOcuvWKuvCsiBHOCGTw, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_vDYrBkTWHOcuvWKuvCsiBHOCGTw, put=__cordl_internal_set_vDYrBkTWHOcuvWKuvCsiBHOCGTw)) ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  vDYrBkTWHOcuvWKuvCsiBHOCGTw;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181872950, size 0x2d0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method QSXPatxEjFurkzQqwOVPjwOmLHpJ, addr 0x181867100, size 0x30, virtual false, abstract: false, final false
inline void QSXPatxEjFurkzQqwOVPjwOmLHpJ() ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181872c20, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181872c20, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867050, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_BlYgRIkthzhlhCjWjydwSuVnxPmHb() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_BlYgRIkthzhlhCjWjydwSuVnxPmHb() ;

constexpr int32_t const& __cordl_internal_get_LSOGqOayZQFKoqQoHPUBTVSHcFbFb() const;

constexpr int32_t& __cordl_internal_get_LSOGqOayZQFKoqQoHPUBTVSHcFbFb() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_LomJvCYLvIRAUHKGDqgITaMmFyyW() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_LomJvCYLvIRAUHKGDqgITaMmFyyW() ;

constexpr int32_t const& __cordl_internal_get_OkQzFUqmEiIRDFrINyXNnkFQacAs() const;

constexpr int32_t& __cordl_internal_get_OkQzFUqmEiIRDFrINyXNnkFQacAs() ;

constexpr int32_t const& __cordl_internal_get_YkXnUOngBHiGVWKORjCgnPtSBtvdA() const;

constexpr int32_t& __cordl_internal_get_YkXnUOngBHiGVWKORjCgnPtSBtvdA() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Joystick*>* const& __cordl_internal_get_vDYrBkTWHOcuvWKuvCsiBHOCGTw() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*& __cordl_internal_get_vDYrBkTWHOcuvWKuvCsiBHOCGTw() ;

constexpr void __cordl_internal_set_BlYgRIkthzhlhCjWjydwSuVnxPmHb(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_LSOGqOayZQFKoqQoHPUBTVSHcFbFb(int32_t  value) ;

constexpr void __cordl_internal_set_LomJvCYLvIRAUHKGDqgITaMmFyyW(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_OkQzFUqmEiIRDFrINyXNnkFQacAs(int32_t  value) ;

constexpr void __cordl_internal_set_YkXnUOngBHiGVWKORjCgnPtSBtvdA(int32_t  value) ;

constexpr void __cordl_internal_set_vDYrBkTWHOcuvWKuvCsiBHOCGTw(::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal(PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal(PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2183};

/// @brief Field OkQzFUqmEiIRDFrINyXNnkFQacAs, offset: 0x10, size: 0x4, def value: None
 int32_t  ___OkQzFUqmEiIRDFrINyXNnkFQacAs;

/// @brief Field LomJvCYLvIRAUHKGDqgITaMmFyyW, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___LomJvCYLvIRAUHKGDqgITaMmFyyW;

/// @brief Field LSOGqOayZQFKoqQoHPUBTVSHcFbFb, offset: 0x50, size: 0x4, def value: None
 int32_t  ___LSOGqOayZQFKoqQoHPUBTVSHcFbFb;

/// @brief Field vDYrBkTWHOcuvWKuvCsiBHOCGTw, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  ___vDYrBkTWHOcuvWKuvCsiBHOCGTw;

/// @brief Field YkXnUOngBHiGVWKORjCgnPtSBtvdA, offset: 0x60, size: 0x4, def value: None
 int32_t  ___YkXnUOngBHiGVWKORjCgnPtSBtvdA;

/// @brief Field BlYgRIkthzhlhCjWjydwSuVnxPmHb, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___BlYgRIkthzhlhCjWjydwSuVnxPmHb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal, ___OkQzFUqmEiIRDFrINyXNnkFQacAs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal, ___LomJvCYLvIRAUHKGDqgITaMmFyyW) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal, ___LSOGqOayZQFKoqQoHPUBTVSHcFbFb) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal, ___vDYrBkTWHOcuvWKuvCsiBHOCGTw) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal, ___YkXnUOngBHiGVWKORjCgnPtSBtvdA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal, ___BlYgRIkthzhlhCjWjydwSuVnxPmHb) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/RzYPFzjIPshYwBhqeWOHTFJOsSzqA
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA : public ::System::Object {
public:
// Declarations
/// @brief Field DcZGghNfxFxKccXJzTsiUynRQpdN, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_DcZGghNfxFxKccXJzTsiUynRQpdN, put=__cordl_internal_set_DcZGghNfxFxKccXJzTsiUynRQpdN)) ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  DcZGghNfxFxKccXJzTsiUynRQpdN;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field lzyDyEnKWvKNsIfomEGEexiiFeoPA, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_lzyDyEnKWvKNsIfomEGEexiiFeoPA, put=__cordl_internal_set_lzyDyEnKWvKNsIfomEGEexiiFeoPA)) int32_t  lzyDyEnKWvKNsIfomEGEexiiFeoPA;

/// @brief Field mLIppjxRjhUsSuaHMKVvPGHAYCkE, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_mLIppjxRjhUsSuaHMKVvPGHAYCkE, put=__cordl_internal_set_mLIppjxRjhUsSuaHMKVvPGHAYCkE)) int32_t  mLIppjxRjhUsSuaHMKVvPGHAYCkE;

/// @brief Field qCvZGUawcWXDokXHWIPFyCcjMxBf, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_qCvZGUawcWXDokXHWIPFyCcjMxBf, put=__cordl_internal_set_qCvZGUawcWXDokXHWIPFyCcjMxBf)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  qCvZGUawcWXDokXHWIPFyCcjMxBf;

/// @brief Field sdgFRYHqmyUbOocKPrMCttxBEmiO, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_sdgFRYHqmyUbOocKPrMCttxBEmiO, put=__cordl_internal_set_sdgFRYHqmyUbOocKPrMCttxBEmiO)) int32_t  sdgFRYHqmyUbOocKPrMCttxBEmiO;

/// @brief Field skYqifYHvcBQUmypebupTpbvBPNX, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_skYqifYHvcBQUmypebupTpbvBPNX, put=__cordl_internal_set_skYqifYHvcBQUmypebupTpbvBPNX)) ::Rewired::ControllerPollingInfo  skYqifYHvcBQUmypebupTpbvBPNX;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181872540, size 0x2e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181872820, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181872820, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867050, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Joystick*>* const& __cordl_internal_get_DcZGghNfxFxKccXJzTsiUynRQpdN() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*& __cordl_internal_get_DcZGghNfxFxKccXJzTsiUynRQpdN() ;

constexpr int32_t const& __cordl_internal_get_lzyDyEnKWvKNsIfomEGEexiiFeoPA() const;

constexpr int32_t& __cordl_internal_get_lzyDyEnKWvKNsIfomEGEexiiFeoPA() ;

constexpr int32_t const& __cordl_internal_get_mLIppjxRjhUsSuaHMKVvPGHAYCkE() const;

constexpr int32_t& __cordl_internal_get_mLIppjxRjhUsSuaHMKVvPGHAYCkE() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_qCvZGUawcWXDokXHWIPFyCcjMxBf() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_qCvZGUawcWXDokXHWIPFyCcjMxBf() ;

constexpr int32_t const& __cordl_internal_get_sdgFRYHqmyUbOocKPrMCttxBEmiO() const;

constexpr int32_t& __cordl_internal_get_sdgFRYHqmyUbOocKPrMCttxBEmiO() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_skYqifYHvcBQUmypebupTpbvBPNX() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_skYqifYHvcBQUmypebupTpbvBPNX() ;

constexpr void __cordl_internal_set_DcZGghNfxFxKccXJzTsiUynRQpdN(::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  value) ;

constexpr void __cordl_internal_set_lzyDyEnKWvKNsIfomEGEexiiFeoPA(int32_t  value) ;

constexpr void __cordl_internal_set_mLIppjxRjhUsSuaHMKVvPGHAYCkE(int32_t  value) ;

constexpr void __cordl_internal_set_qCvZGUawcWXDokXHWIPFyCcjMxBf(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_sdgFRYHqmyUbOocKPrMCttxBEmiO(int32_t  value) ;

constexpr void __cordl_internal_set_skYqifYHvcBQUmypebupTpbvBPNX(::Rewired::ControllerPollingInfo  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method zuPAXaqqkeoqyelXZGdgnqiwEjIBA, addr 0x181867100, size 0x30, virtual false, abstract: false, final false
inline void zuPAXaqqkeoqyelXZGdgnqiwEjIBA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA(PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA(PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2184};

/// @brief Field sdgFRYHqmyUbOocKPrMCttxBEmiO, offset: 0x10, size: 0x4, def value: None
 int32_t  ___sdgFRYHqmyUbOocKPrMCttxBEmiO;

/// @brief Field skYqifYHvcBQUmypebupTpbvBPNX, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___skYqifYHvcBQUmypebupTpbvBPNX;

/// @brief Field lzyDyEnKWvKNsIfomEGEexiiFeoPA, offset: 0x50, size: 0x4, def value: None
 int32_t  ___lzyDyEnKWvKNsIfomEGEexiiFeoPA;

/// @brief Field DcZGghNfxFxKccXJzTsiUynRQpdN, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  ___DcZGghNfxFxKccXJzTsiUynRQpdN;

/// @brief Field mLIppjxRjhUsSuaHMKVvPGHAYCkE, offset: 0x60, size: 0x4, def value: None
 int32_t  ___mLIppjxRjhUsSuaHMKVvPGHAYCkE;

/// @brief Field qCvZGUawcWXDokXHWIPFyCcjMxBf, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___qCvZGUawcWXDokXHWIPFyCcjMxBf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA, ___sdgFRYHqmyUbOocKPrMCttxBEmiO) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA, ___skYqifYHvcBQUmypebupTpbvBPNX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA, ___lzyDyEnKWvKNsIfomEGEexiiFeoPA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA, ___DcZGghNfxFxKccXJzTsiUynRQpdN) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA, ___mLIppjxRjhUsSuaHMKVvPGHAYCkE) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA, ___qCvZGUawcWXDokXHWIPFyCcjMxBf) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/wNYqfDTOSwahByUEfWjpyuVKIccq
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq : public ::System::Object {
public:
// Declarations
/// @brief Field MciajuzbiZUNOiGgFSCTKgjvlAcX, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_MciajuzbiZUNOiGgFSCTKgjvlAcX, put=__cordl_internal_set_MciajuzbiZUNOiGgFSCTKgjvlAcX)) ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  MciajuzbiZUNOiGgFSCTKgjvlAcX;

/// @brief Field OHKMxjKaiYikqaXCilSeUjAeaCkw, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_OHKMxjKaiYikqaXCilSeUjAeaCkw, put=__cordl_internal_set_OHKMxjKaiYikqaXCilSeUjAeaCkw)) int32_t  OHKMxjKaiYikqaXCilSeUjAeaCkw;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field kiujjQurIIspoYSTqHqgNqpdysKq, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_kiujjQurIIspoYSTqHqgNqpdysKq, put=__cordl_internal_set_kiujjQurIIspoYSTqHqgNqpdysKq)) ::Rewired::ControllerPollingInfo  kiujjQurIIspoYSTqHqgNqpdysKq;

/// @brief Field nQlIkREGvTtIuVEUdgNcUfrnXfMl, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_nQlIkREGvTtIuVEUdgNcUfrnXfMl, put=__cordl_internal_set_nQlIkREGvTtIuVEUdgNcUfrnXfMl)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  nQlIkREGvTtIuVEUdgNcUfrnXfMl;

/// @brief Field uqpgPIlShGkZovQryJMIpPHoikgl, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_uqpgPIlShGkZovQryJMIpPHoikgl, put=__cordl_internal_set_uqpgPIlShGkZovQryJMIpPHoikgl)) int32_t  uqpgPIlShGkZovQryJMIpPHoikgl;

/// @brief Field ysWWbYcCVdpZrQeFaCjsfSwgyXvD, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ysWWbYcCVdpZrQeFaCjsfSwgyXvD, put=__cordl_internal_set_ysWWbYcCVdpZrQeFaCjsfSwgyXvD)) int32_t  ysWWbYcCVdpZrQeFaCjsfSwgyXvD;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181874cf0, size 0x2e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181874fd0, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181874fd0, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867050, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Joystick*>* const& __cordl_internal_get_MciajuzbiZUNOiGgFSCTKgjvlAcX() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*& __cordl_internal_get_MciajuzbiZUNOiGgFSCTKgjvlAcX() ;

constexpr int32_t const& __cordl_internal_get_OHKMxjKaiYikqaXCilSeUjAeaCkw() const;

constexpr int32_t& __cordl_internal_get_OHKMxjKaiYikqaXCilSeUjAeaCkw() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_kiujjQurIIspoYSTqHqgNqpdysKq() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_kiujjQurIIspoYSTqHqgNqpdysKq() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_nQlIkREGvTtIuVEUdgNcUfrnXfMl() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_nQlIkREGvTtIuVEUdgNcUfrnXfMl() ;

constexpr int32_t const& __cordl_internal_get_uqpgPIlShGkZovQryJMIpPHoikgl() const;

constexpr int32_t& __cordl_internal_get_uqpgPIlShGkZovQryJMIpPHoikgl() ;

constexpr int32_t const& __cordl_internal_get_ysWWbYcCVdpZrQeFaCjsfSwgyXvD() const;

constexpr int32_t& __cordl_internal_get_ysWWbYcCVdpZrQeFaCjsfSwgyXvD() ;

constexpr void __cordl_internal_set_MciajuzbiZUNOiGgFSCTKgjvlAcX(::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  value) ;

constexpr void __cordl_internal_set_OHKMxjKaiYikqaXCilSeUjAeaCkw(int32_t  value) ;

constexpr void __cordl_internal_set_kiujjQurIIspoYSTqHqgNqpdysKq(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_nQlIkREGvTtIuVEUdgNcUfrnXfMl(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_uqpgPIlShGkZovQryJMIpPHoikgl(int32_t  value) ;

constexpr void __cordl_internal_set_ysWWbYcCVdpZrQeFaCjsfSwgyXvD(int32_t  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method pKPbltjarwZVirWQchGUSPlwrHMp, addr 0x181867100, size 0x30, virtual false, abstract: false, final false
inline void pKPbltjarwZVirWQchGUSPlwrHMp() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq(PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq(PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2185};

/// @brief Field ysWWbYcCVdpZrQeFaCjsfSwgyXvD, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ysWWbYcCVdpZrQeFaCjsfSwgyXvD;

/// @brief Field kiujjQurIIspoYSTqHqgNqpdysKq, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___kiujjQurIIspoYSTqHqgNqpdysKq;

/// @brief Field OHKMxjKaiYikqaXCilSeUjAeaCkw, offset: 0x50, size: 0x4, def value: None
 int32_t  ___OHKMxjKaiYikqaXCilSeUjAeaCkw;

/// @brief Field MciajuzbiZUNOiGgFSCTKgjvlAcX, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  ___MciajuzbiZUNOiGgFSCTKgjvlAcX;

/// @brief Field uqpgPIlShGkZovQryJMIpPHoikgl, offset: 0x60, size: 0x4, def value: None
 int32_t  ___uqpgPIlShGkZovQryJMIpPHoikgl;

/// @brief Field nQlIkREGvTtIuVEUdgNcUfrnXfMl, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___nQlIkREGvTtIuVEUdgNcUfrnXfMl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq, ___ysWWbYcCVdpZrQeFaCjsfSwgyXvD) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq, ___kiujjQurIIspoYSTqHqgNqpdysKq) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq, ___OHKMxjKaiYikqaXCilSeUjAeaCkw) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq, ___MciajuzbiZUNOiGgFSCTKgjvlAcX) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq, ___uqpgPIlShGkZovQryJMIpPHoikgl) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq, ___nQlIkREGvTtIuVEUdgNcUfrnXfMl) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/KCrqicwQMnVZoxImizzUCCzWhIQ
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ : public ::System::Object {
public:
// Declarations
/// @brief Field RRXGGlYcLEhYBfZeSgGDbfCETFMnc, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_RRXGGlYcLEhYBfZeSgGDbfCETFMnc, put=__cordl_internal_set_RRXGGlYcLEhYBfZeSgGDbfCETFMnc)) int32_t  RRXGGlYcLEhYBfZeSgGDbfCETFMnc;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field VXdtGnNEADHtBcPZlgxmuSxjpsLV, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_VXdtGnNEADHtBcPZlgxmuSxjpsLV, put=__cordl_internal_set_VXdtGnNEADHtBcPZlgxmuSxjpsLV)) ::Rewired::ControllerPollingInfo  VXdtGnNEADHtBcPZlgxmuSxjpsLV;

/// @brief Field ZxpacKykjhsJzZXUiRzCRvniMSBK, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ZxpacKykjhsJzZXUiRzCRvniMSBK, put=__cordl_internal_set_ZxpacKykjhsJzZXUiRzCRvniMSBK)) int32_t  ZxpacKykjhsJzZXUiRzCRvniMSBK;

/// @brief Field jLSPYZMwEpSRuJSTtChSCJqSSbNO, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_jLSPYZMwEpSRuJSTtChSCJqSSbNO, put=__cordl_internal_set_jLSPYZMwEpSRuJSTtChSCJqSSbNO)) int32_t  jLSPYZMwEpSRuJSTtChSCJqSSbNO;

/// @brief Field nkPoWqHUllJexEXKqscxfeYpaLzcA, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_nkPoWqHUllJexEXKqscxfeYpaLzcA, put=__cordl_internal_set_nkPoWqHUllJexEXKqscxfeYpaLzcA)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  nkPoWqHUllJexEXKqscxfeYpaLzcA;

/// @brief Field zZCSuXxUdQSMXIZaeaZKzluTqxvO, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_zZCSuXxUdQSMXIZaeaZKzluTqxvO, put=__cordl_internal_set_zZCSuXxUdQSMXIZaeaZKzluTqxvO)) ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  zZCSuXxUdQSMXIZaeaZKzluTqxvO;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181866d00, size 0x2e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x181866fe0, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181866fe0, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867050, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_RRXGGlYcLEhYBfZeSgGDbfCETFMnc() const;

constexpr int32_t& __cordl_internal_get_RRXGGlYcLEhYBfZeSgGDbfCETFMnc() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_VXdtGnNEADHtBcPZlgxmuSxjpsLV() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_VXdtGnNEADHtBcPZlgxmuSxjpsLV() ;

constexpr int32_t const& __cordl_internal_get_ZxpacKykjhsJzZXUiRzCRvniMSBK() const;

constexpr int32_t& __cordl_internal_get_ZxpacKykjhsJzZXUiRzCRvniMSBK() ;

constexpr int32_t const& __cordl_internal_get_jLSPYZMwEpSRuJSTtChSCJqSSbNO() const;

constexpr int32_t& __cordl_internal_get_jLSPYZMwEpSRuJSTtChSCJqSSbNO() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_nkPoWqHUllJexEXKqscxfeYpaLzcA() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_nkPoWqHUllJexEXKqscxfeYpaLzcA() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Joystick*>* const& __cordl_internal_get_zZCSuXxUdQSMXIZaeaZKzluTqxvO() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*& __cordl_internal_get_zZCSuXxUdQSMXIZaeaZKzluTqxvO() ;

constexpr void __cordl_internal_set_RRXGGlYcLEhYBfZeSgGDbfCETFMnc(int32_t  value) ;

constexpr void __cordl_internal_set_VXdtGnNEADHtBcPZlgxmuSxjpsLV(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_ZxpacKykjhsJzZXUiRzCRvniMSBK(int32_t  value) ;

constexpr void __cordl_internal_set_jLSPYZMwEpSRuJSTtChSCJqSSbNO(int32_t  value) ;

constexpr void __cordl_internal_set_nkPoWqHUllJexEXKqscxfeYpaLzcA(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

constexpr void __cordl_internal_set_zZCSuXxUdQSMXIZaeaZKzluTqxvO(::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method rWMQtVBNNyrULDAliBrqlgyjBNJG, addr 0x181867100, size 0x30, virtual false, abstract: false, final false
inline void rWMQtVBNNyrULDAliBrqlgyjBNJG() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ(PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ(PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2186};

/// @brief Field ZxpacKykjhsJzZXUiRzCRvniMSBK, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ZxpacKykjhsJzZXUiRzCRvniMSBK;

/// @brief Field VXdtGnNEADHtBcPZlgxmuSxjpsLV, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___VXdtGnNEADHtBcPZlgxmuSxjpsLV;

/// @brief Field jLSPYZMwEpSRuJSTtChSCJqSSbNO, offset: 0x50, size: 0x4, def value: None
 int32_t  ___jLSPYZMwEpSRuJSTtChSCJqSSbNO;

/// @brief Field zZCSuXxUdQSMXIZaeaZKzluTqxvO, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  ___zZCSuXxUdQSMXIZaeaZKzluTqxvO;

/// @brief Field RRXGGlYcLEhYBfZeSgGDbfCETFMnc, offset: 0x60, size: 0x4, def value: None
 int32_t  ___RRXGGlYcLEhYBfZeSgGDbfCETFMnc;

/// @brief Field nkPoWqHUllJexEXKqscxfeYpaLzcA, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___nkPoWqHUllJexEXKqscxfeYpaLzcA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ, ___ZxpacKykjhsJzZXUiRzCRvniMSBK) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ, ___VXdtGnNEADHtBcPZlgxmuSxjpsLV) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ, ___jLSPYZMwEpSRuJSTtChSCJqSSbNO) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ, ___zZCSuXxUdQSMXIZaeaZKzluTqxvO) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ, ___RRXGGlYcLEhYBfZeSgGDbfCETFMnc) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ, ___nkPoWqHUllJexEXKqscxfeYpaLzcA) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ControllerPollingInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper/OvDuNcQIJehTjHhyFJrOyKpaSQHFA
class CORDL_TYPE PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA : public ::System::Object {
public:
// Declarations
/// @brief Field BgWKnJLGoAIPCzQrrVsFuyvFpRyp, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_BgWKnJLGoAIPCzQrrVsFuyvFpRyp, put=__cordl_internal_set_BgWKnJLGoAIPCzQrrVsFuyvFpRyp)) int32_t  BgWKnJLGoAIPCzQrrVsFuyvFpRyp;

/// @brief Field KErKKraGOyIPhGAZBfrMstipItSf, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_KErKKraGOyIPhGAZBfrMstipItSf, put=__cordl_internal_set_KErKKraGOyIPhGAZBfrMstipItSf)) int32_t  KErKKraGOyIPhGAZBfrMstipItSf;

/// @brief Field PEMBvLxaoAWXXLIGZwtnmjHozQlJ, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_PEMBvLxaoAWXXLIGZwtnmjHozQlJ, put=__cordl_internal_set_PEMBvLxaoAWXXLIGZwtnmjHozQlJ)) int32_t  PEMBvLxaoAWXXLIGZwtnmjHozQlJ;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current)) ::Rewired::ControllerPollingInfo  System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field WGbpXNAOwuAOQIAESDFQgmKtCLEqA, offset 0x18, size 0x38 
 __declspec(property(get=__cordl_internal_get_WGbpXNAOwuAOQIAESDFQgmKtCLEqA, put=__cordl_internal_set_WGbpXNAOwuAOQIAESDFQgmKtCLEqA)) ::Rewired::ControllerPollingInfo  WGbpXNAOwuAOQIAESDFQgmKtCLEqA;

/// @brief Field WbVQugdpSnqVlEloAauqDUYcgvJV, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_WbVQugdpSnqVlEloAauqDUYcgvJV, put=__cordl_internal_set_WbVQugdpSnqVlEloAauqDUYcgvJV)) ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  WbVQugdpSnqVlEloAauqDUYcgvJV;

/// @brief Field iSPKHGMKABgkLDsGtLZmGQKiLlpFc, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_iSPKHGMKABgkLDsGtLZmGQKiLlpFc, put=__cordl_internal_set_iSPKHGMKABgkLDsGtLZmGQKiLlpFc)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  iSPKHGMKABgkLDsGtLZmGQKiLlpFc;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18186d700, size 0x2e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ControllerPollingInfo>.GetEnumerator, addr 0x18186d9e0, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* System_Collections_Generic_IEnumerable_Rewired_ControllerPollingInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ControllerPollingInfo>.get_Current, addr 0x181859c00, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerPollingInfo System_Collections_Generic_IEnumerator_Rewired_ControllerPollingInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18186d9e0, size 0x70, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x181859c30, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181867050, size 0xb0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_BgWKnJLGoAIPCzQrrVsFuyvFpRyp() const;

constexpr int32_t& __cordl_internal_get_BgWKnJLGoAIPCzQrrVsFuyvFpRyp() ;

constexpr int32_t const& __cordl_internal_get_KErKKraGOyIPhGAZBfrMstipItSf() const;

constexpr int32_t& __cordl_internal_get_KErKKraGOyIPhGAZBfrMstipItSf() ;

constexpr int32_t const& __cordl_internal_get_PEMBvLxaoAWXXLIGZwtnmjHozQlJ() const;

constexpr int32_t& __cordl_internal_get_PEMBvLxaoAWXXLIGZwtnmjHozQlJ() ;

constexpr ::Rewired::ControllerPollingInfo const& __cordl_internal_get_WGbpXNAOwuAOQIAESDFQgmKtCLEqA() const;

constexpr ::Rewired::ControllerPollingInfo& __cordl_internal_get_WGbpXNAOwuAOQIAESDFQgmKtCLEqA() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Joystick*>* const& __cordl_internal_get_WbVQugdpSnqVlEloAauqDUYcgvJV() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*& __cordl_internal_get_WbVQugdpSnqVlEloAauqDUYcgvJV() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* const& __cordl_internal_get_iSPKHGMKABgkLDsGtLZmGQKiLlpFc() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*& __cordl_internal_get_iSPKHGMKABgkLDsGtLZmGQKiLlpFc() ;

constexpr void __cordl_internal_set_BgWKnJLGoAIPCzQrrVsFuyvFpRyp(int32_t  value) ;

constexpr void __cordl_internal_set_KErKKraGOyIPhGAZBfrMstipItSf(int32_t  value) ;

constexpr void __cordl_internal_set_PEMBvLxaoAWXXLIGZwtnmjHozQlJ(int32_t  value) ;

constexpr void __cordl_internal_set_WGbpXNAOwuAOQIAESDFQgmKtCLEqA(::Rewired::ControllerPollingInfo  value) ;

constexpr void __cordl_internal_set_WbVQugdpSnqVlEloAauqDUYcgvJV(::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  value) ;

constexpr void __cordl_internal_set_iSPKHGMKABgkLDsGtLZmGQKiLlpFc(::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  value) ;

/// @brief Method .ctor, addr 0x181859da0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method iBNkLAUFvwPgihFLRDYodXJuaqSB, addr 0x181867100, size 0x30, virtual false, abstract: false, final false
inline void iBNkLAUFvwPgihFLRDYodXJuaqSB() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ControllerPollingInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA(PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA(PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2187};

/// @brief Field BgWKnJLGoAIPCzQrrVsFuyvFpRyp, offset: 0x10, size: 0x4, def value: None
 int32_t  ___BgWKnJLGoAIPCzQrrVsFuyvFpRyp;

/// @brief Field WGbpXNAOwuAOQIAESDFQgmKtCLEqA, offset: 0x18, size: 0x38, def value: None
 ::Rewired::ControllerPollingInfo  ___WGbpXNAOwuAOQIAESDFQgmKtCLEqA;

/// @brief Field PEMBvLxaoAWXXLIGZwtnmjHozQlJ, offset: 0x50, size: 0x4, def value: None
 int32_t  ___PEMBvLxaoAWXXLIGZwtnmjHozQlJ;

/// @brief Field WbVQugdpSnqVlEloAauqDUYcgvJV, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  ___WbVQugdpSnqVlEloAauqDUYcgvJV;

/// @brief Field KErKKraGOyIPhGAZBfrMstipItSf, offset: 0x60, size: 0x4, def value: None
 int32_t  ___KErKKraGOyIPhGAZBfrMstipItSf;

/// @brief Field iSPKHGMKABgkLDsGtLZmGQKiLlpFc, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ControllerPollingInfo>*  ___iSPKHGMKABgkLDsGtLZmGQKiLlpFc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA, ___BgWKnJLGoAIPCzQrrVsFuyvFpRyp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA, ___WGbpXNAOwuAOQIAESDFQgmKtCLEqA) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA, ___PEMBvLxaoAWXXLIGZwtnmjHozQlJ) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA, ___WbVQugdpSnqVlEloAauqDUYcgvJV) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA, ___KErKKraGOyIPhGAZBfrMstipItSf) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA, ___iSPKHGMKABgkLDsGtLZmGQKiLlpFc) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Rewired::PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA) == 0x70, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Utils.Classes.CodeHelper
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/PollingHelper
class CORDL_TYPE ControllerHelper_ReInput_PollingHelper : public ::Rewired::Utils::Classes::CodeHelper {
public:
// Declarations
using AeQcAnYRhvgIfAEKLxrvDamuBCEu = ::Rewired::PollingHelper_ControllerHelper_ReInput_AeQcAnYRhvgIfAEKLxrvDamuBCEu;

using KCrqicwQMnVZoxImizzUCCzWhIQ = ::Rewired::PollingHelper_ControllerHelper_ReInput_KCrqicwQMnVZoxImizzUCCzWhIQ;

using LFWccMoiaViMbcrVlXjYWFAcHVyCA = ::Rewired::PollingHelper_ControllerHelper_ReInput_LFWccMoiaViMbcrVlXjYWFAcHVyCA;

using NhopCuggsucNcuMnKcKAiNsbwTcQA = ::Rewired::PollingHelper_ControllerHelper_ReInput_NhopCuggsucNcuMnKcKAiNsbwTcQA;

using OvDuNcQIJehTjHhyFJrOyKpaSQHFA = ::Rewired::PollingHelper_ControllerHelper_ReInput_OvDuNcQIJehTjHhyFJrOyKpaSQHFA;

using PtJRxoIpFXvjtsKTlFyrEXMoYaHOA = ::Rewired::PollingHelper_ControllerHelper_ReInput_PtJRxoIpFXvjtsKTlFyrEXMoYaHOA;

using RzYPFzjIPshYwBhqeWOHTFJOsSzqA = ::Rewired::PollingHelper_ControllerHelper_ReInput_RzYPFzjIPshYwBhqeWOHTFJOsSzqA;

using dQoMdWVFXINramacisZfuoJkjcal = ::Rewired::PollingHelper_ControllerHelper_ReInput_dQoMdWVFXINramacisZfuoJkjcal;

using dlicCejglcQvNZPeQARHUCbJoXcl = ::Rewired::PollingHelper_ControllerHelper_ReInput_dlicCejglcQvNZPeQARHUCbJoXcl;

using kexbXobyqaTQKkdFYEvyXQqnbGnD = ::Rewired::PollingHelper_ControllerHelper_ReInput_kexbXobyqaTQKkdFYEvyXQqnbGnD;

using sfniBjkvwDDCbjHhXVEMvWZCxzKgA = ::Rewired::PollingHelper_ControllerHelper_ReInput_sfniBjkvwDDCbjHhXVEMvWZCxzKgA;

using wNYqfDTOSwahByUEfWjpyuVKIccq = ::Rewired::PollingHelper_ControllerHelper_ReInput_wNYqfDTOSwahByUEfWjpyuVKIccq;

using ycYZKozAUnsMThXNMlLpdDXcFjmq = ::Rewired::PollingHelper_ControllerHelper_ReInput_ycYZKozAUnsMThXNMlLpdDXcFjmq;

using zAZnUAodryLaGWohFsJUbhPoFHlcA = ::Rewired::PollingHelper_ControllerHelper_ReInput_zAZnUAodryLaGWohFsJUbhPoFHlcA;

using zbSlPlSbfsBRvPkhNWbAuBGEGlAi = ::Rewired::PollingHelper_ControllerHelper_ReInput_zbSlPlSbfsBRvPkhNWbAuBGEGlAi;

/// @brief Field cmkSnfsnhnChoUHOwoSJRbsMEblD, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cmkSnfsnhnChoUHOwoSJRbsMEblD, put=setStaticF_cmkSnfsnhnChoUHOwoSJRbsMEblD)) ::Rewired::ControllerHelper_ReInput_PollingHelper*  cmkSnfsnhnChoUHOwoSJRbsMEblD;

/// @brief Method AjyNxuqRFAucLFPzzLrmfOwPEXXz, addr 0x18186da50, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* AjyNxuqRFAucLFPzzLrmfOwPEXXz() ;

/// @brief Method AxxfxhdzXnHyUPyJQLqqDTSNqQdbb, addr 0x18186dac0, size 0xd0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo AxxfxhdzXnHyUPyJQLqqDTSNqQdbb(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method BDwuNFIAiaWvOzDTZOYAmQacghNk, addr 0x18186db90, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo BDwuNFIAiaWvOzDTZOYAmQacghNk() ;

/// @brief Method BUdHtuJsKpBbVTmDHGfIhTEhiOlG, addr 0x18186dca0, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo BUdHtuJsKpBbVTmDHGfIhTEhiOlG(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method BXJPDsKVWEhsFnHWNfrCHInpccgIA, addr 0x18186dd40, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* BXJPDsKVWEhsFnHWNfrCHInpccgIA() ;

/// @brief Method DBwAFsOoFQjgCiYbIdCOddeDmNXvb, addr 0x18186ddb0, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* DBwAFsOoFQjgCiYbIdCOddeDmNXvb() ;

/// @brief Method EOgDbPaVbAMIMoLyJzATHBHwmmOOA, addr 0x18186dde0, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo EOgDbPaVbAMIMoLyJzATHBHwmmOOA() ;

/// @brief Method ExqCRuAIslYAgqTRaQzNBnRFUMTP, addr 0x18186def0, size 0xd0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo ExqCRuAIslYAgqTRaQzNBnRFUMTP(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method FinJlwoPasoDJZadZlkXVfmLJcvw, addr 0x18186dfc0, size 0xe0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo FinJlwoPasoDJZadZlkXVfmLJcvw(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method HAOFpAybRfHnjBPHhqAICwfTqXbo, addr 0x18186e0a0, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* HAOFpAybRfHnjBPHhqAICwfTqXbo(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method HDaOIIIrqQmHGCxAeFiLTGfcrmaD, addr 0x18186e150, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo HDaOIIIrqQmHGCxAeFiLTGfcrmaD() ;

/// @brief Method HhVSxtDMexneAAkpQbjnKKNOKLSH, addr 0x18186e1c0, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* HhVSxtDMexneAAkpQbjnKKNOKLSH(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method HvXBvteceowZslDqojhddwuwtATN, addr 0x18186e260, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* HvXBvteceowZslDqojhddwuwtATN() ;

/// @brief Method IvbDrfBEEneBHejBhEHxOcCDMSOaA, addr 0x18186e2d0, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* IvbDrfBEEneBHejBhEHxOcCDMSOaA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method JqRaWmOnTMvLpmcSesxUINbvfxxh, addr 0x18186e380, size 0xe0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo JqRaWmOnTMvLpmcSesxUINbvfxxh(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method JrKDBwDoTzuReTxrZNPiKvcOTBnjA, addr 0x18186e460, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* JrKDBwDoTzuReTxrZNPiKvcOTBnjA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method KXYUYwABUvWUIuMcVwOkBfvSeACF, addr 0x18186e510, size 0xe0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo KXYUYwABUvWUIuMcVwOkBfvSeACF(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method KxFlTddQmViOvAUNVaMDczGSSDpDA, addr 0x18186e5f0, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* KxFlTddQmViOvAUNVaMDczGSSDpDA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method LWMDsbbtoaqhBfmGgnZORnkmZaUGB, addr 0x18186e690, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo LWMDsbbtoaqhBfmGgnZORnkmZaUGB(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method LXPJcVkAQSATKMcuxeZtHjwCjlARA, addr 0x18186e730, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* LXPJcVkAQSATKMcuxeZtHjwCjlARA() ;

/// @brief Method LkMoPCgXxBxsbusmtDarXIucThYB, addr 0x18186e7a0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* LkMoPCgXxBxsbusmtDarXIucThYB() ;

/// @brief Method LvFwTqDXrSgozmaBlECAHrWBJkti, addr 0x18186e810, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* LvFwTqDXrSgozmaBlECAHrWBJkti(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method McfYRMZcDqYCbytIEgpXMHodDqXHA, addr 0x18186e8c0, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* McfYRMZcDqYCbytIEgpXMHodDqXHA() ;

static inline ::Rewired::ControllerHelper_ReInput_PollingHelper* New_ctor() ;

/// @brief Method OlpbSoNfMOarkecdraYquEpXScbsA, addr 0x18186e8f0, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo OlpbSoNfMOarkecdraYquEpXScbsA() ;

/// @brief Method PollAllControllersForAllAxes, addr 0x18186e990, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollAllControllersForAllAxes() ;

/// @brief Method PollAllControllersForAllButtons, addr 0x18186ea30, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollAllControllersForAllButtons() ;

/// @brief Method PollAllControllersForAllButtonsDown, addr 0x18186e9e0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollAllControllersForAllButtonsDown() ;

/// @brief Method PollAllControllersForAllElements, addr 0x18186ead0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollAllControllersForAllElements() ;

/// @brief Method PollAllControllersForAllElementsDown, addr 0x18186ea80, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollAllControllersForAllElementsDown() ;

/// @brief Method PollAllControllersForFirstAxis, addr 0x18186eb20, size 0x1a0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollAllControllersForFirstAxis() ;

/// @brief Method PollAllControllersForFirstButton, addr 0x18186ee50, size 0x190, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollAllControllersForFirstButton() ;

/// @brief Method PollAllControllersForFirstButtonDown, addr 0x18186ecc0, size 0x190, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollAllControllersForFirstButtonDown() ;

/// @brief Method PollAllControllersForFirstElement, addr 0x18186f170, size 0x190, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollAllControllersForFirstElement() ;

/// @brief Method PollAllControllersForFirstElementDown, addr 0x18186efe0, size 0x190, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollAllControllersForFirstElementDown() ;

/// @brief Method PollAllControllersOfTypeForFirstAxis, addr 0x18186f300, size 0xe0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollAllControllersOfTypeForFirstAxis(::Rewired::ControllerType  controllerType) ;

/// @brief Method PollAllControllersOfTypeForFirstButton, addr 0x18186f4f0, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollAllControllersOfTypeForFirstButton(::Rewired::ControllerType  controllerType) ;

/// @brief Method PollAllControllersOfTypeForFirstButtonDown, addr 0x18186f3e0, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollAllControllersOfTypeForFirstButtonDown(::Rewired::ControllerType  controllerType) ;

/// @brief Method PollAllControllersOfTypeForFirstElement, addr 0x18186f710, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollAllControllersOfTypeForFirstElement(::Rewired::ControllerType  controllerType) ;

/// @brief Method PollAllControllersOfTypeForFirstElementDown, addr 0x18186f600, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollAllControllersOfTypeForFirstElementDown(::Rewired::ControllerType  controllerType) ;

/// @brief Method PollControllerForAllAxes, addr 0x18186f820, size 0x1d0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollControllerForAllAxes(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method PollControllerForAllButtons, addr 0x18186fbc0, size 0x1d0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollControllerForAllButtons(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method PollControllerForAllButtonsDown, addr 0x18186f9f0, size 0x1d0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollControllerForAllButtonsDown(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method PollControllerForAllElements, addr 0x18186ff60, size 0x1d0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollControllerForAllElements(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method PollControllerForAllElementsDown, addr 0x18186fd90, size 0x1d0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* PollControllerForAllElementsDown(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method PollControllerForFirstAxis, addr 0x181870130, size 0x170, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollControllerForFirstAxis(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method PollControllerForFirstButton, addr 0x181870460, size 0x1c0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollControllerForFirstButton(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method PollControllerForFirstButtonDown, addr 0x1818702a0, size 0x1c0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollControllerForFirstButtonDown(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method PollControllerForFirstElement, addr 0x1818707e0, size 0x1c0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollControllerForFirstElement(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method PollControllerForFirstElementDown, addr 0x181870620, size 0x1c0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo PollControllerForFirstElementDown(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method QwUlmJsFiMavebNeClWsezTbSWOXb, addr 0x1818709a0, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* QwUlmJsFiMavebNeClWsezTbSWOXb() ;

/// @brief Method RSilUwXjiQarzaVsuXWbRNdMGaSs, addr 0x1818709d0, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo RSilUwXjiQarzaVsuXWbRNdMGaSs() ;

/// @brief Method RsRCztwAJYRSoXXcVQylslIvHYeS, addr 0x181870ae0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo RsRCztwAJYRSoXXcVQylslIvHYeS() ;

/// @brief Method TPMETNqixWXfZfYIwGOcLwLEghh, addr 0x181870b50, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* TPMETNqixWXfZfYIwGOcLwLEghh(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method VZOleFqdOqGpVyXuIEjVBcCDjgXL, addr 0x181870c00, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* VZOleFqdOqGpVyXuIEjVBcCDjgXL(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method XDdrFqcGKNLoLsoBMthnxodgYXym, addr 0x181870cb0, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* XDdrFqcGKNLoLsoBMthnxodgYXym() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method dAPanMinjltuhhFsrxeWTulclBxT, addr 0x181870ce0, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* dAPanMinjltuhhFsrxeWTulclBxT() ;

/// @brief Method dKxqUQjqsYccJJhbnXHjGAnQccJp, addr 0x181870d10, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo dKxqUQjqsYccJJhbnXHjGAnQccJp() ;

/// @brief Method dvOAwgmOqqeXrWSoJjyOJMSvbiNo, addr 0x181870e20, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* dvOAwgmOqqeXrWSoJjyOJMSvbiNo() ;

/// @brief Method fDfiHbstGkNjhbVlvOeGpdFvZtnX, addr 0x181870e50, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo fDfiHbstGkNjhbVlvOeGpdFvZtnX() ;

/// @brief Method fKyGKCjolJTuplulELbvPbmfBZnWA, addr 0x181870f60, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo fKyGKCjolJTuplulELbvPbmfBZnWA() ;

/// @brief Method fVvEzspJpHqgRqdVUdcBSOiSWilg, addr 0x181871000, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo fVvEzspJpHqgRqdVUdcBSOiSWilg() ;

/// @brief Method gefLgdfqkHLRwnacLnmyrJkBYmBJ, addr 0x1818710a0, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* gefLgdfqkHLRwnacLnmyrJkBYmBJ() ;

static inline ::Rewired::ControllerHelper_ReInput_PollingHelper* getStaticF_cmkSnfsnhnChoUHOwoSJRbsMEblD() ;

/// @brief Method gvPSNnYWmrDdzneEwvfhGDCIGShc, addr 0x1818710d0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ControllerHelper_ReInput_PollingHelper* gvPSNnYWmrDdzneEwvfhGDCIGShc() ;

/// @brief Method hHjstZXcPLiHcvkXYAZeqrUHiwQN, addr 0x181871130, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* hHjstZXcPLiHcvkXYAZeqrUHiwQN() ;

/// @brief Method jBFoFYmBnLeydBcplWROERkCucOU, addr 0x181871160, size 0x100, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo jBFoFYmBnLeydBcplWROERkCucOU() ;

/// @brief Method kKDCGhViLAtZwnCAZYcuPxDDuBMR, addr 0x181871260, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo kKDCGhViLAtZwnCAZYcuPxDDuBMR() ;

/// @brief Method kMiRUPsPcGwpSQQXdBJNAyqkeikv, addr 0x181871370, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* kMiRUPsPcGwpSQQXdBJNAyqkeikv() ;

/// @brief Method lznVLwuWtFXHPGUfThPWFbjWwKKe, addr 0x1818713e0, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* lznVLwuWtFXHPGUfThPWFbjWwKKe(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method mEhNYvdTpknepSlRnPYnkaCGPcfl, addr 0x181871490, size 0xd0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo mEhNYvdTpknepSlRnPYnkaCGPcfl(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method pBVDTsrvQDnwWCvfYWMtbduGMEaL, addr 0x181871560, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo pBVDTsrvQDnwWCvfYWMtbduGMEaL() ;

/// @brief Method pCxUtlzvRcJFWUvSawBJWyPFRjWC, addr 0x181871670, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* pCxUtlzvRcJFWUvSawBJWyPFRjWC(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method pFnlnVQbzqFlDSBuLmmVSKnkBGqGA, addr 0x181871720, size 0xe0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo pFnlnVQbzqFlDSBuLmmVSKnkBGqGA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qofyUJoFXxspfjlrPmwQPEcmwSjJ, addr 0x181871800, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo qofyUJoFXxspfjlrPmwQPEcmwSjJ() ;

/// @brief Method sDjjVsXeSKtpOKRvodEsGkyZkmXG, addr 0x181871910, size 0x100, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo sDjjVsXeSKtpOKRvodEsGkyZkmXG() ;

static inline void setStaticF_cmkSnfsnhnChoUHOwoSJRbsMEblD(::Rewired::ControllerHelper_ReInput_PollingHelper*  value) ;

/// @brief Method tpEsFHVGrpRonjOPmwLYzbzlsUJl, addr 0x181871a10, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo tpEsFHVGrpRonjOPmwLYzbzlsUJl() ;

/// @brief Method uJwPcGwKgjDHZWbdWVxekvUdctKv, addr 0x181871a80, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* uJwPcGwKgjDHZWbdWVxekvUdctKv() ;

/// @brief Method vbfdLujfpSIGyrEviOchSQooyifEA, addr 0x181871ab0, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo vbfdLujfpSIGyrEviOchSQooyifEA() ;

/// @brief Method xRBJirDcCzynytBvkUOABluJogH, addr 0x181871b50, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* xRBJirDcCzynytBvkUOABluJogH() ;

/// @brief Method yMDvpHjUOnMLdUqKeJfjvKARTOXx, addr 0x181871bc0, size 0xd0, virtual false, abstract: false, final false
inline ::Rewired::ControllerPollingInfo yMDvpHjUOnMLdUqKeJfjvKARTOXx(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method yVXBwmyadfoqXFJHhaDXyOGmHSGFA, addr 0x181871c90, size 0x30, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ControllerPollingInfo>* yVXBwmyadfoqXFJHhaDXyOGmHSGFA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerHelper_ReInput_PollingHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerHelper_ReInput_PollingHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerHelper_ReInput_PollingHelper(ControllerHelper_ReInput_PollingHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerHelper_ReInput_PollingHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerHelper_ReInput_PollingHelper(ControllerHelper_ReInput_PollingHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2188};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ControllerHelper_ReInput_PollingHelper) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignmentConflictInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/hDLEHhmVTmgRAiUDEYUqZcDylNIp
class CORDL_TYPE ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp : public ::System::Object {
public:
// Declarations
/// @brief Field AzLaLFDzsAfVDxGmVSQlMrmZTzRh, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_AzLaLFDzsAfVDxGmVSQlMrmZTzRh, put=__cordl_internal_set_AzLaLFDzsAfVDxGmVSQlMrmZTzRh)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  AzLaLFDzsAfVDxGmVSQlMrmZTzRh;

/// @brief Field DwlcctXYlkEzrMrFkBlklYVqhsMV, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_DwlcctXYlkEzrMrFkBlklYVqhsMV, put=__cordl_internal_set_DwlcctXYlkEzrMrFkBlklYVqhsMV)) ::Rewired::CustomControllerMap*  DwlcctXYlkEzrMrFkBlklYVqhsMV;

/// @brief Field EucWYVEvGJfSkvGexotcalBAeoXx, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_EucWYVEvGJfSkvGexotcalBAeoXx, put=__cordl_internal_set_EucWYVEvGJfSkvGexotcalBAeoXx)) int32_t  EucWYVEvGJfSkvGexotcalBAeoXx;

/// @brief Field IjWBhucnnpBRAnbrLgfCWVLNdYdK, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_IjWBhucnnpBRAnbrLgfCWVLNdYdK, put=__cordl_internal_set_IjWBhucnnpBRAnbrLgfCWVLNdYdK)) ::Rewired::ActionElementMap*  IjWBhucnnpBRAnbrLgfCWVLNdYdK;

/// @brief Field KoYDzGPdGalyvufOVpqjvhGEVMMf, offset 0x83, size 0x1 
 __declspec(property(get=__cordl_internal_get_KoYDzGPdGalyvufOVpqjvhGEVMMf, put=__cordl_internal_set_KoYDzGPdGalyvufOVpqjvhGEVMMf)) bool  KoYDzGPdGalyvufOVpqjvhGEVMMf;

/// @brief Field NZkBQxVvCgvEKZaNNDBaJWeuzeDkA, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_NZkBQxVvCgvEKZaNNDBaJWeuzeDkA, put=__cordl_internal_set_NZkBQxVvCgvEKZaNNDBaJWeuzeDkA)) int32_t  NZkBQxVvCgvEKZaNNDBaJWeuzeDkA;

/// @brief Field NtfwxikpCONJaLWHeVWWxpXwwoob, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_NtfwxikpCONJaLWHeVWWxpXwwoob, put=__cordl_internal_set_NtfwxikpCONJaLWHeVWWxpXwwoob)) bool  NtfwxikpCONJaLWHeVWWxpXwwoob;

/// @brief Field QMjzYEqPZrNlJYlldpoNEuAAPtcR, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_QMjzYEqPZrNlJYlldpoNEuAAPtcR, put=__cordl_internal_set_QMjzYEqPZrNlJYlldpoNEuAAPtcR)) int32_t  QMjzYEqPZrNlJYlldpoNEuAAPtcR;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)) ::Rewired::ElementAssignmentConflictInfo  System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field ZBviBlVCCfUydGkpTyWqNTXHnoCd, offset 0x14, size 0x2c 
 __declspec(property(get=__cordl_internal_get_ZBviBlVCCfUydGkpTyWqNTXHnoCd, put=__cordl_internal_set_ZBviBlVCCfUydGkpTyWqNTXHnoCd)) ::Rewired::ElementAssignmentConflictInfo  ZBviBlVCCfUydGkpTyWqNTXHnoCd;

/// @brief Field bFXZXFQZOmcDGPJPGbrBvHwLOBtV, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_bFXZXFQZOmcDGPJPGbrBvHwLOBtV, put=__cordl_internal_set_bFXZXFQZOmcDGPJPGbrBvHwLOBtV)) int32_t  bFXZXFQZOmcDGPJPGbrBvHwLOBtV;

/// @brief Field eFmdhDJbXmCrXEZCPRgEdMQhVsHJ, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_eFmdhDJbXmCrXEZCPRgEdMQhVsHJ, put=__cordl_internal_set_eFmdhDJbXmCrXEZCPRgEdMQhVsHJ)) bool  eFmdhDJbXmCrXEZCPRgEdMQhVsHJ;

/// @brief Field fczbiVmenlzFIubVvvajjmGWVsSg, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_fczbiVmenlzFIubVvvajjmGWVsSg, put=__cordl_internal_set_fczbiVmenlzFIubVvvajjmGWVsSg)) bool  fczbiVmenlzFIubVvvajjmGWVsSg;

/// @brief Field grGoRKwOBcClgEoqPhFgCRvZFnuy, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_grGoRKwOBcClgEoqPhFgCRvZFnuy, put=__cordl_internal_set_grGoRKwOBcClgEoqPhFgCRvZFnuy)) ::Rewired::CustomControllerMap*  grGoRKwOBcClgEoqPhFgCRvZFnuy;

/// @brief Field haxGIabCnhVckfyFEFWNgcFozZjqA, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_haxGIabCnhVckfyFEFWNgcFozZjqA, put=__cordl_internal_set_haxGIabCnhVckfyFEFWNgcFozZjqA)) bool  haxGIabCnhVckfyFEFWNgcFozZjqA;

/// @brief Field jWvevHfqUrgiukmQpoZITbzpxcxI, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_jWvevHfqUrgiukmQpoZITbzpxcxI, put=__cordl_internal_set_jWvevHfqUrgiukmQpoZITbzpxcxI)) int32_t  jWvevHfqUrgiukmQpoZITbzpxcxI;

/// @brief Field jqwyowWFHzxBngScdkjaWboFRYcj, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_jqwyowWFHzxBngScdkjaWboFRYcj, put=__cordl_internal_set_jqwyowWFHzxBngScdkjaWboFRYcj)) int32_t  jqwyowWFHzxBngScdkjaWboFRYcj;

/// @brief Field pVhqKEwCnebIGAHZUohLEbfLEorTA, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_pVhqKEwCnebIGAHZUohLEbfLEorTA, put=__cordl_internal_set_pVhqKEwCnebIGAHZUohLEbfLEorTA)) bool  pVhqKEwCnebIGAHZUohLEbfLEorTA;

/// @brief Field vTLKbCobhSBqrzCfVzkZPrAqpQMh, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_vTLKbCobhSBqrzCfVzkZPrAqpQMh, put=__cordl_internal_set_vTLKbCobhSBqrzCfVzkZPrAqpQMh)) int32_t  vTLKbCobhSBqrzCfVzkZPrAqpQMh;

/// @brief Field vupbxaemIgNFKchcFoQIUdflGeZIc, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_vupbxaemIgNFKchcFoQIUdflGeZIc, put=__cordl_internal_set_vupbxaemIgNFKchcFoQIUdflGeZIc)) ::System::Collections::Generic::IList_1<::Rewired::Player*>*  vupbxaemIgNFKchcFoQIUdflGeZIc;

/// @brief Field wdXGJaMixlpYCsLfpaUJoazCmqfA, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_wdXGJaMixlpYCsLfpaUJoazCmqfA, put=__cordl_internal_set_wdXGJaMixlpYCsLfpaUJoazCmqfA)) ::Rewired::ActionElementMap*  wdXGJaMixlpYCsLfpaUJoazCmqfA;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181872fe0, size 0x3b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator, addr 0x181873390, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current, addr 0x180bb78f0, size 0x120, virtual true, abstract: false, final true
inline ::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181873390, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180bb7a10, size 0xd0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181873450, size 0xc0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* const& __cordl_internal_get_AzLaLFDzsAfVDxGmVSQlMrmZTzRh() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*& __cordl_internal_get_AzLaLFDzsAfVDxGmVSQlMrmZTzRh() ;

constexpr ::Rewired::CustomControllerMap* const& __cordl_internal_get_DwlcctXYlkEzrMrFkBlklYVqhsMV() const;

constexpr ::Rewired::CustomControllerMap*& __cordl_internal_get_DwlcctXYlkEzrMrFkBlklYVqhsMV() ;

constexpr int32_t const& __cordl_internal_get_EucWYVEvGJfSkvGexotcalBAeoXx() const;

constexpr int32_t& __cordl_internal_get_EucWYVEvGJfSkvGexotcalBAeoXx() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_IjWBhucnnpBRAnbrLgfCWVLNdYdK() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_IjWBhucnnpBRAnbrLgfCWVLNdYdK() ;

constexpr bool const& __cordl_internal_get_KoYDzGPdGalyvufOVpqjvhGEVMMf() const;

constexpr bool& __cordl_internal_get_KoYDzGPdGalyvufOVpqjvhGEVMMf() ;

constexpr int32_t const& __cordl_internal_get_NZkBQxVvCgvEKZaNNDBaJWeuzeDkA() const;

constexpr int32_t& __cordl_internal_get_NZkBQxVvCgvEKZaNNDBaJWeuzeDkA() ;

constexpr bool const& __cordl_internal_get_NtfwxikpCONJaLWHeVWWxpXwwoob() const;

constexpr bool& __cordl_internal_get_NtfwxikpCONJaLWHeVWWxpXwwoob() ;

constexpr int32_t const& __cordl_internal_get_QMjzYEqPZrNlJYlldpoNEuAAPtcR() const;

constexpr int32_t& __cordl_internal_get_QMjzYEqPZrNlJYlldpoNEuAAPtcR() ;

constexpr ::Rewired::ElementAssignmentConflictInfo const& __cordl_internal_get_ZBviBlVCCfUydGkpTyWqNTXHnoCd() const;

constexpr ::Rewired::ElementAssignmentConflictInfo& __cordl_internal_get_ZBviBlVCCfUydGkpTyWqNTXHnoCd() ;

constexpr int32_t const& __cordl_internal_get_bFXZXFQZOmcDGPJPGbrBvHwLOBtV() const;

constexpr int32_t& __cordl_internal_get_bFXZXFQZOmcDGPJPGbrBvHwLOBtV() ;

constexpr bool const& __cordl_internal_get_eFmdhDJbXmCrXEZCPRgEdMQhVsHJ() const;

constexpr bool& __cordl_internal_get_eFmdhDJbXmCrXEZCPRgEdMQhVsHJ() ;

constexpr bool const& __cordl_internal_get_fczbiVmenlzFIubVvvajjmGWVsSg() const;

constexpr bool& __cordl_internal_get_fczbiVmenlzFIubVvvajjmGWVsSg() ;

constexpr ::Rewired::CustomControllerMap* const& __cordl_internal_get_grGoRKwOBcClgEoqPhFgCRvZFnuy() const;

constexpr ::Rewired::CustomControllerMap*& __cordl_internal_get_grGoRKwOBcClgEoqPhFgCRvZFnuy() ;

constexpr bool const& __cordl_internal_get_haxGIabCnhVckfyFEFWNgcFozZjqA() const;

constexpr bool& __cordl_internal_get_haxGIabCnhVckfyFEFWNgcFozZjqA() ;

constexpr int32_t const& __cordl_internal_get_jWvevHfqUrgiukmQpoZITbzpxcxI() const;

constexpr int32_t& __cordl_internal_get_jWvevHfqUrgiukmQpoZITbzpxcxI() ;

constexpr int32_t const& __cordl_internal_get_jqwyowWFHzxBngScdkjaWboFRYcj() const;

constexpr int32_t& __cordl_internal_get_jqwyowWFHzxBngScdkjaWboFRYcj() ;

constexpr bool const& __cordl_internal_get_pVhqKEwCnebIGAHZUohLEbfLEorTA() const;

constexpr bool& __cordl_internal_get_pVhqKEwCnebIGAHZUohLEbfLEorTA() ;

constexpr int32_t const& __cordl_internal_get_vTLKbCobhSBqrzCfVzkZPrAqpQMh() const;

constexpr int32_t& __cordl_internal_get_vTLKbCobhSBqrzCfVzkZPrAqpQMh() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>* const& __cordl_internal_get_vupbxaemIgNFKchcFoQIUdflGeZIc() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>*& __cordl_internal_get_vupbxaemIgNFKchcFoQIUdflGeZIc() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_wdXGJaMixlpYCsLfpaUJoazCmqfA() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_wdXGJaMixlpYCsLfpaUJoazCmqfA() ;

constexpr void __cordl_internal_set_AzLaLFDzsAfVDxGmVSQlMrmZTzRh(::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  value) ;

constexpr void __cordl_internal_set_DwlcctXYlkEzrMrFkBlklYVqhsMV(::Rewired::CustomControllerMap*  value) ;

constexpr void __cordl_internal_set_EucWYVEvGJfSkvGexotcalBAeoXx(int32_t  value) ;

constexpr void __cordl_internal_set_IjWBhucnnpBRAnbrLgfCWVLNdYdK(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_KoYDzGPdGalyvufOVpqjvhGEVMMf(bool  value) ;

constexpr void __cordl_internal_set_NZkBQxVvCgvEKZaNNDBaJWeuzeDkA(int32_t  value) ;

constexpr void __cordl_internal_set_NtfwxikpCONJaLWHeVWWxpXwwoob(bool  value) ;

constexpr void __cordl_internal_set_QMjzYEqPZrNlJYlldpoNEuAAPtcR(int32_t  value) ;

constexpr void __cordl_internal_set_ZBviBlVCCfUydGkpTyWqNTXHnoCd(::Rewired::ElementAssignmentConflictInfo  value) ;

constexpr void __cordl_internal_set_bFXZXFQZOmcDGPJPGbrBvHwLOBtV(int32_t  value) ;

constexpr void __cordl_internal_set_eFmdhDJbXmCrXEZCPRgEdMQhVsHJ(bool  value) ;

constexpr void __cordl_internal_set_fczbiVmenlzFIubVvvajjmGWVsSg(bool  value) ;

constexpr void __cordl_internal_set_grGoRKwOBcClgEoqPhFgCRvZFnuy(::Rewired::CustomControllerMap*  value) ;

constexpr void __cordl_internal_set_haxGIabCnhVckfyFEFWNgcFozZjqA(bool  value) ;

constexpr void __cordl_internal_set_jWvevHfqUrgiukmQpoZITbzpxcxI(int32_t  value) ;

constexpr void __cordl_internal_set_jqwyowWFHzxBngScdkjaWboFRYcj(int32_t  value) ;

constexpr void __cordl_internal_set_pVhqKEwCnebIGAHZUohLEbfLEorTA(bool  value) ;

constexpr void __cordl_internal_set_vTLKbCobhSBqrzCfVzkZPrAqpQMh(int32_t  value) ;

constexpr void __cordl_internal_set_vupbxaemIgNFKchcFoQIUdflGeZIc(::System::Collections::Generic::IList_1<::Rewired::Player*>*  value) ;

constexpr void __cordl_internal_set_wdXGJaMixlpYCsLfpaUJoazCmqfA(::Rewired::ActionElementMap*  value) ;

/// @brief Method .ctor, addr 0x180bb7ae0, size 0xeb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method iOaiZOyTxrjJBQoTpGJlILnZRJgmA, addr 0x181873510, size 0x30, virtual false, abstract: false, final false
inline void iOaiZOyTxrjJBQoTpGJlILnZRJgmA() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp(ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp(ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2189};

/// @brief Field jqwyowWFHzxBngScdkjaWboFRYcj, offset: 0x10, size: 0x4, def value: None
 int32_t  ___jqwyowWFHzxBngScdkjaWboFRYcj;

/// @brief Field ZBviBlVCCfUydGkpTyWqNTXHnoCd, offset: 0x14, size: 0x2c, def value: None
 ::Rewired::ElementAssignmentConflictInfo  ___ZBviBlVCCfUydGkpTyWqNTXHnoCd;

/// @brief Field bFXZXFQZOmcDGPJPGbrBvHwLOBtV, offset: 0x40, size: 0x4, def value: None
 int32_t  ___bFXZXFQZOmcDGPJPGbrBvHwLOBtV;

/// @brief Field vTLKbCobhSBqrzCfVzkZPrAqpQMh, offset: 0x44, size: 0x4, def value: None
 int32_t  ___vTLKbCobhSBqrzCfVzkZPrAqpQMh;

/// @brief Field jWvevHfqUrgiukmQpoZITbzpxcxI, offset: 0x48, size: 0x4, def value: None
 int32_t  ___jWvevHfqUrgiukmQpoZITbzpxcxI;

/// @brief Field wdXGJaMixlpYCsLfpaUJoazCmqfA, offset: 0x50, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___wdXGJaMixlpYCsLfpaUJoazCmqfA;

/// @brief Field IjWBhucnnpBRAnbrLgfCWVLNdYdK, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___IjWBhucnnpBRAnbrLgfCWVLNdYdK;

/// @brief Field NtfwxikpCONJaLWHeVWWxpXwwoob, offset: 0x60, size: 0x1, def value: None
 bool  ___NtfwxikpCONJaLWHeVWWxpXwwoob;

/// @brief Field pVhqKEwCnebIGAHZUohLEbfLEorTA, offset: 0x61, size: 0x1, def value: None
 bool  ___pVhqKEwCnebIGAHZUohLEbfLEorTA;

/// @brief Field QMjzYEqPZrNlJYlldpoNEuAAPtcR, offset: 0x64, size: 0x4, def value: None
 int32_t  ___QMjzYEqPZrNlJYlldpoNEuAAPtcR;

/// @brief Field EucWYVEvGJfSkvGexotcalBAeoXx, offset: 0x68, size: 0x4, def value: None
 int32_t  ___EucWYVEvGJfSkvGexotcalBAeoXx;

/// @brief Field DwlcctXYlkEzrMrFkBlklYVqhsMV, offset: 0x70, size: 0x8, def value: None
 ::Rewired::CustomControllerMap*  ___DwlcctXYlkEzrMrFkBlklYVqhsMV;

/// @brief Field grGoRKwOBcClgEoqPhFgCRvZFnuy, offset: 0x78, size: 0x8, def value: None
 ::Rewired::CustomControllerMap*  ___grGoRKwOBcClgEoqPhFgCRvZFnuy;

/// @brief Field eFmdhDJbXmCrXEZCPRgEdMQhVsHJ, offset: 0x80, size: 0x1, def value: None
 bool  ___eFmdhDJbXmCrXEZCPRgEdMQhVsHJ;

/// @brief Field haxGIabCnhVckfyFEFWNgcFozZjqA, offset: 0x81, size: 0x1, def value: None
 bool  ___haxGIabCnhVckfyFEFWNgcFozZjqA;

/// @brief Field fczbiVmenlzFIubVvvajjmGWVsSg, offset: 0x82, size: 0x1, def value: None
 bool  ___fczbiVmenlzFIubVvvajjmGWVsSg;

/// @brief Field KoYDzGPdGalyvufOVpqjvhGEVMMf, offset: 0x83, size: 0x1, def value: None
 bool  ___KoYDzGPdGalyvufOVpqjvhGEVMMf;

/// @brief Field vupbxaemIgNFKchcFoQIUdflGeZIc, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Player*>*  ___vupbxaemIgNFKchcFoQIUdflGeZIc;

/// @brief Field NZkBQxVvCgvEKZaNNDBaJWeuzeDkA, offset: 0x90, size: 0x4, def value: None
 int32_t  ___NZkBQxVvCgvEKZaNNDBaJWeuzeDkA;

/// @brief Field AzLaLFDzsAfVDxGmVSQlMrmZTzRh, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  ___AzLaLFDzsAfVDxGmVSQlMrmZTzRh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___jqwyowWFHzxBngScdkjaWboFRYcj) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___ZBviBlVCCfUydGkpTyWqNTXHnoCd) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___bFXZXFQZOmcDGPJPGbrBvHwLOBtV) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___vTLKbCobhSBqrzCfVzkZPrAqpQMh) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___jWvevHfqUrgiukmQpoZITbzpxcxI) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___wdXGJaMixlpYCsLfpaUJoazCmqfA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___IjWBhucnnpBRAnbrLgfCWVLNdYdK) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___NtfwxikpCONJaLWHeVWWxpXwwoob) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___pVhqKEwCnebIGAHZUohLEbfLEorTA) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___QMjzYEqPZrNlJYlldpoNEuAAPtcR) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___EucWYVEvGJfSkvGexotcalBAeoXx) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___DwlcctXYlkEzrMrFkBlklYVqhsMV) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___grGoRKwOBcClgEoqPhFgCRvZFnuy) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___eFmdhDJbXmCrXEZCPRgEdMQhVsHJ) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___haxGIabCnhVckfyFEFWNgcFozZjqA) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___fczbiVmenlzFIubVvvajjmGWVsSg) == 0x82, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___KoYDzGPdGalyvufOVpqjvhGEVMMf) == 0x83, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___vupbxaemIgNFKchcFoQIUdflGeZIc) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___NZkBQxVvCgvEKZaNNDBaJWeuzeDkA) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp, ___AzLaLFDzsAfVDxGmVSQlMrmZTzRh) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp) == 0xa0, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignmentConflictCheck, Rewired.ElementAssignmentConflictInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/IfvilbdRIJhBIQTDsHgzmZvMNFqIA
class CORDL_TYPE ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA : public ::System::Object {
public:
// Declarations
/// @brief Field IOJvvxMmhBGuIaeQEDJgwEzSvlmNA, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_IOJvvxMmhBGuIaeQEDJgwEzSvlmNA, put=__cordl_internal_set_IOJvvxMmhBGuIaeQEDJgwEzSvlmNA)) int32_t  IOJvvxMmhBGuIaeQEDJgwEzSvlmNA;

/// @brief Field LlyRQpFkgtmwzgtrVYEhWCDZsFzj, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_LlyRQpFkgtmwzgtrVYEhWCDZsFzj, put=__cordl_internal_set_LlyRQpFkgtmwzgtrVYEhWCDZsFzj)) bool  LlyRQpFkgtmwzgtrVYEhWCDZsFzj;

/// @brief Field NLOGeciWcYHAALnXVIUlGOtJnPgI, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_NLOGeciWcYHAALnXVIUlGOtJnPgI, put=__cordl_internal_set_NLOGeciWcYHAALnXVIUlGOtJnPgI)) int32_t  NLOGeciWcYHAALnXVIUlGOtJnPgI;

/// @brief Field OiiyCdsjTRZXkcdqaGWLhwfbrBGu, offset 0x7c, size 0x38 
 __declspec(property(get=__cordl_internal_get_OiiyCdsjTRZXkcdqaGWLhwfbrBGu, put=__cordl_internal_set_OiiyCdsjTRZXkcdqaGWLhwfbrBGu)) ::Rewired::ElementAssignmentConflictCheck  OiiyCdsjTRZXkcdqaGWLhwfbrBGu;

/// @brief Field SYWXbUjZDuUytGpwsoFznFENoiOD, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_SYWXbUjZDuUytGpwsoFznFENoiOD, put=__cordl_internal_set_SYWXbUjZDuUytGpwsoFznFENoiOD)) ::System::Collections::Generic::IList_1<::Rewired::Player*>*  SYWXbUjZDuUytGpwsoFznFENoiOD;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)) ::Rewired::ElementAssignmentConflictInfo  System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field YpReuKkjGNqypdluusNkqKdLgzJiA, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_YpReuKkjGNqypdluusNkqKdLgzJiA, put=__cordl_internal_set_YpReuKkjGNqypdluusNkqKdLgzJiA)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  YpReuKkjGNqypdluusNkqKdLgzJiA;

/// @brief Field dCVrjIQvuyCVIuZxHJyBnQWjPbUB, offset 0xb6, size 0x1 
 __declspec(property(get=__cordl_internal_get_dCVrjIQvuyCVIuZxHJyBnQWjPbUB, put=__cordl_internal_set_dCVrjIQvuyCVIuZxHJyBnQWjPbUB)) bool  dCVrjIQvuyCVIuZxHJyBnQWjPbUB;

/// @brief Field jNQBhyjiVpwgdEDwHZjqdgwDrldX, offset 0xb7, size 0x1 
 __declspec(property(get=__cordl_internal_get_jNQBhyjiVpwgdEDwHZjqdgwDrldX, put=__cordl_internal_set_jNQBhyjiVpwgdEDwHZjqdgwDrldX)) bool  jNQBhyjiVpwgdEDwHZjqdgwDrldX;

/// @brief Field ldkmkUscEMjZgCZReIGARLGucXEw, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_ldkmkUscEMjZgCZReIGARLGucXEw, put=__cordl_internal_set_ldkmkUscEMjZgCZReIGARLGucXEw)) bool  ldkmkUscEMjZgCZReIGARLGucXEw;

/// @brief Field nYMTobInySBvTYFPVXAfjBWJfMgkA, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_nYMTobInySBvTYFPVXAfjBWJfMgkA, put=__cordl_internal_set_nYMTobInySBvTYFPVXAfjBWJfMgkA)) bool  nYMTobInySBvTYFPVXAfjBWJfMgkA;

/// @brief Field nYzdkXKGtUyLtkshHbomqKZXsuSd, offset 0x14, size 0x2c 
 __declspec(property(get=__cordl_internal_get_nYzdkXKGtUyLtkshHbomqKZXsuSd, put=__cordl_internal_set_nYzdkXKGtUyLtkshHbomqKZXsuSd)) ::Rewired::ElementAssignmentConflictInfo  nYzdkXKGtUyLtkshHbomqKZXsuSd;

/// @brief Field sGZmqpQfZerKmEHaSBRCEmLVjtnJ, offset 0x44, size 0x38 
 __declspec(property(get=__cordl_internal_get_sGZmqpQfZerKmEHaSBRCEmLVjtnJ, put=__cordl_internal_set_sGZmqpQfZerKmEHaSBRCEmLVjtnJ)) ::Rewired::ElementAssignmentConflictCheck  sGZmqpQfZerKmEHaSBRCEmLVjtnJ;

/// @brief Field wLSSacvOZcLqCyEufUSfgFQSevYj, offset 0xb5, size 0x1 
 __declspec(property(get=__cordl_internal_get_wLSSacvOZcLqCyEufUSfgFQSevYj, put=__cordl_internal_set_wLSSacvOZcLqCyEufUSfgFQSevYj)) bool  wLSSacvOZcLqCyEufUSfgFQSevYj;

/// @brief Field xnXUTHQXNkRRcCRDLrphoifUkMgI, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_xnXUTHQXNkRRcCRDLrphoifUkMgI, put=__cordl_internal_set_xnXUTHQXNkRRcCRDLrphoifUkMgI)) int32_t  xnXUTHQXNkRRcCRDLrphoifUkMgI;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181866790, size 0x3c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator, addr 0x181866b50, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current, addr 0x180bb78f0, size 0x120, virtual true, abstract: false, final true
inline ::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181866b50, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180bb7a10, size 0xd0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181866c10, size 0xc0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_IOJvvxMmhBGuIaeQEDJgwEzSvlmNA() const;

constexpr int32_t& __cordl_internal_get_IOJvvxMmhBGuIaeQEDJgwEzSvlmNA() ;

constexpr bool const& __cordl_internal_get_LlyRQpFkgtmwzgtrVYEhWCDZsFzj() const;

constexpr bool& __cordl_internal_get_LlyRQpFkgtmwzgtrVYEhWCDZsFzj() ;

constexpr int32_t const& __cordl_internal_get_NLOGeciWcYHAALnXVIUlGOtJnPgI() const;

constexpr int32_t& __cordl_internal_get_NLOGeciWcYHAALnXVIUlGOtJnPgI() ;

constexpr ::Rewired::ElementAssignmentConflictCheck const& __cordl_internal_get_OiiyCdsjTRZXkcdqaGWLhwfbrBGu() const;

constexpr ::Rewired::ElementAssignmentConflictCheck& __cordl_internal_get_OiiyCdsjTRZXkcdqaGWLhwfbrBGu() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>* const& __cordl_internal_get_SYWXbUjZDuUytGpwsoFznFENoiOD() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>*& __cordl_internal_get_SYWXbUjZDuUytGpwsoFznFENoiOD() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* const& __cordl_internal_get_YpReuKkjGNqypdluusNkqKdLgzJiA() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*& __cordl_internal_get_YpReuKkjGNqypdluusNkqKdLgzJiA() ;

constexpr bool const& __cordl_internal_get_dCVrjIQvuyCVIuZxHJyBnQWjPbUB() const;

constexpr bool& __cordl_internal_get_dCVrjIQvuyCVIuZxHJyBnQWjPbUB() ;

constexpr bool const& __cordl_internal_get_jNQBhyjiVpwgdEDwHZjqdgwDrldX() const;

constexpr bool& __cordl_internal_get_jNQBhyjiVpwgdEDwHZjqdgwDrldX() ;

constexpr bool const& __cordl_internal_get_ldkmkUscEMjZgCZReIGARLGucXEw() const;

constexpr bool& __cordl_internal_get_ldkmkUscEMjZgCZReIGARLGucXEw() ;

constexpr bool const& __cordl_internal_get_nYMTobInySBvTYFPVXAfjBWJfMgkA() const;

constexpr bool& __cordl_internal_get_nYMTobInySBvTYFPVXAfjBWJfMgkA() ;

constexpr ::Rewired::ElementAssignmentConflictInfo const& __cordl_internal_get_nYzdkXKGtUyLtkshHbomqKZXsuSd() const;

constexpr ::Rewired::ElementAssignmentConflictInfo& __cordl_internal_get_nYzdkXKGtUyLtkshHbomqKZXsuSd() ;

constexpr ::Rewired::ElementAssignmentConflictCheck const& __cordl_internal_get_sGZmqpQfZerKmEHaSBRCEmLVjtnJ() const;

constexpr ::Rewired::ElementAssignmentConflictCheck& __cordl_internal_get_sGZmqpQfZerKmEHaSBRCEmLVjtnJ() ;

constexpr bool const& __cordl_internal_get_wLSSacvOZcLqCyEufUSfgFQSevYj() const;

constexpr bool& __cordl_internal_get_wLSSacvOZcLqCyEufUSfgFQSevYj() ;

constexpr int32_t const& __cordl_internal_get_xnXUTHQXNkRRcCRDLrphoifUkMgI() const;

constexpr int32_t& __cordl_internal_get_xnXUTHQXNkRRcCRDLrphoifUkMgI() ;

constexpr void __cordl_internal_set_IOJvvxMmhBGuIaeQEDJgwEzSvlmNA(int32_t  value) ;

constexpr void __cordl_internal_set_LlyRQpFkgtmwzgtrVYEhWCDZsFzj(bool  value) ;

constexpr void __cordl_internal_set_NLOGeciWcYHAALnXVIUlGOtJnPgI(int32_t  value) ;

constexpr void __cordl_internal_set_OiiyCdsjTRZXkcdqaGWLhwfbrBGu(::Rewired::ElementAssignmentConflictCheck  value) ;

constexpr void __cordl_internal_set_SYWXbUjZDuUytGpwsoFznFENoiOD(::System::Collections::Generic::IList_1<::Rewired::Player*>*  value) ;

constexpr void __cordl_internal_set_YpReuKkjGNqypdluusNkqKdLgzJiA(::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  value) ;

constexpr void __cordl_internal_set_dCVrjIQvuyCVIuZxHJyBnQWjPbUB(bool  value) ;

constexpr void __cordl_internal_set_jNQBhyjiVpwgdEDwHZjqdgwDrldX(bool  value) ;

constexpr void __cordl_internal_set_ldkmkUscEMjZgCZReIGARLGucXEw(bool  value) ;

constexpr void __cordl_internal_set_nYMTobInySBvTYFPVXAfjBWJfMgkA(bool  value) ;

constexpr void __cordl_internal_set_nYzdkXKGtUyLtkshHbomqKZXsuSd(::Rewired::ElementAssignmentConflictInfo  value) ;

constexpr void __cordl_internal_set_sGZmqpQfZerKmEHaSBRCEmLVjtnJ(::Rewired::ElementAssignmentConflictCheck  value) ;

constexpr void __cordl_internal_set_wLSSacvOZcLqCyEufUSfgFQSevYj(bool  value) ;

constexpr void __cordl_internal_set_xnXUTHQXNkRRcCRDLrphoifUkMgI(int32_t  value) ;

/// @brief Method .ctor, addr 0x180bb7ae0, size 0xeb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method foISXzCUvNqXdskQynzRzhnUqqcw, addr 0x181866cd0, size 0x30, virtual false, abstract: false, final false
inline void foISXzCUvNqXdskQynzRzhnUqqcw() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA(ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA(ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2190};

/// @brief Field xnXUTHQXNkRRcCRDLrphoifUkMgI, offset: 0x10, size: 0x4, def value: None
 int32_t  ___xnXUTHQXNkRRcCRDLrphoifUkMgI;

/// @brief Field nYzdkXKGtUyLtkshHbomqKZXsuSd, offset: 0x14, size: 0x2c, def value: None
 ::Rewired::ElementAssignmentConflictInfo  ___nYzdkXKGtUyLtkshHbomqKZXsuSd;

/// @brief Field IOJvvxMmhBGuIaeQEDJgwEzSvlmNA, offset: 0x40, size: 0x4, def value: None
 int32_t  ___IOJvvxMmhBGuIaeQEDJgwEzSvlmNA;

/// @brief Field sGZmqpQfZerKmEHaSBRCEmLVjtnJ, offset: 0x44, size: 0x38, def value: None
 ::Rewired::ElementAssignmentConflictCheck  ___sGZmqpQfZerKmEHaSBRCEmLVjtnJ;

/// @brief Field OiiyCdsjTRZXkcdqaGWLhwfbrBGu, offset: 0x7c, size: 0x38, def value: None
 ::Rewired::ElementAssignmentConflictCheck  ___OiiyCdsjTRZXkcdqaGWLhwfbrBGu;

/// @brief Field LlyRQpFkgtmwzgtrVYEhWCDZsFzj, offset: 0xb4, size: 0x1, def value: None
 bool  ___LlyRQpFkgtmwzgtrVYEhWCDZsFzj;

/// @brief Field wLSSacvOZcLqCyEufUSfgFQSevYj, offset: 0xb5, size: 0x1, def value: None
 bool  ___wLSSacvOZcLqCyEufUSfgFQSevYj;

/// @brief Field dCVrjIQvuyCVIuZxHJyBnQWjPbUB, offset: 0xb6, size: 0x1, def value: None
 bool  ___dCVrjIQvuyCVIuZxHJyBnQWjPbUB;

/// @brief Field jNQBhyjiVpwgdEDwHZjqdgwDrldX, offset: 0xb7, size: 0x1, def value: None
 bool  ___jNQBhyjiVpwgdEDwHZjqdgwDrldX;

/// @brief Field ldkmkUscEMjZgCZReIGARLGucXEw, offset: 0xb8, size: 0x1, def value: None
 bool  ___ldkmkUscEMjZgCZReIGARLGucXEw;

/// @brief Field nYMTobInySBvTYFPVXAfjBWJfMgkA, offset: 0xb9, size: 0x1, def value: None
 bool  ___nYMTobInySBvTYFPVXAfjBWJfMgkA;

/// @brief Field SYWXbUjZDuUytGpwsoFznFENoiOD, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Player*>*  ___SYWXbUjZDuUytGpwsoFznFENoiOD;

/// @brief Field NLOGeciWcYHAALnXVIUlGOtJnPgI, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___NLOGeciWcYHAALnXVIUlGOtJnPgI;

/// @brief Field YpReuKkjGNqypdluusNkqKdLgzJiA, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  ___YpReuKkjGNqypdluusNkqKdLgzJiA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___xnXUTHQXNkRRcCRDLrphoifUkMgI) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___nYzdkXKGtUyLtkshHbomqKZXsuSd) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___IOJvvxMmhBGuIaeQEDJgwEzSvlmNA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___sGZmqpQfZerKmEHaSBRCEmLVjtnJ) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___OiiyCdsjTRZXkcdqaGWLhwfbrBGu) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___LlyRQpFkgtmwzgtrVYEhWCDZsFzj) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___wLSSacvOZcLqCyEufUSfgFQSevYj) == 0xb5, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___dCVrjIQvuyCVIuZxHJyBnQWjPbUB) == 0xb6, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___jNQBhyjiVpwgdEDwHZjqdgwDrldX) == 0xb7, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___ldkmkUscEMjZgCZReIGARLGucXEw) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___nYMTobInySBvTYFPVXAfjBWJfMgkA) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___SYWXbUjZDuUytGpwsoFznFENoiOD) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___NLOGeciWcYHAALnXVIUlGOtJnPgI) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA, ___YpReuKkjGNqypdluusNkqKdLgzJiA) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA) == 0xd8, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignmentConflictInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/kDDIsxzeRooJLyqQrsgfNKuyFvXH
class CORDL_TYPE ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH : public ::System::Object {
public:
// Declarations
/// @brief Field CVsDZWlNjidItGcwMrBFeRkyZwsX, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_CVsDZWlNjidItGcwMrBFeRkyZwsX, put=__cordl_internal_set_CVsDZWlNjidItGcwMrBFeRkyZwsX)) ::Rewired::JoystickMap*  CVsDZWlNjidItGcwMrBFeRkyZwsX;

/// @brief Field DhmoZDAnlMClyDlLTflLfcyfHFUZA, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_DhmoZDAnlMClyDlLTflLfcyfHFUZA, put=__cordl_internal_set_DhmoZDAnlMClyDlLTflLfcyfHFUZA)) int32_t  DhmoZDAnlMClyDlLTflLfcyfHFUZA;

/// @brief Field FJefNIHRUgaBBSDNcZjuRmRJuRIo, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_FJefNIHRUgaBBSDNcZjuRmRJuRIo, put=__cordl_internal_set_FJefNIHRUgaBBSDNcZjuRmRJuRIo)) int32_t  FJefNIHRUgaBBSDNcZjuRmRJuRIo;

/// @brief Field FTtEupxMhXLSOPlWiuHnNTefpSBf, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_FTtEupxMhXLSOPlWiuHnNTefpSBf, put=__cordl_internal_set_FTtEupxMhXLSOPlWiuHnNTefpSBf)) int32_t  FTtEupxMhXLSOPlWiuHnNTefpSBf;

/// @brief Field FljcDMEXpFNxYeVykFWrIDVHDcdYA, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_FljcDMEXpFNxYeVykFWrIDVHDcdYA, put=__cordl_internal_set_FljcDMEXpFNxYeVykFWrIDVHDcdYA)) bool  FljcDMEXpFNxYeVykFWrIDVHDcdYA;

/// @brief Field KcoavfOBZlcOMXSxGQpLuTrOOrdg, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_KcoavfOBZlcOMXSxGQpLuTrOOrdg, put=__cordl_internal_set_KcoavfOBZlcOMXSxGQpLuTrOOrdg)) bool  KcoavfOBZlcOMXSxGQpLuTrOOrdg;

/// @brief Field KlqjqksDKGvYaumPsgJOKJaUkJCI, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_KlqjqksDKGvYaumPsgJOKJaUkJCI, put=__cordl_internal_set_KlqjqksDKGvYaumPsgJOKJaUkJCI)) ::Rewired::ActionElementMap*  KlqjqksDKGvYaumPsgJOKJaUkJCI;

/// @brief Field LzdujSlzhlnOiuefemkkTqMQFppGA, offset 0x82, size 0x1 
 __declspec(property(get=__cordl_internal_get_LzdujSlzhlnOiuefemkkTqMQFppGA, put=__cordl_internal_set_LzdujSlzhlnOiuefemkkTqMQFppGA)) bool  LzdujSlzhlnOiuefemkkTqMQFppGA;

/// @brief Field PkbVFxLcGoGQMAiDWlTiZyKvWuPZ, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get_PkbVFxLcGoGQMAiDWlTiZyKvWuPZ, put=__cordl_internal_set_PkbVFxLcGoGQMAiDWlTiZyKvWuPZ)) bool  PkbVFxLcGoGQMAiDWlTiZyKvWuPZ;

/// @brief Field SYAFYCfLRWynOVyyvxQbWPWdtJIv, offset 0x83, size 0x1 
 __declspec(property(get=__cordl_internal_get_SYAFYCfLRWynOVyyvxQbWPWdtJIv, put=__cordl_internal_set_SYAFYCfLRWynOVyyvxQbWPWdtJIv)) bool  SYAFYCfLRWynOVyyvxQbWPWdtJIv;

/// @brief Field SfbMtthItdAfLTpYPnuvGMqgNKZU, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_SfbMtthItdAfLTpYPnuvGMqgNKZU, put=__cordl_internal_set_SfbMtthItdAfLTpYPnuvGMqgNKZU)) int32_t  SfbMtthItdAfLTpYPnuvGMqgNKZU;

/// @brief Field SjHHWBoPWNFmTRMkmLBLgTlqqvAP, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_SjHHWBoPWNFmTRMkmLBLgTlqqvAP, put=__cordl_internal_set_SjHHWBoPWNFmTRMkmLBLgTlqqvAP)) ::System::Collections::Generic::IList_1<::Rewired::Player*>*  SjHHWBoPWNFmTRMkmLBLgTlqqvAP;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)) ::Rewired::ElementAssignmentConflictInfo  System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field XNYEIRHPZlFGrqtAuQwMFEEDWLVkB, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_XNYEIRHPZlFGrqtAuQwMFEEDWLVkB, put=__cordl_internal_set_XNYEIRHPZlFGrqtAuQwMFEEDWLVkB)) int32_t  XNYEIRHPZlFGrqtAuQwMFEEDWLVkB;

/// @brief Field bjGItQRzSncTgGskrnezarJnAQzo, offset 0x14, size 0x2c 
 __declspec(property(get=__cordl_internal_get_bjGItQRzSncTgGskrnezarJnAQzo, put=__cordl_internal_set_bjGItQRzSncTgGskrnezarJnAQzo)) ::Rewired::ElementAssignmentConflictInfo  bjGItQRzSncTgGskrnezarJnAQzo;

/// @brief Field embHbWDRYbsPdoAeIfDwPvUrXQXV, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_embHbWDRYbsPdoAeIfDwPvUrXQXV, put=__cordl_internal_set_embHbWDRYbsPdoAeIfDwPvUrXQXV)) ::Rewired::ActionElementMap*  embHbWDRYbsPdoAeIfDwPvUrXQXV;

/// @brief Field gmXaZNFvaOwgKkFhxEjKAsOKfic, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_gmXaZNFvaOwgKkFhxEjKAsOKfic, put=__cordl_internal_set_gmXaZNFvaOwgKkFhxEjKAsOKfic)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  gmXaZNFvaOwgKkFhxEjKAsOKfic;

/// @brief Field nEPCvbgkthgroPgxoxzMOrejWywp, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_nEPCvbgkthgroPgxoxzMOrejWywp, put=__cordl_internal_set_nEPCvbgkthgroPgxoxzMOrejWywp)) int32_t  nEPCvbgkthgroPgxoxzMOrejWywp;

/// @brief Field pkZrziWklJuBaHgOzZtLHpjKVxMD, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_pkZrziWklJuBaHgOzZtLHpjKVxMD, put=__cordl_internal_set_pkZrziWklJuBaHgOzZtLHpjKVxMD)) bool  pkZrziWklJuBaHgOzZtLHpjKVxMD;

/// @brief Field qhrzRBjRyLqlpmfhNOIsitOxlLwI, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_qhrzRBjRyLqlpmfhNOIsitOxlLwI, put=__cordl_internal_set_qhrzRBjRyLqlpmfhNOIsitOxlLwI)) int32_t  qhrzRBjRyLqlpmfhNOIsitOxlLwI;

/// @brief Field xemjoHwFbaAdgmIdGbARbWrcIMfz, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_xemjoHwFbaAdgmIdGbARbWrcIMfz, put=__cordl_internal_set_xemjoHwFbaAdgmIdGbARbWrcIMfz)) ::Rewired::JoystickMap*  xemjoHwFbaAdgmIdGbARbWrcIMfz;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ClnBFacojlzioUdhtmYnOkVdZjkA, addr 0x181873510, size 0x30, virtual false, abstract: false, final false
inline void ClnBFacojlzioUdhtmYnOkVdZjkA() ;

/// @brief Method MoveNext, addr 0x181873990, size 0x3b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator, addr 0x181873d40, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current, addr 0x180bb78f0, size 0x120, virtual true, abstract: false, final true
inline ::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181873d40, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180bb7a10, size 0xd0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181873450, size 0xc0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::Rewired::JoystickMap* const& __cordl_internal_get_CVsDZWlNjidItGcwMrBFeRkyZwsX() const;

constexpr ::Rewired::JoystickMap*& __cordl_internal_get_CVsDZWlNjidItGcwMrBFeRkyZwsX() ;

constexpr int32_t const& __cordl_internal_get_DhmoZDAnlMClyDlLTflLfcyfHFUZA() const;

constexpr int32_t& __cordl_internal_get_DhmoZDAnlMClyDlLTflLfcyfHFUZA() ;

constexpr int32_t const& __cordl_internal_get_FJefNIHRUgaBBSDNcZjuRmRJuRIo() const;

constexpr int32_t& __cordl_internal_get_FJefNIHRUgaBBSDNcZjuRmRJuRIo() ;

constexpr int32_t const& __cordl_internal_get_FTtEupxMhXLSOPlWiuHnNTefpSBf() const;

constexpr int32_t& __cordl_internal_get_FTtEupxMhXLSOPlWiuHnNTefpSBf() ;

constexpr bool const& __cordl_internal_get_FljcDMEXpFNxYeVykFWrIDVHDcdYA() const;

constexpr bool& __cordl_internal_get_FljcDMEXpFNxYeVykFWrIDVHDcdYA() ;

constexpr bool const& __cordl_internal_get_KcoavfOBZlcOMXSxGQpLuTrOOrdg() const;

constexpr bool& __cordl_internal_get_KcoavfOBZlcOMXSxGQpLuTrOOrdg() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_KlqjqksDKGvYaumPsgJOKJaUkJCI() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_KlqjqksDKGvYaumPsgJOKJaUkJCI() ;

constexpr bool const& __cordl_internal_get_LzdujSlzhlnOiuefemkkTqMQFppGA() const;

constexpr bool& __cordl_internal_get_LzdujSlzhlnOiuefemkkTqMQFppGA() ;

constexpr bool const& __cordl_internal_get_PkbVFxLcGoGQMAiDWlTiZyKvWuPZ() const;

constexpr bool& __cordl_internal_get_PkbVFxLcGoGQMAiDWlTiZyKvWuPZ() ;

constexpr bool const& __cordl_internal_get_SYAFYCfLRWynOVyyvxQbWPWdtJIv() const;

constexpr bool& __cordl_internal_get_SYAFYCfLRWynOVyyvxQbWPWdtJIv() ;

constexpr int32_t const& __cordl_internal_get_SfbMtthItdAfLTpYPnuvGMqgNKZU() const;

constexpr int32_t& __cordl_internal_get_SfbMtthItdAfLTpYPnuvGMqgNKZU() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>* const& __cordl_internal_get_SjHHWBoPWNFmTRMkmLBLgTlqqvAP() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>*& __cordl_internal_get_SjHHWBoPWNFmTRMkmLBLgTlqqvAP() ;

constexpr int32_t const& __cordl_internal_get_XNYEIRHPZlFGrqtAuQwMFEEDWLVkB() const;

constexpr int32_t& __cordl_internal_get_XNYEIRHPZlFGrqtAuQwMFEEDWLVkB() ;

constexpr ::Rewired::ElementAssignmentConflictInfo const& __cordl_internal_get_bjGItQRzSncTgGskrnezarJnAQzo() const;

constexpr ::Rewired::ElementAssignmentConflictInfo& __cordl_internal_get_bjGItQRzSncTgGskrnezarJnAQzo() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_embHbWDRYbsPdoAeIfDwPvUrXQXV() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_embHbWDRYbsPdoAeIfDwPvUrXQXV() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* const& __cordl_internal_get_gmXaZNFvaOwgKkFhxEjKAsOKfic() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*& __cordl_internal_get_gmXaZNFvaOwgKkFhxEjKAsOKfic() ;

constexpr int32_t const& __cordl_internal_get_nEPCvbgkthgroPgxoxzMOrejWywp() const;

constexpr int32_t& __cordl_internal_get_nEPCvbgkthgroPgxoxzMOrejWywp() ;

constexpr bool const& __cordl_internal_get_pkZrziWklJuBaHgOzZtLHpjKVxMD() const;

constexpr bool& __cordl_internal_get_pkZrziWklJuBaHgOzZtLHpjKVxMD() ;

constexpr int32_t const& __cordl_internal_get_qhrzRBjRyLqlpmfhNOIsitOxlLwI() const;

constexpr int32_t& __cordl_internal_get_qhrzRBjRyLqlpmfhNOIsitOxlLwI() ;

constexpr ::Rewired::JoystickMap* const& __cordl_internal_get_xemjoHwFbaAdgmIdGbARbWrcIMfz() const;

constexpr ::Rewired::JoystickMap*& __cordl_internal_get_xemjoHwFbaAdgmIdGbARbWrcIMfz() ;

constexpr void __cordl_internal_set_CVsDZWlNjidItGcwMrBFeRkyZwsX(::Rewired::JoystickMap*  value) ;

constexpr void __cordl_internal_set_DhmoZDAnlMClyDlLTflLfcyfHFUZA(int32_t  value) ;

constexpr void __cordl_internal_set_FJefNIHRUgaBBSDNcZjuRmRJuRIo(int32_t  value) ;

constexpr void __cordl_internal_set_FTtEupxMhXLSOPlWiuHnNTefpSBf(int32_t  value) ;

constexpr void __cordl_internal_set_FljcDMEXpFNxYeVykFWrIDVHDcdYA(bool  value) ;

constexpr void __cordl_internal_set_KcoavfOBZlcOMXSxGQpLuTrOOrdg(bool  value) ;

constexpr void __cordl_internal_set_KlqjqksDKGvYaumPsgJOKJaUkJCI(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_LzdujSlzhlnOiuefemkkTqMQFppGA(bool  value) ;

constexpr void __cordl_internal_set_PkbVFxLcGoGQMAiDWlTiZyKvWuPZ(bool  value) ;

constexpr void __cordl_internal_set_SYAFYCfLRWynOVyyvxQbWPWdtJIv(bool  value) ;

constexpr void __cordl_internal_set_SfbMtthItdAfLTpYPnuvGMqgNKZU(int32_t  value) ;

constexpr void __cordl_internal_set_SjHHWBoPWNFmTRMkmLBLgTlqqvAP(::System::Collections::Generic::IList_1<::Rewired::Player*>*  value) ;

constexpr void __cordl_internal_set_XNYEIRHPZlFGrqtAuQwMFEEDWLVkB(int32_t  value) ;

constexpr void __cordl_internal_set_bjGItQRzSncTgGskrnezarJnAQzo(::Rewired::ElementAssignmentConflictInfo  value) ;

constexpr void __cordl_internal_set_embHbWDRYbsPdoAeIfDwPvUrXQXV(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_gmXaZNFvaOwgKkFhxEjKAsOKfic(::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  value) ;

constexpr void __cordl_internal_set_nEPCvbgkthgroPgxoxzMOrejWywp(int32_t  value) ;

constexpr void __cordl_internal_set_pkZrziWklJuBaHgOzZtLHpjKVxMD(bool  value) ;

constexpr void __cordl_internal_set_qhrzRBjRyLqlpmfhNOIsitOxlLwI(int32_t  value) ;

constexpr void __cordl_internal_set_xemjoHwFbaAdgmIdGbARbWrcIMfz(::Rewired::JoystickMap*  value) ;

/// @brief Method .ctor, addr 0x180bb7ae0, size 0xeb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH(ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH(ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2191};

/// @brief Field FTtEupxMhXLSOPlWiuHnNTefpSBf, offset: 0x10, size: 0x4, def value: None
 int32_t  ___FTtEupxMhXLSOPlWiuHnNTefpSBf;

/// @brief Field bjGItQRzSncTgGskrnezarJnAQzo, offset: 0x14, size: 0x2c, def value: None
 ::Rewired::ElementAssignmentConflictInfo  ___bjGItQRzSncTgGskrnezarJnAQzo;

/// @brief Field qhrzRBjRyLqlpmfhNOIsitOxlLwI, offset: 0x40, size: 0x4, def value: None
 int32_t  ___qhrzRBjRyLqlpmfhNOIsitOxlLwI;

/// @brief Field nEPCvbgkthgroPgxoxzMOrejWywp, offset: 0x44, size: 0x4, def value: None
 int32_t  ___nEPCvbgkthgroPgxoxzMOrejWywp;

/// @brief Field DhmoZDAnlMClyDlLTflLfcyfHFUZA, offset: 0x48, size: 0x4, def value: None
 int32_t  ___DhmoZDAnlMClyDlLTflLfcyfHFUZA;

/// @brief Field embHbWDRYbsPdoAeIfDwPvUrXQXV, offset: 0x50, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___embHbWDRYbsPdoAeIfDwPvUrXQXV;

/// @brief Field KlqjqksDKGvYaumPsgJOKJaUkJCI, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___KlqjqksDKGvYaumPsgJOKJaUkJCI;

/// @brief Field pkZrziWklJuBaHgOzZtLHpjKVxMD, offset: 0x60, size: 0x1, def value: None
 bool  ___pkZrziWklJuBaHgOzZtLHpjKVxMD;

/// @brief Field FljcDMEXpFNxYeVykFWrIDVHDcdYA, offset: 0x61, size: 0x1, def value: None
 bool  ___FljcDMEXpFNxYeVykFWrIDVHDcdYA;

/// @brief Field XNYEIRHPZlFGrqtAuQwMFEEDWLVkB, offset: 0x64, size: 0x4, def value: None
 int32_t  ___XNYEIRHPZlFGrqtAuQwMFEEDWLVkB;

/// @brief Field FJefNIHRUgaBBSDNcZjuRmRJuRIo, offset: 0x68, size: 0x4, def value: None
 int32_t  ___FJefNIHRUgaBBSDNcZjuRmRJuRIo;

/// @brief Field xemjoHwFbaAdgmIdGbARbWrcIMfz, offset: 0x70, size: 0x8, def value: None
 ::Rewired::JoystickMap*  ___xemjoHwFbaAdgmIdGbARbWrcIMfz;

/// @brief Field CVsDZWlNjidItGcwMrBFeRkyZwsX, offset: 0x78, size: 0x8, def value: None
 ::Rewired::JoystickMap*  ___CVsDZWlNjidItGcwMrBFeRkyZwsX;

/// @brief Field KcoavfOBZlcOMXSxGQpLuTrOOrdg, offset: 0x80, size: 0x1, def value: None
 bool  ___KcoavfOBZlcOMXSxGQpLuTrOOrdg;

/// @brief Field PkbVFxLcGoGQMAiDWlTiZyKvWuPZ, offset: 0x81, size: 0x1, def value: None
 bool  ___PkbVFxLcGoGQMAiDWlTiZyKvWuPZ;

/// @brief Field LzdujSlzhlnOiuefemkkTqMQFppGA, offset: 0x82, size: 0x1, def value: None
 bool  ___LzdujSlzhlnOiuefemkkTqMQFppGA;

/// @brief Field SYAFYCfLRWynOVyyvxQbWPWdtJIv, offset: 0x83, size: 0x1, def value: None
 bool  ___SYAFYCfLRWynOVyyvxQbWPWdtJIv;

/// @brief Field SjHHWBoPWNFmTRMkmLBLgTlqqvAP, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Player*>*  ___SjHHWBoPWNFmTRMkmLBLgTlqqvAP;

/// @brief Field SfbMtthItdAfLTpYPnuvGMqgNKZU, offset: 0x90, size: 0x4, def value: None
 int32_t  ___SfbMtthItdAfLTpYPnuvGMqgNKZU;

/// @brief Field gmXaZNFvaOwgKkFhxEjKAsOKfic, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  ___gmXaZNFvaOwgKkFhxEjKAsOKfic;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___FTtEupxMhXLSOPlWiuHnNTefpSBf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___bjGItQRzSncTgGskrnezarJnAQzo) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___qhrzRBjRyLqlpmfhNOIsitOxlLwI) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___nEPCvbgkthgroPgxoxzMOrejWywp) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___DhmoZDAnlMClyDlLTflLfcyfHFUZA) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___embHbWDRYbsPdoAeIfDwPvUrXQXV) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___KlqjqksDKGvYaumPsgJOKJaUkJCI) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___pkZrziWklJuBaHgOzZtLHpjKVxMD) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___FljcDMEXpFNxYeVykFWrIDVHDcdYA) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___XNYEIRHPZlFGrqtAuQwMFEEDWLVkB) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___FJefNIHRUgaBBSDNcZjuRmRJuRIo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___xemjoHwFbaAdgmIdGbARbWrcIMfz) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___CVsDZWlNjidItGcwMrBFeRkyZwsX) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___KcoavfOBZlcOMXSxGQpLuTrOOrdg) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___PkbVFxLcGoGQMAiDWlTiZyKvWuPZ) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___LzdujSlzhlnOiuefemkkTqMQFppGA) == 0x82, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___SYAFYCfLRWynOVyyvxQbWPWdtJIv) == 0x83, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___SjHHWBoPWNFmTRMkmLBLgTlqqvAP) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___SfbMtthItdAfLTpYPnuvGMqgNKZU) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH, ___gmXaZNFvaOwgKkFhxEjKAsOKfic) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH) == 0xa0, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignmentConflictCheck, Rewired.ElementAssignmentConflictInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/LBpnzEohFNnJvipeCRAKDBmYwIPq
class CORDL_TYPE ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq : public ::System::Object {
public:
// Declarations
/// @brief Field DkGqHjeGJgHGlNiHgsRfOItsfLpkA, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_DkGqHjeGJgHGlNiHgsRfOItsfLpkA, put=__cordl_internal_set_DkGqHjeGJgHGlNiHgsRfOItsfLpkA)) int32_t  DkGqHjeGJgHGlNiHgsRfOItsfLpkA;

/// @brief Field GeAkDCCNIwKVNJeuIwQJzJuhdXtK, offset 0xb6, size 0x1 
 __declspec(property(get=__cordl_internal_get_GeAkDCCNIwKVNJeuIwQJzJuhdXtK, put=__cordl_internal_set_GeAkDCCNIwKVNJeuIwQJzJuhdXtK)) bool  GeAkDCCNIwKVNJeuIwQJzJuhdXtK;

/// @brief Field HjWyebjRcAFJlDTllfgeeAriiDUNc, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_HjWyebjRcAFJlDTllfgeeAriiDUNc, put=__cordl_internal_set_HjWyebjRcAFJlDTllfgeeAriiDUNc)) bool  HjWyebjRcAFJlDTllfgeeAriiDUNc;

/// @brief Field JqvcfubuiNoyIjlqEMETghTKzMyDc, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_JqvcfubuiNoyIjlqEMETghTKzMyDc, put=__cordl_internal_set_JqvcfubuiNoyIjlqEMETghTKzMyDc)) int32_t  JqvcfubuiNoyIjlqEMETghTKzMyDc;

/// @brief Field MhNlCvICMHHYxNOfMhWDbqMqpRdd, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_MhNlCvICMHHYxNOfMhWDbqMqpRdd, put=__cordl_internal_set_MhNlCvICMHHYxNOfMhWDbqMqpRdd)) bool  MhNlCvICMHHYxNOfMhWDbqMqpRdd;

/// @brief Field NWfZgrZSZTPasieClAEehDbXXOwn, offset 0xb7, size 0x1 
 __declspec(property(get=__cordl_internal_get_NWfZgrZSZTPasieClAEehDbXXOwn, put=__cordl_internal_set_NWfZgrZSZTPasieClAEehDbXXOwn)) bool  NWfZgrZSZTPasieClAEehDbXXOwn;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)) ::Rewired::ElementAssignmentConflictInfo  System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field VqdHbigbkTucbjptVQizcFxswLMg, offset 0x7c, size 0x38 
 __declspec(property(get=__cordl_internal_get_VqdHbigbkTucbjptVQizcFxswLMg, put=__cordl_internal_set_VqdHbigbkTucbjptVQizcFxswLMg)) ::Rewired::ElementAssignmentConflictCheck  VqdHbigbkTucbjptVQizcFxswLMg;

/// @brief Field XUbYVNKKvqjTsKKIEzjjjbJUfufl, offset 0x14, size 0x2c 
 __declspec(property(get=__cordl_internal_get_XUbYVNKKvqjTsKKIEzjjjbJUfufl, put=__cordl_internal_set_XUbYVNKKvqjTsKKIEzjjjbJUfufl)) ::Rewired::ElementAssignmentConflictInfo  XUbYVNKKvqjTsKKIEzjjjbJUfufl;

/// @brief Field bhrPNHfLsmTbBzEJnIpNhcjJStYH, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bhrPNHfLsmTbBzEJnIpNhcjJStYH, put=__cordl_internal_set_bhrPNHfLsmTbBzEJnIpNhcjJStYH)) ::System::Collections::Generic::IList_1<::Rewired::Player*>*  bhrPNHfLsmTbBzEJnIpNhcjJStYH;

/// @brief Field ptTjdeMIyIcubjsPUlkttHIrGFqZ, offset 0x44, size 0x38 
 __declspec(property(get=__cordl_internal_get_ptTjdeMIyIcubjsPUlkttHIrGFqZ, put=__cordl_internal_set_ptTjdeMIyIcubjsPUlkttHIrGFqZ)) ::Rewired::ElementAssignmentConflictCheck  ptTjdeMIyIcubjsPUlkttHIrGFqZ;

/// @brief Field qRNalbNjcYimIJyxGCefMZpmAEMV, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_qRNalbNjcYimIJyxGCefMZpmAEMV, put=__cordl_internal_set_qRNalbNjcYimIJyxGCefMZpmAEMV)) bool  qRNalbNjcYimIJyxGCefMZpmAEMV;

/// @brief Field tUoEtlfgSycjiwEHAFxQzgDBlvUbb, offset 0xb5, size 0x1 
 __declspec(property(get=__cordl_internal_get_tUoEtlfgSycjiwEHAFxQzgDBlvUbb, put=__cordl_internal_set_tUoEtlfgSycjiwEHAFxQzgDBlvUbb)) bool  tUoEtlfgSycjiwEHAFxQzgDBlvUbb;

/// @brief Field xsgZBGTuzfnpjuZefeyAIUyMAJuh, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_xsgZBGTuzfnpjuZefeyAIUyMAJuh, put=__cordl_internal_set_xsgZBGTuzfnpjuZefeyAIUyMAJuh)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  xsgZBGTuzfnpjuZefeyAIUyMAJuh;

/// @brief Field ypWvvwMcWzeQVtbsCYhyApTlGGXcA, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ypWvvwMcWzeQVtbsCYhyApTlGGXcA, put=__cordl_internal_set_ypWvvwMcWzeQVtbsCYhyApTlGGXcA)) int32_t  ypWvvwMcWzeQVtbsCYhyApTlGGXcA;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method IngTYyvzCDILNYjLbcZmjHPuqolL, addr 0x181866cd0, size 0x30, virtual false, abstract: false, final false
inline void IngTYyvzCDILNYjLbcZmjHPuqolL() ;

/// @brief Method MoveNext, addr 0x181866790, size 0x3c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator, addr 0x181867130, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current, addr 0x180bb78f0, size 0x120, virtual true, abstract: false, final true
inline ::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181867130, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180bb7a10, size 0xd0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181866c10, size 0xc0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_DkGqHjeGJgHGlNiHgsRfOItsfLpkA() const;

constexpr int32_t& __cordl_internal_get_DkGqHjeGJgHGlNiHgsRfOItsfLpkA() ;

constexpr bool const& __cordl_internal_get_GeAkDCCNIwKVNJeuIwQJzJuhdXtK() const;

constexpr bool& __cordl_internal_get_GeAkDCCNIwKVNJeuIwQJzJuhdXtK() ;

constexpr bool const& __cordl_internal_get_HjWyebjRcAFJlDTllfgeeAriiDUNc() const;

constexpr bool& __cordl_internal_get_HjWyebjRcAFJlDTllfgeeAriiDUNc() ;

constexpr int32_t const& __cordl_internal_get_JqvcfubuiNoyIjlqEMETghTKzMyDc() const;

constexpr int32_t& __cordl_internal_get_JqvcfubuiNoyIjlqEMETghTKzMyDc() ;

constexpr bool const& __cordl_internal_get_MhNlCvICMHHYxNOfMhWDbqMqpRdd() const;

constexpr bool& __cordl_internal_get_MhNlCvICMHHYxNOfMhWDbqMqpRdd() ;

constexpr bool const& __cordl_internal_get_NWfZgrZSZTPasieClAEehDbXXOwn() const;

constexpr bool& __cordl_internal_get_NWfZgrZSZTPasieClAEehDbXXOwn() ;

constexpr ::Rewired::ElementAssignmentConflictCheck const& __cordl_internal_get_VqdHbigbkTucbjptVQizcFxswLMg() const;

constexpr ::Rewired::ElementAssignmentConflictCheck& __cordl_internal_get_VqdHbigbkTucbjptVQizcFxswLMg() ;

constexpr ::Rewired::ElementAssignmentConflictInfo const& __cordl_internal_get_XUbYVNKKvqjTsKKIEzjjjbJUfufl() const;

constexpr ::Rewired::ElementAssignmentConflictInfo& __cordl_internal_get_XUbYVNKKvqjTsKKIEzjjjbJUfufl() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>* const& __cordl_internal_get_bhrPNHfLsmTbBzEJnIpNhcjJStYH() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>*& __cordl_internal_get_bhrPNHfLsmTbBzEJnIpNhcjJStYH() ;

constexpr ::Rewired::ElementAssignmentConflictCheck const& __cordl_internal_get_ptTjdeMIyIcubjsPUlkttHIrGFqZ() const;

constexpr ::Rewired::ElementAssignmentConflictCheck& __cordl_internal_get_ptTjdeMIyIcubjsPUlkttHIrGFqZ() ;

constexpr bool const& __cordl_internal_get_qRNalbNjcYimIJyxGCefMZpmAEMV() const;

constexpr bool& __cordl_internal_get_qRNalbNjcYimIJyxGCefMZpmAEMV() ;

constexpr bool const& __cordl_internal_get_tUoEtlfgSycjiwEHAFxQzgDBlvUbb() const;

constexpr bool& __cordl_internal_get_tUoEtlfgSycjiwEHAFxQzgDBlvUbb() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* const& __cordl_internal_get_xsgZBGTuzfnpjuZefeyAIUyMAJuh() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*& __cordl_internal_get_xsgZBGTuzfnpjuZefeyAIUyMAJuh() ;

constexpr int32_t const& __cordl_internal_get_ypWvvwMcWzeQVtbsCYhyApTlGGXcA() const;

constexpr int32_t& __cordl_internal_get_ypWvvwMcWzeQVtbsCYhyApTlGGXcA() ;

constexpr void __cordl_internal_set_DkGqHjeGJgHGlNiHgsRfOItsfLpkA(int32_t  value) ;

constexpr void __cordl_internal_set_GeAkDCCNIwKVNJeuIwQJzJuhdXtK(bool  value) ;

constexpr void __cordl_internal_set_HjWyebjRcAFJlDTllfgeeAriiDUNc(bool  value) ;

constexpr void __cordl_internal_set_JqvcfubuiNoyIjlqEMETghTKzMyDc(int32_t  value) ;

constexpr void __cordl_internal_set_MhNlCvICMHHYxNOfMhWDbqMqpRdd(bool  value) ;

constexpr void __cordl_internal_set_NWfZgrZSZTPasieClAEehDbXXOwn(bool  value) ;

constexpr void __cordl_internal_set_VqdHbigbkTucbjptVQizcFxswLMg(::Rewired::ElementAssignmentConflictCheck  value) ;

constexpr void __cordl_internal_set_XUbYVNKKvqjTsKKIEzjjjbJUfufl(::Rewired::ElementAssignmentConflictInfo  value) ;

constexpr void __cordl_internal_set_bhrPNHfLsmTbBzEJnIpNhcjJStYH(::System::Collections::Generic::IList_1<::Rewired::Player*>*  value) ;

constexpr void __cordl_internal_set_ptTjdeMIyIcubjsPUlkttHIrGFqZ(::Rewired::ElementAssignmentConflictCheck  value) ;

constexpr void __cordl_internal_set_qRNalbNjcYimIJyxGCefMZpmAEMV(bool  value) ;

constexpr void __cordl_internal_set_tUoEtlfgSycjiwEHAFxQzgDBlvUbb(bool  value) ;

constexpr void __cordl_internal_set_xsgZBGTuzfnpjuZefeyAIUyMAJuh(::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  value) ;

constexpr void __cordl_internal_set_ypWvvwMcWzeQVtbsCYhyApTlGGXcA(int32_t  value) ;

/// @brief Method .ctor, addr 0x180bb7ae0, size 0xeb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq(ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq(ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2192};

/// @brief Field JqvcfubuiNoyIjlqEMETghTKzMyDc, offset: 0x10, size: 0x4, def value: None
 int32_t  ___JqvcfubuiNoyIjlqEMETghTKzMyDc;

/// @brief Field XUbYVNKKvqjTsKKIEzjjjbJUfufl, offset: 0x14, size: 0x2c, def value: None
 ::Rewired::ElementAssignmentConflictInfo  ___XUbYVNKKvqjTsKKIEzjjjbJUfufl;

/// @brief Field DkGqHjeGJgHGlNiHgsRfOItsfLpkA, offset: 0x40, size: 0x4, def value: None
 int32_t  ___DkGqHjeGJgHGlNiHgsRfOItsfLpkA;

/// @brief Field ptTjdeMIyIcubjsPUlkttHIrGFqZ, offset: 0x44, size: 0x38, def value: None
 ::Rewired::ElementAssignmentConflictCheck  ___ptTjdeMIyIcubjsPUlkttHIrGFqZ;

/// @brief Field VqdHbigbkTucbjptVQizcFxswLMg, offset: 0x7c, size: 0x38, def value: None
 ::Rewired::ElementAssignmentConflictCheck  ___VqdHbigbkTucbjptVQizcFxswLMg;

/// @brief Field HjWyebjRcAFJlDTllfgeeAriiDUNc, offset: 0xb4, size: 0x1, def value: None
 bool  ___HjWyebjRcAFJlDTllfgeeAriiDUNc;

/// @brief Field tUoEtlfgSycjiwEHAFxQzgDBlvUbb, offset: 0xb5, size: 0x1, def value: None
 bool  ___tUoEtlfgSycjiwEHAFxQzgDBlvUbb;

/// @brief Field GeAkDCCNIwKVNJeuIwQJzJuhdXtK, offset: 0xb6, size: 0x1, def value: None
 bool  ___GeAkDCCNIwKVNJeuIwQJzJuhdXtK;

/// @brief Field NWfZgrZSZTPasieClAEehDbXXOwn, offset: 0xb7, size: 0x1, def value: None
 bool  ___NWfZgrZSZTPasieClAEehDbXXOwn;

/// @brief Field MhNlCvICMHHYxNOfMhWDbqMqpRdd, offset: 0xb8, size: 0x1, def value: None
 bool  ___MhNlCvICMHHYxNOfMhWDbqMqpRdd;

/// @brief Field qRNalbNjcYimIJyxGCefMZpmAEMV, offset: 0xb9, size: 0x1, def value: None
 bool  ___qRNalbNjcYimIJyxGCefMZpmAEMV;

/// @brief Field bhrPNHfLsmTbBzEJnIpNhcjJStYH, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Player*>*  ___bhrPNHfLsmTbBzEJnIpNhcjJStYH;

/// @brief Field ypWvvwMcWzeQVtbsCYhyApTlGGXcA, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___ypWvvwMcWzeQVtbsCYhyApTlGGXcA;

/// @brief Field xsgZBGTuzfnpjuZefeyAIUyMAJuh, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  ___xsgZBGTuzfnpjuZefeyAIUyMAJuh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___JqvcfubuiNoyIjlqEMETghTKzMyDc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___XUbYVNKKvqjTsKKIEzjjjbJUfufl) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___DkGqHjeGJgHGlNiHgsRfOItsfLpkA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___ptTjdeMIyIcubjsPUlkttHIrGFqZ) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___VqdHbigbkTucbjptVQizcFxswLMg) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___HjWyebjRcAFJlDTllfgeeAriiDUNc) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___tUoEtlfgSycjiwEHAFxQzgDBlvUbb) == 0xb5, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___GeAkDCCNIwKVNJeuIwQJzJuhdXtK) == 0xb6, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___NWfZgrZSZTPasieClAEehDbXXOwn) == 0xb7, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___MhNlCvICMHHYxNOfMhWDbqMqpRdd) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___qRNalbNjcYimIJyxGCefMZpmAEMV) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___bhrPNHfLsmTbBzEJnIpNhcjJStYH) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___ypWvvwMcWzeQVtbsCYhyApTlGGXcA) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq, ___xsgZBGTuzfnpjuZefeyAIUyMAJuh) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq) == 0xd8, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignmentConflictInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/QUjuilLLzVYzcECTVRcXiOaiElGEA
class CORDL_TYPE ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA : public ::System::Object {
public:
// Declarations
/// @brief Field EBlbXMfrZKRLGYEmYrFByVHPugNG, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_EBlbXMfrZKRLGYEmYrFByVHPugNG, put=__cordl_internal_set_EBlbXMfrZKRLGYEmYrFByVHPugNG)) ::Rewired::KeyboardMap*  EBlbXMfrZKRLGYEmYrFByVHPugNG;

/// @brief Field FKIvEaePzxGiRdvAjJFNMCTHTZpZ, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_FKIvEaePzxGiRdvAjJFNMCTHTZpZ, put=__cordl_internal_set_FKIvEaePzxGiRdvAjJFNMCTHTZpZ)) bool  FKIvEaePzxGiRdvAjJFNMCTHTZpZ;

/// @brief Field HYRkcergkWCrsdlqyYIczndUdWcM, offset 0x7b, size 0x1 
 __declspec(property(get=__cordl_internal_get_HYRkcergkWCrsdlqyYIczndUdWcM, put=__cordl_internal_set_HYRkcergkWCrsdlqyYIczndUdWcM)) bool  HYRkcergkWCrsdlqyYIczndUdWcM;

/// @brief Field HZoyFXeDZMgxtqxqbfKiosvxLnuf, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_HZoyFXeDZMgxtqxqbfKiosvxLnuf, put=__cordl_internal_set_HZoyFXeDZMgxtqxqbfKiosvxLnuf)) bool  HZoyFXeDZMgxtqxqbfKiosvxLnuf;

/// @brief Field QndbcBgetCvkSZqbIJBOsMOPAklCA, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_QndbcBgetCvkSZqbIJBOsMOPAklCA, put=__cordl_internal_set_QndbcBgetCvkSZqbIJBOsMOPAklCA)) int32_t  QndbcBgetCvkSZqbIJBOsMOPAklCA;

/// @brief Field QrHPbvdrgpwMezvjCWSzwlmiMUkR, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_QrHPbvdrgpwMezvjCWSzwlmiMUkR, put=__cordl_internal_set_QrHPbvdrgpwMezvjCWSzwlmiMUkR)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  QrHPbvdrgpwMezvjCWSzwlmiMUkR;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)) ::Rewired::ElementAssignmentConflictInfo  System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field YJRpWIaQAGkEycIYSfoDUperSIHI, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_YJRpWIaQAGkEycIYSfoDUperSIHI, put=__cordl_internal_set_YJRpWIaQAGkEycIYSfoDUperSIHI)) bool  YJRpWIaQAGkEycIYSfoDUperSIHI;

/// @brief Field ZacMDYnJDdxWfJuAjATHlPKEwNsJ, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_ZacMDYnJDdxWfJuAjATHlPKEwNsJ, put=__cordl_internal_set_ZacMDYnJDdxWfJuAjATHlPKEwNsJ)) int32_t  ZacMDYnJDdxWfJuAjATHlPKEwNsJ;

/// @brief Field ZdYGPVKLoaFuvVZFNxObGOXrLVorA, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZdYGPVKLoaFuvVZFNxObGOXrLVorA, put=__cordl_internal_set_ZdYGPVKLoaFuvVZFNxObGOXrLVorA)) ::System::Collections::Generic::IList_1<::Rewired::Player*>*  ZdYGPVKLoaFuvVZFNxObGOXrLVorA;

/// @brief Field bswYOvIQrCMaTyahVsfXCIFEHFHA, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_bswYOvIQrCMaTyahVsfXCIFEHFHA, put=__cordl_internal_set_bswYOvIQrCMaTyahVsfXCIFEHFHA)) ::Rewired::ActionElementMap*  bswYOvIQrCMaTyahVsfXCIFEHFHA;

/// @brief Field cWEGXKJxHbUyycNPUfxOqJLELPiK, offset 0x14, size 0x2c 
 __declspec(property(get=__cordl_internal_get_cWEGXKJxHbUyycNPUfxOqJLELPiK, put=__cordl_internal_set_cWEGXKJxHbUyycNPUfxOqJLELPiK)) ::Rewired::ElementAssignmentConflictInfo  cWEGXKJxHbUyycNPUfxOqJLELPiK;

/// @brief Field gWSRwljxMNeXdoNlRlgHkGXLCYGEA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_gWSRwljxMNeXdoNlRlgHkGXLCYGEA, put=__cordl_internal_set_gWSRwljxMNeXdoNlRlgHkGXLCYGEA)) ::Rewired::ActionElementMap*  gWSRwljxMNeXdoNlRlgHkGXLCYGEA;

/// @brief Field kQKgTQhxaNPbElORRVAjDQCVqQjZ, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_kQKgTQhxaNPbElORRVAjDQCVqQjZ, put=__cordl_internal_set_kQKgTQhxaNPbElORRVAjDQCVqQjZ)) ::Rewired::KeyboardMap*  kQKgTQhxaNPbElORRVAjDQCVqQjZ;

/// @brief Field ogjOqubKZaqryKPdLdFUXnqpTVJo, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get_ogjOqubKZaqryKPdLdFUXnqpTVJo, put=__cordl_internal_set_ogjOqubKZaqryKPdLdFUXnqpTVJo)) bool  ogjOqubKZaqryKPdLdFUXnqpTVJo;

/// @brief Field qniakZNcVCXeFDVzqPZJuhlFDlAF, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_qniakZNcVCXeFDVzqPZJuhlFDlAF, put=__cordl_internal_set_qniakZNcVCXeFDVzqPZJuhlFDlAF)) bool  qniakZNcVCXeFDVzqPZJuhlFDlAF;

/// @brief Field rmlIXFXNhIXCuLCTQxmhDmwZsApF, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_rmlIXFXNhIXCuLCTQxmhDmwZsApF, put=__cordl_internal_set_rmlIXFXNhIXCuLCTQxmhDmwZsApF)) int32_t  rmlIXFXNhIXCuLCTQxmhDmwZsApF;

/// @brief Field vPGySjqlRhXKABULfYEfwhrmBRXi, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_vPGySjqlRhXKABULfYEfwhrmBRXi, put=__cordl_internal_set_vPGySjqlRhXKABULfYEfwhrmBRXi)) int32_t  vPGySjqlRhXKABULfYEfwhrmBRXi;

/// @brief Field vqUUpzzOkHyhwkLiNIkMkZDmAmguA, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_vqUUpzzOkHyhwkLiNIkMkZDmAmguA, put=__cordl_internal_set_vqUUpzzOkHyhwkLiNIkMkZDmAmguA)) int32_t  vqUUpzzOkHyhwkLiNIkMkZDmAmguA;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181872000, size 0x3a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator, addr 0x1818723a0, size 0xb0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current, addr 0x180bb78f0, size 0x120, virtual true, abstract: false, final true
inline ::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1818723a0, size 0xb0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180bb7a10, size 0xd0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181872450, size 0xc0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::Rewired::KeyboardMap* const& __cordl_internal_get_EBlbXMfrZKRLGYEmYrFByVHPugNG() const;

constexpr ::Rewired::KeyboardMap*& __cordl_internal_get_EBlbXMfrZKRLGYEmYrFByVHPugNG() ;

constexpr bool const& __cordl_internal_get_FKIvEaePzxGiRdvAjJFNMCTHTZpZ() const;

constexpr bool& __cordl_internal_get_FKIvEaePzxGiRdvAjJFNMCTHTZpZ() ;

constexpr bool const& __cordl_internal_get_HYRkcergkWCrsdlqyYIczndUdWcM() const;

constexpr bool& __cordl_internal_get_HYRkcergkWCrsdlqyYIczndUdWcM() ;

constexpr bool const& __cordl_internal_get_HZoyFXeDZMgxtqxqbfKiosvxLnuf() const;

constexpr bool& __cordl_internal_get_HZoyFXeDZMgxtqxqbfKiosvxLnuf() ;

constexpr int32_t const& __cordl_internal_get_QndbcBgetCvkSZqbIJBOsMOPAklCA() const;

constexpr int32_t& __cordl_internal_get_QndbcBgetCvkSZqbIJBOsMOPAklCA() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* const& __cordl_internal_get_QrHPbvdrgpwMezvjCWSzwlmiMUkR() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*& __cordl_internal_get_QrHPbvdrgpwMezvjCWSzwlmiMUkR() ;

constexpr bool const& __cordl_internal_get_YJRpWIaQAGkEycIYSfoDUperSIHI() const;

constexpr bool& __cordl_internal_get_YJRpWIaQAGkEycIYSfoDUperSIHI() ;

constexpr int32_t const& __cordl_internal_get_ZacMDYnJDdxWfJuAjATHlPKEwNsJ() const;

constexpr int32_t& __cordl_internal_get_ZacMDYnJDdxWfJuAjATHlPKEwNsJ() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>* const& __cordl_internal_get_ZdYGPVKLoaFuvVZFNxObGOXrLVorA() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>*& __cordl_internal_get_ZdYGPVKLoaFuvVZFNxObGOXrLVorA() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_bswYOvIQrCMaTyahVsfXCIFEHFHA() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_bswYOvIQrCMaTyahVsfXCIFEHFHA() ;

constexpr ::Rewired::ElementAssignmentConflictInfo const& __cordl_internal_get_cWEGXKJxHbUyycNPUfxOqJLELPiK() const;

constexpr ::Rewired::ElementAssignmentConflictInfo& __cordl_internal_get_cWEGXKJxHbUyycNPUfxOqJLELPiK() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_gWSRwljxMNeXdoNlRlgHkGXLCYGEA() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_gWSRwljxMNeXdoNlRlgHkGXLCYGEA() ;

constexpr ::Rewired::KeyboardMap* const& __cordl_internal_get_kQKgTQhxaNPbElORRVAjDQCVqQjZ() const;

constexpr ::Rewired::KeyboardMap*& __cordl_internal_get_kQKgTQhxaNPbElORRVAjDQCVqQjZ() ;

constexpr bool const& __cordl_internal_get_ogjOqubKZaqryKPdLdFUXnqpTVJo() const;

constexpr bool& __cordl_internal_get_ogjOqubKZaqryKPdLdFUXnqpTVJo() ;

constexpr bool const& __cordl_internal_get_qniakZNcVCXeFDVzqPZJuhlFDlAF() const;

constexpr bool& __cordl_internal_get_qniakZNcVCXeFDVzqPZJuhlFDlAF() ;

constexpr int32_t const& __cordl_internal_get_rmlIXFXNhIXCuLCTQxmhDmwZsApF() const;

constexpr int32_t& __cordl_internal_get_rmlIXFXNhIXCuLCTQxmhDmwZsApF() ;

constexpr int32_t const& __cordl_internal_get_vPGySjqlRhXKABULfYEfwhrmBRXi() const;

constexpr int32_t& __cordl_internal_get_vPGySjqlRhXKABULfYEfwhrmBRXi() ;

constexpr int32_t const& __cordl_internal_get_vqUUpzzOkHyhwkLiNIkMkZDmAmguA() const;

constexpr int32_t& __cordl_internal_get_vqUUpzzOkHyhwkLiNIkMkZDmAmguA() ;

constexpr void __cordl_internal_set_EBlbXMfrZKRLGYEmYrFByVHPugNG(::Rewired::KeyboardMap*  value) ;

constexpr void __cordl_internal_set_FKIvEaePzxGiRdvAjJFNMCTHTZpZ(bool  value) ;

constexpr void __cordl_internal_set_HYRkcergkWCrsdlqyYIczndUdWcM(bool  value) ;

constexpr void __cordl_internal_set_HZoyFXeDZMgxtqxqbfKiosvxLnuf(bool  value) ;

constexpr void __cordl_internal_set_QndbcBgetCvkSZqbIJBOsMOPAklCA(int32_t  value) ;

constexpr void __cordl_internal_set_QrHPbvdrgpwMezvjCWSzwlmiMUkR(::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  value) ;

constexpr void __cordl_internal_set_YJRpWIaQAGkEycIYSfoDUperSIHI(bool  value) ;

constexpr void __cordl_internal_set_ZacMDYnJDdxWfJuAjATHlPKEwNsJ(int32_t  value) ;

constexpr void __cordl_internal_set_ZdYGPVKLoaFuvVZFNxObGOXrLVorA(::System::Collections::Generic::IList_1<::Rewired::Player*>*  value) ;

constexpr void __cordl_internal_set_bswYOvIQrCMaTyahVsfXCIFEHFHA(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_cWEGXKJxHbUyycNPUfxOqJLELPiK(::Rewired::ElementAssignmentConflictInfo  value) ;

constexpr void __cordl_internal_set_gWSRwljxMNeXdoNlRlgHkGXLCYGEA(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_kQKgTQhxaNPbElORRVAjDQCVqQjZ(::Rewired::KeyboardMap*  value) ;

constexpr void __cordl_internal_set_ogjOqubKZaqryKPdLdFUXnqpTVJo(bool  value) ;

constexpr void __cordl_internal_set_qniakZNcVCXeFDVzqPZJuhlFDlAF(bool  value) ;

constexpr void __cordl_internal_set_rmlIXFXNhIXCuLCTQxmhDmwZsApF(int32_t  value) ;

constexpr void __cordl_internal_set_vPGySjqlRhXKABULfYEfwhrmBRXi(int32_t  value) ;

constexpr void __cordl_internal_set_vqUUpzzOkHyhwkLiNIkMkZDmAmguA(int32_t  value) ;

/// @brief Method .ctor, addr 0x180bb7ae0, size 0xeb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method aXkenpuUoJuJmQKoQVYCYlIgkdwA, addr 0x181872510, size 0x30, virtual false, abstract: false, final false
inline void aXkenpuUoJuJmQKoQVYCYlIgkdwA() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA(ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA(ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2193};

/// @brief Field rmlIXFXNhIXCuLCTQxmhDmwZsApF, offset: 0x10, size: 0x4, def value: None
 int32_t  ___rmlIXFXNhIXCuLCTQxmhDmwZsApF;

/// @brief Field cWEGXKJxHbUyycNPUfxOqJLELPiK, offset: 0x14, size: 0x2c, def value: None
 ::Rewired::ElementAssignmentConflictInfo  ___cWEGXKJxHbUyycNPUfxOqJLELPiK;

/// @brief Field QndbcBgetCvkSZqbIJBOsMOPAklCA, offset: 0x40, size: 0x4, def value: None
 int32_t  ___QndbcBgetCvkSZqbIJBOsMOPAklCA;

/// @brief Field vqUUpzzOkHyhwkLiNIkMkZDmAmguA, offset: 0x44, size: 0x4, def value: None
 int32_t  ___vqUUpzzOkHyhwkLiNIkMkZDmAmguA;

/// @brief Field ZacMDYnJDdxWfJuAjATHlPKEwNsJ, offset: 0x48, size: 0x4, def value: None
 int32_t  ___ZacMDYnJDdxWfJuAjATHlPKEwNsJ;

/// @brief Field bswYOvIQrCMaTyahVsfXCIFEHFHA, offset: 0x50, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___bswYOvIQrCMaTyahVsfXCIFEHFHA;

/// @brief Field gWSRwljxMNeXdoNlRlgHkGXLCYGEA, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___gWSRwljxMNeXdoNlRlgHkGXLCYGEA;

/// @brief Field YJRpWIaQAGkEycIYSfoDUperSIHI, offset: 0x60, size: 0x1, def value: None
 bool  ___YJRpWIaQAGkEycIYSfoDUperSIHI;

/// @brief Field qniakZNcVCXeFDVzqPZJuhlFDlAF, offset: 0x61, size: 0x1, def value: None
 bool  ___qniakZNcVCXeFDVzqPZJuhlFDlAF;

/// @brief Field kQKgTQhxaNPbElORRVAjDQCVqQjZ, offset: 0x68, size: 0x8, def value: None
 ::Rewired::KeyboardMap*  ___kQKgTQhxaNPbElORRVAjDQCVqQjZ;

/// @brief Field EBlbXMfrZKRLGYEmYrFByVHPugNG, offset: 0x70, size: 0x8, def value: None
 ::Rewired::KeyboardMap*  ___EBlbXMfrZKRLGYEmYrFByVHPugNG;

/// @brief Field FKIvEaePzxGiRdvAjJFNMCTHTZpZ, offset: 0x78, size: 0x1, def value: None
 bool  ___FKIvEaePzxGiRdvAjJFNMCTHTZpZ;

/// @brief Field HZoyFXeDZMgxtqxqbfKiosvxLnuf, offset: 0x79, size: 0x1, def value: None
 bool  ___HZoyFXeDZMgxtqxqbfKiosvxLnuf;

/// @brief Field ogjOqubKZaqryKPdLdFUXnqpTVJo, offset: 0x7a, size: 0x1, def value: None
 bool  ___ogjOqubKZaqryKPdLdFUXnqpTVJo;

/// @brief Field HYRkcergkWCrsdlqyYIczndUdWcM, offset: 0x7b, size: 0x1, def value: None
 bool  ___HYRkcergkWCrsdlqyYIczndUdWcM;

/// @brief Field ZdYGPVKLoaFuvVZFNxObGOXrLVorA, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Player*>*  ___ZdYGPVKLoaFuvVZFNxObGOXrLVorA;

/// @brief Field vPGySjqlRhXKABULfYEfwhrmBRXi, offset: 0x88, size: 0x4, def value: None
 int32_t  ___vPGySjqlRhXKABULfYEfwhrmBRXi;

/// @brief Field QrHPbvdrgpwMezvjCWSzwlmiMUkR, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  ___QrHPbvdrgpwMezvjCWSzwlmiMUkR;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___rmlIXFXNhIXCuLCTQxmhDmwZsApF) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___cWEGXKJxHbUyycNPUfxOqJLELPiK) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___QndbcBgetCvkSZqbIJBOsMOPAklCA) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___vqUUpzzOkHyhwkLiNIkMkZDmAmguA) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___ZacMDYnJDdxWfJuAjATHlPKEwNsJ) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___bswYOvIQrCMaTyahVsfXCIFEHFHA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___gWSRwljxMNeXdoNlRlgHkGXLCYGEA) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___YJRpWIaQAGkEycIYSfoDUperSIHI) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___qniakZNcVCXeFDVzqPZJuhlFDlAF) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___kQKgTQhxaNPbElORRVAjDQCVqQjZ) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___EBlbXMfrZKRLGYEmYrFByVHPugNG) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___FKIvEaePzxGiRdvAjJFNMCTHTZpZ) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___HZoyFXeDZMgxtqxqbfKiosvxLnuf) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___ogjOqubKZaqryKPdLdFUXnqpTVJo) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___HYRkcergkWCrsdlqyYIczndUdWcM) == 0x7b, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___ZdYGPVKLoaFuvVZFNxObGOXrLVorA) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___vPGySjqlRhXKABULfYEfwhrmBRXi) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA, ___QrHPbvdrgpwMezvjCWSzwlmiMUkR) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA) == 0x98, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignmentConflictCheck, Rewired.ElementAssignmentConflictInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/laIMjBqXXgNwEhEmBtrsVVWtgGZu
class CORDL_TYPE ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu : public ::System::Object {
public:
// Declarations
/// @brief Field GXTevbADMBNUYIDHRnWpXyVqSVmoA, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_GXTevbADMBNUYIDHRnWpXyVqSVmoA, put=__cordl_internal_set_GXTevbADMBNUYIDHRnWpXyVqSVmoA)) ::System::Collections::Generic::IList_1<::Rewired::Player*>*  GXTevbADMBNUYIDHRnWpXyVqSVmoA;

/// @brief Field PsbAQwhThJCbzaruhqcrTdktTmWGb, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_PsbAQwhThJCbzaruhqcrTdktTmWGb, put=__cordl_internal_set_PsbAQwhThJCbzaruhqcrTdktTmWGb)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  PsbAQwhThJCbzaruhqcrTdktTmWGb;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)) ::Rewired::ElementAssignmentConflictInfo  System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field TPBqcKjuNcAgcRfWWtIfvCZOJAhw, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_TPBqcKjuNcAgcRfWWtIfvCZOJAhw, put=__cordl_internal_set_TPBqcKjuNcAgcRfWWtIfvCZOJAhw)) int32_t  TPBqcKjuNcAgcRfWWtIfvCZOJAhw;

/// @brief Field UVMGGjdPsOlHyPPGALfvEqiFbSNu, offset 0x44, size 0x38 
 __declspec(property(get=__cordl_internal_get_UVMGGjdPsOlHyPPGALfvEqiFbSNu, put=__cordl_internal_set_UVMGGjdPsOlHyPPGALfvEqiFbSNu)) ::Rewired::ElementAssignmentConflictCheck  UVMGGjdPsOlHyPPGALfvEqiFbSNu;

/// @brief Field UchjOyLyNwRQmxdDSGcyiujTAxlGA, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_UchjOyLyNwRQmxdDSGcyiujTAxlGA, put=__cordl_internal_set_UchjOyLyNwRQmxdDSGcyiujTAxlGA)) bool  UchjOyLyNwRQmxdDSGcyiujTAxlGA;

/// @brief Field cnYhjRLKVvDrXNwbvxMVJdAbEKzX, offset 0xb5, size 0x1 
 __declspec(property(get=__cordl_internal_get_cnYhjRLKVvDrXNwbvxMVJdAbEKzX, put=__cordl_internal_set_cnYhjRLKVvDrXNwbvxMVJdAbEKzX)) bool  cnYhjRLKVvDrXNwbvxMVJdAbEKzX;

/// @brief Field eaXbFzkEMTgbnjTXFUKNLVbISvpfb, offset 0x7c, size 0x38 
 __declspec(property(get=__cordl_internal_get_eaXbFzkEMTgbnjTXFUKNLVbISvpfb, put=__cordl_internal_set_eaXbFzkEMTgbnjTXFUKNLVbISvpfb)) ::Rewired::ElementAssignmentConflictCheck  eaXbFzkEMTgbnjTXFUKNLVbISvpfb;

/// @brief Field hKYEEMVUvKdxpHnFLYAWsXOospdeA, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_hKYEEMVUvKdxpHnFLYAWsXOospdeA, put=__cordl_internal_set_hKYEEMVUvKdxpHnFLYAWsXOospdeA)) int32_t  hKYEEMVUvKdxpHnFLYAWsXOospdeA;

/// @brief Field icQtfCSjYVRYGSoOSgecjdoclAeg, offset 0xb6, size 0x1 
 __declspec(property(get=__cordl_internal_get_icQtfCSjYVRYGSoOSgecjdoclAeg, put=__cordl_internal_set_icQtfCSjYVRYGSoOSgecjdoclAeg)) bool  icQtfCSjYVRYGSoOSgecjdoclAeg;

/// @brief Field ntznvpfpIogkbdWHAfrYDXdAmJtE, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_ntznvpfpIogkbdWHAfrYDXdAmJtE, put=__cordl_internal_set_ntznvpfpIogkbdWHAfrYDXdAmJtE)) bool  ntznvpfpIogkbdWHAfrYDXdAmJtE;

/// @brief Field ogSnpohCiYqwwVXGHVtYmHHjBmT, offset 0xb7, size 0x1 
 __declspec(property(get=__cordl_internal_get_ogSnpohCiYqwwVXGHVtYmHHjBmT, put=__cordl_internal_set_ogSnpohCiYqwwVXGHVtYmHHjBmT)) bool  ogSnpohCiYqwwVXGHVtYmHHjBmT;

/// @brief Field rTExUhWxeUCATVgwjknxofMOBaOV, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_rTExUhWxeUCATVgwjknxofMOBaOV, put=__cordl_internal_set_rTExUhWxeUCATVgwjknxofMOBaOV)) bool  rTExUhWxeUCATVgwjknxofMOBaOV;

/// @brief Field roMzIvWLheWvzrauMREZLSfQgBp, offset 0x14, size 0x2c 
 __declspec(property(get=__cordl_internal_get_roMzIvWLheWvzrauMREZLSfQgBp, put=__cordl_internal_set_roMzIvWLheWvzrauMREZLSfQgBp)) ::Rewired::ElementAssignmentConflictInfo  roMzIvWLheWvzrauMREZLSfQgBp;

/// @brief Field tiNdpngLMDITDxckaPUuISBMMHxR, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiNdpngLMDITDxckaPUuISBMMHxR, put=__cordl_internal_set_tiNdpngLMDITDxckaPUuISBMMHxR)) int32_t  tiNdpngLMDITDxckaPUuISBMMHxR;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181874520, size 0x3c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator, addr 0x1818748e0, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current, addr 0x180bb78f0, size 0x120, virtual true, abstract: false, final true
inline ::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1818748e0, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180bb7a10, size 0xd0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181866c10, size 0xc0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>* const& __cordl_internal_get_GXTevbADMBNUYIDHRnWpXyVqSVmoA() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>*& __cordl_internal_get_GXTevbADMBNUYIDHRnWpXyVqSVmoA() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* const& __cordl_internal_get_PsbAQwhThJCbzaruhqcrTdktTmWGb() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*& __cordl_internal_get_PsbAQwhThJCbzaruhqcrTdktTmWGb() ;

constexpr int32_t const& __cordl_internal_get_TPBqcKjuNcAgcRfWWtIfvCZOJAhw() const;

constexpr int32_t& __cordl_internal_get_TPBqcKjuNcAgcRfWWtIfvCZOJAhw() ;

constexpr ::Rewired::ElementAssignmentConflictCheck const& __cordl_internal_get_UVMGGjdPsOlHyPPGALfvEqiFbSNu() const;

constexpr ::Rewired::ElementAssignmentConflictCheck& __cordl_internal_get_UVMGGjdPsOlHyPPGALfvEqiFbSNu() ;

constexpr bool const& __cordl_internal_get_UchjOyLyNwRQmxdDSGcyiujTAxlGA() const;

constexpr bool& __cordl_internal_get_UchjOyLyNwRQmxdDSGcyiujTAxlGA() ;

constexpr bool const& __cordl_internal_get_cnYhjRLKVvDrXNwbvxMVJdAbEKzX() const;

constexpr bool& __cordl_internal_get_cnYhjRLKVvDrXNwbvxMVJdAbEKzX() ;

constexpr ::Rewired::ElementAssignmentConflictCheck const& __cordl_internal_get_eaXbFzkEMTgbnjTXFUKNLVbISvpfb() const;

constexpr ::Rewired::ElementAssignmentConflictCheck& __cordl_internal_get_eaXbFzkEMTgbnjTXFUKNLVbISvpfb() ;

constexpr int32_t const& __cordl_internal_get_hKYEEMVUvKdxpHnFLYAWsXOospdeA() const;

constexpr int32_t& __cordl_internal_get_hKYEEMVUvKdxpHnFLYAWsXOospdeA() ;

constexpr bool const& __cordl_internal_get_icQtfCSjYVRYGSoOSgecjdoclAeg() const;

constexpr bool& __cordl_internal_get_icQtfCSjYVRYGSoOSgecjdoclAeg() ;

constexpr bool const& __cordl_internal_get_ntznvpfpIogkbdWHAfrYDXdAmJtE() const;

constexpr bool& __cordl_internal_get_ntznvpfpIogkbdWHAfrYDXdAmJtE() ;

constexpr bool const& __cordl_internal_get_ogSnpohCiYqwwVXGHVtYmHHjBmT() const;

constexpr bool& __cordl_internal_get_ogSnpohCiYqwwVXGHVtYmHHjBmT() ;

constexpr bool const& __cordl_internal_get_rTExUhWxeUCATVgwjknxofMOBaOV() const;

constexpr bool& __cordl_internal_get_rTExUhWxeUCATVgwjknxofMOBaOV() ;

constexpr ::Rewired::ElementAssignmentConflictInfo const& __cordl_internal_get_roMzIvWLheWvzrauMREZLSfQgBp() const;

constexpr ::Rewired::ElementAssignmentConflictInfo& __cordl_internal_get_roMzIvWLheWvzrauMREZLSfQgBp() ;

constexpr int32_t const& __cordl_internal_get_tiNdpngLMDITDxckaPUuISBMMHxR() const;

constexpr int32_t& __cordl_internal_get_tiNdpngLMDITDxckaPUuISBMMHxR() ;

constexpr void __cordl_internal_set_GXTevbADMBNUYIDHRnWpXyVqSVmoA(::System::Collections::Generic::IList_1<::Rewired::Player*>*  value) ;

constexpr void __cordl_internal_set_PsbAQwhThJCbzaruhqcrTdktTmWGb(::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  value) ;

constexpr void __cordl_internal_set_TPBqcKjuNcAgcRfWWtIfvCZOJAhw(int32_t  value) ;

constexpr void __cordl_internal_set_UVMGGjdPsOlHyPPGALfvEqiFbSNu(::Rewired::ElementAssignmentConflictCheck  value) ;

constexpr void __cordl_internal_set_UchjOyLyNwRQmxdDSGcyiujTAxlGA(bool  value) ;

constexpr void __cordl_internal_set_cnYhjRLKVvDrXNwbvxMVJdAbEKzX(bool  value) ;

constexpr void __cordl_internal_set_eaXbFzkEMTgbnjTXFUKNLVbISvpfb(::Rewired::ElementAssignmentConflictCheck  value) ;

constexpr void __cordl_internal_set_hKYEEMVUvKdxpHnFLYAWsXOospdeA(int32_t  value) ;

constexpr void __cordl_internal_set_icQtfCSjYVRYGSoOSgecjdoclAeg(bool  value) ;

constexpr void __cordl_internal_set_ntznvpfpIogkbdWHAfrYDXdAmJtE(bool  value) ;

constexpr void __cordl_internal_set_ogSnpohCiYqwwVXGHVtYmHHjBmT(bool  value) ;

constexpr void __cordl_internal_set_rTExUhWxeUCATVgwjknxofMOBaOV(bool  value) ;

constexpr void __cordl_internal_set_roMzIvWLheWvzrauMREZLSfQgBp(::Rewired::ElementAssignmentConflictInfo  value) ;

constexpr void __cordl_internal_set_tiNdpngLMDITDxckaPUuISBMMHxR(int32_t  value) ;

/// @brief Method .ctor, addr 0x180bb7ae0, size 0xeb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method uyUPLtHHQtQmUSUMamomvhGGcIVfA, addr 0x181866cd0, size 0x30, virtual false, abstract: false, final false
inline void uyUPLtHHQtQmUSUMamomvhGGcIVfA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu(ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu(ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2194};

/// @brief Field hKYEEMVUvKdxpHnFLYAWsXOospdeA, offset: 0x10, size: 0x4, def value: None
 int32_t  ___hKYEEMVUvKdxpHnFLYAWsXOospdeA;

/// @brief Field roMzIvWLheWvzrauMREZLSfQgBp, offset: 0x14, size: 0x2c, def value: None
 ::Rewired::ElementAssignmentConflictInfo  ___roMzIvWLheWvzrauMREZLSfQgBp;

/// @brief Field TPBqcKjuNcAgcRfWWtIfvCZOJAhw, offset: 0x40, size: 0x4, def value: None
 int32_t  ___TPBqcKjuNcAgcRfWWtIfvCZOJAhw;

/// @brief Field UVMGGjdPsOlHyPPGALfvEqiFbSNu, offset: 0x44, size: 0x38, def value: None
 ::Rewired::ElementAssignmentConflictCheck  ___UVMGGjdPsOlHyPPGALfvEqiFbSNu;

/// @brief Field eaXbFzkEMTgbnjTXFUKNLVbISvpfb, offset: 0x7c, size: 0x38, def value: None
 ::Rewired::ElementAssignmentConflictCheck  ___eaXbFzkEMTgbnjTXFUKNLVbISvpfb;

/// @brief Field rTExUhWxeUCATVgwjknxofMOBaOV, offset: 0xb4, size: 0x1, def value: None
 bool  ___rTExUhWxeUCATVgwjknxofMOBaOV;

/// @brief Field cnYhjRLKVvDrXNwbvxMVJdAbEKzX, offset: 0xb5, size: 0x1, def value: None
 bool  ___cnYhjRLKVvDrXNwbvxMVJdAbEKzX;

/// @brief Field icQtfCSjYVRYGSoOSgecjdoclAeg, offset: 0xb6, size: 0x1, def value: None
 bool  ___icQtfCSjYVRYGSoOSgecjdoclAeg;

/// @brief Field ogSnpohCiYqwwVXGHVtYmHHjBmT, offset: 0xb7, size: 0x1, def value: None
 bool  ___ogSnpohCiYqwwVXGHVtYmHHjBmT;

/// @brief Field ntznvpfpIogkbdWHAfrYDXdAmJtE, offset: 0xb8, size: 0x1, def value: None
 bool  ___ntznvpfpIogkbdWHAfrYDXdAmJtE;

/// @brief Field UchjOyLyNwRQmxdDSGcyiujTAxlGA, offset: 0xb9, size: 0x1, def value: None
 bool  ___UchjOyLyNwRQmxdDSGcyiujTAxlGA;

/// @brief Field GXTevbADMBNUYIDHRnWpXyVqSVmoA, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Player*>*  ___GXTevbADMBNUYIDHRnWpXyVqSVmoA;

/// @brief Field tiNdpngLMDITDxckaPUuISBMMHxR, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___tiNdpngLMDITDxckaPUuISBMMHxR;

/// @brief Field PsbAQwhThJCbzaruhqcrTdktTmWGb, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  ___PsbAQwhThJCbzaruhqcrTdktTmWGb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___hKYEEMVUvKdxpHnFLYAWsXOospdeA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___roMzIvWLheWvzrauMREZLSfQgBp) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___TPBqcKjuNcAgcRfWWtIfvCZOJAhw) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___UVMGGjdPsOlHyPPGALfvEqiFbSNu) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___eaXbFzkEMTgbnjTXFUKNLVbISvpfb) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___rTExUhWxeUCATVgwjknxofMOBaOV) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___cnYhjRLKVvDrXNwbvxMVJdAbEKzX) == 0xb5, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___icQtfCSjYVRYGSoOSgecjdoclAeg) == 0xb6, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___ogSnpohCiYqwwVXGHVtYmHHjBmT) == 0xb7, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___ntznvpfpIogkbdWHAfrYDXdAmJtE) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___UchjOyLyNwRQmxdDSGcyiujTAxlGA) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___GXTevbADMBNUYIDHRnWpXyVqSVmoA) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___tiNdpngLMDITDxckaPUuISBMMHxR) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu, ___PsbAQwhThJCbzaruhqcrTdktTmWGb) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu) == 0xd8, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignmentConflictInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/iNMANLDfKPIlAmjWIBCEvJTArumu
class CORDL_TYPE ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu : public ::System::Object {
public:
// Declarations
/// @brief Field BbAFoTaeJPeHCZpjPIEMMtooJdXgb, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_BbAFoTaeJPeHCZpjPIEMMtooJdXgb, put=__cordl_internal_set_BbAFoTaeJPeHCZpjPIEMMtooJdXgb)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  BbAFoTaeJPeHCZpjPIEMMtooJdXgb;

/// @brief Field EKoLULWsIgCKgHoEzInmrxjlyeCs, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_EKoLULWsIgCKgHoEzInmrxjlyeCs, put=__cordl_internal_set_EKoLULWsIgCKgHoEzInmrxjlyeCs)) int32_t  EKoLULWsIgCKgHoEzInmrxjlyeCs;

/// @brief Field FEZFbVTxlhUdHLwcdCTJFFATDqiBA, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_FEZFbVTxlhUdHLwcdCTJFFATDqiBA, put=__cordl_internal_set_FEZFbVTxlhUdHLwcdCTJFFATDqiBA)) ::Rewired::ActionElementMap*  FEZFbVTxlhUdHLwcdCTJFFATDqiBA;

/// @brief Field PTsLPieHgKCMZyUKKyOVoKDwHduB, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_PTsLPieHgKCMZyUKKyOVoKDwHduB, put=__cordl_internal_set_PTsLPieHgKCMZyUKKyOVoKDwHduB)) ::Rewired::MouseMap*  PTsLPieHgKCMZyUKKyOVoKDwHduB;

/// @brief Field SphrgAepTtBAjBcbTWZxQIapXGwj, offset 0x7b, size 0x1 
 __declspec(property(get=__cordl_internal_get_SphrgAepTtBAjBcbTWZxQIapXGwj, put=__cordl_internal_set_SphrgAepTtBAjBcbTWZxQIapXGwj)) bool  SphrgAepTtBAjBcbTWZxQIapXGwj;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)) ::Rewired::ElementAssignmentConflictInfo  System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field TphQuOwZUJiZHkXhhDYXUCHHcOrs, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_TphQuOwZUJiZHkXhhDYXUCHHcOrs, put=__cordl_internal_set_TphQuOwZUJiZHkXhhDYXUCHHcOrs)) ::Rewired::ActionElementMap*  TphQuOwZUJiZHkXhhDYXUCHHcOrs;

/// @brief Field UjkLoVgScMitVgHoRfGMBOYErwWQA, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_UjkLoVgScMitVgHoRfGMBOYErwWQA, put=__cordl_internal_set_UjkLoVgScMitVgHoRfGMBOYErwWQA)) int32_t  UjkLoVgScMitVgHoRfGMBOYErwWQA;

/// @brief Field XkkxFUOTQHgSsLjFuUrmxkctdorI, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_XkkxFUOTQHgSsLjFuUrmxkctdorI, put=__cordl_internal_set_XkkxFUOTQHgSsLjFuUrmxkctdorI)) int32_t  XkkxFUOTQHgSsLjFuUrmxkctdorI;

/// @brief Field aGLgJZdFVzCdkuuxtSNbuExmWUkr, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_aGLgJZdFVzCdkuuxtSNbuExmWUkr, put=__cordl_internal_set_aGLgJZdFVzCdkuuxtSNbuExmWUkr)) bool  aGLgJZdFVzCdkuuxtSNbuExmWUkr;

/// @brief Field fHBYgLCWtSJtuTMFzbHTFZfCWEPF, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_fHBYgLCWtSJtuTMFzbHTFZfCWEPF, put=__cordl_internal_set_fHBYgLCWtSJtuTMFzbHTFZfCWEPF)) bool  fHBYgLCWtSJtuTMFzbHTFZfCWEPF;

/// @brief Field gTPkLDohmFzHpLCTOSANuVLNIibV, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_gTPkLDohmFzHpLCTOSANuVLNIibV, put=__cordl_internal_set_gTPkLDohmFzHpLCTOSANuVLNIibV)) bool  gTPkLDohmFzHpLCTOSANuVLNIibV;

/// @brief Field gYaUPICTgOdKNxRGSAqCZWYWiHwt, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_gYaUPICTgOdKNxRGSAqCZWYWiHwt, put=__cordl_internal_set_gYaUPICTgOdKNxRGSAqCZWYWiHwt)) int32_t  gYaUPICTgOdKNxRGSAqCZWYWiHwt;

/// @brief Field iViDVWIxDzhjvaLhjQKxPKctBoJfA, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_iViDVWIxDzhjvaLhjQKxPKctBoJfA, put=__cordl_internal_set_iViDVWIxDzhjvaLhjQKxPKctBoJfA)) int32_t  iViDVWIxDzhjvaLhjQKxPKctBoJfA;

/// @brief Field iWjkMobRSbOgylMJPbDOAuErpwZS, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_iWjkMobRSbOgylMJPbDOAuErpwZS, put=__cordl_internal_set_iWjkMobRSbOgylMJPbDOAuErpwZS)) ::System::Collections::Generic::IList_1<::Rewired::Player*>*  iWjkMobRSbOgylMJPbDOAuErpwZS;

/// @brief Field pcQRMYTFzqGmHCnBTqENHWKFVFSvA, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get_pcQRMYTFzqGmHCnBTqENHWKFVFSvA, put=__cordl_internal_set_pcQRMYTFzqGmHCnBTqENHWKFVFSvA)) bool  pcQRMYTFzqGmHCnBTqENHWKFVFSvA;

/// @brief Field qklAhjNgPGiLozZphICdhUUJfalH, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_qklAhjNgPGiLozZphICdhUUJfalH, put=__cordl_internal_set_qklAhjNgPGiLozZphICdhUUJfalH)) ::Rewired::MouseMap*  qklAhjNgPGiLozZphICdhUUJfalH;

/// @brief Field rwsYIzHPSVSjWRKNBbfGkXsAeclwA, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_rwsYIzHPSVSjWRKNBbfGkXsAeclwA, put=__cordl_internal_set_rwsYIzHPSVSjWRKNBbfGkXsAeclwA)) bool  rwsYIzHPSVSjWRKNBbfGkXsAeclwA;

/// @brief Field uLfBFLcUlXOTtdFAAJaNhlvIYxay, offset 0x14, size 0x2c 
 __declspec(property(get=__cordl_internal_get_uLfBFLcUlXOTtdFAAJaNhlvIYxay, put=__cordl_internal_set_uLfBFLcUlXOTtdFAAJaNhlvIYxay)) ::Rewired::ElementAssignmentConflictInfo  uLfBFLcUlXOTtdFAAJaNhlvIYxay;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181873540, size 0x3a0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator, addr 0x1818738e0, size 0xb0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current, addr 0x180bb78f0, size 0x120, virtual true, abstract: false, final true
inline ::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x1818738e0, size 0xb0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180bb7a10, size 0xd0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181872450, size 0xc0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method VRdCkwZmlOfZtEXDHMxElOSLFcRy, addr 0x181872510, size 0x30, virtual false, abstract: false, final false
inline void VRdCkwZmlOfZtEXDHMxElOSLFcRy() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* const& __cordl_internal_get_BbAFoTaeJPeHCZpjPIEMMtooJdXgb() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*& __cordl_internal_get_BbAFoTaeJPeHCZpjPIEMMtooJdXgb() ;

constexpr int32_t const& __cordl_internal_get_EKoLULWsIgCKgHoEzInmrxjlyeCs() const;

constexpr int32_t& __cordl_internal_get_EKoLULWsIgCKgHoEzInmrxjlyeCs() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_FEZFbVTxlhUdHLwcdCTJFFATDqiBA() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_FEZFbVTxlhUdHLwcdCTJFFATDqiBA() ;

constexpr ::Rewired::MouseMap* const& __cordl_internal_get_PTsLPieHgKCMZyUKKyOVoKDwHduB() const;

constexpr ::Rewired::MouseMap*& __cordl_internal_get_PTsLPieHgKCMZyUKKyOVoKDwHduB() ;

constexpr bool const& __cordl_internal_get_SphrgAepTtBAjBcbTWZxQIapXGwj() const;

constexpr bool& __cordl_internal_get_SphrgAepTtBAjBcbTWZxQIapXGwj() ;

constexpr ::Rewired::ActionElementMap* const& __cordl_internal_get_TphQuOwZUJiZHkXhhDYXUCHHcOrs() const;

constexpr ::Rewired::ActionElementMap*& __cordl_internal_get_TphQuOwZUJiZHkXhhDYXUCHHcOrs() ;

constexpr int32_t const& __cordl_internal_get_UjkLoVgScMitVgHoRfGMBOYErwWQA() const;

constexpr int32_t& __cordl_internal_get_UjkLoVgScMitVgHoRfGMBOYErwWQA() ;

constexpr int32_t const& __cordl_internal_get_XkkxFUOTQHgSsLjFuUrmxkctdorI() const;

constexpr int32_t& __cordl_internal_get_XkkxFUOTQHgSsLjFuUrmxkctdorI() ;

constexpr bool const& __cordl_internal_get_aGLgJZdFVzCdkuuxtSNbuExmWUkr() const;

constexpr bool& __cordl_internal_get_aGLgJZdFVzCdkuuxtSNbuExmWUkr() ;

constexpr bool const& __cordl_internal_get_fHBYgLCWtSJtuTMFzbHTFZfCWEPF() const;

constexpr bool& __cordl_internal_get_fHBYgLCWtSJtuTMFzbHTFZfCWEPF() ;

constexpr bool const& __cordl_internal_get_gTPkLDohmFzHpLCTOSANuVLNIibV() const;

constexpr bool& __cordl_internal_get_gTPkLDohmFzHpLCTOSANuVLNIibV() ;

constexpr int32_t const& __cordl_internal_get_gYaUPICTgOdKNxRGSAqCZWYWiHwt() const;

constexpr int32_t& __cordl_internal_get_gYaUPICTgOdKNxRGSAqCZWYWiHwt() ;

constexpr int32_t const& __cordl_internal_get_iViDVWIxDzhjvaLhjQKxPKctBoJfA() const;

constexpr int32_t& __cordl_internal_get_iViDVWIxDzhjvaLhjQKxPKctBoJfA() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>* const& __cordl_internal_get_iWjkMobRSbOgylMJPbDOAuErpwZS() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>*& __cordl_internal_get_iWjkMobRSbOgylMJPbDOAuErpwZS() ;

constexpr bool const& __cordl_internal_get_pcQRMYTFzqGmHCnBTqENHWKFVFSvA() const;

constexpr bool& __cordl_internal_get_pcQRMYTFzqGmHCnBTqENHWKFVFSvA() ;

constexpr ::Rewired::MouseMap* const& __cordl_internal_get_qklAhjNgPGiLozZphICdhUUJfalH() const;

constexpr ::Rewired::MouseMap*& __cordl_internal_get_qklAhjNgPGiLozZphICdhUUJfalH() ;

constexpr bool const& __cordl_internal_get_rwsYIzHPSVSjWRKNBbfGkXsAeclwA() const;

constexpr bool& __cordl_internal_get_rwsYIzHPSVSjWRKNBbfGkXsAeclwA() ;

constexpr ::Rewired::ElementAssignmentConflictInfo const& __cordl_internal_get_uLfBFLcUlXOTtdFAAJaNhlvIYxay() const;

constexpr ::Rewired::ElementAssignmentConflictInfo& __cordl_internal_get_uLfBFLcUlXOTtdFAAJaNhlvIYxay() ;

constexpr void __cordl_internal_set_BbAFoTaeJPeHCZpjPIEMMtooJdXgb(::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  value) ;

constexpr void __cordl_internal_set_EKoLULWsIgCKgHoEzInmrxjlyeCs(int32_t  value) ;

constexpr void __cordl_internal_set_FEZFbVTxlhUdHLwcdCTJFFATDqiBA(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_PTsLPieHgKCMZyUKKyOVoKDwHduB(::Rewired::MouseMap*  value) ;

constexpr void __cordl_internal_set_SphrgAepTtBAjBcbTWZxQIapXGwj(bool  value) ;

constexpr void __cordl_internal_set_TphQuOwZUJiZHkXhhDYXUCHHcOrs(::Rewired::ActionElementMap*  value) ;

constexpr void __cordl_internal_set_UjkLoVgScMitVgHoRfGMBOYErwWQA(int32_t  value) ;

constexpr void __cordl_internal_set_XkkxFUOTQHgSsLjFuUrmxkctdorI(int32_t  value) ;

constexpr void __cordl_internal_set_aGLgJZdFVzCdkuuxtSNbuExmWUkr(bool  value) ;

constexpr void __cordl_internal_set_fHBYgLCWtSJtuTMFzbHTFZfCWEPF(bool  value) ;

constexpr void __cordl_internal_set_gTPkLDohmFzHpLCTOSANuVLNIibV(bool  value) ;

constexpr void __cordl_internal_set_gYaUPICTgOdKNxRGSAqCZWYWiHwt(int32_t  value) ;

constexpr void __cordl_internal_set_iViDVWIxDzhjvaLhjQKxPKctBoJfA(int32_t  value) ;

constexpr void __cordl_internal_set_iWjkMobRSbOgylMJPbDOAuErpwZS(::System::Collections::Generic::IList_1<::Rewired::Player*>*  value) ;

constexpr void __cordl_internal_set_pcQRMYTFzqGmHCnBTqENHWKFVFSvA(bool  value) ;

constexpr void __cordl_internal_set_qklAhjNgPGiLozZphICdhUUJfalH(::Rewired::MouseMap*  value) ;

constexpr void __cordl_internal_set_rwsYIzHPSVSjWRKNBbfGkXsAeclwA(bool  value) ;

constexpr void __cordl_internal_set_uLfBFLcUlXOTtdFAAJaNhlvIYxay(::Rewired::ElementAssignmentConflictInfo  value) ;

/// @brief Method .ctor, addr 0x180bb7ae0, size 0xeb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu(ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu(ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2195};

/// @brief Field XkkxFUOTQHgSsLjFuUrmxkctdorI, offset: 0x10, size: 0x4, def value: None
 int32_t  ___XkkxFUOTQHgSsLjFuUrmxkctdorI;

/// @brief Field uLfBFLcUlXOTtdFAAJaNhlvIYxay, offset: 0x14, size: 0x2c, def value: None
 ::Rewired::ElementAssignmentConflictInfo  ___uLfBFLcUlXOTtdFAAJaNhlvIYxay;

/// @brief Field gYaUPICTgOdKNxRGSAqCZWYWiHwt, offset: 0x40, size: 0x4, def value: None
 int32_t  ___gYaUPICTgOdKNxRGSAqCZWYWiHwt;

/// @brief Field EKoLULWsIgCKgHoEzInmrxjlyeCs, offset: 0x44, size: 0x4, def value: None
 int32_t  ___EKoLULWsIgCKgHoEzInmrxjlyeCs;

/// @brief Field iViDVWIxDzhjvaLhjQKxPKctBoJfA, offset: 0x48, size: 0x4, def value: None
 int32_t  ___iViDVWIxDzhjvaLhjQKxPKctBoJfA;

/// @brief Field FEZFbVTxlhUdHLwcdCTJFFATDqiBA, offset: 0x50, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___FEZFbVTxlhUdHLwcdCTJFFATDqiBA;

/// @brief Field TphQuOwZUJiZHkXhhDYXUCHHcOrs, offset: 0x58, size: 0x8, def value: None
 ::Rewired::ActionElementMap*  ___TphQuOwZUJiZHkXhhDYXUCHHcOrs;

/// @brief Field rwsYIzHPSVSjWRKNBbfGkXsAeclwA, offset: 0x60, size: 0x1, def value: None
 bool  ___rwsYIzHPSVSjWRKNBbfGkXsAeclwA;

/// @brief Field fHBYgLCWtSJtuTMFzbHTFZfCWEPF, offset: 0x61, size: 0x1, def value: None
 bool  ___fHBYgLCWtSJtuTMFzbHTFZfCWEPF;

/// @brief Field qklAhjNgPGiLozZphICdhUUJfalH, offset: 0x68, size: 0x8, def value: None
 ::Rewired::MouseMap*  ___qklAhjNgPGiLozZphICdhUUJfalH;

/// @brief Field PTsLPieHgKCMZyUKKyOVoKDwHduB, offset: 0x70, size: 0x8, def value: None
 ::Rewired::MouseMap*  ___PTsLPieHgKCMZyUKKyOVoKDwHduB;

/// @brief Field gTPkLDohmFzHpLCTOSANuVLNIibV, offset: 0x78, size: 0x1, def value: None
 bool  ___gTPkLDohmFzHpLCTOSANuVLNIibV;

/// @brief Field aGLgJZdFVzCdkuuxtSNbuExmWUkr, offset: 0x79, size: 0x1, def value: None
 bool  ___aGLgJZdFVzCdkuuxtSNbuExmWUkr;

/// @brief Field pcQRMYTFzqGmHCnBTqENHWKFVFSvA, offset: 0x7a, size: 0x1, def value: None
 bool  ___pcQRMYTFzqGmHCnBTqENHWKFVFSvA;

/// @brief Field SphrgAepTtBAjBcbTWZxQIapXGwj, offset: 0x7b, size: 0x1, def value: None
 bool  ___SphrgAepTtBAjBcbTWZxQIapXGwj;

/// @brief Field iWjkMobRSbOgylMJPbDOAuErpwZS, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Player*>*  ___iWjkMobRSbOgylMJPbDOAuErpwZS;

/// @brief Field UjkLoVgScMitVgHoRfGMBOYErwWQA, offset: 0x88, size: 0x4, def value: None
 int32_t  ___UjkLoVgScMitVgHoRfGMBOYErwWQA;

/// @brief Field BbAFoTaeJPeHCZpjPIEMMtooJdXgb, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  ___BbAFoTaeJPeHCZpjPIEMMtooJdXgb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___XkkxFUOTQHgSsLjFuUrmxkctdorI) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___uLfBFLcUlXOTtdFAAJaNhlvIYxay) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___gYaUPICTgOdKNxRGSAqCZWYWiHwt) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___EKoLULWsIgCKgHoEzInmrxjlyeCs) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___iViDVWIxDzhjvaLhjQKxPKctBoJfA) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___FEZFbVTxlhUdHLwcdCTJFFATDqiBA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___TphQuOwZUJiZHkXhhDYXUCHHcOrs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___rwsYIzHPSVSjWRKNBbfGkXsAeclwA) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___fHBYgLCWtSJtuTMFzbHTFZfCWEPF) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___qklAhjNgPGiLozZphICdhUUJfalH) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___PTsLPieHgKCMZyUKKyOVoKDwHduB) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___gTPkLDohmFzHpLCTOSANuVLNIibV) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___aGLgJZdFVzCdkuuxtSNbuExmWUkr) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___pcQRMYTFzqGmHCnBTqENHWKFVFSvA) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___SphrgAepTtBAjBcbTWZxQIapXGwj) == 0x7b, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___iWjkMobRSbOgylMJPbDOAuErpwZS) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___UjkLoVgScMitVgHoRfGMBOYErwWQA) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu, ___BbAFoTaeJPeHCZpjPIEMMtooJdXgb) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu) == 0x98, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.ElementAssignmentConflictCheck, Rewired.ElementAssignmentConflictInfo, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/ConflictCheckingHelper/TmRDOBjeHpaXMDUmGlASeEtrpZrb
class CORDL_TYPE ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb : public ::System::Object {
public:
// Declarations
/// @brief Field HpUEZDvfLHFoHFLhQHDFzRYAmnXDA, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_HpUEZDvfLHFoHFLhQHDFzRYAmnXDA, put=__cordl_internal_set_HpUEZDvfLHFoHFLhQHDFzRYAmnXDA)) bool  HpUEZDvfLHFoHFLhQHDFzRYAmnXDA;

/// @brief Field JoKFOjTjlPjMQZRUhVkEVlHNiQvm, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_JoKFOjTjlPjMQZRUhVkEVlHNiQvm, put=__cordl_internal_set_JoKFOjTjlPjMQZRUhVkEVlHNiQvm)) int32_t  JoKFOjTjlPjMQZRUhVkEVlHNiQvm;

/// @brief Field LaBgxupChkcWtpfKHMoNQxaaigwR, offset 0x14, size 0x2c 
 __declspec(property(get=__cordl_internal_get_LaBgxupChkcWtpfKHMoNQxaaigwR, put=__cordl_internal_set_LaBgxupChkcWtpfKHMoNQxaaigwR)) ::Rewired::ElementAssignmentConflictInfo  LaBgxupChkcWtpfKHMoNQxaaigwR;

/// @brief Field OrCNzGhMNsiAnoipTtfylWhFdvkF, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OrCNzGhMNsiAnoipTtfylWhFdvkF, put=__cordl_internal_set_OrCNzGhMNsiAnoipTtfylWhFdvkF)) ::System::Collections::Generic::IList_1<::Rewired::Player*>*  OrCNzGhMNsiAnoipTtfylWhFdvkF;

/// @brief Field RzTjdHMFGvwqBYwISoIVoVPfOiuN, offset 0xb5, size 0x1 
 __declspec(property(get=__cordl_internal_get_RzTjdHMFGvwqBYwISoIVoVPfOiuN, put=__cordl_internal_set_RzTjdHMFGvwqBYwISoIVoVPfOiuN)) bool  RzTjdHMFGvwqBYwISoIVoVPfOiuN;

 __declspec(property(get=System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current)) ::Rewired::ElementAssignmentConflictInfo  System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field VwvgFOfYoHmyShjRFkfMiSphEhpZB, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_VwvgFOfYoHmyShjRFkfMiSphEhpZB, put=__cordl_internal_set_VwvgFOfYoHmyShjRFkfMiSphEhpZB)) bool  VwvgFOfYoHmyShjRFkfMiSphEhpZB;

/// @brief Field WvtbFDBMbRvpwiIOihViVbHtdiKYA, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WvtbFDBMbRvpwiIOihViVbHtdiKYA, put=__cordl_internal_set_WvtbFDBMbRvpwiIOihViVbHtdiKYA)) ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  WvtbFDBMbRvpwiIOihViVbHtdiKYA;

/// @brief Field ZGqFFfLlvRCPvhFSGGSIGKEFSXNQB, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_ZGqFFfLlvRCPvhFSGGSIGKEFSXNQB, put=__cordl_internal_set_ZGqFFfLlvRCPvhFSGGSIGKEFSXNQB)) int32_t  ZGqFFfLlvRCPvhFSGGSIGKEFSXNQB;

/// @brief Field bLCfcSYnmOrobXNZHUqWNKNLWZLN, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_bLCfcSYnmOrobXNZHUqWNKNLWZLN, put=__cordl_internal_set_bLCfcSYnmOrobXNZHUqWNKNLWZLN)) bool  bLCfcSYnmOrobXNZHUqWNKNLWZLN;

/// @brief Field bPYMljKvZfRoCsezOOtLIuyhGHtp, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_bPYMljKvZfRoCsezOOtLIuyhGHtp, put=__cordl_internal_set_bPYMljKvZfRoCsezOOtLIuyhGHtp)) int32_t  bPYMljKvZfRoCsezOOtLIuyhGHtp;

/// @brief Field byiiQatsNeCxpGZMbLEvAoLLrDqiA, offset 0xb7, size 0x1 
 __declspec(property(get=__cordl_internal_get_byiiQatsNeCxpGZMbLEvAoLLrDqiA, put=__cordl_internal_set_byiiQatsNeCxpGZMbLEvAoLLrDqiA)) bool  byiiQatsNeCxpGZMbLEvAoLLrDqiA;

/// @brief Field magznGYSQDSGbPaFBJBeEEqhDxAtA, offset 0x44, size 0x38 
 __declspec(property(get=__cordl_internal_get_magznGYSQDSGbPaFBJBeEEqhDxAtA, put=__cordl_internal_set_magznGYSQDSGbPaFBJBeEEqhDxAtA)) ::Rewired::ElementAssignmentConflictCheck  magznGYSQDSGbPaFBJBeEEqhDxAtA;

/// @brief Field rAZuFWEKiYbIkYtCCzQiLQwFNJMo, offset 0xb6, size 0x1 
 __declspec(property(get=__cordl_internal_get_rAZuFWEKiYbIkYtCCzQiLQwFNJMo, put=__cordl_internal_set_rAZuFWEKiYbIkYtCCzQiLQwFNJMo)) bool  rAZuFWEKiYbIkYtCCzQiLQwFNJMo;

/// @brief Field zYBLSOpHUggfNcnhQrfXAzEBaaYK, offset 0x7c, size 0x38 
 __declspec(property(get=__cordl_internal_get_zYBLSOpHUggfNcnhQrfXAzEBaaYK, put=__cordl_internal_set_zYBLSOpHUggfNcnhQrfXAzEBaaYK)) ::Rewired::ElementAssignmentConflictCheck  zYBLSOpHUggfNcnhQrfXAzEBaaYK;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x181866790, size 0x3c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method OBQKPonbgveKDhYsrcprJPMxDTTx, addr 0x181866cd0, size 0x30, virtual false, abstract: false, final false
inline void OBQKPonbgveKDhYsrcprJPMxDTTx() ;

/// @brief Method System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator, addr 0x181872890, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current, addr 0x180bb78f0, size 0x120, virtual true, abstract: false, final true
inline ::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x181872890, size 0xc0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x180bb7a10, size 0xd0, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181866c10, size 0xc0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr bool const& __cordl_internal_get_HpUEZDvfLHFoHFLhQHDFzRYAmnXDA() const;

constexpr bool& __cordl_internal_get_HpUEZDvfLHFoHFLhQHDFzRYAmnXDA() ;

constexpr int32_t const& __cordl_internal_get_JoKFOjTjlPjMQZRUhVkEVlHNiQvm() const;

constexpr int32_t& __cordl_internal_get_JoKFOjTjlPjMQZRUhVkEVlHNiQvm() ;

constexpr ::Rewired::ElementAssignmentConflictInfo const& __cordl_internal_get_LaBgxupChkcWtpfKHMoNQxaaigwR() const;

constexpr ::Rewired::ElementAssignmentConflictInfo& __cordl_internal_get_LaBgxupChkcWtpfKHMoNQxaaigwR() ;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>* const& __cordl_internal_get_OrCNzGhMNsiAnoipTtfylWhFdvkF() const;

constexpr ::System::Collections::Generic::IList_1<::Rewired::Player*>*& __cordl_internal_get_OrCNzGhMNsiAnoipTtfylWhFdvkF() ;

constexpr bool const& __cordl_internal_get_RzTjdHMFGvwqBYwISoIVoVPfOiuN() const;

constexpr bool& __cordl_internal_get_RzTjdHMFGvwqBYwISoIVoVPfOiuN() ;

constexpr bool const& __cordl_internal_get_VwvgFOfYoHmyShjRFkfMiSphEhpZB() const;

constexpr bool& __cordl_internal_get_VwvgFOfYoHmyShjRFkfMiSphEhpZB() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* const& __cordl_internal_get_WvtbFDBMbRvpwiIOihViVbHtdiKYA() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*& __cordl_internal_get_WvtbFDBMbRvpwiIOihViVbHtdiKYA() ;

constexpr int32_t const& __cordl_internal_get_ZGqFFfLlvRCPvhFSGGSIGKEFSXNQB() const;

constexpr int32_t& __cordl_internal_get_ZGqFFfLlvRCPvhFSGGSIGKEFSXNQB() ;

constexpr bool const& __cordl_internal_get_bLCfcSYnmOrobXNZHUqWNKNLWZLN() const;

constexpr bool& __cordl_internal_get_bLCfcSYnmOrobXNZHUqWNKNLWZLN() ;

constexpr int32_t const& __cordl_internal_get_bPYMljKvZfRoCsezOOtLIuyhGHtp() const;

constexpr int32_t& __cordl_internal_get_bPYMljKvZfRoCsezOOtLIuyhGHtp() ;

constexpr bool const& __cordl_internal_get_byiiQatsNeCxpGZMbLEvAoLLrDqiA() const;

constexpr bool& __cordl_internal_get_byiiQatsNeCxpGZMbLEvAoLLrDqiA() ;

constexpr ::Rewired::ElementAssignmentConflictCheck const& __cordl_internal_get_magznGYSQDSGbPaFBJBeEEqhDxAtA() const;

constexpr ::Rewired::ElementAssignmentConflictCheck& __cordl_internal_get_magznGYSQDSGbPaFBJBeEEqhDxAtA() ;

constexpr bool const& __cordl_internal_get_rAZuFWEKiYbIkYtCCzQiLQwFNJMo() const;

constexpr bool& __cordl_internal_get_rAZuFWEKiYbIkYtCCzQiLQwFNJMo() ;

constexpr ::Rewired::ElementAssignmentConflictCheck const& __cordl_internal_get_zYBLSOpHUggfNcnhQrfXAzEBaaYK() const;

constexpr ::Rewired::ElementAssignmentConflictCheck& __cordl_internal_get_zYBLSOpHUggfNcnhQrfXAzEBaaYK() ;

constexpr void __cordl_internal_set_HpUEZDvfLHFoHFLhQHDFzRYAmnXDA(bool  value) ;

constexpr void __cordl_internal_set_JoKFOjTjlPjMQZRUhVkEVlHNiQvm(int32_t  value) ;

constexpr void __cordl_internal_set_LaBgxupChkcWtpfKHMoNQxaaigwR(::Rewired::ElementAssignmentConflictInfo  value) ;

constexpr void __cordl_internal_set_OrCNzGhMNsiAnoipTtfylWhFdvkF(::System::Collections::Generic::IList_1<::Rewired::Player*>*  value) ;

constexpr void __cordl_internal_set_RzTjdHMFGvwqBYwISoIVoVPfOiuN(bool  value) ;

constexpr void __cordl_internal_set_VwvgFOfYoHmyShjRFkfMiSphEhpZB(bool  value) ;

constexpr void __cordl_internal_set_WvtbFDBMbRvpwiIOihViVbHtdiKYA(::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  value) ;

constexpr void __cordl_internal_set_ZGqFFfLlvRCPvhFSGGSIGKEFSXNQB(int32_t  value) ;

constexpr void __cordl_internal_set_bLCfcSYnmOrobXNZHUqWNKNLWZLN(bool  value) ;

constexpr void __cordl_internal_set_bPYMljKvZfRoCsezOOtLIuyhGHtp(int32_t  value) ;

constexpr void __cordl_internal_set_byiiQatsNeCxpGZMbLEvAoLLrDqiA(bool  value) ;

constexpr void __cordl_internal_set_magznGYSQDSGbPaFBJBeEEqhDxAtA(::Rewired::ElementAssignmentConflictCheck  value) ;

constexpr void __cordl_internal_set_rAZuFWEKiYbIkYtCCzQiLQwFNJMo(bool  value) ;

constexpr void __cordl_internal_set_zYBLSOpHUggfNcnhQrfXAzEBaaYK(::Rewired::ElementAssignmentConflictCheck  value) ;

/// @brief Method .ctor, addr 0x180bb7ae0, size 0xeb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerable_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>* i___System__Collections__Generic__IEnumerator_1___Rewired__ElementAssignmentConflictInfo_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb(ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb(ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2196};

/// @brief Field JoKFOjTjlPjMQZRUhVkEVlHNiQvm, offset: 0x10, size: 0x4, def value: None
 int32_t  ___JoKFOjTjlPjMQZRUhVkEVlHNiQvm;

/// @brief Field LaBgxupChkcWtpfKHMoNQxaaigwR, offset: 0x14, size: 0x2c, def value: None
 ::Rewired::ElementAssignmentConflictInfo  ___LaBgxupChkcWtpfKHMoNQxaaigwR;

/// @brief Field ZGqFFfLlvRCPvhFSGGSIGKEFSXNQB, offset: 0x40, size: 0x4, def value: None
 int32_t  ___ZGqFFfLlvRCPvhFSGGSIGKEFSXNQB;

/// @brief Field magznGYSQDSGbPaFBJBeEEqhDxAtA, offset: 0x44, size: 0x38, def value: None
 ::Rewired::ElementAssignmentConflictCheck  ___magznGYSQDSGbPaFBJBeEEqhDxAtA;

/// @brief Field zYBLSOpHUggfNcnhQrfXAzEBaaYK, offset: 0x7c, size: 0x38, def value: None
 ::Rewired::ElementAssignmentConflictCheck  ___zYBLSOpHUggfNcnhQrfXAzEBaaYK;

/// @brief Field bLCfcSYnmOrobXNZHUqWNKNLWZLN, offset: 0xb4, size: 0x1, def value: None
 bool  ___bLCfcSYnmOrobXNZHUqWNKNLWZLN;

/// @brief Field RzTjdHMFGvwqBYwISoIVoVPfOiuN, offset: 0xb5, size: 0x1, def value: None
 bool  ___RzTjdHMFGvwqBYwISoIVoVPfOiuN;

/// @brief Field rAZuFWEKiYbIkYtCCzQiLQwFNJMo, offset: 0xb6, size: 0x1, def value: None
 bool  ___rAZuFWEKiYbIkYtCCzQiLQwFNJMo;

/// @brief Field byiiQatsNeCxpGZMbLEvAoLLrDqiA, offset: 0xb7, size: 0x1, def value: None
 bool  ___byiiQatsNeCxpGZMbLEvAoLLrDqiA;

/// @brief Field HpUEZDvfLHFoHFLhQHDFzRYAmnXDA, offset: 0xb8, size: 0x1, def value: None
 bool  ___HpUEZDvfLHFoHFLhQHDFzRYAmnXDA;

/// @brief Field VwvgFOfYoHmyShjRFkfMiSphEhpZB, offset: 0xb9, size: 0x1, def value: None
 bool  ___VwvgFOfYoHmyShjRFkfMiSphEhpZB;

/// @brief Field OrCNzGhMNsiAnoipTtfylWhFdvkF, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Rewired::Player*>*  ___OrCNzGhMNsiAnoipTtfylWhFdvkF;

/// @brief Field bPYMljKvZfRoCsezOOtLIuyhGHtp, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___bPYMljKvZfRoCsezOOtLIuyhGHtp;

/// @brief Field WvtbFDBMbRvpwiIOihViVbHtdiKYA, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Rewired::ElementAssignmentConflictInfo>*  ___WvtbFDBMbRvpwiIOihViVbHtdiKYA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___JoKFOjTjlPjMQZRUhVkEVlHNiQvm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___LaBgxupChkcWtpfKHMoNQxaaigwR) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___ZGqFFfLlvRCPvhFSGGSIGKEFSXNQB) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___magznGYSQDSGbPaFBJBeEEqhDxAtA) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___zYBLSOpHUggfNcnhQrfXAzEBaaYK) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___bLCfcSYnmOrobXNZHUqWNKNLWZLN) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___RzTjdHMFGvwqBYwISoIVoVPfOiuN) == 0xb5, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___rAZuFWEKiYbIkYtCCzQiLQwFNJMo) == 0xb6, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___byiiQatsNeCxpGZMbLEvAoLLrDqiA) == 0xb7, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___HpUEZDvfLHFoHFLhQHDFzRYAmnXDA) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___VwvgFOfYoHmyShjRFkfMiSphEhpZB) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___OrCNzGhMNsiAnoipTtfylWhFdvkF) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___bPYMljKvZfRoCsezOOtLIuyhGHtp) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb, ___WvtbFDBMbRvpwiIOihViVbHtdiKYA) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb) == 0xd8, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Utils.Classes.CodeHelper
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper/ConflictCheckingHelper
class CORDL_TYPE ControllerHelper_ReInput_ConflictCheckingHelper : public ::Rewired::Utils::Classes::CodeHelper {
public:
// Declarations
using IfvilbdRIJhBIQTDsHgzmZvMNFqIA = ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_IfvilbdRIJhBIQTDsHgzmZvMNFqIA;

using LBpnzEohFNnJvipeCRAKDBmYwIPq = ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_LBpnzEohFNnJvipeCRAKDBmYwIPq;

using QUjuilLLzVYzcECTVRcXiOaiElGEA = ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_QUjuilLLzVYzcECTVRcXiOaiElGEA;

using TmRDOBjeHpaXMDUmGlASeEtrpZrb = ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_TmRDOBjeHpaXMDUmGlASeEtrpZrb;

using hDLEHhmVTmgRAiUDEYUqZcDylNIp = ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_hDLEHhmVTmgRAiUDEYUqZcDylNIp;

using iNMANLDfKPIlAmjWIBCEvJTArumu = ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_iNMANLDfKPIlAmjWIBCEvJTArumu;

using kDDIsxzeRooJLyqQrsgfNKuyFvXH = ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_kDDIsxzeRooJLyqQrsgfNKuyFvXH;

using laIMjBqXXgNwEhEmBtrsVVWtgGZu = ::Rewired::ConflictCheckingHelper_ControllerHelper_ReInput_laIMjBqXXgNwEhEmBtrsVVWtgGZu;

/// @brief Field TIpwMppXiFhOlfLtXMEZprrgZSDC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TIpwMppXiFhOlfLtXMEZprrgZSDC, put=setStaticF_TIpwMppXiFhOlfLtXMEZprrgZSDC)) ::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper*  TIpwMppXiFhOlfLtXMEZprrgZSDC;

/// @brief Method AIiuHMXJDRSnrsTdoecbIaJmXmHK, addr 0x18185f3b0, size 0x260, virtual false, abstract: false, final false
inline int32_t AIiuHMXJDRSnrsTdoecbIaJmXmHK(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method BKIPHIfNLOjleFsntkTzRqzLDEmab, addr 0x18185f610, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* BKIPHIfNLOjleFsntkTzRqzLDEmab(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method CknfKabvsGfkyeQxgFCCQoycTgtyB, addr 0x18185f6b0, size 0x270, virtual false, abstract: false, final false
inline int32_t CknfKabvsGfkyeQxgFCCQoycTgtyB(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method DVTbSIFQjjJhPjFHhILnUcTuWcWVA, addr 0x18185f6b0, size 0x270, virtual false, abstract: false, final false
inline int32_t DVTbSIFQjjJhPjFHhILnUcTuWcWVA(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18185fe60, size 0x50, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18185feb0, size 0x50, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18185fdd0, size 0x50, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps, bool  forceCheckAllCategories) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18185f920, size 0x1f0, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps, bool  forceCheckAllCategories, bool  includeSystemPlayer) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18185fe20, size 0x40, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18185fd80, size 0x50, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18185fb10, size 0x50, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps, bool  forceCheckAllCategories) ;

/// @brief Method DisableElementAssignmentConflicts, addr 0x18185fb60, size 0x220, virtual false, abstract: false, final false
inline int32_t DisableElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps, bool  forceCheckAllCategories, bool  includeSystemPlayer) ;

/// @brief Method DoesAnyElementAssignmentConflict, addr 0x1818605d0, size 0x20, virtual false, abstract: false, final false
inline bool DoesAnyElementAssignmentConflict() ;

/// @brief Method DoesAnyElementAssignmentConflict, addr 0x1818605f0, size 0x20, virtual false, abstract: false, final false
inline bool DoesAnyElementAssignmentConflict(bool  skipDisabledMaps) ;

/// @brief Method DoesAnyElementAssignmentConflict, addr 0x1818605b0, size 0x20, virtual false, abstract: false, final false
inline bool DoesAnyElementAssignmentConflict(bool  skipDisabledMaps, bool  forceCheckAllCategories) ;

/// @brief Method DoesAnyElementAssignmentConflict, addr 0x18185ff00, size 0x6b0, virtual false, abstract: false, final false
inline bool DoesAnyElementAssignmentConflict(bool  skipDisabledMaps, bool  forceCheckAllCategories, bool  includeSystemPlayer) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x181860c20, size 0x50, virtual false, abstract: false, final false
inline bool DoesElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x181861330, size 0x50, virtual false, abstract: false, final false
inline bool DoesElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x181861200, size 0x50, virtual false, abstract: false, final false
inline bool DoesElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps, bool  forceCheckAllCategories) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x181860610, size 0x610, virtual false, abstract: false, final false
inline bool DoesElementAssignmentConflict(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps, bool  forceCheckAllCategories, bool  includeSystemPlayer) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x1818612a0, size 0x40, virtual false, abstract: false, final false
inline bool DoesElementAssignmentConflict(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x181861250, size 0x50, virtual false, abstract: false, final false
inline bool DoesElementAssignmentConflict(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x1818612e0, size 0x50, virtual false, abstract: false, final false
inline bool DoesElementAssignmentConflict(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps, bool  forceCheckAllCategories) ;

/// @brief Method DoesElementAssignmentConflict, addr 0x181860c70, size 0x590, virtual false, abstract: false, final false
inline bool DoesElementAssignmentConflict(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps, bool  forceCheckAllCategories, bool  includeSystemPlayer) ;

/// @brief Method ElementAssignmentConflicts, addr 0x1818613d0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck) ;

/// @brief Method ElementAssignmentConflicts, addr 0x181861860, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps) ;

/// @brief Method ElementAssignmentConflicts, addr 0x181861380, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps, bool  forceCheckAllCategories) ;

/// @brief Method ElementAssignmentConflicts, addr 0x181861470, size 0x140, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps, bool  forceCheckAllCategories, bool  includeSystemPlayer) ;

/// @brief Method ElementAssignmentConflicts, addr 0x1818615b0, size 0x40, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap) ;

/// @brief Method ElementAssignmentConflicts, addr 0x1818615f0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps) ;

/// @brief Method ElementAssignmentConflicts, addr 0x181861420, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps, bool  forceCheckAllCategories) ;

/// @brief Method ElementAssignmentConflicts, addr 0x181861640, size 0x220, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* ElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps, bool  forceCheckAllCategories, bool  includeSystemPlayer) ;

/// @brief Method EpYSzmcTCISruyilKRIxvWkFnuxc, addr 0x1818618b0, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* EpYSzmcTCISruyilKRIxvWkFnuxc(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method HRnujWDrHDxfOapELdBrELYAFaIIA, addr 0x181861950, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* HRnujWDrHDxfOapELdBrELYAFaIIA(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method JgeMhQpkpNIvysIDGyZMoLHQvjsG, addr 0x1818619f0, size 0x170, virtual false, abstract: false, final false
inline bool JgeMhQpkpNIvysIDGyZMoLHQvjsG(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method LvZUNSwCxyzPoDKxUtStYulWCxuv, addr 0x181861b60, size 0x270, virtual false, abstract: false, final false
inline int32_t LvZUNSwCxyzPoDKxUtStYulWCxuv(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method NKLWyxfkjPlZboZejpHzxezWcohk, addr 0x181861dd0, size 0x170, virtual false, abstract: false, final false
inline bool NKLWyxfkjPlZboZejpHzxezWcohk(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method NUgDywecxDfIRhtrPYapRTMVPlKeA, addr 0x1818619f0, size 0x170, virtual false, abstract: false, final false
inline bool NUgDywecxDfIRhtrPYapRTMVPlKeA(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

static inline ::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper* New_ctor() ;

/// @brief Method ObFkvbQbmNqROcmSgYwVyvHPuLnG, addr 0x181861f40, size 0x170, virtual false, abstract: false, final false
inline bool ObFkvbQbmNqROcmSgYwVyvHPuLnG(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method OitZzihKoIklMleSMBHKaMCJciCiA, addr 0x1818620b0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper* OitZzihKoIklMleSMBHKaMCJciCiA() ;

/// @brief Method QYlESibcnIIIZarmjngpvWoTtzEXb, addr 0x181862110, size 0x170, virtual false, abstract: false, final false
inline bool QYlESibcnIIIZarmjngpvWoTtzEXb(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method QzRWFkfmBNdaAhAzXwtcMEGwEQFxA, addr 0x181862280, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* QzRWFkfmBNdaAhAzXwtcMEGwEQFxA(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x181862320, size 0x50, virtual false, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x181862810, size 0x50, virtual false, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x1818628b0, size 0x50, virtual false, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps, bool  forceCheckAllCategories) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x181862400, size 0x1f0, virtual false, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(::Rewired::ElementAssignmentConflictCheck  conflictCheck, bool  skipDisabledMaps, bool  forceCheckAllCategories, bool  includeSystemPlayer) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x1818623c0, size 0x40, virtual false, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x181862370, size 0x50, virtual false, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x181862860, size 0x50, virtual false, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps, bool  forceCheckAllCategories) ;

/// @brief Method RemoveElementAssignmentConflicts, addr 0x1818625f0, size 0x220, virtual false, abstract: false, final false
inline int32_t RemoveElementAssignmentConflicts(int32_t  playerId, ::Rewired::ControllerType  controllerType, int32_t  controllerId, ::Rewired::ControllerMap*  controllerMap, ::Rewired::ActionElementMap*  elementMap, bool  skipDisabledMaps, bool  forceCheckAllCategories, bool  includeSystemPlayer) ;

/// @brief Method TZPkTMCgDgsOZlLIAVlKOiNncZiDA, addr 0x181862900, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* TZPkTMCgDgsOZlLIAVlKOiNncZiDA(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method WSqNBaDjXUgQJiIrZhdZdhifPrvmA, addr 0x181862990, size 0x170, virtual false, abstract: false, final false
inline bool WSqNBaDjXUgQJiIrZhdZdhifPrvmA(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method WxcXWCukgOAvBvoJblzOYBHuIhKv, addr 0x181862b00, size 0x260, virtual false, abstract: false, final false
inline int32_t WxcXWCukgOAvBvoJblzOYBHuIhKv(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method XyGaJHicmsGAIjkjgyHCdHRCnTKRB, addr 0x18185f6b0, size 0x270, virtual false, abstract: false, final false
inline int32_t XyGaJHicmsGAIjkjgyHCdHRCnTKRB(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method YVLFXmYKIMkwMnBltxhchKCNdOEFA, addr 0x181862d60, size 0x270, virtual false, abstract: false, final false
inline int32_t YVLFXmYKIMkwMnBltxhchKCNdOEFA(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method ZqwdELKXVwqNKBPCEqPgCttazLGJb, addr 0x181862fd0, size 0x270, virtual false, abstract: false, final false
inline int32_t ZqwdELKXVwqNKBPCEqPgCttazLGJb(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method dCdDEXbwIFcCVGgxWZwuJDdlgdFP, addr 0x181863240, size 0x270, virtual false, abstract: false, final false
inline int32_t dCdDEXbwIFcCVGgxWZwuJDdlgdFP(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method fQgeXXbNeJrJmCzbrbBSgGBjfxUVB, addr 0x1818634b0, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* fQgeXXbNeJrJmCzbrbBSgGBjfxUVB(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

static inline ::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper* getStaticF_TIpwMppXiFhOlfLtXMEZprrgZSDC() ;

/// @brief Method ghxbfwwFTPULdLNFsIyHXhcZhwGgA, addr 0x181862fd0, size 0x270, virtual false, abstract: false, final false
inline int32_t ghxbfwwFTPULdLNFsIyHXhcZhwGgA(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method hzJdrDaCwdosllhYPsEPyUkFUzUG, addr 0x181863550, size 0x270, virtual false, abstract: false, final false
inline int32_t hzJdrDaCwdosllhYPsEPyUkFUzUG(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method jPQEnzFLUChrMZMwkHVPWpzzauLkA, addr 0x1818637c0, size 0x170, virtual false, abstract: false, final false
inline bool jPQEnzFLUChrMZMwkHVPWpzzauLkA(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method kpugHHeOTCxqULKkYXffCdyIvyoPA, addr 0x181862fd0, size 0x270, virtual false, abstract: false, final false
inline int32_t kpugHHeOTCxqULKkYXffCdyIvyoPA(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method mEQBpMAGlJfMmCzkGaNiabrYkZKib, addr 0x181863930, size 0x270, virtual false, abstract: false, final false
inline int32_t mEQBpMAGlJfMmCzkGaNiabrYkZKib(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method ohEDWWTgWtQYGNwARBPnFuFkFCil, addr 0x181863ba0, size 0x270, virtual false, abstract: false, final false
inline int32_t ohEDWWTgWtQYGNwARBPnFuFkFCil(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::JoystickMap*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method pTiNRtHDTYDaLolYofgFkDJeqSTF, addr 0x1818619f0, size 0x170, virtual false, abstract: false, final false
inline bool pTiNRtHDTYDaLolYofgFkDJeqSTF(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method qkFqrYTwUAsdEfsRwEuKyHcQIbh, addr 0x181863e10, size 0x260, virtual false, abstract: false, final false
inline int32_t qkFqrYTwUAsdEfsRwEuKyHcQIbh(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

static inline void setStaticF_TIpwMppXiFhOlfLtXMEZprrgZSDC(::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper*  value) ;

/// @brief Method sfNhsScFeooyDfKwAYzAdXbbxlHj, addr 0x181864070, size 0x260, virtual false, abstract: false, final false
inline int32_t sfNhsScFeooyDfKwAYzAdXbbxlHj(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::KeyboardMap*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method tkSzySKdMCsoNBhTLyEDZJxuEkB, addr 0x1818642d0, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* tkSzySKdMCsoNBhTLyEDZJxuEkB(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::MouseMap*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3, bool  _cordl_fixed_empty_name_whitespace_param_4, bool  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method uQEFLFOwzAITzlRBhbWlazqqLSyo, addr 0x181864360, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::ElementAssignmentConflictInfo>* uQEFLFOwzAITzlRBhbWlazqqLSyo(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerHelper_ReInput_ConflictCheckingHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerHelper_ReInput_ConflictCheckingHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerHelper_ReInput_ConflictCheckingHelper(ControllerHelper_ReInput_ConflictCheckingHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerHelper_ReInput_ConflictCheckingHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerHelper_ReInput_ConflictCheckingHelper(ControllerHelper_ReInput_ConflictCheckingHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2197};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Utils.Classes.CodeHelper
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/ControllerHelper
class CORDL_TYPE ReInput_ControllerHelper : public ::Rewired::Utils::Classes::CodeHelper {
public:
// Declarations
using ConflictCheckingHelper = ::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper;

using PollingHelper = ::Rewired::ControllerHelper_ReInput_PollingHelper;

 __declspec(property(get=get_Controllers)) ::System::Collections::Generic::IList_1<::Rewired::Controller*>*  Controllers;

 __declspec(property(get=get_CustomControllers)) ::System::Collections::Generic::IList_1<::Rewired::CustomController*>*  CustomControllers;

 __declspec(property(get=get_Joysticks)) ::System::Collections::Generic::IList_1<::Rewired::Joystick*>*  Joysticks;

 __declspec(property(get=get_Keyboard)) ::Rewired::Keyboard*  Keyboard;

 __declspec(property(get=get_Mouse)) ::Rewired::Mouse*  Mouse;

/// @brief Field aNdDeGBZPizozZBNJEjRCtKlgEjU, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_aNdDeGBZPizozZBNJEjRCtKlgEjU, put=setStaticF_aNdDeGBZPizozZBNJEjRCtKlgEjU)) ::Rewired::ReInput_ControllerHelper*  aNdDeGBZPizozZBNJEjRCtKlgEjU;

/// @brief Field conflictChecking, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_conflictChecking, put=__cordl_internal_set_conflictChecking)) ::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper*  conflictChecking;

 __declspec(property(get=get_controllerCount)) int32_t  controllerCount;

 __declspec(property(get=get_customControllerCount)) int32_t  customControllerCount;

 __declspec(property(get=get_joystickCount)) int32_t  joystickCount;

 __declspec(property(get=get_keyboardEnabled, put=set_keyboardEnabled)) bool  keyboardEnabled;

/// @brief Field polling, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_polling, put=__cordl_internal_set_polling)) ::Rewired::ControllerHelper_ReInput_PollingHelper*  polling;

/// @brief Method AddLastActiveControllerChangedDelegate, addr 0x181864400, size 0x60, virtual false, abstract: false, final false
inline void AddLastActiveControllerChangedDelegate(::Rewired::ActiveControllerChangedDelegate*  callback) ;

/// @brief Method AddLastActiveControllerChangedDelegate, addr 0x181864460, size 0x70, virtual false, abstract: false, final false
inline void AddLastActiveControllerChangedDelegate(::Rewired::ActiveControllerChangedDelegate*  callback, ::Rewired::ControllerType  controllerType) ;

/// @brief Method AutoAssignJoystick, addr 0x1818644d0, size 0xb0, virtual false, abstract: false, final false
inline bool AutoAssignJoystick(::Rewired::Joystick*  joystick) ;

/// @brief Method AutoAssignJoysticks, addr 0x181864580, size 0x220, virtual false, abstract: false, final false
inline void AutoAssignJoysticks() ;

/// @brief Method ClearLastActiveControllerChangedDelegates, addr 0x1818647a0, size 0x60, virtual false, abstract: false, final false
inline void ClearLastActiveControllerChangedDelegates() ;

/// @brief Method CreateCustomController, addr 0x181864890, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::CustomController* CreateCustomController(int32_t  sourceControllerId) ;

/// @brief Method CreateCustomController, addr 0x181864800, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::CustomController* CreateCustomController(int32_t  sourceControllerId, ::StringW  tag) ;

/// @brief Method CustomControllersWithSourceId, addr 0x1818648f0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::CustomController*>* CustomControllersWithSourceId(int32_t  sourceId) ;

/// @brief Method CustomControllersWithTag, addr 0x181864960, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::CustomController*>* CustomControllersWithTag(::StringW  tag) ;

/// @brief Method DestroyCustomController, addr 0x1818649d0, size 0xb0, virtual false, abstract: false, final false
inline bool DestroyCustomController(::Rewired::CustomController*  customController) ;

/// @brief Method GetAnyButton, addr 0x181864de0, size 0x60, virtual false, abstract: false, final false
inline bool GetAnyButton() ;

/// @brief Method GetAnyButton, addr 0x181864d80, size 0x60, virtual false, abstract: false, final false
inline bool GetAnyButton(::Rewired::ControllerType  controllerType) ;

/// @brief Method GetAnyButtonChanged, addr 0x181864a80, size 0x60, virtual false, abstract: false, final false
inline bool GetAnyButtonChanged() ;

/// @brief Method GetAnyButtonChanged, addr 0x181864ae0, size 0x60, virtual false, abstract: false, final false
inline bool GetAnyButtonChanged(::Rewired::ControllerType  controllerType) ;

/// @brief Method GetAnyButtonDown, addr 0x181864b40, size 0x60, virtual false, abstract: false, final false
inline bool GetAnyButtonDown() ;

/// @brief Method GetAnyButtonDown, addr 0x181864ba0, size 0x60, virtual false, abstract: false, final false
inline bool GetAnyButtonDown(::Rewired::ControllerType  controllerType) ;

/// @brief Method GetAnyButtonPrev, addr 0x181864c60, size 0x60, virtual false, abstract: false, final false
inline bool GetAnyButtonPrev() ;

/// @brief Method GetAnyButtonPrev, addr 0x181864c00, size 0x60, virtual false, abstract: false, final false
inline bool GetAnyButtonPrev(::Rewired::ControllerType  controllerType) ;

/// @brief Method GetAnyButtonUp, addr 0x181864d20, size 0x60, virtual false, abstract: false, final false
inline bool GetAnyButtonUp() ;

/// @brief Method GetAnyButtonUp, addr 0x181864cc0, size 0x60, virtual false, abstract: false, final false
inline bool GetAnyButtonUp(::Rewired::ControllerType  controllerType) ;

/// @brief Method GetController, addr 0x181865010, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Controller* GetController(::Rewired::ControllerIdentifier  controllerIdentifier) ;

/// @brief Method GetController, addr 0x181864f90, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::Controller* GetController(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method GetController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetController(int32_t  controllerId) ;

/// @brief Method GetControllerCount, addr 0x181864e40, size 0xe0, virtual false, abstract: false, final false
inline int32_t GetControllerCount(::Rewired::ControllerType  controllerType) ;

/// @brief Method GetControllerNames, addr 0x181864f20, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetControllerNames(::Rewired::ControllerType  controllerType) ;

/// @brief Method GetControllerTemplates, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TInterface>
inline ::System::Collections::Generic::IList_1<TInterface>* GetControllerTemplates() ;

/// @brief Method GetControllers, addr 0x181865090, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::Controller*> GetControllers(::Rewired::ControllerType  controllerType) ;

/// @brief Method GetCustomController, addr 0x181865160, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::CustomController* GetCustomController(int32_t  customControllerId) ;

/// @brief Method GetCustomControllerNames, addr 0x181865100, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetCustomControllerNames() ;

/// @brief Method GetCustomControllers, addr 0x1818651c0, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::CustomController*> GetCustomControllers() ;

/// @brief Method GetFirstCustomControllerWithSourceId, addr 0x181865220, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::CustomController* GetFirstCustomControllerWithSourceId(int32_t  sourceId) ;

/// @brief Method GetFirstCustomControllerWithTag, addr 0x181865280, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::CustomController* GetFirstCustomControllerWithTag(::StringW  tag) ;

/// @brief Method GetJoystick, addr 0x181865340, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Joystick* GetJoystick(int32_t  joystickId) ;

/// @brief Method GetJoystickNames, addr 0x1818652e0, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetJoystickNames() ;

/// @brief Method GetJoysticks, addr 0x1818653a0, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<::Rewired::Joystick*> GetJoysticks() ;

/// @brief Method GetLastActiveController, addr 0x181865450, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Controller* GetLastActiveController() ;

/// @brief Method GetLastActiveController, addr 0x1818654b0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Controller* GetLastActiveController(::Rewired::ControllerType  controllerType) ;

/// @brief Method GetLastActiveController, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetLastActiveController() ;

/// @brief Method GetLastActiveControllerType, addr 0x1818653f0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::ControllerType GetLastActiveControllerType() ;

/// @brief Method GetUnityJoystickIdFromAnyButtonOrAxisPress, addr 0x181865510, size 0x140, virtual false, abstract: false, final false
inline int32_t GetUnityJoystickIdFromAnyButtonOrAxisPress(float_t  axisThreshold, bool  positiveAxesOnly) ;

/// @brief Method GetUnityJoystickIdFromAnyButtonPress, addr 0x181865650, size 0x110, virtual false, abstract: false, final false
inline int32_t GetUnityJoystickIdFromAnyButtonPress() ;

/// @brief Method IsControllerAssigned, addr 0x1818657f0, size 0x60, virtual false, abstract: false, final false
inline bool IsControllerAssigned(::Rewired::ControllerType  controllerType, ::Rewired::Controller*  controller) ;

/// @brief Method IsControllerAssigned, addr 0x181865850, size 0x70, virtual false, abstract: false, final false
inline bool IsControllerAssigned(::Rewired::ControllerType  controllerType, int32_t  controllerId) ;

/// @brief Method IsControllerAssignedToPlayer, addr 0x181865760, size 0x90, virtual false, abstract: false, final false
inline bool IsControllerAssignedToPlayer(::Rewired::ControllerType  controllerType, int32_t  controllerId, int32_t  playerId) ;

/// @brief Method IsCustomControllerAssigned, addr 0x181865930, size 0x60, virtual false, abstract: false, final false
inline bool IsCustomControllerAssigned(::Rewired::CustomController*  customController) ;

/// @brief Method IsCustomControllerAssigned, addr 0x181865990, size 0x60, virtual false, abstract: false, final false
inline bool IsCustomControllerAssigned(int32_t  customControllerId) ;

/// @brief Method IsCustomControllerAssignedToPlayer, addr 0x1818658c0, size 0x70, virtual false, abstract: false, final false
inline bool IsCustomControllerAssignedToPlayer(int32_t  customControllerId, int32_t  playerId) ;

/// @brief Method IsJoystickAssigned, addr 0x181865930, size 0x60, virtual false, abstract: false, final false
inline bool IsJoystickAssigned(::Rewired::Joystick*  joystick) ;

/// @brief Method IsJoystickAssigned, addr 0x181865a60, size 0x60, virtual false, abstract: false, final false
inline bool IsJoystickAssigned(int32_t  joystickId) ;

/// @brief Method IsJoystickAssignedToPlayer, addr 0x1818659f0, size 0x70, virtual false, abstract: false, final false
inline bool IsJoystickAssignedToPlayer(int32_t  joystickId, int32_t  playerId) ;

static inline ::Rewired::ReInput_ControllerHelper* New_ctor() ;

/// @brief Method RemoveControllerFromAllPlayers, addr 0x181865ac0, size 0x70, virtual false, abstract: false, final false
inline void RemoveControllerFromAllPlayers(::Rewired::Controller*  controller, bool  includeSystemPlayer) ;

/// @brief Method RemoveControllerFromAllPlayers, addr 0x181865b30, size 0x80, virtual false, abstract: false, final false
inline void RemoveControllerFromAllPlayers(::Rewired::ControllerType  controllerType, int32_t  controllerId, bool  includeSystemPlayer) ;

/// @brief Method RemoveCustomControllerFromAllPlayers, addr 0x181865bb0, size 0x70, virtual false, abstract: false, final false
inline void RemoveCustomControllerFromAllPlayers(::Rewired::CustomController*  customController, bool  includeSystemPlayer) ;

/// @brief Method RemoveCustomControllerFromAllPlayers, addr 0x181865c20, size 0x70, virtual false, abstract: false, final false
inline void RemoveCustomControllerFromAllPlayers(int32_t  customControllerId, bool  includeSystemPlayer) ;

/// @brief Method RemoveJoystickFromAllPlayers, addr 0x181865d00, size 0x70, virtual false, abstract: false, final false
inline void RemoveJoystickFromAllPlayers(::Rewired::Joystick*  joystick, bool  includeSystemPlayer) ;

/// @brief Method RemoveJoystickFromAllPlayers, addr 0x181865c90, size 0x70, virtual false, abstract: false, final false
inline void RemoveJoystickFromAllPlayers(int32_t  joystickId, bool  includeSystemPlayer) ;

/// @brief Method RemoveLastActiveControllerChangedDelegate, addr 0x181865d70, size 0x60, virtual false, abstract: false, final false
inline void RemoveLastActiveControllerChangedDelegate(::Rewired::ActiveControllerChangedDelegate*  callback) ;

/// @brief Method RemoveLastActiveControllerChangedDelegate, addr 0x181865dd0, size 0x70, virtual false, abstract: false, final false
inline void RemoveLastActiveControllerChangedDelegate(::Rewired::ActiveControllerChangedDelegate*  callback, ::Rewired::ControllerType  controllerType) ;

/// @brief Method SetUnityJoystickId, addr 0x181866100, size 0x90, virtual false, abstract: false, final false
inline void SetUnityJoystickId(int32_t  joystickId, int32_t  unityJoystickId) ;

/// @brief Method SetUnityJoystickIdFromAnyButtonOrAxisPress, addr 0x181865e40, size 0x190, virtual false, abstract: false, final false
inline bool SetUnityJoystickIdFromAnyButtonOrAxisPress(int32_t  joystickId, float_t  axisThreshold, bool  positiveAxesOnly) ;

/// @brief Method SetUnityJoystickIdFromAnyButtonPress, addr 0x181865fd0, size 0x130, virtual false, abstract: false, final false
inline bool SetUnityJoystickIdFromAnyButtonPress(int32_t  joystickId) ;

constexpr ::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper* const& __cordl_internal_get_conflictChecking() const;

constexpr ::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper*& __cordl_internal_get_conflictChecking() ;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper* const& __cordl_internal_get_polling() const;

constexpr ::Rewired::ControllerHelper_ReInput_PollingHelper*& __cordl_internal_get_polling() ;

constexpr void __cordl_internal_set_conflictChecking(::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper*  value) ;

constexpr void __cordl_internal_set_polling(::Rewired::ControllerHelper_ReInput_PollingHelper*  value) ;

/// @brief Method .ctor, addr 0x181866190, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::ReInput_ControllerHelper* getStaticF_aNdDeGBZPizozZBNJEjRCtKlgEjU() ;

/// @brief Method get_Controllers, addr 0x181866260, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Controller*>* get_Controllers() ;

/// @brief Method get_CustomControllers, addr 0x1818662c0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::CustomController*>* get_CustomControllers() ;

/// @brief Method get_Joysticks, addr 0x181866320, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Joystick*>* get_Joysticks() ;

/// @brief Method get_Keyboard, addr 0x181866380, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Keyboard* get_Keyboard() ;

/// @brief Method get_Mouse, addr 0x1818663e0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Mouse* get_Mouse() ;

/// @brief Method get_controllerCount, addr 0x181866440, size 0x60, virtual false, abstract: false, final false
inline int32_t get_controllerCount() ;

/// @brief Method get_customControllerCount, addr 0x1818664a0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_customControllerCount() ;

/// @brief Method get_joystickCount, addr 0x181866500, size 0x60, virtual false, abstract: false, final false
inline int32_t get_joystickCount() ;

/// @brief Method get_keyboardEnabled, addr 0x181866560, size 0x80, virtual false, abstract: false, final false
inline bool get_keyboardEnabled() ;

static inline void setStaticF_aNdDeGBZPizozZBNJEjRCtKlgEjU(::Rewired::ReInput_ControllerHelper*  value) ;

/// @brief Method set_keyboardEnabled, addr 0x1818665e0, size 0x90, virtual false, abstract: false, final false
inline void set_keyboardEnabled(bool  value) ;

/// @brief Method vkBchjKPpIXcTcHCqLsbvJpHYLAR, addr 0x181866670, size 0x120, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_ControllerHelper* vkBchjKPpIXcTcHCqLsbvJpHYLAR() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput_ControllerHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput_ControllerHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput_ControllerHelper(ReInput_ControllerHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput_ControllerHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput_ControllerHelper(ReInput_ControllerHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2198};

/// @brief Field polling, offset: 0x10, size: 0x8, def value: None
 ::Rewired::ControllerHelper_ReInput_PollingHelper*  ___polling;

/// @brief Field conflictChecking, offset: 0x18, size: 0x8, def value: None
 ::Rewired::ControllerHelper_ReInput_ConflictCheckingHelper*  ___conflictChecking;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ReInput_ControllerHelper, ___polling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_ControllerHelper, ___conflictChecking) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::ReInput_ControllerHelper) == 0x20, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Utils.Classes.CodeHelper
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/MappingHelper
class CORDL_TYPE ReInput_MappingHelper : public ::Rewired::Utils::Classes::CodeHelper {
public:
// Declarations
 __declspec(property(get=get_ActionCategories)) ::System::Collections::Generic::IList_1<::Rewired::InputCategory*>*  ActionCategories;

 __declspec(property(get=get_Actions)) ::System::Collections::Generic::IList_1<::Rewired::InputAction*>*  Actions;

 __declspec(property(get=get_CustomControllerLayouts)) ::System::Collections::Generic::IList_1<::Rewired::InputLayout*>*  CustomControllerLayouts;

/// @brief Field IGfGdFAvEEsPSpjyXrWIREEsZMEx, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IGfGdFAvEEsPSpjyXrWIREEsZMEx, put=setStaticF_IGfGdFAvEEsPSpjyXrWIREEsZMEx)) ::Rewired::ReInput_MappingHelper*  IGfGdFAvEEsPSpjyXrWIREEsZMEx;

 __declspec(property(get=get_JoystickLayouts)) ::System::Collections::Generic::IList_1<::Rewired::InputLayout*>*  JoystickLayouts;

 __declspec(property(get=get_KeyboardLayouts)) ::System::Collections::Generic::IList_1<::Rewired::InputLayout*>*  KeyboardLayouts;

 __declspec(property(get=get_MapCategories)) ::System::Collections::Generic::IList_1<::Rewired::InputMapCategory*>*  MapCategories;

 __declspec(property(get=get_MouseLayouts)) ::System::Collections::Generic::IList_1<::Rewired::InputLayout*>*  MouseLayouts;

 __declspec(property(get=get_UserAssignableActionCategories)) ::System::Collections::Generic::IEnumerable_1<::Rewired::InputCategory*>*  UserAssignableActionCategories;

 __declspec(property(get=get_UserAssignableActions)) ::System::Collections::Generic::IEnumerable_1<::Rewired::InputAction*>*  UserAssignableActions;

 __declspec(property(get=get_UserAssignableMapCategories)) ::System::Collections::Generic::IEnumerable_1<::Rewired::InputMapCategory*>*  UserAssignableMapCategories;

/// @brief Method AHWgWrYXYOqaamHWWnvWNfTQCZxM, addr 0x181867b00, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::InputBehavior* AHWgWrYXYOqaamHWWnvWNfTQCZxM(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ActionCategoriesWithTag, addr 0x181867b50, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputCategory*>* ActionCategoriesWithTag(::StringW  tag) ;

/// @brief Method ActionsInCategoriesWithTag, addr 0x181867bc0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputAction*>* ActionsInCategoriesWithTag(::StringW  tag) ;

/// @brief Method ActionsInCategory, addr 0x181867d30, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputAction*>* ActionsInCategory(int32_t  mapCategoryId) ;

/// @brief Method ActionsInCategory, addr 0x181867cb0, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputAction*>* ActionsInCategory(int32_t  mapCategoryId, bool  sort) ;

/// @brief Method ActionsInCategory, addr 0x181867da0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputAction*>* ActionsInCategory(::StringW  mapCategoryName) ;

/// @brief Method ActionsInCategory, addr 0x181867c30, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputAction*>* ActionsInCategory(::StringW  mapCategoryName, bool  sort) ;

/// @brief Method BildNRItdCMCBLdLtHiRyShJwWzRA, addr 0x181867e10, size 0xa0, virtual false, abstract: false, final false
inline int32_t BildNRItdCMCBLdLtHiRyShJwWzRA(::System::Guid  _cordl_fixed_empty_name_whitespace, ::System::Guid  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::System::Collections::Generic::List_1<::Rewired::Data::Mapping::HardwareControllerTemplateMap_cGLXOdyrUmsdgTHWCggcdxYJMCzj>*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method GetAction, addr 0x181868280, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputAction* GetAction(int32_t  actionId) ;

/// @brief Method GetAction, addr 0x1818682e0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputAction* GetAction(::StringW  name) ;

/// @brief Method GetActionCategory, addr 0x181867f80, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputCategory* GetActionCategory(int32_t  mapCategoryId) ;

/// @brief Method GetActionCategory, addr 0x181867f20, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputCategory* GetActionCategory(::StringW  name) ;

/// @brief Method GetActionCategoryId, addr 0x181867eb0, size 0x70, virtual false, abstract: false, final false
inline int32_t GetActionCategoryId(::StringW  name) ;

/// @brief Method GetActionElementMap, addr 0x181867fe0, size 0x230, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* GetActionElementMap(int32_t  id) ;

/// @brief Method GetActionId, addr 0x181868210, size 0x70, virtual false, abstract: false, final false
inline int32_t GetActionId(::StringW  name) ;

/// @brief Method GetControllerMap, addr 0x181869150, size 0xc0, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* GetControllerMap(int32_t  id) ;

/// @brief Method GetControllerMapEnablerRuleSetInstance, addr 0x181868340, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerMapEnabler_RuleSet* GetControllerMapEnablerRuleSetInstance(int32_t  id) ;

/// @brief Method GetControllerMapEnablerRuleSetInstance, addr 0x1818683b0, size 0xc0, virtual false, abstract: false, final false
inline ::Rewired::ControllerMapEnabler_RuleSet* GetControllerMapEnablerRuleSetInstance(::StringW  name) ;

/// @brief Method GetControllerMapInstance, addr 0x181868ed0, size 0x150, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* GetControllerMapInstance(::Rewired::Controller*  controller, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetControllerMapInstance, addr 0x181868bc0, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* GetControllerMapInstance(::Rewired::Controller*  controller, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetControllerMapInstance, addr 0x181868a30, size 0x190, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* GetControllerMapInstance(::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetControllerMapInstance, addr 0x181868c70, size 0x260, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* GetControllerMapInstance(::Rewired::ControllerIdentifier  controllerIdentifier, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetControllerMapInstanceSavedOrDefault, addr 0x181868880, size 0x1b0, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* GetControllerMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::Controller*  controller, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetControllerMapInstanceSavedOrDefault, addr 0x1818687d0, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* GetControllerMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::Controller*  controller, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetControllerMapInstanceSavedOrDefault, addr 0x181868670, size 0x160, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* GetControllerMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetControllerMapInstanceSavedOrDefault, addr 0x181868470, size 0x200, virtual false, abstract: false, final false
inline ::Rewired::ControllerMap* GetControllerMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetControllerMapLayoutManagerRuleSetInstance, addr 0x181869020, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::ControllerMapLayoutManager_RuleSet* GetControllerMapLayoutManagerRuleSetInstance(int32_t  id) ;

/// @brief Method GetControllerMapLayoutManagerRuleSetInstance, addr 0x181869090, size 0xc0, virtual false, abstract: false, final false
inline ::Rewired::ControllerMapLayoutManager_RuleSet* GetControllerMapLayoutManagerRuleSetInstance(::StringW  name) ;

/// @brief Method GetControllerTemplateMapInstance, addr 0x181869210, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::ControllerTemplateMap* GetControllerTemplateMapInstance(::System::Guid  templateTypeGuid, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetControllerTemplateMapInstance, addr 0x1818692b0, size 0x160, virtual false, abstract: false, final false
inline ::Rewired::ControllerTemplateMap* GetControllerTemplateMapInstance(::System::Guid  templateTypeGuid, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetCustomControllerLayout, addr 0x181869480, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputLayout* GetCustomControllerLayout(int32_t  layoutId) ;

/// @brief Method GetCustomControllerLayout, addr 0x1818694e0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputLayout* GetCustomControllerLayout(::StringW  name) ;

/// @brief Method GetCustomControllerLayoutId, addr 0x181869410, size 0x70, virtual false, abstract: false, final false
inline int32_t GetCustomControllerLayoutId(::StringW  name) ;

/// @brief Method GetCustomControllerMapInstance, addr 0x181869ea0, size 0x2e0, virtual false, abstract: false, final false
inline ::Rewired::CustomControllerMap* GetCustomControllerMapInstance(::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetCustomControllerMapInstance, addr 0x181869b80, size 0x140, virtual false, abstract: false, final false
inline ::Rewired::CustomControllerMap* GetCustomControllerMapInstance(::Rewired::ControllerIdentifier  controllerIdentifier, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetCustomControllerMapInstance, addr 0x181869de0, size 0xc0, virtual false, abstract: false, final false
inline ::Rewired::CustomControllerMap* GetCustomControllerMapInstance(::Rewired::CustomController*  customController, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetCustomControllerMapInstance, addr 0x181869cc0, size 0x120, virtual false, abstract: false, final false
inline ::Rewired::CustomControllerMap* GetCustomControllerMapInstance(::Rewired::CustomController*  customController, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetCustomControllerMapInstanceSavedOrDefault, addr 0x181869580, size 0x380, virtual false, abstract: false, final false
inline ::Rewired::CustomControllerMap* GetCustomControllerMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetCustomControllerMapInstanceSavedOrDefault, addr 0x181869900, size 0x140, virtual false, abstract: false, final false
inline ::Rewired::CustomControllerMap* GetCustomControllerMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetCustomControllerMapInstanceSavedOrDefault, addr 0x181869540, size 0x40, virtual false, abstract: false, final false
inline ::Rewired::CustomControllerMap* GetCustomControllerMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::CustomController*  customController, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetCustomControllerMapInstanceSavedOrDefault, addr 0x181869a40, size 0x140, virtual false, abstract: false, final false
inline ::Rewired::CustomControllerMap* GetCustomControllerMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::CustomController*  customController, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetFirstJoystickTemplateElementIdentifier, addr 0x18186a180, size 0xf0, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* GetFirstJoystickTemplateElementIdentifier(::Rewired::Joystick*  joystick, int32_t  joystickElementIdentifierId) ;

/// @brief Method GetInputBehavior, addr 0x18186a350, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::InputBehavior* GetInputBehavior(int32_t  playerId, int32_t  behaviorId) ;

/// @brief Method GetInputBehavior, addr 0x18186a2e0, size 0x70, virtual false, abstract: false, final false
inline ::Rewired::InputBehavior* GetInputBehavior(int32_t  playerId, ::StringW  behaviorName) ;

/// @brief Method GetInputBehaviorId, addr 0x18186a270, size 0x70, virtual false, abstract: false, final false
inline int32_t GetInputBehaviorId(::StringW  behaviorName) ;

/// @brief Method GetInputBehaviors, addr 0x18186a3c0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::InputBehavior*>* GetInputBehaviors(int32_t  playerId) ;

/// @brief Method GetJoystickLayout, addr 0x18186a500, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputLayout* GetJoystickLayout(int32_t  layoutId) ;

/// @brief Method GetJoystickLayout, addr 0x18186a4a0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputLayout* GetJoystickLayout(::StringW  name) ;

/// @brief Method GetJoystickLayoutId, addr 0x18186a430, size 0x70, virtual false, abstract: false, final false
inline int32_t GetJoystickLayoutId(::StringW  name) ;

/// @brief Method GetJoystickMapInstance, addr 0x18186b0c0, size 0x130, virtual false, abstract: false, final false
inline ::Rewired::JoystickMap* GetJoystickMapInstance(::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetJoystickMapInstance, addr 0x18186b1f0, size 0x140, virtual false, abstract: false, final false
inline ::Rewired::JoystickMap* GetJoystickMapInstance(::Rewired::ControllerIdentifier  controllerIdentifier, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetJoystickMapInstance, addr 0x18186ac10, size 0xc0, virtual false, abstract: false, final false
inline ::Rewired::JoystickMap* GetJoystickMapInstance(::Rewired::Joystick*  joystick, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetJoystickMapInstance, addr 0x18186b330, size 0x120, virtual false, abstract: false, final false
inline ::Rewired::JoystickMap* GetJoystickMapInstance(::Rewired::Joystick*  joystick, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetJoystickMapInstance, addr 0x18186acd0, size 0x290, virtual false, abstract: false, final false
inline ::Rewired::JoystickMap* GetJoystickMapInstance(::System::Guid  joystickTypeGuid, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetJoystickMapInstance, addr 0x18186af60, size 0x160, virtual false, abstract: false, final false
inline ::Rewired::JoystickMap* GetJoystickMapInstance(::System::Guid  joystickTypeGuid, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetJoystickMapInstanceSavedOrDefault, addr 0x18186a860, size 0x3b0, virtual false, abstract: false, final false
inline ::Rewired::JoystickMap* GetJoystickMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetJoystickMapInstanceSavedOrDefault, addr 0x18186a720, size 0x140, virtual false, abstract: false, final false
inline ::Rewired::JoystickMap* GetJoystickMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::ControllerIdentifier  controllerIdentifier, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetJoystickMapInstanceSavedOrDefault, addr 0x18186a680, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::JoystickMap* GetJoystickMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::Joystick*  joystick, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetJoystickMapInstanceSavedOrDefault, addr 0x18186a560, size 0x120, virtual false, abstract: false, final false
inline ::Rewired::JoystickMap* GetJoystickMapInstanceSavedOrDefault(int32_t  playerId, ::Rewired::Joystick*  joystick, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetKeyboardLayout, addr 0x18186b4c0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputLayout* GetKeyboardLayout(int32_t  layoutId) ;

/// @brief Method GetKeyboardLayout, addr 0x18186b520, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputLayout* GetKeyboardLayout(::StringW  name) ;

/// @brief Method GetKeyboardLayoutId, addr 0x18186b450, size 0x70, virtual false, abstract: false, final false
inline int32_t GetKeyboardLayoutId(::StringW  name) ;

/// @brief Method GetKeyboardMapInstance, addr 0x18186b900, size 0x150, virtual false, abstract: false, final false
inline ::Rewired::KeyboardMap* GetKeyboardMapInstance(int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetKeyboardMapInstance, addr 0x18186ba50, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::KeyboardMap* GetKeyboardMapInstance(::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetKeyboardMapInstanceSavedOrDefault, addr 0x18186b580, size 0x260, virtual false, abstract: false, final false
inline ::Rewired::KeyboardMap* GetKeyboardMapInstanceSavedOrDefault(int32_t  playerId, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetKeyboardMapInstanceSavedOrDefault, addr 0x18186b7e0, size 0x120, virtual false, abstract: false, final false
inline ::Rewired::KeyboardMap* GetKeyboardMapInstanceSavedOrDefault(int32_t  playerId, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetLayout, addr 0x18186bc90, size 0x130, virtual false, abstract: false, final false
inline ::Rewired::InputLayout* GetLayout(::Rewired::ControllerType  controllerType, int32_t  layoutId) ;

/// @brief Method GetLayout, addr 0x18186bdc0, size 0x130, virtual false, abstract: false, final false
inline ::Rewired::InputLayout* GetLayout(::Rewired::ControllerType  controllerType, ::StringW  name) ;

/// @brief Method GetLayoutId, addr 0x18186bb60, size 0x130, virtual false, abstract: false, final false
inline int32_t GetLayoutId(::Rewired::ControllerType  controllerType, ::StringW  name) ;

/// @brief Method GetMapCategory, addr 0x18186bfc0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputMapCategory* GetMapCategory(int32_t  mapCategoryId) ;

/// @brief Method GetMapCategory, addr 0x18186bf60, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputMapCategory* GetMapCategory(::StringW  name) ;

/// @brief Method GetMapCategoryId, addr 0x18186bef0, size 0x70, virtual false, abstract: false, final false
inline int32_t GetMapCategoryId(::StringW  name) ;

/// @brief Method GetMouseLayout, addr 0x18186c0f0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputLayout* GetMouseLayout(int32_t  layoutId) ;

/// @brief Method GetMouseLayout, addr 0x18186c090, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::InputLayout* GetMouseLayout(::StringW  name) ;

/// @brief Method GetMouseLayoutId, addr 0x18186c020, size 0x70, virtual false, abstract: false, final false
inline int32_t GetMouseLayoutId(::StringW  name) ;

/// @brief Method GetMouseMapInstance, addr 0x18186c5e0, size 0x150, virtual false, abstract: false, final false
inline ::Rewired::MouseMap* GetMouseMapInstance(int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetMouseMapInstance, addr 0x18186c4d0, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::MouseMap* GetMouseMapInstance(::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetMouseMapInstanceSavedOrDefault, addr 0x18186c270, size 0x260, virtual false, abstract: false, final false
inline ::Rewired::MouseMap* GetMouseMapInstanceSavedOrDefault(int32_t  playerId, int32_t  mapCategoryId, int32_t  layoutId) ;

/// @brief Method GetMouseMapInstanceSavedOrDefault, addr 0x18186c150, size 0x120, virtual false, abstract: false, final false
inline ::Rewired::MouseMap* GetMouseMapInstanceSavedOrDefault(int32_t  playerId, ::StringW  mapCategoryName, ::StringW  layoutName) ;

/// @brief Method GetSystemPlayerInputBehavior, addr 0x18186c730, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::InputBehavior* GetSystemPlayerInputBehavior(int32_t  behaviorId) ;

/// @brief Method GetSystemPlayerInputBehavior, addr 0x18186c7c0, size 0x90, virtual false, abstract: false, final false
inline ::Rewired::InputBehavior* GetSystemPlayerInputBehavior(::StringW  behaviorName) ;

/// @brief Method GetSystemPlayerInputBehaviors, addr 0x18186c850, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::InputBehavior*>* GetSystemPlayerInputBehaviors() ;

/// @brief Method GmUGSSScJCHRCfuvmHNnblResvgcB, addr 0x18186c8c0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_MappingHelper* GmUGSSScJCHRCfuvmHNnblResvgcB() ;

/// @brief Method IsActionCategoryUserAssignable, addr 0x18186c920, size 0x90, virtual false, abstract: false, final false
inline bool IsActionCategoryUserAssignable(int32_t  mapCategoryId) ;

/// @brief Method IsMapCategoryUserAssignable, addr 0x18186c9b0, size 0x90, virtual false, abstract: false, final false
inline bool IsMapCategoryUserAssignable(int32_t  mapCategoryId) ;

/// @brief Method MapCategoriesWithTag, addr 0x18186ca40, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputMapCategory*>* MapCategoriesWithTag(::StringW  tag) ;

/// @brief Method MapLayouts, addr 0x18186cab0, size 0x190, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::InputLayout*>* MapLayouts(::Rewired::ControllerType  controllerType) ;

static inline ::Rewired::ReInput_MappingHelper* New_ctor() ;

/// @brief Method UserAssignableActionCategoriesWithTag, addr 0x18186cc40, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputCategory*>* UserAssignableActionCategoriesWithTag(::StringW  tag) ;

/// @brief Method UserAssignableActionsInCategory, addr 0x18186ce20, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputAction*>* UserAssignableActionsInCategory(int32_t  mapCategoryId) ;

/// @brief Method UserAssignableActionsInCategory, addr 0x18186ccb0, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputAction*>* UserAssignableActionsInCategory(int32_t  mapCategoryId, bool  sort) ;

/// @brief Method UserAssignableActionsInCategory, addr 0x18186cdb0, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputAction*>* UserAssignableActionsInCategory(::StringW  mapCategoryName) ;

/// @brief Method UserAssignableActionsInCategory, addr 0x18186cd30, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputAction*>* UserAssignableActionsInCategory(::StringW  mapCategoryName, bool  sort) ;

/// @brief Method UserAssignableMapCategoriesWithTag, addr 0x18186ce90, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputMapCategory*>* UserAssignableMapCategoriesWithTag(::StringW  tag) ;

/// @brief Method VgXaPsdyUphxrHKgJVYQHsZaACTP, addr 0x18186cf00, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::InputBehavior* VgXaPsdyUphxrHKgJVYQHsZaACTP(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::ReInput_MappingHelper* getStaticF_IGfGdFAvEEsPSpjyXrWIREEsZMEx() ;

/// @brief Method get_ActionCategories, addr 0x18186cf50, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::InputCategory*>* get_ActionCategories() ;

/// @brief Method get_Actions, addr 0x18186cfb0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::InputAction*>* get_Actions() ;

/// @brief Method get_CustomControllerLayouts, addr 0x18186d010, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::InputLayout*>* get_CustomControllerLayouts() ;

/// @brief Method get_JoystickLayouts, addr 0x18186d070, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::InputLayout*>* get_JoystickLayouts() ;

/// @brief Method get_KeyboardLayouts, addr 0x18186d0d0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::InputLayout*>* get_KeyboardLayouts() ;

/// @brief Method get_MapCategories, addr 0x18186d130, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::InputMapCategory*>* get_MapCategories() ;

/// @brief Method get_MouseLayouts, addr 0x18186d190, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::InputLayout*>* get_MouseLayouts() ;

/// @brief Method get_UserAssignableActionCategories, addr 0x18186d1f0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputCategory*>* get_UserAssignableActionCategories() ;

/// @brief Method get_UserAssignableActions, addr 0x18186d250, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputAction*>* get_UserAssignableActions() ;

/// @brief Method get_UserAssignableMapCategories, addr 0x18186d2b0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Rewired::InputMapCategory*>* get_UserAssignableMapCategories() ;

/// @brief Method rpqyTacbikRTFdLqFdGqKOYMlxab, addr 0x18186d310, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::ControllerElementIdentifier* rpqyTacbikRTFdLqFdGqKOYMlxab(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline void setStaticF_IGfGdFAvEEsPSpjyXrWIREEsZMEx(::Rewired::ReInput_MappingHelper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput_MappingHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput_MappingHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput_MappingHelper(ReInput_MappingHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput_MappingHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput_MappingHelper(ReInput_MappingHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2199};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ReInput_MappingHelper) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Utils.Classes.CodeHelper
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/PlayerHelper
class CORDL_TYPE ReInput_PlayerHelper : public ::Rewired::Utils::Classes::CodeHelper {
public:
// Declarations
 __declspec(property(get=get_AllPlayers)) ::System::Collections::Generic::IList_1<::Rewired::Player*>*  AllPlayers;

 __declspec(property(get=get_Players)) ::System::Collections::Generic::IList_1<::Rewired::Player*>*  Players;

 __declspec(property(get=get_SystemPlayer)) ::Rewired::Player*  SystemPlayer;

 __declspec(property(get=get_allPlayerCount)) int32_t  allPlayerCount;

 __declspec(property(get=get_playerCount)) int32_t  playerCount;

/// @brief Field qzrGEZVaeCzNTvblPtSFmMqGsRAW, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_qzrGEZVaeCzNTvblPtSFmMqGsRAW, put=setStaticF_qzrGEZVaeCzNTvblPtSFmMqGsRAW)) ::Rewired::ReInput_PlayerHelper*  qzrGEZVaeCzNTvblPtSFmMqGsRAW;

/// @brief Method GetPlayer, addr 0x181883380, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Player* GetPlayer(::StringW  name) ;

/// @brief Method GetPlayer, addr 0x181883320, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Player* GetPlayer(int32_t  playerId) ;

/// @brief Method GetPlayerDescriptiveNames, addr 0x181883160, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetPlayerDescriptiveNames(bool  includeSystemPlayer) ;

/// @brief Method GetPlayerId, addr 0x1818831d0, size 0x70, virtual false, abstract: false, final false
inline int32_t GetPlayerId(::StringW  playerName) ;

/// @brief Method GetPlayerIds, addr 0x181883240, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetPlayerIds(bool  includeSystemPlayer) ;

/// @brief Method GetPlayerNames, addr 0x1818832b0, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetPlayerNames(bool  includeSystemPlayer) ;

/// @brief Method GetPlayers, addr 0x1818833e0, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Player*>* GetPlayers(bool  includeSystemPlayer) ;

/// @brief Method GetSystemPlayer, addr 0x181883460, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Player* GetSystemPlayer() ;

static inline ::Rewired::ReInput_PlayerHelper* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method gXHjtMctrGCaZXqQkhwEWsfGyvSC, addr 0x1818834c0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_PlayerHelper* gXHjtMctrGCaZXqQkhwEWsfGyvSC() ;

static inline ::Rewired::ReInput_PlayerHelper* getStaticF_qzrGEZVaeCzNTvblPtSFmMqGsRAW() ;

/// @brief Method get_AllPlayers, addr 0x181883520, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Player*>* get_AllPlayers() ;

/// @brief Method get_Players, addr 0x181883580, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Rewired::Player*>* get_Players() ;

/// @brief Method get_SystemPlayer, addr 0x181883460, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Player* get_SystemPlayer() ;

/// @brief Method get_allPlayerCount, addr 0x1818835e0, size 0x50, virtual false, abstract: false, final false
inline int32_t get_allPlayerCount() ;

/// @brief Method get_playerCount, addr 0x181883630, size 0x50, virtual false, abstract: false, final false
inline int32_t get_playerCount() ;

static inline void setStaticF_qzrGEZVaeCzNTvblPtSFmMqGsRAW(::Rewired::ReInput_PlayerHelper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput_PlayerHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput_PlayerHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput_PlayerHelper(ReInput_PlayerHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput_PlayerHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput_PlayerHelper(ReInput_PlayerHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2200};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ReInput_PlayerHelper) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Utils.Classes.CodeHelper
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/TimeHelper
class CORDL_TYPE ReInput_TimeHelper : public ::Rewired::Utils::Classes::CodeHelper {
public:
// Declarations
/// @brief Field HeeWLFvRButAJEugPSXetZOAMvkD, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HeeWLFvRButAJEugPSXetZOAMvkD, put=setStaticF_HeeWLFvRButAJEugPSXetZOAMvkD)) ::Rewired::ReInput_TimeHelper*  HeeWLFvRButAJEugPSXetZOAMvkD;

 __declspec(property(get=get_currentFrame)) uint32_t  currentFrame;

 __declspec(property(get=get_unscaledDeltaTime)) float_t  unscaledDeltaTime;

 __declspec(property(get=get_unscaledTime)) double_t  unscaledTime;

/// @brief Method BDHBOiKpHwrRKrrOTRgovYlymhuPA, addr 0x181883a90, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_TimeHelper* BDHBOiKpHwrRKrrOTRgovYlymhuPA() ;

static inline ::Rewired::ReInput_TimeHelper* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::ReInput_TimeHelper* getStaticF_HeeWLFvRButAJEugPSXetZOAMvkD() ;

/// @brief Method get_currentFrame, addr 0x181883af0, size 0x60, virtual false, abstract: false, final false
inline uint32_t get_currentFrame() ;

/// @brief Method get_unscaledDeltaTime, addr 0x181883b50, size 0x60, virtual false, abstract: false, final false
inline float_t get_unscaledDeltaTime() ;

/// @brief Method get_unscaledTime, addr 0x181883bb0, size 0x60, virtual false, abstract: false, final false
inline double_t get_unscaledTime() ;

static inline void setStaticF_HeeWLFvRButAJEugPSXetZOAMvkD(::Rewired::ReInput_TimeHelper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput_TimeHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput_TimeHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput_TimeHelper(ReInput_TimeHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput_TimeHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput_TimeHelper(ReInput_TimeHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2201};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ReInput_TimeHelper) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.UpdateLoopType, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/OTQjebRZYlpFkdIetXjwvnEMmlUA/DQBCXjbYgmqUoDcCcWrJiBvLuqlwA
class CORDL_TYPE OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA : public ::System::Object {
public:
// Declarations
 __declspec(property(get=EPxRCvIqsqTubsopOvKMyjRnDOjc)) double_t  BIqFSploAeFWjUIHGPAeOpOrCYPEA;

 __declspec(property(get=cAZixtAfcJIjudIkujgIDlCRTMLEb)) float_t  FKgbwNtshBXWXSPPnJaRyVowhcFm;

 __declspec(property(get=VgkfagivaXImwPFOqORLTolcLaQmA)) double_t  LuIQSVtAYbmypuOsDmXJTkLEzucF;

/// @brief Field MDmHTCGVRkNgDdFScoJcFpHoejwFb, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_MDmHTCGVRkNgDdFScoJcFpHoejwFb, put=__cordl_internal_set_MDmHTCGVRkNgDdFScoJcFpHoejwFb)) ::Rewired::UpdateLoopType  MDmHTCGVRkNgDdFScoJcFpHoejwFb;

 __declspec(property(get=lDYSfSJAeFocdQFHcAQcnpopcWRdA)) uint32_t  RPpIGvtnLzebmkgtBcyRRrunaByiA;

/// @brief Field RsxEZOOnIylWQQYWzFBsUXYFgLLu, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RsxEZOOnIylWQQYWzFBsUXYFgLLu, put=__cordl_internal_set_RsxEZOOnIylWQQYWzFBsUXYFgLLu)) double_t  RsxEZOOnIylWQQYWzFBsUXYFgLLu;

/// @brief Field TbwuMfWjruVouGdjXIbciuRomUxxA, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_TbwuMfWjruVouGdjXIbciuRomUxxA, put=__cordl_internal_set_TbwuMfWjruVouGdjXIbciuRomUxxA)) uint32_t  TbwuMfWjruVouGdjXIbciuRomUxxA;

/// @brief Field VomgfUPPCuEbgTuBEoUtjkDtBvUD, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_VomgfUPPCuEbgTuBEoUtjkDtBvUD, put=__cordl_internal_set_VomgfUPPCuEbgTuBEoUtjkDtBvUD)) double_t  VomgfUPPCuEbgTuBEoUtjkDtBvUD;

/// @brief Field YDFyURLWtTAEYcjloDsZdvEhPAvZA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_YDFyURLWtTAEYcjloDsZdvEhPAvZA, put=__cordl_internal_set_YDFyURLWtTAEYcjloDsZdvEhPAvZA)) double_t  YDFyURLWtTAEYcjloDsZdvEhPAvZA;

/// @brief Field ZcveJMDUdgTbGeQEtUQjwpsIvCIK, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ZcveJMDUdgTbGeQEtUQjwpsIvCIK, put=__cordl_internal_set_ZcveJMDUdgTbGeQEtUQjwpsIvCIK)) double_t  ZcveJMDUdgTbGeQEtUQjwpsIvCIK;

/// @brief Field kHeMeuuvLWtBktwYoCwCPKWblWNt, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_kHeMeuuvLWtBktwYoCwCPKWblWNt, put=__cordl_internal_set_kHeMeuuvLWtBktwYoCwCPKWblWNt)) float_t  kHeMeuuvLWtBktwYoCwCPKWblWNt;

/// @brief Field ouRbtveiKQITyGtXgRfJEAmfLfCpC, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ouRbtveiKQITyGtXgRfJEAmfLfCpC, put=__cordl_internal_set_ouRbtveiKQITyGtXgRfJEAmfLfCpC)) uint32_t  ouRbtveiKQITyGtXgRfJEAmfLfCpC;

/// @brief Field pQJaBRjTJyxXtwhqdnSlbjSEPtaq, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_pQJaBRjTJyxXtwhqdnSlbjSEPtaq, put=__cordl_internal_set_pQJaBRjTJyxXtwhqdnSlbjSEPtaq)) float_t  pQJaBRjTJyxXtwhqdnSlbjSEPtaq;

 __declspec(property(get=cldKRimXWvMRwISYnfmrekIgaVcJ)) uint32_t  pnkFfANBwNfGabhOtKRkfvUAwJWtA;

 __declspec(property(get=ellWhDBISojoOVLnnRQdbclghABH)) double_t  syZYVQOMPKFxEdZqvzxafBjahQQX;

 __declspec(property(get=OGhCuJsLHInMmjYXrTGsQJBPKpGq)) float_t  zsfUQFQFAkePuIKwQLkoQhVDQcHN;

/// @brief Method EPxRCvIqsqTubsopOvKMyjRnDOjc, addr 0x1805d7480, size 0x10, virtual false, abstract: false, final false
inline double_t EPxRCvIqsqTubsopOvKMyjRnDOjc() ;

static inline ::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA* New_ctor(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method OGhCuJsLHInMmjYXrTGsQJBPKpGq, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t OGhCuJsLHInMmjYXrTGsQJBPKpGq() ;

/// @brief Method VgkfagivaXImwPFOqORLTolcLaQmA, addr 0x18051eb00, size 0x10, virtual false, abstract: false, final false
inline double_t VgkfagivaXImwPFOqORLTolcLaQmA() ;

constexpr ::Rewired::UpdateLoopType const& __cordl_internal_get_MDmHTCGVRkNgDdFScoJcFpHoejwFb() const;

constexpr ::Rewired::UpdateLoopType& __cordl_internal_get_MDmHTCGVRkNgDdFScoJcFpHoejwFb() ;

constexpr double_t const& __cordl_internal_get_RsxEZOOnIylWQQYWzFBsUXYFgLLu() const;

constexpr double_t& __cordl_internal_get_RsxEZOOnIylWQQYWzFBsUXYFgLLu() ;

constexpr uint32_t const& __cordl_internal_get_TbwuMfWjruVouGdjXIbciuRomUxxA() const;

constexpr uint32_t& __cordl_internal_get_TbwuMfWjruVouGdjXIbciuRomUxxA() ;

constexpr double_t const& __cordl_internal_get_VomgfUPPCuEbgTuBEoUtjkDtBvUD() const;

constexpr double_t& __cordl_internal_get_VomgfUPPCuEbgTuBEoUtjkDtBvUD() ;

constexpr double_t const& __cordl_internal_get_YDFyURLWtTAEYcjloDsZdvEhPAvZA() const;

constexpr double_t& __cordl_internal_get_YDFyURLWtTAEYcjloDsZdvEhPAvZA() ;

constexpr double_t const& __cordl_internal_get_ZcveJMDUdgTbGeQEtUQjwpsIvCIK() const;

constexpr double_t& __cordl_internal_get_ZcveJMDUdgTbGeQEtUQjwpsIvCIK() ;

constexpr float_t const& __cordl_internal_get_kHeMeuuvLWtBktwYoCwCPKWblWNt() const;

constexpr float_t& __cordl_internal_get_kHeMeuuvLWtBktwYoCwCPKWblWNt() ;

constexpr uint32_t const& __cordl_internal_get_ouRbtveiKQITyGtXgRfJEAmfLfCpC() const;

constexpr uint32_t& __cordl_internal_get_ouRbtveiKQITyGtXgRfJEAmfLfCpC() ;

constexpr float_t const& __cordl_internal_get_pQJaBRjTJyxXtwhqdnSlbjSEPtaq() const;

constexpr float_t& __cordl_internal_get_pQJaBRjTJyxXtwhqdnSlbjSEPtaq() ;

constexpr void __cordl_internal_set_MDmHTCGVRkNgDdFScoJcFpHoejwFb(::Rewired::UpdateLoopType  value) ;

constexpr void __cordl_internal_set_RsxEZOOnIylWQQYWzFBsUXYFgLLu(double_t  value) ;

constexpr void __cordl_internal_set_TbwuMfWjruVouGdjXIbciuRomUxxA(uint32_t  value) ;

constexpr void __cordl_internal_set_VomgfUPPCuEbgTuBEoUtjkDtBvUD(double_t  value) ;

constexpr void __cordl_internal_set_YDFyURLWtTAEYcjloDsZdvEhPAvZA(double_t  value) ;

constexpr void __cordl_internal_set_ZcveJMDUdgTbGeQEtUQjwpsIvCIK(double_t  value) ;

constexpr void __cordl_internal_set_kHeMeuuvLWtBktwYoCwCPKWblWNt(float_t  value) ;

constexpr void __cordl_internal_set_ouRbtveiKQITyGtXgRfJEAmfLfCpC(uint32_t  value) ;

constexpr void __cordl_internal_set_pQJaBRjTJyxXtwhqdnSlbjSEPtaq(float_t  value) ;

/// @brief Method .ctor, addr 0x18187fd30, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method cAZixtAfcJIjudIkujgIDlCRTMLEb, addr 0x1802e2d80, size 0x10, virtual false, abstract: false, final false
inline float_t cAZixtAfcJIjudIkujgIDlCRTMLEb() ;

/// @brief Method cldKRimXWvMRwISYnfmrekIgaVcJ, addr 0x1803231b0, size 0x10, virtual false, abstract: false, final false
inline uint32_t cldKRimXWvMRwISYnfmrekIgaVcJ() ;

/// @brief Method ellWhDBISojoOVLnnRQdbclghABH, addr 0x18187fd60, size 0x10, virtual false, abstract: false, final false
inline double_t ellWhDBISojoOVLnnRQdbclghABH() ;

/// @brief Method lDYSfSJAeFocdQFHcAQcnpopcWRdA, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline uint32_t lDYSfSJAeFocdQFHcAQcnpopcWRdA() ;

/// @brief Method nNrxsXNDXWKudIJhNLgMpJkbOyyK, addr 0x18187fd70, size 0x100, virtual false, abstract: false, final false
inline void nNrxsXNDXWKudIJhNLgMpJkbOyyK() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA(OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA(OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2202};

/// @brief Field MDmHTCGVRkNgDdFScoJcFpHoejwFb, offset: 0x10, size: 0x4, def value: None
 ::Rewired::UpdateLoopType  ___MDmHTCGVRkNgDdFScoJcFpHoejwFb;

/// @brief Field ZcveJMDUdgTbGeQEtUQjwpsIvCIK, offset: 0x18, size: 0x8, def value: None
 double_t  ___ZcveJMDUdgTbGeQEtUQjwpsIvCIK;

/// @brief Field RsxEZOOnIylWQQYWzFBsUXYFgLLu, offset: 0x20, size: 0x8, def value: None
 double_t  ___RsxEZOOnIylWQQYWzFBsUXYFgLLu;

/// @brief Field YDFyURLWtTAEYcjloDsZdvEhPAvZA, offset: 0x28, size: 0x8, def value: None
 double_t  ___YDFyURLWtTAEYcjloDsZdvEhPAvZA;

/// @brief Field VomgfUPPCuEbgTuBEoUtjkDtBvUD, offset: 0x30, size: 0x8, def value: None
 double_t  ___VomgfUPPCuEbgTuBEoUtjkDtBvUD;

/// @brief Field TbwuMfWjruVouGdjXIbciuRomUxxA, offset: 0x38, size: 0x4, def value: None
 uint32_t  ___TbwuMfWjruVouGdjXIbciuRomUxxA;

/// @brief Field ouRbtveiKQITyGtXgRfJEAmfLfCpC, offset: 0x3c, size: 0x4, def value: None
 uint32_t  ___ouRbtveiKQITyGtXgRfJEAmfLfCpC;

/// @brief Field pQJaBRjTJyxXtwhqdnSlbjSEPtaq, offset: 0x40, size: 0x4, def value: None
 float_t  ___pQJaBRjTJyxXtwhqdnSlbjSEPtaq;

/// @brief Field kHeMeuuvLWtBktwYoCwCPKWblWNt, offset: 0x44, size: 0x4, def value: None
 float_t  ___kHeMeuuvLWtBktwYoCwCPKWblWNt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA, ___MDmHTCGVRkNgDdFScoJcFpHoejwFb) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA, ___ZcveJMDUdgTbGeQEtUQjwpsIvCIK) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA, ___RsxEZOOnIylWQQYWzFBsUXYFgLLu) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA, ___YDFyURLWtTAEYcjloDsZdvEhPAvZA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA, ___VomgfUPPCuEbgTuBEoUtjkDtBvUD) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA, ___TbwuMfWjruVouGdjXIbciuRomUxxA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA, ___ouRbtveiKQITyGtXgRfJEAmfLfCpC) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA, ___pQJaBRjTJyxXtwhqdnSlbjSEPtaq) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA, ___kHeMeuuvLWtBktwYoCwCPKWblWNt) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA) == 0x48, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/OTQjebRZYlpFkdIetXjwvnEMmlUA/eWQsXkRAasexpyVwueBHMLdWvNUG
class CORDL_TYPE OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG : public ::System::Object {
public:
// Declarations
/// @brief Method cUkZJcWnfzIZfDdRWSXuSNPVRVN, addr 0x181885ec0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Utility::StopwatchBase* cUkZJcWnfzIZfDdRWSXuSNPVRVN() ;

/// @brief Method eAKtGDxQWWRJnBgEcWZngQlkSIuL, addr 0x181885f20, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Utility::StopwatchBase* eAKtGDxQWWRJnBgEcWZngQlkSIuL() ;

/// @brief Method tQdsCXkVOOotCMSOAUBFExYeSoCt, addr 0x181885f70, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Utility::StopwatchBase* tQdsCXkVOOotCMSOAUBFExYeSoCt() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG(OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG(OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2203};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/OTQjebRZYlpFkdIetXjwvnEMmlUA
class CORDL_TYPE ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA : public ::System::Object {
public:
// Declarations
using DQBCXjbYgmqUoDcCcWrJiBvLuqlwA = ::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA;

using eWQsXkRAasexpyVwueBHMLdWvNUG = ::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_eWQsXkRAasexpyVwueBHMLdWvNUG;

 __declspec(property(get=SSFlmxAavjnQlSQlNgnmdgNxdzxA)) float_t  DpFbVcWgzVdxkVoVFfthiUNZQcblA;

 __declspec(property(get=SRKLNAAEhcgSoaAdWAhBwSCHCkiCb)) double_t  ImrehlGsYjiQMABlasGHJzBdOVHmD;

/// @brief Field IxPvwVpxUzgSEeoLBAuBEhdANNFlA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_IxPvwVpxUzgSEeoLBAuBEhdANNFlA, put=__cordl_internal_set_IxPvwVpxUzgSEeoLBAuBEhdANNFlA)) ::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA*  IxPvwVpxUzgSEeoLBAuBEhdANNFlA;

 __declspec(property(get=brMOdKQpcvneFqitHnukcPgrsZET)) uint32_t  JjnAzqHgvOEKRhZrnFiKQRrESYyY;

 __declspec(property(get=oddPExcnIMkfomTLGaflClovpehm)) uint32_t  PgQXZQSVBWHoOibgEGjSPswRAHPp;

 __declspec(property(get=leXBwwEZDJzAcaVCpGCAQWvEpGrdA)) double_t  SHLMZVDdNHRBdJCXqBSQUBGUaGdz;

 __declspec(property(get=MZYfqZmwVGsuRcgPNXfwmpJbuLte)) double_t  UgcevgzVAGiMIvtqhscSOVcSIuzS;

 __declspec(property(get=raSliZvcckXfLpeJBfxwKJLALcch)) double_t  VPEzasMPHJgpwMcGjVuyDFdeDssM;

/// @brief Field VbPDzMbwMNHFmbSbYUqXztRzFQPf, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_VbPDzMbwMNHFmbSbYUqXztRzFQPf, put=__cordl_internal_set_VbPDzMbwMNHFmbSbYUqXztRzFQPf)) uint32_t  VbPDzMbwMNHFmbSbYUqXztRzFQPf;

/// @brief Field WvUXuyiwgcgWvhfdyblqJodUFyLh, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_WvUXuyiwgcgWvhfdyblqJodUFyLh, put=__cordl_internal_set_WvUXuyiwgcgWvhfdyblqJodUFyLh)) ::Rewired::Utils::Classes::Utility::StopwatchBase*  WvUXuyiwgcgWvhfdyblqJodUFyLh;

 __declspec(property(get=rewloRiNfiFoZRRLWIJIrtkfxmpp)) float_t  YZzdHwGzahpGCHKwdhMRdhGnBoIIb;

 __declspec(property(get=srmqoRNKAbDKKLuAMUMTCgxNuoDp)) uint32_t  hDkMtQVywNbyXxrTrPYAxGtVcarh;

/// @brief Field mpkNvlawGdblasGGurwQmChNDkAd, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mpkNvlawGdblasGGurwQmChNDkAd, put=__cordl_internal_set_mpkNvlawGdblasGGurwQmChNDkAd)) double_t  mpkNvlawGdblasGGurwQmChNDkAd;

/// @brief Field xqObJTIRLcsUrfNKNZuNOQGoxXsw, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_xqObJTIRLcsUrfNKNZuNOQGoxXsw, put=__cordl_internal_set_xqObJTIRLcsUrfNKNZuNOQGoxXsw)) ::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA*>*  xqObJTIRLcsUrfNKNZuNOQGoxXsw;

/// @brief Method MZYfqZmwVGsuRcgPNXfwmpJbuLte, addr 0x181882bf0, size 0x40, virtual false, abstract: false, final false
inline double_t MZYfqZmwVGsuRcgPNXfwmpJbuLte() ;

static inline ::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA* New_ctor() ;

/// @brief Method SRKLNAAEhcgSoaAdWAhBwSCHCkiCb, addr 0x181882c30, size 0x20, virtual false, abstract: false, final false
inline double_t SRKLNAAEhcgSoaAdWAhBwSCHCkiCb() ;

/// @brief Method SSFlmxAavjnQlSQlNgnmdgNxdzxA, addr 0x181882c50, size 0x20, virtual false, abstract: false, final false
inline float_t SSFlmxAavjnQlSQlNgnmdgNxdzxA() ;

constexpr ::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA* const& __cordl_internal_get_IxPvwVpxUzgSEeoLBAuBEhdANNFlA() const;

constexpr ::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA*& __cordl_internal_get_IxPvwVpxUzgSEeoLBAuBEhdANNFlA() ;

constexpr uint32_t const& __cordl_internal_get_VbPDzMbwMNHFmbSbYUqXztRzFQPf() const;

constexpr uint32_t& __cordl_internal_get_VbPDzMbwMNHFmbSbYUqXztRzFQPf() ;

constexpr ::Rewired::Utils::Classes::Utility::StopwatchBase* const& __cordl_internal_get_WvUXuyiwgcgWvhfdyblqJodUFyLh() const;

constexpr ::Rewired::Utils::Classes::Utility::StopwatchBase*& __cordl_internal_get_WvUXuyiwgcgWvhfdyblqJodUFyLh() ;

constexpr double_t const& __cordl_internal_get_mpkNvlawGdblasGGurwQmChNDkAd() const;

constexpr double_t& __cordl_internal_get_mpkNvlawGdblasGGurwQmChNDkAd() ;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA*>* const& __cordl_internal_get_xqObJTIRLcsUrfNKNZuNOQGoxXsw() const;

constexpr ::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA*>*& __cordl_internal_get_xqObJTIRLcsUrfNKNZuNOQGoxXsw() ;

constexpr void __cordl_internal_set_IxPvwVpxUzgSEeoLBAuBEhdANNFlA(::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA*  value) ;

constexpr void __cordl_internal_set_VbPDzMbwMNHFmbSbYUqXztRzFQPf(uint32_t  value) ;

constexpr void __cordl_internal_set_WvUXuyiwgcgWvhfdyblqJodUFyLh(::Rewired::Utils::Classes::Utility::StopwatchBase*  value) ;

constexpr void __cordl_internal_set_mpkNvlawGdblasGGurwQmChNDkAd(double_t  value) ;

constexpr void __cordl_internal_set_xqObJTIRLcsUrfNKNZuNOQGoxXsw(::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA*>*  value) ;

/// @brief Method .ctor, addr 0x181882c70, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method brMOdKQpcvneFqitHnukcPgrsZET, addr 0x181882cf0, size 0x20, virtual false, abstract: false, final false
inline uint32_t brMOdKQpcvneFqitHnukcPgrsZET() ;

/// @brief Method cDPLvdaUSTclZyBsDIzWnOeSKeIV, addr 0x181882d10, size 0x1b0, virtual false, abstract: false, final false
inline void cDPLvdaUSTclZyBsDIzWnOeSKeIV() ;

/// @brief Method cveUvTuMVVLSyXtgTaVbBhqHPxKB, addr 0x181882ec0, size 0x1c0, virtual false, abstract: false, final false
inline void cveUvTuMVVLSyXtgTaVbBhqHPxKB(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method djFdjtcFjLsqXvtSuOvbKuaZObYVA, addr 0x181883080, size 0x30, virtual false, abstract: false, final false
inline void djFdjtcFjLsqXvtSuOvbKuaZObYVA() ;

/// @brief Method leXBwwEZDJzAcaVCpGCAQWvEpGrdA, addr 0x1818830b0, size 0x20, virtual false, abstract: false, final false
inline double_t leXBwwEZDJzAcaVCpGCAQWvEpGrdA() ;

/// @brief Method oddPExcnIMkfomTLGaflClovpehm, addr 0x1818830d0, size 0x20, virtual false, abstract: false, final false
inline uint32_t oddPExcnIMkfomTLGaflClovpehm() ;

/// @brief Method raSliZvcckXfLpeJBfxwKJLALcch, addr 0x1818830f0, size 0x20, virtual false, abstract: false, final false
inline double_t raSliZvcckXfLpeJBfxwKJLALcch() ;

/// @brief Method rewloRiNfiFoZRRLWIJIrtkfxmpp, addr 0x181883110, size 0x20, virtual false, abstract: false, final false
inline float_t rewloRiNfiFoZRRLWIJIrtkfxmpp() ;

/// @brief Method srmqoRNKAbDKKLuAMUMTCgxNuoDp, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline uint32_t srmqoRNKAbDKKLuAMUMTCgxNuoDp() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA(ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA(ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2204};

/// @brief Field WvUXuyiwgcgWvhfdyblqJodUFyLh, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::StopwatchBase*  ___WvUXuyiwgcgWvhfdyblqJodUFyLh;

/// @brief Field mpkNvlawGdblasGGurwQmChNDkAd, offset: 0x18, size: 0x8, def value: None
 double_t  ___mpkNvlawGdblasGGurwQmChNDkAd;

/// @brief Field IxPvwVpxUzgSEeoLBAuBEhdANNFlA, offset: 0x20, size: 0x8, def value: None
 ::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA*  ___IxPvwVpxUzgSEeoLBAuBEhdANNFlA;

/// @brief Field xqObJTIRLcsUrfNKNZuNOQGoxXsw, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Data::ADictionary_2<int32_t,::Rewired::OTQjebRZYlpFkdIetXjwvnEMmlUA_ReInput_DQBCXjbYgmqUoDcCcWrJiBvLuqlwA*>*  ___xqObJTIRLcsUrfNKNZuNOQGoxXsw;

/// @brief Field VbPDzMbwMNHFmbSbYUqXztRzFQPf, offset: 0x30, size: 0x4, def value: None
 uint32_t  ___VbPDzMbwMNHFmbSbYUqXztRzFQPf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA, ___WvUXuyiwgcgWvhfdyblqJodUFyLh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA, ___mpkNvlawGdblasGGurwQmChNDkAd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA, ___IxPvwVpxUzgSEeoLBAuBEhdANNFlA) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA, ___xqObJTIRLcsUrfNKNZuNOQGoxXsw) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA, ___VbPDzMbwMNHFmbSbYUqXztRzFQPf) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA) == 0x38, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Utils.Classes.CodeHelper
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/UnityTouch
class CORDL_TYPE ReInput_UnityTouch : public ::Rewired::Utils::Classes::CodeHelper {
public:
// Declarations
/// @brief Field gFDNhAaRROIvmPjjtJJhpccdtPJO, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gFDNhAaRROIvmPjjtJJhpccdtPJO, put=setStaticF_gFDNhAaRROIvmPjjtJJhpccdtPJO)) ::Rewired::ReInput_UnityTouch*  gFDNhAaRROIvmPjjtJJhpccdtPJO;

 __declspec(property(get=get_multiTouchEnabled, put=set_multiTouchEnabled)) bool  multiTouchEnabled;

 __declspec(property(get=get_simulateMouseWithTouches, put=set_simulateMouseWithTouches)) bool  simulateMouseWithTouches;

 __declspec(property(get=get_touchCount)) int32_t  touchCount;

 __declspec(property(get=get_touches)) ::ArrayW<::UnityEngine::Touch>  touches;

/// @brief Method GetTouch, addr 0x181883c10, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Touch GetTouch(int32_t  index) ;

static inline ::Rewired::ReInput_UnityTouch* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Rewired::ReInput_UnityTouch* getStaticF_gFDNhAaRROIvmPjjtJJhpccdtPJO() ;

/// @brief Method get_multiTouchEnabled, addr 0x181883c30, size 0x10, virtual false, abstract: false, final false
inline bool get_multiTouchEnabled() ;

/// @brief Method get_simulateMouseWithTouches, addr 0x181883c40, size 0x10, virtual false, abstract: false, final false
inline bool get_simulateMouseWithTouches() ;

/// @brief Method get_touchCount, addr 0x181883c50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_touchCount() ;

/// @brief Method get_touches, addr 0x181883c60, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Touch> get_touches() ;

static inline void setStaticF_gFDNhAaRROIvmPjjtJJhpccdtPJO(::Rewired::ReInput_UnityTouch*  value) ;

/// @brief Method set_multiTouchEnabled, addr 0x181883c70, size 0x10, virtual false, abstract: false, final false
inline void set_multiTouchEnabled(bool  value) ;

/// @brief Method set_simulateMouseWithTouches, addr 0x181883c80, size 0x10, virtual false, abstract: false, final false
inline void set_simulateMouseWithTouches(bool  value) ;

/// @brief Method xJQfeSsCWsUMyNzPWntcAVGROnjh, addr 0x181883c90, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_UnityTouch* xJQfeSsCWsUMyNzPWntcAVGROnjh() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput_UnityTouch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput_UnityTouch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput_UnityTouch(ReInput_UnityTouch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput_UnityTouch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput_UnityTouch(ReInput_UnityTouch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2205};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ReInput_UnityTouch) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/rpPewHaUdxWXHuOjVjaJGYrVlsVkA/wYLxRNkBkMbLQjNZyywgeAFqmnpe
class CORDL_TYPE rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Rewired::rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Func_1<::StringW>*  __9__12_0;

/// @brief Field <>9__12_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_1, put=setStaticF___9__12_1)) ::System::Func_1<bool>*  __9__12_1;

/// @brief Field <>9__12_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_2, put=setStaticF___9__12_2)) ::System::Func_1<bool>*  __9__12_2;

/// @brief Field <>9__12_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_3, put=setStaticF___9__12_3)) ::System::Func_1<int32_t>*  __9__12_3;

/// @brief Field <>9__12_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_4, put=setStaticF___9__12_4)) ::System::Func_1<float_t>*  __9__12_4;

/// @brief Field <>9__12_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_5, put=setStaticF___9__12_5)) ::System::Func_1<bool>*  __9__12_5;

static inline ::Rewired::rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe* New_ctor() ;

/// @brief Method PsxZBmVDMqcUMpPMPvfkbkFNaixX, addr 0x18188a810, size 0x10, virtual false, abstract: false, final false
inline bool PsxZBmVDMqcUMpPMPvfkbkFNaixX() ;

/// @brief Method UzJCOjDrBGdPfnOEZJxeBZwgMrkW, addr 0x18188a820, size 0x30, virtual false, abstract: false, final false
inline ::StringW UzJCOjDrBGdPfnOEZJxeBZwgMrkW() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method aDhSwNgkbJLzDxxAfraaWoUKJqxp, addr 0x18188a890, size 0x10, virtual false, abstract: false, final false
inline int32_t aDhSwNgkbJLzDxxAfraaWoUKJqxp() ;

/// @brief Method afQhhWqrZklUaYmSROmIymcmyusd, addr 0x18188a8a0, size 0x10, virtual false, abstract: false, final false
inline float_t afQhhWqrZklUaYmSROmIymcmyusd() ;

static inline ::Rewired::rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe* getStaticF___9() ;

static inline ::System::Func_1<::StringW>* getStaticF___9__12_0() ;

static inline ::System::Func_1<bool>* getStaticF___9__12_1() ;

static inline ::System::Func_1<bool>* getStaticF___9__12_2() ;

static inline ::System::Func_1<int32_t>* getStaticF___9__12_3() ;

static inline ::System::Func_1<float_t>* getStaticF___9__12_4() ;

static inline ::System::Func_1<bool>* getStaticF___9__12_5() ;

/// @brief Method ozEBetDuPiRufKygCQZdJOaVEKteA, addr 0x18188a8b0, size 0x10, virtual false, abstract: false, final false
inline bool ozEBetDuPiRufKygCQZdJOaVEKteA() ;

/// @brief Method rfHTJPTKgfkRRhGvRwAkpdQzcpme, addr 0x18188a8c0, size 0x20, virtual false, abstract: false, final false
inline bool rfHTJPTKgfkRRhGvRwAkpdQzcpme() ;

static inline void setStaticF___9(::Rewired::rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe*  value) ;

static inline void setStaticF___9__12_0(::System::Func_1<::StringW>*  value) ;

static inline void setStaticF___9__12_1(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__12_2(::System::Func_1<bool>*  value) ;

static inline void setStaticF___9__12_3(::System::Func_1<int32_t>*  value) ;

static inline void setStaticF___9__12_4(::System::Func_1<float_t>*  value) ;

static inline void setStaticF___9__12_5(::System::Func_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe(rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe(rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2206};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Utils.Classes.Utility.ValueWatcher, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/rpPewHaUdxWXHuOjVjaJGYrVlsVkA
class CORDL_TYPE ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA : public ::System::Object {
public:
// Declarations
using wYLxRNkBkMbLQjNZyywgeAFqmnpe = ::Rewired::rpPewHaUdxWXHuOjVjaJGYrVlsVkA_ReInput_wYLxRNkBkMbLQjNZyywgeAFqmnpe;

 __declspec(property(get=CBRjXVAosQMxLuezGpwlWCUbfeXf)) int32_t  GSBndEZLjGqQReFpeTSFUiTHNCmC;

/// @brief Field IHFNWINwrdgrKPpAMiIZeRxOelJmA, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_IHFNWINwrdgrKPpAMiIZeRxOelJmA, put=__cordl_internal_set_IHFNWINwrdgrKPpAMiIZeRxOelJmA)) ::ArrayW<::Rewired::Utils::Classes::Utility::ValueWatcher*>  IHFNWINwrdgrKPpAMiIZeRxOelJmA;

/// @brief Field MAWBzZoGuJMubcIyCxHzVyifeAbn, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MAWBzZoGuJMubcIyCxHzVyifeAbn, put=__cordl_internal_set_MAWBzZoGuJMubcIyCxHzVyifeAbn)) ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  MAWBzZoGuJMubcIyCxHzVyifeAbn;

/// @brief Field TRfyGdcpqZUzfjqzmRbNdEMluwrf, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_TRfyGdcpqZUzfjqzmRbNdEMluwrf, put=__cordl_internal_set_TRfyGdcpqZUzfjqzmRbNdEMluwrf)) ::Rewired::Utils::Classes::Utility::ValueWatcher_1<::StringW>*  TRfyGdcpqZUzfjqzmRbNdEMluwrf;

/// @brief Field TxybpqirvJHIglUXUgLPzZJhggUh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_TxybpqirvJHIglUXUgLPzZJhggUh, put=__cordl_internal_set_TxybpqirvJHIglUXUgLPzZJhggUh)) ::Rewired::Utils::Classes::Utility::ValueWatcher_1<float_t>*  TxybpqirvJHIglUXUgLPzZJhggUh;

/// @brief Field UxOOKPKNENjPZAokJXiAvKtdhbFfA, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_UxOOKPKNENjPZAokJXiAvKtdhbFfA, put=__cordl_internal_set_UxOOKPKNENjPZAokJXiAvKtdhbFfA)) ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  UxOOKPKNENjPZAokJXiAvKtdhbFfA;

/// @brief Field gZEkztAXRvQmNROrjONipllGxcsM, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gZEkztAXRvQmNROrjONipllGxcsM, put=__cordl_internal_set_gZEkztAXRvQmNROrjONipllGxcsM)) ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  gZEkztAXRvQmNROrjONipllGxcsM;

/// @brief Field gfZgmrDdTpvAHmwOIjMNKgFmIiiJA, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gfZgmrDdTpvAHmwOIjMNKgFmIiiJA, put=__cordl_internal_set_gfZgmrDdTpvAHmwOIjMNKgFmIiiJA)) ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  gfZgmrDdTpvAHmwOIjMNKgFmIiiJA;

/// @brief Field opJJgPZalNkvlcusdkXzYbTLDsvGA, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_opJJgPZalNkvlcusdkXzYbTLDsvGA, put=__cordl_internal_set_opJJgPZalNkvlcusdkXzYbTLDsvGA)) ::Rewired::Utils::Classes::Utility::ValueWatcher_1<int32_t>*  opJJgPZalNkvlcusdkXzYbTLDsvGA;

/// @brief Field peKTtKflALflBZfzFFqzdGOfJFRc, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_peKTtKflALflBZfzFFqzdGOfJFRc, put=__cordl_internal_set_peKTtKflALflBZfzFFqzdGOfJFRc)) int32_t  peKTtKflALflBZfzFFqzdGOfJFRc;

/// @brief Field woeEpdLsOujnZRntIWUxXfElglchA, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_woeEpdLsOujnZRntIWUxXfElglchA, put=__cordl_internal_set_woeEpdLsOujnZRntIWUxXfElglchA)) ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  woeEpdLsOujnZRntIWUxXfElglchA;

/// @brief Method CBRjXVAosQMxLuezGpwlWCUbfeXf, addr 0x1803d7410, size 0x10, virtual false, abstract: false, final false
inline int32_t CBRjXVAosQMxLuezGpwlWCUbfeXf() ;

static inline ::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA* New_ctor() ;

/// @brief Method ZlZuMxBnYXhmUaKEoectFLhnmlLoA, addr 0x181889c90, size 0x80, virtual false, abstract: false, final false
inline void ZlZuMxBnYXhmUaKEoectFLhnmlLoA() ;

constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::ValueWatcher*> const& __cordl_internal_get_IHFNWINwrdgrKPpAMiIZeRxOelJmA() const;

constexpr ::ArrayW<::Rewired::Utils::Classes::Utility::ValueWatcher*>& __cordl_internal_get_IHFNWINwrdgrKPpAMiIZeRxOelJmA() ;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>* const& __cordl_internal_get_MAWBzZoGuJMubcIyCxHzVyifeAbn() const;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*& __cordl_internal_get_MAWBzZoGuJMubcIyCxHzVyifeAbn() ;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<::StringW>* const& __cordl_internal_get_TRfyGdcpqZUzfjqzmRbNdEMluwrf() const;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<::StringW>*& __cordl_internal_get_TRfyGdcpqZUzfjqzmRbNdEMluwrf() ;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<float_t>* const& __cordl_internal_get_TxybpqirvJHIglUXUgLPzZJhggUh() const;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<float_t>*& __cordl_internal_get_TxybpqirvJHIglUXUgLPzZJhggUh() ;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>* const& __cordl_internal_get_UxOOKPKNENjPZAokJXiAvKtdhbFfA() const;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*& __cordl_internal_get_UxOOKPKNENjPZAokJXiAvKtdhbFfA() ;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>* const& __cordl_internal_get_gZEkztAXRvQmNROrjONipllGxcsM() const;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*& __cordl_internal_get_gZEkztAXRvQmNROrjONipllGxcsM() ;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>* const& __cordl_internal_get_gfZgmrDdTpvAHmwOIjMNKgFmIiiJA() const;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*& __cordl_internal_get_gfZgmrDdTpvAHmwOIjMNKgFmIiiJA() ;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<int32_t>* const& __cordl_internal_get_opJJgPZalNkvlcusdkXzYbTLDsvGA() const;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<int32_t>*& __cordl_internal_get_opJJgPZalNkvlcusdkXzYbTLDsvGA() ;

constexpr int32_t const& __cordl_internal_get_peKTtKflALflBZfzFFqzdGOfJFRc() const;

constexpr int32_t& __cordl_internal_get_peKTtKflALflBZfzFFqzdGOfJFRc() ;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>* const& __cordl_internal_get_woeEpdLsOujnZRntIWUxXfElglchA() const;

constexpr ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*& __cordl_internal_get_woeEpdLsOujnZRntIWUxXfElglchA() ;

constexpr void __cordl_internal_set_IHFNWINwrdgrKPpAMiIZeRxOelJmA(::ArrayW<::Rewired::Utils::Classes::Utility::ValueWatcher*>  value) ;

constexpr void __cordl_internal_set_MAWBzZoGuJMubcIyCxHzVyifeAbn(::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  value) ;

constexpr void __cordl_internal_set_TRfyGdcpqZUzfjqzmRbNdEMluwrf(::Rewired::Utils::Classes::Utility::ValueWatcher_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_TxybpqirvJHIglUXUgLPzZJhggUh(::Rewired::Utils::Classes::Utility::ValueWatcher_1<float_t>*  value) ;

constexpr void __cordl_internal_set_UxOOKPKNENjPZAokJXiAvKtdhbFfA(::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  value) ;

constexpr void __cordl_internal_set_gZEkztAXRvQmNROrjONipllGxcsM(::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  value) ;

constexpr void __cordl_internal_set_gfZgmrDdTpvAHmwOIjMNKgFmIiiJA(::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  value) ;

constexpr void __cordl_internal_set_opJJgPZalNkvlcusdkXzYbTLDsvGA(::Rewired::Utils::Classes::Utility::ValueWatcher_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_peKTtKflALflBZfzFFqzdGOfJFRc(int32_t  value) ;

constexpr void __cordl_internal_set_woeEpdLsOujnZRntIWUxXfElglchA(::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x181889d10, size 0x870, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method wjYRSNeagdGhyfvySgADgRNASWPDA, addr 0x18188a580, size 0x90, virtual false, abstract: false, final false
inline void wjYRSNeagdGhyfvySgADgRNASWPDA() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA(ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA(ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2207};

/// @brief Field woeEpdLsOujnZRntIWUxXfElglchA, offset: 0x10, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  ___woeEpdLsOujnZRntIWUxXfElglchA;

/// @brief Field gZEkztAXRvQmNROrjONipllGxcsM, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  ___gZEkztAXRvQmNROrjONipllGxcsM;

/// @brief Field MAWBzZoGuJMubcIyCxHzVyifeAbn, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  ___MAWBzZoGuJMubcIyCxHzVyifeAbn;

/// @brief Field gfZgmrDdTpvAHmwOIjMNKgFmIiiJA, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  ___gfZgmrDdTpvAHmwOIjMNKgFmIiiJA;

/// @brief Field opJJgPZalNkvlcusdkXzYbTLDsvGA, offset: 0x30, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::ValueWatcher_1<int32_t>*  ___opJJgPZalNkvlcusdkXzYbTLDsvGA;

/// @brief Field TxybpqirvJHIglUXUgLPzZJhggUh, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::ValueWatcher_1<float_t>*  ___TxybpqirvJHIglUXUgLPzZJhggUh;

/// @brief Field TRfyGdcpqZUzfjqzmRbNdEMluwrf, offset: 0x40, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::ValueWatcher_1<::StringW>*  ___TRfyGdcpqZUzfjqzmRbNdEMluwrf;

/// @brief Field UxOOKPKNENjPZAokJXiAvKtdhbFfA, offset: 0x48, size: 0x8, def value: None
 ::Rewired::Utils::Classes::Utility::ValueWatcher_1<bool>*  ___UxOOKPKNENjPZAokJXiAvKtdhbFfA;

/// @brief Field peKTtKflALflBZfzFFqzdGOfJFRc, offset: 0x50, size: 0x4, def value: None
 int32_t  ___peKTtKflALflBZfzFFqzdGOfJFRc;

/// @brief Field IHFNWINwrdgrKPpAMiIZeRxOelJmA, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::Rewired::Utils::Classes::Utility::ValueWatcher*>  ___IHFNWINwrdgrKPpAMiIZeRxOelJmA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA, ___woeEpdLsOujnZRntIWUxXfElglchA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA, ___gZEkztAXRvQmNROrjONipllGxcsM) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA, ___MAWBzZoGuJMubcIyCxHzVyifeAbn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA, ___gfZgmrDdTpvAHmwOIjMNKgFmIiiJA) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA, ___opJJgPZalNkvlcusdkXzYbTLDsvGA) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA, ___TxybpqirvJHIglUXUgLPzZJhggUh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA, ___TRfyGdcpqZUzfjqzmRbNdEMluwrf) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA, ___UxOOKPKNENjPZAokJXiAvKtdhbFfA) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA, ___peKTtKflALflBZfzFFqzdGOfJFRc) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA, ___IHFNWINwrdgrKPpAMiIZeRxOelJmA) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA) == 0x60, "Size mismatch!");

} // namespace end def Rewired
// Dependencies System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput/RQLhKTngKDYrTeABCdLlsdFYiTLL
class CORDL_TYPE ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Rewired::ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL*  __9;

/// @brief Field <>9__240_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__240_0, put=setStaticF___9__240_0)) ::System::Func_1<bool>*  __9__240_0;

/// @brief Method BYKaufevzockaNEEzKnENgDippmDA, addr 0x1818837d0, size 0x40, virtual false, abstract: false, final false
inline void BYKaufevzockaNEEzKnENgDippmDA(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method IjFwloCkixWgyJgDcfZKLjXkIDig, addr 0x181883810, size 0x40, virtual false, abstract: false, final false
inline void IjFwloCkixWgyJgDcfZKLjXkIDig(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL* New_ctor() ;

/// @brief Method WuUJEkuxeUhsWUezzegZqisKNNVP, addr 0x181883850, size 0x40, virtual false, abstract: false, final false
inline void WuUJEkuxeUhsWUezzegZqisKNNVP(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method YYEldstquKhecetaYiQpbRItflAR, addr 0x181883890, size 0x40, virtual false, abstract: false, final false
inline void YYEldstquKhecetaYiQpbRItflAR(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method cOeUJjrXTCoVsnPmNiKoagEYBJFIA, addr 0x181883910, size 0x40, virtual false, abstract: false, final false
inline void cOeUJjrXTCoVsnPmNiKoagEYBJFIA(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL* getStaticF___9() ;

static inline ::System::Func_1<bool>* getStaticF___9__240_0() ;

/// @brief Method hHyBoyrEjxbGAAiZKOTZgymwuOYBb, addr 0x181883950, size 0x40, virtual false, abstract: false, final false
inline void hHyBoyrEjxbGAAiZKOTZgymwuOYBb(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method nekhYgAZVOztgMKyaPDnuNOgNoIY, addr 0x181883990, size 0x40, virtual false, abstract: false, final false
inline void nekhYgAZVOztgMKyaPDnuNOgNoIY(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method rOFiSaSWgTvCjCMpkUitSenjeFqaA, addr 0x1818839d0, size 0x40, virtual false, abstract: false, final false
inline void rOFiSaSWgTvCjCMpkUitSenjeFqaA(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

static inline void setStaticF___9(::Rewired::ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL*  value) ;

static inline void setStaticF___9__240_0(::System::Func_1<bool>*  value) ;

/// @brief Method sgIrCvmlHwKjzBXgugyaiQOhGspk, addr 0x181883a10, size 0x40, virtual false, abstract: false, final false
inline bool sgIrCvmlHwKjzBXgugyaiQOhGspk() ;

/// @brief Method wkosEqCVLoOzNuLPpBvsQNoooEIB, addr 0x181883a50, size 0x40, virtual false, abstract: false, final false
inline void wkosEqCVLoOzNuLPpBvsQNoooEIB(::System::Exception*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL(ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL(ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2208};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL) == 0x10, "Size mismatch!");

} // namespace end def Rewired
// Dependencies Rewired.Platforms.EditorPlatform, Rewired.Platforms.Platform, Rewired.Platforms.WebplayerPlatform, Rewired.UpdateLoopType, System.Object
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ReInput
class CORDL_TYPE ReInput : public ::System::Object {
public:
// Declarations
using ConfigHelper = ::Rewired::ReInput_ConfigHelper;

using ControllerHelper = ::Rewired::ReInput_ControllerHelper;

using GlyphHelper = ::Rewired::ReInput_GlyphHelper;

using LocalizationHelper = ::Rewired::ReInput_LocalizationHelper;

using MappingHelper = ::Rewired::ReInput_MappingHelper;

using OTQjebRZYlpFkdIetXjwvnEMmlUA = ::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA;

using PlayerHelper = ::Rewired::ReInput_PlayerHelper;

using RQLhKTngKDYrTeABCdLlsdFYiTLL = ::Rewired::ReInput_RQLhKTngKDYrTeABCdLlsdFYiTLL;

using TimeHelper = ::Rewired::ReInput_TimeHelper;

using UnityTouch = ::Rewired::ReInput_UnityTouch;

using rpPewHaUdxWXHuOjVjaJGYrVlsVkA = ::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA;

/// @brief Field AmUSSpEtcqdpvJxxswFjVejjxnq, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_AmUSSpEtcqdpvJxxswFjVejjxnq, put=setStaticF_AmUSSpEtcqdpvJxxswFjVejjxnq)) bool  AmUSSpEtcqdpvJxxswFjVejjxnq;

/// @brief Field AqaqNSJXTNFPROuCAOONIMoOljiM, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AqaqNSJXTNFPROuCAOONIMoOljiM, put=setStaticF_AqaqNSJXTNFPROuCAOONIMoOljiM)) ::Rewired::ReInput_TimeHelper*  AqaqNSJXTNFPROuCAOONIMoOljiM;

/// @brief Field DDKRewaTALmOloVLddAZLINTINjU, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DDKRewaTALmOloVLddAZLINTINjU, put=setStaticF_DDKRewaTALmOloVLddAZLINTINjU)) ::Rewired::Utils::SafeAction_1<::Rewired::ControllerStatusChangedEventArgs*>*  DDKRewaTALmOloVLddAZLINTINjU;

/// @brief Field DNmTrTLbFXZfBAwCvdNbGvkgzfL, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DNmTrTLbFXZfBAwCvdNbGvkgzfL, put=setStaticF_DNmTrTLbFXZfBAwCvdNbGvkgzfL)) bool  DNmTrTLbFXZfBAwCvdNbGvkgzfL;

/// @brief Field EEsihsknrqLadWqDRDdnCPfDCjVwA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EEsihsknrqLadWqDRDdnCPfDCjVwA, put=setStaticF_EEsihsknrqLadWqDRDdnCPfDCjVwA)) ::Rewired::ReInput_ConfigHelper*  EEsihsknrqLadWqDRDdnCPfDCjVwA;

/// @brief Field FuKjzEjLvnbjfbtgIhUCJtFvgDlcA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FuKjzEjLvnbjfbtgIhUCJtFvgDlcA, put=setStaticF_FuKjzEjLvnbjfbtgIhUCJtFvgDlcA)) ::Rewired::Data::ConfigVars*  FuKjzEjLvnbjfbtgIhUCJtFvgDlcA;

/// @brief Field GRMUAFznTPpVFbaSzCuDWQrpYipb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GRMUAFznTPpVFbaSzCuDWQrpYipb, put=setStaticF_GRMUAFznTPpVFbaSzCuDWQrpYipb)) ::Rewired::ReInput_PlayerHelper*  GRMUAFznTPpVFbaSzCuDWQrpYipb;

/// @brief Field KkcLfSiGqndKYXvNEejSGvYOepMAb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_KkcLfSiGqndKYXvNEejSGvYOepMAb, put=setStaticF_KkcLfSiGqndKYXvNEejSGvYOepMAb)) ::System::Action*  KkcLfSiGqndKYXvNEejSGvYOepMAb;

/// @brief Field LCwHQLDEnWUmUwstctWXbXpbuGcuA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LCwHQLDEnWUmUwstctWXbXpbuGcuA, put=setStaticF_LCwHQLDEnWUmUwstctWXbXpbuGcuA)) ::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA*  LCwHQLDEnWUmUwstctWXbXpbuGcuA;

/// @brief Field LIVztcrgTGnNSkNlIOtiRasXBZXl, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LIVztcrgTGnNSkNlIOtiRasXBZXl, put=setStaticF_LIVztcrgTGnNSkNlIOtiRasXBZXl)) ::Rewired::Platforms::Platform  LIVztcrgTGnNSkNlIOtiRasXBZXl;

/// @brief Field NVcuegdlRdvyvPzncKtotBZDjWjk, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_NVcuegdlRdvyvPzncKtotBZDjWjk, put=setStaticF_NVcuegdlRdvyvPzncKtotBZDjWjk)) bool  NVcuegdlRdvyvPzncKtotBZDjWjk;

/// @brief Field OAwAqSDNKSTdZIMHEaqtBCQGAFDiA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OAwAqSDNKSTdZIMHEaqtBCQGAFDiA, put=setStaticF_OAwAqSDNKSTdZIMHEaqtBCQGAFDiA)) ::UnityW<::Rewired::Data::ControllerDataFiles>  OAwAqSDNKSTdZIMHEaqtBCQGAFDiA;

/// @brief Field ORvhdAACbRgVSiHcsiSPcWkeoesLB, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ORvhdAACbRgVSiHcsiSPcWkeoesLB, put=setStaticF_ORvhdAACbRgVSiHcsiSPcWkeoesLB)) ::System::Action*  ORvhdAACbRgVSiHcsiSPcWkeoesLB;

/// @brief Field PDasHAwOgXKialEvYCCVKEqcFlweA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PDasHAwOgXKialEvYCCVKEqcFlweA, put=setStaticF_PDasHAwOgXKialEvYCCVKEqcFlweA)) ::GlobalNamespace::iBnOrSWQobsJCFvoFuqXUiRVYcrM*  PDasHAwOgXKialEvYCCVKEqcFlweA;

/// @brief Field PPkHWoVpdRvViXZOnsTESwBCOIlI, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PPkHWoVpdRvViXZOnsTESwBCOIlI, put=setStaticF_PPkHWoVpdRvViXZOnsTESwBCOIlI)) ::UnityW<::Rewired::Data::UserDataStore>  PPkHWoVpdRvViXZOnsTESwBCOIlI;

/// @brief Field PSsbBzdjAqNrQqTsvGyPTQASghEcA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PSsbBzdjAqNrQqTsvGyPTQASghEcA, put=setStaticF_PSsbBzdjAqNrQqTsvGyPTQASghEcA)) ::Rewired::Utils::SafeAction_1<::Rewired::ControllerStatusChangedEventArgs*>*  PSsbBzdjAqNrQqTsvGyPTQASghEcA;

/// @brief Field SrqZCabtqKTQGrBILGbZbknaDKGQA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SrqZCabtqKTQGrBILGbZbknaDKGQA, put=setStaticF_SrqZCabtqKTQGrBILGbZbknaDKGQA)) ::Rewired::Utils::SafeAction*  SrqZCabtqKTQGrBILGbZbknaDKGQA;

/// @brief Field TQVabQwbAhbuHGjitMtRhXpgXgVeA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TQVabQwbAhbuHGjitMtRhXpgXgVeA, put=setStaticF_TQVabQwbAhbuHGjitMtRhXpgXgVeA)) ::StringW  TQVabQwbAhbuHGjitMtRhXpgXgVeA;

/// @brief Field TazuockDnhrttUNEuyaAAWguhiXl, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TazuockDnhrttUNEuyaAAWguhiXl, put=setStaticF_TazuockDnhrttUNEuyaAAWguhiXl)) int32_t  TazuockDnhrttUNEuyaAAWguhiXl;

/// @brief Field UGMfnBvfbnndObEZDZwShAXLUXpK, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UGMfnBvfbnndObEZDZwShAXLUXpK, put=setStaticF_UGMfnBvfbnndObEZDZwShAXLUXpK)) ::System::Action_1<bool>*  UGMfnBvfbnndObEZDZwShAXLUXpK;

/// @brief Field WGVVALBvgybHSQdpESPgclVuSnLj, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WGVVALBvgybHSQdpESPgclVuSnLj, put=setStaticF_WGVVALBvgybHSQdpESPgclVuSnLj)) ::GlobalNamespace::SxwAKlGxfwTiLpPYZbEjtHsOIaxx*  WGVVALBvgybHSQdpESPgclVuSnLj;

/// @brief Field XJRLKAlSpnYXLHdDXiHAFCoBTndjA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_XJRLKAlSpnYXLHdDXiHAFCoBTndjA, put=setStaticF_XJRLKAlSpnYXLHdDXiHAFCoBTndjA)) ::System::Action_1<bool>*  XJRLKAlSpnYXLHdDXiHAFCoBTndjA;

/// @brief Field XbvxKqgtDmBnXMvPpRbLCanPuqdB, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_XbvxKqgtDmBnXMvPpRbLCanPuqdB, put=setStaticF_XbvxKqgtDmBnXMvPpRbLCanPuqdB)) ::Rewired::ReInput_UnityTouch*  XbvxKqgtDmBnXMvPpRbLCanPuqdB;

/// @brief Field YACaXNXCNLgvEkhTYZWgBbmNBSMaA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_YACaXNXCNLgvEkhTYZWgBbmNBSMaA, put=setStaticF_YACaXNXCNLgvEkhTYZWgBbmNBSMaA)) ::Rewired::Interfaces::IControllerAssigner*  YACaXNXCNLgvEkhTYZWgBbmNBSMaA;

/// @brief Field YLFqjWFElGFjvRuvLlzkcVctdgtE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_YLFqjWFElGFjvRuvLlzkcVctdgtE, put=setStaticF_YLFqjWFElGFjvRuvLlzkcVctdgtE)) ::Rewired::ReInput_MappingHelper*  YLFqjWFElGFjvRuvLlzkcVctdgtE;

/// @brief Field YmAFwQaFhLbRhsgVmjVNfHIeDBKC, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_YmAFwQaFhLbRhsgVmjVNfHIeDBKC, put=setStaticF_YmAFwQaFhLbRhsgVmjVNfHIeDBKC)) ::Rewired::Platforms::EditorPlatform  YmAFwQaFhLbRhsgVmjVNfHIeDBKC;

/// @brief Field YuZRlWXKSUUtFdlMAeHvytYqgIqb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_YuZRlWXKSUUtFdlMAeHvytYqgIqb, put=setStaticF_YuZRlWXKSUUtFdlMAeHvytYqgIqb)) ::System::Action_1<::Rewired::UpdateLoopType>*  YuZRlWXKSUUtFdlMAeHvytYqgIqb;

/// @brief Field ZHblBDaeDZgpVcVbjMBxZuxFuOte, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ZHblBDaeDZgpVcVbjMBxZuxFuOte, put=setStaticF_ZHblBDaeDZgpVcVbjMBxZuxFuOte)) ::System::Action_1<::UnityEngine::FullScreenMode>*  ZHblBDaeDZgpVcVbjMBxZuxFuOte;

/// @brief Field _ApplicationFocusChangedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ApplicationFocusChangedEvent, put=setStaticF__ApplicationFocusChangedEvent)) ::System::Action_1<bool>*  _ApplicationFocusChangedEvent;

/// @brief Field _ApplicationPauseChangedEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__ApplicationPauseChangedEvent, put=setStaticF__ApplicationPauseChangedEvent)) ::System::Action_1<bool>*  _ApplicationPauseChangedEvent;

/// @brief Field _id, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__id, put=setStaticF__id)) int32_t  _id;

/// @brief Field aYrBFiQuaefadeLqYaGLQCjQZHkwA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_aYrBFiQuaefadeLqYaGLQCjQZHkwA, put=setStaticF_aYrBFiQuaefadeLqYaGLQCjQZHkwA)) ::Rewired::Platforms::WebplayerPlatform  aYrBFiQuaefadeLqYaGLQCjQZHkwA;

/// @brief Field absFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_absFrame, put=setStaticF_absFrame)) uint32_t  absFrame;

/// @brief Field beVJrGgBvzFSkEKObQQhDvbiyVCdc, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_beVJrGgBvzFSkEKObQQhDvbiyVCdc, put=setStaticF_beVJrGgBvzFSkEKObQQhDvbiyVCdc)) bool  beVJrGgBvzFSkEKObQQhDvbiyVCdc;

/// @brief Field cNMdyWccUfOfllmunqRekAUXqdJHb, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_cNMdyWccUfOfllmunqRekAUXqdJHb, put=setStaticF_cNMdyWccUfOfllmunqRekAUXqdJHb)) ::Rewired::UpdateLoopType  cNMdyWccUfOfllmunqRekAUXqdJHb;

/// @brief Field cYNVeXETMIGKMXAgtzozEAyDTguN, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_cYNVeXETMIGKMXAgtzozEAyDTguN, put=setStaticF_cYNVeXETMIGKMXAgtzozEAyDTguN)) bool  cYNVeXETMIGKMXAgtzozEAyDTguN;

/// @brief Field cYWDzAtGTrbHrpQGELhAgCnDWOyb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cYWDzAtGTrbHrpQGELhAgCnDWOyb, put=setStaticF_cYWDzAtGTrbHrpQGELhAgCnDWOyb)) ::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA*  cYWDzAtGTrbHrpQGELhAgCnDWOyb;

/// @brief Field currentFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_currentFrame, put=setStaticF_currentFrame)) uint32_t  currentFrame;

/// @brief Field dkbiUXcjTTbqUqQRcPhNihyBdKhgA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dkbiUXcjTTbqUqQRcPhNihyBdKhgA, put=setStaticF_dkbiUXcjTTbqUqQRcPhNihyBdKhgA)) ::Rewired::Utils::Classes::Utility::TimerAbs*  dkbiUXcjTTbqUqQRcPhNihyBdKhgA;

/// @brief Field eJflMcdEUBHloPECaNmuKuutbnWR, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_eJflMcdEUBHloPECaNmuKuutbnWR, put=setStaticF_eJflMcdEUBHloPECaNmuKuutbnWR)) ::Rewired::PlatformInputManager*  eJflMcdEUBHloPECaNmuKuutbnWR;

/// @brief Field eagJjbBFhBrCadhDxWfvBMaPZNEN, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_eagJjbBFhBrCadhDxWfvBMaPZNEN, put=setStaticF_eagJjbBFhBrCadhDxWfvBMaPZNEN)) bool  eagJjbBFhBrCadhDxWfvBMaPZNEN;

/// @brief Field gPZwAEDBqlMhCObvZVGqRNZVOyjj, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gPZwAEDBqlMhCObvZVGqRNZVOyjj, put=setStaticF_gPZwAEDBqlMhCObvZVGqRNZVOyjj)) ::System::Action_1<bool>*  gPZwAEDBqlMhCObvZVGqRNZVOyjj;

/// @brief Field hpXNymGQHdTBsmsQVaddCAYQHmLG, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_hpXNymGQHdTBsmsQVaddCAYQHmLG, put=setStaticF_hpXNymGQHdTBsmsQVaddCAYQHmLG)) ::Rewired::Data::UserData*  hpXNymGQHdTBsmsQVaddCAYQHmLG;

/// @brief Field iSaMxNzyoLgIEfLjrlqFXdZBTRRS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_iSaMxNzyoLgIEfLjrlqFXdZBTRRS, put=setStaticF_iSaMxNzyoLgIEfLjrlqFXdZBTRRS)) int32_t  iSaMxNzyoLgIEfLjrlqFXdZBTRRS;

/// @brief Field jRIygNNGgeDiJyTTvneaFLKjwUvv, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_jRIygNNGgeDiJyTTvneaFLKjwUvv, put=setStaticF_jRIygNNGgeDiJyTTvneaFLKjwUvv)) ::System::Action_1<::Rewired::UpdateLoopType>*  jRIygNNGgeDiJyTTvneaFLKjwUvv;

/// @brief Field letOPgLQBZLTTWmUVbRenFveDGrEA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_letOPgLQBZLTTWmUVbRenFveDGrEA, put=setStaticF_letOPgLQBZLTTWmUVbRenFveDGrEA)) ::GlobalNamespace::CtHdKMFzCRXTgyaDegxJEBJGblBAb*  letOPgLQBZLTTWmUVbRenFveDGrEA;

/// @brief Field lexUegoNTwOwBMfWLVlkWdyTaieN, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_lexUegoNTwOwBMfWLVlkWdyTaieN, put=setStaticF_lexUegoNTwOwBMfWLVlkWdyTaieN)) bool  lexUegoNTwOwBMfWLVlkWdyTaieN;

/// @brief Field meGTXXRmvAHIHROZGGizOSNtbYPV, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_meGTXXRmvAHIHROZGGizOSNtbYPV, put=setStaticF_meGTXXRmvAHIHROZGGizOSNtbYPV)) ::Rewired::Utils::SafeAction*  meGTXXRmvAHIHROZGGizOSNtbYPV;

/// @brief Field minRiEteoFelMISLAlzjeIKQglLmA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_minRiEteoFelMISLAlzjeIKQglLmA, put=setStaticF_minRiEteoFelMISLAlzjeIKQglLmA)) ::Rewired::ReInput_LocalizationHelper*  minRiEteoFelMISLAlzjeIKQglLmA;

/// @brief Field nKxZYQPLjsprwARflHEQEXjkbIXF, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_nKxZYQPLjsprwARflHEQEXjkbIXF, put=setStaticF_nKxZYQPLjsprwARflHEQEXjkbIXF)) int32_t  nKxZYQPLjsprwARflHEQEXjkbIXF;

/// @brief Field nzdLchwLUdByguNJNsiGvlbviRZl, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nzdLchwLUdByguNJNsiGvlbviRZl, put=setStaticF_nzdLchwLUdByguNJNsiGvlbviRZl)) ::System::Action_1<bool>*  nzdLchwLUdByguNJNsiGvlbviRZl;

/// @brief Field previousFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_previousFrame, put=setStaticF_previousFrame)) uint32_t  previousFrame;

/// @brief Field qtwpeAjeNCnMxxFIZWEDiYYfDyzm, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_qtwpeAjeNCnMxxFIZWEDiYYfDyzm, put=setStaticF_qtwpeAjeNCnMxxFIZWEDiYYfDyzm)) ::Rewired::Utils::SafeAction_1<::Rewired::ControllerStatusChangedEventArgs*>*  qtwpeAjeNCnMxxFIZWEDiYYfDyzm;

/// @brief Field uIMfDkLoXyEUPMfojGvFFctnEJfBb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_uIMfDkLoXyEUPMfojGvFFctnEJfBb, put=setStaticF_uIMfDkLoXyEUPMfojGvFFctnEJfBb)) ::System::Action_1<::Rewired::UpdateLoopType>*  uIMfDkLoXyEUPMfojGvFFctnEJfBb;

/// @brief Field uOglZsnpiAaYrLNzqSXdLfwBZmeg, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_uOglZsnpiAaYrLNzqSXdLfwBZmeg, put=setStaticF_uOglZsnpiAaYrLNzqSXdLfwBZmeg)) ::Rewired::Utils::SafeAction*  uOglZsnpiAaYrLNzqSXdLfwBZmeg;

/// @brief Field unscaledDeltaTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unscaledDeltaTime, put=setStaticF_unscaledDeltaTime)) double_t  unscaledDeltaTime;

/// @brief Field unscaledTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unscaledTime, put=setStaticF_unscaledTime)) double_t  unscaledTime;

/// @brief Field unscaledTimePrev, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unscaledTimePrev, put=setStaticF_unscaledTimePrev)) double_t  unscaledTimePrev;

/// @brief Field vCOEkWfRJqBXdsrxlWONWRwKFYal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_vCOEkWfRJqBXdsrxlWONWRwKFYal, put=setStaticF_vCOEkWfRJqBXdsrxlWONWRwKFYal)) ::GlobalNamespace::fIDBlwaEffvZlKwGsbfYddhFcgaWA*  vCOEkWfRJqBXdsrxlWONWRwKFYal;

/// @brief Field vfvRLHIAKzAtFXyxgcjoTCVsrUTI, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_vfvRLHIAKzAtFXyxgcjoTCVsrUTI, put=setStaticF_vfvRLHIAKzAtFXyxgcjoTCVsrUTI)) ::Rewired::ReInput_GlyphHelper*  vfvRLHIAKzAtFXyxgcjoTCVsrUTI;

/// @brief Field vxGIajvjeIJtfEsPiGHTAJybaMN, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_vxGIajvjeIJtfEsPiGHTAJybaMN, put=setStaticF_vxGIajvjeIJtfEsPiGHTAJybaMN)) ::Rewired::ReInput_ControllerHelper*  vxGIajvjeIJtfEsPiGHTAJybaMN;

/// @brief Field wRGGXQcHIQaMECyLALmSPMeAUPOBA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_wRGGXQcHIQaMECyLALmSPMeAUPOBA, put=setStaticF_wRGGXQcHIQaMECyLALmSPMeAUPOBA)) ::Rewired::Utils::SafeAction*  wRGGXQcHIQaMECyLALmSPMeAUPOBA;

/// @brief Field wdBEiJLDaPuGHabAEbrefpwpdPsxA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_wdBEiJLDaPuGHabAEbrefpwpdPsxA, put=setStaticF_wdBEiJLDaPuGHabAEbrefpwpdPsxA)) ::System::Action*  wdBEiJLDaPuGHabAEbrefpwpdPsxA;

/// @brief Field yzsXFFdEBlRnAoWsYsByZBUFfVEg, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_yzsXFFdEBlRnAoWsYsByZBUFfVEg, put=setStaticF_yzsXFFdEBlRnAoWsYsByZBUFfVEg)) ::Rewired::Utils::SafeAction*  yzsXFFdEBlRnAoWsYsByZBUFfVEg;

/// @brief Field zItEffcNwzHQbcYDkzeVKWFHEESG, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_zItEffcNwzHQbcYDkzeVKWFHEESG, put=setStaticF_zItEffcNwzHQbcYDkzeVKWFHEESG)) int32_t  zItEffcNwzHQbcYDkzeVKWFHEESG;

/// @brief Field zrmpEFIoiAFxqaYhjGwpWEItIsVlA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zrmpEFIoiAFxqaYhjGwpWEItIsVlA, put=setStaticF_zrmpEFIoiAFxqaYhjGwpWEItIsVlA)) ::UnityW<::Rewired::InputManager_Base>  zrmpEFIoiAFxqaYhjGwpWEItIsVlA;

/// @brief Method BeLvZuXRjhoskXRgwWREkMntnTry, addr 0x1819e65f0, size 0x1420, virtual false, abstract: false, final false
static inline void BeLvZuXRjhoskXRgwWREkMntnTry(::System::Func_2<::Rewired::Data::ConfigVars*,::System::Object*>*  _cordl_fixed_empty_name_whitespace, ::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj  _cordl_fixed_empty_name_whitespace_param_1, ::System::Action_1<::Rewired::Platforms::Platform>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method CGvObfpMbqSUUTTmCwgJBqNHfpTg, addr 0x1819e7a10, size 0xc0, virtual false, abstract: false, final false
static inline void CGvObfpMbqSUUTTmCwgJBqNHfpTg(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method CheckInitialized, addr 0x1819e7b60, size 0x50, virtual false, abstract: false, final false
static inline bool CheckInitialized() ;

/// @brief Method CheckInitialized, addr 0x1819e7ad0, size 0x90, virtual false, abstract: false, final false
static inline bool CheckInitialized(int32_t  reInputId) ;

/// @brief Method CheckRewiredVersionCompatibility, addr 0x1819e7bb0, size 0x1a0, virtual false, abstract: false, final false
static inline void CheckRewiredVersionCompatibility() ;

/// @brief Method DJDRpKxLUGfEqFFdTOoUXHovlnvHb, addr 0x1819e7d50, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Data::Mapping::IHardwareControllerTemplateMap* DJDRpKxLUGfEqFFdTOoUXHovlnvHb(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method EThyrYHCCDjcFyLxlHeWoiRrArjd, addr 0x1819e7db0, size 0xc0, virtual false, abstract: false, final false
static inline void EThyrYHCCDjcFyLxlHeWoiRrArjd(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method EXFvewUxdGRheadvscOZprOUIrcK, addr 0x1819e7e70, size 0x140, virtual false, abstract: false, final false
static inline void EXFvewUxdGRheadvscOZprOUIrcK(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method EditorUpdate, addr 0x1819e7fb0, size 0x60, virtual false, abstract: false, final false
static inline void EditorUpdate() ;

/// @brief Method EqMxmMzZoaoUsajItOgMMANzROQU, addr 0x1819e8010, size 0x190, virtual false, abstract: false, final false
static inline void EqMxmMzZoaoUsajItOgMMANzROQU(::Rewired::BridgedController*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method FAOSbNZMLAnegRgLDSNXPUNXIFrB, addr 0x1819e81a0, size 0xf0, virtual false, abstract: false, final false
static inline void FAOSbNZMLAnegRgLDSNXPUNXIFrB() ;

/// @brief Method FlobTQbeHwxFzcrAAIqyuaBjLDkKA, addr 0x1819e8290, size 0x140, virtual false, abstract: false, final false
static inline void FlobTQbeHwxFzcrAAIqyuaBjLDkKA(::Rewired::ControllerDisconnectedEventArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method FtoJyKxCJTeiiyaWngqrfeodGUDhA, addr 0x1819e83d0, size 0x60, virtual false, abstract: false, final false
static inline void FtoJyKxCJTeiiyaWngqrfeodGUDhA(::Rewired::ControllerStatusChangedEventArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method GRvFeysFOLyZWozMHTXrZPMzQlJD, addr 0x1819e8430, size 0x110, virtual false, abstract: false, final false
static inline void GRvFeysFOLyZWozMHTXrZPMzQlJD() ;

/// @brief Method GdghRWpjepbudLEmSLEfZyykKDjq, addr 0x1819e8540, size 0xb0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::fIDBlwaEffvZlKwGsbfYddhFcgaWA* GdghRWpjepbudLEmSLEfZyykKDjq() ;

/// @brief Method GetHardwareJoystickMap_InputManager, addr 0x1819e85f0, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::HardwareJoystickMap_InputManager* GetHardwareJoystickMap_InputManager(::Rewired::BridgedControllerHWInfo*  bridgedController) ;

/// @brief Method GetNewJoystickId, addr 0x1819e8640, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetNewJoystickId() ;

/// @brief Method GpsPLTXXZhQfdNAzGhqAoNqRjvLi, addr 0x1819e8690, size 0x30, virtual false, abstract: false, final false
static inline void GpsPLTXXZhQfdNAzGhqAoNqRjvLi(::StringW  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method HandleCallbackException, addr 0x1819e86c0, size 0xb0, virtual false, abstract: false, final false
static inline void HandleCallbackException(::StringW  source, ::System::Exception*  exception) ;

/// @brief Method HandleExternException, addr 0x1819e8770, size 0x40, virtual false, abstract: false, final false
static inline void HandleExternException(::StringW  source, ::System::Exception*  exception) ;

/// @brief Method HandleExternalInterfaceException, addr 0x1819e87b0, size 0xb0, virtual false, abstract: false, final false
static inline void HandleExternalInterfaceException(::StringW  source, ::System::Exception*  exception) ;

/// @brief Method ICeByAadsGdJDMFitoDSDCHhDWxac, addr 0x1819e8860, size 0x990, virtual false, abstract: false, final false
static inline void ICeByAadsGdJDMFitoDSDCHhDWxac() ;

/// @brief Method IjrFcUefpNwdFKqVVcJZZhGUyiBIA, addr 0x1819e91f0, size 0x2f0, virtual false, abstract: false, final false
static inline void IjrFcUefpNwdFKqVVcJZZhGUyiBIA() ;

/// @brief Method IsInputAllowed, addr 0x1819e94e0, size 0x190, virtual false, abstract: false, final false
static inline bool IsInputAllowed(::Rewired::ControllerType  controllerType) ;

/// @brief Method IsWmsiVIRDYnRBWLlQSSnUnvrLMg, addr 0x1819e9670, size 0xf10, virtual false, abstract: false, final false
static inline void IsWmsiVIRDYnRBWLlQSSnUnvrLMg(::Rewired::InputManager_Base*  _cordl_fixed_empty_name_whitespace, ::System::Func_2<::Rewired::Data::ConfigVars*,::System::Object*>*  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Data::ConfigVars*  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Data::ControllerDataFiles*  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::Data::UserData*  _cordl_fixed_empty_name_whitespace_param_4, ::System::Func_1<::Rewired::Utils::UnityTools_LpYYlrQWsVFMrljjfmaCuXMaWQj>*  _cordl_fixed_empty_name_whitespace_param_5, ::System::Action_1<::Rewired::Platforms::Platform>*  _cordl_fixed_empty_name_whitespace_param_6, ::System::Action_1<::Rewired::InputManager_Base_bNLQCfEdFBnhyaWgEhnweLQGFlVK>*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method KQhHPJmulVuwFGaffpHbzKqabYqB, addr 0x1819ea580, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Data::Mapping::IHardwareControllerTemplateMap* KQhHPJmulVuwFGaffpHbzKqabYqB(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method LKoDSAuhUIYtGqElziWkXkpiWHLr, addr 0x1819ea5e0, size 0x70, virtual false, abstract: false, final false
static inline void LKoDSAuhUIYtGqElziWkXkpiWHLr() ;

/// @brief Method MBLWqbAAdBpSsvqbycmCKYeSfmUe, addr 0x1819ea650, size 0x280, virtual false, abstract: false, final false
static inline void MBLWqbAAdBpSsvqbycmCKYeSfmUe() ;

/// @brief Method NjviXARMghtEJIUpcgTUcZxedayL, addr 0x1819ea8d0, size 0x50, virtual false, abstract: false, final false
static inline void NjviXARMghtEJIUpcgTUcZxedayL(::Rewired::UpdateControllerInfoEventArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method NwJDARcEHVBNhWgZkaoUONDxiJeKA, addr 0x1819ea920, size 0xa0, virtual false, abstract: false, final false
static inline void NwJDARcEHVBNhWgZkaoUONDxiJeKA(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method OJtJLzgKypMGcDMgfWgYgSLNSEgq, addr 0x1819ea9c0, size 0xd0, virtual false, abstract: false, final false
static inline void OJtJLzgKypMGcDMgfWgYgSLNSEgq() ;

/// @brief Method OUctvpAwxEoEZnqqHsGwaRRvxmcB, addr 0x1819eaa90, size 0x70, virtual false, abstract: false, final false
static inline bool OUctvpAwxEoEZnqqHsGwaRRvxmcB() ;

/// @brief Method QFHkpZMmfWEdPtGrMPvrGNJdExmI, addr 0x1819eab00, size 0x240, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IList_1<::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA*>* QFHkpZMmfWEdPtGrMPvrGNJdExmI(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Reset, addr 0x1819ead40, size 0xa0, virtual false, abstract: false, final false
static inline void Reset() ;

/// @brief Method RwiMjXccqWeBJsMmpDWWFBpvxmXF, addr 0x1819eade0, size 0x260, virtual false, abstract: false, final false
static inline void RwiMjXccqWeBJsMmpDWWFBpvxmXF() ;

/// @brief Method SMRXtUNrkjSTBTKYFRwFsxqHjMDo, addr 0x1819eb040, size 0xa0, virtual false, abstract: false, final false
static inline void SMRXtUNrkjSTBTKYFRwFsxqHjMDo(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SUdZpUZiRLDRGliCEPPrjAhYasNs, addr 0x1819eb0e0, size 0xb0, virtual false, abstract: false, final false
static inline void SUdZpUZiRLDRGliCEPPrjAhYasNs() ;

/// @brief Method UOgLcJJJwBpnoOCWXeAwbQITRfXA, addr 0x1819eb190, size 0x60, virtual false, abstract: false, final false
static inline void UOgLcJJJwBpnoOCWXeAwbQITRfXA() ;

/// @brief Method Update, addr 0x1819eb1f0, size 0x80, virtual false, abstract: false, final false
static inline void Update() ;

/// @brief Method WRYxDoybeNxDegfvnLpnRRYPVuxJ, addr 0x1819eb270, size 0x70, virtual false, abstract: false, final false
static inline void WRYxDoybeNxDegfvnLpnRRYPVuxJ() ;

/// @brief Method YxjwmvqIRRWsVoweXgfzeYrLBqiC, addr 0x1819eb2e0, size 0xa0, virtual false, abstract: false, final false
static inline void YxjwmvqIRRWsVoweXgfzeYrLBqiC(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZFOjjTambrTgCMHoMFkJKDUBlmrs, addr 0x1819eb380, size 0x150, virtual false, abstract: false, final false
static inline void ZFOjjTambrTgCMHoMFkJKDUBlmrs() ;

/// @brief Method ZMuDHwbVbMhFGQSRMMDSYnRabZHtA, addr 0x1819eb4d0, size 0xd0, virtual false, abstract: false, final false
static inline void ZMuDHwbVbMhFGQSRMMDSYnRabZHtA(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ZdBIJcvEFHDrIszTpInAfvtkdJJt, addr 0x1819eb5a0, size 0x60, virtual false, abstract: false, final false
static inline void ZdBIJcvEFHDrIszTpInAfvtkdJJt(::Rewired::ControllerStatusChangedEventArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method aCMpyySHtFVmRJyemarhtBrZEJq, addr 0x1819ebda0, size 0x60, virtual false, abstract: false, final false
static inline void aCMpyySHtFVmRJyemarhtBrZEJq(::Rewired::ControllerStatusChangedEventArgs*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method add_ApplicationFocusChangedEvent, addr 0x1819ebe00, size 0xf0, virtual false, abstract: false, final false
static inline void add_ApplicationFocusChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method add_ApplicationFullScreenModeChangedEvent, addr 0x1819ebef0, size 0xf0, virtual false, abstract: false, final false
static inline void add_ApplicationFullScreenModeChangedEvent(::System::Action_1<::UnityEngine::FullScreenMode>*  value) ;

/// @brief Method add_ApplicationIsFullScreenChangedEvent, addr 0x1819ebfe0, size 0xf0, virtual false, abstract: false, final false
static inline void add_ApplicationIsFullScreenChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method add_ApplicationPauseChangedEvent, addr 0x1819ec0d0, size 0xf0, virtual false, abstract: false, final false
static inline void add_ApplicationPauseChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method add_ApplicationRunInBackgroundChangedEvent, addr 0x1819ec1c0, size 0xf0, virtual false, abstract: false, final false
static inline void add_ApplicationRunInBackgroundChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method add_BeforeTimeManagerUpdateEvent, addr 0x1819ec2b0, size 0xf0, virtual false, abstract: false, final false
static inline void add_BeforeTimeManagerUpdateEvent(::System::Action_1<::Rewired::UpdateLoopType>*  value) ;

/// @brief Method add_ControllerConnectedEvent, addr 0x1819ec3a0, size 0x80, virtual false, abstract: false, final false
static inline void add_ControllerConnectedEvent(::System::Action_1<::Rewired::ControllerStatusChangedEventArgs*>*  value) ;

/// @brief Method add_ControllerDisconnectedEvent, addr 0x1819ec420, size 0x80, virtual false, abstract: false, final false
static inline void add_ControllerDisconnectedEvent(::System::Action_1<::Rewired::ControllerStatusChangedEventArgs*>*  value) ;

/// @brief Method add_ControllerPreDisconnectEvent, addr 0x1819ec4a0, size 0x80, virtual false, abstract: false, final false
static inline void add_ControllerPreDisconnectEvent(::System::Action_1<::Rewired::ControllerStatusChangedEventArgs*>*  value) ;

/// @brief Method add_EarlyUpdateEvent, addr 0x1819ec520, size 0xe0, virtual false, abstract: false, final false
static inline void add_EarlyUpdateEvent(::System::Action*  value) ;

/// @brief Method add_EditorPauseChangedEvent, addr 0x1819ec600, size 0xf0, virtual false, abstract: false, final false
static inline void add_EditorPauseChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method add_EditorRecompileEvent, addr 0x1819ec6f0, size 0x80, virtual false, abstract: false, final false
static inline void add_EditorRecompileEvent(::System::Action*  value) ;

/// @brief Method add_InitializedEvent, addr 0x1819ec770, size 0x80, virtual false, abstract: false, final false
static inline void add_InitializedEvent(::System::Action*  value) ;

/// @brief Method add_InputSourceUpdateEvent, addr 0x1819ec7f0, size 0x80, virtual false, abstract: false, final false
static inline void add_InputSourceUpdateEvent(::System::Action*  value) ;

/// @brief Method add_LateUpdateEvent, addr 0x1819ec870, size 0xe0, virtual false, abstract: false, final false
static inline void add_LateUpdateEvent(::System::Action*  value) ;

/// @brief Method add_PreShutDownEvent, addr 0x1819ec950, size 0x80, virtual false, abstract: false, final false
static inline void add_PreShutDownEvent(::System::Action*  value) ;

/// @brief Method add_SceneLoadedEvent, addr 0x1819ec9d0, size 0xe0, virtual false, abstract: false, final false
static inline void add_SceneLoadedEvent(::System::Action*  value) ;

/// @brief Method add_ShutDownEvent, addr 0x1819ecab0, size 0x80, virtual false, abstract: false, final false
static inline void add_ShutDownEvent(::System::Action*  value) ;

/// @brief Method add_TimeScalePauseChangedEvent, addr 0x1819ecb30, size 0xf0, virtual false, abstract: false, final false
static inline void add_TimeScalePauseChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method add_UpdateEndedEvent, addr 0x1819ecc20, size 0xf0, virtual false, abstract: false, final false
static inline void add_UpdateEndedEvent(::System::Action_1<::Rewired::UpdateLoopType>*  value) ;

/// @brief Method add_UpdateStartedEvent, addr 0x1819ecd10, size 0xf0, virtual false, abstract: false, final false
static inline void add_UpdateStartedEvent(::System::Action_1<::Rewired::UpdateLoopType>*  value) ;

/// @brief Method bybcRINryihFPYMXycISWPjsWxVe, addr 0x1819ece00, size 0x10, virtual false, abstract: false, final false
static inline void bybcRINryihFPYMXycISWPjsWxVe() ;

/// @brief Method ckAyPNIOtiKYvoUFYvqEPjRWTsBX, addr 0x1819ece10, size 0x110, virtual false, abstract: false, final false
static inline void ckAyPNIOtiKYvoUFYvqEPjRWTsBX() ;

/// @brief Method dRngZflnnxusSdQyUWhiVxwmTSXS, addr 0x1819ecf20, size 0xe0, virtual false, abstract: false, final false
static inline void dRngZflnnxusSdQyUWhiVxwmTSXS() ;

/// @brief Method derxjMOLUAQDLgrBWMSBJxIBoTlV, addr 0x1819ed000, size 0x90, virtual false, abstract: false, final false
static inline void derxjMOLUAQDLgrBWMSBJxIBoTlV() ;

/// @brief Method eaxqmHtHUkdjqfqlhgfCRsJgDvwK, addr 0x1819ed090, size 0x130, virtual false, abstract: false, final false
static inline bool eaxqmHtHUkdjqfqlhgfCRsJgDvwK() ;

/// @brief Method fLKRLIcQOsZouFYTpRAvQrUcJtfl, addr 0x1819ed1c0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::Rewired::Data::Mapping::HardwareJoystickTemplateMap> fLKRLIcQOsZouFYTpRAvQrUcJtfl(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method fLMTVvBEmViEAQByPYyTgnoCPvgd, addr 0x1819ed220, size 0x50, virtual false, abstract: false, final false
static inline float_t fLMTVvBEmViEAQByPYyTgnoCPvgd() ;

static inline bool getStaticF_AmUSSpEtcqdpvJxxswFjVejjxnq() ;

static inline ::Rewired::ReInput_TimeHelper* getStaticF_AqaqNSJXTNFPROuCAOONIMoOljiM() ;

static inline ::Rewired::Utils::SafeAction_1<::Rewired::ControllerStatusChangedEventArgs*>* getStaticF_DDKRewaTALmOloVLddAZLINTINjU() ;

static inline bool getStaticF_DNmTrTLbFXZfBAwCvdNbGvkgzfL() ;

static inline ::Rewired::ReInput_ConfigHelper* getStaticF_EEsihsknrqLadWqDRDdnCPfDCjVwA() ;

static inline ::Rewired::Data::ConfigVars* getStaticF_FuKjzEjLvnbjfbtgIhUCJtFvgDlcA() ;

static inline ::Rewired::ReInput_PlayerHelper* getStaticF_GRMUAFznTPpVFbaSzCuDWQrpYipb() ;

static inline ::System::Action* getStaticF_KkcLfSiGqndKYXvNEejSGvYOepMAb() ;

static inline ::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA* getStaticF_LCwHQLDEnWUmUwstctWXbXpbuGcuA() ;

static inline ::Rewired::Platforms::Platform getStaticF_LIVztcrgTGnNSkNlIOtiRasXBZXl() ;

static inline bool getStaticF_NVcuegdlRdvyvPzncKtotBZDjWjk() ;

static inline ::UnityW<::Rewired::Data::ControllerDataFiles> getStaticF_OAwAqSDNKSTdZIMHEaqtBCQGAFDiA() ;

static inline ::System::Action* getStaticF_ORvhdAACbRgVSiHcsiSPcWkeoesLB() ;

static inline ::GlobalNamespace::iBnOrSWQobsJCFvoFuqXUiRVYcrM* getStaticF_PDasHAwOgXKialEvYCCVKEqcFlweA() ;

static inline ::UnityW<::Rewired::Data::UserDataStore> getStaticF_PPkHWoVpdRvViXZOnsTESwBCOIlI() ;

static inline ::Rewired::Utils::SafeAction_1<::Rewired::ControllerStatusChangedEventArgs*>* getStaticF_PSsbBzdjAqNrQqTsvGyPTQASghEcA() ;

static inline ::Rewired::Utils::SafeAction* getStaticF_SrqZCabtqKTQGrBILGbZbknaDKGQA() ;

static inline ::StringW getStaticF_TQVabQwbAhbuHGjitMtRhXpgXgVeA() ;

static inline int32_t getStaticF_TazuockDnhrttUNEuyaAAWguhiXl() ;

static inline ::System::Action_1<bool>* getStaticF_UGMfnBvfbnndObEZDZwShAXLUXpK() ;

static inline ::GlobalNamespace::SxwAKlGxfwTiLpPYZbEjtHsOIaxx* getStaticF_WGVVALBvgybHSQdpESPgclVuSnLj() ;

static inline ::System::Action_1<bool>* getStaticF_XJRLKAlSpnYXLHdDXiHAFCoBTndjA() ;

static inline ::Rewired::ReInput_UnityTouch* getStaticF_XbvxKqgtDmBnXMvPpRbLCanPuqdB() ;

static inline ::Rewired::Interfaces::IControllerAssigner* getStaticF_YACaXNXCNLgvEkhTYZWgBbmNBSMaA() ;

static inline ::Rewired::ReInput_MappingHelper* getStaticF_YLFqjWFElGFjvRuvLlzkcVctdgtE() ;

static inline ::Rewired::Platforms::EditorPlatform getStaticF_YmAFwQaFhLbRhsgVmjVNfHIeDBKC() ;

static inline ::System::Action_1<::Rewired::UpdateLoopType>* getStaticF_YuZRlWXKSUUtFdlMAeHvytYqgIqb() ;

static inline ::System::Action_1<::UnityEngine::FullScreenMode>* getStaticF_ZHblBDaeDZgpVcVbjMBxZuxFuOte() ;

static inline ::System::Action_1<bool>* getStaticF__ApplicationFocusChangedEvent() ;

static inline ::System::Action_1<bool>* getStaticF__ApplicationPauseChangedEvent() ;

static inline int32_t getStaticF__id() ;

static inline ::Rewired::Platforms::WebplayerPlatform getStaticF_aYrBFiQuaefadeLqYaGLQCjQZHkwA() ;

static inline uint32_t getStaticF_absFrame() ;

static inline bool getStaticF_beVJrGgBvzFSkEKObQQhDvbiyVCdc() ;

static inline ::Rewired::UpdateLoopType getStaticF_cNMdyWccUfOfllmunqRekAUXqdJHb() ;

static inline bool getStaticF_cYNVeXETMIGKMXAgtzozEAyDTguN() ;

static inline ::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA* getStaticF_cYWDzAtGTrbHrpQGELhAgCnDWOyb() ;

static inline uint32_t getStaticF_currentFrame() ;

static inline ::Rewired::Utils::Classes::Utility::TimerAbs* getStaticF_dkbiUXcjTTbqUqQRcPhNihyBdKhgA() ;

static inline ::Rewired::PlatformInputManager* getStaticF_eJflMcdEUBHloPECaNmuKuutbnWR() ;

static inline bool getStaticF_eagJjbBFhBrCadhDxWfvBMaPZNEN() ;

static inline ::System::Action_1<bool>* getStaticF_gPZwAEDBqlMhCObvZVGqRNZVOyjj() ;

static inline ::Rewired::Data::UserData* getStaticF_hpXNymGQHdTBsmsQVaddCAYQHmLG() ;

static inline int32_t getStaticF_iSaMxNzyoLgIEfLjrlqFXdZBTRRS() ;

static inline ::System::Action_1<::Rewired::UpdateLoopType>* getStaticF_jRIygNNGgeDiJyTTvneaFLKjwUvv() ;

static inline ::GlobalNamespace::CtHdKMFzCRXTgyaDegxJEBJGblBAb* getStaticF_letOPgLQBZLTTWmUVbRenFveDGrEA() ;

static inline bool getStaticF_lexUegoNTwOwBMfWLVlkWdyTaieN() ;

static inline ::Rewired::Utils::SafeAction* getStaticF_meGTXXRmvAHIHROZGGizOSNtbYPV() ;

static inline ::Rewired::ReInput_LocalizationHelper* getStaticF_minRiEteoFelMISLAlzjeIKQglLmA() ;

static inline int32_t getStaticF_nKxZYQPLjsprwARflHEQEXjkbIXF() ;

static inline ::System::Action_1<bool>* getStaticF_nzdLchwLUdByguNJNsiGvlbviRZl() ;

static inline uint32_t getStaticF_previousFrame() ;

static inline ::Rewired::Utils::SafeAction_1<::Rewired::ControllerStatusChangedEventArgs*>* getStaticF_qtwpeAjeNCnMxxFIZWEDiYYfDyzm() ;

static inline ::System::Action_1<::Rewired::UpdateLoopType>* getStaticF_uIMfDkLoXyEUPMfojGvFFctnEJfBb() ;

static inline ::Rewired::Utils::SafeAction* getStaticF_uOglZsnpiAaYrLNzqSXdLfwBZmeg() ;

static inline double_t getStaticF_unscaledDeltaTime() ;

static inline double_t getStaticF_unscaledTime() ;

static inline double_t getStaticF_unscaledTimePrev() ;

static inline ::GlobalNamespace::fIDBlwaEffvZlKwGsbfYddhFcgaWA* getStaticF_vCOEkWfRJqBXdsrxlWONWRwKFYal() ;

static inline ::Rewired::ReInput_GlyphHelper* getStaticF_vfvRLHIAKzAtFXyxgcjoTCVsrUTI() ;

static inline ::Rewired::ReInput_ControllerHelper* getStaticF_vxGIajvjeIJtfEsPiGHTAJybaMN() ;

static inline ::Rewired::Utils::SafeAction* getStaticF_wRGGXQcHIQaMECyLALmSPMeAUPOBA() ;

static inline ::System::Action* getStaticF_wdBEiJLDaPuGHabAEbrefpwpdPsxA() ;

static inline ::Rewired::Utils::SafeAction* getStaticF_yzsXFFdEBlRnAoWsYsByZBUFfVEg() ;

static inline int32_t getStaticF_zItEffcNwzHQbcYDkzeVKWFHEESG() ;

static inline ::UnityW<::Rewired::InputManager_Base> getStaticF_zrmpEFIoiAFxqaYhjGwpWEItIsVlA() ;

/// @brief Method get_UserData, addr 0x18189fad0, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Data::UserData* get_UserData() ;

/// @brief Method get_applicationIsFocused, addr 0x1819ed270, size 0x60, virtual false, abstract: false, final false
static inline bool get_applicationIsFocused() ;

/// @brief Method get_applicationIsFullScreen, addr 0x1819ed2d0, size 0x60, virtual false, abstract: false, final false
static inline bool get_applicationIsFullScreen() ;

/// @brief Method get_applicationIsPaused, addr 0x1819ed330, size 0x60, virtual false, abstract: false, final false
static inline bool get_applicationIsPaused() ;

/// @brief Method get_applicationRunInBackground, addr 0x1819ed390, size 0x60, virtual false, abstract: false, final false
static inline bool get_applicationRunInBackground() ;

/// @brief Method get_checkNeverPressed, addr 0x1819ed3f0, size 0x110, virtual false, abstract: false, final false
static inline bool get_checkNeverPressed() ;

/// @brief Method get_configVars, addr 0x18090e580, size 0x3f70, virtual false, abstract: false, final false
static inline ::Rewired::Data::ConfigVars* get_configVars() ;

/// @brief Method get_configuration, addr 0x1819ed500, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_ConfigHelper* get_configuration() ;

/// @brief Method get_controllerAssigner, addr 0x1819ed550, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Interfaces::IControllerAssigner* get_controllerAssigner() ;

/// @brief Method get_controllers, addr 0x1819ed590, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_ControllerHelper* get_controllers() ;

/// @brief Method get_currentPlatform, addr 0x1818761d0, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Platforms::Platform get_currentPlatform() ;

/// @brief Method get_currentUnityFrame, addr 0x1819ed5e0, size 0x50, virtual false, abstract: false, final false
static inline int32_t get_currentUnityFrame() ;

/// @brief Method get_currentUpdateLoop, addr 0x181849570, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::UpdateLoopType get_currentUpdateLoop() ;

/// @brief Method get_defaultHardwareJoystickMapGuid, addr 0x1819ed630, size 0x80, virtual false, abstract: false, final false
static inline ::System::Guid get_defaultHardwareJoystickMapGuid() ;

/// @brief Method get_editorPlatform, addr 0x1819ed6b0, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Platforms::EditorPlatform get_editorPlatform() ;

/// @brief Method get_glyphs, addr 0x1819ed6f0, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_GlyphHelper* get_glyphs() ;

/// @brief Method get_id, addr 0x1819ed740, size 0x40, virtual false, abstract: false, final false
static inline int32_t get_id() ;

/// @brief Method get_initialized, addr 0x1819ed780, size 0x40, virtual false, abstract: false, final false
static inline bool get_initialized() ;

/// @brief Method get_isAllowedEditorWindowFocused, addr 0x1819ed7c0, size 0xf0, virtual false, abstract: false, final false
static inline bool get_isAllowedEditorWindowFocused() ;

/// @brief Method get_isEditor, addr 0x1819ed8e0, size 0x40, virtual false, abstract: false, final false
static inline bool get_isEditor() ;

/// @brief Method get_isEditorPaused, addr 0x1819ed8b0, size 0x30, virtual false, abstract: false, final false
static inline bool get_isEditorPaused() ;

/// @brief Method get_isReady, addr 0x1819ed780, size 0x40, virtual false, abstract: false, final false
static inline bool get_isReady() ;

/// @brief Method get_isRunningInEditMode, addr 0x1819ed920, size 0x40, virtual false, abstract: false, final false
static inline bool get_isRunningInEditMode() ;

/// @brief Method get_isUnityEditorFocused, addr 0x1819ed960, size 0x70, virtual false, abstract: false, final false
static inline bool get_isUnityEditorFocused() ;

/// @brief Method get_isWindowsStandaloneWebplayerOrEditorPlatform, addr 0x1819ed9d0, size 0x60, virtual false, abstract: false, final false
static inline bool get_isWindowsStandaloneWebplayerOrEditorPlatform() ;

/// @brief Method get_localization, addr 0x1819eda30, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_LocalizationHelper* get_localization() ;

/// @brief Method get_mapping, addr 0x1819eda80, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_MappingHelper* get_mapping() ;

/// @brief Method get_players, addr 0x1819edad0, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_PlayerHelper* get_players() ;

/// @brief Method get_pluginConfigVars, addr 0x18090e580, size 0x3f70, virtual false, abstract: false, final false
static inline ::Rewired::Data::IConfigVars_Internal* get_pluginConfigVars() ;

/// @brief Method get_primaryInputManager, addr 0x1819edb20, size 0x70, virtual false, abstract: false, final false
static inline ::Rewired::PlatformInputManager* get_primaryInputManager() ;

/// @brief Method get_programVersion, addr 0x1819edb90, size 0x130, virtual false, abstract: false, final false
static inline ::StringW get_programVersion() ;

/// @brief Method get_realTime, addr 0x1819edcc0, size 0x50, virtual false, abstract: false, final false
static inline double_t get_realTime() ;

/// @brief Method get_rewiredInputManager, addr 0x1819edd10, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::Rewired::InputManager_Base> get_rewiredInputManager() ;

/// @brief Method get_rewiredVersion, addr 0x1819edd50, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::RewiredVersion get_rewiredVersion() ;

/// @brief Method get_time, addr 0x1819ede40, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_TimeHelper* get_time() ;

/// @brief Method get_timeScaleIsPaused, addr 0x1819edda0, size 0x60, virtual false, abstract: false, final false
static inline bool get_timeScaleIsPaused() ;

/// @brief Method get_timeScalePauseChangedCount, addr 0x1819ede00, size 0x40, virtual false, abstract: false, final false
static inline int32_t get_timeScalePauseChangedCount() ;

/// @brief Method get_touch, addr 0x1819ede90, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ReInput_UnityTouch* get_touch() ;

/// @brief Method get_unityJoystickIdentificationRequired, addr 0x1819edee0, size 0x90, virtual false, abstract: false, final false
static inline bool get_unityJoystickIdentificationRequired() ;

/// @brief Method get_unityUnscaledDeltaTime, addr 0x1819edfc0, size 0x50, virtual false, abstract: false, final false
static inline float_t get_unityUnscaledDeltaTime() ;

/// @brief Method get_unityUnscaledDeltaTimePrev, addr 0x1819edf70, size 0x50, virtual false, abstract: false, final false
static inline float_t get_unityUnscaledDeltaTimePrev() ;

/// @brief Method get_userDataStore, addr 0x1819ee010, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Interfaces::IUserDataStore* get_userDataStore() ;

/// @brief Method get_usingUnityInput, addr 0x1819445f0, size 0x40, virtual false, abstract: false, final false
static inline bool get_usingUnityInput() ;

/// @brief Method get_webplayerPlatform, addr 0x1819ee060, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Platforms::WebplayerPlatform get_webplayerPlatform() ;

/// @brief Method iJdPDtXgYSsAzTqSHIfkoLgJtMxI, addr 0x1819ee0a0, size 0xb0, virtual false, abstract: false, final false
static inline void iJdPDtXgYSsAzTqSHIfkoLgJtMxI(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method kWyACXidDvwBHQqJxORNJaMmyqJy, addr 0x1819ee150, size 0x40, virtual false, abstract: false, final false
static inline bool kWyACXidDvwBHQqJxORNJaMmyqJy() ;

/// @brief Method mCTOwKLWWSpeGpvPwrlCPVIpEFkE, addr 0x1819ee190, size 0x40, virtual false, abstract: false, final false
static inline void mCTOwKLWWSpeGpvPwrlCPVIpEFkE() ;

/// @brief Method mJMeOipRAfAQgILDVzeGfiPucBNg, addr 0x1819ee1d0, size 0xe0, virtual false, abstract: false, final false
static inline void mJMeOipRAfAQgILDVzeGfiPucBNg(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method nKRegFtaBCmdmjamMIrdoROflRKc, addr 0x1819ee2b0, size 0xc0, virtual false, abstract: false, final false
static inline void nKRegFtaBCmdmjamMIrdoROflRKc(bool  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method ozaXUMJGGrHsqsAbvFPZaDczvzqE, addr 0x1819ee370, size 0x490, virtual false, abstract: false, final false
static inline void ozaXUMJGGrHsqsAbvFPZaDczvzqE(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method qwFeDAeGaXAGwOgtmjFRlCRyDkzKA, addr 0x1819ee800, size 0x60, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TcdPIZMIwGFYJfZZOMhQGedCCqvbA* qwFeDAeGaXAGwOgtmjFRlCRyDkzKA(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method rHovhzjEADPaGkxEEFXyumRcuUjR, addr 0x1819ee860, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::Rewired::Data::Mapping::HardwareJoystickMap> rHovhzjEADPaGkxEEFXyumRcuUjR(::System::Guid  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method remove_ApplicationFocusChangedEvent, addr 0x1819ee8c0, size 0xf0, virtual false, abstract: false, final false
static inline void remove_ApplicationFocusChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method remove_ApplicationFullScreenModeChangedEvent, addr 0x1819ee9b0, size 0xf0, virtual false, abstract: false, final false
static inline void remove_ApplicationFullScreenModeChangedEvent(::System::Action_1<::UnityEngine::FullScreenMode>*  value) ;

/// @brief Method remove_ApplicationIsFullScreenChangedEvent, addr 0x1819eeaa0, size 0xf0, virtual false, abstract: false, final false
static inline void remove_ApplicationIsFullScreenChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method remove_ApplicationPauseChangedEvent, addr 0x1819eeb90, size 0xf0, virtual false, abstract: false, final false
static inline void remove_ApplicationPauseChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method remove_ApplicationRunInBackgroundChangedEvent, addr 0x1819eec80, size 0xf0, virtual false, abstract: false, final false
static inline void remove_ApplicationRunInBackgroundChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method remove_BeforeTimeManagerUpdateEvent, addr 0x1819eed70, size 0xf0, virtual false, abstract: false, final false
static inline void remove_BeforeTimeManagerUpdateEvent(::System::Action_1<::Rewired::UpdateLoopType>*  value) ;

/// @brief Method remove_ControllerConnectedEvent, addr 0x1819eee60, size 0x80, virtual false, abstract: false, final false
static inline void remove_ControllerConnectedEvent(::System::Action_1<::Rewired::ControllerStatusChangedEventArgs*>*  value) ;

/// @brief Method remove_ControllerDisconnectedEvent, addr 0x1819eeee0, size 0x80, virtual false, abstract: false, final false
static inline void remove_ControllerDisconnectedEvent(::System::Action_1<::Rewired::ControllerStatusChangedEventArgs*>*  value) ;

/// @brief Method remove_ControllerPreDisconnectEvent, addr 0x1819eef60, size 0x80, virtual false, abstract: false, final false
static inline void remove_ControllerPreDisconnectEvent(::System::Action_1<::Rewired::ControllerStatusChangedEventArgs*>*  value) ;

/// @brief Method remove_EarlyUpdateEvent, addr 0x1819eefe0, size 0xe0, virtual false, abstract: false, final false
static inline void remove_EarlyUpdateEvent(::System::Action*  value) ;

/// @brief Method remove_EditorPauseChangedEvent, addr 0x1819ef0c0, size 0xf0, virtual false, abstract: false, final false
static inline void remove_EditorPauseChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method remove_EditorRecompileEvent, addr 0x1819ef1b0, size 0x80, virtual false, abstract: false, final false
static inline void remove_EditorRecompileEvent(::System::Action*  value) ;

/// @brief Method remove_InitializedEvent, addr 0x1819ef230, size 0x80, virtual false, abstract: false, final false
static inline void remove_InitializedEvent(::System::Action*  value) ;

/// @brief Method remove_InputSourceUpdateEvent, addr 0x1819ef2b0, size 0x80, virtual false, abstract: false, final false
static inline void remove_InputSourceUpdateEvent(::System::Action*  value) ;

/// @brief Method remove_LateUpdateEvent, addr 0x1819ef330, size 0xe0, virtual false, abstract: false, final false
static inline void remove_LateUpdateEvent(::System::Action*  value) ;

/// @brief Method remove_PreShutDownEvent, addr 0x1819ef410, size 0x80, virtual false, abstract: false, final false
static inline void remove_PreShutDownEvent(::System::Action*  value) ;

/// @brief Method remove_SceneLoadedEvent, addr 0x1819ef490, size 0xe0, virtual false, abstract: false, final false
static inline void remove_SceneLoadedEvent(::System::Action*  value) ;

/// @brief Method remove_ShutDownEvent, addr 0x1819ef570, size 0x80, virtual false, abstract: false, final false
static inline void remove_ShutDownEvent(::System::Action*  value) ;

/// @brief Method remove_TimeScalePauseChangedEvent, addr 0x1819ef5f0, size 0xf0, virtual false, abstract: false, final false
static inline void remove_TimeScalePauseChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method remove_UpdateEndedEvent, addr 0x1819ef6e0, size 0xf0, virtual false, abstract: false, final false
static inline void remove_UpdateEndedEvent(::System::Action_1<::Rewired::UpdateLoopType>*  value) ;

/// @brief Method remove_UpdateStartedEvent, addr 0x1819ef7d0, size 0xf0, virtual false, abstract: false, final false
static inline void remove_UpdateStartedEvent(::System::Action_1<::Rewired::UpdateLoopType>*  value) ;

static inline void setStaticF_AmUSSpEtcqdpvJxxswFjVejjxnq(bool  value) ;

static inline void setStaticF_AqaqNSJXTNFPROuCAOONIMoOljiM(::Rewired::ReInput_TimeHelper*  value) ;

static inline void setStaticF_DDKRewaTALmOloVLddAZLINTINjU(::Rewired::Utils::SafeAction_1<::Rewired::ControllerStatusChangedEventArgs*>*  value) ;

static inline void setStaticF_DNmTrTLbFXZfBAwCvdNbGvkgzfL(bool  value) ;

static inline void setStaticF_EEsihsknrqLadWqDRDdnCPfDCjVwA(::Rewired::ReInput_ConfigHelper*  value) ;

static inline void setStaticF_FuKjzEjLvnbjfbtgIhUCJtFvgDlcA(::Rewired::Data::ConfigVars*  value) ;

static inline void setStaticF_GRMUAFznTPpVFbaSzCuDWQrpYipb(::Rewired::ReInput_PlayerHelper*  value) ;

static inline void setStaticF_KkcLfSiGqndKYXvNEejSGvYOepMAb(::System::Action*  value) ;

static inline void setStaticF_LCwHQLDEnWUmUwstctWXbXpbuGcuA(::Rewired::ReInput_rpPewHaUdxWXHuOjVjaJGYrVlsVkA*  value) ;

static inline void setStaticF_LIVztcrgTGnNSkNlIOtiRasXBZXl(::Rewired::Platforms::Platform  value) ;

static inline void setStaticF_NVcuegdlRdvyvPzncKtotBZDjWjk(bool  value) ;

static inline void setStaticF_OAwAqSDNKSTdZIMHEaqtBCQGAFDiA(::UnityW<::Rewired::Data::ControllerDataFiles>  value) ;

static inline void setStaticF_ORvhdAACbRgVSiHcsiSPcWkeoesLB(::System::Action*  value) ;

static inline void setStaticF_PDasHAwOgXKialEvYCCVKEqcFlweA(::GlobalNamespace::iBnOrSWQobsJCFvoFuqXUiRVYcrM*  value) ;

static inline void setStaticF_PPkHWoVpdRvViXZOnsTESwBCOIlI(::UnityW<::Rewired::Data::UserDataStore>  value) ;

static inline void setStaticF_PSsbBzdjAqNrQqTsvGyPTQASghEcA(::Rewired::Utils::SafeAction_1<::Rewired::ControllerStatusChangedEventArgs*>*  value) ;

static inline void setStaticF_SrqZCabtqKTQGrBILGbZbknaDKGQA(::Rewired::Utils::SafeAction*  value) ;

static inline void setStaticF_TQVabQwbAhbuHGjitMtRhXpgXgVeA(::StringW  value) ;

static inline void setStaticF_TazuockDnhrttUNEuyaAAWguhiXl(int32_t  value) ;

static inline void setStaticF_UGMfnBvfbnndObEZDZwShAXLUXpK(::System::Action_1<bool>*  value) ;

static inline void setStaticF_WGVVALBvgybHSQdpESPgclVuSnLj(::GlobalNamespace::SxwAKlGxfwTiLpPYZbEjtHsOIaxx*  value) ;

static inline void setStaticF_XJRLKAlSpnYXLHdDXiHAFCoBTndjA(::System::Action_1<bool>*  value) ;

static inline void setStaticF_XbvxKqgtDmBnXMvPpRbLCanPuqdB(::Rewired::ReInput_UnityTouch*  value) ;

static inline void setStaticF_YACaXNXCNLgvEkhTYZWgBbmNBSMaA(::Rewired::Interfaces::IControllerAssigner*  value) ;

static inline void setStaticF_YLFqjWFElGFjvRuvLlzkcVctdgtE(::Rewired::ReInput_MappingHelper*  value) ;

static inline void setStaticF_YmAFwQaFhLbRhsgVmjVNfHIeDBKC(::Rewired::Platforms::EditorPlatform  value) ;

static inline void setStaticF_YuZRlWXKSUUtFdlMAeHvytYqgIqb(::System::Action_1<::Rewired::UpdateLoopType>*  value) ;

static inline void setStaticF_ZHblBDaeDZgpVcVbjMBxZuxFuOte(::System::Action_1<::UnityEngine::FullScreenMode>*  value) ;

static inline void setStaticF__ApplicationFocusChangedEvent(::System::Action_1<bool>*  value) ;

static inline void setStaticF__ApplicationPauseChangedEvent(::System::Action_1<bool>*  value) ;

static inline void setStaticF__id(int32_t  value) ;

static inline void setStaticF_aYrBFiQuaefadeLqYaGLQCjQZHkwA(::Rewired::Platforms::WebplayerPlatform  value) ;

static inline void setStaticF_absFrame(uint32_t  value) ;

static inline void setStaticF_beVJrGgBvzFSkEKObQQhDvbiyVCdc(bool  value) ;

static inline void setStaticF_cNMdyWccUfOfllmunqRekAUXqdJHb(::Rewired::UpdateLoopType  value) ;

static inline void setStaticF_cYNVeXETMIGKMXAgtzozEAyDTguN(bool  value) ;

static inline void setStaticF_cYWDzAtGTrbHrpQGELhAgCnDWOyb(::Rewired::ReInput_OTQjebRZYlpFkdIetXjwvnEMmlUA*  value) ;

static inline void setStaticF_currentFrame(uint32_t  value) ;

static inline void setStaticF_dkbiUXcjTTbqUqQRcPhNihyBdKhgA(::Rewired::Utils::Classes::Utility::TimerAbs*  value) ;

static inline void setStaticF_eJflMcdEUBHloPECaNmuKuutbnWR(::Rewired::PlatformInputManager*  value) ;

static inline void setStaticF_eagJjbBFhBrCadhDxWfvBMaPZNEN(bool  value) ;

static inline void setStaticF_gPZwAEDBqlMhCObvZVGqRNZVOyjj(::System::Action_1<bool>*  value) ;

static inline void setStaticF_hpXNymGQHdTBsmsQVaddCAYQHmLG(::Rewired::Data::UserData*  value) ;

static inline void setStaticF_iSaMxNzyoLgIEfLjrlqFXdZBTRRS(int32_t  value) ;

static inline void setStaticF_jRIygNNGgeDiJyTTvneaFLKjwUvv(::System::Action_1<::Rewired::UpdateLoopType>*  value) ;

static inline void setStaticF_letOPgLQBZLTTWmUVbRenFveDGrEA(::GlobalNamespace::CtHdKMFzCRXTgyaDegxJEBJGblBAb*  value) ;

static inline void setStaticF_lexUegoNTwOwBMfWLVlkWdyTaieN(bool  value) ;

static inline void setStaticF_meGTXXRmvAHIHROZGGizOSNtbYPV(::Rewired::Utils::SafeAction*  value) ;

static inline void setStaticF_minRiEteoFelMISLAlzjeIKQglLmA(::Rewired::ReInput_LocalizationHelper*  value) ;

static inline void setStaticF_nKxZYQPLjsprwARflHEQEXjkbIXF(int32_t  value) ;

static inline void setStaticF_nzdLchwLUdByguNJNsiGvlbviRZl(::System::Action_1<bool>*  value) ;

static inline void setStaticF_previousFrame(uint32_t  value) ;

static inline void setStaticF_qtwpeAjeNCnMxxFIZWEDiYYfDyzm(::Rewired::Utils::SafeAction_1<::Rewired::ControllerStatusChangedEventArgs*>*  value) ;

static inline void setStaticF_uIMfDkLoXyEUPMfojGvFFctnEJfBb(::System::Action_1<::Rewired::UpdateLoopType>*  value) ;

static inline void setStaticF_uOglZsnpiAaYrLNzqSXdLfwBZmeg(::Rewired::Utils::SafeAction*  value) ;

static inline void setStaticF_unscaledDeltaTime(double_t  value) ;

static inline void setStaticF_unscaledTime(double_t  value) ;

static inline void setStaticF_unscaledTimePrev(double_t  value) ;

static inline void setStaticF_vCOEkWfRJqBXdsrxlWONWRwKFYal(::GlobalNamespace::fIDBlwaEffvZlKwGsbfYddhFcgaWA*  value) ;

static inline void setStaticF_vfvRLHIAKzAtFXyxgcjoTCVsrUTI(::Rewired::ReInput_GlyphHelper*  value) ;

static inline void setStaticF_vxGIajvjeIJtfEsPiGHTAJybaMN(::Rewired::ReInput_ControllerHelper*  value) ;

static inline void setStaticF_wRGGXQcHIQaMECyLALmSPMeAUPOBA(::Rewired::Utils::SafeAction*  value) ;

static inline void setStaticF_wdBEiJLDaPuGHabAEbrefpwpdPsxA(::System::Action*  value) ;

static inline void setStaticF_yzsXFFdEBlRnAoWsYsByZBUFfVEg(::Rewired::Utils::SafeAction*  value) ;

static inline void setStaticF_zItEffcNwzHQbcYDkzeVKWFHEESG(int32_t  value) ;

static inline void setStaticF_zrmpEFIoiAFxqaYhjGwpWEItIsVlA(::UnityW<::Rewired::InputManager_Base>  value) ;

/// @brief Method set_controllerAssigner, addr 0x1819ef8c0, size 0x60, virtual false, abstract: false, final false
static inline void set_controllerAssigner(::Rewired::Interfaces::IControllerAssigner*  value) ;

/// @brief Method xBWsdzFAlpwhjexRVemPNYEBpYlh, addr 0x1819ef920, size 0xa0, virtual false, abstract: false, final false
static inline void xBWsdzFAlpwhjexRVemPNYEBpYlh() ;

/// @brief Method ywLbIICVZQhEyGkdJoUNIWOvUbrOA, addr 0x1819ef9c0, size 0xa0, virtual false, abstract: false, final false
static inline void ywLbIICVZQhEyGkdJoUNIWOvUbrOA(bool  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReInput(ReInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReInput(ReInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2209};

/// @brief Field dataVersion offset 0xffffffff size 0x4
static constexpr int32_t  dataVersion{static_cast<int32_t>(0x1)};

/// @brief Field isTrial offset 0xffffffff size 0x1
static constexpr bool  isTrial{false};

/// @brief Field majorBranch offset 0xffffffff size 0x8
static constexpr ::ConstString  majorBranch{u"U6000"};

/// @brief Field programVersion1 offset 0xffffffff size 0x4
static constexpr int32_t  programVersion1{static_cast<int32_t>(0x1)};

/// @brief Field programVersion2 offset 0xffffffff size 0x4
static constexpr int32_t  programVersion2{static_cast<int32_t>(0x1)};

/// @brief Field programVersion3 offset 0xffffffff size 0x4
static constexpr int32_t  programVersion3{static_cast<int32_t>(0x3b)};

/// @brief Field programVersion4 offset 0xffffffff size 0x4
static constexpr int32_t  programVersion4{static_cast<int32_t>(0x2)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::ReInput) == 0x10, "Size mismatch!");

} // namespace end def Rewired
