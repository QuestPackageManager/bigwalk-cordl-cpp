#pragma once
// IWYU pragma private; include "GlobalNamespace/DynamicReverbConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicReverbConfig)
namespace GlobalNamespace {
class AudioMaterialConfig;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class DynamicReverbConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DynamicReverbConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicReverbConfig*, "", "DynamicReverbConfig");
// Dependencies AudioAsset, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: DynamicReverbConfig
class CORDL_TYPE DynamicReverbConfig : public ::GlobalNamespace::AudioAsset {
public:
// Declarations
/// @brief Field ActualRange, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActualRange, put=__cordl_internal_set_ActualRange)) float_t  ActualRange;

/// @brief Field Basic, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Basic, put=__cordl_internal_set_Basic)) bool  Basic;

/// @brief Field CollideInfoSize, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_CollideInfoSize, put=__cordl_internal_set_CollideInfoSize)) int32_t  CollideInfoSize;

/// @brief Field DetectionAngleHigh, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_DetectionAngleHigh, put=__cordl_internal_set_DetectionAngleHigh)) float_t  DetectionAngleHigh;

/// @brief Field DetectionAngleLow, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_DetectionAngleLow, put=__cordl_internal_set_DetectionAngleLow)) float_t  DetectionAngleLow;

/// @brief Field DetectionRange, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_DetectionRange, put=__cordl_internal_set_DetectionRange)) float_t  DetectionRange;

/// @brief Field InitialDiffusion, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_InitialDiffusion, put=__cordl_internal_set_InitialDiffusion)) float_t  InitialDiffusion;

/// @brief Field IsLowQualityLevelSettings, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_IsLowQualityLevelSettings, put=__cordl_internal_set_IsLowQualityLevelSettings)) ::ArrayW<bool>  IsLowQualityLevelSettings;

/// @brief Field Layers, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Layers, put=__cordl_internal_set_Layers)) ::UnityEngine::LayerMask  Layers;

/// @brief Field LowQualityRaysAmount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_LowQualityRaysAmount, put=__cordl_internal_set_LowQualityRaysAmount)) int32_t  LowQualityRaysAmount;

/// @brief Field MaterialConfig, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaterialConfig, put=__cordl_internal_set_MaterialConfig)) ::UnityW<::GlobalNamespace::AudioMaterialConfig>  MaterialConfig;

/// @brief Field Mixer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Mixer, put=__cordl_internal_set_Mixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  Mixer;

/// @brief Field OutdoornessCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OutdoornessCurve, put=__cordl_internal_set_OutdoornessCurve)) ::UnityEngine::AnimationCurve*  OutdoornessCurve;

/// @brief Field RaysAmount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_RaysAmount, put=__cordl_internal_set_RaysAmount)) int32_t  RaysAmount;

/// @brief Field RoomSizeCurve, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomSizeCurve, put=__cordl_internal_set_RoomSizeCurve)) ::UnityEngine::AnimationCurve*  RoomSizeCurve;

static inline ::GlobalNamespace::DynamicReverbConfig* New_ctor() ;

/// @brief Method OnValidate, addr 0x18049f000, size 0x80, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr float_t const& __cordl_internal_get_ActualRange() const;

constexpr float_t& __cordl_internal_get_ActualRange() ;

constexpr bool const& __cordl_internal_get_Basic() const;

constexpr bool& __cordl_internal_get_Basic() ;

constexpr int32_t const& __cordl_internal_get_CollideInfoSize() const;

constexpr int32_t& __cordl_internal_get_CollideInfoSize() ;

constexpr float_t const& __cordl_internal_get_DetectionAngleHigh() const;

constexpr float_t& __cordl_internal_get_DetectionAngleHigh() ;

constexpr float_t const& __cordl_internal_get_DetectionAngleLow() const;

constexpr float_t& __cordl_internal_get_DetectionAngleLow() ;

constexpr float_t const& __cordl_internal_get_DetectionRange() const;

constexpr float_t& __cordl_internal_get_DetectionRange() ;

constexpr float_t const& __cordl_internal_get_InitialDiffusion() const;

constexpr float_t& __cordl_internal_get_InitialDiffusion() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_IsLowQualityLevelSettings() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_IsLowQualityLevelSettings() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_Layers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_Layers() ;

constexpr int32_t const& __cordl_internal_get_LowQualityRaysAmount() const;

constexpr int32_t& __cordl_internal_get_LowQualityRaysAmount() ;

constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig> const& __cordl_internal_get_MaterialConfig() const;

constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig>& __cordl_internal_get_MaterialConfig() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_Mixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_Mixer() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_OutdoornessCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_OutdoornessCurve() ;

constexpr int32_t const& __cordl_internal_get_RaysAmount() const;

constexpr int32_t& __cordl_internal_get_RaysAmount() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_RoomSizeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_RoomSizeCurve() ;

constexpr void __cordl_internal_set_ActualRange(float_t  value) ;

constexpr void __cordl_internal_set_Basic(bool  value) ;

constexpr void __cordl_internal_set_CollideInfoSize(int32_t  value) ;

constexpr void __cordl_internal_set_DetectionAngleHigh(float_t  value) ;

constexpr void __cordl_internal_set_DetectionAngleLow(float_t  value) ;

constexpr void __cordl_internal_set_DetectionRange(float_t  value) ;

constexpr void __cordl_internal_set_InitialDiffusion(float_t  value) ;

constexpr void __cordl_internal_set_IsLowQualityLevelSettings(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_Layers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_LowQualityRaysAmount(int32_t  value) ;

constexpr void __cordl_internal_set_MaterialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value) ;

constexpr void __cordl_internal_set_Mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set_OutdoornessCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_RaysAmount(int32_t  value) ;

constexpr void __cordl_internal_set_RoomSizeCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x18049f080, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicReverbConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicReverbConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicReverbConfig(DynamicReverbConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicReverbConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicReverbConfig(DynamicReverbConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17595};

/// @brief Field Mixer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___Mixer;

/// @brief Field Basic, offset: 0x20, size: 0x1, def value: None
 bool  ___Basic;

/// @brief Field Layers, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___Layers;

/// @brief Field RaysAmount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___RaysAmount;

/// @brief Field LowQualityRaysAmount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___LowQualityRaysAmount;

/// @brief Field CollideInfoSize, offset: 0x30, size: 0x4, def value: None
 int32_t  ___CollideInfoSize;

/// @brief Field DetectionRange, offset: 0x34, size: 0x4, def value: None
 float_t  ___DetectionRange;

/// @brief Field ActualRange, offset: 0x38, size: 0x4, def value: None
 float_t  ___ActualRange;

/// @brief Field DetectionAngleLow, offset: 0x3c, size: 0x4, def value: None
 float_t  ___DetectionAngleLow;

/// @brief Field DetectionAngleHigh, offset: 0x40, size: 0x4, def value: None
 float_t  ___DetectionAngleHigh;

/// @brief Field InitialDiffusion, offset: 0x44, size: 0x4, def value: None
 float_t  ___InitialDiffusion;

/// @brief Field MaterialConfig, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioMaterialConfig>  ___MaterialConfig;

/// @brief Field RoomSizeCurve, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___RoomSizeCurve;

/// @brief Field OutdoornessCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___OutdoornessCurve;

/// @brief Field IsLowQualityLevelSettings, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<bool>  ___IsLowQualityLevelSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___Mixer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___Basic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___Layers) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___RaysAmount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___LowQualityRaysAmount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___CollideInfoSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___DetectionRange) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___ActualRange) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___DetectionAngleLow) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___DetectionAngleHigh) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___InitialDiffusion) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___MaterialConfig) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___RoomSizeCurve) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___OutdoornessCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicReverbConfig, ___IsLowQualityLevelSettings) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DynamicReverbConfig) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
