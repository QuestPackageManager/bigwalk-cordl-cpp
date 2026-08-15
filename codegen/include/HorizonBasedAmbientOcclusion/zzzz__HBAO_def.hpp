#pragma once
// IWYU pragma private; include "HorizonBasedAmbientOcclusion/HBAO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderingPath_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HBAO)
namespace HorizonBasedAmbientOcclusion {
struct HBAO_AOSettings;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_BlurSettings;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_BlurType;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_ColorBleedingSettings;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_DebugMode;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_Deinterleaving;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_GeneralSettings;
}
namespace HorizonBasedAmbientOcclusion {
class HBAO_MersenneTwister;
}
namespace HorizonBasedAmbientOcclusion {
class HBAO_MinMaxSliderAttribute;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_NoiseType;
}
namespace HorizonBasedAmbientOcclusion {
class HBAO_Pass;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_PerPixelNormals;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_PipelineStage;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_Preset;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_Presets;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_Quality;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_Resolution;
}
namespace HorizonBasedAmbientOcclusion {
class HBAO_SettingsGroup;
}
namespace HorizonBasedAmbientOcclusion {
class HBAO_ShaderProperties;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_StereoRenderingMode;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_TemporalFilterSettings;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_VarianceClipping;
}
namespace UnityEngine::Rendering {
struct CameraEvent;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace HorizonBasedAmbientOcclusion {
struct HBAO_BlurType;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_DebugMode;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_Deinterleaving;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_NoiseType;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_PerPixelNormals;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_PipelineStage;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_Preset;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_Quality;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_Resolution;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_StereoRenderingMode;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_VarianceClipping;
}
namespace HorizonBasedAmbientOcclusion {
class HBAO;
}
namespace HorizonBasedAmbientOcclusion {
class HBAO_MersenneTwister;
}
namespace HorizonBasedAmbientOcclusion {
class HBAO_MinMaxSliderAttribute;
}
namespace HorizonBasedAmbientOcclusion {
class HBAO_Pass;
}
namespace HorizonBasedAmbientOcclusion {
class HBAO_SettingsGroup;
}
namespace HorizonBasedAmbientOcclusion {
class HBAO_ShaderProperties;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_AOSettings;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_BlurSettings;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_ColorBleedingSettings;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_GeneralSettings;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_Presets;
}
namespace HorizonBasedAmbientOcclusion {
struct HBAO_TemporalFilterSettings;
}
// Write type traits
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_BlurType);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_DebugMode);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_NoiseType);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_PipelineStage);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_Preset);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_Quality);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_Resolution);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping);
MARK_REF_T(::HorizonBasedAmbientOcclusion::HBAO*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::HBAO_MersenneTwister*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::HBAO_Pass*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_AOSettings);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_Presets);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings);
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_BlurType, "HorizonBasedAmbientOcclusion", "HBAO/BlurType");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_DebugMode, "HorizonBasedAmbientOcclusion", "HBAO/DebugMode");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving, "HorizonBasedAmbientOcclusion", "HBAO/Deinterleaving");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_NoiseType, "HorizonBasedAmbientOcclusion", "HBAO/NoiseType");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals, "HorizonBasedAmbientOcclusion", "HBAO/PerPixelNormals");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_PipelineStage, "HorizonBasedAmbientOcclusion", "HBAO/PipelineStage");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_Preset, "HorizonBasedAmbientOcclusion", "HBAO/Preset");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_Quality, "HorizonBasedAmbientOcclusion", "HBAO/Quality");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_Resolution, "HorizonBasedAmbientOcclusion", "HBAO/Resolution");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode, "HorizonBasedAmbientOcclusion", "HBAO/StereoRenderingMode");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping, "HorizonBasedAmbientOcclusion", "HBAO/VarianceClipping");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO*, "HorizonBasedAmbientOcclusion", "HBAO");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_MersenneTwister*, "HorizonBasedAmbientOcclusion", "HBAO/MersenneTwister");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute*, "HorizonBasedAmbientOcclusion", "HBAO/MinMaxSliderAttribute");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_Pass*, "HorizonBasedAmbientOcclusion", "HBAO/Pass");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup*, "HorizonBasedAmbientOcclusion", "HBAO/SettingsGroup");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties*, "HorizonBasedAmbientOcclusion", "HBAO/ShaderProperties");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, "HorizonBasedAmbientOcclusion", "HBAO/AOSettings");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings, "HorizonBasedAmbientOcclusion", "HBAO/BlurSettings");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings, "HorizonBasedAmbientOcclusion", "HBAO/ColorBleedingSettings");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings, "HorizonBasedAmbientOcclusion", "HBAO/GeneralSettings");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_Presets, "HorizonBasedAmbientOcclusion", "HBAO/Presets");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings, "HorizonBasedAmbientOcclusion", "HBAO/TemporalFilterSettings");
// Dependencies 
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/Preset
struct CORDL_TYPE HBAO_Preset {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_Preset_Unwrapped
enum struct __HBAO_Preset_Unwrapped : int32_t {
__E_FastestPerformance = static_cast<int32_t>(0x0),
__E_FastPerformance = static_cast<int32_t>(0x1),
__E_Normal = static_cast<int32_t>(0x2),
__E_HighQuality = static_cast<int32_t>(0x3),
__E_HighestQuality = static_cast<int32_t>(0x4),
__E_Custom = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_Preset_Unwrapped () const noexcept {
return static_cast<__HBAO_Preset_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_Preset() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_Preset(int32_t  value__) noexcept;

/// @brief Field Custom value: I32(5)
static ::HorizonBasedAmbientOcclusion::HBAO_Preset const Custom;

/// @brief Field FastPerformance value: I32(1)
static ::HorizonBasedAmbientOcclusion::HBAO_Preset const FastPerformance;

/// @brief Field FastestPerformance value: I32(0)
static ::HorizonBasedAmbientOcclusion::HBAO_Preset const FastestPerformance;

/// @brief Field HighQuality value: I32(3)
static ::HorizonBasedAmbientOcclusion::HBAO_Preset const HighQuality;

/// @brief Field HighestQuality value: I32(4)
static ::HorizonBasedAmbientOcclusion::HBAO_Preset const HighestQuality;

/// @brief Field Normal value: I32(2)
static ::HorizonBasedAmbientOcclusion::HBAO_Preset const Normal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20556};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_Preset, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_Preset) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies 
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/PipelineStage
struct CORDL_TYPE HBAO_PipelineStage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_PipelineStage_Unwrapped
enum struct __HBAO_PipelineStage_Unwrapped : int32_t {
__E_BeforeImageEffectsOpaque = static_cast<int32_t>(0x0),
__E_AfterLighting = static_cast<int32_t>(0x1),
__E_BeforeReflections = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_PipelineStage_Unwrapped () const noexcept {
return static_cast<__HBAO_PipelineStage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_PipelineStage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_PipelineStage(int32_t  value__) noexcept;

/// @brief Field AfterLighting value: I32(1)
static ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage const AfterLighting;

/// @brief Field BeforeImageEffectsOpaque value: I32(0)
static ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage const BeforeImageEffectsOpaque;

/// @brief Field BeforeReflections value: I32(2)
static ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage const BeforeReflections;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20557};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_PipelineStage, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_PipelineStage) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies 
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/Quality
struct CORDL_TYPE HBAO_Quality {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_Quality_Unwrapped
enum struct __HBAO_Quality_Unwrapped : int32_t {
__E_Lowest = static_cast<int32_t>(0x0),
__E_Low = static_cast<int32_t>(0x1),
__E_Medium = static_cast<int32_t>(0x2),
__E_High = static_cast<int32_t>(0x3),
__E_Highest = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_Quality_Unwrapped () const noexcept {
return static_cast<__HBAO_Quality_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_Quality() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_Quality(int32_t  value__) noexcept;

/// @brief Field High value: I32(3)
static ::HorizonBasedAmbientOcclusion::HBAO_Quality const High;

/// @brief Field Highest value: I32(4)
static ::HorizonBasedAmbientOcclusion::HBAO_Quality const Highest;

/// @brief Field Low value: I32(1)
static ::HorizonBasedAmbientOcclusion::HBAO_Quality const Low;

/// @brief Field Lowest value: I32(0)
static ::HorizonBasedAmbientOcclusion::HBAO_Quality const Lowest;

/// @brief Field Medium value: I32(2)
static ::HorizonBasedAmbientOcclusion::HBAO_Quality const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20558};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_Quality, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_Quality) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies 
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/Resolution
struct CORDL_TYPE HBAO_Resolution {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_Resolution_Unwrapped
enum struct __HBAO_Resolution_Unwrapped : int32_t {
__E_Full = static_cast<int32_t>(0x0),
__E_Half = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_Resolution_Unwrapped () const noexcept {
return static_cast<__HBAO_Resolution_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_Resolution() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_Resolution(int32_t  value__) noexcept;

/// @brief Field Full value: I32(0)
static ::HorizonBasedAmbientOcclusion::HBAO_Resolution const Full;

/// @brief Field Half value: I32(1)
static ::HorizonBasedAmbientOcclusion::HBAO_Resolution const Half;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20559};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_Resolution, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_Resolution) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies 
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/NoiseType
struct CORDL_TYPE HBAO_NoiseType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_NoiseType_Unwrapped
enum struct __HBAO_NoiseType_Unwrapped : int32_t {
__E_Dither = static_cast<int32_t>(0x0),
__E_InterleavedGradientNoise = static_cast<int32_t>(0x1),
__E_SpatialDistribution = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_NoiseType_Unwrapped () const noexcept {
return static_cast<__HBAO_NoiseType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_NoiseType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_NoiseType(int32_t  value__) noexcept;

/// @brief Field Dither value: I32(0)
static ::HorizonBasedAmbientOcclusion::HBAO_NoiseType const Dither;

/// @brief Field InterleavedGradientNoise value: I32(1)
static ::HorizonBasedAmbientOcclusion::HBAO_NoiseType const InterleavedGradientNoise;

/// @brief Field SpatialDistribution value: I32(2)
static ::HorizonBasedAmbientOcclusion::HBAO_NoiseType const SpatialDistribution;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20560};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_NoiseType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_NoiseType) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies 
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/Deinterleaving
struct CORDL_TYPE HBAO_Deinterleaving {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_Deinterleaving_Unwrapped
enum struct __HBAO_Deinterleaving_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_x4 = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_Deinterleaving_Unwrapped () const noexcept {
return static_cast<__HBAO_Deinterleaving_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_Deinterleaving() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_Deinterleaving(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(0)
static ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving const Disabled;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20561};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field x4 value: I32(1)
static ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving const x4;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies 
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/DebugMode
struct CORDL_TYPE HBAO_DebugMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_DebugMode_Unwrapped
enum struct __HBAO_DebugMode_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_AOOnly = static_cast<int32_t>(0x1),
__E_ColorBleedingOnly = static_cast<int32_t>(0x2),
__E_SplitWithoutAOAndWithAO = static_cast<int32_t>(0x3),
__E_SplitWithAOAndAOOnly = static_cast<int32_t>(0x4),
__E_SplitWithoutAOAndAOOnly = static_cast<int32_t>(0x5),
__E_ViewNormals = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_DebugMode_Unwrapped () const noexcept {
return static_cast<__HBAO_DebugMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_DebugMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_DebugMode(int32_t  value__) noexcept;

/// @brief Field AOOnly value: I32(1)
static ::HorizonBasedAmbientOcclusion::HBAO_DebugMode const AOOnly;

/// @brief Field ColorBleedingOnly value: I32(2)
static ::HorizonBasedAmbientOcclusion::HBAO_DebugMode const ColorBleedingOnly;

/// @brief Field Disabled value: I32(0)
static ::HorizonBasedAmbientOcclusion::HBAO_DebugMode const Disabled;

/// @brief Field SplitWithAOAndAOOnly value: I32(4)
static ::HorizonBasedAmbientOcclusion::HBAO_DebugMode const SplitWithAOAndAOOnly;

/// @brief Field SplitWithoutAOAndAOOnly value: I32(5)
static ::HorizonBasedAmbientOcclusion::HBAO_DebugMode const SplitWithoutAOAndAOOnly;

/// @brief Field SplitWithoutAOAndWithAO value: I32(3)
static ::HorizonBasedAmbientOcclusion::HBAO_DebugMode const SplitWithoutAOAndWithAO;

/// @brief Field ViewNormals value: I32(6)
static ::HorizonBasedAmbientOcclusion::HBAO_DebugMode const ViewNormals;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20562};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_DebugMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_DebugMode) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies 
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/BlurType
struct CORDL_TYPE HBAO_BlurType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_BlurType_Unwrapped
enum struct __HBAO_BlurType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Narrow = static_cast<int32_t>(0x1),
__E_Medium = static_cast<int32_t>(0x2),
__E_Wide = static_cast<int32_t>(0x3),
__E_ExtraWide = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_BlurType_Unwrapped () const noexcept {
return static_cast<__HBAO_BlurType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_BlurType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_BlurType(int32_t  value__) noexcept;

/// @brief Field ExtraWide value: I32(4)
static ::HorizonBasedAmbientOcclusion::HBAO_BlurType const ExtraWide;

/// @brief Field Medium value: I32(2)
static ::HorizonBasedAmbientOcclusion::HBAO_BlurType const Medium;

/// @brief Field Narrow value: I32(1)
static ::HorizonBasedAmbientOcclusion::HBAO_BlurType const Narrow;

/// @brief Field None value: I32(0)
static ::HorizonBasedAmbientOcclusion::HBAO_BlurType const None;

/// @brief Field Wide value: I32(3)
static ::HorizonBasedAmbientOcclusion::HBAO_BlurType const Wide;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20563};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_BlurType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_BlurType) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies 
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/PerPixelNormals
struct CORDL_TYPE HBAO_PerPixelNormals {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_PerPixelNormals_Unwrapped
enum struct __HBAO_PerPixelNormals_Unwrapped : int32_t {
__E_GBuffer = static_cast<int32_t>(0x0),
__E_Camera = static_cast<int32_t>(0x1),
__E_Reconstruct = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_PerPixelNormals_Unwrapped () const noexcept {
return static_cast<__HBAO_PerPixelNormals_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_PerPixelNormals() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_PerPixelNormals(int32_t  value__) noexcept;

/// @brief Field Camera value: I32(1)
static ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals const Camera;

/// @brief Field GBuffer value: I32(0)
static ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals const GBuffer;

/// @brief Field Reconstruct value: I32(2)
static ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals const Reconstruct;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20564};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies 
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/VarianceClipping
struct CORDL_TYPE HBAO_VarianceClipping {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_VarianceClipping_Unwrapped
enum struct __HBAO_VarianceClipping_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E__4Tap = static_cast<int32_t>(0x1),
__E__8Tap = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_VarianceClipping_Unwrapped () const noexcept {
return static_cast<__HBAO_VarianceClipping_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_VarianceClipping() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_VarianceClipping(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(0)
static ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping const Disabled;

/// @brief Field _4Tap value: I32(1)
static ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping const _4Tap;

/// @brief Field _8Tap value: I32(2)
static ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping const _8Tap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20565};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies HorizonBasedAmbientOcclusion.HBAO::Preset
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/Presets
struct CORDL_TYPE HBAO_Presets {
public:
// Declarations
/// @brief Method get_defaults, addr 0x1802edfe0, size 0x10, virtual false, abstract: false, final false
static inline ::HorizonBasedAmbientOcclusion::HBAO_Presets get_defaults() ;

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_Presets() ;

// Ctor Parameters [CppParam { name: "preset", ty: "::HorizonBasedAmbientOcclusion::HBAO_Preset", modifiers: "", def_value: None }]
constexpr HBAO_Presets(::HorizonBasedAmbientOcclusion::HBAO_Preset  preset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20566};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field preset, offset: 0x0, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_Preset  preset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_Presets, preset) == 0x0, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_Presets) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies HorizonBasedAmbientOcclusion.HBAO::DebugMode, HorizonBasedAmbientOcclusion.HBAO::Deinterleaving, HorizonBasedAmbientOcclusion.HBAO::NoiseType, HorizonBasedAmbientOcclusion.HBAO::PipelineStage, HorizonBasedAmbientOcclusion.HBAO::Quality, HorizonBasedAmbientOcclusion.HBAO::Resolution
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/GeneralSettings
struct CORDL_TYPE HBAO_GeneralSettings {
public:
// Declarations
/// @brief Method get_defaults, addr 0x1813e8210, size 0x20, virtual false, abstract: false, final false
static inline ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings get_defaults() ;

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_GeneralSettings() ;

// Ctor Parameters [CppParam { name: "pipelineStage", ty: "::HorizonBasedAmbientOcclusion::HBAO_PipelineStage", modifiers: "", def_value: None }, CppParam { name: "quality", ty: "::HorizonBasedAmbientOcclusion::HBAO_Quality", modifiers: "", def_value: None }, CppParam { name: "deinterleaving", ty: "::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving", modifiers: "", def_value: None }, CppParam { name: "resolution", ty: "::HorizonBasedAmbientOcclusion::HBAO_Resolution", modifiers: "", def_value: None }, CppParam { name: "noiseType", ty: "::HorizonBasedAmbientOcclusion::HBAO_NoiseType", modifiers: "", def_value: None }, CppParam { name: "debugMode", ty: "::HorizonBasedAmbientOcclusion::HBAO_DebugMode", modifiers: "", def_value: None }]
constexpr HBAO_GeneralSettings(::HorizonBasedAmbientOcclusion::HBAO_PipelineStage  pipelineStage, ::HorizonBasedAmbientOcclusion::HBAO_Quality  quality, ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving  deinterleaving, ::HorizonBasedAmbientOcclusion::HBAO_Resolution  resolution, ::HorizonBasedAmbientOcclusion::HBAO_NoiseType  noiseType, ::HorizonBasedAmbientOcclusion::HBAO_DebugMode  debugMode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20567};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field pipelineStage, offset: 0x0, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage  pipelineStage;

/// @brief Field quality, offset: 0x4, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_Quality  quality;

/// @brief Field deinterleaving, offset: 0x8, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving  deinterleaving;

/// @brief Field resolution, offset: 0xc, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_Resolution  resolution;

/// @brief Field noiseType, offset: 0x10, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_NoiseType  noiseType;

/// @brief Field debugMode, offset: 0x14, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_DebugMode  debugMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings, pipelineStage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings, quality) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings, deinterleaving) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings, resolution) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings, noiseType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings, debugMode) == 0x14, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings) == 0x18, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies HorizonBasedAmbientOcclusion.HBAO::PerPixelNormals, UnityEngine.Color
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/AOSettings
struct CORDL_TYPE HBAO_AOSettings {
public:
// Declarations
/// @brief Method get_defaults, addr 0x1813e8070, size 0xf0, virtual false, abstract: false, final false
static inline ::HorizonBasedAmbientOcclusion::HBAO_AOSettings get_defaults() ;

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_AOSettings() ;

// Ctor Parameters [CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxRadiusPixels", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bias", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "intensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "useMultiBounce", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "multiBounceInfluence", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "offscreenSamplesContribution", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "distanceFalloff", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "perPixelNormals", ty: "::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals", modifiers: "", def_value: None }, CppParam { name: "baseColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr HBAO_AOSettings(float_t  radius, float_t  maxRadiusPixels, float_t  bias, float_t  intensity, bool  useMultiBounce, float_t  multiBounceInfluence, float_t  offscreenSamplesContribution, float_t  maxDistance, float_t  distanceFalloff, ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals  perPixelNormals, ::UnityEngine::Color  baseColor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20568};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field radius, offset: 0x0, size: 0x4, def value: None
 float_t  radius;

/// @brief Field maxRadiusPixels, offset: 0x4, size: 0x4, def value: None
 float_t  maxRadiusPixels;

/// @brief Field bias, offset: 0x8, size: 0x4, def value: None
 float_t  bias;

/// @brief Field intensity, offset: 0xc, size: 0x4, def value: None
 float_t  intensity;

/// @brief Field useMultiBounce, offset: 0x10, size: 0x1, def value: None
 bool  useMultiBounce;

/// @brief Field multiBounceInfluence, offset: 0x14, size: 0x4, def value: None
 float_t  multiBounceInfluence;

/// @brief Field offscreenSamplesContribution, offset: 0x18, size: 0x4, def value: None
 float_t  offscreenSamplesContribution;

/// @brief Field maxDistance, offset: 0x1c, size: 0x4, def value: None
 float_t  maxDistance;

/// @brief Field distanceFalloff, offset: 0x20, size: 0x4, def value: None
 float_t  distanceFalloff;

/// @brief Field perPixelNormals, offset: 0x24, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals  perPixelNormals;

/// @brief Field baseColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  baseColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, radius) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, maxRadiusPixels) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, bias) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, intensity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, useMultiBounce) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, multiBounceInfluence) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, offscreenSamplesContribution) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, maxDistance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, distanceFalloff) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, perPixelNormals) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings, baseColor) == 0x28, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_AOSettings) == 0x38, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies HorizonBasedAmbientOcclusion.HBAO::VarianceClipping
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/TemporalFilterSettings
struct CORDL_TYPE HBAO_TemporalFilterSettings {
public:
// Declarations
/// @brief Method get_defaults, addr 0x1813f0a20, size 0x20, virtual false, abstract: false, final false
static inline ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings get_defaults() ;

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_TemporalFilterSettings() ;

// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "varianceClipping", ty: "::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping", modifiers: "", def_value: None }]
constexpr HBAO_TemporalFilterSettings(bool  enabled, ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping  varianceClipping) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20569};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
 bool  enabled;

/// @brief Field varianceClipping, offset: 0x4, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping  varianceClipping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings, varianceClipping) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings) == 0x8, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies HorizonBasedAmbientOcclusion.HBAO::BlurType
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/BlurSettings
struct CORDL_TYPE HBAO_BlurSettings {
public:
// Declarations
/// @brief Method get_defaults, addr 0x1813e8160, size 0x20, virtual false, abstract: false, final false
static inline ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings get_defaults() ;

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_BlurSettings() ;

// Ctor Parameters [CppParam { name: "type", ty: "::HorizonBasedAmbientOcclusion::HBAO_BlurType", modifiers: "", def_value: None }, CppParam { name: "sharpness", ty: "float_t", modifiers: "", def_value: None }]
constexpr HBAO_BlurSettings(::HorizonBasedAmbientOcclusion::HBAO_BlurType  type, float_t  sharpness) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20570};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_BlurType  type;

/// @brief Field sharpness, offset: 0x4, size: 0x4, def value: None
 float_t  sharpness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings, sharpness) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings) == 0x8, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies UnityEngine.Vector2
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/ColorBleedingSettings
struct CORDL_TYPE HBAO_ColorBleedingSettings {
public:
// Declarations
/// @brief Method get_defaults, addr 0x1813e8180, size 0x90, virtual false, abstract: false, final false
static inline ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings get_defaults() ;

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_ColorBleedingSettings() ;

// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "saturation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "albedoMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "brightnessMask", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "brightnessMaskRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr HBAO_ColorBleedingSettings(bool  enabled, float_t  saturation, float_t  albedoMultiplier, float_t  brightnessMask, ::UnityEngine::Vector2  brightnessMaskRange) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20571};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
 bool  enabled;

/// @brief Field saturation, offset: 0x4, size: 0x4, def value: None
 float_t  saturation;

/// @brief Field albedoMultiplier, offset: 0x8, size: 0x4, def value: None
 float_t  albedoMultiplier;

/// @brief Field brightnessMask, offset: 0xc, size: 0x4, def value: None
 float_t  brightnessMask;

/// @brief Field brightnessMaskRange, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  brightnessMaskRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings, saturation) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings, albedoMultiplier) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings, brightnessMask) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings, brightnessMaskRange) == 0x10, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings) == 0x18, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies System.Attribute
namespace HorizonBasedAmbientOcclusion {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.HBAO/SettingsGroup
class CORDL_TYPE HBAO_SettingsGroup : public ::System::Attribute {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_SettingsGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_SettingsGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_SettingsGroup(HBAO_SettingsGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_SettingsGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_SettingsGroup(HBAO_SettingsGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20572};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup) == 0x10, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies UnityEngine.PropertyAttribute
namespace HorizonBasedAmbientOcclusion {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.HBAO/MinMaxSliderAttribute
class CORDL_TYPE HBAO_MinMaxSliderAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief Field max, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) float_t  max;

/// @brief Field min, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) float_t  min;

static inline ::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute* New_ctor(float_t  min, float_t  max) ;

constexpr float_t const& __cordl_internal_get_max() const;

constexpr float_t& __cordl_internal_get_max() ;

constexpr float_t const& __cordl_internal_get_min() const;

constexpr float_t& __cordl_internal_get_min() ;

constexpr void __cordl_internal_set_max(float_t  value) ;

constexpr void __cordl_internal_set_min(float_t  value) ;

/// @brief Method .ctor, addr 0x1813f00f0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(float_t  min, float_t  max) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_MinMaxSliderAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_MinMaxSliderAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_MinMaxSliderAttribute(HBAO_MinMaxSliderAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_MinMaxSliderAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_MinMaxSliderAttribute(HBAO_MinMaxSliderAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20573};

/// @brief Field max, offset: 0x14, size: 0x4, def value: None
 float_t  ___max;

/// @brief Field min, offset: 0x18, size: 0x4, def value: None
 float_t  ___min;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute, ___max) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute, ___min) == 0x18, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies System.Object
namespace HorizonBasedAmbientOcclusion {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.HBAO/Pass
class CORDL_TYPE HBAO_Pass : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_Pass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_Pass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_Pass(HBAO_Pass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_Pass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_Pass(HBAO_Pass const& ) = delete;

/// @brief Field AO offset 0xffffffff size 0x4
static constexpr int32_t  AO{static_cast<int32_t>(0x0)};

/// @brief Field AO_Deinterleaved offset 0xffffffff size 0x4
static constexpr int32_t  AO_Deinterleaved{static_cast<int32_t>(0x1)};

/// @brief Field Atlas_AO_Deinterleaved offset 0xffffffff size 0x4
static constexpr int32_t  Atlas_AO_Deinterleaved{static_cast<int32_t>(0x4)};

/// @brief Field Blur offset 0xffffffff size 0x4
static constexpr int32_t  Blur{static_cast<int32_t>(0x6)};

/// @brief Field Composite offset 0xffffffff size 0x4
static constexpr int32_t  Composite{static_cast<int32_t>(0x9)};

/// @brief Field Composite_AfterLighting offset 0xffffffff size 0x4
static constexpr int32_t  Composite_AfterLighting{static_cast<int32_t>(0xa)};

/// @brief Field Composite_BeforeReflections offset 0xffffffff size 0x4
static constexpr int32_t  Composite_BeforeReflections{static_cast<int32_t>(0xb)};

/// @brief Field Composite_BlendAO offset 0xffffffff size 0x4
static constexpr int32_t  Composite_BlendAO{static_cast<int32_t>(0xc)};

/// @brief Field Composite_BlendCB offset 0xffffffff size 0x4
static constexpr int32_t  Composite_BlendCB{static_cast<int32_t>(0xd)};

/// @brief Field Copy offset 0xffffffff size 0x4
static constexpr int32_t  Copy{static_cast<int32_t>(0x8)};

/// @brief Field Debug_ViewNormals offset 0xffffffff size 0x4
static constexpr int32_t  Debug_ViewNormals{static_cast<int32_t>(0xe)};

/// @brief Field Deinterleave_Depth offset 0xffffffff size 0x4
static constexpr int32_t  Deinterleave_Depth{static_cast<int32_t>(0x2)};

/// @brief Field Deinterleave_Normals offset 0xffffffff size 0x4
static constexpr int32_t  Deinterleave_Normals{static_cast<int32_t>(0x3)};

/// @brief Field Reinterleave_AO offset 0xffffffff size 0x4
static constexpr int32_t  Reinterleave_AO{static_cast<int32_t>(0x5)};

/// @brief Field Temporal_Filter offset 0xffffffff size 0x4
static constexpr int32_t  Temporal_Filter{static_cast<int32_t>(0x7)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20574};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_Pass) == 0x10, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies System.Object
namespace HorizonBasedAmbientOcclusion {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.HBAO/ShaderProperties
class CORDL_TYPE HBAO_ShaderProperties : public ::System::Object {
public:
// Declarations
/// @brief Field albedoMultiplier, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_albedoMultiplier, put=setStaticF_albedoMultiplier)) int32_t  albedoMultiplier;

/// @brief Field angleBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_angleBias, put=setStaticF_angleBias)) int32_t  angleBias;

/// @brief Field aoMultiplier, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_aoMultiplier, put=setStaticF_aoMultiplier)) int32_t  aoMultiplier;

/// @brief Field aoSliceTex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_aoSliceTex, put=setStaticF_aoSliceTex)) ::ArrayW<int32_t>  aoSliceTex;

/// @brief Field aoTexelSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_aoTexelSize, put=setStaticF_aoTexelSize)) int32_t  aoTexelSize;

/// @brief Field atlasOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_atlasOffset, put=setStaticF_atlasOffset)) int32_t  atlasOffset;

/// @brief Field baseColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_baseColor, put=setStaticF_baseColor)) int32_t  baseColor;

/// @brief Field blurDeltaUV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_blurDeltaUV, put=setStaticF_blurDeltaUV)) int32_t  blurDeltaUV;

/// @brief Field blurSharpness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_blurSharpness, put=setStaticF_blurSharpness)) int32_t  blurSharpness;

/// @brief Field colorBleedBrightnessMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_colorBleedBrightnessMask, put=setStaticF_colorBleedBrightnessMask)) int32_t  colorBleedBrightnessMask;

/// @brief Field colorBleedBrightnessMaskRange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_colorBleedBrightnessMaskRange, put=setStaticF_colorBleedBrightnessMaskRange)) int32_t  colorBleedBrightnessMaskRange;

/// @brief Field colorBleedSaturation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_colorBleedSaturation, put=setStaticF_colorBleedSaturation)) int32_t  colorBleedSaturation;

/// @brief Field deinterleaveOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_deinterleaveOffset, put=setStaticF_deinterleaveOffset)) ::ArrayW<int32_t>  deinterleaveOffset;

/// @brief Field deinterleavedAOTexelSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_deinterleavedAOTexelSize, put=setStaticF_deinterleavedAOTexelSize)) int32_t  deinterleavedAOTexelSize;

/// @brief Field depthSliceTex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_depthSliceTex, put=setStaticF_depthSliceTex)) ::ArrayW<int32_t>  depthSliceTex;

/// @brief Field depthTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_depthTex, put=setStaticF_depthTex)) int32_t  depthTex;

/// @brief Field distanceFalloff, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_distanceFalloff, put=setStaticF_distanceFalloff)) int32_t  distanceFalloff;

/// @brief Field hbaoTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_hbaoTex, put=setStaticF_hbaoTex)) int32_t  hbaoTex;

/// @brief Field inputTexelSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_inputTexelSize, put=setStaticF_inputTexelSize)) int32_t  inputTexelSize;

/// @brief Field intensity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_intensity, put=setStaticF_intensity)) int32_t  intensity;

/// @brief Field jitter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_jitter, put=setStaticF_jitter)) int32_t  jitter;

/// @brief Field mainTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_mainTex, put=setStaticF_mainTex)) int32_t  mainTex;

/// @brief Field maxDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxDistance, put=setStaticF_maxDistance)) int32_t  maxDistance;

/// @brief Field maxRadiusPixels, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxRadiusPixels, put=setStaticF_maxRadiusPixels)) int32_t  maxRadiusPixels;

/// @brief Field multiBounceInfluence, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_multiBounceInfluence, put=setStaticF_multiBounceInfluence)) int32_t  multiBounceInfluence;

/// @brief Field negInvRadius2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_negInvRadius2, put=setStaticF_negInvRadius2)) int32_t  negInvRadius2;

/// @brief Field noiseTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_noiseTex, put=setStaticF_noiseTex)) int32_t  noiseTex;

/// @brief Field normalsSliceTex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_normalsSliceTex, put=setStaticF_normalsSliceTex)) ::ArrayW<int32_t>  normalsSliceTex;

/// @brief Field normalsTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_normalsTex, put=setStaticF_normalsTex)) int32_t  normalsTex;

/// @brief Field offscreenSamplesContrib, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_offscreenSamplesContrib, put=setStaticF_offscreenSamplesContrib)) int32_t  offscreenSamplesContrib;

/// @brief Field radius, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_radius, put=setStaticF_radius)) int32_t  radius;

/// @brief Field reinterleavedAOTexelSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_reinterleavedAOTexelSize, put=setStaticF_reinterleavedAOTexelSize)) int32_t  reinterleavedAOTexelSize;

/// @brief Field targetScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_targetScale, put=setStaticF_targetScale)) int32_t  targetScale;

/// @brief Field tempTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_tempTex, put=setStaticF_tempTex)) int32_t  tempTex;

/// @brief Field tempTex2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_tempTex2, put=setStaticF_tempTex2)) int32_t  tempTex2;

/// @brief Field temporalParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_temporalParams, put=setStaticF_temporalParams)) int32_t  temporalParams;

/// @brief Field uvToView, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_uvToView, put=setStaticF_uvToView)) int32_t  uvToView;

/// @brief Field uvTransform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_uvTransform, put=setStaticF_uvTransform)) int32_t  uvTransform;

/// @brief Method GetBlurRadiusKeyword, addr 0x1813f0130, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetBlurRadiusKeyword(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings  settings) ;

/// @brief Method GetColorBleedingKeyword, addr 0x1813f0170, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetColorBleedingKeyword(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings  settings) ;

/// @brief Method GetDebugKeyword, addr 0x1813f0190, size 0x70, virtual false, abstract: false, final false
static inline ::StringW GetDebugKeyword(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  settings) ;

/// @brief Method GetDeinterleavingKeyword, addr 0x1813f0200, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetDeinterleavingKeyword(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  settings) ;

/// @brief Method GetLightingLogEncodedKeyword, addr 0x1813f0220, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetLightingLogEncodedKeyword(bool  hdr) ;

/// @brief Method GetMultibounceKeyword, addr 0x1813f0240, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetMultibounceKeyword(::HorizonBasedAmbientOcclusion::HBAO_AOSettings  settings) ;

/// @brief Method GetNoiseKeyword, addr 0x1813f0260, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetNoiseKeyword(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  settings) ;

/// @brief Method GetOffscreenSamplesContributionKeyword, addr 0x1813f0280, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetOffscreenSamplesContributionKeyword(::HorizonBasedAmbientOcclusion::HBAO_AOSettings  settings) ;

/// @brief Method GetOrthographicOrDeferredKeyword, addr 0x1813f02a0, size 0x20, virtual false, abstract: false, final false
static inline ::StringW GetOrthographicOrDeferredKeyword(bool  orthographic, ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  settings) ;

/// @brief Method GetPerPixelNormalsKeyword, addr 0x1813f02c0, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetPerPixelNormalsKeyword(::HorizonBasedAmbientOcclusion::HBAO_AOSettings  settings) ;

/// @brief Method GetQualityKeyword, addr 0x1813f02f0, size 0x50, virtual false, abstract: false, final false
static inline ::StringW GetQualityKeyword(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  settings) ;

/// @brief Method GetVarianceClippingKeyword, addr 0x1813f0340, size 0x30, virtual false, abstract: false, final false
static inline ::StringW GetVarianceClippingKeyword(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings  settings) ;

static inline int32_t getStaticF_albedoMultiplier() ;

static inline int32_t getStaticF_angleBias() ;

static inline int32_t getStaticF_aoMultiplier() ;

static inline ::ArrayW<int32_t> getStaticF_aoSliceTex() ;

static inline int32_t getStaticF_aoTexelSize() ;

static inline int32_t getStaticF_atlasOffset() ;

static inline int32_t getStaticF_baseColor() ;

static inline int32_t getStaticF_blurDeltaUV() ;

static inline int32_t getStaticF_blurSharpness() ;

static inline int32_t getStaticF_colorBleedBrightnessMask() ;

static inline int32_t getStaticF_colorBleedBrightnessMaskRange() ;

static inline int32_t getStaticF_colorBleedSaturation() ;

static inline ::ArrayW<int32_t> getStaticF_deinterleaveOffset() ;

static inline int32_t getStaticF_deinterleavedAOTexelSize() ;

static inline ::ArrayW<int32_t> getStaticF_depthSliceTex() ;

static inline int32_t getStaticF_depthTex() ;

static inline int32_t getStaticF_distanceFalloff() ;

static inline int32_t getStaticF_hbaoTex() ;

static inline int32_t getStaticF_inputTexelSize() ;

static inline int32_t getStaticF_intensity() ;

static inline int32_t getStaticF_jitter() ;

static inline int32_t getStaticF_mainTex() ;

static inline int32_t getStaticF_maxDistance() ;

static inline int32_t getStaticF_maxRadiusPixels() ;

static inline int32_t getStaticF_multiBounceInfluence() ;

static inline int32_t getStaticF_negInvRadius2() ;

static inline int32_t getStaticF_noiseTex() ;

static inline ::ArrayW<int32_t> getStaticF_normalsSliceTex() ;

static inline int32_t getStaticF_normalsTex() ;

static inline int32_t getStaticF_offscreenSamplesContrib() ;

static inline int32_t getStaticF_radius() ;

static inline int32_t getStaticF_reinterleavedAOTexelSize() ;

static inline int32_t getStaticF_targetScale() ;

static inline int32_t getStaticF_tempTex() ;

static inline int32_t getStaticF_tempTex2() ;

static inline int32_t getStaticF_temporalParams() ;

static inline int32_t getStaticF_uvToView() ;

static inline int32_t getStaticF_uvTransform() ;

static inline void setStaticF_albedoMultiplier(int32_t  value) ;

static inline void setStaticF_angleBias(int32_t  value) ;

static inline void setStaticF_aoMultiplier(int32_t  value) ;

static inline void setStaticF_aoSliceTex(::ArrayW<int32_t>  value) ;

static inline void setStaticF_aoTexelSize(int32_t  value) ;

static inline void setStaticF_atlasOffset(int32_t  value) ;

static inline void setStaticF_baseColor(int32_t  value) ;

static inline void setStaticF_blurDeltaUV(int32_t  value) ;

static inline void setStaticF_blurSharpness(int32_t  value) ;

static inline void setStaticF_colorBleedBrightnessMask(int32_t  value) ;

static inline void setStaticF_colorBleedBrightnessMaskRange(int32_t  value) ;

static inline void setStaticF_colorBleedSaturation(int32_t  value) ;

static inline void setStaticF_deinterleaveOffset(::ArrayW<int32_t>  value) ;

static inline void setStaticF_deinterleavedAOTexelSize(int32_t  value) ;

static inline void setStaticF_depthSliceTex(::ArrayW<int32_t>  value) ;

static inline void setStaticF_depthTex(int32_t  value) ;

static inline void setStaticF_distanceFalloff(int32_t  value) ;

static inline void setStaticF_hbaoTex(int32_t  value) ;

static inline void setStaticF_inputTexelSize(int32_t  value) ;

static inline void setStaticF_intensity(int32_t  value) ;

static inline void setStaticF_jitter(int32_t  value) ;

static inline void setStaticF_mainTex(int32_t  value) ;

static inline void setStaticF_maxDistance(int32_t  value) ;

static inline void setStaticF_maxRadiusPixels(int32_t  value) ;

static inline void setStaticF_multiBounceInfluence(int32_t  value) ;

static inline void setStaticF_negInvRadius2(int32_t  value) ;

static inline void setStaticF_noiseTex(int32_t  value) ;

static inline void setStaticF_normalsSliceTex(::ArrayW<int32_t>  value) ;

static inline void setStaticF_normalsTex(int32_t  value) ;

static inline void setStaticF_offscreenSamplesContrib(int32_t  value) ;

static inline void setStaticF_radius(int32_t  value) ;

static inline void setStaticF_reinterleavedAOTexelSize(int32_t  value) ;

static inline void setStaticF_targetScale(int32_t  value) ;

static inline void setStaticF_tempTex(int32_t  value) ;

static inline void setStaticF_tempTex2(int32_t  value) ;

static inline void setStaticF_temporalParams(int32_t  value) ;

static inline void setStaticF_uvToView(int32_t  value) ;

static inline void setStaticF_uvTransform(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_ShaderProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_ShaderProperties", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_ShaderProperties(HBAO_ShaderProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_ShaderProperties", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_ShaderProperties(HBAO_ShaderProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20575};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties) == 0x10, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies 
namespace HorizonBasedAmbientOcclusion {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.HBAO/StereoRenderingMode
struct CORDL_TYPE HBAO_StereoRenderingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_StereoRenderingMode_Unwrapped
enum struct __HBAO_StereoRenderingMode_Unwrapped : int32_t {
__E_MultiPass = static_cast<int32_t>(0x0),
__E_SinglePassInstanced = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_StereoRenderingMode_Unwrapped () const noexcept {
return static_cast<__HBAO_StereoRenderingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_StereoRenderingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_StereoRenderingMode(int32_t  value__) noexcept;

/// @brief Field MultiPass value: I32(0)
static ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode const MultiPass;

/// @brief Field SinglePassInstanced value: I32(1)
static ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode const SinglePassInstanced;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20576};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies System.Object
namespace HorizonBasedAmbientOcclusion {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.HBAO/MersenneTwister
class CORDL_TYPE HBAO_MersenneTwister : public ::System::Object {
public:
// Declarations
/// @brief Field Numbers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Numbers, put=setStaticF_Numbers)) ::ArrayW<float_t>  Numbers;

static inline ::ArrayW<float_t> getStaticF_Numbers() ;

static inline void setStaticF_Numbers(::ArrayW<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_MersenneTwister() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_MersenneTwister", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_MersenneTwister(HBAO_MersenneTwister && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_MersenneTwister", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_MersenneTwister(HBAO_MersenneTwister const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20577};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO_MersenneTwister) == 0x10, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
// Dependencies HorizonBasedAmbientOcclusion.HBAO::AOSettings, HorizonBasedAmbientOcclusion.HBAO::BlurSettings, HorizonBasedAmbientOcclusion.HBAO::BlurType, HorizonBasedAmbientOcclusion.HBAO::ColorBleedingSettings, HorizonBasedAmbientOcclusion.HBAO::DebugMode, HorizonBasedAmbientOcclusion.HBAO::Deinterleaving, HorizonBasedAmbientOcclusion.HBAO::GeneralSettings, HorizonBasedAmbientOcclusion.HBAO::NoiseType, HorizonBasedAmbientOcclusion.HBAO::PipelineStage, HorizonBasedAmbientOcclusion.HBAO::Presets, HorizonBasedAmbientOcclusion.HBAO::Resolution, HorizonBasedAmbientOcclusion.HBAO::StereoRenderingMode, HorizonBasedAmbientOcclusion.HBAO::TemporalFilterSettings, System.Nullable`1<T>, UnityEngine.MonoBehaviour, UnityEngine.RenderTextureDescriptor, UnityEngine.RenderingPath, UnityEngine.Vector2, UnityEngine.Vector4
namespace HorizonBasedAmbientOcclusion {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.HBAO
class CORDL_TYPE HBAO : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AOSettings = ::HorizonBasedAmbientOcclusion::HBAO_AOSettings;

using BlurSettings = ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings;

using BlurType = ::HorizonBasedAmbientOcclusion::HBAO_BlurType;

using ColorBleedingSettings = ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings;

using DebugMode = ::HorizonBasedAmbientOcclusion::HBAO_DebugMode;

using Deinterleaving = ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving;

using GeneralSettings = ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings;

using MersenneTwister = ::HorizonBasedAmbientOcclusion::HBAO_MersenneTwister;

using MinMaxSliderAttribute = ::HorizonBasedAmbientOcclusion::HBAO_MinMaxSliderAttribute;

using NoiseType = ::HorizonBasedAmbientOcclusion::HBAO_NoiseType;

using Pass = ::HorizonBasedAmbientOcclusion::HBAO_Pass;

using PerPixelNormals = ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals;

using PipelineStage = ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage;

using Preset = ::HorizonBasedAmbientOcclusion::HBAO_Preset;

using Presets = ::HorizonBasedAmbientOcclusion::HBAO_Presets;

using Quality = ::HorizonBasedAmbientOcclusion::HBAO_Quality;

using Resolution = ::HorizonBasedAmbientOcclusion::HBAO_Resolution;

using SettingsGroup = ::HorizonBasedAmbientOcclusion::HBAO_SettingsGroup;

using ShaderProperties = ::HorizonBasedAmbientOcclusion::HBAO_ShaderProperties;

using StereoRenderingMode = ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode;

using TemporalFilterSettings = ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings;

using VarianceClipping = ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping;

/// @brief Field <aoHeight>k__BackingField, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__aoHeight_k__BackingField, put=__cordl_internal_set__aoHeight_k__BackingField)) int32_t  _aoHeight_k__BackingField;

/// @brief Field <aoHistoryBuffer>k__BackingField, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__aoHistoryBuffer_k__BackingField, put=__cordl_internal_set__aoHistoryBuffer_k__BackingField)) ::UnityW<::UnityEngine::RenderTexture>  _aoHistoryBuffer_k__BackingField;

/// @brief Field <aoWidth>k__BackingField, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__aoWidth_k__BackingField, put=__cordl_internal_set__aoWidth_k__BackingField)) int32_t  _aoWidth_k__BackingField;

/// @brief Field <cmdBuffer>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__cmdBuffer_k__BackingField, put=__cordl_internal_set__cmdBuffer_k__BackingField)) ::UnityEngine::Rendering::CommandBuffer*  _cmdBuffer_k__BackingField;

/// @brief Field <colorBleedingHistoryBuffer>k__BackingField, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorBleedingHistoryBuffer_k__BackingField, put=__cordl_internal_set__colorBleedingHistoryBuffer_k__BackingField)) ::UnityW<::UnityEngine::RenderTexture>  _colorBleedingHistoryBuffer_k__BackingField;

/// @brief Field <deinterleavedAoHeight>k__BackingField, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__deinterleavedAoHeight_k__BackingField, put=__cordl_internal_set__deinterleavedAoHeight_k__BackingField)) int32_t  _deinterleavedAoHeight_k__BackingField;

/// @brief Field <deinterleavedAoWidth>k__BackingField, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get__deinterleavedAoWidth_k__BackingField, put=__cordl_internal_set__deinterleavedAoWidth_k__BackingField)) int32_t  _deinterleavedAoWidth_k__BackingField;

/// @brief Field <frameCount>k__BackingField, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get__frameCount_k__BackingField, put=__cordl_internal_set__frameCount_k__BackingField)) int32_t  _frameCount_k__BackingField;

/// @brief Field <hbaoCamera>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__hbaoCamera_k__BackingField, put=__cordl_internal_set__hbaoCamera_k__BackingField)) ::UnityW<::UnityEngine::Camera>  _hbaoCamera_k__BackingField;

/// @brief Field <height>k__BackingField, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__height_k__BackingField, put=__cordl_internal_set__height_k__BackingField)) int32_t  _height_k__BackingField;

/// @brief Field <material>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__material_k__BackingField, put=__cordl_internal_set__material_k__BackingField)) ::UnityW<::UnityEngine::Material>  _material_k__BackingField;

/// @brief Field <motionVectorsSupported>k__BackingField, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__motionVectorsSupported_k__BackingField, put=__cordl_internal_set__motionVectorsSupported_k__BackingField)) bool  _motionVectorsSupported_k__BackingField;

/// @brief Field <noiseTex>k__BackingField, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__noiseTex_k__BackingField, put=__cordl_internal_set__noiseTex_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _noiseTex_k__BackingField;

/// @brief Field <reinterleavedAoHeight>k__BackingField, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get__reinterleavedAoHeight_k__BackingField, put=__cordl_internal_set__reinterleavedAoHeight_k__BackingField)) int32_t  _reinterleavedAoHeight_k__BackingField;

/// @brief Field <reinterleavedAoWidth>k__BackingField, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get__reinterleavedAoWidth_k__BackingField, put=__cordl_internal_set__reinterleavedAoWidth_k__BackingField)) int32_t  _reinterleavedAoWidth_k__BackingField;

/// @brief Field <screenHeight>k__BackingField, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__screenHeight_k__BackingField, put=__cordl_internal_set__screenHeight_k__BackingField)) int32_t  _screenHeight_k__BackingField;

/// @brief Field <screenWidth>k__BackingField, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__screenWidth_k__BackingField, put=__cordl_internal_set__screenWidth_k__BackingField)) int32_t  _screenWidth_k__BackingField;

/// @brief Field <stereoActive>k__BackingField, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__stereoActive_k__BackingField, put=__cordl_internal_set__stereoActive_k__BackingField)) bool  _stereoActive_k__BackingField;

/// @brief Field <stereoRenderingMode>k__BackingField, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__stereoRenderingMode_k__BackingField, put=__cordl_internal_set__stereoRenderingMode_k__BackingField)) ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  _stereoRenderingMode_k__BackingField;

/// @brief Field <width>k__BackingField, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__width_k__BackingField, put=__cordl_internal_set__width_k__BackingField)) int32_t  _width_k__BackingField;

/// @brief Field <xrActiveEye>k__BackingField, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__xrActiveEye_k__BackingField, put=__cordl_internal_set__xrActiveEye_k__BackingField)) int32_t  _xrActiveEye_k__BackingField;

