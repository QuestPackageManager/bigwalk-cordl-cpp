#pragma once
// IWYU pragma private; include "Rewired/Integration/UnityUI/RewiredStandaloneInputModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Integration/UnityUI/zzzz__RewiredPointerInputModule_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RewiredStandaloneInputModule)
namespace Rewired::Components {
class PlayerMouse;
}
namespace Rewired::Integration::UnityUI {
class RewiredPointerInputModule_MouseButtonEventData;
}
namespace Rewired::Integration::UnityUI {
class RewiredStandaloneInputModule_PlayerSetting;
}
namespace Rewired {
class InputManager_Base;
}
namespace Rewired {
class Player;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::Integration::UnityUI {
class RewiredStandaloneInputModule;
}
namespace Rewired::Integration::UnityUI {
class RewiredStandaloneInputModule_PlayerSetting;
}
// Write type traits
MARK_REF_T(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*);
MARK_REF_T(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*);
DEFINE_IL2CPP_CLASS(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule*, "Rewired.Integration.UnityUI", "RewiredStandaloneInputModule");
DEFINE_IL2CPP_CLASS(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*, "Rewired.Integration.UnityUI", "RewiredStandaloneInputModule/PlayerSetting");
// Dependencies System.Object
namespace Rewired::Integration::UnityUI {
// Is value type: false
// CS Name: Rewired.Integration.UnityUI.RewiredStandaloneInputModule/PlayerSetting
class CORDL_TYPE RewiredStandaloneInputModule_PlayerSetting : public ::System::Object {
public:
// Declarations
/// @brief Field playerId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerId, put=__cordl_internal_set_playerId)) int32_t  playerId;

/// @brief Field playerMice, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerMice, put=__cordl_internal_set_playerMice)) ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*  playerMice;

/// @brief Method Clone, addr 0x1803abd80, size 0x180, virtual false, abstract: false, final false
inline ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting* Clone() ;

static inline ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting* New_ctor() ;

static inline ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting* New_ctor(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*  other) ;

constexpr int32_t const& __cordl_internal_get_playerId() const;

constexpr int32_t& __cordl_internal_get_playerId() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>* const& __cordl_internal_get_playerMice() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*& __cordl_internal_get_playerMice() ;

constexpr void __cordl_internal_set_playerId(int32_t  value) ;

constexpr void __cordl_internal_set_playerMice(::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*  value) ;

/// @brief Method .ctor, addr 0x1803abf00, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1803abf50, size 0x170, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting*  other) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewiredStandaloneInputModule_PlayerSetting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewiredStandaloneInputModule_PlayerSetting", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RewiredStandaloneInputModule_PlayerSetting(RewiredStandaloneInputModule_PlayerSetting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewiredStandaloneInputModule_PlayerSetting", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewiredStandaloneInputModule_PlayerSetting(RewiredStandaloneInputModule_PlayerSetting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5704};

/// @brief Field playerId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___playerId;

/// @brief Field playerMice, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*  ___playerMice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting, ___playerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting, ___playerMice) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Integration::UnityUI
// Dependencies Rewired.Integration.UnityUI.RewiredPointerInputModule, UnityEngine.Vector2
namespace Rewired::Integration::UnityUI {
// Is value type: false
// CS Name: Rewired.Integration.UnityUI.RewiredStandaloneInputModule
class CORDL_TYPE RewiredStandaloneInputModule : public ::Rewired::Integration::UnityUI::RewiredPointerInputModule {
public:
// Declarations
using PlayerSetting = ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting;

 __declspec(property(get=get_CancelActionId, put=set_CancelActionId)) int32_t  CancelActionId;

 __declspec(property(get=get_HorizontalActionId, put=set_HorizontalActionId)) int32_t  HorizontalActionId;

 __declspec(property(get=get_MoveOneElementPerAxisPress, put=set_MoveOneElementPerAxisPress)) bool  MoveOneElementPerAxisPress;

 __declspec(property(get=get_PlayerMice, put=set_PlayerMice)) ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*  PlayerMice;

 __declspec(property(get=get_RewiredInputManager, put=set_RewiredInputManager)) ::UnityW<::Rewired::InputManager_Base>  RewiredInputManager;

 __declspec(property(get=get_RewiredPlayerIds, put=set_RewiredPlayerIds)) ::ArrayW<int32_t>  RewiredPlayerIds;

 __declspec(property(get=get_SetActionsById, put=set_SetActionsById)) bool  SetActionsById;

 __declspec(property(get=get_SubmitActionId, put=set_SubmitActionId)) int32_t  SubmitActionId;

 __declspec(property(get=get_UseAllRewiredGamePlayers, put=set_UseAllRewiredGamePlayers)) bool  UseAllRewiredGamePlayers;

 __declspec(property(get=get_UsePlayingPlayersOnly, put=set_UsePlayingPlayersOnly)) bool  UsePlayingPlayersOnly;

 __declspec(property(get=get_UseRewiredSystemPlayer, put=set_UseRewiredSystemPlayer)) bool  UseRewiredSystemPlayer;

 __declspec(property(get=get_VerticalActionId, put=set_VerticalActionId)) int32_t  VerticalActionId;

