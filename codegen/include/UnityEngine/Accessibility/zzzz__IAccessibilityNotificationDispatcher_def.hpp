#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/IAccessibilityNotificationDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAccessibilityNotificationDispatcher)
namespace UnityEngine::Accessibility {
class AccessibilityNode;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class IAccessibilityNotificationDispatcher;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*, "UnityEngine.Accessibility", "IAccessibilityNotificationDispatcher");
// Dependencies 
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.IAccessibilityNotificationDispatcher
class CORDL_TYPE IAccessibilityNotificationDispatcher {
public:
// Declarations
/// @brief Method SendLayoutChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendLayoutChanged(::UnityEngine::Accessibility::AccessibilityNode*  nodeToFocus) ;

/// @brief Method SendScreenChanged, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SendScreenChanged(::UnityEngine::Accessibility::AccessibilityNode*  nodeToFocus) ;

// Ctor Parameters [CppParam { name: "", ty: "IAccessibilityNotificationDispatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAccessibilityNotificationDispatcher(IAccessibilityNotificationDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21235};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Accessibility