 __declspec(property(get=get_aoHeight, put=set_aoHeight)) int32_t  aoHeight;

 __declspec(property(get=get_aoHistoryBuffer, put=set_aoHistoryBuffer)) ::UnityW<::UnityEngine::RenderTexture>  aoHistoryBuffer;

 __declspec(property(get=get_aoSettings, put=set_aoSettings)) ::HorizonBasedAmbientOcclusion::HBAO_AOSettings  aoSettings;

 __declspec(property(get=get_aoWidth, put=set_aoWidth)) int32_t  aoWidth;

 __declspec(property(get=get_blurSettings, put=set_blurSettings)) ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings  blurSettings;

 __declspec(property(get=get_cameraEvent)) ::UnityEngine::Rendering::CameraEvent  cameraEvent;

 __declspec(property(get=get_cmdBuffer, put=set_cmdBuffer)) ::UnityEngine::Rendering::CommandBuffer*  cmdBuffer;

 __declspec(property(get=get_colorBleedingHistoryBuffer, put=set_colorBleedingHistoryBuffer)) ::UnityW<::UnityEngine::RenderTexture>  colorBleedingHistoryBuffer;

 __declspec(property(get=get_colorBleedingSettings, put=set_colorBleedingSettings)) ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings  colorBleedingSettings;

