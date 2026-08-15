#pragma once
// IWYU pragma private; include "MA/Flora/FloraRenderPipelineHighDefinition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraRenderPipeline_def.hpp"
CORDL_MODULE_EXPORT(FloraRenderPipelineHighDefinition)
namespace MA::Flora {
struct FloraRenderPipelineCameraSettings;
}
namespace MA::Flora {
struct FloraRenderPipelineType;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace MA::Flora {
class FloraRenderPipelineHighDefinition;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraRenderPipelineHighDefinition*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRenderPipelineHighDefinition*, "MA.Flora", "FloraRenderPipelineHighDefinition");
// Dependencies MA.Flora.FloraRenderPipeline
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRenderPipelineHighDefinition
class CORDL_TYPE FloraRenderPipelineHighDefinition : public ::MA::Flora::FloraRenderPipeline {
public:
// Declarations
 __declspec(property(get=get_PipelineType)) ::MA::Flora::FloraRenderPipelineType  PipelineType;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method EnqueueCameraPasses, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void EnqueueCameraPasses(::UnityEngine::Camera*  camera, ::MA::Flora::FloraRenderPipelineCameraSettings  cameraSettings) ;

static inline ::MA::Flora::FloraRenderPipelineHighDefinition* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PipelineType, addr 0x1802ee400, size 0x10, virtual true, abstract: false, final false
inline ::MA::Flora::FloraRenderPipelineType get_PipelineType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRenderPipelineHighDefinition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineHighDefinition", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRenderPipelineHighDefinition(FloraRenderPipelineHighDefinition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipelineHighDefinition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRenderPipelineHighDefinition(FloraRenderPipelineHighDefinition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13354};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraRenderPipelineHighDefinition) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
