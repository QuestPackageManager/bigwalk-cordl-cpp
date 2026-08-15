#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNodeDataTests.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNodeData_def.hpp"
CORDL_MODULE_EXPORT(AccessibilityNodeDataTests)
namespace UnityEngine::Accessibility {
struct AccessibilityNodeData;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AccessibilityNodeDataTests;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityNodeDataTests*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityNodeDataTests*, "UnityEngine.Accessibility", "AccessibilityNodeDataTests");
// Dependencies System.Object, UnityEngine.Accessibility.AccessibilityNodeData
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityNodeDataTests
class CORDL_TYPE AccessibilityNodeDataTests : public ::System::Object {
public:
// Declarations
/// @brief Field nodeDataFromNative, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_nodeDataFromNative, put=setStaticF_nodeDataFromNative)) ::UnityEngine::Accessibility::AccessibilityNodeData  nodeDataFromNative;

/// @brief Method Internal_GetNodeDataFromManaged, addr 0x182214220, size 0x170, virtual false, abstract: false, final false
static inline void Internal_GetNodeDataFromManaged(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData) ;

/// @brief Method Internal_GetNodeDataToManaged, addr 0x182214390, size 0x50, virtual false, abstract: false, final false
static inline void Internal_GetNodeDataToManaged(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData) ;

static inline ::UnityEngine::Accessibility::AccessibilityNodeData getStaticF_nodeDataFromNative() ;

static inline void setStaticF_nodeDataFromNative(::UnityEngine::Accessibility::AccessibilityNodeData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityNodeDataTests() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNodeDataTests", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityNodeDataTests(AccessibilityNodeDataTests && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNodeDataTests", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityNodeDataTests(AccessibilityNodeDataTests const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21226};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityNodeDataTests) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
