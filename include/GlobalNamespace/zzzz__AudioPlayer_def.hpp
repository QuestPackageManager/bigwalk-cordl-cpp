#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioPlayer)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class AudioRTPCXProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioPlayer*, "", "AudioPlayer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioPlayer
class CORDL_TYPE AudioPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Asset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Asset, put=__cordl_internal_set_Asset)) ::UnityW<::GlobalNamespace::AudioAsset>  Asset;

 __declspec(property(get=get_AudioEvent)) ::GlobalNamespace::AudioEvent*  AudioEvent;

/// @brief Field CancelTail, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_CancelTail, put=__cordl_internal_set_CancelTail)) bool  CancelTail;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

/// @brief Field FollowTransform, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_FollowTransform, put=__cordl_internal_set_FollowTransform)) bool  FollowTransform;

 __declspec(property(get=get_LastCullingUpdateFrame, put=set_LastCullingUpdateFrame)) int32_t  LastCullingUpdateFrame;

/// @brief Field PlayOnEnable, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_PlayOnEnable, put=__cordl_internal_set_PlayOnEnable)) bool  PlayOnEnable;

/// @brief Field RTPCXProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_RTPCXProvider, put=__cordl_internal_set_RTPCXProvider)) ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  RTPCXProvider;

/// @brief Field Static, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_Static, put=__cordl_internal_set_Static)) bool  Static;

/// @brief Field StopBeforePlay, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get_StopBeforePlay, put=__cordl_internal_set_StopBeforePlay)) bool  StopBeforePlay;

/// @brief Field StopHead, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get_StopHead, put=__cordl_internal_set_StopHead)) bool  StopHead;

/// @brief Field StopOnDisable, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_StopOnDisable, put=__cordl_internal_set_StopOnDisable)) bool  StopOnDisable;

/// @brief Field <LastCullingUpdateFrame>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastCullingUpdateFrame_k__BackingField, put=__cordl_internal_set__LastCullingUpdateFrame_k__BackingField)) int32_t  _LastCullingUpdateFrame_k__BackingField;

/// @brief Field _audioEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioEvent, put=__cordl_internal_set__audioEvent)) ::GlobalNamespace::AudioEvent*  _audioEvent;

/// @brief Field _enabled, offset 0x37, size 0x1 
 __declspec(property(get=__cordl_internal_get__enabled, put=__cordl_internal_set__enabled)) bool  _enabled;

/// @brief Method Awake, addr 0x180489480, size 0x1d0, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::AudioPlayer* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180489650, size 0xa0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1804896f0, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x180489750, size 0xd0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x180489820, size 0x200, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Stop, addr 0x180489a20, size 0x50, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method <Awake>g__RegisterStatic|20_0, addr 0x180489a70, size 0x60, virtual false, abstract: false, final false
inline void _Awake_g__RegisterStatic_20_0() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Asset() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Asset() ;

constexpr bool const& __cordl_internal_get_CancelTail() const;

constexpr bool& __cordl_internal_get_CancelTail() ;

constexpr bool const& __cordl_internal_get_FollowTransform() const;

constexpr bool& __cordl_internal_get_FollowTransform() ;

constexpr bool const& __cordl_internal_get_PlayOnEnable() const;

constexpr bool& __cordl_internal_get_PlayOnEnable() ;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& __cordl_internal_get_RTPCXProvider() const;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& __cordl_internal_get_RTPCXProvider() ;

constexpr bool const& __cordl_internal_get_Static() const;

constexpr bool& __cordl_internal_get_Static() ;

constexpr bool const& __cordl_internal_get_StopBeforePlay() const;

constexpr bool& __cordl_internal_get_StopBeforePlay() ;

constexpr bool const& __cordl_internal_get_StopHead() const;

constexpr bool& __cordl_internal_get_StopHead() ;

constexpr bool const& __cordl_internal_get_StopOnDisable() const;

constexpr bool& __cordl_internal_get_StopOnDisable() ;

constexpr int32_t const& __cordl_internal_get__LastCullingUpdateFrame_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LastCullingUpdateFrame_k__BackingField() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__audioEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__audioEvent() ;

constexpr bool const& __cordl_internal_get__enabled() const;

constexpr bool& __cordl_internal_get__enabled() ;

constexpr void __cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_CancelTail(bool  value) ;

constexpr void __cordl_internal_set_FollowTransform(bool  value) ;

constexpr void __cordl_internal_set_PlayOnEnable(bool  value) ;

constexpr void __cordl_internal_set_RTPCXProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value) ;

constexpr void __cordl_internal_set_Static(bool  value) ;

constexpr void __cordl_internal_set_StopBeforePlay(bool  value) ;

constexpr void __cordl_internal_set_StopHead(bool  value) ;

constexpr void __cordl_internal_set_StopOnDisable(bool  value) ;

constexpr void __cordl_internal_set__LastCullingUpdateFrame_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__audioEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__enabled(bool  value) ;

/// @brief Method .ctor, addr 0x180489ad0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioEvent, addr 0x1802e5850, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioEvent* get_AudioEvent() ;

/// @brief Method get_Enabled, addr 0x180489af0, size 0x10, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_LastCullingUpdateFrame, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_LastCullingUpdateFrame() ;

/// @brief Method set_Enabled, addr 0x180489b00, size 0x140, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_LastCullingUpdateFrame, addr 0x180393000, size 0x10, virtual false, abstract: false, final false
inline void set_LastCullingUpdateFrame(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioPlayer(AudioPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioPlayer(AudioPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17546};

/// @brief Field Asset, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Asset;

/// @brief Field RTPCXProvider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  ___RTPCXProvider;

/// @brief Field PlayOnEnable, offset: 0x30, size: 0x1, def value: None
 bool  ___PlayOnEnable;

/// @brief Field StopOnDisable, offset: 0x31, size: 0x1, def value: None
 bool  ___StopOnDisable;

/// @brief Field FollowTransform, offset: 0x32, size: 0x1, def value: None
 bool  ___FollowTransform;

/// @brief Field StopHead, offset: 0x33, size: 0x1, def value: None
 bool  ___StopHead;

/// @brief Field CancelTail, offset: 0x34, size: 0x1, def value: None
 bool  ___CancelTail;

/// @brief Field Static, offset: 0x35, size: 0x1, def value: None
 bool  ___Static;

/// @brief Field StopBeforePlay, offset: 0x36, size: 0x1, def value: None
 bool  ___StopBeforePlay;

/// @brief Field _enabled, offset: 0x37, size: 0x1, def value: None
 bool  ____enabled;

/// @brief Field <LastCullingUpdateFrame>k__BackingField, offset: 0x38, size: 0x4, def value: None
 int32_t  ____LastCullingUpdateFrame_k__BackingField;

/// @brief Field _audioEvent, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____audioEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioPlayer, ___Asset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayer, ___RTPCXProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayer, ___PlayOnEnable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayer, ___StopOnDisable) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayer, ___FollowTransform) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayer, ___StopHead) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayer, ___CancelTail) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayer, ___Static) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayer, ___StopBeforePlay) == 0x36, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayer, ____enabled) == 0x37, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayer, ____LastCullingUpdateFrame_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioPlayer, ____audioEvent) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioPlayer) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
