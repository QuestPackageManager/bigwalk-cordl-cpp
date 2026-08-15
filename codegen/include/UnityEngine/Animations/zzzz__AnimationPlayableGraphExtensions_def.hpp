#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationPlayableGraphExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AnimationPlayableGraphExtensions)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace UnityEngine::Animations {
class AnimationPlayableGraphExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::AnimationPlayableGraphExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationPlayableGraphExtensions*, "UnityEngine.Animations", "AnimationPlayableGraphExtensions");
// Dependencies System.Object
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.AnimationPlayableGraphExtensions
class CORDL_TYPE AnimationPlayableGraphExtensions : public ::System::Object {
public:
// Declarations
/// @brief Method InternalCreateAnimationOutput, addr 0x182230d80, size 0x120, virtual false, abstract: false, final false
static inline bool InternalCreateAnimationOutput(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::StringW  name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle) ;

/// @brief Method InternalCreateAnimationOutput_Injected, addr 0x182230d70, size 0x10, virtual false, abstract: false, final false
static inline bool InternalCreateAnimationOutput_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::by_ref<::UnityEngine::Playables::PlayableOutputHandle>  handle) ;

/// @brief Method InternalSyncUpdateAndTimeMode, addr 0x182230eb0, size 0x60, virtual false, abstract: false, final false
static inline void InternalSyncUpdateAndTimeMode(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::UnityEngine::Animator*  animator) ;

/// @brief Method InternalSyncUpdateAndTimeMode_Injected, addr 0x182230ea0, size 0x10, virtual false, abstract: false, final false
static inline void InternalSyncUpdateAndTimeMode_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::System::IntPtr  animator) ;

/// @brief Method SyncUpdateAndTimeMode, addr 0x182230f10, size 0x60, virtual false, abstract: false, final false
static inline void SyncUpdateAndTimeMode(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animator*  animator) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationPlayableGraphExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableGraphExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationPlayableGraphExtensions(AnimationPlayableGraphExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationPlayableGraphExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationPlayableGraphExtensions(AnimationPlayableGraphExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19938};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::AnimationPlayableGraphExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
