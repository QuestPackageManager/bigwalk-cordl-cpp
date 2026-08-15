#pragma once
// IWYU pragma private; include "UnityEngine/Event.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Event)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
struct EventType;
}
namespace UnityEngine {
class Event_BindingsMarshaller;
}
namespace UnityEngine {
struct KeyCode;
}
namespace UnityEngine {
struct PenStatus;
}
namespace UnityEngine {
struct PointerType;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class Event_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::Event*);
MARK_REF_T(::UnityEngine::Event_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Event*, "UnityEngine", "Event");
DEFINE_IL2CPP_CLASS(::UnityEngine::Event_BindingsMarshaller*, "UnityEngine", "Event/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Event/BindingsMarshaller
class CORDL_TYPE Event_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Event*  e) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Event_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Event_BindingsMarshaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Event_BindingsMarshaller(Event_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Event_BindingsMarshaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Event_BindingsMarshaller(Event_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19063};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Event_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Event
class CORDL_TYPE Event : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::Event_BindingsMarshaller;

 __declspec(property(get=get_Internal_keyCode)) ::UnityEngine::KeyCode  Internal_keyCode;

 __declspec(property(get=get_alt)) bool  alt;

 __declspec(property(get=get_button)) int32_t  button;

 __declspec(property(get=get_capsLock)) bool  capsLock;

 __declspec(property(get=get_character)) char16_t  character;

 __declspec(property(get=get_clickCount)) int32_t  clickCount;

 __declspec(property(get=get_command)) bool  command;

 __declspec(property(get=get_commandName, put=set_commandName)) ::StringW  commandName;

 __declspec(property(get=get_control)) bool  control;

 __declspec(property(get=get_delta, put=set_delta)) ::UnityEngine::Vector2  delta;

 __declspec(property(get=get_displayIndex, put=set_displayIndex)) int32_t  displayIndex;

 __declspec(property(get=get_functionKey)) bool  functionKey;

 __declspec(property(get=get_isDirectManipulationDevice)) bool  isDirectManipulationDevice;

 __declspec(property(get=get_isKey)) bool  isKey;

 __declspec(property(get=get_isMouse)) bool  isMouse;

 __declspec(property(get=get_isScrollWheel)) bool  isScrollWheel;

 __declspec(property(get=get_keyCode)) ::UnityEngine::KeyCode  keyCode;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

 __declspec(property(get=get_modifiers)) ::UnityEngine::EventModifiers  modifiers;

 __declspec(property(get=get_mousePosition, put=set_mousePosition)) ::UnityEngine::Vector2  mousePosition;

 __declspec(property(get=get_numeric)) bool  numeric;

 __declspec(property(get=get_penStatus)) ::UnityEngine::PenStatus  penStatus;

 __declspec(property(get=get_pointerType)) ::UnityEngine::PointerType  pointerType;

 __declspec(property(get=get_pressure)) float_t  pressure;

 __declspec(property(get=get_rawType)) ::UnityEngine::EventType  rawType;

/// @brief Field s_AllowOutsideOnGUI, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_AllowOutsideOnGUI, put=setStaticF_s_AllowOutsideOnGUI)) bool  s_AllowOutsideOnGUI;

/// @brief Field s_Current, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Current, put=setStaticF_s_Current)) ::UnityEngine::Event*  s_Current;

/// @brief Field s_MasterEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MasterEvent, put=setStaticF_s_MasterEvent)) ::UnityEngine::Event*  s_MasterEvent;

 __declspec(property(get=get_shift)) bool  shift;

 __declspec(property(get=get_tilt)) ::UnityEngine::Vector2  tilt;

 __declspec(property(get=get_twist)) float_t  twist;

 __declspec(property(get=get_type, put=set_type)) ::UnityEngine::EventType  type;

/// @brief Method CopyFrom, addr 0x1822bd130, size 0x50, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::Event*  e) ;

/// @brief Method CopyFromPtr, addr 0x1822bd100, size 0x30, virtual false, abstract: false, final false
inline void CopyFromPtr(::System::IntPtr  ptr) ;

/// @brief Method CopyFromPtr_Injected, addr 0x1822bd0f0, size 0x10, virtual false, abstract: false, final false
static inline void CopyFromPtr_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  ptr) ;

/// @brief Method Equals, addr 0x1822bd180, size 0x1d0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Finalize, addr 0x1822bd350, size 0x30, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetDoubleClickTime, addr 0x1822bd380, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetDoubleClickTime() ;

/// @brief Method GetEventAtIndex, addr 0x1822bd3a0, size 0x60, virtual false, abstract: false, final false
static inline void GetEventAtIndex(int32_t  index, ::UnityEngine::Event*  outEvent) ;

/// @brief Method GetEventAtIndex_Injected, addr 0x1822bd390, size 0x10, virtual false, abstract: false, final false
static inline void GetEventAtIndex_Injected(int32_t  index, ::System::IntPtr  outEvent) ;

/// @brief Method GetEventCount, addr 0x1822bd400, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetEventCount() ;

