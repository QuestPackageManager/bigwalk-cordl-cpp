#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSyncAudioPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NetworkSyncAudioPlayer)
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class PeckEffectTimerNetworked;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkSyncAudioPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetworkSyncAudioPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkSyncAudioPlayer*, "", "NetworkSyncAudioPlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkSyncAudioPlayer
class CORDL_TYPE NetworkSyncAudioPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _asc, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__asc, put=__cordl_internal_set__asc)) ::UnityW<::GlobalNamespace::AudioSourceController>  _asc;

/// @brief Field _startNetworkTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__startNetworkTime, put=__cordl_internal_set__startNetworkTime)) float_t  _startNetworkTime;

/// @brief Field peckEffectTimer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_peckEffectTimer, put=__cordl_internal_set_peckEffectTimer)) ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  peckEffectTimer;

/// @brief Field sound, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sound, put=__cordl_internal_set_sound)) ::UnityW<::GlobalNamespace::SoundCue>  sound;

/// @brief Field tForm, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_tForm, put=__cordl_internal_set_tForm)) ::UnityW<::UnityEngine::Transform>  tForm;

/// @brief Method Awake, addr 0x1803da440, size 0x140, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::NetworkSyncAudioPlayer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803da580, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnFinish, addr 0x1803da650, size 0x50, virtual false, abstract: false, final false
inline void OnFinish() ;

/// @brief Method OnStart, addr 0x1803da6a0, size 0x30, virtual false, abstract: false, final false
inline void OnStart() ;

/// @brief Method Update, addr 0x1803da730, size 0x350, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <Update>g___clearRef|10_0, addr 0x1803da6d0, size 0x60, virtual false, abstract: false, final false
static inline void _Update_g___clearRef_10_0(::GlobalNamespace::NetworkSyncAudioPlayer*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__asc() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__asc() ;

constexpr float_t const& __cordl_internal_get__startNetworkTime() const;

constexpr float_t& __cordl_internal_get__startNetworkTime() ;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked> const& __cordl_internal_get_peckEffectTimer() const;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>& __cordl_internal_get_peckEffectTimer() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_sound() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_sound() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tForm() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tForm() ;

constexpr void __cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__startNetworkTime(float_t  value) ;

constexpr void __cordl_internal_set_peckEffectTimer(::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  value) ;

constexpr void __cordl_internal_set_sound(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_tForm(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkSyncAudioPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkSyncAudioPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkSyncAudioPlayer(NetworkSyncAudioPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkSyncAudioPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkSyncAudioPlayer(NetworkSyncAudioPlayer const& ) = delete;

/// @brief Field DESYNC_TOLERANCE offset 0xffffffff size 0x4
static constexpr float_t  DESYNC_TOLERANCE{static_cast<float_t>(0.4f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4856};

/// @brief Field peckEffectTimer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckEffectTimerNetworked>  ___peckEffectTimer;

/// @brief Field sound, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___sound;

/// @brief Field tForm, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tForm;

/// @brief Field _asc, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____asc;

/// @brief Field _startNetworkTime, offset: 0x40, size: 0x4, def value: None
 float_t  ____startNetworkTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkSyncAudioPlayer, ___peckEffectTimer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSyncAudioPlayer, ___sound) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSyncAudioPlayer, ___tForm) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSyncAudioPlayer, ____asc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkSyncAudioPlayer, ____startNetworkTime) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkSyncAudioPlayer) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
