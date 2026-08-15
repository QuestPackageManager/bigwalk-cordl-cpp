#pragma once
// IWYU pragma private; include "Rewired/Integration/UnityUI/RewiredPointerInputModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RewiredPointerInputModule)
namespace Rewired::Integration::UnityUI {
class PlayerPointerEventData;
}
namespace Rewired::Integration::UnityUI {
struct PointerEventType;
}
namespace Rewired::Integration::UnityUI {
class RewiredPointerInputModule_ButtonState;
}
namespace Rewired::Integration::UnityUI {
class RewiredPointerInputModule_MouseButtonEventData;
}
namespace Rewired::Integration::UnityUI {
class RewiredPointerInputModule_MouseState;
}
namespace Rewired::Integration::UnityUI {
class RewiredPointerInputModule_UnityInputSource;
}
namespace Rewired::UI {
class IMouseInputSource;
}
namespace Rewired::UI {
class ITouchInputSource;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
struct PointerEventData_FramePressState;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Rewired::Integration::UnityUI {
class RewiredPointerInputModule;
}
namespace Rewired::Integration::UnityUI {
class RewiredPointerInputModule_ButtonState;
}
namespace Rewired::Integration::UnityUI {
class RewiredPointerInputModule_MouseButtonEventData;
}
namespace Rewired::Integration::UnityUI {
class RewiredPointerInputModule_MouseState;
}
namespace Rewired::Integration::UnityUI {
class RewiredPointerInputModule_UnityInputSource;
}
// Write type traits
MARK_REF_T(::Rewired::Integration::UnityUI::RewiredPointerInputModule*);
MARK_REF_T(::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*);
MARK_REF_T(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*);
MARK_REF_T(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*);
MARK_REF_T(::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*);
DEFINE_IL2CPP_CLASS(::Rewired::Integration::UnityUI::RewiredPointerInputModule*, "Rewired.Integration.UnityUI", "RewiredPointerInputModule");
DEFINE_IL2CPP_CLASS(::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*, "Rewired.Integration.UnityUI", "RewiredPointerInputModule/ButtonState");
DEFINE_IL2CPP_CLASS(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*, "Rewired.Integration.UnityUI", "RewiredPointerInputModule/MouseButtonEventData");
DEFINE_IL2CPP_CLASS(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*, "Rewired.Integration.UnityUI", "RewiredPointerInputModule/MouseState");
DEFINE_IL2CPP_CLASS(::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*, "Rewired.Integration.UnityUI", "RewiredPointerInputModule/UnityInputSource");
// Dependencies System.Object
namespace Rewired::Integration::UnityUI {
// Is value type: false
// CS Name: Rewired.Integration.UnityUI.RewiredPointerInputModule/MouseState
class CORDL_TYPE RewiredPointerInputModule_MouseState : public ::System::Object {
public:
// Declarations
/// @brief Field m_TrackedButtons, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TrackedButtons, put=__cordl_internal_set_m_TrackedButtons)) ::System::Collections::Generic::List_1<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>*  m_TrackedButtons;

/// @brief Method AnyPressesThisFrame, addr 0x1803ab660, size 0x70, virtual false, abstract: false, final false
inline bool AnyPressesThisFrame() ;

/// @brief Method AnyReleasesThisFrame, addr 0x1803ab6d0, size 0x70, virtual false, abstract: false, final false
inline bool AnyReleasesThisFrame() ;

/// @brief Method GetButtonState, addr 0x1803ab740, size 0x120, virtual false, abstract: false, final false
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState* GetButtonState(int32_t  button) ;

static inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState* New_ctor() ;

/// @brief Method SetButtonState, addr 0x1803ab860, size 0x60, virtual false, abstract: false, final false
inline void SetButtonState(int32_t  button, ::UnityEngine::EventSystems::PointerEventData_FramePressState  stateForMouseButton, ::Rewired::Integration::UnityUI::PlayerPointerEventData*  data) ;

constexpr ::System::Collections::Generic::List_1<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>* const& __cordl_internal_get_m_TrackedButtons() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>*& __cordl_internal_get_m_TrackedButtons() ;

constexpr void __cordl_internal_set_m_TrackedButtons(::System::Collections::Generic::List_1<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>*  value) ;

/// @brief Method .ctor, addr 0x1803ab8c0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewiredPointerInputModule_MouseState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewiredPointerInputModule_MouseState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RewiredPointerInputModule_MouseState(RewiredPointerInputModule_MouseState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewiredPointerInputModule_MouseState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewiredPointerInputModule_MouseState(RewiredPointerInputModule_MouseState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5698};

/// @brief Field m_TrackedButtons, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState*>*  ___m_TrackedButtons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState, ___m_TrackedButtons) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Integration::UnityUI
// Dependencies System.Object, UnityEngine.EventSystems.PointerEventData::FramePressState
namespace Rewired::Integration::UnityUI {
// Is value type: false
// CS Name: Rewired.Integration.UnityUI.RewiredPointerInputModule/MouseButtonEventData
class CORDL_TYPE RewiredPointerInputModule_MouseButtonEventData : public ::System::Object {
public:
// Declarations
/// @brief Field buttonData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonData, put=__cordl_internal_set_buttonData)) ::Rewired::Integration::UnityUI::PlayerPointerEventData*  buttonData;

/// @brief Field buttonState, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonState, put=__cordl_internal_set_buttonState)) ::UnityEngine::EventSystems::PointerEventData_FramePressState  buttonState;

static inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData* New_ctor() ;

/// @brief Method PressedThisFrame, addr 0x1803ab620, size 0x20, virtual false, abstract: false, final false
inline bool PressedThisFrame() ;

/// @brief Method ReleasedThisFrame, addr 0x1803ab640, size 0x20, virtual false, abstract: false, final false
inline bool ReleasedThisFrame() ;

constexpr ::Rewired::Integration::UnityUI::PlayerPointerEventData* const& __cordl_internal_get_buttonData() const;

constexpr ::Rewired::Integration::UnityUI::PlayerPointerEventData*& __cordl_internal_get_buttonData() ;

constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState const& __cordl_internal_get_buttonState() const;

constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState& __cordl_internal_get_buttonState() ;

constexpr void __cordl_internal_set_buttonData(::Rewired::Integration::UnityUI::PlayerPointerEventData*  value) ;

constexpr void __cordl_internal_set_buttonState(::UnityEngine::EventSystems::PointerEventData_FramePressState  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewiredPointerInputModule_MouseButtonEventData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewiredPointerInputModule_MouseButtonEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RewiredPointerInputModule_MouseButtonEventData(RewiredPointerInputModule_MouseButtonEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewiredPointerInputModule_MouseButtonEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewiredPointerInputModule_MouseButtonEventData(RewiredPointerInputModule_MouseButtonEventData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5699};

/// @brief Field buttonState, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::EventSystems::PointerEventData_FramePressState  ___buttonState;

/// @brief Field buttonData, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Integration::UnityUI::PlayerPointerEventData*  ___buttonData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData, ___buttonState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData, ___buttonData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Integration::UnityUI
// Dependencies System.Object
namespace Rewired::Integration::UnityUI {
// Is value type: false
// CS Name: Rewired.Integration.UnityUI.RewiredPointerInputModule/ButtonState
class CORDL_TYPE RewiredPointerInputModule_ButtonState : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_button, put=set_button)) int32_t  button;

 __declspec(property(get=get_eventData, put=set_eventData)) ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*  eventData;

/// @brief Field m_Button, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Button, put=__cordl_internal_set_m_Button)) int32_t  m_Button;

/// @brief Field m_EventData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EventData, put=__cordl_internal_set_m_EventData)) ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*  m_EventData;

static inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_m_Button() const;

constexpr int32_t& __cordl_internal_get_m_Button() ;

constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData* const& __cordl_internal_get_m_EventData() const;

constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*& __cordl_internal_get_m_EventData() ;

constexpr void __cordl_internal_set_m_Button(int32_t  value) ;

constexpr void __cordl_internal_set_m_EventData(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_button, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_button() ;

/// @brief Method get_eventData, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData* get_eventData() ;

/// @brief Method set_button, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_button(int32_t  value) ;

/// @brief Method set_eventData, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_eventData(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewiredPointerInputModule_ButtonState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewiredPointerInputModule_ButtonState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RewiredPointerInputModule_ButtonState(RewiredPointerInputModule_ButtonState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewiredPointerInputModule_ButtonState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewiredPointerInputModule_ButtonState(RewiredPointerInputModule_ButtonState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5700};

/// @brief Field m_Button, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_Button;

/// @brief Field m_EventData, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData*  ___m_EventData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState, ___m_Button) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState, ___m_EventData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState) == 0x20, "Size mismatch!");

} // namespace end def Rewired::Integration::UnityUI
// Dependencies System.Object, UnityEngine.Vector2
namespace Rewired::Integration::UnityUI {
// Is value type: false
// CS Name: Rewired.Integration.UnityUI.RewiredPointerInputModule/UnityInputSource
class CORDL_TYPE RewiredPointerInputModule_UnityInputSource : public ::System::Object {
public:
// Declarations
 __declspec(property(get=Rewired_UI_IMouseInputSource_get_buttonCount)) int32_t  Rewired_UI_IMouseInputSource_buttonCount;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_enabled)) bool  Rewired_UI_IMouseInputSource_enabled;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_locked)) bool  Rewired_UI_IMouseInputSource_locked;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_playerId)) int32_t  Rewired_UI_IMouseInputSource_playerId;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_screenPosition)) ::UnityEngine::Vector2  Rewired_UI_IMouseInputSource_screenPosition;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_screenPositionDelta)) ::UnityEngine::Vector2  Rewired_UI_IMouseInputSource_screenPositionDelta;

 __declspec(property(get=Rewired_UI_IMouseInputSource_get_wheelDelta)) ::UnityEngine::Vector2  Rewired_UI_IMouseInputSource_wheelDelta;

 __declspec(property(get=Rewired_UI_ITouchInputSource_get_playerId)) int32_t  Rewired_UI_ITouchInputSource_playerId;

 __declspec(property(get=Rewired_UI_ITouchInputSource_get_touchCount)) int32_t  Rewired_UI_ITouchInputSource_touchCount;

 __declspec(property(get=Rewired_UI_ITouchInputSource_get_touchSupported)) bool  Rewired_UI_ITouchInputSource_touchSupported;

