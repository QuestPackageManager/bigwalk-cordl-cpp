#pragma once
// IWYU pragma private; include "UnityEngine/SkinnedMeshRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(SkinnedMeshRenderer)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::SkinnedMeshRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SkinnedMeshRenderer*, "UnityEngine", "SkinnedMeshRenderer");
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SkinnedMeshRenderer
class CORDL_TYPE SkinnedMeshRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_sharedMesh)) ::UnityW<::UnityEngine::Mesh>  sharedMesh;

/// @brief Method get_sharedMesh, addr 0x18225d550, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh() ;

/// @brief Method get_sharedMesh_Injected, addr 0x18225d540, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_sharedMesh_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkinnedMeshRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SkinnedMeshRenderer(SkinnedMeshRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkinnedMeshRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkinnedMeshRenderer(SkinnedMeshRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10571};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
