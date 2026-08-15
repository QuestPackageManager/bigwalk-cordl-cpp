#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationLayerMixerPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationLayerMixerPlayable)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
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
namespace UnityEngine {
class AvatarMask;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationLayerMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationLayerMixerPlayable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationLayerMixerPlayable, "UnityEngine.Animations", "AnimationLayerMixerPlayable");
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationLayerMixerPlayable
struct CORDL_TYPE AnimationLayerMixerPlayable {
public:
// Declarations
/// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_NullPlayable, put=setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimationLayerMixerPlayable  m_NullPlayable;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method Create, addr 0x182230060, size 0x110, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method Create, addr 0x182230170, size 0x120, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount, bool  singleLayerOptimization) ;

/// @brief Method CreateHandle, addr 0x18222ffc0, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method CreateHandleInternal, addr 0x18222ffa0, size 0x20, virtual false, abstract: false, final false
static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method CreateHandleInternal_Injected, addr 0x18222ff90, size 0x10, virtual false, abstract: false, final false
static inline bool CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle) ;

/// @brief Method Equals, addr 0x18222f240, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Animations::AnimationLayerMixerPlayable  other) ;

/// @brief Method GetHandle, addr 0x1804f6880, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method IsLayerAdditive, addr 0x1822302a0, size 0xd0, virtual false, abstract: false, final false
inline bool IsLayerAdditive(uint32_t  layerIndex) ;

/// @brief Method IsLayerAdditiveInternal, addr 0x182230290, size 0x10, virtual false, abstract: false, final false
static inline bool IsLayerAdditiveInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, uint32_t  layerIndex) ;

/// @brief Method SetLayerAdditive, addr 0x182230380, size 0xd0, virtual false, abstract: false, final false
inline void SetLayerAdditive(uint32_t  layerIndex, bool  value) ;

/// @brief Method SetLayerAdditiveInternal, addr 0x182230370, size 0x10, virtual false, abstract: false, final false
static inline void SetLayerAdditiveInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, uint32_t  layerIndex, bool  value) ;

/// @brief Method SetLayerMaskFromAvatarMask, addr 0x182230480, size 0x100, virtual false, abstract: false, final false
inline void SetLayerMaskFromAvatarMask(uint32_t  layerIndex, ::UnityEngine::AvatarMask*  mask) ;

/// @brief Method SetLayerMaskFromAvatarMaskInternal, addr 0x182230460, size 0x20, virtual false, abstract: false, final false
static inline void SetLayerMaskFromAvatarMaskInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, uint32_t  layerIndex, ::UnityEngine::AvatarMask*  mask) ;

/// @brief Method SetLayerMaskFromAvatarMaskInternal_Injected, addr 0x182230450, size 0x10, virtual false, abstract: false, final false
static inline void SetLayerMaskFromAvatarMaskInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, uint32_t  layerIndex, ::System::IntPtr  mask) ;

/// @brief Method SetSingleLayerOptimizationInternal, addr 0x182230580, size 0x10, virtual false, abstract: false, final false
static inline void SetSingleLayerOptimizationInternal(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, bool  value) ;

/// @brief Method .ctor, addr 0x182230640, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle, bool  singleLayerOptimization) ;

static inline ::UnityEngine::Animations::AnimationLayerMixerPlayable getStaticF_m_NullPlayable() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationLayerMixerPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationLayerMixerPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

/// @brief Method op_Implicit, addr 0x18222f460, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationLayerMixerPlayable  playable) ;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationLayerMixerPlayable  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimationLayerMixerPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationLayerMixerPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19934};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationLayerMixerPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::AnimationLayerMixerPlayable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
