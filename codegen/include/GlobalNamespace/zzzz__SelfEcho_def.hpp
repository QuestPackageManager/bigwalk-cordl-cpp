#pragma once
// IWYU pragma private; include "GlobalNamespace/SelfEcho.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EchoData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SelfEcho)
namespace GlobalNamespace {
class AudioDynamicReverb;
}
namespace GlobalNamespace {
struct EchoData;
}
namespace GlobalNamespace {
class LocalVoicePlayer;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
// Forward declare root types
namespace GlobalNamespace {
class SelfEcho;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SelfEcho*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SelfEcho*, "", "SelfEcho");
// Dependencies EchoData, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelfEcho
class CORDL_TYPE SelfEcho : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_EchoAmount, put=set_EchoAmount)) ::ArrayW<::GlobalNamespace::EchoData>  EchoAmount;

 __declspec(property(get=get_EchoOn, put=set_EchoOn)) bool  EchoOn;

/// @brief Field EmitterCenter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_EmitterCenter, put=__cordl_internal_set_EmitterCenter)) ::UnityW<::GlobalNamespace::LocalVoicePlayer>  EmitterCenter;

/// @brief Field EmitterLeft, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_EmitterLeft, put=__cordl_internal_set_EmitterLeft)) ::UnityW<::GlobalNamespace::LocalVoicePlayer>  EmitterLeft;

/// @brief Field EmitterRight, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_EmitterRight, put=__cordl_internal_set_EmitterRight)) ::UnityW<::GlobalNamespace::LocalVoicePlayer>  EmitterRight;

/// @brief Field Mixer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Mixer, put=__cordl_internal_set_Mixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  Mixer;

/// @brief Field <EchoAmount>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__EchoAmount_k__BackingField, put=__cordl_internal_set__EchoAmount_k__BackingField)) ::ArrayW<::GlobalNamespace::EchoData>  _EchoAmount_k__BackingField;

/// @brief Field <EchoOn>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__EchoOn_k__BackingField, put=__cordl_internal_set__EchoOn_k__BackingField)) bool  _EchoOn_k__BackingField;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::SelfEcho>  _Instance_k__BackingField;

/// @brief Field _lastSyncedEchoAmount, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSyncedEchoAmount, put=__cordl_internal_set__lastSyncedEchoAmount)) float_t  _lastSyncedEchoAmount;

/// @brief Field _lastSyncedOutdoorsness, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSyncedOutdoorsness, put=__cordl_internal_set__lastSyncedOutdoorsness)) float_t  _lastSyncedOutdoorsness;

/// @brief Field _leftDir, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__leftDir, put=setStaticF__leftDir)) ::UnityEngine::Vector3  _leftDir;

/// @brief Field _masterVol, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__masterVol, put=__cordl_internal_set__masterVol)) float_t  _masterVol;

/// @brief Field _reverb, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__reverb, put=__cordl_internal_set__reverb)) ::UnityW<::GlobalNamespace::AudioDynamicReverb>  _reverb;

/// @brief Field _rightDir, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__rightDir, put=setStaticF__rightDir)) ::UnityEngine::Vector3  _rightDir;

/// @brief Field _updateRemoteTimerEcho, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__updateRemoteTimerEcho, put=__cordl_internal_set__updateRemoteTimerEcho)) float_t  _updateRemoteTimerEcho;

/// @brief Field _updateRemoteTimerOutdoor, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__updateRemoteTimerOutdoor, put=__cordl_internal_set__updateRemoteTimerOutdoor)) float_t  _updateRemoteTimerOutdoor;

/// @brief Method Awake, addr 0x1803dd700, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BroadcastForRemoteEcho, addr 0x1803dd750, size 0x40, virtual false, abstract: false, final false
inline void BroadcastForRemoteEcho(::GlobalNamespace::PlayerCharacter*  playerCharacter) ;

