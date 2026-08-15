#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneOcclusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StandaloneOcclusion)
namespace GlobalNamespace {
class AudioOcclusionConfig;
}
namespace GlobalNamespace {
class AudioOcclusion;
}
namespace GlobalNamespace {
class AudioRTPCXProvider;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
// Forward declare root types
namespace GlobalNamespace {
class StandaloneOcclusion;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StandaloneOcclusion*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StandaloneOcclusion*, "", "StandaloneOcclusion");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandaloneOcclusion
class CORDL_TYPE StandaloneOcclusion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field FilterParam, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_FilterParam, put=__cordl_internal_set_FilterParam)) ::StringW  FilterParam;

/// @brief Field MinGain, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinGain, put=__cordl_internal_set_MinGain)) float_t  MinGain;

/// @brief Field Mixer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Mixer, put=__cordl_internal_set_Mixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  Mixer;

/// @brief Field Occlusion, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Occlusion, put=__cordl_internal_set_Occlusion)) ::UnityW<::GlobalNamespace::AudioOcclusion>  Occlusion;

/// @brief Field OcclusionConfig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OcclusionConfig, put=__cordl_internal_set_OcclusionConfig)) ::UnityW<::GlobalNamespace::AudioOcclusionConfig>  OcclusionConfig;

/// @brief Field RTPCXProvider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_RTPCXProvider, put=__cordl_internal_set_RTPCXProvider)) ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  RTPCXProvider;

static inline ::GlobalNamespace::StandaloneOcclusion* New_ctor() ;

/// @brief Method Start, addr 0x1803e0b90, size 0xb0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1803e0c40, size 0x140, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::StringW const& __cordl_internal_get_FilterParam() const;

constexpr ::StringW& __cordl_internal_get_FilterParam() ;

constexpr float_t const& __cordl_internal_get_MinGain() const;

constexpr float_t& __cordl_internal_get_MinGain() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_Mixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_Mixer() ;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusion> const& __cordl_internal_get_Occlusion() const;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusion>& __cordl_internal_get_Occlusion() ;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig> const& __cordl_internal_get_OcclusionConfig() const;

constexpr ::UnityW<::GlobalNamespace::AudioOcclusionConfig>& __cordl_internal_get_OcclusionConfig() ;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& __cordl_internal_get_RTPCXProvider() const;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& __cordl_internal_get_RTPCXProvider() ;

constexpr void __cordl_internal_set_FilterParam(::StringW  value) ;

constexpr void __cordl_internal_set_MinGain(float_t  value) ;

constexpr void __cordl_internal_set_Mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set_Occlusion(::UnityW<::GlobalNamespace::AudioOcclusion>  value) ;

constexpr void __cordl_internal_set_OcclusionConfig(::UnityW<::GlobalNamespace::AudioOcclusionConfig>  value) ;

constexpr void __cordl_internal_set_RTPCXProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandaloneOcclusion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandaloneOcclusion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StandaloneOcclusion(StandaloneOcclusion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneOcclusion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandaloneOcclusion(StandaloneOcclusion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4874};

/// @brief Field OcclusionConfig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioOcclusionConfig>  ___OcclusionConfig;

/// @brief Field Occlusion, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioOcclusion>  ___Occlusion;

/// @brief Field RTPCXProvider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  ___RTPCXProvider;

/// @brief Field Mixer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___Mixer;

/// @brief Field FilterParam, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___FilterParam;

/// @brief Field MinGain, offset: 0x48, size: 0x4, def value: None
 float_t  ___MinGain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandaloneOcclusion, ___OcclusionConfig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneOcclusion, ___Occlusion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneOcclusion, ___RTPCXProvider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneOcclusion, ___Mixer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneOcclusion, ___FilterParam) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandaloneOcclusion, ___MinGain) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StandaloneOcclusion) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
