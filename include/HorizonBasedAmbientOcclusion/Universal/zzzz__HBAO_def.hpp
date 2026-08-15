#pragma once
// IWYU pragma private; include "HorizonBasedAmbientOcclusion/Universal/HBAO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HBAO)
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_AOSettings;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_BlurSettings;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_BlurTypeParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_BlurType;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_ColorBleedingSettings;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_DebugModeParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_DebugMode;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_DeinterleavingParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_Deinterleaving;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_GeneralSettings;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_MinMaxFloatParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_ModeParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_Mode;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_NoiseTypeParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_NoiseType;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_ParameterDisplayName;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_PerPixelNormalsParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_PerPixelNormals;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_PresetParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_Preset;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_Presets;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_QualityParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_Quality;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_RenderingPathParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_RenderingPath;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_ResolutionParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_Resolution;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_SettingsGroup;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_TemporalFilterSettings;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_VarianceClippingParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_VarianceClipping;
}
namespace UnityEngine::Rendering {
class BoolParameter;
}
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
namespace UnityEngine::Rendering {
class ColorParameter;
}
namespace UnityEngine::Rendering {
class FloatParameter;
}
namespace UnityEngine::Rendering {
class IPostProcessComponent;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_BlurType;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_DebugMode;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_Deinterleaving;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_Mode;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_NoiseType;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_PerPixelNormals;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_Preset;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_Quality;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_RenderingPath;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_Resolution;
}
namespace HorizonBasedAmbientOcclusion::Universal {
struct HBAO_VarianceClipping;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_AOSettings;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_BlurSettings;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_BlurTypeParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_ColorBleedingSettings;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_DebugModeParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_DeinterleavingParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_GeneralSettings;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_MinMaxFloatParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_ModeParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_NoiseTypeParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_ParameterDisplayName;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_PerPixelNormalsParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_PresetParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_Presets;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_QualityParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_RenderingPathParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_ResolutionParameter;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_SettingsGroup;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_TemporalFilterSettings;
}
namespace HorizonBasedAmbientOcclusion::Universal {
class HBAO_VarianceClippingParameter;
}
// Write type traits
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution);
MARK_VAL_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings*);
MARK_REF_T(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter*);
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType, "HorizonBasedAmbientOcclusion.Universal", "HBAO/BlurType");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode, "HorizonBasedAmbientOcclusion.Universal", "HBAO/DebugMode");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving, "HorizonBasedAmbientOcclusion.Universal", "HBAO/Deinterleaving");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode, "HorizonBasedAmbientOcclusion.Universal", "HBAO/Mode");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType, "HorizonBasedAmbientOcclusion.Universal", "HBAO/NoiseType");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals, "HorizonBasedAmbientOcclusion.Universal", "HBAO/PerPixelNormals");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset, "HorizonBasedAmbientOcclusion.Universal", "HBAO/Preset");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality, "HorizonBasedAmbientOcclusion.Universal", "HBAO/Quality");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath, "HorizonBasedAmbientOcclusion.Universal", "HBAO/RenderingPath");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution, "HorizonBasedAmbientOcclusion.Universal", "HBAO/Resolution");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping, "HorizonBasedAmbientOcclusion.Universal", "HBAO/VarianceClipping");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO*, "HorizonBasedAmbientOcclusion.Universal", "HBAO");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/AOSettings");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/BlurSettings");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/BlurTypeParameter");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/ColorBleedingSettings");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/DebugModeParameter");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/DeinterleavingParameter");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/GeneralSettings");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/MinMaxFloatParameter");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/ModeParameter");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/NoiseTypeParameter");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/ParameterDisplayName");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/PerPixelNormalsParameter");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/PresetParameter");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/Presets");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/QualityParameter");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/RenderingPathParameter");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/ResolutionParameter");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/SettingsGroup");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/TemporalFilterSettings");
DEFINE_IL2CPP_CLASS(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter*, "HorizonBasedAmbientOcclusion.Universal", "HBAO/VarianceClippingParameter");
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/Preset
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
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset const Custom;

/// @brief Field FastPerformance value: I32(1)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset const FastPerformance;

/// @brief Field FastestPerformance value: I32(0)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset const FastestPerformance;

/// @brief Field HighQuality value: I32(3)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset const HighQuality;

/// @brief Field HighestQuality value: I32(4)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset const HighestQuality;

