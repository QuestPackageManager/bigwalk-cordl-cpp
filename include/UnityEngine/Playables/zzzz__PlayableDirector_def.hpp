#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableDirector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayableDirector)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine {
class IExposedPropertyTable;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableDirector;
}
// Write type traits
MARK_REF_T(::UnityEngine::Playables::PlayableDirector*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");
// Dependencies UnityEngine.Behaviour
namespace UnityEngine::Playables {
// Is value type: false
// CS Name: UnityEngine.Playables.PlayableDirector
class CORDL_TYPE PlayableDirector : public ::UnityEngine::Behaviour {
public:
// Declarations
/// @brief Field paused, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_paused, put=__cordl_internal_set_paused)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  paused;

 __declspec(property(put=set_playOnAwake)) bool  playOnAwake;

/// @brief Field played, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_played, put=__cordl_internal_set_played)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  played;

 __declspec(property(get=get_state)) ::UnityEngine::Playables::PlayState  state;

/// @brief Field stopped, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopped, put=__cordl_internal_set_stopped)) ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  stopped;

 __declspec(property(get=get_time)) double_t  time;

/// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
constexpr operator  ::UnityEngine::IExposedPropertyTable*() noexcept;

/// @brief Method GetPlayState, addr 0x1822b7960, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState GetPlayState() ;

/// @brief Method GetPlayState_Injected, addr 0x1822b7950, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayState GetPlayState_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::Playables::PlayableDirector* New_ctor() ;

/// @brief Method SendOnPlayableDirectorPause, addr 0x1822b7990, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorPause() ;

/// @brief Method SendOnPlayableDirectorPlay, addr 0x1822b79b0, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorPlay() ;

/// @brief Method SendOnPlayableDirectorStop, addr 0x1822b79d0, size 0x20, virtual false, abstract: false, final false
inline void SendOnPlayableDirectorStop() ;

/// @brief Method SetPlayOnAwake, addr 0x1822b7a00, size 0x30, virtual false, abstract: false, final false
inline void SetPlayOnAwake(bool  on) ;

/// @brief Method SetPlayOnAwake_Injected, addr 0x1822b79f0, size 0x10, virtual false, abstract: false, final false
static inline void SetPlayOnAwake_Injected(::System::IntPtr  _unity_self, bool  on) ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_paused() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_paused() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_played() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_played() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& __cordl_internal_get_stopped() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& __cordl_internal_get_stopped() ;

constexpr void __cordl_internal_set_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

constexpr void __cordl_internal_set_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

constexpr void __cordl_internal_set_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_state, addr 0x1822b7960, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState get_state() ;

/// @brief Method get_time, addr 0x1822b7a40, size 0x30, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Method get_time_Injected, addr 0x1822b7a30, size 0x10, virtual false, abstract: false, final false
static inline double_t get_time_Injected(::System::IntPtr  _unity_self) ;

/// @brief Convert to "::UnityEngine::IExposedPropertyTable"
constexpr ::UnityEngine::IExposedPropertyTable* i___UnityEngine__IExposedPropertyTable() noexcept;

/// @brief Method set_playOnAwake, addr 0x1822b7a00, size 0x30, virtual false, abstract: false, final false
inline void set_playOnAwake(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayableDirector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayableDirector(PlayableDirector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayableDirector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayableDirector(PlayableDirector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21418};

/// @brief Field played, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___played;

/// @brief Field paused, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___paused;

/// @brief Field stopped, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*  ___stopped;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___played) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___paused) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableDirector, ___stopped) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Playables::PlayableDirector) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Playables
