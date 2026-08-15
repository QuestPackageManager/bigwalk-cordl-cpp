#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioLayer)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioLayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioLayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioLayer*, "", "AudioLayer");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioLayer
class CORDL_TYPE AudioLayer : public ::System::Object {
public:
// Declarations
/// @brief Field Asset, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Asset, put=__cordl_internal_set_Asset)) ::UnityW<::GlobalNamespace::AudioAsset>  Asset;

/// @brief Field Delay, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Delay, put=__cordl_internal_set_Delay)) float_t  Delay;

/// @brief Field IntensityVolume, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_IntensityVolume, put=__cordl_internal_set_IntensityVolume)) bool  IntensityVolume;

/// @brief Field IntensityVolumeCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_IntensityVolumeCurve, put=__cordl_internal_set_IntensityVolumeCurve)) ::UnityEngine::AnimationCurve*  IntensityVolumeCurve;

/// @brief Field MaxIntensity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxIntensity, put=__cordl_internal_set_MaxIntensity)) float_t  MaxIntensity;

/// @brief Field MinIntensity, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinIntensity, put=__cordl_internal_set_MinIntensity)) float_t  MinIntensity;

/// @brief Field Volume, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Volume, put=__cordl_internal_set_Volume)) ::GlobalNamespace::AudioVolume*  Volume;

/// @brief Method GetIntensityVolume, addr 0x18047ba90, size 0x60, virtual false, abstract: false, final false
inline float_t GetIntensityVolume(float_t  normalizedIntensity) ;

/// @brief Method InIntensityRange, addr 0x18047baf0, size 0x50, virtual false, abstract: false, final false
inline bool InIntensityRange(float_t  normalizedIntensity) ;

static inline ::GlobalNamespace::AudioLayer* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_Asset() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_Asset() ;

constexpr float_t const& __cordl_internal_get_Delay() const;

constexpr float_t& __cordl_internal_get_Delay() ;

constexpr bool const& __cordl_internal_get_IntensityVolume() const;

constexpr bool& __cordl_internal_get_IntensityVolume() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_IntensityVolumeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_IntensityVolumeCurve() ;

constexpr float_t const& __cordl_internal_get_MaxIntensity() const;

constexpr float_t& __cordl_internal_get_MaxIntensity() ;

constexpr float_t const& __cordl_internal_get_MinIntensity() const;

constexpr float_t& __cordl_internal_get_MinIntensity() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get_Volume() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get_Volume() ;

constexpr void __cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_Delay(float_t  value) ;

constexpr void __cordl_internal_set_IntensityVolume(bool  value) ;

constexpr void __cordl_internal_set_IntensityVolumeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_MaxIntensity(float_t  value) ;

constexpr void __cordl_internal_set_MinIntensity(float_t  value) ;

constexpr void __cordl_internal_set_Volume(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method .ctor, addr 0x18047bb40, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioLayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioLayer(AudioLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioLayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioLayer(AudioLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17524};

/// @brief Field Asset, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___Asset;

/// @brief Field Delay, offset: 0x18, size: 0x4, def value: None
 float_t  ___Delay;

/// @brief Field MinIntensity, offset: 0x1c, size: 0x4, def value: None
 float_t  ___MinIntensity;

/// @brief Field MaxIntensity, offset: 0x20, size: 0x4, def value: None
 float_t  ___MaxIntensity;

/// @brief Field IntensityVolume, offset: 0x24, size: 0x1, def value: None
 bool  ___IntensityVolume;

/// @brief Field IntensityVolumeCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___IntensityVolumeCurve;

/// @brief Field Volume, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ___Volume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioLayer, ___Asset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayer, ___Delay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayer, ___MinIntensity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayer, ___MaxIntensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayer, ___IntensityVolume) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayer, ___IntensityVolumeCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioLayer, ___Volume) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioLayer) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
