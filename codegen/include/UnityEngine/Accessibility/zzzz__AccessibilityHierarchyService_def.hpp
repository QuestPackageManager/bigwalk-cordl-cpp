#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityHierarchyService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityHierarchyService)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine::Accessibility {
class AccessibilityHierarchy;
}
namespace UnityEngine::Accessibility {
class AccessibilityNode;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AccessibilityHierarchyService;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityHierarchyService*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityHierarchyService*, "UnityEngine.Accessibility", "AccessibilityHierarchyService");
// Dependencies System.Object
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityHierarchyService
class CORDL_TYPE AccessibilityHierarchyService : public ::System::Object {
public:
// Declarations
/// @brief Field s_ActiveHierarchy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ActiveHierarchy, put=setStaticF_s_ActiveHierarchy)) ::UnityEngine::Accessibility::AccessibilityHierarchy*  s_ActiveHierarchy;

/// @brief Method GetRootNodes, addr 0x182212530, size 0x20, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>* GetRootNodes() ;

/// @brief Method TryGetNode, addr 0x1822125e0, size 0x70, virtual false, abstract: false, final false
static inline bool TryGetNode(int32_t  id, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node) ;

/// @brief Method TryGetNodeAt, addr 0x182212550, size 0x90, virtual false, abstract: false, final false
static inline bool TryGetNodeAt(float_t  x, float_t  y, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node) ;

static inline ::UnityEngine::Accessibility::AccessibilityHierarchy* getStaticF_s_ActiveHierarchy() ;

/// @brief Method get_activeHierarchy, addr 0x182212650, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Accessibility::AccessibilityHierarchy* get_activeHierarchy() ;

static inline void setStaticF_s_ActiveHierarchy(::UnityEngine::Accessibility::AccessibilityHierarchy*  value) ;

/// @brief Method set_activeHierarchy, addr 0x182212670, size 0x180, virtual false, abstract: false, final false
static inline void set_activeHierarchy(::UnityEngine::Accessibility::AccessibilityHierarchy*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityHierarchyService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityHierarchyService", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityHierarchyService(AccessibilityHierarchyService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityHierarchyService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityHierarchyService(AccessibilityHierarchyService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21233};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityHierarchyService) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
