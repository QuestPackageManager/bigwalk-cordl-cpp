#pragma once
// IWYU pragma private; include "MA/Flora/FloraRenderPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FloraRenderPipeline)
namespace MA::Flora {
struct FloraRenderPipelineCameraSettings;
}
namespace MA::Flora {
struct FloraRenderPipelineType;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace MA::Flora {
class FloraRenderPipeline;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraRenderPipeline*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRenderPipeline*, "MA.Flora", "FloraRenderPipeline");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraRenderPipeline
class CORDL_TYPE FloraRenderPipeline : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PipelineType)) ::MA::Flora::FloraRenderPipelineType  PipelineType;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Dispose() ;

/// @brief Method EnqueueCameraPasses, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EnqueueCameraPasses(::UnityEngine::Camera*  camera, ::MA::Flora::FloraRenderPipelineCameraSettings  cameraSettings) ;

static inline ::MA::Flora::FloraRenderPipeline* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PipelineType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::MA::Flora::FloraRenderPipelineType get_PipelineType() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraRenderPipeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipeline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraRenderPipeline(FloraRenderPipeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraRenderPipeline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraRenderPipeline(FloraRenderPipeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13353};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::FloraRenderPipeline) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
