#pragma once
// IWYU pragma private; include "UnityEngine/BillboardRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
CORDL_MODULE_EXPORT(BillboardRenderer)
// Forward declare root types
namespace UnityEngine {
class BillboardRenderer;
}
// Write type traits
MARK_REF_T(::UnityEngine::BillboardRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::BillboardRenderer*, "UnityEngine", "BillboardRenderer");
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.BillboardRenderer
class CORDL_TYPE BillboardRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
static inline ::UnityEngine::BillboardRenderer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802f6460, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BillboardRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BillboardRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BillboardRenderer(BillboardRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BillboardRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BillboardRenderer(BillboardRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10480};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::BillboardRenderer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
