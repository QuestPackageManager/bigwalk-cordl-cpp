#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimatorSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AnimatorLoopSound_def.hpp"
#include "GlobalNamespace/zzzz__AnimatorOneshotSound_def.hpp"
#include "GlobalNamespace/zzzz__AnimatorSoundEvent_def.hpp"
#include "UnityEngine/zzzz__StateMachineBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnimatorSound)
namespace GlobalNamespace {
class AnimatorLoopSound;
}
namespace GlobalNamespace {
class AnimatorSoundEvent;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class AnimatorSound;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AnimatorSound*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimatorSound*, "", "AnimatorSound");
// Dependencies AnimatorLoopSound, AnimatorOneshotSound, AnimatorSoundEvent, UnityEngine.StateMachineBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AnimatorSound
class CORDL_TYPE AnimatorSound : public ::UnityEngine::StateMachineBehaviour {
public:
// Declarations
/// @brief Field _loopCount, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__loopCount, put=__cordl_internal_set__loopCount)) int32_t  _loopCount;

/// @brief Field soundEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundEvents, put=__cordl_internal_set_soundEvents)) ::ArrayW<::GlobalNamespace::AnimatorSoundEvent*>  soundEvents;

/// @brief Field soundsOnEnter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundsOnEnter, put=__cordl_internal_set_soundsOnEnter)) ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>  soundsOnEnter;

/// @brief Field soundsOnExit, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundsOnExit, put=__cordl_internal_set_soundsOnExit)) ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>  soundsOnExit;

/// @brief Field soundsOnLoop, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundsOnLoop, put=__cordl_internal_set_soundsOnLoop)) ::ArrayW<::GlobalNamespace::AnimatorLoopSound*>  soundsOnLoop;

/// @brief Field stopAllOnExit, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_stopAllOnExit, put=__cordl_internal_set_stopAllOnExit)) bool  stopAllOnExit;

static inline ::GlobalNamespace::AnimatorSound* New_ctor() ;

/// @brief Method OnStateEnter, addr 0x18046d260, size 0x3f0, virtual true, abstract: false, final false
inline void OnStateEnter(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

/// @brief Method OnStateExit, addr 0x18046d650, size 0x340, virtual true, abstract: false, final false
inline void OnStateExit(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

/// @brief Method OnStateUpdate, addr 0x18046d990, size 0x340, virtual true, abstract: false, final false
inline void OnStateUpdate(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex) ;

/// @brief Method <OnStateEnter>g___clearRef|6_0, addr 0x18046dcd0, size 0x50, virtual false, abstract: false, final false
static inline void _OnStateEnter_g___clearRef_6_0(::GlobalNamespace::AnimatorLoopSound*  s, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <OnStateUpdate>g___clearRef|7_0, addr 0x1803f5b10, size 0x50, virtual false, abstract: false, final false
static inline void _OnStateUpdate_g___clearRef_7_0(::GlobalNamespace::AnimatorSoundEvent*  s, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr int32_t const& __cordl_internal_get__loopCount() const;

constexpr int32_t& __cordl_internal_get__loopCount() ;

constexpr ::ArrayW<::GlobalNamespace::AnimatorSoundEvent*> const& __cordl_internal_get_soundEvents() const;

constexpr ::ArrayW<::GlobalNamespace::AnimatorSoundEvent*>& __cordl_internal_get_soundEvents() ;

constexpr ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*> const& __cordl_internal_get_soundsOnEnter() const;

constexpr ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>& __cordl_internal_get_soundsOnEnter() ;

constexpr ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*> const& __cordl_internal_get_soundsOnExit() const;

constexpr ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>& __cordl_internal_get_soundsOnExit() ;

constexpr ::ArrayW<::GlobalNamespace::AnimatorLoopSound*> const& __cordl_internal_get_soundsOnLoop() const;

constexpr ::ArrayW<::GlobalNamespace::AnimatorLoopSound*>& __cordl_internal_get_soundsOnLoop() ;

constexpr bool const& __cordl_internal_get_stopAllOnExit() const;

constexpr bool& __cordl_internal_get_stopAllOnExit() ;

constexpr void __cordl_internal_set__loopCount(int32_t  value) ;

constexpr void __cordl_internal_set_soundEvents(::ArrayW<::GlobalNamespace::AnimatorSoundEvent*>  value) ;

constexpr void __cordl_internal_set_soundsOnEnter(::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>  value) ;

constexpr void __cordl_internal_set_soundsOnExit(::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>  value) ;

constexpr void __cordl_internal_set_soundsOnLoop(::ArrayW<::GlobalNamespace::AnimatorLoopSound*>  value) ;

constexpr void __cordl_internal_set_stopAllOnExit(bool  value) ;

/// @brief Method .ctor, addr 0x180445be0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimatorSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimatorSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimatorSound(AnimatorSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimatorSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimatorSound(AnimatorSound const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17477};

/// @brief Field soundsOnEnter, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>  ___soundsOnEnter;

/// @brief Field soundsOnExit, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AnimatorOneshotSound*>  ___soundsOnExit;

/// @brief Field soundsOnLoop, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AnimatorLoopSound*>  ___soundsOnLoop;

/// @brief Field soundEvents, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AnimatorSoundEvent*>  ___soundEvents;

/// @brief Field stopAllOnExit, offset: 0x38, size: 0x1, def value: None
 bool  ___stopAllOnExit;

/// @brief Field _loopCount, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____loopCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimatorSound, ___soundsOnEnter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSound, ___soundsOnExit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSound, ___soundsOnLoop) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSound, ___soundEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSound, ___stopAllOnExit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimatorSound, ____loopCount) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimatorSound) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
