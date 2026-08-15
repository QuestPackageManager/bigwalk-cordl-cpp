#pragma once
// IWYU pragma private; include "GlobalNamespace/VoiceSimulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceSimulator)
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class BiquadFilters;
}
namespace GlobalNamespace {
class PlayerVoicePlaybackControl;
}
namespace GlobalNamespace {
class SoundCue;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class VoiceSimulator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VoiceSimulator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceSimulator*, "", "VoiceSimulator");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VoiceSimulator
class CORDL_TYPE VoiceSimulator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field HeadPos, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_HeadPos, put=__cordl_internal_set_HeadPos)) ::UnityW<::UnityEngine::Transform>  HeadPos;

/// @brief Field Voice, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Voice, put=__cordl_internal_set_Voice)) ::UnityW<::GlobalNamespace::SoundCue>  Voice;

/// @brief Field VoicePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_VoicePrefab, put=__cordl_internal_set_VoicePrefab)) ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  VoicePrefab;

/// @brief Field _asc, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__asc, put=__cordl_internal_set__asc)) ::UnityW<::GlobalNamespace::AudioSourceController>  _asc;

/// @brief Field _eqFilter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__eqFilter, put=__cordl_internal_set__eqFilter)) ::UnityW<::GlobalNamespace::BiquadFilters>  _eqFilter;

/// @brief Field _index, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Field _outdoornessVol, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__outdoornessVol, put=__cordl_internal_set__outdoornessVol)) ::GlobalNamespace::AudioVolume*  _outdoornessVol;

/// @brief Field _speechlessVol, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__speechlessVol, put=__cordl_internal_set__speechlessVol)) ::GlobalNamespace::AudioVolume*  _speechlessVol;

/// @brief Method GetX, addr 0x1803f3690, size 0x90, virtual false, abstract: false, final false
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

static inline ::GlobalNamespace::VoiceSimulator* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803f5730, size 0x40, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803f5770, size 0x3a0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1803f5b60, size 0x5d0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <OnEnable>g___clearRef|8_0, addr 0x1803f5b10, size 0x50, virtual false, abstract: false, final false
static inline void _OnEnable_g___clearRef_8_0(::GlobalNamespace::VoiceSimulator*  p, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_HeadPos() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_HeadPos() ;

constexpr ::UnityW<::GlobalNamespace::SoundCue> const& __cordl_internal_get_Voice() const;

constexpr ::UnityW<::GlobalNamespace::SoundCue>& __cordl_internal_get_Voice() ;

constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl> const& __cordl_internal_get_VoicePrefab() const;

constexpr ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>& __cordl_internal_get_VoicePrefab() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__asc() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__asc() ;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& __cordl_internal_get__eqFilter() const;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& __cordl_internal_get__eqFilter() ;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__outdoornessVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__outdoornessVol() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__speechlessVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__speechlessVol() ;

constexpr void __cordl_internal_set_HeadPos(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_Voice(::UnityW<::GlobalNamespace::SoundCue>  value) ;

constexpr void __cordl_internal_set_VoicePrefab(::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  value) ;

constexpr void __cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__eqFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value) ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

constexpr void __cordl_internal_set__outdoornessVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__speechlessVol(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method .ctor, addr 0x1803f6130, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceSimulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceSimulator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceSimulator(VoiceSimulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceSimulator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceSimulator(VoiceSimulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4894};

/// @brief Field Voice, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundCue>  ___Voice;

/// @brief Field VoicePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerVoicePlaybackControl>  ___VoicePrefab;

/// @brief Field HeadPos, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___HeadPos;

/// @brief Field _asc, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____asc;

/// @brief Field _index, offset: 0x40, size: 0x4, def value: None
 int32_t  ____index;

/// @brief Field _eqFilter, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BiquadFilters>  ____eqFilter;

/// @brief Field _outdoornessVol, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____outdoornessVol;

/// @brief Field _speechlessVol, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____speechlessVol;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceSimulator, ___Voice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceSimulator, ___VoicePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceSimulator, ___HeadPos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceSimulator, ____asc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceSimulator, ____index) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceSimulator, ____eqFilter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceSimulator, ____outdoornessVol) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceSimulator, ____speechlessVol) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceSimulator) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
