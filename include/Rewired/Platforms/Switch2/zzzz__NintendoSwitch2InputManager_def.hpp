#pragma once
// IWYU pragma private; include "Rewired/Platforms/Switch2/NintendoSwitch2InputManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NintendoSwitch2InputManager)
namespace Rewired::Platforms::Switch2 {
class NintendoSwitch2InputManager_DebugPadSettings_Internal;
}
namespace Rewired::Platforms::Switch2 {
class NintendoSwitch2InputManager_NpadSettings_Internal;
}
namespace Rewired::Platforms::Switch2 {
class NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal;
}
namespace Rewired::Platforms::Switch2 {
class NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal;
}
namespace Rewired::Platforms::Switch2 {
class NintendoSwitch2InputManager_UserData;
}
namespace Rewired::Platforms {
struct Platform;
}
namespace Rewired::Utils::Interfaces {
class IExternalInputManager;
}
namespace Rewired::Utils::Interfaces {
template<typename TKey>
class IKeyedData_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Platforms::Switch2 {
class NintendoSwitch2InputManager;
}
namespace Rewired::Platforms::Switch2 {
class NintendoSwitch2InputManager_DebugPadSettings_Internal;
}
namespace Rewired::Platforms::Switch2 {
class NintendoSwitch2InputManager_NpadSettings_Internal;
}
namespace Rewired::Platforms::Switch2 {
class NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal;
}
namespace Rewired::Platforms::Switch2 {
class NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal;
}
namespace Rewired::Platforms::Switch2 {
class NintendoSwitch2InputManager_UserData;
}
// Write type traits
MARK_REF_T(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager*);
MARK_REF_T(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*);
MARK_REF_T(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*);
MARK_REF_T(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*);
MARK_REF_T(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*);
MARK_REF_T(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager*, "Rewired.Platforms.Switch2", "NintendoSwitch2InputManager");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*, "Rewired.Platforms.Switch2", "NintendoSwitch2InputManager/DebugPadSettings_Internal");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*, "Rewired.Platforms.Switch2", "NintendoSwitch2InputManager/NpadSettings_Internal");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*, "Rewired.Platforms.Switch2", "NintendoSwitch2InputManager/StreamPlayGuestPadSettings_Internal");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*, "Rewired.Platforms.Switch2", "NintendoSwitch2InputManager/StreamPlayGuestSettings_Internal");
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*, "Rewired.Platforms.Switch2", "NintendoSwitch2InputManager/UserData");
// Dependencies System.Object
namespace Rewired::Platforms::Switch2 {
// Is value type: false
// CS Name: Rewired.Platforms.Switch2.NintendoSwitch2InputManager/UserData
class CORDL_TYPE NintendoSwitch2InputManager_UserData : public ::System::Object {
public:
// Declarations
/// @brief Field __delegates, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get___delegates, put=__cordl_internal_set___delegates)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  __delegates;

/// @brief Field _adjustIMUsForGripStyle, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__adjustIMUsForGripStyle, put=__cordl_internal_set__adjustIMUsForGripStyle)) bool  _adjustIMUsForGripStyle;

/// @brief Field _allowJoyConMouseRebindPolling, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowJoyConMouseRebindPolling, put=__cordl_internal_set__allowJoyConMouseRebindPolling)) bool  _allowJoyConMouseRebindPolling;

/// @brief Field _allowedNpadStyles, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__allowedNpadStyles, put=__cordl_internal_set__allowedNpadStyles)) int32_t  _allowedNpadStyles;

/// @brief Field _assignJoysticksByNpadId, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__assignJoysticksByNpadId, put=__cordl_internal_set__assignJoysticksByNpadId)) bool  _assignJoysticksByNpadId;

/// @brief Field _autoStartIMUs, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoStartIMUs, put=__cordl_internal_set__autoStartIMUs)) bool  _autoStartIMUs;

/// @brief Field _autoStartJoyConMouseSensors, offset 0x23, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoStartJoyConMouseSensors, put=__cordl_internal_set__autoStartJoyConMouseSensors)) bool  _autoStartJoyConMouseSensors;

/// @brief Field _debugPad, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugPad, put=__cordl_internal_set__debugPad)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*  _debugPad;

/// @brief Field _handheldActivationMode, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__handheldActivationMode, put=__cordl_internal_set__handheldActivationMode)) int32_t  _handheldActivationMode;

/// @brief Field _initializeJcms, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get__initializeJcms, put=__cordl_internal_set__initializeJcms)) bool  _initializeJcms;

/// @brief Field _joyConGripStyle, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__joyConGripStyle, put=__cordl_internal_set__joyConGripStyle)) int32_t  _joyConGripStyle;

/// @brief Field _npadHandheld, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadHandheld, put=__cordl_internal_set__npadHandheld)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  _npadHandheld;

/// @brief Field _npadNo1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo1, put=__cordl_internal_set__npadNo1)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  _npadNo1;

/// @brief Field _npadNo2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo2, put=__cordl_internal_set__npadNo2)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  _npadNo2;

/// @brief Field _npadNo3, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo3, put=__cordl_internal_set__npadNo3)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  _npadNo3;

/// @brief Field _npadNo4, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo4, put=__cordl_internal_set__npadNo4)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  _npadNo4;

/// @brief Field _npadNo5, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo5, put=__cordl_internal_set__npadNo5)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  _npadNo5;

/// @brief Field _npadNo6, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo6, put=__cordl_internal_set__npadNo6)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  _npadNo6;

/// @brief Field _npadNo7, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo7, put=__cordl_internal_set__npadNo7)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  _npadNo7;

/// @brief Field _npadNo8, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo8, put=__cordl_internal_set__npadNo8)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  _npadNo8;

/// @brief Field _streamPlayAllowedGuestNpadStyles, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__streamPlayAllowedGuestNpadStyles, put=__cordl_internal_set__streamPlayAllowedGuestNpadStyles)) int32_t  _streamPlayAllowedGuestNpadStyles;

/// @brief Field _streamPlayGuest1, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamPlayGuest1, put=__cordl_internal_set__streamPlayGuest1)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  _streamPlayGuest1;

/// @brief Field _streamPlayGuest2, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamPlayGuest2, put=__cordl_internal_set__streamPlayGuest2)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  _streamPlayGuest2;

/// @brief Field _streamPlayGuest3, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamPlayGuest3, put=__cordl_internal_set__streamPlayGuest3)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  _streamPlayGuest3;

/// @brief Field _streamPlayGuestJoyConGripStyle, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__streamPlayGuestJoyConGripStyle, put=__cordl_internal_set__streamPlayGuestJoyConGripStyle)) int32_t  _streamPlayGuestJoyConGripStyle;

/// @brief Field _streamPlayGuestSupportedHidFeatures, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__streamPlayGuestSupportedHidFeatures, put=__cordl_internal_set__streamPlayGuestSupportedHidFeatures)) int32_t  _streamPlayGuestSupportedHidFeatures;

/// @brief Field _supportJoyConMouseSensors, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get__supportJoyConMouseSensors, put=__cordl_internal_set__supportJoyConMouseSensors)) bool  _supportJoyConMouseSensors;

/// @brief Field _useVibrationThread, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__useVibrationThread, put=__cordl_internal_set__useVibrationThread)) bool  _useVibrationThread;

