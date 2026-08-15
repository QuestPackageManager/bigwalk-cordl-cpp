#pragma once
// IWYU pragma private; include "GlobalNamespace/NatureRendererMinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NatureRendererMinder)
// Forward declare root types
namespace GlobalNamespace {
class NatureRendererMinder;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NatureRendererMinder*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NatureRendererMinder*, "", "NatureRendererMinder");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NatureRendererMinder
class CORDL_TYPE NatureRendererMinder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x180425d40, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::NatureRendererMinder* New_ctor() ;

/// @brief Method OnEnviroLoad, addr 0x180425d90, size 0x60, virtual false, abstract: false, final false
inline void OnEnviroLoad() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NatureRendererMinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NatureRendererMinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NatureRendererMinder(NatureRendererMinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NatureRendererMinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NatureRendererMinder(NatureRendererMinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5185};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NatureRendererMinder) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
