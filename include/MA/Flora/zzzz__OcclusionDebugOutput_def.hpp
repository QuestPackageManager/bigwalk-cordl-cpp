#pragma once
// IWYU pragma private; include "MA/Flora/OcclusionDebugOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__OcclusionCullingDebugShaderVariables_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OcclusionDebugOutput)
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace MA::Flora {
struct OcclusionDebugOutput;
}
// Write type traits
MARK_VAL_T(::MA::Flora::OcclusionDebugOutput);
DEFINE_IL2CPP_CLASS(::MA::Flora::OcclusionDebugOutput, "MA.Flora", "OcclusionDebugOutput");
// Dependencies MA.Flora.OcclusionCullingDebugShaderVariables
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.OcclusionDebugOutput
struct CORDL_TYPE OcclusionDebugOutput {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OcclusionDebugOutput() ;

// Ctor Parameters [CppParam { name: "DepthPyramid", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None }, CppParam { name: "OcclusionDepthOverlay", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "Constants", ty: "::MA::Flora::OcclusionCullingDebugShaderVariables", modifiers: "", def_value: None }]
constexpr OcclusionDebugOutput(::UnityEngine::Rendering::RTHandle*  DepthPyramid, ::UnityEngine::GraphicsBuffer*  OcclusionDepthOverlay, ::MA::Flora::OcclusionCullingDebugShaderVariables  Constants) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13227};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb0};

/// @brief Field DepthPyramid, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Rendering::RTHandle*  DepthPyramid;

/// @brief Field OcclusionDepthOverlay, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  OcclusionDepthOverlay;

/// @brief Field Constants, offset: 0x10, size: 0xa0, def value: None
 ::MA::Flora::OcclusionCullingDebugShaderVariables  Constants;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::OcclusionDebugOutput, DepthPyramid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionDebugOutput, OcclusionDepthOverlay) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::OcclusionDebugOutput, Constants) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::OcclusionDebugOutput) == 0xb0, "Size mismatch!");

} // namespace end def MA::Flora
