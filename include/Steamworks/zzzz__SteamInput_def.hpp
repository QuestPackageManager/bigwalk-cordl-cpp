#pragma once
// IWYU pragma private; include "Steamworks/SteamInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamInput)
namespace Steamworks {
struct EControllerHapticLocation;
}
namespace Steamworks {
struct EInputActionOrigin;
}
namespace Steamworks {
struct ESteamControllerPad;
}
namespace Steamworks {
struct ESteamInputGlyphSize;
}
namespace Steamworks {
struct ESteamInputType;
}
namespace Steamworks {
struct EXboxOrigin;
}
namespace Steamworks {
struct InputActionSetHandle_t;
}
namespace Steamworks {
struct InputAnalogActionData_t;
}
namespace Steamworks {
struct InputAnalogActionHandle_t;
}
namespace Steamworks {
struct InputDigitalActionData_t;
}
namespace Steamworks {
struct InputDigitalActionHandle_t;
}
namespace Steamworks {
struct InputHandle_t;
}
namespace Steamworks {
struct InputMotionData_t;
}
namespace Steamworks {
class SteamInputActionEventCallbackPointer;
}
// Forward declare root types
namespace Steamworks {
class SteamInput;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamInput*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamInput*, "Steamworks", "SteamInput");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamInput
class CORDL_TYPE SteamInput : public ::System::Object {
public:
// Declarations
/// @brief Method ActivateActionSet, addr 0x1805aef70, size 0x50, virtual false, abstract: false, final false
static inline void ActivateActionSet(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetHandle) ;

/// @brief Method ActivateActionSetLayer, addr 0x1805aef20, size 0x50, virtual false, abstract: false, final false
static inline void ActivateActionSetLayer(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetLayerHandle) ;

/// @brief Method BNewDataAvailable, addr 0x1805aefc0, size 0x30, virtual false, abstract: false, final false
static inline bool BNewDataAvailable() ;

/// @brief Method BWaitForData, addr 0x1805aeff0, size 0x50, virtual false, abstract: false, final false
static inline bool BWaitForData(bool  bWaitForever, uint32_t  unTimeout) ;

/// @brief Method DeactivateActionSetLayer, addr 0x1805af040, size 0x50, virtual false, abstract: false, final false
static inline void DeactivateActionSetLayer(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetLayerHandle) ;

/// @brief Method DeactivateAllActionSetLayers, addr 0x1805af090, size 0x40, virtual false, abstract: false, final false
static inline void DeactivateAllActionSetLayers(::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method EnableActionEventCallbacks, addr 0x1805af0d0, size 0x40, virtual false, abstract: false, final false
static inline void EnableActionEventCallbacks(::Steamworks::SteamInputActionEventCallbackPointer*  pCallback) ;

/// @brief Method EnableDeviceCallbacks, addr 0x1805af110, size 0x30, virtual false, abstract: false, final false
static inline void EnableDeviceCallbacks() ;

/// @brief Method GetActionOriginFromXboxOrigin, addr 0x1805af140, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::EInputActionOrigin GetActionOriginFromXboxOrigin(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::EXboxOrigin  eOrigin) ;

/// @brief Method GetActionSetHandle, addr 0x1805af190, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::InputActionSetHandle_t GetActionSetHandle(::StringW  pszActionSetName) ;

/// @brief Method GetActiveActionSetLayers, addr 0x1805af270, size 0x70, virtual false, abstract: false, final false
static inline int32_t GetActiveActionSetLayers(::Steamworks::InputHandle_t  inputHandle, ::ArrayW<::Steamworks::InputActionSetHandle_t>  handlesOut) ;

/// @brief Method GetAnalogActionData, addr 0x1805af2e0, size 0x60, virtual false, abstract: false, final false
static inline ::Steamworks::InputAnalogActionData_t GetAnalogActionData(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputAnalogActionHandle_t  analogActionHandle) ;

/// @brief Method GetAnalogActionHandle, addr 0x1805af340, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::InputAnalogActionHandle_t GetAnalogActionHandle(::StringW  pszActionName) ;

/// @brief Method GetAnalogActionOrigins, addr 0x1805af420, size 0x90, virtual false, abstract: false, final false
static inline int32_t GetAnalogActionOrigins(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetHandle, ::Steamworks::InputAnalogActionHandle_t  analogActionHandle, ::ArrayW<::Steamworks::EInputActionOrigin>  originsOut) ;

/// @brief Method GetConnectedControllers, addr 0x1805af4b0, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetConnectedControllers(::ArrayW<::Steamworks::InputHandle_t>  handlesOut) ;

/// @brief Method GetControllerForGamepadIndex, addr 0x1805af510, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::InputHandle_t GetControllerForGamepadIndex(int32_t  nIndex) ;

/// @brief Method GetCurrentActionSet, addr 0x1805af550, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::InputActionSetHandle_t GetCurrentActionSet(::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method GetDeviceBindingRevision, addr 0x1805af590, size 0x60, virtual false, abstract: false, final false
static inline bool GetDeviceBindingRevision(::Steamworks::InputHandle_t  inputHandle, ::by_ref<int32_t>  pMajor, ::by_ref<int32_t>  pMinor) ;

/// @brief Method GetDigitalActionData, addr 0x1805af5f0, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::InputDigitalActionData_t GetDigitalActionData(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputDigitalActionHandle_t  digitalActionHandle) ;

/// @brief Method GetDigitalActionHandle, addr 0x1805af640, size 0xe0, virtual false, abstract: false, final false
static inline ::Steamworks::InputDigitalActionHandle_t GetDigitalActionHandle(::StringW  pszActionName) ;

/// @brief Method GetDigitalActionOrigins, addr 0x1805af720, size 0x90, virtual false, abstract: false, final false
static inline int32_t GetDigitalActionOrigins(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputActionSetHandle_t  actionSetHandle, ::Steamworks::InputDigitalActionHandle_t  digitalActionHandle, ::ArrayW<::Steamworks::EInputActionOrigin>  originsOut) ;

/// @brief Method GetGamepadIndexForController, addr 0x1805af7b0, size 0x40, virtual false, abstract: false, final false
static inline int32_t GetGamepadIndexForController(::Steamworks::InputHandle_t  ulinputHandle) ;

/// @brief Method GetGlyphForActionOrigin_Legacy, addr 0x1805af7f0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetGlyphForActionOrigin_Legacy(::Steamworks::EInputActionOrigin  eOrigin) ;

/// @brief Method GetGlyphForXboxOrigin, addr 0x1805af830, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetGlyphForXboxOrigin(::Steamworks::EXboxOrigin  eOrigin) ;

/// @brief Method GetGlyphPNGForActionOrigin, addr 0x1805af870, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetGlyphPNGForActionOrigin(::Steamworks::EInputActionOrigin  eOrigin, ::Steamworks::ESteamInputGlyphSize  eSize, uint32_t  unFlags) ;

/// @brief Method GetGlyphSVGForActionOrigin, addr 0x1805af8e0, size 0x50, virtual false, abstract: false, final false
static inline ::StringW GetGlyphSVGForActionOrigin(::Steamworks::EInputActionOrigin  eOrigin, uint32_t  unFlags) ;

/// @brief Method GetInputTypeForHandle, addr 0x1805af930, size 0x40, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamInputType GetInputTypeForHandle(::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method GetMotionData, addr 0x1805af970, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::InputMotionData_t GetMotionData(::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method GetRemotePlaySessionID, addr 0x1805af9c0, size 0x40, virtual false, abstract: false, final false
static inline uint32_t GetRemotePlaySessionID(::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method GetSessionInputConfigurationSettings, addr 0x1805afa00, size 0x30, virtual false, abstract: false, final false
static inline uint16_t GetSessionInputConfigurationSettings() ;

/// @brief Method GetStringForActionOrigin, addr 0x1805afa30, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetStringForActionOrigin(::Steamworks::EInputActionOrigin  eOrigin) ;

/// @brief Method GetStringForAnalogActionName, addr 0x1805afa70, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetStringForAnalogActionName(::Steamworks::InputAnalogActionHandle_t  eActionHandle) ;

/// @brief Method GetStringForDigitalActionName, addr 0x1805afab0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetStringForDigitalActionName(::Steamworks::InputDigitalActionHandle_t  eActionHandle) ;

/// @brief Method GetStringForXboxOrigin, addr 0x1805afaf0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetStringForXboxOrigin(::Steamworks::EXboxOrigin  eOrigin) ;

/// @brief Method Init, addr 0x1805afb30, size 0x40, virtual false, abstract: false, final false
static inline bool Init(bool  bExplicitlyCallRunFrame) ;

/// @brief Method Legacy_TriggerHapticPulse, addr 0x1805afb70, size 0x60, virtual false, abstract: false, final false
static inline void Legacy_TriggerHapticPulse(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::ESteamControllerPad  eTargetPad, uint16_t  usDurationMicroSec) ;

/// @brief Method Legacy_TriggerRepeatedHapticPulse, addr 0x1805afbd0, size 0x90, virtual false, abstract: false, final false
static inline void Legacy_TriggerRepeatedHapticPulse(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::ESteamControllerPad  eTargetPad, uint16_t  usDurationMicroSec, uint16_t  usOffMicroSec, uint16_t  unRepeat, uint32_t  nFlags) ;

/// @brief Method RunFrame, addr 0x1805afc60, size 0x40, virtual false, abstract: false, final false
static inline void RunFrame(bool  bReservedValue) ;

/// @brief Method SetInputActionManifestFilePath, addr 0x1805afca0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetInputActionManifestFilePath(::StringW  pchInputActionManifestAbsolutePath) ;

/// @brief Method SetLEDColor, addr 0x1805afd80, size 0x80, virtual false, abstract: false, final false
static inline void SetLEDColor(::Steamworks::InputHandle_t  inputHandle, uint8_t  nColorR, uint8_t  nColorG, uint8_t  nColorB, uint32_t  nFlags) ;

/// @brief Method ShowBindingPanel, addr 0x1805afe00, size 0x40, virtual false, abstract: false, final false
static inline bool ShowBindingPanel(::Steamworks::InputHandle_t  inputHandle) ;

/// @brief Method Shutdown, addr 0x1805afe40, size 0x30, virtual false, abstract: false, final false
static inline bool Shutdown() ;

/// @brief Method StopAnalogActionMomentum, addr 0x1805afe70, size 0x50, virtual false, abstract: false, final false
static inline void StopAnalogActionMomentum(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::InputAnalogActionHandle_t  eAction) ;

/// @brief Method TranslateActionOrigin, addr 0x1805afec0, size 0x50, virtual false, abstract: false, final false
static inline ::Steamworks::EInputActionOrigin TranslateActionOrigin(::Steamworks::ESteamInputType  eDestinationInputType, ::Steamworks::EInputActionOrigin  eSourceOrigin) ;

/// @brief Method TriggerSimpleHapticEvent, addr 0x1805aff10, size 0x90, virtual false, abstract: false, final false
static inline void TriggerSimpleHapticEvent(::Steamworks::InputHandle_t  inputHandle, ::Steamworks::EControllerHapticLocation  eHapticLocation, uint8_t  nIntensity, char16_t  nGainDB, uint8_t  nOtherIntensity, char16_t  nOtherGainDB) ;

/// @brief Method TriggerVibration, addr 0x1805b0020, size 0x60, virtual false, abstract: false, final false
static inline void TriggerVibration(::Steamworks::InputHandle_t  inputHandle, uint16_t  usLeftSpeed, uint16_t  usRightSpeed) ;

/// @brief Method TriggerVibrationExtended, addr 0x1805affa0, size 0x80, virtual false, abstract: false, final false
static inline void TriggerVibrationExtended(::Steamworks::InputHandle_t  inputHandle, uint16_t  usLeftSpeed, uint16_t  usRightSpeed, uint16_t  usLeftTriggerSpeed, uint16_t  usRightTriggerSpeed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamInput(SteamInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamInput(SteamInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16376};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamInput) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
