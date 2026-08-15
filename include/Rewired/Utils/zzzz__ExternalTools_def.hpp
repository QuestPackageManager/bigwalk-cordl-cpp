#pragma once
// IWYU pragma private; include "Rewired/Utils/ExternalTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ExternalTools)
namespace Rewired::Utils::Interfaces {
class IExternalTools;
}
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
template<typename TResult>
class Func_1;
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
namespace Rewired::Utils {
class ExternalTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::ExternalTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::ExternalTools*, "Rewired.Utils", "ExternalTools");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.ExternalTools
class CORDL_TYPE ExternalTools : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_UnityInput_IsTouchPressureSupported)) bool  UnityInput_IsTouchPressureSupported;

/// @brief Field XboxOneInput_OnGamepadStateChange, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_XboxOneInput_OnGamepadStateChange, put=__cordl_internal_set_XboxOneInput_OnGamepadStateChange)) ::System::Action_2<uint32_t,bool>*  XboxOneInput_OnGamepadStateChange;

/// @brief Field _EditorPausedStateChangedEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__EditorPausedStateChangedEvent, put=__cordl_internal_set__EditorPausedStateChangedEvent)) ::System::Action_1<bool>*  _EditorPausedStateChangedEvent;

/// @brief Field _getPlatformInitializerDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__getPlatformInitializerDelegate, put=setStaticF__getPlatformInitializerDelegate)) ::System::Func_1<::System::Object*>*  _getPlatformInitializerDelegate;

/// @brief Field _isEditorPaused, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__isEditorPaused, put=__cordl_internal_set__isEditorPaused)) bool  _isEditorPaused;

 __declspec(property(get=get_isEditorPaused)) bool  isEditorPaused;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IExternalTools"
constexpr operator  ::Rewired::Utils::Interfaces::IExternalTools*() noexcept;

/// @brief Method CreateControllerTemplate, addr 0x180393420, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::IControllerTemplate* CreateControllerTemplate(::System::Guid  typeGuid, ::System::Object*  payload) ;

/// @brief Method Destroy, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Destroy() ;

/// @brief Method GetAndroidAPILevel, addr 0x180393450, size 0x10, virtual true, abstract: false, final true
inline int32_t GetAndroidAPILevel() ;

/// @brief Method GetControllerTemplateInterfaceTypes, addr 0x180393460, size 0x20, virtual true, abstract: false, final true
inline ::ArrayW<::System::Type*> GetControllerTemplateInterfaceTypes() ;

/// @brief Method GetControllerTemplateTypes, addr 0x180393480, size 0x20, virtual true, abstract: false, final true
inline ::ArrayW<::System::Type*> GetControllerTemplateTypes() ;

/// @brief Method GetDeviceVIDPIDs, addr 0x1803934a0, size 0x80, virtual true, abstract: false, final true
inline void GetDeviceVIDPIDs(::by_ref<::System::Collections::Generic::List_1<int32_t>*>  vids, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  pids) ;

/// @brief Method GetFocusedEditorWindowTitle, addr 0x180393520, size 0x20, virtual true, abstract: false, final true
inline ::StringW GetFocusedEditorWindowTitle() ;

/// @brief Method GetPlatformInitializer, addr 0x180393540, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* GetPlatformInitializer() ;

/// @brief Method IsEditorSceneViewFocused, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool IsEditorSceneViewFocused() ;

/// @brief Method LinuxInput_IsJoystickPreconfigured, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool LinuxInput_IsJoystickPreconfigured(::StringW  name) ;

static inline ::Rewired::Utils::ExternalTools* New_ctor() ;

/// @brief Method UnityInput_GetTouchMaximumPossiblePressure, addr 0x180393550, size 0x10, virtual true, abstract: false, final true
inline float_t UnityInput_GetTouchMaximumPossiblePressure(::by_ref<::UnityEngine::Touch>  touch) ;

/// @brief Method UnityInput_GetTouchPressure, addr 0x180393560, size 0x10, virtual true, abstract: false, final true
inline float_t UnityInput_GetTouchPressure(::by_ref<::UnityEngine::Touch>  touch) ;

/// @brief Method UnityUI_Graphic_GetRaycastTarget, addr 0x180393570, size 0x110, virtual true, abstract: false, final true
inline bool UnityUI_Graphic_GetRaycastTarget(::System::Object*  graphic) ;

/// @brief Method UnityUI_Graphic_SetRaycastTarget, addr 0x180393680, size 0x110, virtual true, abstract: false, final true
inline void UnityUI_Graphic_SetRaycastTarget(::System::Object*  graphic, bool  value) ;

/// @brief Method WindowsStandalone_ForwardRawInput, addr 0x180393790, size 0x30, virtual true, abstract: false, final true
inline void WindowsStandalone_ForwardRawInput(::System::IntPtr  rawInputHeaderIndices, ::System::IntPtr  rawInputDataIndices, uint32_t  indicesCount, ::System::IntPtr  rawInputData, uint32_t  rawInputDataSize) ;

/// @brief Method XboxOneInput_GetControllerId, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline uint64_t XboxOneInput_GetControllerId(uint32_t  unityJoystickId) ;