/// @brief Method GetHashCode, addr 0x1822bd410, size 0x110, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetTypeForControl, addr 0x1822bd530, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::EventType GetTypeForControl(int32_t  controlID) ;

/// @brief Method GetTypeForControl_Injected, addr 0x1822bd520, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::EventType GetTypeForControl_Injected(::System::IntPtr  _unity_self, int32_t  controlID) ;

/// @brief Method Internal_Create, addr 0x1822bd570, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr Internal_Create(int32_t  displayIndex) ;

/// @brief Method Internal_Destroy, addr 0x1822bd580, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Destroy(::System::IntPtr  ptr) ;

/// @brief Method Internal_MakeMasterEventCurrent, addr 0x1822bd590, size 0xf0, virtual false, abstract: false, final false
static inline void Internal_MakeMasterEventCurrent(int32_t  displayIndex) ;

/// @brief Method Internal_SetNativeEvent, addr 0x1822bd680, size 0x10, virtual false, abstract: false, final false
static inline void Internal_SetNativeEvent(::System::IntPtr  ptr) ;

/// @brief Method Internal_Use, addr 0x1822bd6a0, size 0x30, virtual false, abstract: false, final false
inline void Internal_Use() ;

/// @brief Method Internal_Use_Injected, addr 0x1822bd690, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Use_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::Event* New_ctor() ;

static inline ::UnityEngine::Event* New_ctor(int32_t  displayIndex) ;

/// @brief Method PopEvent, addr 0x1822bd6e0, size 0x50, virtual false, abstract: false, final false
static inline bool PopEvent(::UnityEngine::Event*  outEvent) ;

/// @brief Method PopEvent_Injected, addr 0x1822bd6d0, size 0x10, virtual false, abstract: false, final false
static inline bool PopEvent_Injected(::System::IntPtr  outEvent) ;

/// @brief Method ToString, addr 0x1822bd730, size 0x4c0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Use, addr 0x1822bdbf0, size 0xc0, virtual false, abstract: false, final false
inline void Use() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x1822bdcb0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1822bdcd0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  displayIndex) ;

static inline bool getStaticF_s_AllowOutsideOnGUI() ;

static inline ::UnityEngine::Event* getStaticF_s_Current() ;

static inline ::UnityEngine::Event* getStaticF_s_MasterEvent() ;

/// @brief Method get_Internal_keyCode, addr 0x1822bdd00, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::KeyCode get_Internal_keyCode() ;

/// @brief Method get_Internal_keyCode_Injected, addr 0x1822bdcf0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::KeyCode get_Internal_keyCode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_alt, addr 0x1822bdd30, size 0x30, virtual false, abstract: false, final false
inline bool get_alt() ;

/// @brief Method get_button, addr 0x1822bdd70, size 0x30, virtual false, abstract: false, final false
inline int32_t get_button() ;

/// @brief Method get_button_Injected, addr 0x1822bdd60, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_button_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_capsLock, addr 0x1822bdda0, size 0x30, virtual false, abstract: false, final false
inline bool get_capsLock() ;

/// @brief Method get_character, addr 0x1822bdde0, size 0x30, virtual false, abstract: false, final false
inline char16_t get_character() ;

/// @brief Method get_character_Injected, addr 0x1822bddd0, size 0x10, virtual false, abstract: false, final false
static inline char16_t get_character_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_clickCount, addr 0x1822bde20, size 0x30, virtual false, abstract: false, final false
inline int32_t get_clickCount() ;

/// @brief Method get_clickCount_Injected, addr 0x1822bde10, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_clickCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_command, addr 0x1822bdf10, size 0x30, virtual false, abstract: false, final false
inline bool get_command() ;

/// @brief Method get_commandName, addr 0x1822bde60, size 0xb0, virtual false, abstract: false, final false
inline ::StringW get_commandName() ;

/// @brief Method get_commandName_Injected, addr 0x1822bde50, size 0x10, virtual false, abstract: false, final false
static inline void get_commandName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// @brief Method get_control, addr 0x1822bdf40, size 0x30, virtual false, abstract: false, final false
inline bool get_control() ;

/// @brief Method get_current, addr 0x1822bdf70, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Event* get_current() ;

/// @brief Method get_delta, addr 0x1822bdfa0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_delta() ;

/// @brief Method get_delta_Injected, addr 0x1822bdf90, size 0x10, virtual false, abstract: false, final false
static inline void get_delta_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_displayIndex, addr 0x1822bdff0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_displayIndex() ;

/// @brief Method get_displayIndex_Injected, addr 0x1822bdfe0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_displayIndex_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_functionKey, addr 0x1822be020, size 0x30, virtual false, abstract: false, final false
inline bool get_functionKey() ;

/// @brief Method get_isDirectManipulationDevice, addr 0x1822be050, size 0x80, virtual false, abstract: false, final false
inline bool get_isDirectManipulationDevice() ;

/// @brief Method get_isKey, addr 0x1822be0d0, size 0x50, virtual false, abstract: false, final false
inline bool get_isKey() ;

