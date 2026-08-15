#pragma once
// IWYU pragma private; include "MA/Flora/FloraRenderPipelineCameraSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(FloraRenderPipelineCameraSettings)
// Forward declare root types
namespace MA::Flora {
struct FloraRenderPipelineCameraSettings;
}
// Write type traits
MARK_VAL_T(::MA::Flora::FloraRenderPipelineCameraSettings);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraRenderPipelineCameraSettings, "MA.Flora", "FloraRenderPipelineCameraSettings");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.FloraRenderPipelineCameraSettings
struct CORDL_TYPE FloraRenderPipelineCameraSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FloraRenderPipelineCameraSettings() ;

// Ctor Parameters [CppParam { name: "UseGPUOcclusionCulling", ty: "bool", modifiers: "", def_value: None }]
constexpr FloraRenderPipelineCameraSettings(bool  UseGPUOcclusionCulling) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13352};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field UseGPUOcclusionCulling, offset: 0x0, size: 0x1, def value: None
 bool  UseGPUOcclusionCulling;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraRenderPipelineCameraSettings, UseGPUOcclusionCulling) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraRenderPipelineCameraSettings) == 0x1, "Size mismatch!");

} // namespace end def MA::Flora
