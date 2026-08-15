#pragma once
// IWYU pragma private; include "UnityEngine/MeshRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MeshRenderer)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine {
class MeshRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::MeshRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::MeshRenderer*, "UnityEngine", "MeshRenderer");
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MeshRenderer
class CORDL_TYPE MeshRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_subMeshStartIndex)) int32_t  subMeshStartIndex;

/// @brief Method DontStripMeshRenderer, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void DontStripMeshRenderer() ;

static inline ::UnityEngine::MeshRenderer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_subMeshStartIndex, addr 0x182256970, size 0x30, virtual false, abstract: false, final false
inline int32_t get_subMeshStartIndex() ;

/// @brief Method get_subMeshStartIndex_Injected, addr 0x182256960, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_subMeshStartIndex_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MeshRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MeshRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MeshRenderer(MeshRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MeshRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MeshRenderer(MeshRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10572};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::MeshRenderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