/// @brief Field m_LastUpdatedFrame, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastUpdatedFrame, put=__cordl_internal_set_m_LastUpdatedFrame)) int32_t  m_LastUpdatedFrame;

/// @brief Field m_MousePosition, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MousePosition, put=__cordl_internal_set_m_MousePosition)) ::UnityEngine::Vector2  m_MousePosition;

/// @brief Field m_MousePositionPrev, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MousePositionPrev, put=__cordl_internal_set_m_MousePositionPrev)) ::UnityEngine::Vector2  m_MousePositionPrev;

/// @brief Convert operator to "::Rewired::UI::IMouseInputSource"
constexpr operator  ::Rewired::UI::IMouseInputSource*() noexcept;

/// @brief Convert operator to "::Rewired::UI::ITouchInputSource"
constexpr operator  ::Rewired::UI::ITouchInputSource*() noexcept;

/// @brief Method GetCorrectedTouchPosition, addr 0x1802dc680, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetCorrectedTouchPosition(::UnityEngine::Vector2  rawTouchPos) ;

static inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource* New_ctor() ;

/// @brief Method Rewired.UI.IMouseInputSource.GetButton, addr 0x1803b5ce0, size 0x70, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_GetButton(int32_t  button) ;

/// @brief Method Rewired.UI.IMouseInputSource.GetButtonDown, addr 0x1803b5c00, size 0x70, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_GetButtonDown(int32_t  button) ;