 __declspec(property(get=get_deinterleavedAoHeight, put=set_deinterleavedAoHeight)) int32_t  deinterleavedAoHeight;

 __declspec(property(get=get_deinterleavedAoWidth, put=set_deinterleavedAoWidth)) int32_t  deinterleavedAoWidth;

 __declspec(property(get=get_frameCount, put=set_frameCount)) int32_t  frameCount;

 __declspec(property(get=get_fullscreenTriangle)) ::UnityW<::UnityEngine::Mesh>  fullscreenTriangle;

 __declspec(property(get=get_generalSettings, put=set_generalSettings)) ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  generalSettings;

 __declspec(property(get=get_hbaoCamera, put=set_hbaoCamera)) ::UnityW<::UnityEngine::Camera>  hbaoCamera;

/// @brief Field hbaoShader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hbaoShader, put=__cordl_internal_set_hbaoShader)) ::UnityW<::UnityEngine::Shader>  hbaoShader;

 __declspec(property(get=get_height, put=set_height)) int32_t  height;

 __declspec(property(get=get_isCommandBufferDirty, put=set_isCommandBufferDirty)) bool  isCommandBufferDirty;

 __declspec(property(get=get_isHistoryBufferDirty)) bool  isHistoryBufferDirty;

/// @brief Field m_AOSettings, offset 0x44, size 0x38 
 __declspec(property(get=__cordl_internal_get_m_AOSettings, put=__cordl_internal_set_m_AOSettings)) ::HorizonBasedAmbientOcclusion::HBAO_AOSettings  m_AOSettings;

/// @brief Field m_BlurSettings, offset 0x84, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BlurSettings, put=__cordl_internal_set_m_BlurSettings)) ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings  m_BlurSettings;

/// @brief Field m_ColorBleedingSettings, offset 0x8c, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_ColorBleedingSettings, put=__cordl_internal_set_m_ColorBleedingSettings)) ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings  m_ColorBleedingSettings;

/// @brief Field m_FullscreenTriangle, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FullscreenTriangle, put=__cordl_internal_set_m_FullscreenTriangle)) ::UnityW<::UnityEngine::Mesh>  m_FullscreenTriangle;

/// @brief Field m_GeneralSettings, offset 0x2c, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_GeneralSettings, put=__cordl_internal_set_m_GeneralSettings)) ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  m_GeneralSettings;

/// @brief Field m_IsCommandBufferDirty, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsCommandBufferDirty, put=__cordl_internal_set_m_IsCommandBufferDirty)) bool  m_IsCommandBufferDirty;

/// @brief Field m_Presets, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Presets, put=__cordl_internal_set_m_Presets)) ::HorizonBasedAmbientOcclusion::HBAO_Presets  m_Presets;

/// @brief Field m_PrevStereoRenderingMode, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PrevStereoRenderingMode, put=__cordl_internal_set_m_PrevStereoRenderingMode)) ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  m_PrevStereoRenderingMode;

/// @brief Field m_PreviousAllowHDR, offset 0x1b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PreviousAllowHDR, put=__cordl_internal_set_m_PreviousAllowHDR)) bool  m_PreviousAllowHDR;

/// @brief Field m_PreviousBlurAmount, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousBlurAmount, put=__cordl_internal_set_m_PreviousBlurAmount)) ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_BlurType>  m_PreviousBlurAmount;

/// @brief Field m_PreviousColorBleedingEnabled, offset 0x1b2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PreviousColorBleedingEnabled, put=__cordl_internal_set_m_PreviousColorBleedingEnabled)) bool  m_PreviousColorBleedingEnabled;

/// @brief Field m_PreviousDebugMode, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousDebugMode, put=__cordl_internal_set_m_PreviousDebugMode)) ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_DebugMode>  m_PreviousDebugMode;

/// @brief Field m_PreviousDeinterleaving, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousDeinterleaving, put=__cordl_internal_set_m_PreviousDeinterleaving)) ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving>  m_PreviousDeinterleaving;

/// @brief Field m_PreviousHeight, offset 0x1ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreviousHeight, put=__cordl_internal_set_m_PreviousHeight)) int32_t  m_PreviousHeight;

/// @brief Field m_PreviousNoiseType, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousNoiseType, put=__cordl_internal_set_m_PreviousNoiseType)) ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_NoiseType>  m_PreviousNoiseType;

/// @brief Field m_PreviousPipelineStage, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousPipelineStage, put=__cordl_internal_set_m_PreviousPipelineStage)) ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage>  m_PreviousPipelineStage;

/// @brief Field m_PreviousRenderingPath, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreviousRenderingPath, put=__cordl_internal_set_m_PreviousRenderingPath)) ::UnityEngine::RenderingPath  m_PreviousRenderingPath;

/// @brief Field m_PreviousResolution, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreviousResolution, put=__cordl_internal_set_m_PreviousResolution)) ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Resolution>  m_PreviousResolution;

/// @brief Field m_PreviousTemporalFilterEnabled, offset 0x1b3, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PreviousTemporalFilterEnabled, put=__cordl_internal_set_m_PreviousTemporalFilterEnabled)) bool  m_PreviousTemporalFilterEnabled;

/// @brief Field m_PreviousUseMultibounce, offset 0x1b1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PreviousUseMultibounce, put=__cordl_internal_set_m_PreviousUseMultibounce)) bool  m_PreviousUseMultibounce;

/// @brief Field m_PreviousWidth, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreviousWidth, put=__cordl_internal_set_m_PreviousWidth)) int32_t  m_PreviousWidth;

/// @brief Field m_RadiusPerEye, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RadiusPerEye, put=__cordl_internal_set_m_RadiusPerEye)) ::ArrayW<float_t>  m_RadiusPerEye;

/// @brief Field m_ShaderKeywords, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShaderKeywords, put=__cordl_internal_set_m_ShaderKeywords)) ::ArrayW<::StringW>  m_ShaderKeywords;

/// @brief Field m_TemporalFilterSettings, offset 0x7c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TemporalFilterSettings, put=__cordl_internal_set_m_TemporalFilterSettings)) ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings  m_TemporalFilterSettings;

/// @brief Field m_UVToViewPerEye, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UVToViewPerEye, put=__cordl_internal_set_m_UVToViewPerEye)) ::ArrayW<::UnityEngine::Vector4>  m_UVToViewPerEye;

/// @brief Field m_sourceDescriptor, offset 0x118, size 0x34 
 __declspec(property(get=__cordl_internal_get_m_sourceDescriptor, put=__cordl_internal_set_m_sourceDescriptor)) ::UnityEngine::RenderTextureDescriptor  m_sourceDescriptor;

