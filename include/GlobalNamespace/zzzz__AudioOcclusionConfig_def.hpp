#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioOcclusionConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioOcclusionConfig)
namespace GlobalNamespace {
class AudioMaterialConfig;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioOcclusionConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioOcclusionConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioOcclusionConfig*, "", "AudioOcclusionConfig");
// Dependencies AudioAsset, UnityEngine.LayerMask, UnityEngine.QueryTriggerInteraction
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioOcclusionConfig
class CORDL_TYPE AudioOcclusionConfig : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
/// @brief Field BasicOcclusion, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_BasicOcclusion, put=__cordl_internal_set_BasicOcclusion)) bool  BasicOcclusion;

/// @brief Field DetectionSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_DetectionSize, put=__cordl_internal_set_DetectionSize)) int32_t  DetectionSize;

/// @brief Field FilterFrequency, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_FilterFrequency, put=__cordl_internal_set_FilterFrequency)) float_t  FilterFrequency;

/// @brief Field FilterMinGain, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_FilterMinGain, put=__cordl_internal_set_FilterMinGain)) float_t  FilterMinGain;

/// @brief Field FilterQ, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_FilterQ, put=__cordl_internal_set_FilterQ)) float_t  FilterQ;

/// @brief Field Layers, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Layers, put=__cordl_internal_set_Layers)) ::UnityEngine::LayerMask  Layers;

/// @brief Field MaterialConfig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaterialConfig, put=__cordl_internal_set_MaterialConfig)) ::UnityW<::GlobalNamespace::AudioMaterialConfig>  MaterialConfig;

/// @brief Field MaxDistance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxDistance, put=__cordl_internal_set_MaxDistance)) float_t  MaxDistance;

/// @brief Field MinDistance, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinDistance, put=__cordl_internal_set_MinDistance)) float_t  MinDistance;

/// @brief Field QueryTriggerInteraction, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_QueryTriggerInteraction, put=__cordl_internal_set_QueryTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  QueryTriggerInteraction;

/// @brief Field StartOccluded, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_StartOccluded, put=__cordl_internal_set_StartOccluded)) bool  StartOccluded;

/// @brief Field UpdateRate, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_UpdateRate, put=__cordl_internal_set_UpdateRate)) int32_t  UpdateRate;

/// @brief Field UseHighShelfFilter, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseHighShelfFilter, put=__cordl_internal_set_UseHighShelfFilter)) bool  UseHighShelfFilter;

static inline ::GlobalNamespace::AudioOcclusionConfig* New_ctor() ;

constexpr bool const& __cordl_internal_get_BasicOcclusion() const;

constexpr bool& __cordl_internal_get_BasicOcclusion() ;

constexpr int32_t const& __cordl_internal_get_DetectionSize() const;

constexpr int32_t& __cordl_internal_get_DetectionSize() ;

constexpr float_t const& __cordl_internal_get_FilterFrequency() const;

constexpr float_t& __cordl_internal_get_FilterFrequency() ;

constexpr float_t const& __cordl_internal_get_FilterMinGain() const;

constexpr float_t& __cordl_internal_get_FilterMinGain() ;

constexpr float_t const& __cordl_internal_get_FilterQ() const;

constexpr float_t& __cordl_internal_get_FilterQ() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_Layers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_Layers() ;

constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig> const& __cordl_internal_get_MaterialConfig() const;

constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig>& __cordl_internal_get_MaterialConfig() ;

constexpr float_t const& __cordl_internal_get_MaxDistance() const;

constexpr float_t& __cordl_internal_get_MaxDistance() ;

constexpr float_t const& __cordl_internal_get_MinDistance() const;

constexpr float_t& __cordl_internal_get_MinDistance() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_QueryTriggerInteraction() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_QueryTriggerInteraction() ;

constexpr bool const& __cordl_internal_get_StartOccluded() const;

constexpr bool& __cordl_internal_get_StartOccluded() ;

constexpr int32_t const& __cordl_internal_get_UpdateRate() const;

constexpr int32_t& __cordl_internal_get_UpdateRate() ;

constexpr bool const& __cordl_internal_get_UseHighShelfFilter() const;

constexpr bool& __cordl_internal_get_UseHighShelfFilter() ;

constexpr void __cordl_internal_set_BasicOcclusion(bool  value) ;

constexpr void __cordl_internal_set_DetectionSize(int32_t  value) ;

constexpr void __cordl_internal_set_FilterFrequency(float_t  value) ;

constexpr void __cordl_internal_set_FilterMinGain(float_t  value) ;

constexpr void __cordl_internal_set_FilterQ(float_t  value) ;

constexpr void __cordl_internal_set_Layers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_MaterialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value) ;

constexpr void __cordl_internal_set_MaxDistance(float_t  value) ;

constexpr void __cordl_internal_set_MinDistance(float_t  value) ;

constexpr void __cordl_internal_set_QueryTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

constexpr void __cordl_internal_set_StartOccluded(bool  value) ;

constexpr void __cordl_internal_set_UpdateRate(int32_t  value) ;

constexpr void __cordl_internal_set_UseHighShelfFilter(bool  value) ;

/// @brief Method .ctor, addr 0x180484300, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioOcclusionConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioOcclusionConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioOcclusionConfig(AudioOcclusionConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioOcclusionConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioOcclusionConfig(AudioOcclusionConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17537};

/// @brief Field BasicOcclusion, offset: 0x18, size: 0x1, def value: None
 bool  ___BasicOcclusion;

/// @brief Field Layers, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___Layers;

/// @brief Field MinDistance, offset: 0x20, size: 0x4, def value: None
 float_t  ___MinDistance;

/// @brief Field MaxDistance, offset: 0x24, size: 0x4, def value: None
 float_t  ___MaxDistance;

/// @brief Field DetectionSize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___DetectionSize;

/// @brief Field UpdateRate, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___UpdateRate;

/// @brief Field QueryTriggerInteraction, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  ___QueryTriggerInteraction;

/// @brief Field MaterialConfig, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioMaterialConfig>  ___MaterialConfig;

/// @brief Field StartOccluded, offset: 0x40, size: 0x1, def value: None
 bool  ___StartOccluded;

/// @brief Field UseHighShelfFilter, offset: 0x41, size: 0x1, def value: None
 bool  ___UseHighShelfFilter;

/// @brief Field FilterMinGain, offset: 0x44, size: 0x4, def value: None
 float_t  ___FilterMinGain;

/// @brief Field FilterQ, offset: 0x48, size: 0x4, def value: None
 float_t  ___FilterQ;

/// @brief Field FilterFrequency, offset: 0x4c, size: 0x4, def value: None
 float_t  ___FilterFrequency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___BasicOcclusion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___Layers) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___MinDistance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___MaxDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___DetectionSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___UpdateRate) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___QueryTriggerInteraction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___MaterialConfig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___StartOccluded) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___UseHighShelfFilter) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___FilterMinGain) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___FilterQ) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionConfig, ___FilterFrequency) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioOcclusionConfig) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
