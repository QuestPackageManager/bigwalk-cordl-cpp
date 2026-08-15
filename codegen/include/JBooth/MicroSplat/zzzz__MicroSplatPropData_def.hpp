#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/MicroSplatPropData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MicroSplatPropData)
namespace JBooth::MicroSplat {
struct MicroSplatPropData_PerTexColor;
}
namespace JBooth::MicroSplat {
struct MicroSplatPropData_PerTexFloat;
}
namespace JBooth::MicroSplat {
struct MicroSplatPropData_PerTexVector2;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace JBooth::MicroSplat {
struct MicroSplatPropData_PerTexColor;
}
namespace JBooth::MicroSplat {
struct MicroSplatPropData_PerTexFloat;
}
namespace JBooth::MicroSplat {
struct MicroSplatPropData_PerTexVector2;
}
namespace JBooth::MicroSplat {
class MicroSplatPropData;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroSplat::MicroSplatPropData_PerTexColor);
MARK_VAL_T(::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat);
MARK_VAL_T(::JBooth::MicroSplat::MicroSplatPropData_PerTexVector2);
MARK_REF_T(::JBooth::MicroSplat::MicroSplatPropData*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::MicroSplatPropData_PerTexColor, "JBooth.MicroSplat", "MicroSplatPropData/PerTexColor");
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat, "JBooth.MicroSplat", "MicroSplatPropData/PerTexFloat");
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::MicroSplatPropData_PerTexVector2, "JBooth.MicroSplat", "MicroSplatPropData/PerTexVector2");
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::MicroSplatPropData*, "JBooth.MicroSplat", "MicroSplatPropData");
// Dependencies 
namespace JBooth::MicroSplat {
// Is value type: true
// CS Name: JBooth.MicroSplat.MicroSplatPropData/PerTexVector2
struct CORDL_TYPE MicroSplatPropData_PerTexVector2 {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MicroSplatPropData_PerTexVector2_Unwrapped
enum struct __MicroSplatPropData_PerTexVector2_Unwrapped : int32_t {
__E_SplatUVScale = static_cast<int32_t>(0x0),
__E_SplatUVOffset = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MicroSplatPropData_PerTexVector2_Unwrapped () const noexcept {
return static_cast<__MicroSplatPropData_PerTexVector2_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatPropData_PerTexVector2() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MicroSplatPropData_PerTexVector2(int32_t  value__) noexcept;

/// @brief Field SplatUVOffset value: I32(2)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexVector2 const SplatUVOffset;

/// @brief Field SplatUVScale value: I32(0)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexVector2 const SplatUVScale;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20809};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData_PerTexVector2, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::MicroSplatPropData_PerTexVector2) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
// Dependencies 
namespace JBooth::MicroSplat {
// Is value type: true
// CS Name: JBooth.MicroSplat.MicroSplatPropData/PerTexColor
struct CORDL_TYPE MicroSplatPropData_PerTexColor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MicroSplatPropData_PerTexColor_Unwrapped
enum struct __MicroSplatPropData_PerTexColor_Unwrapped : int32_t {
__E_Tint = static_cast<int32_t>(0x4),
__E_SSSRTint = static_cast<int32_t>(0x48),
__E_TraxTint = static_cast<int32_t>(0x54),
__E_RimLightColor = static_cast<int32_t>(0x6c),
__E_OutlineColor = static_cast<int32_t>(0x70),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MicroSplatPropData_PerTexColor_Unwrapped () const noexcept {
return static_cast<__MicroSplatPropData_PerTexColor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatPropData_PerTexColor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MicroSplatPropData_PerTexColor(int32_t  value__) noexcept;

/// @brief Field OutlineColor value: I32(112)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexColor const OutlineColor;

/// @brief Field RimLightColor value: I32(108)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexColor const RimLightColor;

/// @brief Field SSSRTint value: I32(72)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexColor const SSSRTint;

/// @brief Field Tint value: I32(4)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexColor const Tint;

/// @brief Field TraxTint value: I32(84)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexColor const TraxTint;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20810};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData_PerTexColor, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::MicroSplatPropData_PerTexColor) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
// Dependencies 
namespace JBooth::MicroSplat {
// Is value type: true
// CS Name: JBooth.MicroSplat.MicroSplatPropData/PerTexFloat
struct CORDL_TYPE MicroSplatPropData_PerTexFloat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MicroSplatPropData_PerTexFloat_Unwrapped
enum struct __MicroSplatPropData_PerTexFloat_Unwrapped : int32_t {
__E_InterpolationContrast = static_cast<int32_t>(0x5),
__E_NormalStrength = static_cast<int32_t>(0x8),
__E_Smoothness = static_cast<int32_t>(0x9),
__E_AO = static_cast<int32_t>(0xa),
__E_Metallic = static_cast<int32_t>(0xb),
__E_Brightness = static_cast<int32_t>(0xc),
__E_Contrast = static_cast<int32_t>(0xd),
__E_Porosity = static_cast<int32_t>(0xe),
__E_Foam = static_cast<int32_t>(0xf),
__E_DetailNoiseStrength = static_cast<int32_t>(0x10),
__E_DistanceNoiseStrength = static_cast<int32_t>(0x11),
__E_DistanceResample = static_cast<int32_t>(0x12),
__E_DisplacementMip = static_cast<int32_t>(0x13),
__E_GeoTexStrength = static_cast<int32_t>(0x14),
__E_GeoTintStrength = static_cast<int32_t>(0x15),
__E_GeoNormalStrength = static_cast<int32_t>(0x16),
__E_GlobalSmoothMetalAOStength = static_cast<int32_t>(0x17),
__E_DisplacementStength = static_cast<int32_t>(0x18),
__E_DisplacementBias = static_cast<int32_t>(0x19),
__E_DisplacementOffset = static_cast<int32_t>(0x1a),
__E_GlobalEmisStength = static_cast<int32_t>(0x1b),
__E_NoiseNormal0Strength = static_cast<int32_t>(0x1c),
__E_NoiseNormal1Strength = static_cast<int32_t>(0x1d),
__E_NoiseNormal2Strength = static_cast<int32_t>(0x1e),
__E_WindParticulateStrength = static_cast<int32_t>(0x1f),
__E_SnowAmount = static_cast<int32_t>(0x20),
__E_GlitterAmount = static_cast<int32_t>(0x21),
__E_GeoHeightFilter = static_cast<int32_t>(0x22),
__E_GeoHeightFilterStrength = static_cast<int32_t>(0x23),
__E_TriplanarMode = static_cast<int32_t>(0x24),
__E_TriplanarContrast = static_cast<int32_t>(0x25),
__E_StochatsicEnabled = static_cast<int32_t>(0x26),
__E_Saturation = static_cast<int32_t>(0x27),
__E_TextureClusterContrast = static_cast<int32_t>(0x28),
__E_TextureClusterBoost = static_cast<int32_t>(0x29),
__E_HeightOffset = static_cast<int32_t>(0x2a),
__E_HeightContrast = static_cast<int32_t>(0x2b),
__E_AntiTileArrayNormalStrength = static_cast<int32_t>(0x38),
__E_AntiTileArrayDetailStrength = static_cast<int32_t>(0x39),
__E_AntiTileArrayDistanceStrength = static_cast<int32_t>(0x3a),
__E_DisplaceShaping = static_cast<int32_t>(0x3b),
__E_UVRotation = static_cast<int32_t>(0x40),
__E_TriplanarRotationX = static_cast<int32_t>(0x41),
__E_TriplanarRotationY = static_cast<int32_t>(0x42),
__E_FuzzyShadingCore = static_cast<int32_t>(0x44),
__E_FuzzyShadingEdge = static_cast<int32_t>(0x45),
__E_FuzzyShadingPower = static_cast<int32_t>(0x46),
__E_SSSThickness = static_cast<int32_t>(0x4b),
__E_CurveInterpolator = static_cast<int32_t>(0x4c),
__E_TraxDigDepth = static_cast<int32_t>(0x50),
__E_TraxOpacity = static_cast<int32_t>(0x51),
__E_TraxNormalStrength = static_cast<int32_t>(0x52),
__E_NoiseHeightFrequency = static_cast<int32_t>(0x58),
__E_NoiseHeightAmplitude = static_cast<int32_t>(0x59),
__E_NoiseUVFrequency = static_cast<int32_t>(0x5a),
__E_NoiseUVAmplitude = static_cast<int32_t>(0x5b),
__E_ColorIntensity = static_cast<int32_t>(0x5c),
__E_ScatterBlendMode = static_cast<int32_t>(0x62),
__E_ScatterAlphaMult = static_cast<int32_t>(0x63),
__E_ScatterDistanceFade = static_cast<int32_t>(0x68),
__E_RimPower = static_cast<int32_t>(0x69),
__E_RimIntensity = static_cast<int32_t>(0x6f),
__E_OutlineIntensity = static_cast<int32_t>(0x73),
__E_SlopeTextureAngle = static_cast<int32_t>(0x74),
__E_SlopeTextureContrast = static_cast<int32_t>(0x75),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MicroSplatPropData_PerTexFloat_Unwrapped () const noexcept {
return static_cast<__MicroSplatPropData_PerTexFloat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatPropData_PerTexFloat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MicroSplatPropData_PerTexFloat(int32_t  value__) noexcept;

/// @brief Field AO value: I32(10)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const AO;

/// @brief Field AntiTileArrayDetailStrength value: I32(57)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const AntiTileArrayDetailStrength;

/// @brief Field AntiTileArrayDistanceStrength value: I32(58)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const AntiTileArrayDistanceStrength;

/// @brief Field AntiTileArrayNormalStrength value: I32(56)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const AntiTileArrayNormalStrength;

/// @brief Field Brightness value: I32(12)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const Brightness;

/// @brief Field ColorIntensity value: I32(92)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const ColorIntensity;

/// @brief Field Contrast value: I32(13)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const Contrast;

/// @brief Field CurveInterpolator value: I32(76)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const CurveInterpolator;

/// @brief Field DetailNoiseStrength value: I32(16)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const DetailNoiseStrength;

/// @brief Field DisplaceShaping value: I32(59)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const DisplaceShaping;

/// @brief Field DisplacementBias value: I32(25)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const DisplacementBias;

/// @brief Field DisplacementMip value: I32(19)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const DisplacementMip;

/// @brief Field DisplacementOffset value: I32(26)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const DisplacementOffset;

/// @brief Field DisplacementStength value: I32(24)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const DisplacementStength;

/// @brief Field DistanceNoiseStrength value: I32(17)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const DistanceNoiseStrength;

/// @brief Field DistanceResample value: I32(18)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const DistanceResample;

/// @brief Field Foam value: I32(15)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const Foam;

/// @brief Field FuzzyShadingCore value: I32(68)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const FuzzyShadingCore;

/// @brief Field FuzzyShadingEdge value: I32(69)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const FuzzyShadingEdge;

/// @brief Field FuzzyShadingPower value: I32(70)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const FuzzyShadingPower;

/// @brief Field GeoHeightFilter value: I32(34)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const GeoHeightFilter;

/// @brief Field GeoHeightFilterStrength value: I32(35)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const GeoHeightFilterStrength;

/// @brief Field GeoNormalStrength value: I32(22)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const GeoNormalStrength;

/// @brief Field GeoTexStrength value: I32(20)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const GeoTexStrength;

/// @brief Field GeoTintStrength value: I32(21)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const GeoTintStrength;

/// @brief Field GlitterAmount value: I32(33)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const GlitterAmount;

/// @brief Field GlobalEmisStength value: I32(27)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const GlobalEmisStength;

/// @brief Field GlobalSmoothMetalAOStength value: I32(23)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const GlobalSmoothMetalAOStength;

/// @brief Field HeightContrast value: I32(43)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const HeightContrast;

/// @brief Field HeightOffset value: I32(42)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const HeightOffset;

/// @brief Field InterpolationContrast value: I32(5)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const InterpolationContrast;

/// @brief Field Metallic value: I32(11)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const Metallic;

/// @brief Field NoiseHeightAmplitude value: I32(89)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const NoiseHeightAmplitude;

/// @brief Field NoiseHeightFrequency value: I32(88)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const NoiseHeightFrequency;

/// @brief Field NoiseNormal0Strength value: I32(28)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const NoiseNormal0Strength;

/// @brief Field NoiseNormal1Strength value: I32(29)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const NoiseNormal1Strength;

/// @brief Field NoiseNormal2Strength value: I32(30)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const NoiseNormal2Strength;

/// @brief Field NoiseUVAmplitude value: I32(91)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const NoiseUVAmplitude;

/// @brief Field NoiseUVFrequency value: I32(90)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const NoiseUVFrequency;

/// @brief Field NormalStrength value: I32(8)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const NormalStrength;

/// @brief Field OutlineIntensity value: I32(115)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const OutlineIntensity;

/// @brief Field Porosity value: I32(14)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const Porosity;

/// @brief Field RimIntensity value: I32(111)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const RimIntensity;

/// @brief Field RimPower value: I32(105)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const RimPower;

/// @brief Field SSSThickness value: I32(75)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const SSSThickness;

/// @brief Field Saturation value: I32(39)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const Saturation;

/// @brief Field ScatterAlphaMult value: I32(99)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const ScatterAlphaMult;

/// @brief Field ScatterBlendMode value: I32(98)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const ScatterBlendMode;

/// @brief Field ScatterDistanceFade value: I32(104)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const ScatterDistanceFade;

/// @brief Field SlopeTextureAngle value: I32(116)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const SlopeTextureAngle;

/// @brief Field SlopeTextureContrast value: I32(117)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const SlopeTextureContrast;

/// @brief Field Smoothness value: I32(9)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const Smoothness;

/// @brief Field SnowAmount value: I32(32)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const SnowAmount;

/// @brief Field StochatsicEnabled value: I32(38)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const StochatsicEnabled;

/// @brief Field TextureClusterBoost value: I32(41)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const TextureClusterBoost;

/// @brief Field TextureClusterContrast value: I32(40)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const TextureClusterContrast;

/// @brief Field TraxDigDepth value: I32(80)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const TraxDigDepth;

/// @brief Field TraxNormalStrength value: I32(82)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const TraxNormalStrength;

/// @brief Field TraxOpacity value: I32(81)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const TraxOpacity;

/// @brief Field TriplanarContrast value: I32(37)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const TriplanarContrast;

/// @brief Field TriplanarMode value: I32(36)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const TriplanarMode;

/// @brief Field TriplanarRotationX value: I32(65)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const TriplanarRotationX;

/// @brief Field TriplanarRotationY value: I32(66)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const TriplanarRotationY;

/// @brief Field UVRotation value: I32(64)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const UVRotation;

/// @brief Field WindParticulateStrength value: I32(31)
static ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat const WindParticulateStrength;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20811};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.MicroSplatPropData
class CORDL_TYPE MicroSplatPropData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using PerTexColor = ::JBooth::MicroSplat::MicroSplatPropData_PerTexColor;

using PerTexFloat = ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat;

using PerTexVector2 = ::JBooth::MicroSplat::MicroSplatPropData_PerTexVector2;

/// @brief Field geoCurve, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_geoCurve, put=__cordl_internal_set_geoCurve)) ::UnityEngine::AnimationCurve*  geoCurve;

/// @brief Field geoSlopeFilter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_geoSlopeFilter, put=__cordl_internal_set_geoSlopeFilter)) ::UnityEngine::AnimationCurve*  geoSlopeFilter;

/// @brief Field geoSlopeTex, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_geoSlopeTex, put=__cordl_internal_set_geoSlopeTex)) ::UnityW<::UnityEngine::Texture2D>  geoSlopeTex;

/// @brief Field geoTex, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_geoTex, put=__cordl_internal_set_geoTex)) ::UnityW<::UnityEngine::Texture2D>  geoTex;

/// @brief Field globalSlopeFilter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalSlopeFilter, put=__cordl_internal_set_globalSlopeFilter)) ::UnityEngine::AnimationCurve*  globalSlopeFilter;

/// @brief Field globalSlopeTex, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_globalSlopeTex, put=__cordl_internal_set_globalSlopeTex)) ::UnityW<::UnityEngine::Texture2D>  globalSlopeTex;

/// @brief Field maxTextures, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTextures, put=__cordl_internal_set_maxTextures)) int32_t  maxTextures;

/// @brief Field propTex, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_propTex, put=__cordl_internal_set_propTex)) ::UnityW<::UnityEngine::Texture2D>  propTex;

/// @brief Field values, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_values, put=__cordl_internal_set_values)) ::ArrayW<::UnityEngine::Color>  values;

/// @brief Method ClearPropTex, addr 0x181400c10, size 0x40, virtual false, abstract: false, final false
inline void ClearPropTex() ;

/// @brief Method GetAllValues, addr 0x181400c50, size 0xb0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> GetAllValues(int32_t  textureIndex) ;

/// @brief Method GetGeoCurve, addr 0x181400d00, size 0x100, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> GetGeoCurve() ;

/// @brief Method GetGeoSlopeFilter, addr 0x181400e00, size 0x100, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> GetGeoSlopeFilter() ;

/// @brief Method GetGlobalSlopeFilter, addr 0x181400f00, size 0x100, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> GetGlobalSlopeFilter() ;

/// @brief Method GetTexture, addr 0x181401000, size 0x180, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> GetTexture() ;

/// @brief Method GetValue, addr 0x181401180, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetValue(int32_t  x, int32_t  y) ;

static inline ::JBooth::MicroSplat::MicroSplatPropData* New_ctor() ;

/// @brief Method RevisionData, addr 0x1814011f0, size 0x3a0, virtual false, abstract: false, final false
inline void RevisionData() ;

/// @brief Method SetAllValues, addr 0x181401590, size 0xa0, virtual false, abstract: false, final false
inline void SetAllValues(int32_t  textureIndex, ::ArrayW<::UnityEngine::Color>  c) ;

/// @brief Method SetValue, addr 0x1814019d0, size 0x80, virtual false, abstract: false, final false
inline void SetValue(int32_t  textureIndex, ::JBooth::MicroSplat::MicroSplatPropData_PerTexColor  channel, ::UnityEngine::Color  value) ;

/// @brief Method SetValue, addr 0x181401870, size 0x160, virtual false, abstract: false, final false
inline void SetValue(int32_t  textureIndex, ::JBooth::MicroSplat::MicroSplatPropData_PerTexFloat  channel, float_t  value) ;

/// @brief Method SetValue, addr 0x181401630, size 0x100, virtual false, abstract: false, final false
inline void SetValue(int32_t  textureIndex, ::JBooth::MicroSplat::MicroSplatPropData_PerTexVector2  channel, ::UnityEngine::Vector2  value) ;

/// @brief Method SetValue, addr 0x181401730, size 0x70, virtual false, abstract: false, final false
inline void SetValue(int32_t  x, int32_t  y, ::UnityEngine::Color  c) ;

/// @brief Method SetValue, addr 0x1814017a0, size 0xd0, virtual false, abstract: false, final false
inline void SetValue(int32_t  x, int32_t  y, int32_t  channel, ::UnityEngine::Vector2  value) ;

/// @brief Method SetValue, addr 0x181401a50, size 0x130, virtual false, abstract: false, final false
inline void SetValue(int32_t  x, int32_t  y, int32_t  channel, float_t  value) ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_geoCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_geoCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_geoSlopeFilter() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_geoSlopeFilter() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_geoSlopeTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_geoSlopeTex() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_geoTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_geoTex() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_globalSlopeFilter() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_globalSlopeFilter() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_globalSlopeTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_globalSlopeTex() ;

constexpr int32_t const& __cordl_internal_get_maxTextures() const;

constexpr int32_t& __cordl_internal_get_maxTextures() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_propTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_propTex() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_values() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_values() ;

constexpr void __cordl_internal_set_geoCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_geoSlopeFilter(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_geoSlopeTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_geoTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_globalSlopeFilter(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_globalSlopeTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_maxTextures(int32_t  value) ;

constexpr void __cordl_internal_set_propTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_values(::ArrayW<::UnityEngine::Color>  value) ;

/// @brief Method .ctor, addr 0x181401b80, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MicroSplatPropData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatPropData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MicroSplatPropData(MicroSplatPropData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MicroSplatPropData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MicroSplatPropData(MicroSplatPropData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20812};

/// @brief Field sMaxAttributes offset 0xffffffff size 0x4
static constexpr int32_t  sMaxAttributes{static_cast<int32_t>(0x20)};

/// @brief Field values, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___values;

/// @brief Field propTex, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___propTex;

/// @brief Field geoCurve, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___geoCurve;

/// @brief Field geoTex, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___geoTex;

/// @brief Field geoSlopeFilter, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___geoSlopeFilter;

/// @brief Field geoSlopeTex, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___geoSlopeTex;

/// @brief Field globalSlopeFilter, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___globalSlopeFilter;

/// @brief Field globalSlopeTex, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___globalSlopeTex;

/// @brief Field maxTextures, offset: 0x58, size: 0x4, def value: None
 int32_t  ___maxTextures;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData, ___values) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData, ___propTex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData, ___geoCurve) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData, ___geoTex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData, ___geoSlopeFilter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData, ___geoSlopeTex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData, ___globalSlopeFilter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData, ___globalSlopeTex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::MicroSplatPropData, ___maxTextures) == 0x58, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::MicroSplatPropData) == 0x60, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
