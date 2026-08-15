#pragma once
// IWYU pragma private; include "Animancer/IAnimationClipCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnimationClipCollection)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace Animancer {
class IAnimationClipCollection;
}
// Write type traits
MARK_REF_T(::Animancer::IAnimationClipCollection*);
DEFINE_IL2CPP_CLASS(::Animancer::IAnimationClipCollection*, "Animancer", "IAnimationClipCollection");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.IAnimationClipCollection
class CORDL_TYPE IAnimationClipCollection {
public:
// Declarations
/// @brief Method GatherAnimationClips, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

// Ctor Parameters [CppParam { name: "", ty: "IAnimationClipCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnimationClipCollection(IAnimationClipCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
