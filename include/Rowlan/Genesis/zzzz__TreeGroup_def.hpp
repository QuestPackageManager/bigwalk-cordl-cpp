#pragma once
// IWYU pragma private; include "Rowlan/Genesis/TreeGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TreeGroup)
// Forward declare root types
namespace Rowlan::Genesis {
class TreeGroup;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::TreeGroup*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::TreeGroup*, "Rowlan.Genesis", "TreeGroup");
// Dependencies UnityEngine.MonoBehaviour
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.TreeGroup
class CORDL_TYPE TreeGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Rowlan::Genesis::TreeGroup* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TreeGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TreeGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TreeGroup(TreeGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreeGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreeGroup(TreeGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20374};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::Genesis::TreeGroup) == 0x20, "Size mismatch!");

} // namespace end def Rowlan::Genesis
