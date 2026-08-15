#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsRuntimeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIElementsRuntimeUtility)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class DefaultEventSystem;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtility_CreateRuntimePanelDelegate;
}
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtility___c;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtility;
}
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtility_CreateRuntimePanelDelegate;
}
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtility___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIElementsRuntimeUtility*);
MARK_REF_T(::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*);
MARK_REF_T(::UnityEngine::UIElements::UIElementsRuntimeUtility___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIElementsRuntimeUtility*, "UnityEngine.UIElements", "UIElementsRuntimeUtility");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*, "UnityEngine.UIElements", "UIElementsRuntimeUtility/CreateRuntimePanelDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIElementsRuntimeUtility___c*, "UnityEngine.UIElements", "UIElementsRuntimeUtility/<>c");
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIElementsRuntimeUtility/CreateRuntimePanelDelegate
class CORDL_TYPE UIElementsRuntimeUtility_CreateRuntimePanelDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::BaseRuntimePanel* Invoke(::UnityEngine::ScriptableObject*  ownerObject) ;

static inline ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1813cc2e0, size 0x4f20, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIElementsRuntimeUtility_CreateRuntimePanelDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility_CreateRuntimePanelDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIElementsRuntimeUtility_CreateRuntimePanelDelegate(UIElementsRuntimeUtility_CreateRuntimePanelDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility_CreateRuntimePanelDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIElementsRuntimeUtility_CreateRuntimePanelDelegate(UIElementsRuntimeUtility_CreateRuntimePanelDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIElementsRuntimeUtility/<>c
class CORDL_TYPE UIElementsRuntimeUtility___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::UIElementsRuntimeUtility___c*  __9;

/// @brief Field <>9__60_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__60_0, put=setStaticF___9__60_0)) ::System::Comparison_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  __9__60_0;

static inline ::UnityEngine::UIElements::UIElementsRuntimeUtility___c* New_ctor() ;

/// @brief Method <SortPanels>b__60_0, addr 0x1823fdd70, size 0xa0, virtual false, abstract: false, final false
inline int32_t _SortPanels_b__60_0(::UnityEngine::UIElements::BaseRuntimePanel*  runtimePanelA, ::UnityEngine::UIElements::BaseRuntimePanel*  runtimePanelB) ;

/// @brief Method <.cctor>b__6_0, addr 0x1823fe4f0, size 0x40, virtual false, abstract: false, final false
inline void __cctor_b__6_0(int32_t  displayIndex, int32_t  sortOrder) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::UIElementsRuntimeUtility___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityEngine::UIElements::BaseRuntimePanel*>* getStaticF___9__60_0() ;

static inline void setStaticF___9(::UnityEngine::UIElements::UIElementsRuntimeUtility___c*  value) ;

static inline void setStaticF___9__60_0(::System::Comparison_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIElementsRuntimeUtility___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIElementsRuntimeUtility___c(UIElementsRuntimeUtility___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIElementsRuntimeUtility___c(UIElementsRuntimeUtility___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIElementsRuntimeUtility___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Dependencies System.Nullable`1<T>, System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIElementsRuntimeUtility
class CORDL_TYPE UIElementsRuntimeUtility : public ::System::Object {
public:
// Declarations
using CreateRuntimePanelDelegate = ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate;

using __c = ::UnityEngine::UIElements::UIElementsRuntimeUtility___c;

/// @brief Field <activeEventSystem>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeEventSystem_k__BackingField, put=setStaticF__activeEventSystem_k__BackingField)) ::UnityW<::UnityEngine::Object>  _activeEventSystem_k__BackingField;

/// @brief Field <autoUpdateEventSystem>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__autoUpdateEventSystem_k__BackingField, put=setStaticF__autoUpdateEventSystem_k__BackingField)) bool  _autoUpdateEventSystem_k__BackingField;

/// @brief Field <overrideUseDefaultEventSystem>k__BackingField, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__overrideUseDefaultEventSystem_k__BackingField, put=setStaticF__overrideUseDefaultEventSystem_k__BackingField)) ::System::Nullable_1<bool>  _overrideUseDefaultEventSystem_k__BackingField;

/// @brief Field currentOverlayIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_currentOverlayIndex, put=setStaticF_currentOverlayIndex)) int32_t  currentOverlayIndex;

/// @brief Field onCreatePanel, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onCreatePanel, put=setStaticF_onCreatePanel)) ::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  onCreatePanel;

/// @brief Field onWillDestroyPanel, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onWillDestroyPanel, put=setStaticF_onWillDestroyPanel)) ::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  onWillDestroyPanel;

/// @brief Field s_CachedWorldSpacePanels, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CachedWorldSpacePanels, put=setStaticF_s_CachedWorldSpacePanels)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  s_CachedWorldSpacePanels;

/// @brief Field s_DefaultEventSystem, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultEventSystem, put=setStaticF_s_DefaultEventSystem)) ::UnityEngine::UIElements::DefaultEventSystem*  s_DefaultEventSystem;

/// @brief Field s_PanelOrderingOrDrawInCameraDirty, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_PanelOrderingOrDrawInCameraDirty, put=setStaticF_s_PanelOrderingOrDrawInCameraDirty)) bool  s_PanelOrderingOrDrawInCameraDirty;

/// @brief Field s_PotentiallyEmptyPanelSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PotentiallyEmptyPanelSettings, put=setStaticF_s_PotentiallyEmptyPanelSettings)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::PanelSettings>>*  s_PotentiallyEmptyPanelSettings;

/// @brief Field s_RegisteredPlayerloopCallback, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_RegisteredPlayerloopCallback, put=setStaticF_s_RegisteredPlayerloopCallback)) bool  s_RegisteredPlayerloopCallback;

/// @brief Field s_ResolvedSortingIndexMax, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ResolvedSortingIndexMax, put=setStaticF_s_ResolvedSortingIndexMax)) int32_t  s_ResolvedSortingIndexMax;

/// @brief Field s_SortedPlayerPanels, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SortedPlayerPanels, put=setStaticF_s_SortedPlayerPanels)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  s_SortedPlayerPanels;

/// @brief Field s_SortedScreenOverlayPanels, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SortedScreenOverlayPanels, put=setStaticF_s_SortedScreenOverlayPanels)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  s_SortedScreenOverlayPanels;

/// @brief Method BeginRenderOverlays, addr 0x182401030, size 0x40, virtual false, abstract: false, final false
static inline void BeginRenderOverlays(int32_t  displayIndex) ;

/// @brief Method CreateEvent, addr 0x182401070, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::EventBase* CreateEvent(::UnityEngine::Event*  systemEvent) ;

/// @brief Method DisableRenderingAndInputCallbacks, addr 0x1824010a0, size 0x50, virtual false, abstract: false, final false
static inline void DisableRenderingAndInputCallbacks() ;

/// @brief Method DisposeRuntimePanel, addr 0x1824010f0, size 0x120, virtual false, abstract: false, final false
static inline void DisposeRuntimePanel(::UnityEngine::ScriptableObject*  ownerObject) ;

/// @brief Method EnableRenderingAndInputCallbacks, addr 0x182401210, size 0x70, virtual false, abstract: false, final false
static inline void EnableRenderingAndInputCallbacks() ;

/// @brief Method EndRenderOverlays, addr 0x182401280, size 0x50, virtual false, abstract: false, final false
static inline void EndRenderOverlays(int32_t  displayIndex) ;

/// @brief Method FindOrCreateRuntimePanel, addr 0x1824012d0, size 0x290, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::BaseRuntimePanel* FindOrCreateRuntimePanel(::UnityEngine::ScriptableObject*  ownerObject, ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*  createDelegate) ;

/// @brief Method FlipDeltaY, addr 0x1822e95e0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 FlipDeltaY(::UnityEngine::Vector2  delta) ;

/// @brief Method FlipY, addr 0x182401560, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 FlipY(::UnityEngine::Vector2  p, float_t  displayHeight) ;

/// @brief Method GetPlayerPanelsByRenderMode, addr 0x182401580, size 0x190, virtual false, abstract: false, final false
static inline void GetPlayerPanelsByRenderMode(::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  outScreenSpaceOverlayPanels, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  outWorldSpacePanels) ;

/// @brief Method GetRuntimeDisplayHeight, addr 0x182401710, size 0x90, virtual false, abstract: false, final false
static inline float_t GetRuntimeDisplayHeight(int32_t  targetDisplay) ;

/// @brief Method GetSortedPlayerPanels, addr 0x1824017a0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* GetSortedPlayerPanels() ;

/// @brief Method GetSortedScreenOverlayPlayerPanels, addr 0x1824017f0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* GetSortedScreenOverlayPlayerPanels() ;

/// @brief Method GetWorldSpacePlayerPanels, addr 0x182401840, size 0x50, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* GetWorldSpacePlayerPanels() ;

/// @brief Method MarkPotentiallyEmpty, addr 0x182401890, size 0xc0, virtual false, abstract: false, final false
static inline void MarkPotentiallyEmpty(::UnityEngine::UIElements::PanelSettings*  settings) ;

/// @brief Method MultiDisplayBottomLeftToPanelPosition, addr 0x182401950, size 0x160, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 MultiDisplayBottomLeftToPanelPosition(::UnityEngine::Vector2  position, ::by_ref<::System::Nullable_1<int32_t>>  targetDisplay) ;

/// @brief Method MultiDisplayToLocalScreenPosition, addr 0x1822e91f0, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 MultiDisplayToLocalScreenPosition(::UnityEngine::Vector2  position, ::by_ref<::System::Nullable_1<int32_t>>  targetDisplay) ;

/// @brief Method PanelToScreenBottomLeftPosition, addr 0x182401ab0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 PanelToScreenBottomLeftPosition(::UnityEngine::Vector2  panelPosition, int32_t  targetDisplay) ;

/// @brief Method RegisterCachedPanelInternal, addr 0x182401b00, size 0x140, virtual false, abstract: false, final false
static inline void RegisterCachedPanelInternal(int32_t  instanceID, ::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method RegisterEventSystem, addr 0x182401c40, size 0x120, virtual false, abstract: false, final false
static inline void RegisterEventSystem(::UnityEngine::Object*  eventSystem) ;

/// @brief Method RemoveCachedPanelInternal, addr 0x182401d60, size 0x190, virtual false, abstract: false, final false
static inline void RemoveCachedPanelInternal(int32_t  instanceID) ;

/// @brief Method RemoveUnusedPanels, addr 0x182401ef0, size 0xe0, virtual false, abstract: false, final false
static inline void RemoveUnusedPanels() ;

/// @brief Method RenderOffscreenPanels, addr 0x182401fd0, size 0x140, virtual false, abstract: false, final false
static inline void RenderOffscreenPanels() ;

/// @brief Method RenderOverlaysBeforePriority, addr 0x182402110, size 0x1a0, virtual false, abstract: false, final false
static inline void RenderOverlaysBeforePriority(int32_t  displayIndex, float_t  maxPriority) ;

/// @brief Method RenderPanel, addr 0x1824022b0, size 0xa0, virtual false, abstract: false, final false
static inline void RenderPanel(::UnityEngine::UIElements::BaseRuntimePanel*  panel, bool  restoreState) ;

/// @brief Method RepaintPanel, addr 0x182402350, size 0x70, virtual false, abstract: false, final false
static inline void RepaintPanel(::UnityEngine::UIElements::BaseRuntimePanel*  panel) ;

/// @brief Method RepaintPanels, addr 0x1824023c0, size 0x110, virtual false, abstract: false, final false
static inline void RepaintPanels(bool  onlyOffscreen) ;

/// @brief Method ScreenBottomLeftToPanelDelta, addr 0x1824024d0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ScreenBottomLeftToPanelDelta(::UnityEngine::Vector2  delta) ;

/// @brief Method ScreenBottomLeftToPanelPosition, addr 0x182401ab0, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ScreenBottomLeftToPanelPosition(::UnityEngine::Vector2  position, int32_t  targetDisplay) ;

/// @brief Method SetPanelOrderingDirty, addr 0x182402510, size 0x40, virtual false, abstract: false, final false
static inline void SetPanelOrderingDirty() ;

/// @brief Method SetPanelsDrawInCameraDirty, addr 0x182402510, size 0x40, virtual false, abstract: false, final false
static inline void SetPanelsDrawInCameraDirty() ;

/// @brief Method SortPanels, addr 0x182402550, size 0x3c0, virtual false, abstract: false, final false
static inline void SortPanels() ;

/// @brief Method UnregisterEventSystem, addr 0x182402910, size 0xb0, virtual false, abstract: false, final false
static inline void UnregisterEventSystem(::UnityEngine::Object*  eventSystem) ;

/// @brief Method UpdateEventSystem, addr 0x1824029c0, size 0x1f0, virtual false, abstract: false, final false
static inline void UpdateEventSystem() ;

/// @brief Method UpdatePanels, addr 0x182402bb0, size 0x200, virtual false, abstract: false, final false
static inline void UpdatePanels() ;

/// @brief Method add_onCreatePanel, addr 0x1824030a0, size 0xd0, virtual false, abstract: false, final false
static inline void add_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  value) ;

static inline ::UnityW<::UnityEngine::Object> getStaticF__activeEventSystem_k__BackingField() ;

static inline bool getStaticF__autoUpdateEventSystem_k__BackingField() ;

static inline ::System::Nullable_1<bool> getStaticF__overrideUseDefaultEventSystem_k__BackingField() ;

static inline int32_t getStaticF_currentOverlayIndex() ;

static inline ::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* getStaticF_onCreatePanel() ;

static inline ::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* getStaticF_onWillDestroyPanel() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* getStaticF_s_CachedWorldSpacePanels() ;

static inline ::UnityEngine::UIElements::DefaultEventSystem* getStaticF_s_DefaultEventSystem() ;

static inline bool getStaticF_s_PanelOrderingOrDrawInCameraDirty() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::PanelSettings>>* getStaticF_s_PotentiallyEmptyPanelSettings() ;

static inline bool getStaticF_s_RegisteredPlayerloopCallback() ;

static inline int32_t getStaticF_s_ResolvedSortingIndexMax() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* getStaticF_s_SortedPlayerPanels() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* getStaticF_s_SortedScreenOverlayPanels() ;

/// @brief Method get_activeEventSystem, addr 0x182403170, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Object> get_activeEventSystem() ;

/// @brief Method get_autoUpdateEventSystem, addr 0x1824031b0, size 0x40, virtual false, abstract: false, final false
static inline bool get_autoUpdateEventSystem() ;

/// @brief Method get_defaultEventSystem, addr 0x1824031f0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::DefaultEventSystem* get_defaultEventSystem() ;

/// @brief Method get_overrideUseDefaultEventSystem, addr 0x182403280, size 0x40, virtual false, abstract: false, final false
static inline ::System::Nullable_1<bool> get_overrideUseDefaultEventSystem() ;

/// @brief Method get_useDefaultEventSystem, addr 0x1824032c0, size 0x80, virtual false, abstract: false, final false
static inline bool get_useDefaultEventSystem() ;

/// @brief Method remove_onCreatePanel, addr 0x182403340, size 0xd0, virtual false, abstract: false, final false
static inline void remove_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  value) ;

static inline void setStaticF__activeEventSystem_k__BackingField(::UnityW<::UnityEngine::Object>  value) ;

static inline void setStaticF__autoUpdateEventSystem_k__BackingField(bool  value) ;

static inline void setStaticF__overrideUseDefaultEventSystem_k__BackingField(::System::Nullable_1<bool>  value) ;

static inline void setStaticF_currentOverlayIndex(int32_t  value) ;

static inline void setStaticF_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  value) ;

static inline void setStaticF_onWillDestroyPanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  value) ;

static inline void setStaticF_s_CachedWorldSpacePanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  value) ;

static inline void setStaticF_s_DefaultEventSystem(::UnityEngine::UIElements::DefaultEventSystem*  value) ;

static inline void setStaticF_s_PanelOrderingOrDrawInCameraDirty(bool  value) ;

static inline void setStaticF_s_PotentiallyEmptyPanelSettings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::PanelSettings>>*  value) ;

static inline void setStaticF_s_RegisteredPlayerloopCallback(bool  value) ;

static inline void setStaticF_s_ResolvedSortingIndexMax(int32_t  value) ;

static inline void setStaticF_s_SortedPlayerPanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  value) ;

static inline void setStaticF_s_SortedScreenOverlayPanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*  value) ;

/// @brief Method set_activeEventSystem, addr 0x182403410, size 0x60, virtual false, abstract: false, final false
static inline void set_activeEventSystem(::UnityEngine::Object*  value) ;

/// @brief Method set_overrideUseDefaultEventSystem, addr 0x182403470, size 0x50, virtual false, abstract: false, final false
static inline void set_overrideUseDefaultEventSystem(::System::Nullable_1<bool>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIElementsRuntimeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIElementsRuntimeUtility(UIElementsRuntimeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIElementsRuntimeUtility(UIElementsRuntimeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4330};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIElementsRuntimeUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
