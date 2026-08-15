#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceEmitters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AmbienceEmitters)
namespace GlobalNamespace {
class AmbiencePlayer;
}
namespace GlobalNamespace {
class AmbienceSound;
}
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
struct SplineSampleStruct;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct AmbienceEmitters;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AmbienceEmitters);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbienceEmitters, "", "AmbienceEmitters");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AmbienceEmitters
struct CORDL_TYPE AmbienceEmitters {
public:
// Declarations
/// @brief Method DirectionBending, addr 0x180316910, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 DirectionBending(::UnityEngine::Vector3  currentDir, float_t  indoorness, ::ArrayW<::UnityEngine::Vector2>  directionOffsets) ;

/// @brief Method Dispose, addr 0x180316ae0, size 0x1e0, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method GetCenterX, addr 0x180316cc0, size 0x90, virtual false, abstract: false, final false
inline bool GetCenterX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method GetSide1X, addr 0x180316d50, size 0x90, virtual false, abstract: false, final false
inline bool GetSide1X(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method GetSide2X, addr 0x180316de0, size 0x90, virtual false, abstract: false, final false
inline bool GetSide2X(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method UpdatePositionAndVolume, addr 0x180316e70, size 0x1720, virtual false, abstract: false, final false
inline void UpdatePositionAndVolume(::GlobalNamespace::SplineSampleStruct  sample, ::GlobalNamespace::AmbiencePlayer*  player, float_t  deltaTime, float_t  heightVol, float_t  sideToTop) ;

/// @brief Method .ctor, addr 0x180318590, size 0x330, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AmbienceSound*  data, ::UnityEngine::Transform*  parentTransform) ;

// Ctor Parameters []
// @brief default ctor
constexpr AmbienceEmitters() ;

// Ctor Parameters [CppParam { name: "SoundData", ty: "::GlobalNamespace::AmbienceSound*", modifiers: "", def_value: None }, CppParam { name: "CenterTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "SideTransform1", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "SideTransform2", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "CenterEvent", ty: "::GlobalNamespace::AudioEvent*", modifiers: "", def_value: None }, CppParam { name: "SideEvent1", ty: "::GlobalNamespace::AudioEvent*", modifiers: "", def_value: None }, CppParam { name: "SideEvent2", ty: "::GlobalNamespace::AudioEvent*", modifiers: "", def_value: None }, CppParam { name: "CenterVolume", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: None }, CppParam { name: "SideVolume1", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: None }, CppParam { name: "SideVolume2", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: None }, CppParam { name: "CenterOccVol", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: None }, CppParam { name: "SideOccVol1", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: None }, CppParam { name: "SideOccVol2", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: None }, CppParam { name: "VegetationDensityVol", ty: "::GlobalNamespace::AudioVolume*", modifiers: "", def_value: None }, CppParam { name: "RawVegetationIntensity", ty: "float_t", modifiers: "", def_value: None }]
constexpr AmbienceEmitters(::GlobalNamespace::AmbienceSound*  SoundData, ::UnityW<::UnityEngine::Transform>  CenterTransform, ::UnityW<::UnityEngine::Transform>  SideTransform1, ::UnityW<::UnityEngine::Transform>  SideTransform2, ::GlobalNamespace::AudioEvent*  CenterEvent, ::GlobalNamespace::AudioEvent*  SideEvent1, ::GlobalNamespace::AudioEvent*  SideEvent2, ::GlobalNamespace::AudioVolume*  CenterVolume, ::GlobalNamespace::AudioVolume*  SideVolume1, ::GlobalNamespace::AudioVolume*  SideVolume2, ::GlobalNamespace::AudioVolume*  CenterOccVol, ::GlobalNamespace::AudioVolume*  SideOccVol1, ::GlobalNamespace::AudioVolume*  SideOccVol2, ::GlobalNamespace::AudioVolume*  VegetationDensityVol, float_t  RawVegetationIntensity) noexcept;

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(0.01f)};

/// @brief Field LERP_SPEED_ATTEN offset 0xffffffff size 0x4
static constexpr float_t  LERP_SPEED_ATTEN{static_cast<float_t>(4.0f)};

/// @brief Field LERP_SPEED_OCC offset 0xffffffff size 0x4
static constexpr float_t  LERP_SPEED_OCC{static_cast<float_t>(3.0f)};

/// @brief Field MAX_SPREAD offset 0xffffffff size 0x4
static constexpr float_t  MAX_SPREAD{static_cast<float_t>(120.0f)};

/// @brief Field MIN_SPREAD offset 0xffffffff size 0x4
static constexpr float_t  MIN_SPREAD{static_cast<float_t>(60.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4786};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field SoundData, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::AmbienceSound*  SoundData;

/// @brief Field CenterTransform, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  CenterTransform;

/// @brief Field SideTransform1, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  SideTransform1;

/// @brief Field SideTransform2, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  SideTransform2;

/// @brief Field CenterEvent, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  CenterEvent;

/// @brief Field SideEvent1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  SideEvent1;

/// @brief Field SideEvent2, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  SideEvent2;

/// @brief Field CenterVolume, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  CenterVolume;

/// @brief Field SideVolume1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  SideVolume1;

/// @brief Field SideVolume2, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  SideVolume2;

/// @brief Field CenterOccVol, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  CenterOccVol;

/// @brief Field SideOccVol1, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  SideOccVol1;

/// @brief Field SideOccVol2, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  SideOccVol2;

/// @brief Field VegetationDensityVol, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  VegetationDensityVol;

/// @brief Field RawVegetationIntensity, offset: 0x70, size: 0x4, def value: None
 float_t  RawVegetationIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, SoundData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, CenterTransform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, SideTransform1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, SideTransform2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, CenterEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, SideEvent1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, SideEvent2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, CenterVolume) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, SideVolume1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, SideVolume2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, CenterOccVol) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, SideOccVol1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, SideOccVol2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, VegetationDensityVol) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceEmitters, RawVegetationIntensity) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbienceEmitters) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
