#pragma once
// IWYU pragma private; include "UnityEngine/Animations/IAnimationJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnimationJob)
namespace UnityEngine::Animations {
struct AnimationStream;
}
// Forward declare root types
namespace UnityEngine::Animations {
class IAnimationJob;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::IAnimationJob*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::IAnimationJob*, "UnityEngine.Animations", "IAnimationJob");
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.IAnimationJob
class CORDL_TYPE IAnimationJob {
public:
// Declarations
/// @brief Method ProcessAnimation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessAnimation(::UnityEngine::Animations::AnimationStream  stream) ;

/// @brief Method ProcessRootMotion, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessRootMotion(::UnityEngine::Animations::AnimationStream  stream) ;

// Ctor Parameters [CppParam { name: "", ty: "IAnimationJob", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnimationJob(IAnimationJob const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19927};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