/// @brief Method Rewired.UI.IMouseInputSource.GetButtonUp, addr 0x1803b5c70, size 0x70, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_GetButtonUp(int32_t  button) ;

/// @brief Method Rewired.UI.IMouseInputSource.get_buttonCount, addr 0x1803b5d50, size 0x60, virtual true, abstract: false, final true
inline int32_t Rewired_UI_IMouseInputSource_get_buttonCount() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_enabled, addr 0x1803b5db0, size 0x60, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_get_enabled() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_locked, addr 0x1803b5e10, size 0x60, virtual true, abstract: false, final true
inline bool Rewired_UI_IMouseInputSource_get_locked() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_playerId, addr 0x1803b5e70, size 0x60, virtual true, abstract: false, final true
inline int32_t Rewired_UI_IMouseInputSource_get_playerId() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_screenPosition, addr 0x1803b5f40, size 0x80, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPosition() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_screenPositionDelta, addr 0x1803b5ed0, size 0x70, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPositionDelta() ;

/// @brief Method Rewired.UI.IMouseInputSource.get_wheelDelta, addr 0x1803b5fc0, size 0x60, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_wheelDelta() ;

/// @brief Method Rewired.UI.ITouchInputSource.GetTouch, addr 0x1803b6020, size 0xe0, virtual true, abstract: false, final true
inline ::UnityEngine::Touch Rewired_UI_ITouchInputSource_GetTouch(int32_t  index) ;