/// @brief Method XboxOneInput_GetControllerType, addr 0x180393520, size 0x20, virtual true, abstract: false, final true
inline ::StringW XboxOneInput_GetControllerType(uint64_t  xboxControllerId) ;

/// @brief Method XboxOneInput_GetJoystickId, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline uint32_t XboxOneInput_GetJoystickId(uint64_t  xboxControllerId) ;

/// @brief Method XboxOneInput_GetUserIdForGamepad, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline int32_t XboxOneInput_GetUserIdForGamepad(uint32_t  id) ;

/// @brief Method XboxOneInput_IsGamepadActive, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool XboxOneInput_IsGamepadActive(uint32_t  unityJoystickId) ;

/// @brief Method XboxOne_Gamepad_PulseVibrateMotor, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void XboxOne_Gamepad_PulseVibrateMotor(uint64_t  xboxOneJoystickId, int32_t  motorInt, float_t  startLevel, float_t  endLevel, uint64_t  durationMS) ;

/// @brief Method XboxOne_Gamepad_SetGamepadVibration, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final true
inline bool XboxOne_Gamepad_SetGamepadVibration(uint64_t  xboxOneJoystickId, float_t  leftMotor, float_t  rightMotor, float_t  leftTriggerLevel, float_t  rightTriggerLevel) ;

/// @brief Method XboxOne_Gamepad_UpdatePlugin, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void XboxOne_Gamepad_UpdatePlugin() ;

constexpr ::System::Action_2<uint32_t,bool>* const& __cordl_internal_get_XboxOneInput_OnGamepadStateChange() const;

constexpr ::System::Action_2<uint32_t,bool>*& __cordl_internal_get_XboxOneInput_OnGamepadStateChange() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get__EditorPausedStateChangedEvent() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get__EditorPausedStateChangedEvent() ;

constexpr bool const& __cordl_internal_get__isEditorPaused() const;

constexpr bool& __cordl_internal_get__isEditorPaused() ;

constexpr void __cordl_internal_set_XboxOneInput_OnGamepadStateChange(::System::Action_2<uint32_t,bool>*  value) ;

constexpr void __cordl_internal_set__EditorPausedStateChangedEvent(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set__isEditorPaused(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_EditorPausedStateChangedEvent, addr 0x1803937c0, size 0x90, virtual true, abstract: false, final true
inline void add_EditorPausedStateChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method add_XboxOneInput_OnGamepadStateChange, addr 0x180393850, size 0x90, virtual true, abstract: false, final true
inline void add_XboxOneInput_OnGamepadStateChange(::System::Action_2<uint32_t,bool>*  value) ;

static inline ::System::Func_1<::System::Object*>* getStaticF__getPlatformInitializerDelegate() ;

/// @brief Method get_UnityInput_IsTouchPressureSupported, addr 0x1803938e0, size 0x10, virtual true, abstract: false, final true
inline bool get_UnityInput_IsTouchPressureSupported() ;

/// @brief Method get_getPlatformInitializerDelegate, addr 0x1803938f0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Func_1<::System::Object*>* get_getPlatformInitializerDelegate() ;

/// @brief Method get_isEditorPaused, addr 0x180392490, size 0x10, virtual true, abstract: false, final true
inline bool get_isEditorPaused() ;

/// @brief Convert to "::Rewired::Utils::Interfaces::IExternalTools"
constexpr ::Rewired::Utils::Interfaces::IExternalTools* i___Rewired__Utils__Interfaces__IExternalTools() noexcept;

/// @brief Method remove_EditorPausedStateChangedEvent, addr 0x180393910, size 0x90, virtual true, abstract: false, final true
inline void remove_EditorPausedStateChangedEvent(::System::Action_1<bool>*  value) ;

/// @brief Method remove_XboxOneInput_OnGamepadStateChange, addr 0x1803939a0, size 0x90, virtual true, abstract: false, final true
inline void remove_XboxOneInput_OnGamepadStateChange(::System::Action_2<uint32_t,bool>*  value) ;

static inline void setStaticF__getPlatformInitializerDelegate(::System::Func_1<::System::Object*>*  value) ;

/// @brief Method set_getPlatformInitializerDelegate, addr 0x180393a30, size 0x30, virtual false, abstract: false, final false
static inline void set_getPlatformInitializerDelegate(::System::Func_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExternalTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExternalTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExternalTools(ExternalTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExternalTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExternalTools(ExternalTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5661};

/// @brief Field _isEditorPaused, offset: 0x10, size: 0x1, def value: None
 bool  ____isEditorPaused;

/// @brief Field _EditorPausedStateChangedEvent, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<bool>*  ____EditorPausedStateChangedEvent;

/// @brief Field XboxOneInput_OnGamepadStateChange, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<uint32_t,bool>*  ___XboxOneInput_OnGamepadStateChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::ExternalTools, ____isEditorPaused) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::ExternalTools, ____EditorPausedStateChangedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::ExternalTools, ___XboxOneInput_OnGamepadStateChange) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::ExternalTools) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Utils
