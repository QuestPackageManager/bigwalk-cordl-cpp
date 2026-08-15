#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableParticleCulling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisableParticleCulling)
// Forward declare root types
namespace GlobalNamespace {
class DisableParticleCulling;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DisableParticleCulling*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DisableParticleCulling*, "", "DisableParticleCulling");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisableParticleCulling
class CORDL_TYPE DisableParticleCulling : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::DisableParticleCulling* New_ctor() ;

/// @brief Method Start, addr 0x1803e66f0, size 0xa0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisableParticleCulling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisableParticleCulling", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableParticleCulling(DisableParticleCulling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableParticleCulling", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableParticleCulling(DisableParticleCulling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4941};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DisableParticleCulling) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
