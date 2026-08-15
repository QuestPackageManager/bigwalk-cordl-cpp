#pragma once
// IWYU pragma private; include "UnityEngine/Animations/AnimationScriptPlayable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationScriptPlayable)
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
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationScriptPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::AnimationScriptPlayable);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::AnimationScriptPlayable, "UnityEngine.Animations", "AnimationScriptPlayable");
// Dependencies UnityEngine.Playables.PlayableHandle
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.AnimationScriptPlayable
struct CORDL_TYPE AnimationScriptPlayable {
public:
// Declarations
/// @brief Field m_NullPlayable, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_NullPlayable, put=setStaticF_m_NullPlayable)) ::UnityEngine::Animations::AnimationScriptPlayable  m_NullPlayable;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>*() ;

/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr operator  ::UnityEngine::Playables::IPlayable*() ;

/// @brief Method CheckJobTypeValidity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void CheckJobTypeValidity() ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::Animations::AnimationScriptPlayable Create(::UnityEngine::Playables::PlayableGraph  graph, T  jobData, int32_t  inputCount) ;

/// @brief Method CreateHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph  graph, int32_t  inputCount) ;

/// @brief Method CreateHandleInternal, addr 0x182231910, size 0x20, virtual false, abstract: false, final false
static inline bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::System::IntPtr  jobReflectionData) ;

/// @brief Method CreateHandleInternal_Injected, addr 0x182231900, size 0x10, virtual false, abstract: false, final false
static inline bool CreateHandleInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph>  graph, ::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, ::System::IntPtr  jobReflectionData) ;

/// @brief Method Equals, addr 0x18222f240, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Animations::AnimationScriptPlayable  other) ;

/// @brief Method GetHandle, addr 0x1804f6880, size 0x10, virtual true, abstract: false, final true
inline ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method GetJobData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline T GetJobData() ;

/// @brief Method SetJobData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline void SetJobData(T  jobData) ;

/// @brief Method SetProcessInputs, addr 0x182231950, size 0x30, virtual false, abstract: false, final false
inline void SetProcessInputs(bool  value) ;

/// @brief Method SetProcessInputsInternal, addr 0x182231940, size 0x10, virtual false, abstract: false, final false
static inline void SetProcessInputsInternal(::UnityEngine::Playables::PlayableHandle  handle, bool  value) ;

/// @brief Method SetProcessInputsInternal_Injected, addr 0x182231930, size 0x10, virtual false, abstract: false, final false
static inline void SetProcessInputsInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  handle, bool  value) ;

/// @brief Method .ctor, addr 0x182231a30, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Playables::PlayableHandle  handle) ;

static inline ::UnityEngine::Animations::AnimationScriptPlayable getStaticF_m_NullPlayable() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Animations::AnimationScriptPlayable>* i___System__IEquatable_1___UnityEngine__Animations__AnimationScriptPlayable_() ;

/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable() ;

/// @brief Method op_Explicit, addr 0x182231ae0, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::Animations::AnimationScriptPlayable op_Explicit___UnityEngine__Animations__AnimationScriptPlayable(::UnityEngine::Playables::Playable  playable) ;

/// @brief Method op_Implicit, addr 0x18222f460, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationScriptPlayable  playable) ;

static inline void setStaticF_m_NullPlayable(::UnityEngine::Animations::AnimationScriptPlayable  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimationScriptPlayable() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationScriptPlayable(::UnityEngine::Playables::PlayableHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::AnimationScriptPlayable, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::AnimationScriptPlayable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations
