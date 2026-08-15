#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SnapAnchor)
// Forward declare root types
namespace GlobalNamespace {
class SnapAnchor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SnapAnchor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnapAnchor*, "", "SnapAnchor");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SnapAnchor
class CORDL_TYPE SnapAnchor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::SnapAnchor* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SnapAnchor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SnapAnchor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SnapAnchor(SnapAnchor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SnapAnchor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SnapAnchor(SnapAnchor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4930};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SnapAnchor) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
