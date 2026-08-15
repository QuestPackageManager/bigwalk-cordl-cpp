#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingRequestHandles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(IndirectCullingRequestHandles)
namespace UnityEngine::Rendering::RenderGraphModule {
class IComputeRenderGraphBuilder;
}
// Forward declare root types
namespace MA::Flora {
struct IndirectCullingRequestHandles;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectCullingRequestHandles);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectCullingRequestHandles, "MA.Flora", "IndirectCullingRequestHandles");
// Dependencies UnityEngine.Rendering.RenderGraphModule.BufferHandle
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectCullingRequestHandles
struct CORDL_TYPE IndirectCullingRequestHandles {
public:
// Declarations
/// @brief Method UseWith, addr 0x1814cc210, size 0x350, virtual false, abstract: false, final false
inline void UseWith(::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*  builder) ;

// Ctor Parameters []
// @brief default ctor
constexpr IndirectCullingRequestHandles() ;

// Ctor Parameters [CppParam { name: "DrawArgsBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }, CppParam { name: "VisibilityBuffer", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }]
constexpr IndirectCullingRequestHandles(::UnityEngine::Rendering::RenderGraphModule::BufferHandle  DrawArgsBuffer, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  VisibilityBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13203};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field DrawArgsBuffer, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  DrawArgsBuffer;

/// @brief Field VisibilityBuffer, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::BufferHandle  VisibilityBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectCullingRequestHandles, DrawArgsBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequestHandles, VisibilityBuffer) == 0xc, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectCullingRequestHandles) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
