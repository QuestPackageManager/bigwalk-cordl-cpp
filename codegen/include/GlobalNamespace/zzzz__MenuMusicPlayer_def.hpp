#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuMusicPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MenuMusicPlayer)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
struct MenuMusicPlayer_PlayMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct MenuMusicPlayer_PlayMode;
}
namespace GlobalNamespace {
class MenuMusicPlayer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MenuMusicPlayer_PlayMode);
MARK_REF_T(::GlobalNamespace::MenuMusicPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuMusicPlayer_PlayMode, "", "MenuMusicPlayer/PlayMode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuMusicPlayer*, "", "MenuMusicPlayer");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MenuMusicPlayer/PlayMode
struct CORDL_TYPE MenuMusicPlayer_PlayMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MenuMusicPlayer_PlayMode_Unwrapped
enum struct __MenuMusicPlayer_PlayMode_Unwrapped : int32_t {
__E_MenuMusic = static_cast<int32_t>(0x0),
__E_Goodbye = static_cast<int32_t>(0x1),
__E_MicSelect = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MenuMusicPlayer_PlayMode_Unwrapped () const noexcept {
return static_cast<__MenuMusicPlayer_PlayMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MenuMusicPlayer_PlayMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MenuMusicPlayer_PlayMode(int32_t  value__) noexcept;

/// @brief Field Goodbye value: I32(1)
static ::GlobalNamespace::MenuMusicPlayer_PlayMode const Goodbye;

/// @brief Field MenuMusic value: I32(0)
static ::GlobalNamespace::MenuMusicPlayer_PlayMode const MenuMusic;

/// @brief Field MicSelect value: I32(2)
static ::GlobalNamespace::MenuMusicPlayer_PlayMode const MicSelect;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4848};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer_PlayMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuMusicPlayer_PlayMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies MenuMusicPlayer::PlayMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuMusicPlayer
class CORDL_TYPE MenuMusicPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PlayMode = ::GlobalNamespace::MenuMusicPlayer_PlayMode;

 __declspec(property(get=get_CurrentPlayMode, put=set_CurrentPlayMode)) ::GlobalNamespace::MenuMusicPlayer_PlayMode  CurrentPlayMode;

 __declspec(property(get=get_GoodByeVol, put=set_GoodByeVol)) ::GlobalNamespace::AudioVolume*  GoodByeVol;

/// @brief Field GoodbyeTrack, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_GoodbyeTrack, put=__cordl_internal_set_GoodbyeTrack)) ::UnityW<::GlobalNamespace::AudioAsset>  GoodbyeTrack;

/// @brief Field LoopTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_LoopTime, put=__cordl_internal_set_LoopTime)) float_t  LoopTime;

/// @brief Field Loopable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Loopable, put=__cordl_internal_set_Loopable)) ::UnityW<::GlobalNamespace::AudioAsset>  Loopable;

/// @brief Field MicSelect, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_MicSelect, put=__cordl_internal_set_MicSelect)) ::UnityW<::GlobalNamespace::AudioAsset>  MicSelect;

/// @brief Field Stinger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Stinger, put=__cordl_internal_set_Stinger)) ::UnityW<::GlobalNamespace::AudioAsset>  Stinger;

/// @brief Field <CurrentPlayMode>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentPlayMode_k__BackingField, put=__cordl_internal_set__CurrentPlayMode_k__BackingField)) ::GlobalNamespace::MenuMusicPlayer_PlayMode  _CurrentPlayMode_k__BackingField;

/// @brief Field <GoodByeVol>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__GoodByeVol_k__BackingField, put=__cordl_internal_set__GoodByeVol_k__BackingField)) ::GlobalNamespace::AudioVolume*  _GoodByeVol_k__BackingField;

/// @brief Field _goodbyeASC, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__goodbyeASC, put=__cordl_internal_set__goodbyeASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _goodbyeASC;

/// @brief Field _loopASC, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopASC, put=__cordl_internal_set__loopASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _loopASC;

/// @brief Field _micSelectASC, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__micSelectASC, put=__cordl_internal_set__micSelectASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _micSelectASC;

/// @brief Field _stingerASC, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__stingerASC, put=__cordl_internal_set__stingerASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _stingerASC;

/// @brief Method Awake, addr 0x1803d4f40, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Disable, addr 0x1803d4fc0, size 0x10, virtual false, abstract: false, final false
inline void Disable() ;

static inline ::GlobalNamespace::MenuMusicPlayer* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803d4fd0, size 0x10, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803d4fe0, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLoop, addr 0x1803d5000, size 0x30, virtual false, abstract: false, final false
inline void OnLoop(double_t  dspTime) ;

/// @brief Method Play, addr 0x1803d5620, size 0x280, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method PlayGoodbye, addr 0x1803d5030, size 0x1d0, virtual false, abstract: false, final false
inline void PlayGoodbye() ;

/// @brief Method PlayLoop, addr 0x1803d5200, size 0x1a0, virtual false, abstract: false, final false
inline void PlayLoop() ;

/// @brief Method PlayMicSelect, addr 0x1803d53a0, size 0x140, virtual false, abstract: false, final false
inline void PlayMicSelect() ;

/// @brief Method PlayStinger, addr 0x1803d54e0, size 0x140, virtual false, abstract: false, final false
inline void PlayStinger() ;

/// @brief Method Stop, addr 0x1803d58a0, size 0xc0, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method <PlayGoodbye>g___clearRef|25_0, addr 0x1803d5960, size 0x50, virtual false, abstract: false, final false
static inline void _PlayGoodbye_g___clearRef_25_0(::GlobalNamespace::MenuMusicPlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayLoop>g___clearRef|24_0, addr 0x1803d59b0, size 0x50, virtual false, abstract: false, final false
static inline void _PlayLoop_g___clearRef_24_0(::GlobalNamespace::MenuMusicPlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayMicSelect>g___clearRef|28_0, addr 0x1803d47c0, size 0x50, virtual false, abstract: false, final false
static inline void _PlayMicSelect_g___clearRef_28_0(::GlobalNamespace::MenuMusicPlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayStinger>g___clearRef|23_0, addr 0x1803d5a00, size 0x50, virtual false, abstract: false, final false
static inline void _PlayStinger_g___clearRef_23_0(::GlobalNamespace::MenuMusicPlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_GoodbyeTrack() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_GoodbyeTrack() ;

constexpr float_t const& __cordl_internal_get_LoopTime() const;

constexpr float_t& __cordl_internal_get_LoopTime() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Loopable() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Loopable() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_MicSelect() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_MicSelect() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Stinger() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Stinger() ;

constexpr ::GlobalNamespace::MenuMusicPlayer_PlayMode const& __cordl_internal_get__CurrentPlayMode_k__BackingField() const;

constexpr ::GlobalNamespace::MenuMusicPlayer_PlayMode& __cordl_internal_get__CurrentPlayMode_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__GoodByeVol_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__GoodByeVol_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__goodbyeASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__goodbyeASC() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__loopASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__loopASC() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__micSelectASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__micSelectASC() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__stingerASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__stingerASC() ;

constexpr void __cordl_internal_set_GoodbyeTrack(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_LoopTime(float_t  value) ;

constexpr void __cordl_internal_set_Loopable(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_MicSelect(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Stinger(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set__CurrentPlayMode_k__BackingField(::GlobalNamespace::MenuMusicPlayer_PlayMode  value) ;

constexpr void __cordl_internal_set__GoodByeVol_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__goodbyeASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__loopASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__micSelectASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__stingerASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

/// @brief Method .ctor, addr 0x1803d5a50, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentPlayMode, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::MenuMusicPlayer_PlayMode get_CurrentPlayMode() ;

/// @brief Method get_GoodByeVol, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_GoodByeVol() ;

/// @brief Method set_CurrentPlayMode, addr 0x1803d5ac0, size 0x10, virtual false, abstract: false, final false
inline void set_CurrentPlayMode(::GlobalNamespace::MenuMusicPlayer_PlayMode  value) ;

/// @brief Method set_GoodByeVol, addr 0x1803d5ad0, size 0x10, virtual false, abstract: false, final false
inline void set_GoodByeVol(::GlobalNamespace::AudioVolume*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenuMusicPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenuMusicPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MenuMusicPlayer(MenuMusicPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenuMusicPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenuMusicPlayer(MenuMusicPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4849};

/// @brief Field Stinger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Stinger;

/// @brief Field Loopable, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Loopable;

/// @brief Field LoopTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___LoopTime;

/// @brief Field GoodbyeTrack, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___GoodbyeTrack;

/// @brief Field MicSelect, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___MicSelect;

/// @brief Field _stingerASC, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____stingerASC;

/// @brief Field _loopASC, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____loopASC;

/// @brief Field _goodbyeASC, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____goodbyeASC;

/// @brief Field _micSelectASC, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____micSelectASC;

/// @brief Field <CurrentPlayMode>k__BackingField, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::MenuMusicPlayer_PlayMode  ____CurrentPlayMode_k__BackingField;

/// @brief Field <GoodByeVol>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____GoodByeVol_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer, ___Stinger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer, ___Loopable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer, ___LoopTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer, ___GoodbyeTrack) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer, ___MicSelect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer, ____stingerASC) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer, ____loopASC) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer, ____goodbyeASC) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer, ____micSelectASC) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer, ____CurrentPlayMode_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuMusicPlayer, ____GoodByeVol_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuMusicPlayer) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
