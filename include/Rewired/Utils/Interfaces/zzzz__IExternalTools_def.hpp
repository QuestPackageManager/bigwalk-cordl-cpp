#pragma once
// IWYU pragma private; include "Rewired/Utils/Interfaces/IExternalTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IExternalTools)
namespace Rewired {
class IControllerTemplate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
struct Guid;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Touch;
}
// Forward declare root types
namespace Rewired::Utils::Interfaces {
class IExternalTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Interfaces::IExternalTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Interfaces::IExternalTools*, "Rewired.Utils.Interfaces", "IExternalTools");
// Dependencies 
namespace Rewired::Utils::Interfaces {
// Is value type: false
// CS Name: Rewired.Utils.Interfaces.IExternalTools
class CORDL_TYPE IExternalTools {
public:
// Declarations
 __declspec(property(get=get_UnityInput_IsTouchPressureSupported)) bool  UnityInput_IsTouchPressureSupported;

 __declspec(property(get=get_isEditorPaused)) bool  isEditorPaused;

/// @brief Method CreateControllerTemplate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::IControllerTemplate* CreateControllerTemplate(::System::Guid  typeGuid, ::System::Object*  payload) ;

/// @brief Method Destroy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method GetAndroidAPILevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetAndroidAPILevel() ;

/// @brief Method GetControllerTemplateInterfaceTypes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*> GetControllerTemplateInterfaceTypes() ;

/// @brief Method GetControllerTemplateTypes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*> GetControllerTemplateTypes() ;

/// @brief Method GetDeviceVIDPIDs, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GetDeviceVIDPIDs(::by_ref<::System::Collections::Generic::List_1<int32_t>*>  vids, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  pids) ;

/// @brief Method GetFocusedEditorWindowTitle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetFocusedEditorWindowTitle() ;

/// @brief Method GetPlatformInitializer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* GetPlatformInitializer() ;

/// @brief Method IsEditorSceneViewFocused, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsEditorSceneViewFocused() ;

/// @brief Method LinuxInput_IsJoystickPreconfigured, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool LinuxInput_IsJoystickPreconfigured(::StringW  name) ;

/// @brief Method UnityInput_GetTouchMaximumPossiblePressure, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t UnityInput_GetTouchMaximumPossiblePressure(::by_ref<::UnityEngine::Touch>  touch) ;

/// @brief Method UnityInput_GetTouchPressure, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t UnityInput_GetTouchPressure(::by_ref<::UnityEngine::Touch>  touch) ;

/// @brief Method UnityUI_Graphic_GetRaycastTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool UnityUI_Graphic_GetRaycastTarget(::System::Object*  graphic) ;

/// @brief Method UnityUI_Graphic_SetRaycastTarget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UnityUI_Graphic_SetRaycastTarget(::System::Object*  graphic, bool  value) ;

/// @brief Method WindowsStandalone_ForwardRawInput, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void WindowsStandalone_ForwardRawInput(::System::IntPtr  rawInputHeaderIndices, ::System::IntPtr  rawInputDataIndices, uint32_t  indicesCount, ::System::IntPtr  rawInputData, uint32_t  rawInputDataSize) ;

/// @brief Method XboxOneInput_GetControllerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint64_t XboxOneInput_GetControllerId(uint32_t  unityJoystickId) ;

/// @brief Method XboxOneInput_GetControllerType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW XboxOneInput_GetControllerType(uint64_t  xboxControllerId) ;

/// @brief Method XboxOneInput_GetJoystickId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint32_t XboxOneInput_GetJoystickId(uint64_t  xboxControllerId) ;

/// @brief Method XboxOneInput_GetUserIdForGamepad, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t XboxOneInput_GetUserIdForGamepad(uint32_t  id) ;

/// @brief Method XboxOneInput_IsGamepadActive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool XboxOneInput_IsGamepadActive(uint32_t  unityJoystickId) ;

/// @brief Method XboxOne_Gamepad_PulseVibrateMotor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void XboxOne_Gamepad_PulseVibrateMotor(uint64_t  xboxOneJoystickId, int32_t  motor, float_t  startLevel, float_t  endLevel, uint64_t  durationMS) ;

/// @brief Method XboxOne_Gamepad_SetGamepadVibration, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool XboxOne_Gamepad_SetGamepadVibration(uint64_t  xboxOneJoystickId, float_t  leftMotor, float_t  rightMotor, float_t  leftTriggerLevel, float_t  rightTriggerLevel) ;

/// @brief Method XboxOne_Gamepad_UpdatePlugin, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void XboxOne_Gamepad_UpdatePlugin() ;

/// @brief Method add_EditorPausedStateChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_EditorPausedStateChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method add_XboxOneInput_OnGamepadStateChange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void add_XboxOneInput_OnGamepadStateChange(::System::Action_2<uint32_t,bool>*  value) ;

/// @brief Method get_UnityInput_IsTouchPressureSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_UnityInput_IsTouchPressureSupported() ;

/// @brief Method get_isEditorPaused, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_isEditorPaused() ;

/// @brief Method remove_EditorPausedStateChangedEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_EditorPausedStateChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method remove_XboxOneInput_OnGamepadStateChange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void remove_XboxOneInput_OnGamepadStateChange(::System::Action_2<uint32_t,bool>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IExternalTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IExternalTools(IExternalTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3069};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Interfaces