 __declspec(property(get=get_adjustIMUsForGripStyle, put=set_adjustIMUsForGripStyle)) bool  adjustIMUsForGripStyle;

 __declspec(property(get=get_allowJoyConMouseRebindPolling, put=set_allowJoyConMouseRebindPolling)) bool  allowJoyConMouseRebindPolling;

 __declspec(property(get=get_allowedNpadStyles, put=set_allowedNpadStyles)) int32_t  allowedNpadStyles;

 __declspec(property(get=get_assignJoysticksByNpadId, put=set_assignJoysticksByNpadId)) bool  assignJoysticksByNpadId;

 __declspec(property(get=get_autoStartIMUs, put=set_autoStartIMUs)) bool  autoStartIMUs;

 __declspec(property(get=get_autoStartJoyConMouseSensors, put=set_autoStartJoyConMouseSensors)) bool  autoStartJoyConMouseSensors;

 __declspec(property(get=get_debugPad)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*  debugPad;

 __declspec(property(get=get_delegates)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  delegates;

 __declspec(property(get=get_handheldActivationMode, put=set_handheldActivationMode)) int32_t  handheldActivationMode;

 __declspec(property(get=get_joyConGripStyle, put=set_joyConGripStyle)) int32_t  joyConGripStyle;

 __declspec(property(get=get_npadHandheld)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  npadHandheld;

 __declspec(property(get=get_npadNo1)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  npadNo1;

 __declspec(property(get=get_npadNo2)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  npadNo2;

 __declspec(property(get=get_npadNo3)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  npadNo3;

 __declspec(property(get=get_npadNo4)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  npadNo4;

 __declspec(property(get=get_npadNo5)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  npadNo5;

 __declspec(property(get=get_npadNo6)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  npadNo6;

 __declspec(property(get=get_npadNo7)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  npadNo7;

 __declspec(property(get=get_npadNo8)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  npadNo8;

 __declspec(property(get=get_streamPlayAllowedGuestNpadStyles, put=set_streamPlayAllowedGuestNpadStyles)) int32_t  streamPlayAllowedGuestNpadStyles;

 __declspec(property(get=get_streamPlayGuest1)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  streamPlayGuest1;

 __declspec(property(get=get_streamPlayGuest2)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  streamPlayGuest2;

 __declspec(property(get=get_streamPlayGuest3)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  streamPlayGuest3;

 __declspec(property(get=get_streamPlayGuestJoyConGripStyle, put=set_streamPlayGuestJoyConGripStyle)) int32_t  streamPlayGuestJoyConGripStyle;

 __declspec(property(get=get_streamPlayGuestSupportedHidFeatures, put=set_streamPlayGuestSupportedHidFeatures)) int32_t  streamPlayGuestSupportedHidFeatures;

 __declspec(property(get=get_supportJoyConMouseSensors, put=set_supportJoyConMouseSensors)) bool  supportJoyConMouseSensors;

 __declspec(property(get=get_useVibrationThread, put=set_useVibrationThread)) bool  useVibrationThread;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr operator  ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*() noexcept;

static inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData* New_ctor() ;

/// @brief Method Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline bool Rewired_Utils_Interfaces_IKeyedData_System_Int32__TryGetValue(int32_t  key, ::by_ref<T>  value) ;

/// @brief Method Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TrySetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline bool Rewired_Utils_Interfaces_IKeyedData_System_Int32__TrySetValue(int32_t  key, T  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* const& __cordl_internal_get___delegates() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*& __cordl_internal_get___delegates() ;

constexpr bool const& __cordl_internal_get__adjustIMUsForGripStyle() const;

constexpr bool& __cordl_internal_get__adjustIMUsForGripStyle() ;

constexpr bool const& __cordl_internal_get__allowJoyConMouseRebindPolling() const;

constexpr bool& __cordl_internal_get__allowJoyConMouseRebindPolling() ;

constexpr int32_t const& __cordl_internal_get__allowedNpadStyles() const;

constexpr int32_t& __cordl_internal_get__allowedNpadStyles() ;

constexpr bool const& __cordl_internal_get__assignJoysticksByNpadId() const;

constexpr bool& __cordl_internal_get__assignJoysticksByNpadId() ;

constexpr bool const& __cordl_internal_get__autoStartIMUs() const;

constexpr bool& __cordl_internal_get__autoStartIMUs() ;

constexpr bool const& __cordl_internal_get__autoStartJoyConMouseSensors() const;

constexpr bool& __cordl_internal_get__autoStartJoyConMouseSensors() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal* const& __cordl_internal_get__debugPad() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*& __cordl_internal_get__debugPad() ;

constexpr int32_t const& __cordl_internal_get__handheldActivationMode() const;

constexpr int32_t& __cordl_internal_get__handheldActivationMode() ;

constexpr bool const& __cordl_internal_get__initializeJcms() const;

constexpr bool& __cordl_internal_get__initializeJcms() ;

constexpr int32_t const& __cordl_internal_get__joyConGripStyle() const;

constexpr int32_t& __cordl_internal_get__joyConGripStyle() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& __cordl_internal_get__npadHandheld() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& __cordl_internal_get__npadHandheld() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& __cordl_internal_get__npadNo1() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& __cordl_internal_get__npadNo1() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& __cordl_internal_get__npadNo2() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& __cordl_internal_get__npadNo2() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& __cordl_internal_get__npadNo3() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& __cordl_internal_get__npadNo3() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& __cordl_internal_get__npadNo4() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& __cordl_internal_get__npadNo4() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& __cordl_internal_get__npadNo5() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& __cordl_internal_get__npadNo5() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& __cordl_internal_get__npadNo6() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& __cordl_internal_get__npadNo6() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& __cordl_internal_get__npadNo7() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& __cordl_internal_get__npadNo7() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* const& __cordl_internal_get__npadNo8() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*& __cordl_internal_get__npadNo8() ;

constexpr int32_t const& __cordl_internal_get__streamPlayAllowedGuestNpadStyles() const;

constexpr int32_t& __cordl_internal_get__streamPlayAllowedGuestNpadStyles() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* const& __cordl_internal_get__streamPlayGuest1() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*& __cordl_internal_get__streamPlayGuest1() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* const& __cordl_internal_get__streamPlayGuest2() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*& __cordl_internal_get__streamPlayGuest2() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* const& __cordl_internal_get__streamPlayGuest3() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*& __cordl_internal_get__streamPlayGuest3() ;

constexpr int32_t const& __cordl_internal_get__streamPlayGuestJoyConGripStyle() const;

constexpr int32_t& __cordl_internal_get__streamPlayGuestJoyConGripStyle() ;

constexpr int32_t const& __cordl_internal_get__streamPlayGuestSupportedHidFeatures() const;

constexpr int32_t& __cordl_internal_get__streamPlayGuestSupportedHidFeatures() ;

constexpr bool const& __cordl_internal_get__supportJoyConMouseSensors() const;

constexpr bool& __cordl_internal_get__supportJoyConMouseSensors() ;

constexpr bool const& __cordl_internal_get__useVibrationThread() const;

constexpr bool& __cordl_internal_get__useVibrationThread() ;

constexpr void __cordl_internal_set___delegates(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value) ;

constexpr void __cordl_internal_set__adjustIMUsForGripStyle(bool  value) ;

constexpr void __cordl_internal_set__allowJoyConMouseRebindPolling(bool  value) ;

constexpr void __cordl_internal_set__allowedNpadStyles(int32_t  value) ;

constexpr void __cordl_internal_set__assignJoysticksByNpadId(bool  value) ;

constexpr void __cordl_internal_set__autoStartIMUs(bool  value) ;

constexpr void __cordl_internal_set__autoStartJoyConMouseSensors(bool  value) ;

constexpr void __cordl_internal_set__debugPad(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__handheldActivationMode(int32_t  value) ;

constexpr void __cordl_internal_set__initializeJcms(bool  value) ;

constexpr void __cordl_internal_set__joyConGripStyle(int32_t  value) ;

constexpr void __cordl_internal_set__npadHandheld(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo1(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo2(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo3(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo4(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo5(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo6(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo7(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo8(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__streamPlayAllowedGuestNpadStyles(int32_t  value) ;

constexpr void __cordl_internal_set__streamPlayGuest1(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  value) ;

constexpr void __cordl_internal_set__streamPlayGuest2(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  value) ;

constexpr void __cordl_internal_set__streamPlayGuest3(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  value) ;

constexpr void __cordl_internal_set__streamPlayGuestJoyConGripStyle(int32_t  value) ;

constexpr void __cordl_internal_set__streamPlayGuestSupportedHidFeatures(int32_t  value) ;

constexpr void __cordl_internal_set__supportJoyConMouseSensors(bool  value) ;

constexpr void __cordl_internal_set__useVibrationThread(bool  value) ;

/// @brief Method .ctor, addr 0x1803a7540, size 0x2c0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_delegates>b__95_0, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__95_0() ;

/// @brief Method <get_delegates>b__95_1, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_1(int32_t  x) ;

/// @brief Method <get_delegates>b__95_10, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_10() ;

/// @brief Method <get_delegates>b__95_11, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_11() ;

/// @brief Method <get_delegates>b__95_12, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_12() ;

/// @brief Method <get_delegates>b__95_13, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_13() ;

/// @brief Method <get_delegates>b__95_14, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_14() ;

/// @brief Method <get_delegates>b__95_15, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_15() ;

/// @brief Method <get_delegates>b__95_16, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_16() ;

/// @brief Method <get_delegates>b__95_17, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_17() ;

/// @brief Method <get_delegates>b__95_18, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_18() ;

/// @brief Method <get_delegates>b__95_19, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_19() ;

/// @brief Method <get_delegates>b__95_2, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__95_2() ;

/// @brief Method <get_delegates>b__95_20, addr 0x1803a7440, size 0x10, virtual false, abstract: false, final false
inline bool _get_delegates_b__95_20() ;

/// @brief Method <get_delegates>b__95_21, addr 0x1803a7490, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_21(bool  x) ;

/// @brief Method <get_delegates>b__95_22, addr 0x1803a7450, size 0x10, virtual false, abstract: false, final false
inline bool _get_delegates_b__95_22() ;

/// @brief Method <get_delegates>b__95_23, addr 0x1803a74a0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_23(bool  x) ;

/// @brief Method <get_delegates>b__95_24, addr 0x1803a7460, size 0x10, virtual false, abstract: false, final false
inline bool _get_delegates_b__95_24() ;

/// @brief Method <get_delegates>b__95_25, addr 0x1803a74b0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_25(bool  x) ;

/// @brief Method <get_delegates>b__95_26, addr 0x1803a7470, size 0x10, virtual false, abstract: false, final false
inline bool _get_delegates_b__95_26() ;

/// @brief Method <get_delegates>b__95_27, addr 0x1803a74c0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_27(bool  x) ;

/// @brief Method <get_delegates>b__95_28, addr 0x1803a74f0, size 0x10, virtual false, abstract: false, final false
inline bool _get_delegates_b__95_28() ;

/// @brief Method <get_delegates>b__95_29, addr 0x1803a7500, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_29(bool  x) ;

/// @brief Method <get_delegates>b__95_3, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_3(int32_t  x) ;

/// @brief Method <get_delegates>b__95_30, addr 0x1803a7510, size 0x10, virtual false, abstract: false, final false
inline bool _get_delegates_b__95_30() ;

/// @brief Method <get_delegates>b__95_31, addr 0x1803a7520, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_31(bool  x) ;

/// @brief Method <get_delegates>b__95_32, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__95_32() ;

/// @brief Method <get_delegates>b__95_33, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_33(int32_t  x) ;

/// @brief Method <get_delegates>b__95_34, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__95_34() ;

/// @brief Method <get_delegates>b__95_35, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_35(int32_t  x) ;

/// @brief Method <get_delegates>b__95_36, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__95_36() ;

/// @brief Method <get_delegates>b__95_37, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_37(int32_t  x) ;

/// @brief Method <get_delegates>b__95_38, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_38() ;

/// @brief Method <get_delegates>b__95_39, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_39() ;

/// @brief Method <get_delegates>b__95_4, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool _get_delegates_b__95_4() ;

/// @brief Method <get_delegates>b__95_40, addr 0x1802ec4b0, size 0x10, virtual false, abstract: false, final false
inline ::System::Object* _get_delegates_b__95_40() ;

/// @brief Method <get_delegates>b__95_5, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_5(bool  x) ;

/// @brief Method <get_delegates>b__95_6, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__95_6() ;

/// @brief Method <get_delegates>b__95_7, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_7(int32_t  x) ;

/// @brief Method <get_delegates>b__95_8, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool _get_delegates_b__95_8() ;

/// @brief Method <get_delegates>b__95_9, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__95_9(bool  x) ;

/// @brief Method get_adjustIMUsForGripStyle, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_adjustIMUsForGripStyle() ;

/// @brief Method get_allowJoyConMouseRebindPolling, addr 0x1803a7470, size 0x10, virtual false, abstract: false, final false
inline bool get_allowJoyConMouseRebindPolling() ;

/// @brief Method get_allowedNpadStyles, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_allowedNpadStyles() ;

/// @brief Method get_assignJoysticksByNpadId, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_assignJoysticksByNpadId() ;

/// @brief Method get_autoStartIMUs, addr 0x1803a7450, size 0x10, virtual false, abstract: false, final false
inline bool get_autoStartIMUs() ;

/// @brief Method get_autoStartJoyConMouseSensors, addr 0x1803a7460, size 0x10, virtual false, abstract: false, final false
inline bool get_autoStartJoyConMouseSensors() ;

/// @brief Method get_debugPad, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal* get_debugPad() ;

/// @brief Method get_delegates, addr 0x1803a7800, size 0xe90, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* get_delegates() ;

/// @brief Method get_handheldActivationMode, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_handheldActivationMode() ;

/// @brief Method get_joyConGripStyle, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_joyConGripStyle() ;

/// @brief Method get_npadHandheld, addr 0x1803a74e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* get_npadHandheld() ;

/// @brief Method get_npadNo1, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* get_npadNo1() ;

/// @brief Method get_npadNo2, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* get_npadNo2() ;

/// @brief Method get_npadNo3, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* get_npadNo3() ;

/// @brief Method get_npadNo4, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* get_npadNo4() ;

/// @brief Method get_npadNo5, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* get_npadNo5() ;

/// @brief Method get_npadNo6, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* get_npadNo6() ;

/// @brief Method get_npadNo7, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* get_npadNo7() ;

/// @brief Method get_npadNo8, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* get_npadNo8() ;

/// @brief Method get_streamPlayAllowedGuestNpadStyles, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_streamPlayAllowedGuestNpadStyles() ;

/// @brief Method get_streamPlayGuest1, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* get_streamPlayGuest1() ;

/// @brief Method get_streamPlayGuest2, addr 0x180312ea0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* get_streamPlayGuest2() ;

/// @brief Method get_streamPlayGuest3, addr 0x1802ec4b0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* get_streamPlayGuest3() ;

/// @brief Method get_streamPlayGuestJoyConGripStyle, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_streamPlayGuestJoyConGripStyle() ;

/// @brief Method get_streamPlayGuestSupportedHidFeatures, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_streamPlayGuestSupportedHidFeatures() ;

/// @brief Method get_supportJoyConMouseSensors, addr 0x1803a7510, size 0x10, virtual false, abstract: false, final false
inline bool get_supportJoyConMouseSensors() ;

/// @brief Method get_useVibrationThread, addr 0x1803a7440, size 0x10, virtual false, abstract: false, final false
inline bool get_useVibrationThread() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* i___Rewired__Utils__Interfaces__IKeyedData_1_int32_t_() noexcept;

/// @brief Method set_adjustIMUsForGripStyle, addr 0x1803a7530, size 0x10, virtual false, abstract: false, final false
inline void set_adjustIMUsForGripStyle(bool  value) ;

/// @brief Method set_allowJoyConMouseRebindPolling, addr 0x1803a74c0, size 0x10, virtual false, abstract: false, final false
inline void set_allowJoyConMouseRebindPolling(bool  value) ;

/// @brief Method set_allowedNpadStyles, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_allowedNpadStyles(int32_t  value) ;

/// @brief Method set_assignJoysticksByNpadId, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_assignJoysticksByNpadId(bool  value) ;

/// @brief Method set_autoStartIMUs, addr 0x1803a74a0, size 0x10, virtual false, abstract: false, final false
inline void set_autoStartIMUs(bool  value) ;

/// @brief Method set_autoStartJoyConMouseSensors, addr 0x1803a74b0, size 0x10, virtual false, abstract: false, final false
inline void set_autoStartJoyConMouseSensors(bool  value) ;

/// @brief Method set_handheldActivationMode, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_handheldActivationMode(int32_t  value) ;

/// @brief Method set_joyConGripStyle, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_joyConGripStyle(int32_t  value) ;

/// @brief Method set_streamPlayAllowedGuestNpadStyles, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_streamPlayAllowedGuestNpadStyles(int32_t  value) ;

/// @brief Method set_streamPlayGuestJoyConGripStyle, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void set_streamPlayGuestJoyConGripStyle(int32_t  value) ;

/// @brief Method set_streamPlayGuestSupportedHidFeatures, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_streamPlayGuestSupportedHidFeatures(int32_t  value) ;

/// @brief Method set_supportJoyConMouseSensors, addr 0x1803a7520, size 0x10, virtual false, abstract: false, final false
inline void set_supportJoyConMouseSensors(bool  value) ;

/// @brief Method set_useVibrationThread, addr 0x1803a7490, size 0x10, virtual false, abstract: false, final false
inline void set_useVibrationThread(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitch2InputManager_UserData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager_UserData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitch2InputManager_UserData(NintendoSwitch2InputManager_UserData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager_UserData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitch2InputManager_UserData(NintendoSwitch2InputManager_UserData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5655};

/// @brief Field defaultAllowedNpadStyles offset 0xffffffff size 0x4
static constexpr int32_t  defaultAllowedNpadStyles{static_cast<int32_t>(0x1f)};

/// @brief Field _allowedNpadStyles, offset: 0x10, size: 0x4, def value: None
 int32_t  ____allowedNpadStyles;

/// @brief Field _joyConGripStyle, offset: 0x14, size: 0x4, def value: None
 int32_t  ____joyConGripStyle;

/// @brief Field _adjustIMUsForGripStyle, offset: 0x18, size: 0x1, def value: None
 bool  ____adjustIMUsForGripStyle;

/// @brief Field _handheldActivationMode, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____handheldActivationMode;

/// @brief Field _assignJoysticksByNpadId, offset: 0x20, size: 0x1, def value: None
 bool  ____assignJoysticksByNpadId;

/// @brief Field _useVibrationThread, offset: 0x21, size: 0x1, def value: None
 bool  ____useVibrationThread;

/// @brief Field _autoStartIMUs, offset: 0x22, size: 0x1, def value: None
 bool  ____autoStartIMUs;

/// @brief Field _autoStartJoyConMouseSensors, offset: 0x23, size: 0x1, def value: None
 bool  ____autoStartJoyConMouseSensors;

/// @brief Field _allowJoyConMouseRebindPolling, offset: 0x24, size: 0x1, def value: None
 bool  ____allowJoyConMouseRebindPolling;

/// @brief Field _initializeJcms, offset: 0x25, size: 0x1, def value: None
 bool  ____initializeJcms;

/// @brief Field _supportJoyConMouseSensors, offset: 0x26, size: 0x1, def value: None
 bool  ____supportJoyConMouseSensors;

/// @brief Field _streamPlayAllowedGuestNpadStyles, offset: 0x28, size: 0x4, def value: None
 int32_t  ____streamPlayAllowedGuestNpadStyles;

/// @brief Field _streamPlayGuestJoyConGripStyle, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____streamPlayGuestJoyConGripStyle;

/// @brief Field _streamPlayGuestSupportedHidFeatures, offset: 0x30, size: 0x4, def value: None
 int32_t  ____streamPlayGuestSupportedHidFeatures;

/// @brief Field _npadNo1, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  ____npadNo1;

/// @brief Field _npadNo2, offset: 0x40, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  ____npadNo2;

/// @brief Field _npadNo3, offset: 0x48, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  ____npadNo3;

/// @brief Field _npadNo4, offset: 0x50, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  ____npadNo4;

/// @brief Field _npadNo5, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  ____npadNo5;

/// @brief Field _npadNo6, offset: 0x60, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  ____npadNo6;

/// @brief Field _npadNo7, offset: 0x68, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  ____npadNo7;

/// @brief Field _npadNo8, offset: 0x70, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  ____npadNo8;

/// @brief Field _npadHandheld, offset: 0x78, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal*  ____npadHandheld;

/// @brief Field _debugPad, offset: 0x80, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal*  ____debugPad;

/// @brief Field _streamPlayGuest1, offset: 0x88, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  ____streamPlayGuest1;

/// @brief Field _streamPlayGuest2, offset: 0x90, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  ____streamPlayGuest2;

/// @brief Field _streamPlayGuest3, offset: 0x98, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal*  ____streamPlayGuest3;

/// @brief Field __delegates, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  _____delegates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____allowedNpadStyles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____joyConGripStyle) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____adjustIMUsForGripStyle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____handheldActivationMode) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____assignJoysticksByNpadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____useVibrationThread) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____autoStartIMUs) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____autoStartJoyConMouseSensors) == 0x23, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____allowJoyConMouseRebindPolling) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____initializeJcms) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____supportJoyConMouseSensors) == 0x26, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____streamPlayAllowedGuestNpadStyles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____streamPlayGuestJoyConGripStyle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____streamPlayGuestSupportedHidFeatures) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____npadNo1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____npadNo2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____npadNo3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____npadNo4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____npadNo5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____npadNo6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____npadNo7) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____npadNo8) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____npadHandheld) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____debugPad) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____streamPlayGuest1) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____streamPlayGuest2) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, ____streamPlayGuest3) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData, _____delegates) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData) == 0xa8, "Size mismatch!");

} // namespace end def Rewired::Platforms::Switch2
// Dependencies System.Object
namespace Rewired::Platforms::Switch2 {
// Is value type: false
// CS Name: Rewired.Platforms.Switch2.NintendoSwitch2InputManager/NpadSettings_Internal
class CORDL_TYPE NintendoSwitch2InputManager_NpadSettings_Internal : public ::System::Object {
public:
// Declarations
/// @brief Field __delegates, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___delegates, put=__cordl_internal_set___delegates)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  __delegates;

/// @brief Field _isAllowed, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAllowed, put=__cordl_internal_set__isAllowed)) bool  _isAllowed;

/// @brief Field _joyConAssignmentMode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__joyConAssignmentMode, put=__cordl_internal_set__joyConAssignmentMode)) int32_t  _joyConAssignmentMode;

/// @brief Field _rewiredPlayerId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__rewiredPlayerId, put=__cordl_internal_set__rewiredPlayerId)) int32_t  _rewiredPlayerId;

 __declspec(property(get=get_delegates)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  delegates;

 __declspec(property(get=get_isAllowed, put=set_isAllowed)) bool  isAllowed;

 __declspec(property(get=get_joyConAssignmentMode, put=set_joyConAssignmentMode)) int32_t  joyConAssignmentMode;

 __declspec(property(get=get_rewiredPlayerId, put=set_rewiredPlayerId)) int32_t  rewiredPlayerId;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr operator  ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*() noexcept;

static inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal* New_ctor(int32_t  playerId) ;

/// @brief Method Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline bool Rewired_Utils_Interfaces_IKeyedData_System_Int32__TryGetValue(int32_t  key, ::by_ref<T>  value) ;

/// @brief Method Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TrySetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline bool Rewired_Utils_Interfaces_IKeyedData_System_Int32__TrySetValue(int32_t  key, T  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* const& __cordl_internal_get___delegates() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*& __cordl_internal_get___delegates() ;

constexpr bool const& __cordl_internal_get__isAllowed() const;

constexpr bool& __cordl_internal_get__isAllowed() ;

constexpr int32_t const& __cordl_internal_get__joyConAssignmentMode() const;

constexpr int32_t& __cordl_internal_get__joyConAssignmentMode() ;

constexpr int32_t const& __cordl_internal_get__rewiredPlayerId() const;

constexpr int32_t& __cordl_internal_get__rewiredPlayerId() ;

constexpr void __cordl_internal_set___delegates(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value) ;

constexpr void __cordl_internal_set__isAllowed(bool  value) ;

constexpr void __cordl_internal_set__joyConAssignmentMode(int32_t  value) ;

constexpr void __cordl_internal_set__rewiredPlayerId(int32_t  value) ;

/// @brief Method .ctor, addr 0x1803954d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  playerId) ;

/// @brief Method <get_delegates>b__15_0, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool _get_delegates_b__15_0() ;

/// @brief Method <get_delegates>b__15_1, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__15_1(bool  x) ;

/// @brief Method <get_delegates>b__15_2, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__15_2() ;

/// @brief Method <get_delegates>b__15_3, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__15_3(int32_t  x) ;

/// @brief Method <get_delegates>b__15_4, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__15_4() ;

/// @brief Method <get_delegates>b__15_5, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__15_5(int32_t  x) ;

/// @brief Method get_delegates, addr 0x1803954e0, size 0x250, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* get_delegates() ;

/// @brief Method get_isAllowed, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_isAllowed() ;

/// @brief Method get_joyConAssignmentMode, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_joyConAssignmentMode() ;

/// @brief Method get_rewiredPlayerId, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_rewiredPlayerId() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* i___Rewired__Utils__Interfaces__IKeyedData_1_int32_t_() noexcept;

/// @brief Method set_isAllowed, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_isAllowed(bool  value) ;

/// @brief Method set_joyConAssignmentMode, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_joyConAssignmentMode(int32_t  value) ;

/// @brief Method set_rewiredPlayerId, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_rewiredPlayerId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitch2InputManager_NpadSettings_Internal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager_NpadSettings_Internal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitch2InputManager_NpadSettings_Internal(NintendoSwitch2InputManager_NpadSettings_Internal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager_NpadSettings_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitch2InputManager_NpadSettings_Internal(NintendoSwitch2InputManager_NpadSettings_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5656};

/// @brief Field _isAllowed, offset: 0x10, size: 0x1, def value: None
 bool  ____isAllowed;

/// @brief Field _rewiredPlayerId, offset: 0x14, size: 0x4, def value: None
 int32_t  ____rewiredPlayerId;

/// @brief Field _joyConAssignmentMode, offset: 0x18, size: 0x4, def value: None
 int32_t  ____joyConAssignmentMode;

/// @brief Field __delegates, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  _____delegates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal, ____isAllowed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal, ____rewiredPlayerId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal, ____joyConAssignmentMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal, _____delegates) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Platforms::Switch2
// Dependencies System.Object
namespace Rewired::Platforms::Switch2 {
// Is value type: false
// CS Name: Rewired.Platforms.Switch2.NintendoSwitch2InputManager/StreamPlayGuestSettings_Internal
class CORDL_TYPE NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal : public ::System::Object {
public:
// Declarations
/// @brief Field __delegates, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get___delegates, put=__cordl_internal_set___delegates)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  __delegates;

/// @brief Field _guestId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__guestId, put=__cordl_internal_set__guestId)) int32_t  _guestId;

/// @brief Field _npadHandheld, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadHandheld, put=__cordl_internal_set__npadHandheld)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  _npadHandheld;

/// @brief Field _npadNo1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo1, put=__cordl_internal_set__npadNo1)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  _npadNo1;

/// @brief Field _npadNo2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo2, put=__cordl_internal_set__npadNo2)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  _npadNo2;

/// @brief Field _npadNo3, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo3, put=__cordl_internal_set__npadNo3)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  _npadNo3;

/// @brief Field _npadNo4, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo4, put=__cordl_internal_set__npadNo4)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  _npadNo4;

/// @brief Field _npadNo5, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo5, put=__cordl_internal_set__npadNo5)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  _npadNo5;

/// @brief Field _npadNo6, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo6, put=__cordl_internal_set__npadNo6)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  _npadNo6;

/// @brief Field _npadNo7, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo7, put=__cordl_internal_set__npadNo7)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  _npadNo7;

/// @brief Field _npadNo8, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__npadNo8, put=__cordl_internal_set__npadNo8)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  _npadNo8;

/// @brief Field _rewiredPlayerId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__rewiredPlayerId, put=__cordl_internal_set__rewiredPlayerId)) int32_t  _rewiredPlayerId;

 __declspec(property(get=get_delegates)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  delegates;

 __declspec(property(get=get_rewiredPlayerId, put=set_rewiredPlayerId)) int32_t  rewiredPlayerId;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr operator  ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*() noexcept;

static inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal* New_ctor(int32_t  guestId, int32_t  playerId) ;

/// @brief Method Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline bool Rewired_Utils_Interfaces_IKeyedData_System_Int32__TryGetValue(int32_t  key, ::by_ref<T>  value) ;

/// @brief Method Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TrySetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline bool Rewired_Utils_Interfaces_IKeyedData_System_Int32__TrySetValue(int32_t  key, T  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* const& __cordl_internal_get___delegates() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*& __cordl_internal_get___delegates() ;

constexpr int32_t const& __cordl_internal_get__guestId() const;

constexpr int32_t& __cordl_internal_get__guestId() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& __cordl_internal_get__npadHandheld() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& __cordl_internal_get__npadHandheld() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& __cordl_internal_get__npadNo1() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& __cordl_internal_get__npadNo1() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& __cordl_internal_get__npadNo2() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& __cordl_internal_get__npadNo2() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& __cordl_internal_get__npadNo3() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& __cordl_internal_get__npadNo3() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& __cordl_internal_get__npadNo4() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& __cordl_internal_get__npadNo4() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& __cordl_internal_get__npadNo5() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& __cordl_internal_get__npadNo5() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& __cordl_internal_get__npadNo6() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& __cordl_internal_get__npadNo6() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& __cordl_internal_get__npadNo7() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& __cordl_internal_get__npadNo7() ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* const& __cordl_internal_get__npadNo8() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*& __cordl_internal_get__npadNo8() ;

constexpr int32_t const& __cordl_internal_get__rewiredPlayerId() const;

constexpr int32_t& __cordl_internal_get__rewiredPlayerId() ;

constexpr void __cordl_internal_set___delegates(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value) ;

constexpr void __cordl_internal_set__guestId(int32_t  value) ;

constexpr void __cordl_internal_set__npadHandheld(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo1(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo2(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo3(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo4(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo5(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo6(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo7(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__npadNo8(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  value) ;

constexpr void __cordl_internal_set__rewiredPlayerId(int32_t  value) ;

/// @brief Method .ctor, addr 0x18039ea00, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(int32_t  guestId, int32_t  playerId) ;

/// @brief Method <get_delegates>b__17_0, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__17_0() ;

/// @brief Method <get_delegates>b__17_1, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__17_1() ;

/// @brief Method <get_delegates>b__17_10, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* _get_delegates_b__17_10() ;

/// @brief Method <get_delegates>b__17_11, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* _get_delegates_b__17_11() ;

/// @brief Method <get_delegates>b__17_2, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__17_2(int32_t  x) ;

/// @brief Method <get_delegates>b__17_3, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* _get_delegates_b__17_3() ;

/// @brief Method <get_delegates>b__17_4, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* _get_delegates_b__17_4() ;

/// @brief Method <get_delegates>b__17_5, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* _get_delegates_b__17_5() ;

/// @brief Method <get_delegates>b__17_6, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* _get_delegates_b__17_6() ;

/// @brief Method <get_delegates>b__17_7, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* _get_delegates_b__17_7() ;

/// @brief Method <get_delegates>b__17_8, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* _get_delegates_b__17_8() ;

/// @brief Method <get_delegates>b__17_9, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* _get_delegates_b__17_9() ;

/// @brief Method get_delegates, addr 0x18039ebb0, size 0x520, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* get_delegates() ;

/// @brief Method get_rewiredPlayerId, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_rewiredPlayerId() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* i___Rewired__Utils__Interfaces__IKeyedData_1_int32_t_() noexcept;

/// @brief Method set_rewiredPlayerId, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_rewiredPlayerId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal(NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal(NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5657};

/// @brief Field _guestId, offset: 0x10, size: 0x4, def value: None
 int32_t  ____guestId;

/// @brief Field _rewiredPlayerId, offset: 0x14, size: 0x4, def value: None
 int32_t  ____rewiredPlayerId;

/// @brief Field _npadNo1, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  ____npadNo1;

/// @brief Field _npadNo2, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  ____npadNo2;

/// @brief Field _npadNo3, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  ____npadNo3;

/// @brief Field _npadNo4, offset: 0x30, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  ____npadNo4;

/// @brief Field _npadNo5, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  ____npadNo5;

/// @brief Field _npadNo6, offset: 0x40, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  ____npadNo6;

/// @brief Field _npadNo7, offset: 0x48, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  ____npadNo7;

/// @brief Field _npadNo8, offset: 0x50, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  ____npadNo8;

/// @brief Field _npadHandheld, offset: 0x58, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal*  ____npadHandheld;

/// @brief Field __delegates, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  _____delegates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, ____guestId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, ____rewiredPlayerId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, ____npadNo1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, ____npadNo2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, ____npadNo3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, ____npadNo4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, ____npadNo5) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, ____npadNo6) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, ____npadNo7) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, ____npadNo8) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, ____npadHandheld) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal, _____delegates) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal) == 0x68, "Size mismatch!");

} // namespace end def Rewired::Platforms::Switch2
// Dependencies System.Object
namespace Rewired::Platforms::Switch2 {
// Is value type: false
// CS Name: Rewired.Platforms.Switch2.NintendoSwitch2InputManager/StreamPlayGuestPadSettings_Internal
class CORDL_TYPE NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal : public ::System::Object {
public:
// Declarations
/// @brief Field __delegates, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___delegates, put=__cordl_internal_set___delegates)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  __delegates;

/// @brief Field _npadId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__npadId, put=__cordl_internal_set__npadId)) int32_t  _npadId;

/// @brief Field _overrideParent, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__overrideParent, put=__cordl_internal_set__overrideParent)) bool  _overrideParent;

/// @brief Field _rewiredPlayerId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__rewiredPlayerId, put=__cordl_internal_set__rewiredPlayerId)) int32_t  _rewiredPlayerId;

 __declspec(property(get=get_delegates)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  delegates;

 __declspec(property(get=get_overrideParent, put=set_overrideParent)) bool  overrideParent;

 __declspec(property(get=get_rewiredPlayerId, put=set_rewiredPlayerId)) int32_t  rewiredPlayerId;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr operator  ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*() noexcept;

static inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal* New_ctor(int32_t  npadId) ;

/// @brief Method Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline bool Rewired_Utils_Interfaces_IKeyedData_System_Int32__TryGetValue(int32_t  key, ::by_ref<T>  value) ;

/// @brief Method Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TrySetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline bool Rewired_Utils_Interfaces_IKeyedData_System_Int32__TrySetValue(int32_t  key, T  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* const& __cordl_internal_get___delegates() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*& __cordl_internal_get___delegates() ;

constexpr int32_t const& __cordl_internal_get__npadId() const;

constexpr int32_t& __cordl_internal_get__npadId() ;

constexpr bool const& __cordl_internal_get__overrideParent() const;

constexpr bool& __cordl_internal_get__overrideParent() ;

constexpr int32_t const& __cordl_internal_get__rewiredPlayerId() const;

constexpr int32_t& __cordl_internal_get__rewiredPlayerId() ;

constexpr void __cordl_internal_set___delegates(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value) ;

constexpr void __cordl_internal_set__npadId(int32_t  value) ;

constexpr void __cordl_internal_set__overrideParent(bool  value) ;

constexpr void __cordl_internal_set__rewiredPlayerId(int32_t  value) ;

/// @brief Method .ctor, addr 0x18039e7d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  npadId) ;

/// @brief Method <get_delegates>b__12_0, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__12_0() ;

/// @brief Method <get_delegates>b__12_1, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__12_1() ;

/// @brief Method <get_delegates>b__12_2, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__12_2(int32_t  x) ;

/// @brief Method <get_delegates>b__12_3, addr 0x18039e7b0, size 0x10, virtual false, abstract: false, final false
inline bool _get_delegates_b__12_3() ;

/// @brief Method <get_delegates>b__12_4, addr 0x18039e7c0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__12_4(bool  x) ;

/// @brief Method get_delegates, addr 0x18039e7e0, size 0x220, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* get_delegates() ;

/// @brief Method get_overrideParent, addr 0x18039e7b0, size 0x10, virtual false, abstract: false, final false
inline bool get_overrideParent() ;

/// @brief Method get_rewiredPlayerId, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_rewiredPlayerId() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* i___Rewired__Utils__Interfaces__IKeyedData_1_int32_t_() noexcept;

/// @brief Method set_overrideParent, addr 0x18039e7c0, size 0x10, virtual false, abstract: false, final false
inline void set_overrideParent(bool  value) ;

/// @brief Method set_rewiredPlayerId, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_rewiredPlayerId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal(NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal(NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5658};

/// @brief Field _npadId, offset: 0x10, size: 0x4, def value: None
 int32_t  ____npadId;

/// @brief Field _overrideParent, offset: 0x14, size: 0x1, def value: None
 bool  ____overrideParent;

/// @brief Field _rewiredPlayerId, offset: 0x18, size: 0x4, def value: None
 int32_t  ____rewiredPlayerId;

/// @brief Field __delegates, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  _____delegates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal, ____npadId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal, ____overrideParent) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal, ____rewiredPlayerId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal, _____delegates) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Platforms::Switch2
// Dependencies System.Object
namespace Rewired::Platforms::Switch2 {
// Is value type: false
// CS Name: Rewired.Platforms.Switch2.NintendoSwitch2InputManager/DebugPadSettings_Internal
class CORDL_TYPE NintendoSwitch2InputManager_DebugPadSettings_Internal : public ::System::Object {
public:
// Declarations
/// @brief Field __delegates, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___delegates, put=__cordl_internal_set___delegates)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  __delegates;

/// @brief Field _enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Field _rewiredPlayerId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__rewiredPlayerId, put=__cordl_internal_set__rewiredPlayerId)) int32_t  _rewiredPlayerId;

 __declspec(property(get=get_delegates)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  delegates;

 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_rewiredPlayerId, put=set_rewiredPlayerId)) int32_t  rewiredPlayerId;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr operator  ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>*() noexcept;

static inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal* New_ctor(int32_t  playerId) ;

/// @brief Method Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline bool Rewired_Utils_Interfaces_IKeyedData_System_Int32__TryGetValue(int32_t  key, ::by_ref<T>  value) ;

/// @brief Method Rewired.Utils.Interfaces.IKeyedData<System.Int32>.TrySetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline bool Rewired_Utils_Interfaces_IKeyedData_System_Int32__TrySetValue(int32_t  key, T  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* const& __cordl_internal_get___delegates() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*& __cordl_internal_get___delegates() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr int32_t const& __cordl_internal_get__rewiredPlayerId() const;

constexpr int32_t& __cordl_internal_get__rewiredPlayerId() ;

constexpr void __cordl_internal_set___delegates(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

constexpr void __cordl_internal_set__rewiredPlayerId(int32_t  value) ;

/// @brief Method .ctor, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  playerId) ;

/// @brief Method <get_delegates>b__11_0, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool _get_delegates_b__11_0() ;

/// @brief Method <get_delegates>b__11_1, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__11_1(bool  x) ;

/// @brief Method <get_delegates>b__11_2, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t _get_delegates_b__11_2() ;

/// @brief Method <get_delegates>b__11_3, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void _get_delegates_b__11_3(int32_t  x) ;

/// @brief Method get_delegates, addr 0x1803924d0, size 0x1b0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* get_delegates() ;

/// @brief Method get_enabled, addr 0x180392490, size 0x10, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_rewiredPlayerId, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_rewiredPlayerId() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>"
constexpr ::Rewired::Utils::Interfaces::IKeyedData_1<int32_t>* i___Rewired__Utils__Interfaces__IKeyedData_1_int32_t_() noexcept;

/// @brief Method set_enabled, addr 0x1803924a0, size 0x10, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

/// @brief Method set_rewiredPlayerId, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_rewiredPlayerId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitch2InputManager_DebugPadSettings_Internal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager_DebugPadSettings_Internal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitch2InputManager_DebugPadSettings_Internal(NintendoSwitch2InputManager_DebugPadSettings_Internal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager_DebugPadSettings_Internal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitch2InputManager_DebugPadSettings_Internal(NintendoSwitch2InputManager_DebugPadSettings_Internal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5659};

/// @brief Field _enabled, offset: 0x10, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field _rewiredPlayerId, offset: 0x14, size: 0x4, def value: None
 int32_t  ____rewiredPlayerId;

/// @brief Field __delegates, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  _____delegates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal, ____enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal, ____rewiredPlayerId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal, _____delegates) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Platforms::Switch2
// Dependencies UnityEngine.MonoBehaviour
namespace Rewired::Platforms::Switch2 {
// Is value type: false
// CS Name: Rewired.Platforms.Switch2.NintendoSwitch2InputManager
class CORDL_TYPE NintendoSwitch2InputManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DebugPadSettings_Internal = ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_DebugPadSettings_Internal;

using NpadSettings_Internal = ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_NpadSettings_Internal;

using StreamPlayGuestPadSettings_Internal = ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestPadSettings_Internal;

using StreamPlayGuestSettings_Internal = ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_StreamPlayGuestSettings_Internal;

using UserData = ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData;

/// @brief Field _userData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__userData, put=__cordl_internal_set__userData)) ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*  _userData;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IExternalInputManager"
constexpr operator  ::Rewired::Utils::Interfaces::IExternalInputManager*() noexcept;

static inline ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager* New_ctor() ;

/// @brief Method Rewired.Utils.Interfaces.IExternalInputManager.Deinitialize, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Rewired_Utils_Interfaces_IExternalInputManager_Deinitialize() ;

/// @brief Method Rewired.Utils.Interfaces.IExternalInputManager.Initialize, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* Rewired_Utils_Interfaces_IExternalInputManager_Initialize(::Rewired::Platforms::Platform  platform, ::System::Object*  configVars) ;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData* const& __cordl_internal_get__userData() const;

constexpr ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*& __cordl_internal_get__userData() ;

constexpr void __cordl_internal_set__userData(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*  value) ;

/// @brief Method .ctor, addr 0x180395480, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IExternalInputManager"
constexpr ::Rewired::Utils::Interfaces::IExternalInputManager* i___Rewired__Utils__Interfaces__IExternalInputManager() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoSwitch2InputManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoSwitch2InputManager(NintendoSwitch2InputManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoSwitch2InputManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoSwitch2InputManager(NintendoSwitch2InputManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5660};

/// @brief Field _userData, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Platforms::Switch2::NintendoSwitch2InputManager_UserData*  ____userData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager, ____userData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Switch2::NintendoSwitch2InputManager) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Platforms::Switch2