/// @brief Method CalculateEchoAmount, addr 0x1803dd790, size 0xe0, virtual false, abstract: false, final false
inline ::GlobalNamespace::EchoData CalculateEchoAmount(int32_t  index) ;

/// @brief Method LateUpdate, addr 0x1803dd870, size 0x860, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SelfEcho* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803de0d0, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803de140, size 0x220, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x1803de360, size 0x160, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer> const& __cordl_internal_get_EmitterCenter() const;

constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer>& __cordl_internal_get_EmitterCenter() ;

constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer> const& __cordl_internal_get_EmitterLeft() const;

constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer>& __cordl_internal_get_EmitterLeft() ;

constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer> const& __cordl_internal_get_EmitterRight() const;

constexpr ::UnityW<::GlobalNamespace::LocalVoicePlayer>& __cordl_internal_get_EmitterRight() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_Mixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_Mixer() ;

constexpr ::ArrayW<::GlobalNamespace::EchoData> const& __cordl_internal_get__EchoAmount_k__BackingField() const;

constexpr ::ArrayW<::GlobalNamespace::EchoData>& __cordl_internal_get__EchoAmount_k__BackingField() ;

constexpr bool const& __cordl_internal_get__EchoOn_k__BackingField() const;

constexpr bool& __cordl_internal_get__EchoOn_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__lastSyncedEchoAmount() const;

constexpr float_t& __cordl_internal_get__lastSyncedEchoAmount() ;

constexpr float_t const& __cordl_internal_get__lastSyncedOutdoorsness() const;

constexpr float_t& __cordl_internal_get__lastSyncedOutdoorsness() ;

constexpr float_t const& __cordl_internal_get__masterVol() const;

constexpr float_t& __cordl_internal_get__masterVol() ;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb> const& __cordl_internal_get__reverb() const;

constexpr ::UnityW<::GlobalNamespace::AudioDynamicReverb>& __cordl_internal_get__reverb() ;

constexpr float_t const& __cordl_internal_get__updateRemoteTimerEcho() const;

constexpr float_t& __cordl_internal_get__updateRemoteTimerEcho() ;

constexpr float_t const& __cordl_internal_get__updateRemoteTimerOutdoor() const;

constexpr float_t& __cordl_internal_get__updateRemoteTimerOutdoor() ;

constexpr void __cordl_internal_set_EmitterCenter(::UnityW<::GlobalNamespace::LocalVoicePlayer>  value) ;

constexpr void __cordl_internal_set_EmitterLeft(::UnityW<::GlobalNamespace::LocalVoicePlayer>  value) ;

constexpr void __cordl_internal_set_EmitterRight(::UnityW<::GlobalNamespace::LocalVoicePlayer>  value) ;

constexpr void __cordl_internal_set_Mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set__EchoAmount_k__BackingField(::ArrayW<::GlobalNamespace::EchoData>  value) ;

constexpr void __cordl_internal_set__EchoOn_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__lastSyncedEchoAmount(float_t  value) ;

constexpr void __cordl_internal_set__lastSyncedOutdoorsness(float_t  value) ;

constexpr void __cordl_internal_set__masterVol(float_t  value) ;

constexpr void __cordl_internal_set__reverb(::UnityW<::GlobalNamespace::AudioDynamicReverb>  value) ;

constexpr void __cordl_internal_set__updateRemoteTimerEcho(float_t  value) ;

constexpr void __cordl_internal_set__updateRemoteTimerOutdoor(float_t  value) ;

/// @brief Method .ctor, addr 0x1803de520, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::SelfEcho> getStaticF__Instance_k__BackingField() ;

static inline ::UnityEngine::Vector3 getStaticF__leftDir() ;

static inline ::UnityEngine::Vector3 getStaticF__rightDir() ;

/// @brief Method get_EchoAmount, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::EchoData> get_EchoAmount() ;

/// @brief Method get_EchoOn, addr 0x1803151e0, size 0x10, virtual false, abstract: false, final false
inline bool get_EchoOn() ;

