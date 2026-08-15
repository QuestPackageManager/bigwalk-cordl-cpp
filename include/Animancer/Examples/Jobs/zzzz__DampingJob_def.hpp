#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/DampingJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DampingJob)
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine::Animations {
class IAnimationJob;
}
// Forward declare root types
namespace Animancer::Examples::Jobs {
struct DampingJob;
}
// Write type traits
MARK_VAL_T(::Animancer::Examples::Jobs::DampingJob);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Jobs::DampingJob, "Animancer.Examples.Jobs", "DampingJob");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Animations.TransformStreamHandle, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Animancer::Examples::Jobs {
// Is value type: true
// CS Name: Animancer.Examples.Jobs.DampingJob
struct CORDL_TYPE DampingJob {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Animations::IAnimationJob"
constexpr operator  ::UnityEngine::Animations::IAnimationJob*() ;

/// @brief Method ComputeDampedPositions, addr 0x1802f87c0, size 0x660, virtual false, abstract: false, final false
inline void ComputeDampedPositions(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method ComputeJointLocalRotations, addr 0x1802f8e20, size 0x6b0, virtual false, abstract: false, final false
inline void ComputeJointLocalRotations(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method ProcessAnimation, addr 0x1802f94d0, size 0xe0, virtual true, abstract: false, final true
inline void ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method ProcessRootMotion, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Convert to "::UnityEngine::Animations::IAnimationJob"
constexpr ::UnityEngine::Animations::IAnimationJob* i___UnityEngine__Animations__IAnimationJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr DampingJob() ;

// Ctor Parameters [CppParam { name: "rootHandle", ty: "::UnityEngine::Animations::TransformStreamHandle", modifiers: "", def_value: None }, CppParam { name: "jointHandles", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>", modifiers: "", def_value: None }, CppParam { name: "localPositions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "localRotations", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>", modifiers: "", def_value: None }, CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "velocities", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }]
constexpr DampingJob(::UnityEngine::Animations::TransformStreamHandle  rootHandle, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  jointHandles, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  localPositions, ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  localRotations, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  velocities) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19958};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field rootHandle, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Animations::TransformStreamHandle  rootHandle;

/// @brief Field jointHandles, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  jointHandles;

/// @brief Field localPositions, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  localPositions;

/// @brief Field localRotations, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion>  localRotations;

/// @brief Field positions, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions;

/// @brief Field velocities, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  velocities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Jobs::DampingJob, rootHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::DampingJob, jointHandles) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::DampingJob, localPositions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::DampingJob, localRotations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::DampingJob, positions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::DampingJob, velocities) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Jobs::DampingJob) == 0x60, "Size mismatch!");

} // namespace end def Animancer::Examples::Jobs