 __declspec(property(get=get_allowActivationOnMobileDevice, put=set_allowActivationOnMobileDevice)) bool  allowActivationOnMobileDevice;

 __declspec(property(get=get_allowMouseInput, put=set_allowMouseInput)) bool  allowMouseInput;

 __declspec(property(get=get_allowMouseInputIfTouchSupported, put=set_allowMouseInputIfTouchSupported)) bool  allowMouseInputIfTouchSupported;

 __declspec(property(get=get_allowTouchInput, put=set_allowTouchInput)) bool  allowTouchInput;

/// @brief Field cancelActionId, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_cancelActionId, put=__cordl_internal_set_cancelActionId)) int32_t  cancelActionId;

 __declspec(property(get=get_cancelButton, put=set_cancelButton)) ::StringW  cancelButton;

 __declspec(property(get=get_deselectBeforeSelecting, put=set_deselectBeforeSelecting)) bool  deselectBeforeSelecting;

 __declspec(property(get=get_deselectIfBackgroundClicked, put=set_deselectIfBackgroundClicked)) bool  deselectIfBackgroundClicked;

 __declspec(property(get=get_forceModuleActive, put=set_forceModuleActive)) bool  forceModuleActive;

/// @brief Field horizontalActionId, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_horizontalActionId, put=__cordl_internal_set_horizontalActionId)) int32_t  horizontalActionId;

 __declspec(property(get=get_horizontalAxis, put=set_horizontalAxis)) ::StringW  horizontalAxis;

 __declspec(property(get=get_inputActionsPerSecond, put=set_inputActionsPerSecond)) float_t  inputActionsPerSecond;

 __declspec(property(get=get_isMouseSupported)) bool  isMouseSupported;

 __declspec(property(get=get_isTouchAllowed)) bool  isTouchAllowed;

/// @brief Field isTouchSupported, offset 0xf9, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTouchSupported, put=__cordl_internal_set_isTouchSupported)) bool  isTouchSupported;

/// @brief Field m_CancelButton, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CancelButton, put=__cordl_internal_set_m_CancelButton)) ::StringW  m_CancelButton;

/// @brief Field m_ConsecutiveMoveCount, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ConsecutiveMoveCount, put=__cordl_internal_set_m_ConsecutiveMoveCount)) int32_t  m_ConsecutiveMoveCount;

/// @brief Field m_ForceModuleActive, offset 0xed, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ForceModuleActive, put=__cordl_internal_set_m_ForceModuleActive)) bool  m_ForceModuleActive;

/// @brief Field m_HasFocus, offset 0x114, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasFocus, put=__cordl_internal_set_m_HasFocus)) bool  m_HasFocus;

/// @brief Field m_HorizontalAxis, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HorizontalAxis, put=__cordl_internal_set_m_HorizontalAxis)) ::StringW  m_HorizontalAxis;

/// @brief Field m_InputActionsPerSecond, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InputActionsPerSecond, put=__cordl_internal_set_m_InputActionsPerSecond)) float_t  m_InputActionsPerSecond;

/// @brief Field m_LastMoveVector, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastMoveVector, put=__cordl_internal_set_m_LastMoveVector)) ::UnityEngine::Vector2  m_LastMoveVector;

/// @brief Field m_PrevActionTime, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrevActionTime, put=__cordl_internal_set_m_PrevActionTime)) double_t  m_PrevActionTime;

/// @brief Field m_RepeatDelay, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RepeatDelay, put=__cordl_internal_set_m_RepeatDelay)) float_t  m_RepeatDelay;

/// @brief Field m_SubmitButton, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SubmitButton, put=__cordl_internal_set_m_SubmitButton)) ::StringW  m_SubmitButton;

/// @brief Field m_VerticalAxis, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VerticalAxis, put=__cordl_internal_set_m_VerticalAxis)) ::StringW  m_VerticalAxis;

/// @brief Field m_allowMouseInput, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_allowMouseInput, put=__cordl_internal_set_m_allowMouseInput)) bool  m_allowMouseInput;

/// @brief Field m_allowMouseInputIfTouchSupported, offset 0xe9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_allowMouseInputIfTouchSupported, put=__cordl_internal_set_m_allowMouseInputIfTouchSupported)) bool  m_allowMouseInputIfTouchSupported;

/// @brief Field m_allowTouchInput, offset 0xea, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_allowTouchInput, put=__cordl_internal_set_m_allowTouchInput)) bool  m_allowTouchInput;

/// @brief Field m_deselectBeforeSelecting, offset 0xec, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_deselectBeforeSelecting, put=__cordl_internal_set_m_deselectBeforeSelecting)) bool  m_deselectBeforeSelecting;

/// @brief Field m_deselectIfBackgroundClicked, offset 0xeb, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_deselectIfBackgroundClicked, put=__cordl_internal_set_m_deselectIfBackgroundClicked)) bool  m_deselectIfBackgroundClicked;

/// @brief Field moveOneElementPerAxisPress, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_moveOneElementPerAxisPress, put=__cordl_internal_set_moveOneElementPerAxisPress)) bool  moveOneElementPerAxisPress;

/// @brief Field playerIds, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerIds, put=__cordl_internal_set_playerIds)) ::ArrayW<int32_t>  playerIds;

/// @brief Field playerMice, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerMice, put=__cordl_internal_set_playerMice)) ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*  playerMice;

/// @brief Field recompiling, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_recompiling, put=__cordl_internal_set_recompiling)) bool  recompiling;

