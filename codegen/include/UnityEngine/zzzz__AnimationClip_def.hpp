#pragma once
// IWYU pragma private; include "UnityEngine/AnimationClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Motion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationClip)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AnimationEvent;
}
// Forward declare root types
namespace UnityEngine {
class AnimationClip;
}
// Write type traits
MARK_REF_T(::UnityEngine::AnimationClip*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AnimationClip*, "UnityEngine", "AnimationClip");
// Dependencies UnityEngine.Motion
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AnimationClip
class CORDL_TYPE AnimationClip : public ::UnityEngine::Motion {
public:
// Declarations
 __declspec(property(get=get_events)) ::ArrayW<::UnityEngine::AnimationEvent*>  events;

 __declspec(property(get=get_frameRate)) float_t  frameRate;

 __declspec(property(get=get_legacy)) bool  legacy;

 __declspec(property(get=get_length)) float_t  length;

/// @brief Method GetEventsInternal, addr 0x18222f4a0, size 0x40, virtual false, abstract: false, final false
inline void GetEventsInternal(::by_ref<::System::IntPtr>  values, ::by_ref<int32_t>  size) ;

/// @brief Method GetEventsInternal_Injected, addr 0x18222f490, size 0x10, virtual false, abstract: false, final false
static inline void GetEventsInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::System::IntPtr>  values, ::by_ref<int32_t>  size) ;

/// @brief Method Internal_CreateAnimationClip, addr 0x18222f4e0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_CreateAnimationClip(::UnityEngine::AnimationClip*  self) ;

static inline ::UnityEngine::AnimationClip* New_ctor() ;

/// @brief Method .ctor, addr 0x18222f4e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_events, addr 0x18222f4f0, size 0x150, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::AnimationEvent*> get_events() ;

/// @brief Method get_frameRate, addr 0x18222f650, size 0x30, virtual false, abstract: false, final false
inline float_t get_frameRate() ;

/// @brief Method get_frameRate_Injected, addr 0x18222f640, size 0x10, virtual false, abstract: false, final false
static inline float_t get_frameRate_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_legacy, addr 0x18222f690, size 0x30, virtual false, abstract: false, final false
inline bool get_legacy() ;

/// @brief Method get_legacy_Injected, addr 0x18222f680, size 0x10, virtual false, abstract: false, final false
static inline bool get_legacy_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_length, addr 0x18222f6d0, size 0x30, virtual false, abstract: false, final false
inline float_t get_length() ;

/// @brief Method get_length_Injected, addr 0x18222f6c0, size 0x10, virtual false, abstract: false, final false
static inline float_t get_length_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimationClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimationClip", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimationClip(AnimationClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimationClip", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimationClip(AnimationClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19902};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AnimationClip) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
