#pragma once
// IWYU pragma private; include "Animancer/Examples/Jobs/SimpleLean.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerJob_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/zzzz__TransformStreamHandle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SimpleLean)
namespace Animancer::Examples::Jobs {
struct SimpleLean_Job;
}
namespace Animancer {
class AnimancerPlayable;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine::Animations {
class IAnimationJob;
}
namespace UnityEngine::Animations {
struct TransformStreamHandle;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer::Examples::Jobs {
class SimpleLean;
}
namespace Animancer::Examples::Jobs {
struct SimpleLean_Job;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Jobs::SimpleLean*);
MARK_VAL_T(::Animancer::Examples::Jobs::SimpleLean_Job);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Jobs::SimpleLean*, "Animancer.Examples.Jobs", "SimpleLean");
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Jobs::SimpleLean_Job, "Animancer.Examples.Jobs", "SimpleLean/Job");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Animations.TransformStreamHandle, UnityEngine.Vector3
namespace Animancer::Examples::Jobs {
// Is value type: true
// CS Name: Animancer.Examples.Jobs.SimpleLean/Job
struct CORDL_TYPE SimpleLean_Job {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Animations::IAnimationJob"
constexpr operator  ::UnityEngine::Animations::IAnimationJob*() ;

/// @brief Method ProcessAnimation, addr 0x1802fd660, size 0x390, virtual true, abstract: false, final true
inline void ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method ProcessRootMotion, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Convert to "::UnityEngine::Animations::IAnimationJob"
constexpr ::UnityEngine::Animations::IAnimationJob* i___UnityEngine__Animations__IAnimationJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr SimpleLean_Job() ;

// Ctor Parameters [CppParam { name: "root", ty: "::UnityEngine::Animations::TransformStreamHandle", modifiers: "", def_value: None }, CppParam { name: "bones", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>", modifiers: "", def_value: None }, CppParam { name: "axis", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "angle", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }]
constexpr SimpleLean_Job(::UnityEngine::Animations::TransformStreamHandle  root, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  bones, ::UnityEngine::Vector3  axis, ::Unity::Collections::NativeArray_1<float_t>  angle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19959};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field root, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Animations::TransformStreamHandle  root;

/// @brief Field bones, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  bones;

/// @brief Field axis, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  axis;

/// @brief Field angle, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  angle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Jobs::SimpleLean_Job, root) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::SimpleLean_Job, bones) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::SimpleLean_Job, axis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Jobs::SimpleLean_Job, angle) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Jobs::SimpleLean_Job) == 0x40, "Size mismatch!");

} // namespace end def Animancer::Examples::Jobs
// Dependencies Animancer.AnimancerJob`1<T>, Animancer.Examples.Jobs.SimpleLean::Job
namespace Animancer::Examples::Jobs {
// Is value type: false
// CS Name: Animancer.Examples.Jobs.SimpleLean
class CORDL_TYPE SimpleLean : public ::Animancer::AnimancerJob_1<::Animancer::Examples::Jobs::SimpleLean_Job> {
public:
// Declarations
using Job = ::Animancer::Examples::Jobs::SimpleLean_Job;

 __declspec(property(get=get_Angle, put=set_Angle)) float_t  Angle;

 __declspec(property(get=get_Axis, put=set_Axis)) ::UnityEngine::Vector3  Axis;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Destroy, addr 0x180301590, size 0x40, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Dispose, addr 0x1803015d0, size 0x40, virtual false, abstract: false, final false
inline void Dispose() ;

static inline ::Animancer::Examples::Jobs::SimpleLean* New_ctor(::Animancer::AnimancerPlayable*  animancer, ::UnityEngine::Vector3  axis, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  leanBones) ;

/// @brief Method System.IDisposable.Dispose, addr 0x1803015d0, size 0x40, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method .ctor, addr 0x180301610, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(::Animancer::AnimancerPlayable*  animancer, ::UnityEngine::Vector3  axis, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle>  leanBones) ;

/// @brief Method get_Angle, addr 0x1803017c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Angle() ;

/// @brief Method get_Axis, addr 0x1803017d0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Axis() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Angle, addr 0x1803017f0, size 0x10, virtual false, abstract: false, final false
inline void set_Angle(float_t  value) ;

/// @brief Method set_Axis, addr 0x180301800, size 0xa0, virtual false, abstract: false, final false
inline void set_Axis(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleLean() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleLean", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleLean(SimpleLean && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleLean", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleLean(SimpleLean const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19960};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Examples::Jobs::SimpleLean) == 0x60, "Size mismatch!");

} // namespace end def Animancer::Examples::Jobs