 __declspec(property(get=get_repeatDelay, put=set_repeatDelay)) float_t  repeatDelay;

/// @brief Field rewiredInputManager, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_rewiredInputManager, put=__cordl_internal_set_rewiredInputManager)) ::UnityW<::Rewired::InputManager_Base>  rewiredInputManager;

/// @brief Field rewiredPlayerIds, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_rewiredPlayerIds, put=__cordl_internal_set_rewiredPlayerIds)) ::ArrayW<int32_t>  rewiredPlayerIds;

/// @brief Field setActionsById, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_setActionsById, put=__cordl_internal_set_setActionsById)) bool  setActionsById;

/// @brief Field submitActionId, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_submitActionId, put=__cordl_internal_set_submitActionId)) int32_t  submitActionId;

 __declspec(property(get=get_submitButton, put=set_submitButton)) ::StringW  submitButton;

/// @brief Field useAllRewiredGamePlayers, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_useAllRewiredGamePlayers, put=__cordl_internal_set_useAllRewiredGamePlayers)) bool  useAllRewiredGamePlayers;

/// @brief Field usePlayingPlayersOnly, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_usePlayingPlayersOnly, put=__cordl_internal_set_usePlayingPlayersOnly)) bool  usePlayingPlayersOnly;

/// @brief Field useRewiredSystemPlayer, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRewiredSystemPlayer, put=__cordl_internal_set_useRewiredSystemPlayer)) bool  useRewiredSystemPlayer;

/// @brief Field verticalActionId, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalActionId, put=__cordl_internal_set_verticalActionId)) int32_t  verticalActionId;

