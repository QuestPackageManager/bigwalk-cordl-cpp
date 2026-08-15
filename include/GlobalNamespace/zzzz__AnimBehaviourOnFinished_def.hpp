#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimBehaviourOnFinished.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__StateMachineBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnimBehaviourOnFinished)
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimBehaviourOnFinished;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimBehaviourOnFinished*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimBehaviourOnFinished*, "", "AnimBehaviourOnFinished");
// Dependencies UnityEngine.StateMachineBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimBehaviourOnFinished
class CORDL_TYPE AnimBehaviourOnFinished : public ::UnityEngine::StateMachineBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::AnimBehaviourOnFinished* New_ctor() ;

/// @brief Method OnStateEnter, addr 0x180445b40, size 0xa0, virtual true, abstract: false, final false
inline void OnStateEnter(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

/// @brief Method .ctor, addr 0x180445be0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimBehaviourOnFinished() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimBehaviourOnFinished", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimBehaviourOnFinished(AnimBehaviourOnFinished && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimBehaviourOnFinished", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimBehaviourOnFinished(AnimBehaviourOnFinished const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5333};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AnimBehaviourOnFinished) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