 __declspec(property(get=get_material, put=set_material)) ::UnityW<::UnityEngine::Material>  material;

 __declspec(property(get=get_motionVectorsSupported, put=set_motionVectorsSupported)) bool  motionVectorsSupported;

 __declspec(property(get=get_noiseTex, put=set_noiseTex)) ::UnityW<::UnityEngine::Texture2D>  noiseTex;

 __declspec(property(get=get_presets, put=set_presets)) ::HorizonBasedAmbientOcclusion::HBAO_Presets  presets;

 __declspec(property(get=get_reinterleavedAoHeight, put=set_reinterleavedAoHeight)) int32_t  reinterleavedAoHeight;

 __declspec(property(get=get_reinterleavedAoWidth, put=set_reinterleavedAoWidth)) int32_t  reinterleavedAoWidth;

 __declspec(property(get=get_renderingInSceneView)) bool  renderingInSceneView;

/// @brief Field s_jitter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_jitter, put=setStaticF_s_jitter)) ::ArrayW<::UnityEngine::Vector2>  s_jitter;

/// @brief Field s_temporalOffsets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_temporalOffsets, put=setStaticF_s_temporalOffsets)) ::ArrayW<float_t>  s_temporalOffsets;

/// @brief Field s_temporalRotations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_temporalRotations, put=setStaticF_s_temporalRotations)) ::ArrayW<float_t>  s_temporalRotations;