/// @brief Method Rewired.UI.ITouchInputSource.get_playerId, addr 0x1803b5e70, size 0x60, virtual true, abstract: false, final true
inline int32_t Rewired_UI_ITouchInputSource_get_playerId() ;

/// @brief Method Rewired.UI.ITouchInputSource.get_touchCount, addr 0x1803b6100, size 0x60, virtual true, abstract: false, final true
inline int32_t Rewired_UI_ITouchInputSource_get_touchCount() ;

/// @brief Method Rewired.UI.ITouchInputSource.get_touchSupported, addr 0x1803b6160, size 0x60, virtual true, abstract: false, final true
inline bool Rewired_UI_ITouchInputSource_get_touchSupported() ;

/// @brief Method TryUpdate, addr 0x1803b61c0, size 0x60, virtual false, abstract: false, final false
inline void TryUpdate() ;

constexpr int32_t const& __cordl_internal_get_m_LastUpdatedFrame() const;

constexpr int32_t& __cordl_internal_get_m_LastUpdatedFrame() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MousePosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MousePosition() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MousePositionPrev() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MousePositionPrev() ;

constexpr void __cordl_internal_set_m_LastUpdatedFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_MousePosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_MousePositionPrev(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x1803b6220, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Rewired::UI::IMouseInputSource"
constexpr ::Rewired::UI::IMouseInputSource* i___Rewired__UI__IMouseInputSource() noexcept;

/// @brief Convert to "::Rewired::UI::ITouchInputSource"
constexpr ::Rewired::UI::ITouchInputSource* i___Rewired__UI__ITouchInputSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewiredPointerInputModule_UnityInputSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewiredPointerInputModule_UnityInputSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RewiredPointerInputModule_UnityInputSource(RewiredPointerInputModule_UnityInputSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewiredPointerInputModule_UnityInputSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewiredPointerInputModule_UnityInputSource(RewiredPointerInputModule_UnityInputSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5701};

/// @brief Field m_MousePosition, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_MousePosition;

/// @brief Field m_MousePositionPrev, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_MousePositionPrev;

/// @brief Field m_LastUpdatedFrame, offset: 0x20, size: 0x4, def value: None
 int32_t  ___m_LastUpdatedFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource, ___m_MousePosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource, ___m_MousePositionPrev) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource, ___m_LastUpdatedFrame) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource) == 0x28, "Size mismatch!");

} // namespace end def Rewired::Integration::UnityUI
// Dependencies UnityEngine.EventSystems.BaseInputModule
namespace Rewired::Integration::UnityUI {
// Is value type: false
// CS Name: Rewired.Integration.UnityUI.RewiredPointerInputModule
class CORDL_TYPE RewiredPointerInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
// Declarations
using ButtonState = ::Rewired::Integration::UnityUI::RewiredPointerInputModule_ButtonState;

using MouseButtonEventData = ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData;

using MouseState = ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState;

using UnityInputSource = ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource;

/// @brief Field __m_DefaultInputSource, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get___m_DefaultInputSource, put=__cordl_internal_set___m_DefaultInputSource)) ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*  __m_DefaultInputSource;

 __declspec(property(get=get_defaultInputSource)) ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*  defaultInputSource;

 __declspec(property(get=get_defaultMouseInputSource)) ::Rewired::UI::IMouseInputSource*  defaultMouseInputSource;

