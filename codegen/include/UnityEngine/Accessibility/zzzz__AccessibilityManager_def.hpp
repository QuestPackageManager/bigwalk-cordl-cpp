#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityManager)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Accessibility {
class AccessibilityManager_ExclusiveLock;
}
namespace UnityEngine::Accessibility {
class AccessibilityManager_Nested;
}
namespace UnityEngine::Accessibility {
struct AccessibilityManager_NotificationContext;
}
namespace UnityEngine::Accessibility {
struct AccessibilityManager_Notification;
}
namespace UnityEngine::Accessibility {
struct AccessibilityNodeData;
}
namespace UnityEngine::Accessibility {
class AccessibilityNode;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
struct AccessibilityManager_Notification;
}
namespace UnityEngine::Accessibility {
class AccessibilityManager;
}
namespace UnityEngine::Accessibility {
class AccessibilityManager_ExclusiveLock;
}
namespace UnityEngine::Accessibility {
class AccessibilityManager_Nested;
}
namespace UnityEngine::Accessibility {
struct AccessibilityManager_NotificationContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Accessibility::AccessibilityManager_Notification);
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityManager*);
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*);
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityManager_Nested*);
MARK_VAL_T(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityManager_Notification, "UnityEngine.Accessibility", "AccessibilityManager/Notification");
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityManager*, "UnityEngine.Accessibility", "AccessibilityManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*, "UnityEngine.Accessibility", "AccessibilityManager/ExclusiveLock");
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityManager_Nested*, "UnityEngine.Accessibility", "AccessibilityManager/Nested");
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext, "UnityEngine.Accessibility", "AccessibilityManager/NotificationContext");
// Dependencies 
namespace UnityEngine::Accessibility {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AccessibilityManager/Notification
struct CORDL_TYPE AccessibilityManager_Notification {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __AccessibilityManager_Notification_Unwrapped
enum struct __AccessibilityManager_Notification_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_ScreenReaderStatusChanged = static_cast<uint8_t>(0x1u),
__E_ElementFocused = static_cast<uint8_t>(0x2u),
__E_ElementUnfocused = static_cast<uint8_t>(0x3u),
__E_FontScaleChanged = static_cast<uint8_t>(0x4u),
__E_BoldTextStatusChanged = static_cast<uint8_t>(0x5u),
__E_ClosedCaptioningStatusChanged = static_cast<uint8_t>(0x6u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AccessibilityManager_Notification_Unwrapped () const noexcept {
return static_cast<__AccessibilityManager_Notification_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityManager_Notification() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AccessibilityManager_Notification(uint8_t  value__) noexcept;

/// @brief Field BoldTextStatusChanged value: U8(5)
static ::UnityEngine::Accessibility::AccessibilityManager_Notification const BoldTextStatusChanged;

/// @brief Field ClosedCaptioningStatusChanged value: U8(6)
static ::UnityEngine::Accessibility::AccessibilityManager_Notification const ClosedCaptioningStatusChanged;

/// @brief Field ElementFocused value: U8(2)
static ::UnityEngine::Accessibility::AccessibilityManager_Notification const ElementFocused;

/// @brief Field ElementUnfocused value: U8(3)
static ::UnityEngine::Accessibility::AccessibilityManager_Notification const ElementUnfocused;

/// @brief Field FontScaleChanged value: U8(4)
static ::UnityEngine::Accessibility::AccessibilityManager_Notification const FontScaleChanged;

/// @brief Field None value: U8(0)
static ::UnityEngine::Accessibility::AccessibilityManager_Notification const None;

/// @brief Field ScreenReaderStatusChanged value: U8(1)
static ::UnityEngine::Accessibility::AccessibilityManager_Notification const ScreenReaderStatusChanged;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21217};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityManager_Notification, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityManager_Notification) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
// Dependencies UnityEngine.Accessibility.AccessibilityManager::Notification
namespace UnityEngine::Accessibility {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AccessibilityManager/NotificationContext
struct CORDL_TYPE AccessibilityManager_NotificationContext {
public:
// Declarations
 __declspec(property(get=get_focusedNode, put=set_focusedNode)) ::UnityEngine::Accessibility::AccessibilityNode*  focusedNode;

 __declspec(property(get=get_fontScale, put=set_fontScale)) float_t  fontScale;

 __declspec(property(get=get_isBoldTextEnabled, put=set_isBoldTextEnabled)) bool  isBoldTextEnabled;

