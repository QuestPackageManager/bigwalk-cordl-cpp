#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationOffsetPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnimationOffsetPlayable)
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
struct AnimationOffsetPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationOffsetPlayable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationOffsetPlayable, "UnityEngine.Animations", "AnimationOffsetPlayable");
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationOffsetPlayable
struct CORDL_TYPE AnimationOffsetPlayable {
public:
// Declarations
/// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_NullPlayable, put=setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimationOffsetPlayable  m_NullPlayable;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method Equals, addr 0x182230b90, size 0x80, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Animations::AnimationOffsetPlayable  other) ;

/// @brief Method GetHandle, addr 0x1804f6880, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method .ctor, addr 0x182230cc0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

static inline ::UnityEngine::Animations::AnimationOffsetPlayable getStaticF_m_NullPlayable() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationOffsetPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationOffsetPlayable  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimationOffsetPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationOffsetPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19937};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationOffsetPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::AnimationOffsetPlayable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
