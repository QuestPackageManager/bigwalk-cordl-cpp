#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationMixerPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationMixerPlayable)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationMixerPlayable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationMixerPlayable, "UnityEngine.Animations", "AnimationMixerPlayable");
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationMixerPlayable
struct CORDL_TYPE AnimationMixerPlayable {
public:
// Declarations
/// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_NullPlayable, put=setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimationMixerPlayable  m_NullPlayable;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMixerPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationMixerPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method Create, addr 0x1822307d0, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::AnimationMixerPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method CreateHandle, addr 0x182230730, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method CreateHandleInternal, addr 0x182230710, size 0x20, virtual false, abstract: false, final false
static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method CreateHandleInternal_Injected, addr 0x182230700, size 0x10, virtual false, abstract: false, final false
static inline bool CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method Equals, addr 0x18222f240, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Animations::AnimationMixerPlayable  other) ;

/// @brief Method GetHandle, addr 0x1804f6880, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method .ctor, addr 0x182230980, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

static inline ::UnityEngine::Animations::AnimationMixerPlayable getStaticF_m_NullPlayable() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationMixerPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationMixerPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationMixerPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

/// @brief Method op_Implicit, addr 0x18222f460, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationMixerPlayable  playable) ;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationMixerPlayable  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimationMixerPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationMixerPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19935};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationMixerPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::AnimationMixerPlayable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
