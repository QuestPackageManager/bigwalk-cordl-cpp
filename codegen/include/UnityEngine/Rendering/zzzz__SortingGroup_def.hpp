#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SortingGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortingGroup)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SortingGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::SortingGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SortingGroup*, "UnityEngine.Rendering", "SortingGroup");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SortingGroup
class CORDL_TYPE SortingGroup : public ::UnityEngine::Behaviour {
public:
// Declarations
 __declspec(property(get=get_sortingLayerID)) int32_t  sortingLayerID;

 __declspec(property(get=get_sortingOrder)) int32_t  sortingOrder;

/// @brief Method GetSortingGroupByIndex, addr 0x1822874d0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Rendering::SortingGroup> GetSortingGroupByIndex(int32_t  index) ;

/// @brief Method GetSortingGroupByIndex_Injected, addr 0x1822874c0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetSortingGroupByIndex_Injected(int32_t  index) ;

/// @brief Method get_invalidSortingGroupID, addr 0x1822874f0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_invalidSortingGroupID() ;

/// @brief Method get_sortingLayerID, addr 0x182287510, size 0x30, virtual false, abstract: false, final false
inline int32_t get_sortingLayerID() ;

/// @brief Method get_sortingLayerID_Injected, addr 0x182287500, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_sortingLayerID_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sortingOrder, addr 0x182287550, size 0x30, virtual false, abstract: false, final false
inline int32_t get_sortingOrder() ;

/// @brief Method get_sortingOrder_Injected, addr 0x182287540, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_sortingOrder_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SortingGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SortingGroup(SortingGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SortingGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SortingGroup(SortingGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11087};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::SortingGroup) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
