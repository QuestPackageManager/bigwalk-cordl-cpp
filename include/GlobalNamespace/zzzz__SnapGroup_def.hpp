#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SnapGroup)
// Forward declare root types
namespace GlobalNamespace {
class SnapGroup;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SnapGroup*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnapGroup*, "", "SnapGroup");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SnapGroup
class CORDL_TYPE SnapGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::SnapGroup* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapGroup(SnapGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapGroup(SnapGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4931};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SnapGroup) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