 __declspec(property(get=get_isClosedCaptioningEnabled, put=set_isClosedCaptioningEnabled)) bool  isClosedCaptioningEnabled;

 __declspec(property(get=get_isScreenReaderEnabled, put=set_isScreenReaderEnabled)) bool  isScreenReaderEnabled;

 __declspec(property(get=get_notification, put=set_notification)) ::UnityEngine::Accessibility::AccessibilityManager_Notification  notification;

/// @brief Method get_focusedNode, addr 0x1803a88d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityNode* get_focusedNode() ;

/// @brief Method get_fontScale, addr 0x180303b40, size 0x10, virtual false, abstract: false, final false
inline float_t get_fontScale() ;

/// @brief Method get_isBoldTextEnabled, addr 0x1804e67e0, size 0x10, virtual false, abstract: false, final false
inline bool get_isBoldTextEnabled() ;

/// @brief Method get_isClosedCaptioningEnabled, addr 0x1822124d0, size 0x10, virtual false, abstract: false, final false
inline bool get_isClosedCaptioningEnabled() ;

/// @brief Method get_isScreenReaderEnabled, addr 0x1822124e0, size 0x10, virtual false, abstract: false, final false
inline bool get_isScreenReaderEnabled() ;

/// @brief Method get_notification, addr 0x1822124f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityManager_Notification get_notification() ;

/// @brief Method set_focusedNode, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_focusedNode(::UnityEngine::Accessibility::AccessibilityNode*  value) ;

/// @brief Method set_fontScale, addr 0x18051eae0, size 0x10, virtual false, abstract: false, final false
inline void set_fontScale(float_t  value) ;

/// @brief Method set_isBoldTextEnabled, addr 0x1804e6800, size 0x10, virtual false, abstract: false, final false
inline void set_isBoldTextEnabled(bool  value) ;

/// @brief Method set_isClosedCaptioningEnabled, addr 0x182212500, size 0x10, virtual false, abstract: false, final false
inline void set_isClosedCaptioningEnabled(bool  value) ;

/// @brief Method set_isScreenReaderEnabled, addr 0x182212510, size 0x10, virtual false, abstract: false, final false
inline void set_isScreenReaderEnabled(bool  value) ;

/// @brief Method set_notification, addr 0x182212520, size 0x10, virtual false, abstract: false, final false
inline void set_notification(::UnityEngine::Accessibility::AccessibilityManager_Notification  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityManager_NotificationContext() ;

// Ctor Parameters [CppParam { name: "_focusedNode_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityNode*", modifiers: "", def_value: None }, CppParam { name: "_fontScale_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_isBoldTextEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_isClosedCaptioningEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_isScreenReaderEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_notification_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityManager_Notification", modifiers: "", def_value: None }]
constexpr AccessibilityManager_NotificationContext(::UnityEngine::Accessibility::AccessibilityNode*  _focusedNode_k__BackingField, float_t  _fontScale_k__BackingField, bool  _isBoldTextEnabled_k__BackingField, bool  _isClosedCaptioningEnabled_k__BackingField, bool  _isScreenReaderEnabled_k__BackingField, ::UnityEngine::Accessibility::AccessibilityManager_Notification  _notification_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21218};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <focusedNode>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Accessibility::AccessibilityNode*  _focusedNode_k__BackingField;

/// @brief Field <fontScale>k__BackingField, offset: 0x8, size: 0x4, def value: None
 float_t  _fontScale_k__BackingField;

/// @brief Field <isBoldTextEnabled>k__BackingField, offset: 0xc, size: 0x1, def value: None
 bool  _isBoldTextEnabled_k__BackingField;

/// @brief Field <isClosedCaptioningEnabled>k__BackingField, offset: 0xd, size: 0x1, def value: None
 bool  _isClosedCaptioningEnabled_k__BackingField;

/// @brief Field <isScreenReaderEnabled>k__BackingField, offset: 0xe, size: 0x1, def value: None
 bool  _isScreenReaderEnabled_k__BackingField;

/// @brief Field <notification>k__BackingField, offset: 0xf, size: 0x1, def value: None
 ::UnityEngine::Accessibility::AccessibilityManager_Notification  _notification_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext, _focusedNode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext, _fontScale_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext, _isBoldTextEnabled_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext, _isClosedCaptioningEnabled_k__BackingField) == 0xd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext, _isScreenReaderEnabled_k__BackingField) == 0xe, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext, _notification_k__BackingField) == 0xf, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityManager/Nested
class CORDL_TYPE AccessibilityManager_Nested : public ::System::Object {
public:
// Declarations
/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::UnityEngine::Accessibility::AccessibilityManager*  s_Instance;

static inline ::UnityEngine::Accessibility::AccessibilityManager* getStaticF_s_Instance() ;

static inline void setStaticF_s_Instance(::UnityEngine::Accessibility::AccessibilityManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityManager_Nested() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityManager_Nested", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityManager_Nested(AccessibilityManager_Nested && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityManager_Nested", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityManager_Nested(AccessibilityManager_Nested const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21219};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityManager_Nested) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityManager/ExclusiveLock
class CORDL_TYPE AccessibilityManager_ExclusiveLock : public ::System::Object {
public:
// Declarations
/// @brief Field m_Disposed, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Disposed, put=__cordl_internal_set_m_Disposed)) bool  m_Disposed;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x182215c60, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Finalize, addr 0x182215c90, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method InternalDispose, addr 0x182215c90, size 0x20, virtual false, abstract: false, final false
inline void InternalDispose() ;

static inline ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock* New_ctor() ;

constexpr bool const& __cordl_internal_get_m_Disposed() const;

constexpr bool& __cordl_internal_get_m_Disposed() ;

constexpr void __cordl_internal_set_m_Disposed(bool  value) ;

/// @brief Method .ctor, addr 0x182213c60, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityManager_ExclusiveLock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityManager_ExclusiveLock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityManager_ExclusiveLock(AccessibilityManager_ExclusiveLock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityManager_ExclusiveLock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityManager_ExclusiveLock(AccessibilityManager_ExclusiveLock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21220};

/// @brief Field m_Disposed, offset: 0x10, size: 0x1, def value: None
 bool  ___m_Disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock, ___m_Disposed) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityManager
class CORDL_TYPE AccessibilityManager : public ::System::Object {
public:
// Declarations
using ExclusiveLock = ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock;

using Nested = ::UnityEngine::Accessibility::AccessibilityManager_Nested;

using Notification = ::UnityEngine::Accessibility::AccessibilityManager_Notification;

using NotificationContext = ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext;

/// @brief Field asyncNotificationContexts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_asyncNotificationContexts, put=setStaticF_asyncNotificationContexts)) ::System::Collections::Generic::Queue_1<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>*  asyncNotificationContexts;

/// @brief Field m_RefreshNodeFramesRequested, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RefreshNodeFramesRequested, put=__cordl_internal_set_m_RefreshNodeFramesRequested)) bool  m_RefreshNodeFramesRequested;

/// @brief Field nodeFocusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nodeFocusChanged, put=setStaticF_nodeFocusChanged)) ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  nodeFocusChanged;

/// @brief Field screenReaderStatusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_screenReaderStatusChanged, put=setStaticF_screenReaderStatusChanged)) ::System::Action_1<bool>*  screenReaderStatusChanged;

/// @brief Method GetExclusiveLock, addr 0x182212c20, size 0x30, virtual false, abstract: false, final false
static inline ::System::IDisposable* GetExclusiveLock() ;

/// @brief Method Internal_GetFirstOrLastChildId, addr 0x182212c50, size 0xf0, virtual false, abstract: false, final false
static inline bool Internal_GetFirstOrLastChildId(int32_t  nodeId, bool  first, ::by_ref<int32_t>  childId) ;

/// @brief Method Internal_GetFirstOrLastRootNodeId, addr 0x182212d40, size 0xb0, virtual false, abstract: false, final false
static inline bool Internal_GetFirstOrLastRootNodeId(bool  first, ::by_ref<int32_t>  managedRootId) ;

/// @brief Method Internal_GetNextOrPreviousSiblingId, addr 0x182212df0, size 0x1b0, virtual false, abstract: false, final false
static inline bool Internal_GetNextOrPreviousSiblingId(int32_t  nodeId, bool  next, ::by_ref<int32_t>  siblingId) ;

/// @brief Method Internal_GetNode, addr 0x182213040, size 0x140, virtual false, abstract: false, final false
static inline bool Internal_GetNode(int32_t  nodeId, ::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData) ;

/// @brief Method Internal_GetNodeIdAt, addr 0x182212fa0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t Internal_GetNodeIdAt(float_t  x, float_t  y) ;

/// @brief Method Internal_GetRootNodeIds, addr 0x182213180, size 0x280, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> Internal_GetRootNodeIds() ;

/// @brief Method Internal_Initialize, addr 0x182213400, size 0x1a0, virtual false, abstract: false, final false
static inline void Internal_Initialize() ;

/// @brief Method Internal_LateUpdate, addr 0x1822135a0, size 0x1e0, virtual false, abstract: false, final false
static inline void Internal_LateUpdate() ;

/// @brief Method Internal_OnScreenReaderStatusChanged, addr 0x182213780, size 0x60, virtual false, abstract: false, final false
static inline void Internal_OnScreenReaderStatusChanged(bool  enabled) ;

/// @brief Method Internal_OnWindowGeometryChanged, addr 0x1822137e0, size 0x40, virtual false, abstract: false, final false
static inline void Internal_OnWindowGeometryChanged() ;

/// @brief Method Internal_Update, addr 0x182213c10, size 0x40, virtual false, abstract: false, final false
static inline void Internal_Update() ;

/// @brief Method Internal_Update_Impl, addr 0x182213820, size 0x3f0, virtual false, abstract: false, final false
inline void Internal_Update_Impl() ;

/// @brief Method IsScreenReaderEnabled, addr 0x182213c50, size 0x10, virtual false, abstract: false, final false
static inline bool IsScreenReaderEnabled() ;

/// @brief Method Lock, addr 0x182213c60, size 0x10, virtual false, abstract: false, final false
static inline void Lock() ;

static inline ::UnityEngine::Accessibility::AccessibilityManager* New_ctor() ;

/// @brief Method QueueNotification, addr 0x182213d80, size 0x50, virtual false, abstract: false, final false
static inline void QueueNotification(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext  notification) ;

/// @brief Method QueueNotification_Impl, addr 0x182213c70, size 0x110, virtual false, abstract: false, final false
inline void QueueNotification_Impl(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext  notification) ;

/// @brief Method SendLayoutChangedNotification, addr 0x182213dd0, size 0x10, virtual false, abstract: false, final false
static inline void SendLayoutChangedNotification(int32_t  nodeId) ;

/// @brief Method SendScreenChangedNotification, addr 0x182213de0, size 0x10, virtual false, abstract: false, final false
static inline void SendScreenChangedNotification(int32_t  nodeId) ;

/// @brief Method Unlock, addr 0x182213df0, size 0x10, virtual false, abstract: false, final false
static inline void Unlock() ;

/// @brief Method <Internal_GetNextOrPreviousSiblingId>g__IndexOf|30_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int32_t _Internal_GetNextOrPreviousSiblingId_g__IndexOf_30_0(T  elementToFind, ::System::Collections::Generic::IReadOnlyList_1<T>*  list) ;

constexpr bool const& __cordl_internal_get_m_RefreshNodeFramesRequested() const;

constexpr bool& __cordl_internal_get_m_RefreshNodeFramesRequested() ;

constexpr void __cordl_internal_set_m_RefreshNodeFramesRequested(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_nodeFocusChanged, addr 0x182213e60, size 0xd0, virtual false, abstract: false, final false
static inline void add_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

/// @brief Method add_screenReaderStatusChanged, addr 0x182213f30, size 0xd0, virtual false, abstract: false, final false
static inline void add_screenReaderStatusChanged(::System::Action_1<bool>*  value) ;

static inline ::System::Collections::Generic::Queue_1<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>* getStaticF_asyncNotificationContexts() ;

static inline ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>* getStaticF_nodeFocusChanged() ;

static inline ::System::Action_1<bool>* getStaticF_screenReaderStatusChanged() ;

/// @brief Method get_instance, addr 0x182214000, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Accessibility::AccessibilityManager* get_instance() ;

/// @brief Method get_isSupportedPlatform, addr 0x182214040, size 0x40, virtual false, abstract: false, final false
static inline bool get_isSupportedPlatform() ;

/// @brief Method remove_nodeFocusChanged, addr 0x182214080, size 0xd0, virtual false, abstract: false, final false
static inline void remove_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

/// @brief Method remove_screenReaderStatusChanged, addr 0x182214150, size 0xd0, virtual false, abstract: false, final false
static inline void remove_screenReaderStatusChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF_asyncNotificationContexts(::System::Collections::Generic::Queue_1<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>*  value) ;

static inline void setStaticF_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

static inline void setStaticF_screenReaderStatusChanged(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityManager(AccessibilityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityManager(AccessibilityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21221};

/// @brief Field m_RefreshNodeFramesRequested, offset: 0x10, size: 0x1, def value: None
 bool  ___m_RefreshNodeFramesRequested;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityManager, ___m_RefreshNodeFramesRequested) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityManager) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
