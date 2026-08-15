#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemJobs/ParticleSystemJobData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__ParticleSystemNativeArray3_def.hpp"
#include "UnityEngine/ParticleSystemJobs/zzzz__ParticleSystemNativeArray4_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemJobData)
// Forward declare root types
namespace UnityEngine::ParticleSystemJobs {
struct ParticleSystemJobData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData);
DEFINE_IL2CPP_CLASS(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, "UnityEngine.ParticleSystemJobs", "ParticleSystemJobData");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Color32, UnityEngine.ParticleSystemJobs.ParticleSystemNativeArray3, UnityEngine.ParticleSystemJobs.ParticleSystemNativeArray4
namespace UnityEngine::ParticleSystemJobs {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemJobs.ParticleSystemJobData
struct CORDL_TYPE ParticleSystemJobData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemJobData() ;

// Ctor Parameters [CppParam { name: "_count_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_positions_k__BackingField", ty: "::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3", modifiers: "", def_value: None }, CppParam { name: "_velocities_k__BackingField", ty: "::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3", modifiers: "", def_value: None }, CppParam { name: "_axisOfRotations_k__BackingField", ty: "::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3", modifiers: "", def_value: None }, CppParam { name: "_rotations_k__BackingField", ty: "::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3", modifiers: "", def_value: None }, CppParam { name: "_rotationalSpeeds_k__BackingField", ty: "::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3", modifiers: "", def_value: None }, CppParam { name: "_sizes_k__BackingField", ty: "::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3", modifiers: "", def_value: None }, CppParam { name: "_startColors_k__BackingField", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "_aliveTimePercent_k__BackingField", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "_inverseStartLifetimes_k__BackingField", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "_randomSeeds_k__BackingField", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "_customData1_k__BackingField", ty: "::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4", modifiers: "", def_value: None }, CppParam { name: "_customData2_k__BackingField", ty: "::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4", modifiers: "", def_value: None }, CppParam { name: "_meshIndices_k__BackingField", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr ParticleSystemJobData(int32_t  _count_k__BackingField, ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _positions_k__BackingField, ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _velocities_k__BackingField, ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _axisOfRotations_k__BackingField, ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _rotations_k__BackingField, ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _rotationalSpeeds_k__BackingField, ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _sizes_k__BackingField, ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  _startColors_k__BackingField, ::Unity::Collections::NativeArray_1<float_t>  _aliveTimePercent_k__BackingField, ::Unity::Collections::NativeArray_1<float_t>  _inverseStartLifetimes_k__BackingField, ::Unity::Collections::NativeArray_1<uint32_t>  _randomSeeds_k__BackingField, ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4  _customData1_k__BackingField, ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4  _customData2_k__BackingField, ::Unity::Collections::NativeArray_1<int32_t>  _meshIndices_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21156};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1f8};

/// @brief Field <count>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _count_k__BackingField;

/// @brief Field <positions>k__BackingField, offset: 0x8, size: 0x30, def value: None
 ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _positions_k__BackingField;

/// @brief Field <velocities>k__BackingField, offset: 0x38, size: 0x30, def value: None
 ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _velocities_k__BackingField;

/// @brief Field <axisOfRotations>k__BackingField, offset: 0x68, size: 0x30, def value: None
 ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _axisOfRotations_k__BackingField;

/// @brief Field <rotations>k__BackingField, offset: 0x98, size: 0x30, def value: None
 ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _rotations_k__BackingField;

/// @brief Field <rotationalSpeeds>k__BackingField, offset: 0xc8, size: 0x30, def value: None
 ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _rotationalSpeeds_k__BackingField;

/// @brief Field <sizes>k__BackingField, offset: 0xf8, size: 0x30, def value: None
 ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray3  _sizes_k__BackingField;

/// @brief Field <startColors>k__BackingField, offset: 0x128, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Color32>  _startColors_k__BackingField;

/// @brief Field <aliveTimePercent>k__BackingField, offset: 0x138, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  _aliveTimePercent_k__BackingField;

/// @brief Field <inverseStartLifetimes>k__BackingField, offset: 0x148, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  _inverseStartLifetimes_k__BackingField;

/// @brief Field <randomSeeds>k__BackingField, offset: 0x158, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint32_t>  _randomSeeds_k__BackingField;

/// @brief Field <customData1>k__BackingField, offset: 0x168, size: 0x40, def value: None
 ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4  _customData1_k__BackingField;

/// @brief Field <customData2>k__BackingField, offset: 0x1a8, size: 0x40, def value: None
 ::UnityEngine::ParticleSystemJobs::ParticleSystemNativeArray4  _customData2_k__BackingField;

/// @brief Field <meshIndices>k__BackingField, offset: 0x1e8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  _meshIndices_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _count_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _positions_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _velocities_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _axisOfRotations_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _rotations_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _rotationalSpeeds_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _sizes_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _startColors_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _aliveTimePercent_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _inverseStartLifetimes_k__BackingField) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _randomSeeds_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _customData1_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _customData2_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData, _meshIndices_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData) == 0x1f8, "Size mismatch!");

} // namespace end def UnityEngine::ParticleSystemJobs
