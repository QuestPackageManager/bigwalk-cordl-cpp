#pragma once
// IWYU pragma private; include "Animancer/AnimatedBool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimatedProperty_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Animations/zzzz__PropertyStreamHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatedBool)
namespace Animancer {
struct AnimatedBool_Job;
}
namespace Animancer {
class IAnimancerComponent;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace UnityEngine::Animations {
struct AnimationStream;
}
namespace UnityEngine::Animations {
class IAnimationJob;
}
// Forward declare root types
namespace Animancer {
class AnimatedBool;
}
namespace Animancer {
struct AnimatedBool_Job;
}
// Write type traits
MARK_REF_T(::Animancer::AnimatedBool*);
MARK_VAL_T(::Animancer::AnimatedBool_Job);
DEFINE_IL2CPP_CLASS(::Animancer::AnimatedBool*, "Animancer", "AnimatedBool");
DEFINE_IL2CPP_CLASS(::Animancer::AnimatedBool_Job, "Animancer", "AnimatedBool/Job");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Animations.PropertyStreamHandle
namespace Animancer {
// Is value type: true
// CS Name: Animancer.AnimatedBool/Job
struct CORDL_TYPE AnimatedBool_Job {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Animations::IAnimationJob"
constexpr operator  ::UnityEngine::Animations::IAnimationJob*() ;

/// @brief Method ProcessAnimation, addr 0x18030d090, size 0xf0, virtual true, abstract: false, final true
inline void ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method ProcessRootMotion, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Convert to "::UnityEngine::Animations::IAnimationJob"
constexpr ::UnityEngine::Animations::IAnimationJob* i___UnityEngine__Animations__IAnimationJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimatedBool_Job() ;

// Ctor Parameters [CppParam { name: "properties", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>", modifiers: "", def_value: None }, CppParam { name: "values", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: None }]
constexpr AnimatedBool_Job(::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  properties, ::Unity::Collections::NativeArray_1<bool>  values) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18158};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field properties, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>  properties;

/// @brief Field values, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<bool>  values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimatedBool_Job, properties) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimatedBool_Job, values) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimatedBool_Job) == 0x20, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimatedBool::Job, Animancer.AnimatedProperty`2<TJob, TValue>
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimatedBool
class CORDL_TYPE AnimatedBool : public ::Animancer::AnimatedProperty_2<::Animancer::AnimatedBool_Job,bool> {
public:
// Declarations
using Job = ::Animancer::AnimatedBool_Job;

/// @brief Method CreateJob, addr 0x180303e60, size 0x20, virtual true, abstract: false, final false
inline void CreateJob() ;

static inline ::Animancer::AnimatedBool* New_ctor(::Animancer::IAnimancerComponent*  animancer, int32_t  propertyCount, ::Unity::Collections::NativeArrayOptions  options) ;

static inline ::Animancer::AnimatedBool* New_ctor(::Animancer::IAnimancerComponent*  animancer, ::StringW  propertyName) ;

static inline ::Animancer::AnimatedBool* New_ctor(::Animancer::IAnimancerComponent*  animancer, ::ArrayW<::StringW>  propertyNames) ;

/// @brief Method .ctor, addr 0x180303e80, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::Animancer::IAnimancerComponent*  animancer, int32_t  propertyCount, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method .ctor, addr 0x180303ea0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Animancer::IAnimancerComponent*  animancer, ::StringW  propertyName) ;

/// @brief Method .ctor, addr 0x180303eb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Animancer::IAnimancerComponent*  animancer, ::ArrayW<::StringW>  propertyNames) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatedBool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatedBool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatedBool(AnimatedBool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatedBool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatedBool(AnimatedBool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18159};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::AnimatedBool) == 0x60, "Size mismatch!");

} // namespace end def Animancer
