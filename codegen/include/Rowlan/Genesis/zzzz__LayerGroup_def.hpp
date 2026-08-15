#pragma once
// IWYU pragma private; include "Rowlan/Genesis/LayerGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LayerGroup)
// Forward declare root types
namespace Rowlan::Genesis {
class LayerGroup;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::LayerGroup*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::LayerGroup*, "Rowlan.Genesis", "LayerGroup");
// Dependencies UnityEngine.MonoBehaviour
namespace Rowlan::Genesis {
// Is value type: false
// CS Name: Rowlan.Genesis.LayerGroup
class CORDL_TYPE LayerGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Rowlan::Genesis::LayerGroup* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerGroup(LayerGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerGroup(LayerGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20370};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::Genesis::LayerGroup) == 0x20, "Size mismatch!");

} // namespace end def Rowlan::Genesis
