#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AssistiveSupport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssistiveSupport)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Accessibility {
class AccessibilityHierarchy;
}
namespace UnityEngine::Accessibility {
class AccessibilityNode;
}
namespace UnityEngine::Accessibility {
class AssistiveSupport_NotificationDispatcher;
}
namespace UnityEngine::Accessibility {
struct AssistiveSupport_ScreenReaderStatusOverride;
}
namespace UnityEngine::Accessibility {
class IAccessibilityNotificationDispatcher;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
struct AssistiveSupport_ScreenReaderStatusOverride;
}
namespace UnityEngine::Accessibility {
class AssistiveSupport;
}
namespace UnityEngine::Accessibility {
class AssistiveSupport_NotificationDispatcher;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride);
MARK_REF_T(::UnityEngine::Accessibility::AssistiveSupport*);
MARK_REF_T(::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride, "UnityEngine.Accessibility", "AssistiveSupport/ScreenReaderStatusOverride");
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AssistiveSupport*, "UnityEngine.Accessibility", "AssistiveSupport");
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*, "UnityEngine.Accessibility", "AssistiveSupport/NotificationDispatcher");
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AssistiveSupport/NotificationDispatcher
class CORDL_TYPE AssistiveSupport_NotificationDispatcher : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher"
constexpr operator  ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*() noexcept;

static inline ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher* New_ctor() ;

/// @brief Method SendLayoutChanged, addr 0x182215d70, size 0x20, virtual true, abstract: false, final true
inline void SendLayoutChanged(::UnityEngine::Accessibility::AccessibilityNode*  nodeToFocus) ;

/// @brief Method SendScreenChanged, addr 0x182215d90, size 0x30, virtual true, abstract: false, final true
inline void SendScreenChanged(::UnityEngine::Accessibility::AccessibilityNode*  nodeToFocus) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher"
constexpr ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* i___UnityEngine__Accessibility__IAccessibilityNotificationDispatcher() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssistiveSupport_NotificationDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssistiveSupport_NotificationDispatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssistiveSupport_NotificationDispatcher(AssistiveSupport_NotificationDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssistiveSupport_NotificationDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssistiveSupport_NotificationDispatcher(AssistiveSupport_NotificationDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21229};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
// Dependencies 
namespace UnityEngine::Accessibility {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AssistiveSupport/ScreenReaderStatusOverride
struct CORDL_TYPE AssistiveSupport_ScreenReaderStatusOverride {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __AssistiveSupport_ScreenReaderStatusOverride_Unwrapped
enum struct __AssistiveSupport_ScreenReaderStatusOverride_Unwrapped : uint8_t {
__E_OSDriven = static_cast<uint8_t>(0x0u),
__E_ForceEnabled = static_cast<uint8_t>(0x1u),
__E_ForceDisabled = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AssistiveSupport_ScreenReaderStatusOverride_Unwrapped () const noexcept {
return static_cast<__AssistiveSupport_ScreenReaderStatusOverride_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AssistiveSupport_ScreenReaderStatusOverride() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr AssistiveSupport_ScreenReaderStatusOverride(uint8_t  value__) noexcept;

/// @brief Field ForceDisabled value: U8(2)
static ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride const ForceDisabled;

/// @brief Field ForceEnabled value: U8(1)
static ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride const ForceEnabled;

/// @brief Field OSDriven value: U8(0)
static ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride const OSDriven;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21230};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
// Dependencies System.Object, UnityEngine.Accessibility.AssistiveSupport::ScreenReaderStatusOverride
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AssistiveSupport
class CORDL_TYPE AssistiveSupport : public ::System::Object {
public:
// Declarations
using NotificationDispatcher = ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher;

using ScreenReaderStatusOverride = ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride;

/// @brief Field <notificationDispatcher>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__notificationDispatcher_k__BackingField, put=setStaticF__notificationDispatcher_k__BackingField)) ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*  _notificationDispatcher_k__BackingField;

/// @brief Field nodeFocusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nodeFocusChanged, put=setStaticF_nodeFocusChanged)) ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  nodeFocusChanged;

/// @brief Field s_ScreenReaderStatusOverride, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_ScreenReaderStatusOverride, put=setStaticF_s_ScreenReaderStatusOverride)) ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride  s_ScreenReaderStatusOverride;

/// @brief Field screenReaderStatusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_screenReaderStatusChanged, put=setStaticF_screenReaderStatusChanged)) ::System::Action_1<bool>*  screenReaderStatusChanged;

/// @brief Method Initialize, addr 0x182213400, size 0x1a0, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method NodeFocusChanged, addr 0x1822158c0, size 0x60, virtual false, abstract: false, final false
static inline void NodeFocusChanged(::UnityEngine::Accessibility::AccessibilityNode*  currentNode) ;

/// @brief Method ScreenReaderStatusChanged, addr 0x182215920, size 0x220, virtual false, abstract: false, final false
static inline void ScreenReaderStatusChanged(bool  enabled) ;

static inline ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* getStaticF__notificationDispatcher_k__BackingField() ;

static inline ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>* getStaticF_nodeFocusChanged() ;

static inline ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride getStaticF_s_ScreenReaderStatusOverride() ;

static inline ::System::Action_1<bool>* getStaticF_screenReaderStatusChanged() ;

/// @brief Method get_activeHierarchy, addr 0x182212650, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Accessibility::AccessibilityHierarchy* get_activeHierarchy() ;

/// @brief Method get_isScreenReaderEnabled, addr 0x182215b80, size 0x60, virtual false, abstract: false, final false
static inline bool get_isScreenReaderEnabled() ;

/// @brief Method get_notificationDispatcher, addr 0x182215be0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* get_notificationDispatcher() ;

/// @brief Method get_screenReaderStatusOverride, addr 0x182215c20, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride get_screenReaderStatusOverride() ;

static inline void setStaticF__notificationDispatcher_k__BackingField(::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*  value) ;

static inline void setStaticF_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

static inline void setStaticF_s_ScreenReaderStatusOverride(::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride  value) ;

static inline void setStaticF_screenReaderStatusChanged(::System::Action_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssistiveSupport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssistiveSupport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssistiveSupport(AssistiveSupport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssistiveSupport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssistiveSupport(AssistiveSupport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21231};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Accessibility::AssistiveSupport) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
