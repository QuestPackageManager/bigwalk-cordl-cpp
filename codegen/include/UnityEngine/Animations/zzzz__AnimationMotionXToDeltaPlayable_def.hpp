#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationMotionXToDeltaPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationMotionXToDeltaPlayable)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationMotionXToDeltaPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, "UnityEngine.Animations", "AnimationMotionXToDeltaPlayable");
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct CORDL_TYPE AnimationMotionXToDeltaPlayable {
public:
// Declarations
/// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_NullPlayable, put=setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable  m_NullPlayable;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method Equals, addr 0x18222f240, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable  other) ;

/// @brief Method GetHandle, addr 0x1804f6880, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method .ctor, addr 0x182230ae0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

static inline ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable getStaticF_m_NullPlayable() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationMotionXToDeltaPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimationMotionXToDeltaPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationMotionXToDeltaPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19936};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
