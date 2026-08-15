#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingRequestParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__DrawBinConfig_def.hpp"
#include "MA/Flora/zzzz__FrustumPlaneCuller_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectCullingRequestParameters)
// Forward declare root types
namespace MA::Flora {
struct IndirectCullingRequestParameters;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectCullingRequestParameters);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectCullingRequestParameters, "MA.Flora", "IndirectCullingRequestParameters");
// Dependencies MA.Flora.DrawBinConfig, MA.Flora.FrustumPlaneCuller, UnityEngine.Rendering.BatchCullingContext
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectCullingRequestParameters
struct CORDL_TYPE IndirectCullingRequestParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IndirectCullingRequestParameters() ;

// Ctor Parameters [CppParam { name: "FrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Context", ty: "::UnityEngine::Rendering::BatchCullingContext", modifiers: "", def_value: None }, CppParam { name: "BinConfig", ty: "::MA::Flora::DrawBinConfig", modifiers: "", def_value: None }, CppParam { name: "ScreenRelativeMetric", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "MeshLodSelectionConstant", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "FrustumPlaneCuller", ty: "::MA::Flora::FrustumPlaneCuller", modifiers: "", def_value: None }, CppParam { name: "DrawInstanceCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DrawCommandCapacity", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IndirectCullingRequestParameters(int32_t  FrameIndex, ::UnityEngine::Rendering::BatchCullingContext  Context, ::MA::Flora::DrawBinConfig  BinConfig, float_t  ScreenRelativeMetric, float_t  MeshLodSelectionConstant, ::MA::Flora::FrustumPlaneCuller  FrustumPlaneCuller, int32_t  DrawInstanceCapacity, int32_t  DrawCommandCapacity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13204};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xf0};

/// @brief Field FrameIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  FrameIndex;

/// @brief Field Context, offset: 0x8, size: 0xb8, def value: None
 ::UnityEngine::Rendering::BatchCullingContext  Context;

/// @brief Field BinConfig, offset: 0xc0, size: 0x8, def value: None
 ::MA::Flora::DrawBinConfig  BinConfig;

/// @brief Field ScreenRelativeMetric, offset: 0xc8, size: 0x4, def value: None
 float_t  ScreenRelativeMetric;

/// @brief Field MeshLodSelectionConstant, offset: 0xcc, size: 0x4, def value: None
 float_t  MeshLodSelectionConstant;

/// @brief Field FrustumPlaneCuller, offset: 0xd0, size: 0x18, def value: None
 ::MA::Flora::FrustumPlaneCuller  FrustumPlaneCuller;

/// @brief Field DrawInstanceCapacity, offset: 0xe8, size: 0x4, def value: None
 int32_t  DrawInstanceCapacity;

/// @brief Field DrawCommandCapacity, offset: 0xec, size: 0x4, def value: None
 int32_t  DrawCommandCapacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectCullingRequestParameters, FrameIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequestParameters, Context) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequestParameters, BinConfig) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequestParameters, ScreenRelativeMetric) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequestParameters, MeshLodSelectionConstant) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequestParameters, FrustumPlaneCuller) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequestParameters, DrawInstanceCapacity) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequestParameters, DrawCommandCapacity) == 0xec, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectCullingRequestParameters) == 0xf0, "Size mismatch!");

} // namespace end def MA::Flora
