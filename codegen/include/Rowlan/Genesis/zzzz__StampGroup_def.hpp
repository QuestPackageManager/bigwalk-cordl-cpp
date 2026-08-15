#pragma once
// IWYU pragma private; include "Rowlan/Genesis/StampGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StampGroup)
// Forward declare root types
namespace Rowlan::Genesis {
class StampGroup;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::StampGroup*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::StampGroup*, "Rowlan.Genesis", "StampGroup");
// Dependencies UnityEngine.MonoBehaviour
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.StampGroup
class CORDL_TYPE StampGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Rowlan::Genesis::StampGroup* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StampGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StampGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StampGroup(StampGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StampGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StampGroup(StampGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20372};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::Genesis::StampGroup) == 0x20, "Size mismatch!");

} // namespace end def Rowlan::Genesis