/// @brief Method get_Instance, addr 0x1803de570, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SelfEcho> get_Instance() ;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::SelfEcho>  value) ;

static inline void setStaticF__leftDir(::UnityEngine::Vector3  value) ;

static inline void setStaticF__rightDir(::UnityEngine::Vector3  value) ;

/// @brief Method set_EchoAmount, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_EchoAmount(::ArrayW<::GlobalNamespace::EchoData>  value) ;

/// @brief Method set_EchoOn, addr 0x1803de5b0, size 0x10, virtual false, abstract: false, final false
inline void set_EchoOn(bool  value) ;

/// @brief Method set_Instance, addr 0x1803dd700, size 0x50, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::SelfEcho*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelfEcho() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelfEcho", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelfEcho(SelfEcho && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelfEcho", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelfEcho(SelfEcho const& ) = delete;

/// @brief Field DECAY_CENTER offset 0xffffffff size 0x8
static constexpr ::ConstString  DECAY_CENTER{u"CenterDecay"};

/// @brief Field DECAY_LEFT offset 0xffffffff size 0x8
static constexpr ::ConstString  DECAY_LEFT{u"LeftDecay"};

/// @brief Field DECAY_RIGHT offset 0xffffffff size 0x8
static constexpr ::ConstString  DECAY_RIGHT{u"RightDecay"};

/// @brief Field DELAY_CENTER offset 0xffffffff size 0x8
static constexpr ::ConstString  DELAY_CENTER{u"CenterDelay"};

/// @brief Field DELAY_LEFT offset 0xffffffff size 0x8
static constexpr ::ConstString  DELAY_LEFT{u"LeftDelay"};

/// @brief Field DELAY_RIGHT offset 0xffffffff size 0x8
static constexpr ::ConstString  DELAY_RIGHT{u"RightDelay"};

/// @brief Field MASTER_VOL offset 0xffffffff size 0x8
static constexpr ::ConstString  MASTER_VOL{u"MasterVol"};

/// @brief Field UPDATE_TOLERANCE offset 0xffffffff size 0x4
static constexpr float_t  UPDATE_TOLERANCE{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4867};

/// @brief Field EmitterCenter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalVoicePlayer>  ___EmitterCenter;

/// @brief Field EmitterLeft, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalVoicePlayer>  ___EmitterLeft;

/// @brief Field EmitterRight, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalVoicePlayer>  ___EmitterRight;

/// @brief Field Mixer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___Mixer;

/// @brief Field _reverb, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioDynamicReverb>  ____reverb;

/// @brief Field _updateRemoteTimerEcho, offset: 0x48, size: 0x4, def value: None
 float_t  ____updateRemoteTimerEcho;

/// @brief Field _updateRemoteTimerOutdoor, offset: 0x4c, size: 0x4, def value: None
 float_t  ____updateRemoteTimerOutdoor;

/// @brief Field <EchoAmount>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::EchoData>  ____EchoAmount_k__BackingField;

/// @brief Field <EchoOn>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____EchoOn_k__BackingField;

/// @brief Field _masterVol, offset: 0x5c, size: 0x4, def value: None
 float_t  ____masterVol;

/// @brief Field _lastSyncedOutdoorsness, offset: 0x60, size: 0x4, def value: None
 float_t  ____lastSyncedOutdoorsness;

/// @brief Field _lastSyncedEchoAmount, offset: 0x64, size: 0x4, def value: None
 float_t  ____lastSyncedEchoAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelfEcho, ___EmitterCenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfEcho, ___EmitterLeft) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfEcho, ___EmitterRight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfEcho, ___Mixer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfEcho, ____reverb) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfEcho, ____updateRemoteTimerEcho) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfEcho, ____updateRemoteTimerOutdoor) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfEcho, ____EchoAmount_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfEcho, ____EchoOn_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfEcho, ____masterVol) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfEcho, ____lastSyncedOutdoorsness) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelfEcho, ____lastSyncedEchoAmount) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SelfEcho) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