/// @brief Field Normal value: I32(2)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset const Normal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/Mode
struct CORDL_TYPE HBAO_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_Mode_Unwrapped
enum struct __HBAO_Mode_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_LitAO = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_Mode_Unwrapped () const noexcept {
return static_cast<__HBAO_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_Mode(int32_t  value__) noexcept;

/// @brief Field LitAO value: I32(1)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode const LitAO;

/// @brief Field Normal value: I32(0)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode const Normal;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20220};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/RenderingPath
struct CORDL_TYPE HBAO_RenderingPath {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_RenderingPath_Unwrapped
enum struct __HBAO_RenderingPath_Unwrapped : int32_t {
__E_Forward = static_cast<int32_t>(0x0),
__E_Deferred = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HBAO_RenderingPath_Unwrapped () const noexcept {
return static_cast<__HBAO_RenderingPath_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HBAO_RenderingPath() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HBAO_RenderingPath(int32_t  value__) noexcept;

/// @brief Field Deferred value: I32(1)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath const Deferred;

/// @brief Field Forward value: I32(0)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath const Forward;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20221};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/Quality
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
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality const High;

/// @brief Field Highest value: I32(4)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality const Highest;

/// @brief Field Low value: I32(1)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality const Low;

/// @brief Field Lowest value: I32(0)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality const Lowest;

/// @brief Field Medium value: I32(2)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20222};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/Resolution
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
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution const Full;

/// @brief Field Half value: I32(1)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution const Half;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20223};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/NoiseType
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
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType const Dither;

/// @brief Field InterleavedGradientNoise value: I32(1)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType const InterleavedGradientNoise;

/// @brief Field SpatialDistribution value: I32(2)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType const SpatialDistribution;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20224};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/Deinterleaving
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
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving const Disabled;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20225};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field x4 value: I32(1)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving const x4;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/DebugMode
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
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode const AOOnly;

/// @brief Field ColorBleedingOnly value: I32(2)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode const ColorBleedingOnly;

/// @brief Field Disabled value: I32(0)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode const Disabled;

/// @brief Field SplitWithAOAndAOOnly value: I32(4)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode const SplitWithAOAndAOOnly;

/// @brief Field SplitWithoutAOAndAOOnly value: I32(5)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode const SplitWithoutAOAndAOOnly;

/// @brief Field SplitWithoutAOAndWithAO value: I32(3)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode const SplitWithoutAOAndWithAO;

/// @brief Field ViewNormals value: I32(6)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode const ViewNormals;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20226};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/BlurType
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
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType const ExtraWide;

/// @brief Field Medium value: I32(2)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType const Medium;

/// @brief Field Narrow value: I32(1)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType const Narrow;

/// @brief Field None value: I32(0)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType const None;

/// @brief Field Wide value: I32(3)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType const Wide;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20227};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/PerPixelNormals
struct CORDL_TYPE HBAO_PerPixelNormals {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HBAO_PerPixelNormals_Unwrapped
enum struct __HBAO_PerPixelNormals_Unwrapped : int32_t {
__E_Reconstruct2Samples = static_cast<int32_t>(0x0),
__E_Reconstruct4Samples = static_cast<int32_t>(0x1),
__E_Camera = static_cast<int32_t>(0x2),
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

/// @brief Field Camera value: I32(2)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals const Camera;

/// @brief Field Reconstruct2Samples value: I32(0)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals const Reconstruct2Samples;

/// @brief Field Reconstruct4Samples value: I32(1)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals const Reconstruct4Samples;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20228};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies 
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: true
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/VarianceClipping
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
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping const Disabled;

/// @brief Field _4Tap value: I32(1)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping const _4Tap;

/// @brief Field _8Tap value: I32(2)
static ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping const _8Tap;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20229};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping) == 0x4, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::Preset, UnityEngine.Rendering.VolumeParameter`1<T>
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/PresetParameter
class CORDL_TYPE HBAO_PresetParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset> {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter* New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  value, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1812a5e80, size 0x56e0, virtual false, abstract: false, final false
inline void _ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_PresetParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_PresetParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_PresetParameter(HBAO_PresetParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_PresetParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_PresetParameter(HBAO_PresetParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20230};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::Mode, UnityEngine.Rendering.VolumeParameter`1<T>
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/ModeParameter
class CORDL_TYPE HBAO_ModeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode> {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter* New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode  value, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1812a5e80, size 0x56e0, virtual false, abstract: false, final false
inline void _ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_ModeParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_ModeParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_ModeParameter(HBAO_ModeParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_ModeParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_ModeParameter(HBAO_ModeParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20231};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::RenderingPath, UnityEngine.Rendering.VolumeParameter`1<T>
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/RenderingPathParameter
class CORDL_TYPE HBAO_RenderingPathParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath> {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter* New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath  value, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1812a5e80, size 0x56e0, virtual false, abstract: false, final false
inline void _ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_RenderingPathParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_RenderingPathParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_RenderingPathParameter(HBAO_RenderingPathParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_RenderingPathParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_RenderingPathParameter(HBAO_RenderingPathParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20232};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::Quality, UnityEngine.Rendering.VolumeParameter`1<T>
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/QualityParameter
class CORDL_TYPE HBAO_QualityParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality> {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter* New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  value, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1812a5e80, size 0x56e0, virtual false, abstract: false, final false
inline void _ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_QualityParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_QualityParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_QualityParameter(HBAO_QualityParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_QualityParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_QualityParameter(HBAO_QualityParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20233};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::Deinterleaving, UnityEngine.Rendering.VolumeParameter`1<T>
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/DeinterleavingParameter
class CORDL_TYPE HBAO_DeinterleavingParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving> {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter* New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving  value, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1812a5e80, size 0x56e0, virtual false, abstract: false, final false
inline void _ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_DeinterleavingParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_DeinterleavingParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_DeinterleavingParameter(HBAO_DeinterleavingParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_DeinterleavingParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_DeinterleavingParameter(HBAO_DeinterleavingParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20234};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::Resolution, UnityEngine.Rendering.VolumeParameter`1<T>
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/ResolutionParameter
class CORDL_TYPE HBAO_ResolutionParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution> {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter* New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution  value, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1812a5e80, size 0x56e0, virtual false, abstract: false, final false
inline void _ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_ResolutionParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_ResolutionParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_ResolutionParameter(HBAO_ResolutionParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_ResolutionParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_ResolutionParameter(HBAO_ResolutionParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20235};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::NoiseType, UnityEngine.Rendering.VolumeParameter`1<T>
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/NoiseTypeParameter
class CORDL_TYPE HBAO_NoiseTypeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType> {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter* New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType  value, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1812a5e80, size 0x56e0, virtual false, abstract: false, final false
inline void _ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_NoiseTypeParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_NoiseTypeParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_NoiseTypeParameter(HBAO_NoiseTypeParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_NoiseTypeParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_NoiseTypeParameter(HBAO_NoiseTypeParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20236};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::DebugMode, UnityEngine.Rendering.VolumeParameter`1<T>
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/DebugModeParameter
class CORDL_TYPE HBAO_DebugModeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode> {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter* New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  value, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1812a5e80, size 0x56e0, virtual false, abstract: false, final false
inline void _ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_DebugModeParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_DebugModeParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_DebugModeParameter(HBAO_DebugModeParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_DebugModeParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_DebugModeParameter(HBAO_DebugModeParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20237};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::PerPixelNormals, UnityEngine.Rendering.VolumeParameter`1<T>
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/PerPixelNormalsParameter
class CORDL_TYPE HBAO_PerPixelNormalsParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals> {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter* New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals  value, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1812a5e80, size 0x56e0, virtual false, abstract: false, final false
inline void _ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_PerPixelNormalsParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_PerPixelNormalsParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_PerPixelNormalsParameter(HBAO_PerPixelNormalsParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_PerPixelNormalsParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_PerPixelNormalsParameter(HBAO_PerPixelNormalsParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20238};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::VarianceClipping, UnityEngine.Rendering.VolumeParameter`1<T>
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/VarianceClippingParameter
class CORDL_TYPE HBAO_VarianceClippingParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping> {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter* New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping  value, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1812a5e80, size 0x56e0, virtual false, abstract: false, final false
inline void _ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_VarianceClippingParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_VarianceClippingParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_VarianceClippingParameter(HBAO_VarianceClippingParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_VarianceClippingParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_VarianceClippingParameter(HBAO_VarianceClippingParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20239};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::BlurType, UnityEngine.Rendering.VolumeParameter`1<T>
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/BlurTypeParameter
class CORDL_TYPE HBAO_BlurTypeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType> {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter* New_ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  value, bool  overrideState) ;

/// @brief Method .ctor, addr 0x1812a5e80, size 0x56e0, virtual false, abstract: false, final false
inline void _ctor(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  value, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_BlurTypeParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_BlurTypeParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_BlurTypeParameter(HBAO_BlurTypeParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_BlurTypeParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_BlurTypeParameter(HBAO_BlurTypeParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20240};

/// @brief Size padding 0x20 - 0x18 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter) == 0x20, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies UnityEngine.Rendering.VolumeParameter`1<T>, UnityEngine.Vector2
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/MinMaxFloatParameter
class CORDL_TYPE HBAO_MinMaxFloatParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief Field max, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) float_t  max;

/// @brief Field min, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) float_t  min;

static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter* New_ctor(::UnityEngine::Vector2  value, float_t  min, float_t  max, bool  overrideState) ;

constexpr float_t const& __cordl_internal_get_max() const;

constexpr float_t& __cordl_internal_get_max() ;

constexpr float_t const& __cordl_internal_get_min() const;

constexpr float_t& __cordl_internal_get_min() ;

constexpr void __cordl_internal_set_max(float_t  value) ;

constexpr void __cordl_internal_set_min(float_t  value) ;

/// @brief Method .ctor, addr 0x1813fda20, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2  value, float_t  min, float_t  max, bool  overrideState) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_MinMaxFloatParameter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_MinMaxFloatParameter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_MinMaxFloatParameter(HBAO_MinMaxFloatParameter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_MinMaxFloatParameter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_MinMaxFloatParameter(HBAO_MinMaxFloatParameter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20241};

/// @brief Field min, offset: 0x1c, size: 0x4, def value: None
 float_t  ___min;

/// @brief Field max, offset: 0x20, size: 0x4, def value: None
 float_t  ___max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter, ___min) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter, ___max) == 0x20, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter) == 0x28, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies System.Attribute
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/SettingsGroup
class CORDL_TYPE HBAO_SettingsGroup : public ::System::Attribute {
public:
// Declarations
/// @brief Field isExpanded, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_isExpanded, put=__cordl_internal_set_isExpanded)) bool  isExpanded;

static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup* New_ctor() ;

constexpr bool const& __cordl_internal_get_isExpanded() const;

constexpr bool& __cordl_internal_get_isExpanded() ;

constexpr void __cordl_internal_set_isExpanded(bool  value) ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20242};

/// @brief Field isExpanded, offset: 0x10, size: 0x1, def value: None
 bool  ___isExpanded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup, ___isExpanded) == 0x10, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup) == 0x18, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies System.Attribute
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/ParameterDisplayName
class CORDL_TYPE HBAO_ParameterDisplayName : public ::System::Attribute {
public:
// Declarations
/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName* New_ctor(::StringW  name) ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_ParameterDisplayName() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_ParameterDisplayName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_ParameterDisplayName(HBAO_ParameterDisplayName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_ParameterDisplayName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_ParameterDisplayName(HBAO_ParameterDisplayName const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20243};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName, ___name) == 0x10, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName) == 0x18, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::SettingsGroup
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/Presets
class CORDL_TYPE HBAO_Presets : public ::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets* New_ctor() ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_Presets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_Presets", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_Presets(HBAO_Presets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_Presets", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_Presets(HBAO_Presets const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20244};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets) == 0x18, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::SettingsGroup
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/GeneralSettings
class CORDL_TYPE HBAO_GeneralSettings : public ::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_GeneralSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_GeneralSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_GeneralSettings(HBAO_GeneralSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_GeneralSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_GeneralSettings(HBAO_GeneralSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20245};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings) == 0x18, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::SettingsGroup
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/AOSettings
class CORDL_TYPE HBAO_AOSettings : public ::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_AOSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_AOSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_AOSettings(HBAO_AOSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_AOSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_AOSettings(HBAO_AOSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20246};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings) == 0x18, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::SettingsGroup
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/TemporalFilterSettings
class CORDL_TYPE HBAO_TemporalFilterSettings : public ::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_TemporalFilterSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_TemporalFilterSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_TemporalFilterSettings(HBAO_TemporalFilterSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_TemporalFilterSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_TemporalFilterSettings(HBAO_TemporalFilterSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20247};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings) == 0x18, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::SettingsGroup
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/BlurSettings
class CORDL_TYPE HBAO_BlurSettings : public ::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_BlurSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_BlurSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_BlurSettings(HBAO_BlurSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_BlurSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_BlurSettings(HBAO_BlurSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20248};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings) == 0x18, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies HorizonBasedAmbientOcclusion.Universal.HBAO::SettingsGroup
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO/ColorBleedingSettings
class CORDL_TYPE HBAO_ColorBleedingSettings : public ::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup {
public:
// Declarations
static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x1803b3b50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HBAO_ColorBleedingSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HBAO_ColorBleedingSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HBAO_ColorBleedingSettings(HBAO_ColorBleedingSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HBAO_ColorBleedingSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HBAO_ColorBleedingSettings(HBAO_ColorBleedingSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20249};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings) == 0x18, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
// Dependencies UnityEngine.Rendering.VolumeComponent
namespace HorizonBasedAmbientOcclusion::Universal {
// Is value type: false
// CS Name: HorizonBasedAmbientOcclusion.Universal.HBAO
class CORDL_TYPE HBAO : public ::UnityEngine::Rendering::VolumeComponent {
public:
// Declarations
using AOSettings = ::HorizonBasedAmbientOcclusion::Universal::HBAO_AOSettings;

using BlurSettings = ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurSettings;

using BlurType = ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType;

using BlurTypeParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter;

using ColorBleedingSettings = ::HorizonBasedAmbientOcclusion::Universal::HBAO_ColorBleedingSettings;

using DebugMode = ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode;

using DebugModeParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter;

using Deinterleaving = ::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving;

using DeinterleavingParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter;

using GeneralSettings = ::HorizonBasedAmbientOcclusion::Universal::HBAO_GeneralSettings;

using MinMaxFloatParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter;

using Mode = ::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode;

using ModeParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter;

using NoiseType = ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType;

using NoiseTypeParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter;

using ParameterDisplayName = ::HorizonBasedAmbientOcclusion::Universal::HBAO_ParameterDisplayName;

using PerPixelNormals = ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals;

using PerPixelNormalsParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter;

using Preset = ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset;

using PresetParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter;

using Presets = ::HorizonBasedAmbientOcclusion::Universal::HBAO_Presets;

using Quality = ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality;

using QualityParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter;

using RenderingPath = ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath;

using RenderingPathParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter;

using Resolution = ::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution;

using ResolutionParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter;

using SettingsGroup = ::HorizonBasedAmbientOcclusion::Universal::HBAO_SettingsGroup;

using TemporalFilterSettings = ::HorizonBasedAmbientOcclusion::Universal::HBAO_TemporalFilterSettings;

using VarianceClipping = ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping;

using VarianceClippingParameter = ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter;

/// @brief Field baseColor, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseColor, put=__cordl_internal_set_baseColor)) ::UnityEngine::Rendering::ColorParameter*  baseColor;

/// @brief Field bias, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_bias, put=__cordl_internal_set_bias)) ::UnityEngine::Rendering::ClampedFloatParameter*  bias;

/// @brief Field blurType, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_blurType, put=__cordl_internal_set_blurType)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter*  blurType;

/// @brief Field brightnessMask, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_brightnessMask, put=__cordl_internal_set_brightnessMask)) ::UnityEngine::Rendering::ClampedFloatParameter*  brightnessMask;

/// @brief Field brightnessMaskRange, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_brightnessMaskRange, put=__cordl_internal_set_brightnessMaskRange)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter*  brightnessMaskRange;

/// @brief Field colorBleedingEnabled, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorBleedingEnabled, put=__cordl_internal_set_colorBleedingEnabled)) ::UnityEngine::Rendering::BoolParameter*  colorBleedingEnabled;

/// @brief Field debugMode, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugMode, put=__cordl_internal_set_debugMode)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter*  debugMode;

/// @brief Field deinterleaving, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_deinterleaving, put=__cordl_internal_set_deinterleaving)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter*  deinterleaving;

/// @brief Field directLightingStrength, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_directLightingStrength, put=__cordl_internal_set_directLightingStrength)) ::UnityEngine::Rendering::ClampedFloatParameter*  directLightingStrength;

/// @brief Field distanceFalloff, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_distanceFalloff, put=__cordl_internal_set_distanceFalloff)) ::UnityEngine::Rendering::FloatParameter*  distanceFalloff;

/// @brief Field intensity, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) ::UnityEngine::Rendering::ClampedFloatParameter*  intensity;

/// @brief Field maxDistance, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) ::UnityEngine::Rendering::FloatParameter*  maxDistance;

/// @brief Field maxRadiusPixels, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxRadiusPixels, put=__cordl_internal_set_maxRadiusPixels)) ::UnityEngine::Rendering::ClampedFloatParameter*  maxRadiusPixels;

/// @brief Field mode, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter*  mode;

/// @brief Field multiBounceInfluence, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_multiBounceInfluence, put=__cordl_internal_set_multiBounceInfluence)) ::UnityEngine::Rendering::ClampedFloatParameter*  multiBounceInfluence;

/// @brief Field noiseType, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_noiseType, put=__cordl_internal_set_noiseType)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter*  noiseType;

/// @brief Field offscreenSamplesContribution, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_offscreenSamplesContribution, put=__cordl_internal_set_offscreenSamplesContribution)) ::UnityEngine::Rendering::ClampedFloatParameter*  offscreenSamplesContribution;

/// @brief Field perPixelNormals, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_perPixelNormals, put=__cordl_internal_set_perPixelNormals)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter*  perPixelNormals;

/// @brief Field preset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter*  preset;

/// @brief Field quality, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_quality, put=__cordl_internal_set_quality)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter*  quality;

/// @brief Field radius, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) ::UnityEngine::Rendering::ClampedFloatParameter*  radius;

/// @brief Field renderingPath, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderingPath, put=__cordl_internal_set_renderingPath)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter*  renderingPath;

/// @brief Field resolution, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_resolution, put=__cordl_internal_set_resolution)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter*  resolution;

/// @brief Field saturation, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_saturation, put=__cordl_internal_set_saturation)) ::UnityEngine::Rendering::ClampedFloatParameter*  saturation;

/// @brief Field sharpness, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharpness, put=__cordl_internal_set_sharpness)) ::UnityEngine::Rendering::ClampedFloatParameter*  sharpness;

/// @brief Field temporalFilterEnabled, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_temporalFilterEnabled, put=__cordl_internal_set_temporalFilterEnabled)) ::UnityEngine::Rendering::BoolParameter*  temporalFilterEnabled;

/// @brief Field useMultiBounce, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_useMultiBounce, put=__cordl_internal_set_useMultiBounce)) ::UnityEngine::Rendering::BoolParameter*  useMultiBounce;

/// @brief Field varianceClipping, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_varianceClipping, put=__cordl_internal_set_varianceClipping)) ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter*  varianceClipping;

/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr operator  ::UnityEngine::Rendering::IPostProcessComponent*() noexcept;

/// @brief Method ApplyPreset, addr 0x1813fc400, size 0x3a0, virtual false, abstract: false, final false
inline void ApplyPreset(::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset  preset) ;

/// @brief Method EnableColorBleeding, addr 0x1813fc7a0, size 0x30, virtual false, abstract: false, final false
inline void EnableColorBleeding(bool  enabled) ;

/// @brief Method EnableHBAO, addr 0x1813fc7d0, size 0x30, virtual false, abstract: false, final false
inline void EnableHBAO(bool  enable) ;

/// @brief Method EnableMultiBounce, addr 0x1813fc800, size 0x30, virtual false, abstract: false, final false
inline void EnableMultiBounce(bool  enabled) ;

/// @brief Method EnableTemporalFilter, addr 0x1813fc830, size 0x30, virtual false, abstract: false, final false
inline void EnableTemporalFilter(bool  enabled) ;

/// @brief Method GetAoBias, addr 0x1813fc860, size 0x30, virtual false, abstract: false, final false
inline float_t GetAoBias() ;

/// @brief Method GetAoColor, addr 0x1813fc890, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetAoColor() ;

/// @brief Method GetAoDistanceFalloff, addr 0x1813fc8e0, size 0x30, virtual false, abstract: false, final false
inline float_t GetAoDistanceFalloff() ;

/// @brief Method GetAoIntensity, addr 0x1813fc910, size 0x30, virtual false, abstract: false, final false
inline float_t GetAoIntensity() ;

/// @brief Method GetAoMaxDistance, addr 0x1813fc940, size 0x30, virtual false, abstract: false, final false
inline float_t GetAoMaxDistance() ;

/// @brief Method GetAoMaxRadiusPixels, addr 0x1813fc970, size 0x30, virtual false, abstract: false, final false
inline float_t GetAoMaxRadiusPixels() ;

/// @brief Method GetAoMultiBounceInfluence, addr 0x1813fc9a0, size 0x30, virtual false, abstract: false, final false
inline float_t GetAoMultiBounceInfluence() ;

/// @brief Method GetAoOffscreenSamplesContribution, addr 0x1813fc9d0, size 0x30, virtual false, abstract: false, final false
inline float_t GetAoOffscreenSamplesContribution() ;

/// @brief Method GetAoPerPixelNormals, addr 0x1813fca00, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals GetAoPerPixelNormals() ;

/// @brief Method GetAoRadius, addr 0x1813fca30, size 0x30, virtual false, abstract: false, final false
inline float_t GetAoRadius() ;

/// @brief Method GetBlurSharpness, addr 0x1813fca60, size 0x30, virtual false, abstract: false, final false
inline float_t GetBlurSharpness() ;

/// @brief Method GetBlurType, addr 0x1813fca90, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType GetBlurType() ;

/// @brief Method GetColorBleedingBrightnessMask, addr 0x1813fcaf0, size 0x30, virtual false, abstract: false, final false
inline float_t GetColorBleedingBrightnessMask() ;

/// @brief Method GetColorBleedingBrightnessMaskRange, addr 0x1813fcac0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetColorBleedingBrightnessMaskRange() ;

/// @brief Method GetColorBleedingSaturation, addr 0x1813fcb20, size 0x30, virtual false, abstract: false, final false
inline float_t GetColorBleedingSaturation() ;

/// @brief Method GetCurrentPreset, addr 0x1813fcb50, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Preset GetCurrentPreset() ;

/// @brief Method GetDebugMode, addr 0x1813fcb80, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode GetDebugMode() ;

/// @brief Method GetDeinterleaving, addr 0x1813fcbb0, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving GetDeinterleaving() ;

/// @brief Method GetMode, addr 0x1813fcbe0, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode GetMode() ;

/// @brief Method GetNoiseType, addr 0x1813fcc10, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType GetNoiseType() ;

/// @brief Method GetQuality, addr 0x1813fcc40, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality GetQuality() ;

/// @brief Method GetRenderingPath, addr 0x1813fcc70, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath GetRenderingPath() ;

/// @brief Method GetResolution, addr 0x1813fcca0, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution GetResolution() ;

/// @brief Method GetTemporalFilterVarianceClipping, addr 0x1813fccd0, size 0x30, virtual false, abstract: false, final false
inline ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping GetTemporalFilterVarianceClipping() ;

/// @brief Method IsActive, addr 0x1813fcd00, size 0x70, virtual true, abstract: false, final true
inline bool IsActive() ;

/// @brief Method IsColorBleedingEnabled, addr 0x1813fcd70, size 0x30, virtual false, abstract: false, final false
inline bool IsColorBleedingEnabled() ;

/// @brief Method IsTemporalFilterEnabled, addr 0x1813fcda0, size 0x30, virtual false, abstract: false, final false
inline bool IsTemporalFilterEnabled() ;

/// @brief Method IsTileCompatible, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool IsTileCompatible() ;

static inline ::HorizonBasedAmbientOcclusion::Universal::HBAO* New_ctor() ;

/// @brief Method SetAoBias, addr 0x1813fcdd0, size 0x40, virtual false, abstract: false, final false
inline void SetAoBias(float_t  bias) ;

/// @brief Method SetAoColor, addr 0x1813fce10, size 0x30, virtual false, abstract: false, final false
inline void SetAoColor(::UnityEngine::Color  baseColor) ;

/// @brief Method SetAoDistanceFalloff, addr 0x1813fce40, size 0x30, virtual false, abstract: false, final false
inline void SetAoDistanceFalloff(float_t  distanceFalloff) ;

/// @brief Method SetAoIntensity, addr 0x1813fce70, size 0x40, virtual false, abstract: false, final false
inline void SetAoIntensity(float_t  intensity) ;

/// @brief Method SetAoMaxDistance, addr 0x1813fceb0, size 0x30, virtual false, abstract: false, final false
inline void SetAoMaxDistance(float_t  maxDistance) ;

/// @brief Method SetAoMaxRadiusPixels, addr 0x1813fcee0, size 0x40, virtual false, abstract: false, final false
inline void SetAoMaxRadiusPixels(float_t  maxRadiusPixels) ;

/// @brief Method SetAoMultiBounceInfluence, addr 0x1813fcf20, size 0x40, virtual false, abstract: false, final false
inline void SetAoMultiBounceInfluence(float_t  multiBounceInfluence) ;

/// @brief Method SetAoOffscreenSamplesContribution, addr 0x1813fcf60, size 0x40, virtual false, abstract: false, final false
inline void SetAoOffscreenSamplesContribution(float_t  offscreenSamplesContribution) ;

/// @brief Method SetAoPerPixelNormals, addr 0x1813fcfa0, size 0x30, virtual false, abstract: false, final false
inline void SetAoPerPixelNormals(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals  perPixelNormals) ;

/// @brief Method SetAoRadius, addr 0x1813fcfd0, size 0x40, virtual false, abstract: false, final false
inline void SetAoRadius(float_t  radius) ;

/// @brief Method SetBlurSharpness, addr 0x1813fd010, size 0x40, virtual false, abstract: false, final false
inline void SetBlurSharpness(float_t  sharpness) ;

/// @brief Method SetBlurType, addr 0x1813fd050, size 0x30, virtual false, abstract: false, final false
inline void SetBlurType(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  blurType) ;

/// @brief Method SetColorBleedingBrightnessMask, addr 0x1813fd110, size 0x40, virtual false, abstract: false, final false
inline void SetColorBleedingBrightnessMask(float_t  brightnessMask) ;

/// @brief Method SetColorBleedingBrightnessMaskRange, addr 0x1813fd080, size 0x90, virtual false, abstract: false, final false
inline void SetColorBleedingBrightnessMaskRange(::UnityEngine::Vector2  brightnessMaskRange) ;

/// @brief Method SetColorBleedingSaturation, addr 0x1813fd150, size 0x40, virtual false, abstract: false, final false
inline void SetColorBleedingSaturation(float_t  saturation) ;

/// @brief Method SetDebugMode, addr 0x1813fd190, size 0x20, virtual false, abstract: false, final false
inline void SetDebugMode(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  debugMode) ;

/// @brief Method SetDeinterleaving, addr 0x1813fd1b0, size 0x20, virtual false, abstract: false, final false
inline void SetDeinterleaving(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving  deinterleaving) ;

/// @brief Method SetMode, addr 0x1813fd1d0, size 0x20, virtual false, abstract: false, final false
inline void SetMode(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode  mode) ;

/// @brief Method SetNoiseType, addr 0x1813fd1f0, size 0x20, virtual false, abstract: false, final false
inline void SetNoiseType(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType  noiseType) ;

/// @brief Method SetQuality, addr 0x1813fd210, size 0x20, virtual false, abstract: false, final false
inline void SetQuality(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  quality) ;

/// @brief Method SetRenderingPath, addr 0x1813fd230, size 0x20, virtual false, abstract: false, final false
inline void SetRenderingPath(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPath  renderingPath) ;

/// @brief Method SetResolution, addr 0x1813fd250, size 0x20, virtual false, abstract: false, final false
inline void SetResolution(::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution  resolution) ;

/// @brief Method SetTemporalFilterVarianceClipping, addr 0x1813fd270, size 0x30, virtual false, abstract: false, final false
inline void SetTemporalFilterVarianceClipping(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping  varianceClipping) ;

/// @brief Method UseMultiBounce, addr 0x1813fd2a0, size 0x30, virtual false, abstract: false, final false
inline bool UseMultiBounce() ;

constexpr ::UnityEngine::Rendering::ColorParameter* const& __cordl_internal_get_baseColor() const;

constexpr ::UnityEngine::Rendering::ColorParameter*& __cordl_internal_get_baseColor() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_bias() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_bias() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter* const& __cordl_internal_get_blurType() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter*& __cordl_internal_get_blurType() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_brightnessMask() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_brightnessMask() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter* const& __cordl_internal_get_brightnessMaskRange() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter*& __cordl_internal_get_brightnessMaskRange() ;

constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_colorBleedingEnabled() const;

constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_colorBleedingEnabled() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter* const& __cordl_internal_get_debugMode() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter*& __cordl_internal_get_debugMode() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter* const& __cordl_internal_get_deinterleaving() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter*& __cordl_internal_get_deinterleaving() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_directLightingStrength() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_directLightingStrength() ;

constexpr ::UnityEngine::Rendering::FloatParameter* const& __cordl_internal_get_distanceFalloff() const;

constexpr ::UnityEngine::Rendering::FloatParameter*& __cordl_internal_get_distanceFalloff() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_intensity() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_intensity() ;

constexpr ::UnityEngine::Rendering::FloatParameter* const& __cordl_internal_get_maxDistance() const;

constexpr ::UnityEngine::Rendering::FloatParameter*& __cordl_internal_get_maxDistance() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_maxRadiusPixels() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_maxRadiusPixels() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter* const& __cordl_internal_get_mode() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter*& __cordl_internal_get_mode() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_multiBounceInfluence() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_multiBounceInfluence() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter* const& __cordl_internal_get_noiseType() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter*& __cordl_internal_get_noiseType() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_offscreenSamplesContribution() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_offscreenSamplesContribution() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter* const& __cordl_internal_get_perPixelNormals() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter*& __cordl_internal_get_perPixelNormals() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter* const& __cordl_internal_get_preset() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter*& __cordl_internal_get_preset() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter* const& __cordl_internal_get_quality() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter*& __cordl_internal_get_quality() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_radius() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_radius() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter* const& __cordl_internal_get_renderingPath() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter*& __cordl_internal_get_renderingPath() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter* const& __cordl_internal_get_resolution() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter*& __cordl_internal_get_resolution() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_saturation() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_saturation() ;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& __cordl_internal_get_sharpness() const;

constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& __cordl_internal_get_sharpness() ;

constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_temporalFilterEnabled() const;

constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_temporalFilterEnabled() ;

constexpr ::UnityEngine::Rendering::BoolParameter* const& __cordl_internal_get_useMultiBounce() const;

constexpr ::UnityEngine::Rendering::BoolParameter*& __cordl_internal_get_useMultiBounce() ;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter* const& __cordl_internal_get_varianceClipping() const;

constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter*& __cordl_internal_get_varianceClipping() ;

constexpr void __cordl_internal_set_baseColor(::UnityEngine::Rendering::ColorParameter*  value) ;

constexpr void __cordl_internal_set_bias(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_blurType(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter*  value) ;

constexpr void __cordl_internal_set_brightnessMask(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_brightnessMaskRange(::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter*  value) ;

constexpr void __cordl_internal_set_colorBleedingEnabled(::UnityEngine::Rendering::BoolParameter*  value) ;

constexpr void __cordl_internal_set_debugMode(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter*  value) ;

constexpr void __cordl_internal_set_deinterleaving(::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter*  value) ;

constexpr void __cordl_internal_set_directLightingStrength(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_distanceFalloff(::UnityEngine::Rendering::FloatParameter*  value) ;

constexpr void __cordl_internal_set_intensity(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_maxDistance(::UnityEngine::Rendering::FloatParameter*  value) ;

constexpr void __cordl_internal_set_maxRadiusPixels(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_mode(::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter*  value) ;

constexpr void __cordl_internal_set_multiBounceInfluence(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_noiseType(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter*  value) ;

constexpr void __cordl_internal_set_offscreenSamplesContribution(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_perPixelNormals(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter*  value) ;

constexpr void __cordl_internal_set_preset(::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter*  value) ;

constexpr void __cordl_internal_set_quality(::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter*  value) ;

constexpr void __cordl_internal_set_radius(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_renderingPath(::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter*  value) ;

constexpr void __cordl_internal_set_resolution(::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter*  value) ;

constexpr void __cordl_internal_set_saturation(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_sharpness(::UnityEngine::Rendering::ClampedFloatParameter*  value) ;

constexpr void __cordl_internal_set_temporalFilterEnabled(::UnityEngine::Rendering::BoolParameter*  value) ;

constexpr void __cordl_internal_set_useMultiBounce(::UnityEngine::Rendering::BoolParameter*  value) ;

constexpr void __cordl_internal_set_varianceClipping(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter*  value) ;

/// @brief Method .ctor, addr 0x1813fd2d0, size 0x6f0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* i___UnityEngine__Rendering__IPostProcessComponent() noexcept;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20250};

/// @brief Field preset, offset: 0x38, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_PresetParameter*  ___preset;

/// @brief Field mode, offset: 0x40, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_ModeParameter*  ___mode;

/// @brief Field renderingPath, offset: 0x48, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_RenderingPathParameter*  ___renderingPath;

/// @brief Field quality, offset: 0x50, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_QualityParameter*  ___quality;

/// @brief Field deinterleaving, offset: 0x58, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_DeinterleavingParameter*  ___deinterleaving;

/// @brief Field resolution, offset: 0x60, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_ResolutionParameter*  ___resolution;

/// @brief Field noiseType, offset: 0x68, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseTypeParameter*  ___noiseType;

/// @brief Field debugMode, offset: 0x70, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugModeParameter*  ___debugMode;

/// @brief Field radius, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___radius;

/// @brief Field maxRadiusPixels, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___maxRadiusPixels;

/// @brief Field bias, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___bias;

/// @brief Field intensity, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___intensity;

/// @brief Field useMultiBounce, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Rendering::BoolParameter*  ___useMultiBounce;

/// @brief Field multiBounceInfluence, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___multiBounceInfluence;

/// @brief Field directLightingStrength, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___directLightingStrength;

/// @brief Field offscreenSamplesContribution, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___offscreenSamplesContribution;

/// @brief Field maxDistance, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Rendering::FloatParameter*  ___maxDistance;

/// @brief Field distanceFalloff, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::Rendering::FloatParameter*  ___distanceFalloff;

/// @brief Field perPixelNormals, offset: 0xc8, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormalsParameter*  ___perPixelNormals;

/// @brief Field baseColor, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Rendering::ColorParameter*  ___baseColor;

/// @brief Field temporalFilterEnabled, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::Rendering::BoolParameter*  ___temporalFilterEnabled;

/// @brief Field varianceClipping, offset: 0xe0, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClippingParameter*  ___varianceClipping;

/// @brief Field blurType, offset: 0xe8, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurTypeParameter*  ___blurType;

/// @brief Field sharpness, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___sharpness;

/// @brief Field colorBleedingEnabled, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::Rendering::BoolParameter*  ___colorBleedingEnabled;

/// @brief Field saturation, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___saturation;

/// @brief Field brightnessMask, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::Rendering::ClampedFloatParameter*  ___brightnessMask;

/// @brief Field brightnessMaskRange, offset: 0x110, size: 0x8, def value: None
 ::HorizonBasedAmbientOcclusion::Universal::HBAO_MinMaxFloatParameter*  ___brightnessMaskRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___preset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___mode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___renderingPath) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___quality) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___deinterleaving) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___resolution) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___noiseType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___debugMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___radius) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___maxRadiusPixels) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___bias) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___intensity) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___useMultiBounce) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___multiBounceInfluence) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___directLightingStrength) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___offscreenSamplesContribution) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___maxDistance) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___distanceFalloff) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___perPixelNormals) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___baseColor) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___temporalFilterEnabled) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___varianceClipping) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___blurType) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___sharpness) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___colorBleedingEnabled) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___saturation) == 0x100, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___brightnessMask) == 0x108, "Offset mismatch!");

static_assert(offsetof(::HorizonBasedAmbientOcclusion::Universal::HBAO, ___brightnessMaskRange) == 0x110, "Offset mismatch!");

static_assert(sizeof(::HorizonBasedAmbientOcclusion::Universal::HBAO) == 0x118, "Size mismatch!");

} // namespace end def HorizonBasedAmbientOcclusion::Universal
