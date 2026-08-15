#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemRenderer)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class ParticleSystemRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::ParticleSystemRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemRenderer*, "UnityEngine", "ParticleSystemRenderer");
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ParticleSystemRenderer
class CORDL_TYPE ParticleSystemRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
/// @brief Method GetMeshes, addr 0x1822eeec0, size 0x60, virtual false, abstract: false, final false
inline int32_t GetMeshes(::by_ref<::ArrayW<::UnityEngine::Mesh*>>  meshes) ;

/// @brief Method GetMeshes_Injected, addr 0x1822eeeb0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetMeshes_Injected(::System::IntPtr  _unity_self, ::by_ref<::ArrayW<::UnityEngine::Mesh*>>  meshes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystemRenderer(ParticleSystemRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystemRenderer(ParticleSystemRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21153};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ParticleSystemRenderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
