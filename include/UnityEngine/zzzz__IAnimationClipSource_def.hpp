#pragma once
// IWYU pragma private; include "UnityEngine/IAnimationClipSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnimationClipSource)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace UnityEngine {
class IAnimationClipSource;
}
// Write type traits
MARK_REF_T(::UnityEngine::IAnimationClipSource*);
DEFINE_IL2CPP_CLASS(::UnityEngine::IAnimationClipSource*, "UnityEngine", "IAnimationClipSource");
// Dependencies 
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.IAnimationClipSource
class CORDL_TYPE IAnimationClipSource {
public:
// Declarations
/// @brief Method GetAnimationClips, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  results) ;

// Ctor Parameters [CppParam { name: "", ty: "IAnimationClipSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnimationClipSource(IAnimationClipSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19893};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
