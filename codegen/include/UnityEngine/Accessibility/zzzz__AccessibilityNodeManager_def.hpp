#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNodeManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityNodeManager)
namespace UnityEngine::Accessibility {
struct AccessibilityNodeData;
}
namespace UnityEngine::Accessibility {
struct AccessibilityScrollDirection;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AccessibilityNodeManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityNodeManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityNodeManager*, "UnityEngine.Accessibility", "AccessibilityNodeManager");
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityNodeManager
class CORDL_TYPE AccessibilityNodeManager : public ::System::Object {
public:
// Declarations
/// @brief Method CreateNativeNodeWithData, addr 0x1822146c0, size 0x20, virtual false, abstract: false, final false
static inline bool CreateNativeNodeWithData(::UnityEngine::Accessibility::AccessibilityNodeData  nodeData) ;

/// @brief Method CreateNativeNodeWithData_Injected, addr 0x1822146b0, size 0x10, virtual false, abstract: false, final false
static inline bool CreateNativeNodeWithData_Injected(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData) ;

/// @brief Method DestroyNativeNode, addr 0x1822146e0, size 0x10, virtual false, abstract: false, final false
static inline void DestroyNativeNode(int32_t  nodeId) ;

/// @brief Method Internal_InvokeDecremented, addr 0x1822146f0, size 0x80, virtual false, abstract: false, final false
static inline bool Internal_InvokeDecremented(int32_t  nodeId) ;

/// @brief Method Internal_InvokeDismissed, addr 0x182214770, size 0xa0, virtual false, abstract: false, final false
static inline bool Internal_InvokeDismissed(int32_t  nodeId) ;

/// @brief Method Internal_InvokeFocusChanged, addr 0x182214810, size 0xe0, virtual false, abstract: false, final false
static inline void Internal_InvokeFocusChanged(int32_t  nodeId, bool  isNodeFocused) ;

/// @brief Method Internal_InvokeIncremented, addr 0x1822148f0, size 0x80, virtual false, abstract: false, final false
static inline bool Internal_InvokeIncremented(int32_t  nodeId) ;

/// @brief Method Internal_InvokeNodeInvoked, addr 0x182214970, size 0xa0, virtual false, abstract: false, final false
static inline bool Internal_InvokeNodeInvoked(int32_t  nodeId) ;

/// @brief Method Internal_InvokeScrolled, addr 0x182214a10, size 0xc0, virtual false, abstract: false, final false
static inline bool Internal_InvokeScrolled(int32_t  nodeId, ::UnityEngine::Accessibility::AccessibilityScrollDirection  direction) ;

/// @brief Method SetFrame, addr 0x182214ae0, size 0x10, virtual false, abstract: false, final false
static inline void SetFrame(int32_t  nodeId, ::UnityEngine::Rect  frame) ;

/// @brief Method SetFrame_Injected, addr 0x182214ad0, size 0x10, virtual false, abstract: false, final false
static inline void SetFrame_Injected(int32_t  nodeId, ::by_ref<::UnityEngine::Rect>  frame) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityNodeManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNodeManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityNodeManager(AccessibilityNodeManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNodeManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityNodeManager(AccessibilityNodeManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityNodeManager) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