 __declspec(property(get=get_defaultTouchInputSource)) ::Rewired::UI::ITouchInputSource*  defaultTouchInputSource;

 __declspec(property(get=get_isMouseSupported)) bool  isMouseSupported;

/// @brief Field m_MouseInputSourcesList, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MouseInputSourcesList, put=__cordl_internal_set_m_MouseInputSourcesList)) ::System::Collections::Generic::List_1<::Rewired::UI::IMouseInputSource*>*  m_MouseInputSourcesList;

/// @brief Field m_MouseState, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MouseState, put=__cordl_internal_set_m_MouseState)) ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*  m_MouseState;

/// @brief Field m_PlayerPointerData, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PlayerPointerData, put=__cordl_internal_set_m_PlayerPointerData)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Integration::UnityUI::PlayerPointerEventData*>*>>*  m_PlayerPointerData;

/// @brief Field m_UserDefaultTouchInputSource, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UserDefaultTouchInputSource, put=__cordl_internal_set_m_UserDefaultTouchInputSource)) ::Rewired::UI::ITouchInputSource*  m_UserDefaultTouchInputSource;

/// @brief Method AddMouseInputSource, addr 0x1803ac430, size 0xa0, virtual false, abstract: false, final false
inline void AddMouseInputSource(::Rewired::UI::IMouseInputSource*  source) ;

/// @brief Method AddTouchInputSource, addr 0x1803ac4d0, size 0x50, virtual false, abstract: false, final false
inline void AddTouchInputSource(::Rewired::UI::ITouchInputSource*  source) ;

/// @brief Method ClearMouseInputSources, addr 0x1803ac520, size 0x40, virtual false, abstract: false, final false
inline void ClearMouseInputSources() ;

/// @brief Method ClearSelection, addr 0x1803ac560, size 0x1a0, virtual false, abstract: false, final false
inline void ClearSelection() ;

/// @brief Method CopyFromTo, addr 0x1803ac700, size 0x110, virtual false, abstract: false, final false
inline void CopyFromTo(::UnityEngine::EventSystems::PointerEventData*  from, ::UnityEngine::EventSystems::PointerEventData*  to) ;

/// @brief Method CreatePointerEventData, addr 0x1803ac810, size 0x130, virtual false, abstract: false, final false
inline ::Rewired::Integration::UnityUI::PlayerPointerEventData* CreatePointerEventData(int32_t  playerId, int32_t  pointerIndex, int32_t  pointerTypeId, ::Rewired::Integration::UnityUI::PointerEventType  pointerEventType) ;

/// @brief Method DeselectIfSelectionChanged, addr 0x1803ac940, size 0x70, virtual false, abstract: false, final false
inline void DeselectIfSelectionChanged(::UnityEngine::GameObject*  currentOverGo, ::UnityEngine::EventSystems::BaseEventData*  pointerEvent) ;

/// @brief Method GetLastPointerEventData, addr 0x1803ac9b0, size 0x120, virtual false, abstract: false, final false
inline ::Rewired::Integration::UnityUI::PlayerPointerEventData* GetLastPointerEventData(int32_t  playerId, int32_t  pointerIndex, int32_t  pointerTypeId, bool  ignorePointerTypeId, ::Rewired::Integration::UnityUI::PointerEventType  pointerEventType) ;

/// @brief Method GetMouseInputSource, addr 0x1803acbc0, size 0x130, virtual false, abstract: false, final false
inline ::Rewired::UI::IMouseInputSource* GetMouseInputSource(int32_t  playerId, int32_t  mouseIndex) ;

/// @brief Method GetMouseInputSourceCount, addr 0x1803acad0, size 0xf0, virtual false, abstract: false, final false
inline int32_t GetMouseInputSourceCount(int32_t  playerId) ;

/// @brief Method GetMousePointerEventData, addr 0x1803accf0, size 0x9c0, virtual true, abstract: false, final false
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState* GetMousePointerEventData(int32_t  playerId, int32_t  mouseIndex) ;

/// @brief Method GetPointerData, addr 0x1803ad6b0, size 0x410, virtual false, abstract: false, final false
inline bool GetPointerData(int32_t  playerId, int32_t  pointerIndex, int32_t  pointerTypeId, ::by_ref<::Rewired::Integration::UnityUI::PlayerPointerEventData*>  data, bool  create, ::Rewired::Integration::UnityUI::PointerEventType  pointerEventType) ;

/// @brief Method GetTouchInputSource, addr 0x1803adaf0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::UI::ITouchInputSource* GetTouchInputSource(int32_t  playerId, int32_t  sourceIndex) ;

/// @brief Method GetTouchInputSourceCount, addr 0x1803adac0, size 0x30, virtual false, abstract: false, final false
inline int32_t GetTouchInputSourceCount(int32_t  playerId) ;

/// @brief Method GetTouchPointerEventData, addr 0x1803adb70, size 0x2c0, virtual false, abstract: false, final false
inline ::Rewired::Integration::UnityUI::PlayerPointerEventData* GetTouchPointerEventData(int32_t  playerId, int32_t  touchDeviceIndex, ::UnityEngine::Touch  input, ::by_ref<bool>  pressed, ::by_ref<bool>  released) ;

/// @brief Method IsDefaultMouse, addr 0x1803ade30, size 0x60, virtual false, abstract: false, final false
inline bool IsDefaultMouse(::Rewired::UI::IMouseInputSource*  mouse) ;

/// @brief Method IsDefaultPlayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsDefaultPlayer(int32_t  playerId) ;

/// @brief Method IsPointerOverGameObject, addr 0x1803ade90, size 0x110, virtual true, abstract: false, final false
inline bool IsPointerOverGameObject(int32_t  pointerTypeId) ;

static inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule* New_ctor() ;

/// @brief Method ProcessDrag, addr 0x1803adfa0, size 0x220, virtual true, abstract: false, final false
inline void ProcessDrag(::Rewired::Integration::UnityUI::PlayerPointerEventData*  pointerEvent) ;

/// @brief Method ProcessMove, addr 0x1803ae1c0, size 0xd0, virtual true, abstract: false, final false
inline void ProcessMove(::Rewired::Integration::UnityUI::PlayerPointerEventData*  pointerEvent) ;

/// @brief Method RemoveMouseInputSource, addr 0x1803ae290, size 0x40, virtual false, abstract: false, final false
inline void RemoveMouseInputSource(::Rewired::UI::IMouseInputSource*  source) ;

/// @brief Method RemovePointerData, addr 0x1803ae2d0, size 0x80, virtual false, abstract: false, final false
inline void RemovePointerData(::Rewired::Integration::UnityUI::PlayerPointerEventData*  data) ;

/// @brief Method RemoveTouchInputSource, addr 0x1803ae350, size 0x40, virtual false, abstract: false, final false
inline void RemoveTouchInputSource(::Rewired::UI::ITouchInputSource*  source) ;

/// @brief Method ShouldStartDrag, addr 0x1803ae390, size 0x50, virtual false, abstract: false, final false
static inline bool ShouldStartDrag(::UnityEngine::Vector2  pressPos, ::UnityEngine::Vector2  currentPos, float_t  threshold, bool  useDragThreshold) ;

/// @brief Method StateForMouseButton, addr 0x1803ae3e0, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData_FramePressState StateForMouseButton(int32_t  playerId, int32_t  mouseIndex, int32_t  buttonId) ;

/// @brief Method ToString, addr 0x1803ae4a0, size 0x280, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource* const& __cordl_internal_get___m_DefaultInputSource() const;

constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*& __cordl_internal_get___m_DefaultInputSource() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::UI::IMouseInputSource*>* const& __cordl_internal_get_m_MouseInputSourcesList() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::UI::IMouseInputSource*>*& __cordl_internal_get_m_MouseInputSourcesList() ;

constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState* const& __cordl_internal_get_m_MouseState() const;

constexpr ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*& __cordl_internal_get_m_MouseState() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Integration::UnityUI::PlayerPointerEventData*>*>>* const& __cordl_internal_get_m_PlayerPointerData() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Integration::UnityUI::PlayerPointerEventData*>*>>*& __cordl_internal_get_m_PlayerPointerData() ;

constexpr ::Rewired::UI::ITouchInputSource* const& __cordl_internal_get_m_UserDefaultTouchInputSource() const;

constexpr ::Rewired::UI::ITouchInputSource*& __cordl_internal_get_m_UserDefaultTouchInputSource() ;

constexpr void __cordl_internal_set___m_DefaultInputSource(::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*  value) ;

constexpr void __cordl_internal_set_m_MouseInputSourcesList(::System::Collections::Generic::List_1<::Rewired::UI::IMouseInputSource*>*  value) ;

constexpr void __cordl_internal_set_m_MouseState(::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*  value) ;

constexpr void __cordl_internal_set_m_PlayerPointerData(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Integration::UnityUI::PlayerPointerEventData*>*>>*  value) ;

constexpr void __cordl_internal_set_m_UserDefaultTouchInputSource(::Rewired::UI::ITouchInputSource*  value) ;

/// @brief Method .ctor, addr 0x1803ae720, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_defaultInputSource, addr 0x1803ae800, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource* get_defaultInputSource() ;

/// @brief Method get_defaultMouseInputSource, addr 0x1803ae800, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::UI::IMouseInputSource* get_defaultMouseInputSource() ;

/// @brief Method get_defaultTouchInputSource, addr 0x1803ae800, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::UI::ITouchInputSource* get_defaultTouchInputSource() ;

/// @brief Method get_isMouseSupported, addr 0x1803ae860, size 0xf0, virtual true, abstract: false, final false
inline bool get_isMouseSupported() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RewiredPointerInputModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RewiredPointerInputModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RewiredPointerInputModule(RewiredPointerInputModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RewiredPointerInputModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RewiredPointerInputModule(RewiredPointerInputModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5702};

/// @brief Field customButtonsLastId offset 0xffffffff size 0x4
static constexpr int32_t  customButtonsLastId{static_cast<int32_t>(0x80000100)};

/// @brief Field customButtonsMaxCount offset 0xffffffff size 0x4
static constexpr int32_t  customButtonsMaxCount{static_cast<int32_t>(0x80)};

/// @brief Field customButtonsStartingId offset 0xffffffff size 0x4
static constexpr int32_t  customButtonsStartingId{static_cast<int32_t>(0x80000080)};

/// @brief Field kFakeTouchesId offset 0xffffffff size 0x4
static constexpr int32_t  kFakeTouchesId{static_cast<int32_t>(0xfffffffc)};

/// @brief Field kMouseLeftId offset 0xffffffff size 0x4
static constexpr int32_t  kMouseLeftId{static_cast<int32_t>(0xffffffff)};

/// @brief Field kMouseMiddleId offset 0xffffffff size 0x4
static constexpr int32_t  kMouseMiddleId{static_cast<int32_t>(0xfffffffd)};

/// @brief Field kMouseRightId offset 0xffffffff size 0x4
static constexpr int32_t  kMouseRightId{static_cast<int32_t>(0xfffffffe)};

/// @brief Field m_MouseInputSourcesList, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::UI::IMouseInputSource*>*  ___m_MouseInputSourcesList;

/// @brief Field m_PlayerPointerData, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Collections::Generic::Dictionary_2<int32_t,::Rewired::Integration::UnityUI::PlayerPointerEventData*>*>>*  ___m_PlayerPointerData;

/// @brief Field m_UserDefaultTouchInputSource, offset: 0x68, size: 0x8, def value: None
 ::Rewired::UI::ITouchInputSource*  ___m_UserDefaultTouchInputSource;

/// @brief Field __m_DefaultInputSource, offset: 0x70, size: 0x8, def value: None
 ::Rewired::Integration::UnityUI::RewiredPointerInputModule_UnityInputSource*  _____m_DefaultInputSource;

/// @brief Field m_MouseState, offset: 0x78, size: 0x8, def value: None
 ::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseState*  ___m_MouseState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule, ___m_MouseInputSourcesList) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule, ___m_PlayerPointerData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule, ___m_UserDefaultTouchInputSource) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule, _____m_DefaultInputSource) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rewired::Integration::UnityUI::RewiredPointerInputModule, ___m_MouseState) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Rewired::Integration::UnityUI::RewiredPointerInputModule) == 0x80, "Size mismatch!");

} // namespace end def Rewired::Integration::UnityUI