 __declspec(property(get=get_verticalAxis, put=set_verticalAxis)) ::StringW  verticalAxis;

/// @brief Method ActivateModule, addr 0x1803ae950, size 0xa0, virtual true, abstract: false, final false
inline void ActivateModule() ;

/// @brief Method Awake, addr 0x1803ae9f0, size 0xc0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckButtonOrKeyMovement, addr 0x1803aeab0, size 0x190, virtual false, abstract: false, final false
inline void CheckButtonOrKeyMovement(::by_ref<bool>  downHorizontal, ::by_ref<bool>  downVertical) ;

/// @brief Method CheckEditorRecompile, addr 0x1803aec40, size 0x80, virtual false, abstract: false, final false
inline void CheckEditorRecompile() ;

/// @brief Method ClearRewiredVars, addr 0x1803aecc0, size 0x70, virtual false, abstract: false, final false
inline void ClearRewiredVars() ;

/// @brief Method DeactivateModule, addr 0x1803ac560, size 0x1a0, virtual true, abstract: false, final false
inline void DeactivateModule() ;

/// @brief Method DidAnyMouseMove, addr 0x1803aed30, size 0x170, virtual false, abstract: false, final false
inline bool DidAnyMouseMove() ;

/// @brief Method GetAxis, addr 0x1803aeea0, size 0x40, virtual false, abstract: false, final false
inline float_t GetAxis(::Rewired::Player*  player, int32_t  actionId) ;

/// @brief Method GetButton, addr 0x1803aef20, size 0x40, virtual false, abstract: false, final false
inline bool GetButton(::Rewired::Player*  player, int32_t  actionId) ;

/// @brief Method GetButtonDown, addr 0x1803aeee0, size 0x40, virtual false, abstract: false, final false
inline bool GetButtonDown(::Rewired::Player*  player, int32_t  actionId) ;

/// @brief Method GetMouseButtonDownOnAnyMouse, addr 0x1803aef60, size 0x140, virtual false, abstract: false, final false
inline bool GetMouseButtonDownOnAnyMouse(int32_t  buttonIndex) ;

/// @brief Method GetNegativeButton, addr 0x1803af0e0, size 0x40, virtual false, abstract: false, final false
inline bool GetNegativeButton(::Rewired::Player*  player, int32_t  actionId) ;

/// @brief Method GetNegativeButtonDown, addr 0x1803af0a0, size 0x40, virtual false, abstract: false, final false
inline bool GetNegativeButtonDown(::Rewired::Player*  player, int32_t  actionId) ;

/// @brief Method GetRawMoveVector, addr 0x1803af120, size 0x3a0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetRawMoveVector() ;

/// @brief Method HandleMouseTouchDeselectionOnSelectionChanged, addr 0x1803af4c0, size 0x100, virtual false, abstract: false, final false
inline void HandleMouseTouchDeselectionOnSelectionChanged(::UnityEngine::GameObject*  currentOverGo, ::UnityEngine::EventSystems::BaseEventData*  pointerEvent) ;

/// @brief Method InitializeRewired, addr 0x1803af5c0, size 0x140, virtual false, abstract: false, final false
inline void InitializeRewired() ;

/// @brief Method IsDefaultPlayer, addr 0x1803af700, size 0x170, virtual true, abstract: false, final false
inline bool IsDefaultPlayer(int32_t  playerId) ;

/// @brief Method IsModuleSupported, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool IsModuleSupported() ;

static inline ::Rewired::Integration::UnityUI::RewiredStandaloneInputModule* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x1803af870, size 0x10, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  hasFocus) ;

/// @brief Method OnDestroy, addr 0x1803af880, size 0xc0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEditorRecompile, addr 0x1803af940, size 0x70, virtual false, abstract: false, final false
inline void OnEditorRecompile() ;

/// @brief Method OnRewiredInitialized, addr 0x1803af9b0, size 0x10, virtual false, abstract: false, final false
inline void OnRewiredInitialized() ;

/// @brief Method OnRewiredShutDown, addr 0x1803aecc0, size 0x70, virtual false, abstract: false, final false
inline void OnRewiredShutDown() ;

/// @brief Method Process, addr 0x1803b0f80, size 0x2d0, virtual true, abstract: false, final false
inline void Process() ;

/// @brief Method ProcessMouseEvent, addr 0x1803af9c0, size 0x390, virtual false, abstract: false, final false
inline void ProcessMouseEvent(int32_t  playerId, int32_t  pointerIndex) ;

/// @brief Method ProcessMouseEvents, addr 0x1803afd50, size 0x120, virtual false, abstract: false, final false
inline void ProcessMouseEvents() ;

/// @brief Method ProcessMousePress, addr 0x1803afe70, size 0x460, virtual false, abstract: false, final false
inline void ProcessMousePress(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*  data) ;

/// @brief Method ProcessTouchEvents, addr 0x1803b02d0, size 0x770, virtual false, abstract: false, final false
inline bool ProcessTouchEvents() ;

/// @brief Method ProcessTouchPress, addr 0x1803b0a40, size 0x540, virtual false, abstract: false, final false
inline void ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData*  pointerEvent, bool  pressed, bool  released) ;

/// @brief Method SendMoveEventToSelectedObject, addr 0x1803b1250, size 0x360, virtual false, abstract: false, final false
inline bool SendMoveEventToSelectedObject() ;

/// @brief Method SendSubmitEventToSelectedObject, addr 0x1803b15b0, size 0x1d0, virtual false, abstract: false, final false
inline bool SendSubmitEventToSelectedObject() ;

/// @brief Method SendUpdateEventToSelectedObject, addr 0x1803b1780, size 0xd0, virtual false, abstract: false, final false
inline bool SendUpdateEventToSelectedObject() ;

/// @brief Method SetUpRewiredActions, addr 0x1803b1850, size 0x2c0, virtual false, abstract: false, final false
inline void SetUpRewiredActions() ;

/// @brief Method SetUpRewiredPlayerMice, addr 0x1803b1b10, size 0x110, virtual false, abstract: false, final false
inline void SetUpRewiredPlayerMice() ;

/// @brief Method SetupRewiredVars, addr 0x1803b1c20, size 0x4d0, virtual false, abstract: false, final false
inline void SetupRewiredVars() ;

/// @brief Method ShouldActivateModule, addr 0x1803b20f0, size 0x840, virtual true, abstract: false, final false
inline bool ShouldActivateModule() ;

/// @brief Method ShouldIgnoreEventsOnNoFocus, addr 0x1803b2930, size 0x70, virtual false, abstract: false, final false
inline bool ShouldIgnoreEventsOnNoFocus() ;

/// @brief Method UpdateModule, addr 0x1803b29a0, size 0xd0, virtual true, abstract: false, final false
inline void UpdateModule() ;

constexpr int32_t const& __cordl_internal_get_cancelActionId() const;

constexpr int32_t& __cordl_internal_get_cancelActionId() ;

constexpr int32_t const& __cordl_internal_get_horizontalActionId() const;

constexpr int32_t& __cordl_internal_get_horizontalActionId() ;

constexpr bool const& __cordl_internal_get_isTouchSupported() const;

constexpr bool& __cordl_internal_get_isTouchSupported() ;

constexpr ::StringW const& __cordl_internal_get_m_CancelButton() const;

constexpr ::StringW& __cordl_internal_get_m_CancelButton() ;

constexpr int32_t const& __cordl_internal_get_m_ConsecutiveMoveCount() const;

constexpr int32_t& __cordl_internal_get_m_ConsecutiveMoveCount() ;

constexpr bool const& __cordl_internal_get_m_ForceModuleActive() const;

constexpr bool& __cordl_internal_get_m_ForceModuleActive() ;

constexpr bool const& __cordl_internal_get_m_HasFocus() const;

constexpr bool& __cordl_internal_get_m_HasFocus() ;

constexpr ::StringW const& __cordl_internal_get_m_HorizontalAxis() const;

constexpr ::StringW& __cordl_internal_get_m_HorizontalAxis() ;

constexpr float_t const& __cordl_internal_get_m_InputActionsPerSecond() const;

constexpr float_t& __cordl_internal_get_m_InputActionsPerSecond() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LastMoveVector() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LastMoveVector() ;

constexpr double_t const& __cordl_internal_get_m_PrevActionTime() const;

constexpr double_t& __cordl_internal_get_m_PrevActionTime() ;

constexpr float_t const& __cordl_internal_get_m_RepeatDelay() const;

constexpr float_t& __cordl_internal_get_m_RepeatDelay() ;

constexpr ::StringW const& __cordl_internal_get_m_SubmitButton() const;

constexpr ::StringW& __cordl_internal_get_m_SubmitButton() ;

constexpr ::StringW const& __cordl_internal_get_m_VerticalAxis() const;

constexpr ::StringW& __cordl_internal_get_m_VerticalAxis() ;

constexpr bool const& __cordl_internal_get_m_allowMouseInput() const;

constexpr bool& __cordl_internal_get_m_allowMouseInput() ;

constexpr bool const& __cordl_internal_get_m_allowMouseInputIfTouchSupported() const;

constexpr bool& __cordl_internal_get_m_allowMouseInputIfTouchSupported() ;

constexpr bool const& __cordl_internal_get_m_allowTouchInput() const;

constexpr bool& __cordl_internal_get_m_allowTouchInput() ;

constexpr bool const& __cordl_internal_get_m_deselectBeforeSelecting() const;

constexpr bool& __cordl_internal_get_m_deselectBeforeSelecting() ;

constexpr bool const& __cordl_internal_get_m_deselectIfBackgroundClicked() const;

constexpr bool& __cordl_internal_get_m_deselectIfBackgroundClicked() ;

constexpr bool const& __cordl_internal_get_moveOneElementPerAxisPress() const;

constexpr bool& __cordl_internal_get_moveOneElementPerAxisPress() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_playerIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_playerIds() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>* const& __cordl_internal_get_playerMice() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*& __cordl_internal_get_playerMice() ;

constexpr bool const& __cordl_internal_get_recompiling() const;

constexpr bool& __cordl_internal_get_recompiling() ;

constexpr ::UnityW<::Rewired::InputManager_Base> const& __cordl_internal_get_rewiredInputManager() const;

constexpr ::UnityW<::Rewired::InputManager_Base>& __cordl_internal_get_rewiredInputManager() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_rewiredPlayerIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_rewiredPlayerIds() ;

constexpr bool const& __cordl_internal_get_setActionsById() const;

constexpr bool& __cordl_internal_get_setActionsById() ;

constexpr int32_t const& __cordl_internal_get_submitActionId() const;

constexpr int32_t& __cordl_internal_get_submitActionId() ;

constexpr bool const& __cordl_internal_get_useAllRewiredGamePlayers() const;

constexpr bool& __cordl_internal_get_useAllRewiredGamePlayers() ;

constexpr bool const& __cordl_internal_get_usePlayingPlayersOnly() const;

constexpr bool& __cordl_internal_get_usePlayingPlayersOnly() ;

constexpr bool const& __cordl_internal_get_useRewiredSystemPlayer() const;

constexpr bool& __cordl_internal_get_useRewiredSystemPlayer() ;

constexpr int32_t const& __cordl_internal_get_verticalActionId() const;

constexpr int32_t& __cordl_internal_get_verticalActionId() ;

constexpr void __cordl_internal_set_cancelActionId(int32_t  value) ;

constexpr void __cordl_internal_set_horizontalActionId(int32_t  value) ;

constexpr void __cordl_internal_set_isTouchSupported(bool  value) ;

constexpr void __cordl_internal_set_m_CancelButton(::StringW  value) ;

constexpr void __cordl_internal_set_m_ConsecutiveMoveCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_ForceModuleActive(bool  value) ;

constexpr void __cordl_internal_set_m_HasFocus(bool  value) ;

constexpr void __cordl_internal_set_m_HorizontalAxis(::StringW  value) ;

constexpr void __cordl_internal_set_m_InputActionsPerSecond(float_t  value) ;

constexpr void __cordl_internal_set_m_LastMoveVector(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_PrevActionTime(double_t  value) ;

constexpr void __cordl_internal_set_m_RepeatDelay(float_t  value) ;

constexpr void __cordl_internal_set_m_SubmitButton(::StringW  value) ;

constexpr void __cordl_internal_set_m_VerticalAxis(::StringW  value) ;

constexpr void __cordl_internal_set_m_allowMouseInput(bool  value) ;

constexpr void __cordl_internal_set_m_allowMouseInputIfTouchSupported(bool  value) ;

constexpr void __cordl_internal_set_m_allowTouchInput(bool  value) ;

constexpr void __cordl_internal_set_m_deselectBeforeSelecting(bool  value) ;

constexpr void __cordl_internal_set_m_deselectIfBackgroundClicked(bool  value) ;

constexpr void __cordl_internal_set_moveOneElementPerAxisPress(bool  value) ;

constexpr void __cordl_internal_set_playerIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_playerMice(::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*  value) ;

constexpr void __cordl_internal_set_recompiling(bool  value) ;

constexpr void __cordl_internal_set_rewiredInputManager(::UnityW<::Rewired::InputManager_Base>  value) ;

constexpr void __cordl_internal_set_rewiredPlayerIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_setActionsById(bool  value) ;

constexpr void __cordl_internal_set_submitActionId(int32_t  value) ;

constexpr void __cordl_internal_set_useAllRewiredGamePlayers(bool  value) ;

constexpr void __cordl_internal_set_usePlayingPlayersOnly(bool  value) ;

constexpr void __cordl_internal_set_useRewiredSystemPlayer(bool  value) ;

constexpr void __cordl_internal_set_verticalActionId(int32_t  value) ;

/// @brief Method .ctor, addr 0x1803b2a70, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CancelActionId, addr 0x1803b2c60, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CancelActionId() ;

/// @brief Method get_HorizontalActionId, addr 0x1803b2c70, size 0x10, virtual false, abstract: false, final false
inline int32_t get_HorizontalActionId() ;

/// @brief Method get_MoveOneElementPerAxisPress, addr 0x1803b2c80, size 0x10, virtual false, abstract: false, final false
inline bool get_MoveOneElementPerAxisPress() ;

/// @brief Method get_PlayerMice, addr 0x1803b2c90, size 0x40, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>* get_PlayerMice() ;

/// @brief Method get_RewiredInputManager, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::Rewired::InputManager_Base> get_RewiredInputManager() ;

/// @brief Method get_RewiredPlayerIds, addr 0x1803b2cd0, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_RewiredPlayerIds() ;

/// @brief Method get_SetActionsById, addr 0x1803b2d40, size 0x10, virtual false, abstract: false, final false
inline bool get_SetActionsById() ;

/// @brief Method get_SubmitActionId, addr 0x1803b2d50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_SubmitActionId() ;

/// @brief Method get_UseAllRewiredGamePlayers, addr 0x1803b2d60, size 0x10, virtual false, abstract: false, final false
inline bool get_UseAllRewiredGamePlayers() ;

/// @brief Method get_UsePlayingPlayersOnly, addr 0x180310e70, size 0x10, virtual false, abstract: false, final false
inline bool get_UsePlayingPlayersOnly() ;

/// @brief Method get_UseRewiredSystemPlayer, addr 0x1803b2d70, size 0x10, virtual false, abstract: false, final false
inline bool get_UseRewiredSystemPlayer() ;

/// @brief Method get_VerticalActionId, addr 0x1803b2d80, size 0x10, virtual false, abstract: false, final false
inline int32_t get_VerticalActionId() ;

/// @brief Method get_allowActivationOnMobileDevice, addr 0x1803716a0, size 0x10, virtual false, abstract: false, final false
inline bool get_allowActivationOnMobileDevice() ;

/// @brief Method get_allowMouseInput, addr 0x1803b2da0, size 0x10, virtual false, abstract: false, final false
inline bool get_allowMouseInput() ;

/// @brief Method get_allowMouseInputIfTouchSupported, addr 0x1803b2d90, size 0x10, virtual false, abstract: false, final false
inline bool get_allowMouseInputIfTouchSupported() ;

/// @brief Method get_allowTouchInput, addr 0x1803b2db0, size 0x10, virtual false, abstract: false, final false
inline bool get_allowTouchInput() ;

/// @brief Method get_cancelButton, addr 0x1803b2dc0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_cancelButton() ;

/// @brief Method get_deselectBeforeSelecting, addr 0x1803716b0, size 0x10, virtual false, abstract: false, final false
inline bool get_deselectBeforeSelecting() ;

/// @brief Method get_deselectIfBackgroundClicked, addr 0x1803b2dd0, size 0x10, virtual false, abstract: false, final false
inline bool get_deselectIfBackgroundClicked() ;

/// @brief Method get_forceModuleActive, addr 0x1803716a0, size 0x10, virtual false, abstract: false, final false
inline bool get_forceModuleActive() ;

/// @brief Method get_horizontalAxis, addr 0x1802edc30, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_horizontalAxis() ;

/// @brief Method get_inputActionsPerSecond, addr 0x1803b2de0, size 0x10, virtual false, abstract: false, final false
inline float_t get_inputActionsPerSecond() ;

/// @brief Method get_isMouseSupported, addr 0x1803b2df0, size 0x110, virtual true, abstract: false, final false
inline bool get_isMouseSupported() ;

/// @brief Method get_isTouchAllowed, addr 0x1803b2db0, size 0x10, virtual false, abstract: false, final false
inline bool get_isTouchAllowed() ;

/// @brief Method get_repeatDelay, addr 0x1803b2f00, size 0x10, virtual false, abstract: false, final false
inline float_t get_repeatDelay() ;

/// @brief Method get_submitButton, addr 0x1803b2f10, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_submitButton() ;

/// @brief Method get_verticalAxis, addr 0x1803223b0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_verticalAxis() ;

/// @brief Method set_CancelActionId, addr 0x1803b2f20, size 0xe0, virtual false, abstract: false, final false
inline void set_CancelActionId(int32_t  value) ;

/// @brief Method set_HorizontalActionId, addr 0x1803b3000, size 0xe0, virtual false, abstract: false, final false
inline void set_HorizontalActionId(int32_t  value) ;

/// @brief Method set_MoveOneElementPerAxisPress, addr 0x1803b30e0, size 0x10, virtual false, abstract: false, final false
inline void set_MoveOneElementPerAxisPress(bool  value) ;

/// @brief Method set_PlayerMice, addr 0x1803b30f0, size 0xa0, virtual false, abstract: false, final false
inline void set_PlayerMice(::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*  value) ;

/// @brief Method set_RewiredInputManager, addr 0x1803117a0, size 0x10, virtual false, abstract: false, final false
inline void set_RewiredInputManager(::Rewired::InputManager_Base*  value) ;

/// @brief Method set_RewiredPlayerIds, addr 0x1803b3190, size 0xa0, virtual false, abstract: false, final false
inline void set_RewiredPlayerIds(::ArrayW<int32_t>  value) ;

/// @brief Method set_SetActionsById, addr 0x1803b3230, size 0x20, virtual false, abstract: false, final false
inline void set_SetActionsById(bool  value) ;

/// @brief Method set_SubmitActionId, addr 0x1803b3250, size 0xe0, virtual false, abstract: false, final false
inline void set_SubmitActionId(int32_t  value) ;

/// @brief Method set_UseAllRewiredGamePlayers, addr 0x1803b3330, size 0x20, virtual false, abstract: false, final false
inline void set_UseAllRewiredGamePlayers(bool  value) ;

/// @brief Method set_UsePlayingPlayersOnly, addr 0x1803b3350, size 0x10, virtual false, abstract: false, final false
inline void set_UsePlayingPlayersOnly(bool  value) ;

/// @brief Method set_UseRewiredSystemPlayer, addr 0x1803b3360, size 0x20, virtual false, abstract: false, final false
inline void set_UseRewiredSystemPlayer(bool  value) ;

/// @brief Method set_VerticalActionId, addr 0x1803b3380, size 0xe0, virtual false, abstract: false, final false
inline void set_VerticalActionId(int32_t  value) ;

/// @brief Method set_allowActivationOnMobileDevice, addr 0x1803b3460, size 0x10, virtual false, abstract: false, final false
inline void set_allowActivationOnMobileDevice(bool  value) ;

/// @brief Method set_allowMouseInput, addr 0x1803b3480, size 0x10, virtual false, abstract: false, final false
inline void set_allowMouseInput(bool  value) ;

/// @brief Method set_allowMouseInputIfTouchSupported, addr 0x1803b3470, size 0x10, virtual false, abstract: false, final false
inline void set_allowMouseInputIfTouchSupported(bool  value) ;

/// @brief Method set_allowTouchInput, addr 0x1803b3490, size 0x10, virtual false, abstract: false, final false
inline void set_allowTouchInput(bool  value) ;

/// @brief Method set_cancelButton, addr 0x1803b34a0, size 0xb0, virtual false, abstract: false, final false
inline void set_cancelButton(::StringW  value) ;

/// @brief Method set_deselectBeforeSelecting, addr 0x1803b3550, size 0x10, virtual false, abstract: false, final false
inline void set_deselectBeforeSelecting(bool  value) ;

/// @brief Method set_deselectIfBackgroundClicked, addr 0x1803b3560, size 0x10, virtual false, abstract: false, final false
inline void set_deselectIfBackgroundClicked(bool  value) ;

/// @brief Method set_forceModuleActive, addr 0x1803b3460, size 0x10, virtual false, abstract: false, final false
inline void set_forceModuleActive(bool  value) ;

/// @brief Method set_horizontalAxis, addr 0x1803b3570, size 0xb0, virtual false, abstract: false, final false
inline void set_horizontalAxis(::StringW  value) ;

/// @brief Method set_inputActionsPerSecond, addr 0x1803b3620, size 0x10, virtual false, abstract: false, final false
inline void set_inputActionsPerSecond(float_t  value) ;

/// @brief Method set_repeatDelay, addr 0x1803b3630, size 0x10, virtual false, abstract: false, final false
inline void set_repeatDelay(float_t  value) ;

/// @brief Method set_submitButton, addr 0x1803b3640, size 0xb0, virtual false, abstract: false, final false
inline void set_submitButton(::StringW  value) ;

/// @brief Method set_verticalAxis, addr 0x1803b36f0, size 0xb0, virtual false, abstract: false, final false
inline void set_verticalAxis(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewiredStandaloneInputModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewiredStandaloneInputModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RewiredStandaloneInputModule(RewiredStandaloneInputModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewiredStandaloneInputModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewiredStandaloneInputModule(RewiredStandaloneInputModule const& ) = delete;

/// @brief Field DEFAULT_ACTION_CANCEL offset 0xffffffff size 0x8
static constexpr ::ConstString  DEFAULT_ACTION_CANCEL{u"UICancel"};

/// @brief Field DEFAULT_ACTION_MOVE_HORIZONTAL offset 0xffffffff size 0x8
static constexpr ::ConstString  DEFAULT_ACTION_MOVE_HORIZONTAL{u"UIHorizontal"};

/// @brief Field DEFAULT_ACTION_MOVE_VERTICAL offset 0xffffffff size 0x8
static constexpr ::ConstString  DEFAULT_ACTION_MOVE_VERTICAL{u"UIVertical"};

/// @brief Field DEFAULT_ACTION_SUBMIT offset 0xffffffff size 0x8
static constexpr ::ConstString  DEFAULT_ACTION_SUBMIT{u"UISubmit"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5705};

/// @brief Field rewiredInputManager, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Rewired::InputManager_Base>  ___rewiredInputManager;

/// @brief Field useAllRewiredGamePlayers, offset: 0x88, size: 0x1, def value: None
 bool  ___useAllRewiredGamePlayers;

/// @brief Field useRewiredSystemPlayer, offset: 0x89, size: 0x1, def value: None
 bool  ___useRewiredSystemPlayer;

/// @brief Field rewiredPlayerIds, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___rewiredPlayerIds;

/// @brief Field usePlayingPlayersOnly, offset: 0x98, size: 0x1, def value: None
 bool  ___usePlayingPlayersOnly;

/// @brief Field playerMice, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Rewired::Components::PlayerMouse>>*  ___playerMice;

/// @brief Field moveOneElementPerAxisPress, offset: 0xa8, size: 0x1, def value: None
 bool  ___moveOneElementPerAxisPress;

/// @brief Field setActionsById, offset: 0xa9, size: 0x1, def value: None
 bool  ___setActionsById;

/// @brief Field horizontalActionId, offset: 0xac, size: 0x4, def value: None
 int32_t  ___horizontalActionId;

/// @brief Field verticalActionId, offset: 0xb0, size: 0x4, def value: None
 int32_t  ___verticalActionId;

/// @brief Field submitActionId, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___submitActionId;

/// @brief Field cancelActionId, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___cancelActionId;

/// @brief Field m_HorizontalAxis, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___m_HorizontalAxis;

/// @brief Field m_VerticalAxis, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___m_VerticalAxis;

/// @brief Field m_SubmitButton, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ___m_SubmitButton;

/// @brief Field m_CancelButton, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___m_CancelButton;

/// @brief Field m_InputActionsPerSecond, offset: 0xe0, size: 0x4, def value: None
 float_t  ___m_InputActionsPerSecond;

/// @brief Field m_RepeatDelay, offset: 0xe4, size: 0x4, def value: None
 float_t  ___m_RepeatDelay;

/// @brief Field m_allowMouseInput, offset: 0xe8, size: 0x1, def value: None
 bool  ___m_allowMouseInput;

/// @brief Field m_allowMouseInputIfTouchSupported, offset: 0xe9, size: 0x1, def value: None
 bool  ___m_allowMouseInputIfTouchSupported;

/// @brief Field m_allowTouchInput, offset: 0xea, size: 0x1, def value: None
 bool  ___m_allowTouchInput;

/// @brief Field m_deselectIfBackgroundClicked, offset: 0xeb, size: 0x1, def value: None
 bool  ___m_deselectIfBackgroundClicked;

/// @brief Field m_deselectBeforeSelecting, offset: 0xec, size: 0x1, def value: None
 bool  ___m_deselectBeforeSelecting;

/// @brief Field m_ForceModuleActive, offset: 0xed, size: 0x1, def value: None
 bool  ___m_ForceModuleActive;

/// @brief Field playerIds, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___playerIds;

/// @brief Field recompiling, offset: 0xf8, size: 0x1, def value: None
 bool  ___recompiling;

/// @brief Field isTouchSupported, offset: 0xf9, size: 0x1, def value: None
 bool  ___isTouchSupported;

/// @brief Field m_PrevActionTime, offset: 0x100, size: 0x8, def value: None
 double_t  ___m_PrevActionTime;

/// @brief Field m_LastMoveVector, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_LastMoveVector;

/// @brief Field m_ConsecutiveMoveCount, offset: 0x110, size: 0x4, def value: None
 int32_t  ___m_ConsecutiveMoveCount;

/// @brief Field m_HasFocus, offset: 0x114, size: 0x1, def value: None
 bool  ___m_HasFocus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___rewiredInputManager) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___useAllRewiredGamePlayers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___useRewiredSystemPlayer) == 0x89, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___rewiredPlayerIds) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___usePlayingPlayersOnly) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___playerMice) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___moveOneElementPerAxisPress) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___setActionsById) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___horizontalActionId) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___verticalActionId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___submitActionId) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___cancelActionId) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_HorizontalAxis) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_VerticalAxis) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_SubmitButton) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_CancelButton) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_InputActionsPerSecond) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_RepeatDelay) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_allowMouseInput) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_allowMouseInputIfTouchSupported) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_allowTouchInput) == 0xea, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_deselectIfBackgroundClicked) == 0xeb, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_deselectBeforeSelecting) == 0xec, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_ForceModuleActive) == 0xed, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___playerIds) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___recompiling) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___isTouchSupported) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_PrevActionTime) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_LastMoveVector) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_ConsecutiveMoveCount) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule, ___m_HasFocus) == 0x114, "Offset mismatch!");

static_assert(sizeof(::Rewired::Integration::UnityUI::RewiredStandaloneInputModule) == 0x118, "Size mismatch!");

} // namespace end def Rewired::Integration::UnityUI
