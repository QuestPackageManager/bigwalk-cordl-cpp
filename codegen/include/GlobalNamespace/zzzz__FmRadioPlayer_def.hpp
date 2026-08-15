#pragma once
// IWYU pragma private; include "GlobalNamespace/FmRadioPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioSourceController_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FmRadioPlayer)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class FmRadioDial;
}
namespace GlobalNamespace {
struct FmRadioPlayer_MusicPlayerData;
}
namespace GlobalNamespace {
class MusicGroup;
}
namespace GlobalNamespace {
class MusicPlayer;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class FmRadioPlayer;
}
namespace GlobalNamespace {
struct FmRadioPlayer_MusicPlayerData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FmRadioPlayer*);
MARK_VAL_T(::GlobalNamespace::FmRadioPlayer_MusicPlayerData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FmRadioPlayer*, "", "FmRadioPlayer");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FmRadioPlayer_MusicPlayerData, "", "FmRadioPlayer/MusicPlayerData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FmRadioPlayer/MusicPlayerData
struct CORDL_TYPE FmRadioPlayer_MusicPlayerData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FmRadioPlayer_MusicPlayerData() ;

// Ctor Parameters [CppParam { name: "musicPlayer", ty: "::UnityW<::GlobalNamespace::MusicPlayer>", modifiers: "", def_value: None }, CppParam { name: "musicIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FmRadioPlayer_MusicPlayerData(::UnityW<::GlobalNamespace::MusicPlayer>  musicPlayer, int32_t  musicIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5050};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field musicPlayer, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MusicPlayer>  musicPlayer;

/// @brief Field musicIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  musicIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FmRadioPlayer_MusicPlayerData, musicPlayer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioPlayer_MusicPlayerData, musicIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FmRadioPlayer_MusicPlayerData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioSourceController, FmRadioPlayer::MusicPlayerData, PeckSystemReference, SoundCue, System.Nullable`1<T>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FmRadioPlayer
class CORDL_TYPE FmRadioPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using MusicPlayerData = ::GlobalNamespace::FmRadioPlayer_MusicPlayerData;

/// @brief Field OnTimeJump, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnTimeJump, put=setStaticF_OnTimeJump)) ::System::Action*  OnTimeJump;

/// @brief Field _staticSources, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__staticSources, put=__cordl_internal_set__staticSources)) ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  _staticSources;

/// @brief Field _stationIndex, offset 0x6c, size 0x8 
 __declspec(property(get=__cordl_internal_get__stationIndex, put=__cordl_internal_set__stationIndex)) ::System::Nullable_1<int32_t>  _stationIndex;

/// @brief Field fmRadioDial, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_fmRadioDial, put=__cordl_internal_set_fmRadioDial)) ::UnityW<::GlobalNamespace::FmRadioDial>  fmRadioDial;

/// @brief Field logVerbose, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field musicPlayers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_musicPlayers, put=__cordl_internal_set_musicPlayers)) ::ArrayW<::GlobalNamespace::FmRadioPlayer_MusicPlayerData>  musicPlayers;

/// @brief Field stateSystem, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_stateSystem, put=__cordl_internal_set_stateSystem)) ::GlobalNamespace::PeckSystemReference  stateSystem;

/// @brief Field staticAssets, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticAssets, put=__cordl_internal_set_staticAssets)) ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  staticAssets;

/// @brief Field transitionSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_transitionSound, put=__cordl_internal_set_transitionSound)) ::UnityW<::GlobalNamespace::AudioAsset>  transitionSound;

/// @brief Method Awake, addr 0x1803fcb50, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::FmRadioPlayer* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803fcbd0, size 0x1d0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803fcda0, size 0x1d0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPeck, addr 0x1803fcf70, size 0x80, virtual false, abstract: false, final false
inline void OnPeck(::GlobalNamespace::PeckContext  peckContext) ;

/// @brief Method OnUnlock, addr 0x1803fcff0, size 0x180, virtual false, abstract: false, final false
inline void OnUnlock(int32_t  stationIndex) ;

/// @brief Method RefreshEffects, addr 0x1803fd170, size 0x160, virtual false, abstract: false, final false
inline void RefreshEffects(bool  unlocking) ;

/// @brief Method Reset, addr 0x1803fd2d0, size 0x90, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetMusicPlayer, addr 0x1803fd360, size 0x170, virtual false, abstract: false, final false
inline void SetMusicPlayer(::GlobalNamespace::MusicGroup*  musicGroup) ;

/// @brief Method SetStatic, addr 0x1803fd4d0, size 0x2a0, virtual false, abstract: false, final false
inline void SetStatic(int32_t  stationIndex, bool  transition) ;

/// @brief Method SyncToTimeOfTheDay, addr 0x1803fd770, size 0xe0, virtual false, abstract: false, final false
inline void SyncToTimeOfTheDay() ;

/// @brief Method <SetStatic>g___clearRef|16_0, addr 0x18031da00, size 0x70, virtual false, abstract: false, final false
static inline void _SetStatic_g___clearRef_16_0(::GlobalNamespace::FmRadioPlayer*  p, int32_t  index, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>> const& __cordl_internal_get__staticSources() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>& __cordl_internal_get__staticSources() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__stationIndex() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__stationIndex() ;

constexpr ::UnityW<::GlobalNamespace::FmRadioDial> const& __cordl_internal_get_fmRadioDial() const;

constexpr ::UnityW<::GlobalNamespace::FmRadioDial>& __cordl_internal_get_fmRadioDial() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::GlobalNamespace::FmRadioPlayer_MusicPlayerData> const& __cordl_internal_get_musicPlayers() const;

constexpr ::ArrayW<::GlobalNamespace::FmRadioPlayer_MusicPlayerData>& __cordl_internal_get_musicPlayers() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_stateSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_stateSystem() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>> const& __cordl_internal_get_staticAssets() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>& __cordl_internal_get_staticAssets() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_transitionSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_transitionSound() ;

constexpr void __cordl_internal_set__staticSources(::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  value) ;

constexpr void __cordl_internal_set__stationIndex(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_fmRadioDial(::UnityW<::GlobalNamespace::FmRadioDial>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_musicPlayers(::ArrayW<::GlobalNamespace::FmRadioPlayer_MusicPlayerData>  value) ;

constexpr void __cordl_internal_set_stateSystem(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_staticAssets(::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  value) ;

constexpr void __cordl_internal_set_transitionSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_OnTimeJump() ;

static inline void setStaticF_OnTimeJump(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FmRadioPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FmRadioPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FmRadioPlayer(FmRadioPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FmRadioPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FmRadioPlayer(FmRadioPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5051};

/// @brief Field stateSystem, offset: 0x20, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___stateSystem;

/// @brief Field musicPlayers, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FmRadioPlayer_MusicPlayerData>  ___musicPlayers;

/// @brief Field staticAssets, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SoundCue>>  ___staticAssets;

/// @brief Field transitionSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___transitionSound;

/// @brief Field fmRadioDial, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FmRadioDial>  ___fmRadioDial;

/// @brief Field logVerbose, offset: 0x68, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _stationIndex, offset: 0x6c, size: 0x8, def value: None
 ::System::Nullable_1<int32_t>  ____stationIndex;

/// @brief Field _staticSources, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AudioSourceController>>  ____staticSources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FmRadioPlayer, ___stateSystem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioPlayer, ___musicPlayers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioPlayer, ___staticAssets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioPlayer, ___transitionSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioPlayer, ___fmRadioDial) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioPlayer, ___logVerbose) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioPlayer, ____stationIndex) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FmRadioPlayer, ____staticSources) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FmRadioPlayer) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
