#pragma once
// IWYU pragma private; include "GlobalNamespace/EnableOnlyOnNintendo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EnableOnlyOnNintendo)
// Forward declare root types
namespace GlobalNamespace {
class EnableOnlyOnNintendo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EnableOnlyOnNintendo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EnableOnlyOnNintendo*, "", "EnableOnlyOnNintendo");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnableOnlyOnNintendo
class CORDL_TYPE EnableOnlyOnNintendo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::EnableOnlyOnNintendo* New_ctor() ;

/// @brief Method OnEnable, addr 0x18037dd30, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnableOnlyOnNintendo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnableOnlyOnNintendo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnableOnlyOnNintendo(EnableOnlyOnNintendo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnableOnlyOnNintendo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnableOnlyOnNintendo(EnableOnlyOnNintendo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5546};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EnableOnlyOnNintendo) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