 __declspec(property(get=get_screenHeight, put=set_screenHeight)) int32_t  screenHeight;

 __declspec(property(get=get_screenWidth, put=set_screenWidth)) int32_t  screenWidth;

 __declspec(property(get=get_sourceFormat)) ::UnityEngine::RenderTextureFormat  sourceFormat;

 __declspec(property(get=get_stereoActive, put=set_stereoActive)) bool  stereoActive;

 __declspec(property(get=get_stereoRenderingMode, put=set_stereoRenderingMode)) ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  stereoRenderingMode;

 __declspec(property(get=get_temporalFilterSettings, put=set_temporalFilterSettings)) ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings  temporalFilterSettings;

 __declspec(property(get=get_width, put=set_width)) int32_t  width;

 __declspec(property(get=get_xrActiveEye, put=set_xrActiveEye)) int32_t  xrActiveEye;

/// @brief Method AO, addr 0x1813e8230, size 0x240, virtual false, abstract: false, final false
inline void AO(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method AdjustBrightnessMaskToGammaSpace, addr 0x1813e8470, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 AdjustBrightnessMaskToGammaSpace(::UnityEngine::Vector2  v) ;

/// @brief Method AllocateHistoryBuffers, addr 0x1813e84f0, size 0x210, virtual false, abstract: false, final false
inline void AllocateHistoryBuffers() ;

/// @brief Method ApplyFlip, addr 0x1813e8700, size 0xa0, virtual false, abstract: false, final false
static inline void ApplyFlip(::UnityEngine::Rendering::CommandBuffer*  cmd, bool  flip) ;

/// @brief Method ApplyPreset, addr 0x1813e87a0, size 0x1c0, virtual false, abstract: false, final false
inline void ApplyPreset(::HorizonBasedAmbientOcclusion::HBAO_Preset  preset) ;

/// @brief Method BlitFullscreenTriangle, addr 0x1813e8af0, size 0x170, virtual false, abstract: false, final false
inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitFullscreenTriangle, addr 0x1813e8c60, size 0x180, virtual false, abstract: false, final false
inline void BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitFullscreenTriangleWithClear, addr 0x1813e8960, size 0x190, virtual false, abstract: false, final false
inline void BlitFullscreenTriangleWithClear(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, ::UnityEngine::Color  clearColor, int32_t  pass) ;

/// @brief Method Blur, addr 0x1813e8de0, size 0x5a0, virtual false, abstract: false, final false
inline void Blur(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method BuildCommandBuffer, addr 0x1813e9380, size 0x4e0, virtual false, abstract: false, final false
inline void BuildCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::CameraEvent  cameraEvent) ;

/// @brief Method CheckParameters, addr 0x1813e9860, size 0x280, virtual false, abstract: false, final false
inline void CheckParameters() ;

/// @brief Method ClearCommandBuffer, addr 0x1813e9ae0, size 0xa0, virtual false, abstract: false, final false
inline void ClearCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method Composite, addr 0x1813eb320, size 0x80, virtual false, abstract: false, final false
inline void Composite(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::CameraEvent  cameraEvent) ;

/// @brief Method CompositeAfterLighting, addr 0x1813e9b80, size 0x450, virtual false, abstract: false, final false
inline void CompositeAfterLighting(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method CompositeBeforeImageEffectsOpaque, addr 0x1813e9fd0, size 0x670, virtual false, abstract: false, final false
inline void CompositeBeforeImageEffectsOpaque(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method CompositeBeforeReflections, addr 0x1813ea640, size 0x780, virtual false, abstract: false, final false
inline void CompositeBeforeReflections(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method CompositeDebug, addr 0x1813eadc0, size 0x560, virtual false, abstract: false, final false
inline void CompositeDebug(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  finalPassId) ;

/// @brief Method CreateNoiseTexture, addr 0x1813eb3a0, size 0x310, virtual false, abstract: false, final false
inline void CreateNoiseTexture() ;

/// @brief Method DeinterleavedAO, addr 0x1813eb6b0, size 0xfd0, virtual false, abstract: false, final false
inline void DeinterleavedAO(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method EnableColorBleeding, addr 0x180311a10, size 0x10, virtual false, abstract: false, final false
inline void EnableColorBleeding(bool  enabled) ;

/// @brief Method EnableMultiBounce, addr 0x1813ec680, size 0x10, virtual false, abstract: false, final false
inline void EnableMultiBounce(bool  enabled) ;

/// @brief Method EnableTemporalFilter, addr 0x1813ec690, size 0x10, virtual false, abstract: false, final false
inline void EnableTemporalFilter(bool  enabled) ;

/// @brief Method FetchRenderParameters, addr 0x1813ec6a0, size 0x280, virtual false, abstract: false, final false
inline void FetchRenderParameters() ;

/// @brief Method GetAoBias, addr 0x1802f8070, size 0x10, virtual false, abstract: false, final false
inline float_t GetAoBias() ;

/// @brief Method GetAoColor, addr 0x1813ec920, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetAoColor() ;

/// @brief Method GetAoDistanceFalloff, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t GetAoDistanceFalloff() ;

/// @brief Method GetAoIntensity, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t GetAoIntensity() ;

/// @brief Method GetAoMaxDistance, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t GetAoMaxDistance() ;

/// @brief Method GetAoMaxRadiusPixels, addr 0x1802f8050, size 0x10, virtual false, abstract: false, final false
inline float_t GetAoMaxRadiusPixels() ;

/// @brief Method GetAoMultiBounceInfluence, addr 0x18046faf0, size 0x10, virtual false, abstract: false, final false
inline float_t GetAoMultiBounceInfluence() ;

/// @brief Method GetAoOffscreenSamplesContribution, addr 0x18046fb00, size 0x10, virtual false, abstract: false, final false
inline float_t GetAoOffscreenSamplesContribution() ;

/// @brief Method GetAoPerPixelNormals, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals GetAoPerPixelNormals() ;

/// @brief Method GetAoRadius, addr 0x1802e2d80, size 0x10, virtual false, abstract: false, final false
inline float_t GetAoRadius() ;

/// @brief Method GetBlurSharpness, addr 0x180312eb0, size 0x10, virtual false, abstract: false, final false
inline float_t GetBlurSharpness() ;

/// @brief Method GetBlurType, addr 0x180371750, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_BlurType GetBlurType() ;

/// @brief Method GetColorBleedingAlbedoMultiplier, addr 0x1803e0b10, size 0x10, virtual false, abstract: false, final false
inline float_t GetColorBleedingAlbedoMultiplier() ;

/// @brief Method GetColorBleedingBrightnessMask, addr 0x180487750, size 0x10, virtual false, abstract: false, final false
inline float_t GetColorBleedingBrightnessMask() ;

/// @brief Method GetColorBleedingBrightnessMaskRange, addr 0x1813ec930, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetColorBleedingBrightnessMaskRange() ;

/// @brief Method GetColorBleedingSaturation, addr 0x1813ec940, size 0x10, virtual false, abstract: false, final false
inline float_t GetColorBleedingSaturation() ;

/// @brief Method GetCurrentPreset, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_Preset GetCurrentPreset() ;

/// @brief Method GetDebugMode, addr 0x1803eb0e0, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_DebugMode GetDebugMode() ;

/// @brief Method GetDefaultDescriptor, addr 0x1813ec950, size 0x190, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor GetDefaultDescriptor(int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method GetDeinterleaving, addr 0x180392ff0, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving GetDeinterleaving() ;

/// @brief Method GetNoiseType, addr 0x1803231b0, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_NoiseType GetNoiseType() ;

/// @brief Method GetPipelineStage, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_PipelineStage GetPipelineStage() ;

/// @brief Method GetQuality, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_Quality GetQuality() ;

/// @brief Method GetResolution, addr 0x180392fe0, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_Resolution GetResolution() ;

/// @brief Method GetScreenSpaceRT, addr 0x1813ecae0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> GetScreenSpaceRT(int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite, ::UnityEngine::FilterMode  filter, int32_t  widthOverride, int32_t  heightOverride) ;

/// @brief Method GetScreenSpaceTemporaryRT, addr 0x1813ecbd0, size 0xe0, virtual false, abstract: false, final false
inline void GetScreenSpaceTemporaryRT(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  nameID, int32_t  depthBufferBits, ::UnityEngine::RenderTextureFormat  colorFormat, ::UnityEngine::RenderTextureReadWrite  readWrite, ::UnityEngine::FilterMode  filter, int32_t  widthOverride, int32_t  heightOverride) ;

/// @brief Method GetTemporalFilterVarianceClipping, addr 0x180371760, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping GetTemporalFilterVarianceClipping() ;

/// @brief Method Initialize, addr 0x1813eccb0, size 0x170, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method IsColorBleedingEnabled, addr 0x1803115f0, size 0x10, virtual false, abstract: false, final false
inline bool IsColorBleedingEnabled() ;

/// @brief Method IsTemporalFilterEnabled, addr 0x1813ece20, size 0x10, virtual false, abstract: false, final false
inline bool IsTemporalFilterEnabled() ;

static inline ::HorizonBasedAmbientOcclusion::HBAO* New_ctor() ;

/// @brief Method OnDisable, addr 0x1813ece30, size 0x180, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1813ecfb0, size 0x220, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPostRender, addr 0x1813ed1d0, size 0x10, virtual false, abstract: false, final false
inline void OnPostRender() ;

/// @brief Method OnPreRender, addr 0x1813ed1e0, size 0x160, virtual false, abstract: false, final false
inline void OnPreRender() ;

/// @brief Method OnValidate, addr 0x1813ed340, size 0x50, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ReleaseHistoryBuffers, addr 0x1813ed390, size 0x70, virtual false, abstract: false, final false
inline void ReleaseHistoryBuffers() ;

/// @brief Method ReleaseTemporaryRT, addr 0x1813ed400, size 0x30, virtual false, abstract: false, final false
inline void ReleaseTemporaryRT(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  nameID) ;

/// @brief Method SetAoBias, addr 0x1813ed430, size 0x30, virtual false, abstract: false, final false
inline void SetAoBias(float_t  bias) ;

/// @brief Method SetAoColor, addr 0x1813ed460, size 0x10, virtual false, abstract: false, final false
inline void SetAoColor(::UnityEngine::Color  color) ;

/// @brief Method SetAoDistanceFalloff, addr 0x18046fb10, size 0x10, virtual false, abstract: false, final false
inline void SetAoDistanceFalloff(float_t  distanceFalloff) ;

/// @brief Method SetAoIntensity, addr 0x1813ed470, size 0x30, virtual false, abstract: false, final false
inline void SetAoIntensity(float_t  intensity) ;

/// @brief Method SetAoMaxDistance, addr 0x18046fb20, size 0x10, virtual false, abstract: false, final false
inline void SetAoMaxDistance(float_t  maxDistance) ;

/// @brief Method SetAoMaxRadiusPixels, addr 0x1813ed4a0, size 0x30, virtual false, abstract: false, final false
inline void SetAoMaxRadiusPixels(float_t  maxRadiusPixels) ;

/// @brief Method SetAoMultiBounceInfluence, addr 0x1813ed4d0, size 0x30, virtual false, abstract: false, final false
inline void SetAoMultiBounceInfluence(float_t  multiBounceInfluence) ;

/// @brief Method SetAoOffscreenSamplesContribution, addr 0x1813ed500, size 0x30, virtual false, abstract: false, final false
inline void SetAoOffscreenSamplesContribution(float_t  contribution) ;

/// @brief Method SetAoPerPixelNormals, addr 0x1803d5ac0, size 0x10, virtual false, abstract: false, final false
inline void SetAoPerPixelNormals(::HorizonBasedAmbientOcclusion::HBAO_PerPixelNormals  perPixelNormals) ;

/// @brief Method SetAoRadius, addr 0x1813ed530, size 0x30, virtual false, abstract: false, final false
inline void SetAoRadius(float_t  radius) ;

/// @brief Method SetBlurSharpness, addr 0x1813ed560, size 0x30, virtual false, abstract: false, final false
inline void SetBlurSharpness(float_t  sharpness) ;

/// @brief Method SetBlurType, addr 0x180bb89d0, size 0xf0, virtual false, abstract: false, final false
inline void SetBlurType(::HorizonBasedAmbientOcclusion::HBAO_BlurType  blurType) ;

/// @brief Method SetColorBleedingAlbedoMultiplier, addr 0x1813ed590, size 0x30, virtual false, abstract: false, final false
inline void SetColorBleedingAlbedoMultiplier(float_t  albedoMultiplier) ;

/// @brief Method SetColorBleedingBrightnessMask, addr 0x1813ed620, size 0x30, virtual false, abstract: false, final false
inline void SetColorBleedingBrightnessMask(float_t  brightnessMask) ;

/// @brief Method SetColorBleedingBrightnessMaskRange, addr 0x1813ed5c0, size 0x60, virtual false, abstract: false, final false
inline void SetColorBleedingBrightnessMaskRange(::UnityEngine::Vector2  brightnessMaskRange) ;

/// @brief Method SetColorBleedingSaturation, addr 0x1813ed650, size 0x30, virtual false, abstract: false, final false
inline void SetColorBleedingSaturation(float_t  saturation) ;

/// @brief Method SetDebugMode, addr 0x180511530, size 0x10, virtual false, abstract: false, final false
inline void SetDebugMode(::HorizonBasedAmbientOcclusion::HBAO_DebugMode  debugMode) ;

/// @brief Method SetDeinterleaving, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void SetDeinterleaving(::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving  deinterleaving) ;

/// @brief Method SetNoiseType, addr 0x180323270, size 0x10, virtual false, abstract: false, final false
inline void SetNoiseType(::HorizonBasedAmbientOcclusion::HBAO_NoiseType  noiseType) ;

/// @brief Method SetPipelineStage, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void SetPipelineStage(::HorizonBasedAmbientOcclusion::HBAO_PipelineStage  pipelineStage) ;

/// @brief Method SetQuality, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void SetQuality(::HorizonBasedAmbientOcclusion::HBAO_Quality  quality) ;

/// @brief Method SetResolution, addr 0x180393000, size 0x10, virtual false, abstract: false, final false
inline void SetResolution(::HorizonBasedAmbientOcclusion::HBAO_Resolution  resolution) ;

/// @brief Method SetTemporalFilterVarianceClipping, addr 0x180cbfea0, size 0x30, virtual false, abstract: false, final false
inline void SetTemporalFilterVarianceClipping(::HorizonBasedAmbientOcclusion::HBAO_VarianceClipping  varianceClipping) ;

/// @brief Method TemporalFilter, addr 0x1813ed680, size 0xbc0, virtual false, abstract: false, final false
inline void TemporalFilter(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method ToGammaSpace, addr 0x1813ee250, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ToGammaSpace(::UnityEngine::Vector2  v) ;

/// @brief Method ToGammaSpace, addr 0x1813ee240, size 0x10, virtual false, abstract: false, final false
static inline float_t ToGammaSpace(float_t  v) ;

/// @brief Method UpdateMaterialProperties, addr 0x1813ee2a0, size 0xd50, virtual false, abstract: false, final false
inline void UpdateMaterialProperties() ;

/// @brief Method UpdateShaderKeywords, addr 0x1813eeff0, size 0x480, virtual false, abstract: false, final false
inline void UpdateShaderKeywords() ;

/// @brief Method UseMultiBounce, addr 0x1813ef470, size 0x10, virtual false, abstract: false, final false
inline bool UseMultiBounce() ;

constexpr int32_t const& __cordl_internal_get__aoHeight_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__aoHeight_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__aoHistoryBuffer_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__aoHistoryBuffer_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__aoWidth_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__aoWidth_k__BackingField() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__cmdBuffer_k__BackingField() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__cmdBuffer_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__colorBleedingHistoryBuffer_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__colorBleedingHistoryBuffer_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__deinterleavedAoHeight_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__deinterleavedAoHeight_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__deinterleavedAoWidth_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__deinterleavedAoWidth_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__frameCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__frameCount_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__hbaoCamera_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__hbaoCamera_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__height_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__height_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material_k__BackingField() ;

constexpr bool const& __cordl_internal_get__motionVectorsSupported_k__BackingField() const;

constexpr bool& __cordl_internal_get__motionVectorsSupported_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__noiseTex_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__noiseTex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__reinterleavedAoHeight_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__reinterleavedAoHeight_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__reinterleavedAoWidth_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__reinterleavedAoWidth_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__screenHeight_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__screenHeight_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__screenWidth_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__screenWidth_k__BackingField() ;

constexpr bool const& __cordl_internal_get__stereoActive_k__BackingField() const;

constexpr bool& __cordl_internal_get__stereoActive_k__BackingField() ;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode const& __cordl_internal_get__stereoRenderingMode_k__BackingField() const;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode& __cordl_internal_get__stereoRenderingMode_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__width_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__width_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__xrActiveEye_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__xrActiveEye_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_hbaoShader() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_hbaoShader() ;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_AOSettings const& __cordl_internal_get_m_AOSettings() const;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_AOSettings& __cordl_internal_get_m_AOSettings() ;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings const& __cordl_internal_get_m_BlurSettings() const;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings& __cordl_internal_get_m_BlurSettings() ;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings const& __cordl_internal_get_m_ColorBleedingSettings() const;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings& __cordl_internal_get_m_ColorBleedingSettings() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_FullscreenTriangle() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_FullscreenTriangle() ;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings const& __cordl_internal_get_m_GeneralSettings() const;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings& __cordl_internal_get_m_GeneralSettings() ;

constexpr bool const& __cordl_internal_get_m_IsCommandBufferDirty() const;

constexpr bool& __cordl_internal_get_m_IsCommandBufferDirty() ;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_Presets const& __cordl_internal_get_m_Presets() const;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_Presets& __cordl_internal_get_m_Presets() ;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode const& __cordl_internal_get_m_PrevStereoRenderingMode() const;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode& __cordl_internal_get_m_PrevStereoRenderingMode() ;

constexpr bool const& __cordl_internal_get_m_PreviousAllowHDR() const;

constexpr bool& __cordl_internal_get_m_PreviousAllowHDR() ;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_BlurType> const& __cordl_internal_get_m_PreviousBlurAmount() const;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_BlurType>& __cordl_internal_get_m_PreviousBlurAmount() ;

constexpr bool const& __cordl_internal_get_m_PreviousColorBleedingEnabled() const;

constexpr bool& __cordl_internal_get_m_PreviousColorBleedingEnabled() ;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_DebugMode> const& __cordl_internal_get_m_PreviousDebugMode() const;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_DebugMode>& __cordl_internal_get_m_PreviousDebugMode() ;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving> const& __cordl_internal_get_m_PreviousDeinterleaving() const;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving>& __cordl_internal_get_m_PreviousDeinterleaving() ;

constexpr int32_t const& __cordl_internal_get_m_PreviousHeight() const;

constexpr int32_t& __cordl_internal_get_m_PreviousHeight() ;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_NoiseType> const& __cordl_internal_get_m_PreviousNoiseType() const;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_NoiseType>& __cordl_internal_get_m_PreviousNoiseType() ;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage> const& __cordl_internal_get_m_PreviousPipelineStage() const;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage>& __cordl_internal_get_m_PreviousPipelineStage() ;

constexpr ::UnityEngine::RenderingPath const& __cordl_internal_get_m_PreviousRenderingPath() const;

constexpr ::UnityEngine::RenderingPath& __cordl_internal_get_m_PreviousRenderingPath() ;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Resolution> const& __cordl_internal_get_m_PreviousResolution() const;

constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Resolution>& __cordl_internal_get_m_PreviousResolution() ;

constexpr bool const& __cordl_internal_get_m_PreviousTemporalFilterEnabled() const;

constexpr bool& __cordl_internal_get_m_PreviousTemporalFilterEnabled() ;

constexpr bool const& __cordl_internal_get_m_PreviousUseMultibounce() const;

constexpr bool& __cordl_internal_get_m_PreviousUseMultibounce() ;

constexpr int32_t const& __cordl_internal_get_m_PreviousWidth() const;

constexpr int32_t& __cordl_internal_get_m_PreviousWidth() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_RadiusPerEye() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_RadiusPerEye() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_ShaderKeywords() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_ShaderKeywords() ;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings const& __cordl_internal_get_m_TemporalFilterSettings() const;

constexpr ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings& __cordl_internal_get_m_TemporalFilterSettings() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_m_UVToViewPerEye() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_m_UVToViewPerEye() ;

constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_sourceDescriptor() const;

constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_sourceDescriptor() ;

constexpr void __cordl_internal_set__aoHeight_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__aoHistoryBuffer_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__aoWidth_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__cmdBuffer_k__BackingField(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__colorBleedingHistoryBuffer_k__BackingField(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__deinterleavedAoHeight_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__deinterleavedAoWidth_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__frameCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__hbaoCamera_k__BackingField(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__height_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__material_k__BackingField(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__motionVectorsSupported_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__noiseTex_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__reinterleavedAoHeight_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__reinterleavedAoWidth_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__screenHeight_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__screenWidth_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__stereoActive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__stereoRenderingMode_k__BackingField(::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  value) ;

constexpr void __cordl_internal_set__width_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__xrActiveEye_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_hbaoShader(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_m_AOSettings(::HorizonBasedAmbientOcclusion::HBAO_AOSettings  value) ;

constexpr void __cordl_internal_set_m_BlurSettings(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings  value) ;

constexpr void __cordl_internal_set_m_ColorBleedingSettings(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings  value) ;

constexpr void __cordl_internal_set_m_FullscreenTriangle(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_m_GeneralSettings(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  value) ;

constexpr void __cordl_internal_set_m_IsCommandBufferDirty(bool  value) ;

constexpr void __cordl_internal_set_m_Presets(::HorizonBasedAmbientOcclusion::HBAO_Presets  value) ;

constexpr void __cordl_internal_set_m_PrevStereoRenderingMode(::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  value) ;

constexpr void __cordl_internal_set_m_PreviousAllowHDR(bool  value) ;

constexpr void __cordl_internal_set_m_PreviousBlurAmount(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_BlurType>  value) ;

constexpr void __cordl_internal_set_m_PreviousColorBleedingEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_PreviousDebugMode(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_DebugMode>  value) ;

constexpr void __cordl_internal_set_m_PreviousDeinterleaving(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving>  value) ;

constexpr void __cordl_internal_set_m_PreviousHeight(int32_t  value) ;

constexpr void __cordl_internal_set_m_PreviousNoiseType(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_NoiseType>  value) ;

constexpr void __cordl_internal_set_m_PreviousPipelineStage(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage>  value) ;

constexpr void __cordl_internal_set_m_PreviousRenderingPath(::UnityEngine::RenderingPath  value) ;

constexpr void __cordl_internal_set_m_PreviousResolution(::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Resolution>  value) ;

constexpr void __cordl_internal_set_m_PreviousTemporalFilterEnabled(bool  value) ;

constexpr void __cordl_internal_set_m_PreviousUseMultibounce(bool  value) ;

constexpr void __cordl_internal_set_m_PreviousWidth(int32_t  value) ;

constexpr void __cordl_internal_set_m_RadiusPerEye(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_ShaderKeywords(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_m_TemporalFilterSettings(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings  value) ;

constexpr void __cordl_internal_set_m_UVToViewPerEye(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_m_sourceDescriptor(::UnityEngine::RenderTextureDescriptor  value) ;

/// @brief Method .ctor, addr 0x1813ef570, size 0x160, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Vector2> getStaticF_s_jitter() ;

static inline ::ArrayW<float_t> getStaticF_s_temporalOffsets() ;

static inline ::ArrayW<float_t> getStaticF_s_temporalRotations() ;

/// @brief Method get_aoHeight, addr 0x1813ef6d0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_aoHeight() ;

/// @brief Method get_aoHistoryBuffer, addr 0x1803370a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_aoHistoryBuffer() ;

/// @brief Method get_aoSettings, addr 0x1813ef6e0, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_AOSettings get_aoSettings() ;

/// @brief Method get_aoWidth, addr 0x1813ef710, size 0x10, virtual false, abstract: false, final false
inline int32_t get_aoWidth() ;

/// @brief Method get_blurSettings, addr 0x1813ef720, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings get_blurSettings() ;

/// @brief Method get_cameraEvent, addr 0x1813ef730, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::CameraEvent get_cameraEvent() ;

/// @brief Method get_cmdBuffer, addr 0x1803d9940, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::CommandBuffer* get_cmdBuffer() ;

/// @brief Method get_colorBleedingHistoryBuffer, addr 0x1803370c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_colorBleedingHistoryBuffer() ;

/// @brief Method get_colorBleedingSettings, addr 0x1813ef780, size 0x20, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings get_colorBleedingSettings() ;

/// @brief Method get_colorFormat, addr 0x1813ef7a0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureFormat get_colorFormat() ;

/// @brief Method get_defaultHDRRenderTextureFormat, addr 0x1813ef7d0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureFormat get_defaultHDRRenderTextureFormat() ;

/// @brief Method get_deinterleavedAoHeight, addr 0x1813ef7e0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_deinterleavedAoHeight() ;

/// @brief Method get_deinterleavedAoWidth, addr 0x180418710, size 0x10, virtual false, abstract: false, final false
inline int32_t get_deinterleavedAoWidth() ;

/// @brief Method get_depthFormat, addr 0x1813ef7f0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureFormat get_depthFormat() ;

/// @brief Method get_frameCount, addr 0x180c314e0, size 0x53a0, virtual false, abstract: false, final false
inline int32_t get_frameCount() ;

/// @brief Method get_fullscreenTriangle, addr 0x1813ef810, size 0x260, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Mesh> get_fullscreenTriangle() ;

/// @brief Method get_generalSettings, addr 0x1813efa70, size 0x20, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings get_generalSettings() ;

/// @brief Method get_hbaoCamera, addr 0x180322760, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_hbaoCamera() ;

/// @brief Method get_height, addr 0x180cbfa10, size 0x20, virtual false, abstract: false, final false
inline int32_t get_height() ;

/// @brief Method get_isCommandBufferDirty, addr 0x1813efa90, size 0x2e0, virtual false, abstract: false, final false
inline bool get_isCommandBufferDirty() ;

/// @brief Method get_isHistoryBufferDirty, addr 0x1813efd70, size 0xe0, virtual false, abstract: false, final false
inline bool get_isHistoryBufferDirty() ;

/// @brief Method get_isLinearColorSpace, addr 0x1813efe50, size 0x20, virtual false, abstract: false, final false
static inline bool get_isLinearColorSpace() ;

/// @brief Method get_material, addr 0x180322750, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_material() ;

/// @brief Method get_motionVectorsSupported, addr 0x1813efe70, size 0x10, virtual false, abstract: false, final false
inline bool get_motionVectorsSupported() ;

/// @brief Method get_noiseTex, addr 0x1803370d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_noiseTex() ;

/// @brief Method get_normalsFormat, addr 0x1813efe80, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderTextureFormat get_normalsFormat() ;

/// @brief Method get_presets, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_Presets get_presets() ;

/// @brief Method get_reinterleavedAoHeight, addr 0x180cbfa90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_reinterleavedAoHeight() ;

/// @brief Method get_reinterleavedAoWidth, addr 0x1813efea0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_reinterleavedAoWidth() ;

/// @brief Method get_renderingInSceneView, addr 0x1813efeb0, size 0x30, virtual false, abstract: false, final false
inline bool get_renderingInSceneView() ;

/// @brief Method get_screenHeight, addr 0x1813efee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_screenHeight() ;

/// @brief Method get_screenWidth, addr 0x18040c390, size 0x10, virtual false, abstract: false, final false
inline int32_t get_screenWidth() ;

/// @brief Method get_sourceFormat, addr 0x1813efef0, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureFormat get_sourceFormat() ;

/// @brief Method get_stereoActive, addr 0x180f187e0, size 0x650, virtual false, abstract: false, final false
inline bool get_stereoActive() ;

/// @brief Method get_stereoRenderingMode, addr 0x1813eff30, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode get_stereoRenderingMode() ;

/// @brief Method get_temporalFilterSettings, addr 0x180bb89a0, size 0x10, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings get_temporalFilterSettings() ;

/// @brief Method get_width, addr 0x1813abaa0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_width() ;

/// @brief Method get_xrActiveEye, addr 0x1813eff40, size 0x10, virtual false, abstract: false, final false
inline int32_t get_xrActiveEye() ;

static inline void setStaticF_s_jitter(::ArrayW<::UnityEngine::Vector2>  value) ;

static inline void setStaticF_s_temporalOffsets(::ArrayW<float_t>  value) ;

static inline void setStaticF_s_temporalRotations(::ArrayW<float_t>  value) ;

/// @brief Method set_aoHeight, addr 0x1813eff50, size 0x10, virtual false, abstract: false, final false
inline void set_aoHeight(int32_t  value) ;

/// @brief Method set_aoHistoryBuffer, addr 0x180337130, size 0x20, virtual false, abstract: false, final false
inline void set_aoHistoryBuffer(::UnityEngine::RenderTexture*  value) ;

/// @brief Method set_aoSettings, addr 0x1813eff60, size 0x30, virtual false, abstract: false, final false
inline void set_aoSettings(::HorizonBasedAmbientOcclusion::HBAO_AOSettings  value) ;

/// @brief Method set_aoWidth, addr 0x1813eff90, size 0x10, virtual false, abstract: false, final false
inline void set_aoWidth(int32_t  value) ;

/// @brief Method set_blurSettings, addr 0x1813effa0, size 0x10, virtual false, abstract: false, final false
inline void set_blurSettings(::HorizonBasedAmbientOcclusion::HBAO_BlurSettings  value) ;

/// @brief Method set_cmdBuffer, addr 0x1803d9970, size 0x20, virtual false, abstract: false, final false
inline void set_cmdBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

/// @brief Method set_colorBleedingHistoryBuffer, addr 0x180337170, size 0x20, virtual false, abstract: false, final false
inline void set_colorBleedingHistoryBuffer(::UnityEngine::RenderTexture*  value) ;

/// @brief Method set_colorBleedingSettings, addr 0x1813effb0, size 0x20, virtual false, abstract: false, final false
inline void set_colorBleedingSettings(::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings  value) ;

/// @brief Method set_deinterleavedAoHeight, addr 0x1813effd0, size 0x10, virtual false, abstract: false, final false
inline void set_deinterleavedAoHeight(int32_t  value) ;

/// @brief Method set_deinterleavedAoWidth, addr 0x1813effe0, size 0x10, virtual false, abstract: false, final false
inline void set_deinterleavedAoWidth(int32_t  value) ;

/// @brief Method set_frameCount, addr 0x1813efff0, size 0x10, virtual false, abstract: false, final false
inline void set_frameCount(int32_t  value) ;

/// @brief Method set_generalSettings, addr 0x1813f0000, size 0x20, virtual false, abstract: false, final false
inline void set_generalSettings(::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  value) ;

/// @brief Method set_hbaoCamera, addr 0x180322790, size 0x20, virtual false, abstract: false, final false
inline void set_hbaoCamera(::UnityEngine::Camera*  value) ;

/// @brief Method set_height, addr 0x180cbfd00, size 0x10, virtual false, abstract: false, final false
inline void set_height(int32_t  value) ;

/// @brief Method set_isCommandBufferDirty, addr 0x1813f0020, size 0x10, virtual false, abstract: false, final false
inline void set_isCommandBufferDirty(bool  value) ;

/// @brief Method set_material, addr 0x180322770, size 0x20, virtual false, abstract: false, final false
inline void set_material(::UnityEngine::Material*  value) ;

/// @brief Method set_motionVectorsSupported, addr 0x1813f0030, size 0x10, virtual false, abstract: false, final false
inline void set_motionVectorsSupported(bool  value) ;

/// @brief Method set_noiseTex, addr 0x180337190, size 0x20, virtual false, abstract: false, final false
inline void set_noiseTex(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_presets, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_presets(::HorizonBasedAmbientOcclusion::HBAO_Presets  value) ;

/// @brief Method set_reinterleavedAoHeight, addr 0x180cbfe50, size 0x40, virtual false, abstract: false, final false
inline void set_reinterleavedAoHeight(int32_t  value) ;

/// @brief Method set_reinterleavedAoWidth, addr 0x1813f0040, size 0x10, virtual false, abstract: false, final false
inline void set_reinterleavedAoWidth(int32_t  value) ;

/// @brief Method set_screenHeight, addr 0x1813f0050, size 0x10, virtual false, abstract: false, final false
inline void set_screenHeight(int32_t  value) ;

/// @brief Method set_screenWidth, addr 0x180cbfe90, size 0x10, virtual false, abstract: false, final false
inline void set_screenWidth(int32_t  value) ;

/// @brief Method set_stereoActive, addr 0x180f18e30, size 0xedb0, virtual false, abstract: false, final false
inline void set_stereoActive(bool  value) ;

/// @brief Method set_stereoRenderingMode, addr 0x1813f0060, size 0x10, virtual false, abstract: false, final false
inline void set_stereoRenderingMode(::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  value) ;

/// @brief Method set_temporalFilterSettings, addr 0x180bb8ad0, size 0x10, virtual false, abstract: false, final false
inline void set_temporalFilterSettings(::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings  value) ;

/// @brief Method set_width, addr 0x1813f0070, size 0x10, virtual false, abstract: false, final false
inline void set_width(int32_t  value) ;

/// @brief Method set_xrActiveEye, addr 0x1813f0080, size 0x10, virtual false, abstract: false, final false
inline void set_xrActiveEye(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO(HBAO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO(HBAO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20578};

/// @brief Field hbaoShader, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___hbaoShader;

/// @brief Field m_Presets, offset: 0x28, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_Presets  ___m_Presets;

/// @brief Field m_GeneralSettings, offset: 0x2c, size: 0x18, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_GeneralSettings  ___m_GeneralSettings;

/// @brief Field m_AOSettings, offset: 0x44, size: 0x38, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_AOSettings  ___m_AOSettings;

/// @brief Field m_TemporalFilterSettings, offset: 0x7c, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_TemporalFilterSettings  ___m_TemporalFilterSettings;

/// @brief Field m_BlurSettings, offset: 0x84, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_BlurSettings  ___m_BlurSettings;

/// @brief Field m_ColorBleedingSettings, offset: 0x8c, size: 0x18, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_ColorBleedingSettings  ___m_ColorBleedingSettings;

/// @brief Field <material>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material_k__BackingField;

/// @brief Field <hbaoCamera>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____hbaoCamera_k__BackingField;

/// @brief Field <cmdBuffer>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____cmdBuffer_k__BackingField;

/// @brief Field <width>k__BackingField, offset: 0xc0, size: 0x4, def value: None
 int32_t  ____width_k__BackingField;

/// @brief Field <height>k__BackingField, offset: 0xc4, size: 0x4, def value: None
 int32_t  ____height_k__BackingField;

/// @brief Field <stereoActive>k__BackingField, offset: 0xc8, size: 0x1, def value: None
 bool  ____stereoActive_k__BackingField;

/// @brief Field <xrActiveEye>k__BackingField, offset: 0xcc, size: 0x4, def value: None
 int32_t  ____xrActiveEye_k__BackingField;

/// @brief Field <stereoRenderingMode>k__BackingField, offset: 0xd0, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  ____stereoRenderingMode_k__BackingField;

/// @brief Field <screenWidth>k__BackingField, offset: 0xd4, size: 0x4, def value: None
 int32_t  ____screenWidth_k__BackingField;

/// @brief Field <screenHeight>k__BackingField, offset: 0xd8, size: 0x4, def value: None
 int32_t  ____screenHeight_k__BackingField;

/// @brief Field <aoWidth>k__BackingField, offset: 0xdc, size: 0x4, def value: None
 int32_t  ____aoWidth_k__BackingField;

/// @brief Field <aoHeight>k__BackingField, offset: 0xe0, size: 0x4, def value: None
 int32_t  ____aoHeight_k__BackingField;

/// @brief Field <reinterleavedAoWidth>k__BackingField, offset: 0xe4, size: 0x4, def value: None
 int32_t  ____reinterleavedAoWidth_k__BackingField;

/// @brief Field <reinterleavedAoHeight>k__BackingField, offset: 0xe8, size: 0x4, def value: None
 int32_t  ____reinterleavedAoHeight_k__BackingField;

/// @brief Field <deinterleavedAoWidth>k__BackingField, offset: 0xec, size: 0x4, def value: None
 int32_t  ____deinterleavedAoWidth_k__BackingField;

/// @brief Field <deinterleavedAoHeight>k__BackingField, offset: 0xf0, size: 0x4, def value: None
 int32_t  ____deinterleavedAoHeight_k__BackingField;

/// @brief Field <frameCount>k__BackingField, offset: 0xf4, size: 0x4, def value: None
 int32_t  ____frameCount_k__BackingField;

/// @brief Field <motionVectorsSupported>k__BackingField, offset: 0xf8, size: 0x1, def value: None
 bool  ____motionVectorsSupported_k__BackingField;

/// @brief Field <aoHistoryBuffer>k__BackingField, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____aoHistoryBuffer_k__BackingField;

/// @brief Field <colorBleedingHistoryBuffer>k__BackingField, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____colorBleedingHistoryBuffer_k__BackingField;

/// @brief Field <noiseTex>k__BackingField, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____noiseTex_k__BackingField;

/// @brief Field m_sourceDescriptor, offset: 0x118, size: 0x34, def value: None
 ::UnityEngine::RenderTextureDescriptor  ___m_sourceDescriptor;

/// @brief Field m_ShaderKeywords, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___m_ShaderKeywords;

/// @brief Field m_UVToViewPerEye, offset: 0x158, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___m_UVToViewPerEye;

/// @brief Field m_RadiusPerEye, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_RadiusPerEye;

/// @brief Field m_IsCommandBufferDirty, offset: 0x168, size: 0x1, def value: None
 bool  ___m_IsCommandBufferDirty;

/// @brief Field m_FullscreenTriangle, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___m_FullscreenTriangle;

/// @brief Field m_PreviousPipelineStage, offset: 0x178, size: 0x8, def value: None
 ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_PipelineStage>  ___m_PreviousPipelineStage;

/// @brief Field m_PreviousResolution, offset: 0x180, size: 0x8, def value: None
 ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Resolution>  ___m_PreviousResolution;

/// @brief Field m_PreviousDeinterleaving, offset: 0x188, size: 0x8, def value: None
 ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_Deinterleaving>  ___m_PreviousDeinterleaving;

/// @brief Field m_PreviousDebugMode, offset: 0x190, size: 0x8, def value: None
 ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_DebugMode>  ___m_PreviousDebugMode;

/// @brief Field m_PreviousNoiseType, offset: 0x198, size: 0x8, def value: None
 ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_NoiseType>  ___m_PreviousNoiseType;

/// @brief Field m_PreviousBlurAmount, offset: 0x1a0, size: 0x8, def value: None
 ::System::Nullable_1<::HorizonBasedAmbientOcclusion::HBAO_BlurType>  ___m_PreviousBlurAmount;

/// @brief Field m_PreviousWidth, offset: 0x1a8, size: 0x4, def value: None
 int32_t  ___m_PreviousWidth;

/// @brief Field m_PreviousHeight, offset: 0x1ac, size: 0x4, def value: None
 int32_t  ___m_PreviousHeight;

/// @brief Field m_PreviousAllowHDR, offset: 0x1b0, size: 0x1, def value: None
 bool  ___m_PreviousAllowHDR;

/// @brief Field m_PreviousUseMultibounce, offset: 0x1b1, size: 0x1, def value: None
 bool  ___m_PreviousUseMultibounce;

/// @brief Field m_PreviousColorBleedingEnabled, offset: 0x1b2, size: 0x1, def value: None
 bool  ___m_PreviousColorBleedingEnabled;

/// @brief Field m_PreviousTemporalFilterEnabled, offset: 0x1b3, size: 0x1, def value: None
 bool  ___m_PreviousTemporalFilterEnabled;

/// @brief Field m_PreviousRenderingPath, offset: 0x1b4, size: 0x4, def value: None
 ::UnityEngine::RenderingPath  ___m_PreviousRenderingPath;

/// @brief Field m_PrevStereoRenderingMode, offset: 0x1b8, size: 0x4, def value: None
 ::HorizonBasedAmbientOcclusion::HBAO_StereoRenderingMode  ___m_PrevStereoRenderingMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___hbaoShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_Presets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_GeneralSettings) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_AOSettings) == 0x44, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_TemporalFilterSettings) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_BlurSettings) == 0x84, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_ColorBleedingSettings) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____material_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____hbaoCamera_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____cmdBuffer_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____width_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____height_k__BackingField) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____stereoActive_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____xrActiveEye_k__BackingField) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____stereoRenderingMode_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____screenWidth_k__BackingField) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____screenHeight_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____aoWidth_k__BackingField) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____aoHeight_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____reinterleavedAoWidth_k__BackingField) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____reinterleavedAoHeight_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____deinterleavedAoWidth_k__BackingField) == 0xec, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____deinterleavedAoHeight_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____frameCount_k__BackingField) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____motionVectorsSupported_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____aoHistoryBuffer_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____colorBleedingHistoryBuffer_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ____noiseTex_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_sourceDescriptor) == 0x118, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_ShaderKeywords) == 0x150, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_UVToViewPerEye) == 0x158, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_RadiusPerEye) == 0x160, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_IsCommandBufferDirty) == 0x168, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_FullscreenTriangle) == 0x170, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousPipelineStage) == 0x178, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousResolution) == 0x180, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousDeinterleaving) == 0x188, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousDebugMode) == 0x190, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousNoiseType) == 0x198, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousBlurAmount) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousWidth) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousHeight) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousAllowHDR) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousUseMultibounce) == 0x1b1, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousColorBleedingEnabled) == 0x1b2, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousTemporalFilterEnabled) == 0x1b3, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PreviousRenderingPath) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::HBAO, ___m_PrevStereoRenderingMode) == 0x1b8, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::HBAO) == 0x1c0, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion
