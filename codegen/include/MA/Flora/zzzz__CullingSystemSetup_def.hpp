#pragma once
// IWYU pragma private; include "MA/Flora/CullingSystemSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CullingSystemSetup)
namespace MA::Flora {
class FloraRenderPipeline;
}
namespace MA::Flora {
class FloraRuntimeResources;
}
// Forward declare root types
namespace MA::Flora {
struct CullingSystemSetup;
}
// Write type traits
MARK_VAL_T(::MA::Flora::CullingSystemSetup);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingSystemSetup, "MA.Flora", "CullingSystemSetup");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingSystemSetup
struct CORDL_TYPE CullingSystemSetup {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CullingSystemSetup() ;

// Ctor Parameters [CppParam { name: "RenderPipeline", ty: "::MA::Flora::FloraRenderPipeline*", modifiers: "", def_value: None }, CppParam { name: "RuntimeResources", ty: "::MA::Flora::FloraRuntimeResources*", modifiers: "", def_value: None }]
constexpr CullingSystemSetup(::MA::Flora::FloraRenderPipeline*  RenderPipeline, ::MA::Flora::FloraRuntimeResources*  RuntimeResources) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RenderPipeline, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::FloraRenderPipeline*  RenderPipeline;

/// @brief Field RuntimeResources, offset: 0x8, size: 0x8, def value: None
 ::MA::Flora::FloraRuntimeResources*  RuntimeResources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingSystemSetup, RenderPipeline) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingSystemSetup, RuntimeResources) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingSystemSetup) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
