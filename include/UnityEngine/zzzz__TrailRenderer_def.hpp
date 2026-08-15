#pragma once
// IWYU pragma private; include "UnityEngine/TrailRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(TrailRenderer)
// Forward declare root types
namespace UnityEngine {
class TrailRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::TrailRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TrailRenderer*, "UnityEngine", "TrailRenderer");
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TrailRenderer
class CORDL_TYPE TrailRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrailRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrailRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrailRenderer(TrailRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrailRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrailRenderer(TrailRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10510};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TrailRenderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
