#pragma once
// IWYU pragma private; include "UnityEngine/Playables/AnimationPlayableUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AnimationPlayableUtilities)
namespace UnityEngine::Animations {
struct AnimationClipPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace UnityEngine::Playables {
class AnimationPlayableUtilities;
}
// Write type traits
MARK_REF_T(::UnityEngine::Playables::AnimationPlayableUtilities*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::AnimationPlayableUtilities*, "UnityEngine.Playables", "AnimationPlayableUtilities");
// Dependencies System.Object
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.AnimationPlayableUtilities
class CORDL_TYPE AnimationPlayableUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method Play, addr 0x182231470, size 0xd0, virtual false, abstract: false, final false
static inline void Play(::UnityEngine::Animator*  animator, ::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::PlayableGraph  graph) ;

/// @brief Method PlayClip, addr 0x182231290, size 0x1e0, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::AnimationClipPlayable PlayClip(::UnityEngine::Animator*  animator, ::UnityEngine::AnimationClip*  clip, ::by_ref<::UnityEngine::Playables::PlayableGraph>  graph) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationPlayableUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationPlayableUtilities(AnimationPlayableUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationPlayableUtilities(AnimationPlayableUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19925};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Playables::AnimationPlayableUtilities) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Playables
