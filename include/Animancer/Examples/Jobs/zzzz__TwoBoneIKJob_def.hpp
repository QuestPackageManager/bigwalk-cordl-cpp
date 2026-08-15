#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/TwoBoneIKJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Animations/zzzz__TransformSceneHandle_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TwoBoneIKJob)
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine::Animations {
class IAnimationJob;
}
namespace UnityEngine::Animations {
struct TransformSceneHandle;
}
namespace UnityEngine::Animations {
struct TransformStreamHandle;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer::Examples::Jobs {
struct TwoBoneIKJob;
}
// Write type traits
MARK_VAL_T(::Animancer::Examples::Jobs::TwoBoneIKJob);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Jobs::TwoBoneIKJob, "Animancer.Examples.Jobs", "TwoBoneIKJob");
// Dependencies UnityEngine.Animations.TransformSceneHandle, UnityEngine.Animations.TransformStreamHandle
namespace Animancer::Examples::Jobs {
// Is value type: true
// CS Name: Animancer.Examples.Jobs.TwoBoneIKJob
struct CORDL_TYPE TwoBoneIKJob {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Animations::IAnimationJob"
constexpr operator  ::UnityEngine::Animations::IAnimationJob*() ;

/// @brief Method ProcessAnimation, addr 0x180302740, size 0xe0, virtual true, abstract: false, final true
inline void ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method ProcessRootMotion, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method Setup, addr 0x180302820, size 0xc0, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Animator*  animator, ::UnityEngine::Transform*  topX, ::UnityEngine::Transform*  midX, ::UnityEngine::Transform*  lowX, ::UnityEngine::Transform*  effectorX) ;

/// @brief Method Solve, addr 0x1803028e0, size 0x870, virtual false, abstract: false, final false
static inline void Solve(::UnityEngine::Animations::AnimationStream  stream, ::UnityEngine::Animations::TransformStreamHandle  topHandle, ::UnityEngine::Animations::TransformStreamHandle  midHandle, ::UnityEngine::Animations::TransformStreamHandle  lowHandle, ::UnityEngine::Animations::TransformSceneHandle  effectorHandle) ;

/// @brief Method TriangleAngle, addr 0x180303150, size 0xb0, virtual false, abstract: false, final false
static inline float_t TriangleAngle(float_t  aLen, ::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2) ;

/// @brief Convert to "::UnityEngine::Animations::IAnimationJob"
constexpr ::UnityEngine::Animations::IAnimationJob* i___UnityEngine__Animations__IAnimationJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr TwoBoneIKJob() ;

// Ctor Parameters [CppParam { name: "effector", ty: "::UnityEngine::Animations::TransformSceneHandle", modifiers: "", def_value: None }, CppParam { name: "top", ty: "::UnityEngine::Animations::TransformStreamHandle", modifiers: "", def_value: None }, CppParam { name: "mid", ty: "::UnityEngine::Animations::TransformStreamHandle", modifiers: "", def_value: None }, CppParam { name: "low", ty: "::UnityEngine::Animations::TransformStreamHandle", modifiers: "", def_value: None }]
constexpr TwoBoneIKJob(::UnityEngine::Animations::TransformSceneHandle  effector, ::UnityEngine::Animations::TransformStreamHandle  top, ::UnityEngine::Animations::TransformStreamHandle  mid, ::UnityEngine::Animations::TransformStreamHandle  low) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19956};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// @brief Field effector, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Animations::TransformSceneHandle  effector;

/// @brief Field top, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Animations::TransformStreamHandle  top;

/// @brief Field mid, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Animations::TransformStreamHandle  mid;

/// @brief Field low, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Animations::TransformStreamHandle  low;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Jobs::TwoBoneIKJob, effector) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::TwoBoneIKJob, top) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::TwoBoneIKJob, mid) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::TwoBoneIKJob, low) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Jobs::TwoBoneIKJob) == 0x2c, "Size mismatch!");

} // namespace end def Animancer::Examples::Jobs