/// @brief Method get_isMouse, addr 0x1822be120, size 0x50, virtual false, abstract: false, final false
inline bool get_isMouse() ;

/// @brief Method get_isScrollWheel, addr 0x1822be170, size 0x30, virtual false, abstract: false, final false
inline bool get_isScrollWheel() ;

/// @brief Method get_keyCode, addr 0x1822be1a0, size 0x190, virtual false, abstract: false, final false
inline ::UnityEngine::KeyCode get_keyCode() ;

/// @brief Method get_modifiers, addr 0x1822be340, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method get_modifiers_Injected, addr 0x1822be330, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::EventModifiers get_modifiers_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_mousePosition, addr 0x1822be380, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_mousePosition() ;

/// @brief Method get_mousePosition_Injected, addr 0x1822be370, size 0x10, virtual false, abstract: false, final false
static inline void get_mousePosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_numeric, addr 0x1822be3c0, size 0x30, virtual false, abstract: false, final false
inline bool get_numeric() ;

/// @brief Method get_penStatus, addr 0x1822be400, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::PenStatus get_penStatus() ;

/// @brief Method get_penStatus_Injected, addr 0x1822be3f0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::PenStatus get_penStatus_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pointerType, addr 0x1822be440, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::PointerType get_pointerType() ;

/// @brief Method get_pointerType_Injected, addr 0x1822be430, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::PointerType get_pointerType_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pressure, addr 0x1822be480, size 0x30, virtual false, abstract: false, final false
inline float_t get_pressure() ;

/// @brief Method get_pressure_Injected, addr 0x1822be470, size 0x10, virtual false, abstract: false, final false
static inline float_t get_pressure_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rawType, addr 0x1822be4c0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::EventType get_rawType() ;

/// @brief Method get_rawType_Injected, addr 0x1822be4b0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::EventType get_rawType_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shift, addr 0x1822be4f0, size 0x30, virtual false, abstract: false, final false
inline bool get_shift() ;

/// @brief Method get_tilt, addr 0x1822be530, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_tilt() ;

/// @brief Method get_tilt_Injected, addr 0x1822be520, size 0x10, virtual false, abstract: false, final false
static inline void get_tilt_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_twist, addr 0x1822be580, size 0x30, virtual false, abstract: false, final false
inline float_t get_twist() ;

/// @brief Method get_twist_Injected, addr 0x1822be570, size 0x10, virtual false, abstract: false, final false
static inline float_t get_twist_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_type, addr 0x1822be5c0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::EventType get_type() ;

/// @brief Method get_type_Injected, addr 0x1822be5b0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::EventType get_type_Injected(::System::IntPtr  _unity_self) ;

static inline void setStaticF_s_AllowOutsideOnGUI(bool  value) ;

static inline void setStaticF_s_Current(::UnityEngine::Event*  value) ;

static inline void setStaticF_s_MasterEvent(::UnityEngine::Event*  value) ;

/// @brief Method set_commandName, addr 0x1822be600, size 0x120, virtual false, abstract: false, final false
inline void set_commandName(::StringW  value) ;

/// @brief Method set_commandName_Injected, addr 0x1822be5f0, size 0x10, virtual false, abstract: false, final false
static inline void set_commandName_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

/// @brief Method set_current, addr 0x1822be720, size 0x70, virtual false, abstract: false, final false
static inline void set_current(::UnityEngine::Event*  value) ;

/// @brief Method set_delta, addr 0x1822be7a0, size 0x40, virtual false, abstract: false, final false
inline void set_delta(::UnityEngine::Vector2  value) ;

/// @brief Method set_delta_Injected, addr 0x1822be790, size 0x10, virtual false, abstract: false, final false
static inline void set_delta_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_displayIndex, addr 0x1822be7f0, size 0x30, virtual false, abstract: false, final false
inline void set_displayIndex(int32_t  value) ;

/// @brief Method set_displayIndex_Injected, addr 0x1822be7e0, size 0x10, virtual false, abstract: false, final false
static inline void set_displayIndex_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_mousePosition, addr 0x1822be830, size 0x40, virtual false, abstract: false, final false
inline void set_mousePosition(::UnityEngine::Vector2  value) ;

/// @brief Method set_mousePosition_Injected, addr 0x1822be820, size 0x10, virtual false, abstract: false, final false
static inline void set_mousePosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_type, addr 0x1822be880, size 0x30, virtual false, abstract: false, final false
inline void set_type(::UnityEngine::EventType  value) ;

/// @brief Method set_type_Injected, addr 0x1822be870, size 0x10, virtual false, abstract: false, final false
static inline void set_type_Injected(::System::IntPtr  _unity_self, ::UnityEngine::EventType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Event() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Event", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Event(Event && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Event", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Event(Event const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19064};

/// @brief Field scrollWheelDeltaPerTick offset 0xffffffff size 0x4
static constexpr float_t  scrollWheelDeltaPerTick{static_cast<float_t>(3.0f)};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Event, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Event) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
