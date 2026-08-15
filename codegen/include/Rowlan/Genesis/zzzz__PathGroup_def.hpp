#pragma once
// IWYU pragma private; include "Rowlan/Genesis/PathGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PathGroup)
// Forward declare root types
namespace Rowlan::Genesis {
class PathGroup;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::PathGroup*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::PathGroup*, "Rowlan.Genesis", "PathGroup");
// Dependencies UnityEngine.MonoBehaviour
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.PathGroup
class CORDL_TYPE PathGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Rowlan::Genesis::PathGroup* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PathGroup(PathGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathGroup(PathGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20371};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::Genesis::PathGroup) == 0x20, "Size mismatch!");

} // namespace end def Rowlan::Genesis
