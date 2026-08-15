#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ShapeWaves.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShapeWaves)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class IReportWaveDisplacement;
}
namespace WaveHarmonic::Crest {
class IReportsDisplacement;
}
namespace WaveHarmonic::Crest {
struct LodInputMode;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
struct ShapeWaves_AlphaSource;
}
namespace WaveHarmonic::Crest {
class ShapeWaves_Reporter;
}
namespace WaveHarmonic::Crest {
class ShapeWaves_ShaderIDs;
}
namespace WaveHarmonic::Crest {
struct ShapeWaves_WindSpeedSource;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
namespace WaveHarmonic::Crest {
class WaveSpectrum;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct ShapeWaves_AlphaSource;
}
namespace WaveHarmonic::Crest {
struct ShapeWaves_WindSpeedSource;
}
namespace WaveHarmonic::Crest {
class ShapeWaves;
}
namespace WaveHarmonic::Crest {
class ShapeWaves_Reporter;
}
namespace WaveHarmonic::Crest {
class ShapeWaves_ShaderIDs;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::ShapeWaves_AlphaSource);
MARK_VAL_T(::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource);
MARK_REF_T(::WaveHarmonic::Crest::ShapeWaves*);
MARK_REF_T(::WaveHarmonic::Crest::ShapeWaves_Reporter*);
MARK_REF_T(::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShapeWaves_AlphaSource, "WaveHarmonic.Crest", "ShapeWaves/AlphaSource");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource, "WaveHarmonic.Crest", "ShapeWaves/WindSpeedSource");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShapeWaves*, "WaveHarmonic.Crest", "ShapeWaves");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShapeWaves_Reporter*, "WaveHarmonic.Crest", "ShapeWaves/Reporter");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ShapeWaves_ShaderIDs*, "WaveHarmonic.Crest", "ShapeWaves/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShapeWaves/ShaderIDs
class CORDL_TYPE ShapeWaves_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_AlphaSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_AlphaSource, put=setStaticF_s_AlphaSource)) int32_t  s_AlphaSource;

/// @brief Field s_AverageWavelength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_AverageWavelength, put=setStaticF_s_AverageWavelength)) int32_t  s_AverageWavelength;

/// @brief Field s_AxisX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_AxisX, put=setStaticF_s_AxisX)) int32_t  s_AxisX;

/// @brief Field s_MaximumAttenuationDepth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_MaximumAttenuationDepth, put=setStaticF_s_MaximumAttenuationDepth)) int32_t  s_MaximumAttenuationDepth;

/// @brief Field s_RespectShallowWaterAttenuation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_RespectShallowWaterAttenuation, put=setStaticF_s_RespectShallowWaterAttenuation)) int32_t  s_RespectShallowWaterAttenuation;

/// @brief Field s_SeaLevelOnly, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SeaLevelOnly, put=setStaticF_s_SeaLevelOnly)) int32_t  s_SeaLevelOnly;

/// @brief Field s_TransitionalWavelengthThreshold, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_TransitionalWavelengthThreshold, put=setStaticF_s_TransitionalWavelengthThreshold)) int32_t  s_TransitionalWavelengthThreshold;

/// @brief Field s_WaveBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaveBuffer, put=setStaticF_s_WaveBuffer)) int32_t  s_WaveBuffer;

/// @brief Field s_WaveBufferAttenuation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaveBufferAttenuation, put=setStaticF_s_WaveBufferAttenuation)) int32_t  s_WaveBufferAttenuation;

/// @brief Field s_WaveBufferParameters, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaveBufferParameters, put=setStaticF_s_WaveBufferParameters)) int32_t  s_WaveBufferParameters;

/// @brief Field s_WaveBufferSliceIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaveBufferSliceIndex, put=setStaticF_s_WaveBufferSliceIndex)) int32_t  s_WaveBufferSliceIndex;

/// @brief Field s_WaveResolutionMultiplier, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaveResolutionMultiplier, put=setStaticF_s_WaveResolutionMultiplier)) int32_t  s_WaveResolutionMultiplier;

static inline int32_t getStaticF_s_AlphaSource() ;

static inline int32_t getStaticF_s_AverageWavelength() ;

static inline int32_t getStaticF_s_AxisX() ;

static inline int32_t getStaticF_s_MaximumAttenuationDepth() ;

static inline int32_t getStaticF_s_RespectShallowWaterAttenuation() ;

static inline int32_t getStaticF_s_SeaLevelOnly() ;

static inline int32_t getStaticF_s_TransitionalWavelengthThreshold() ;

static inline int32_t getStaticF_s_WaveBuffer() ;

static inline int32_t getStaticF_s_WaveBufferAttenuation() ;

static inline int32_t getStaticF_s_WaveBufferParameters() ;

static inline int32_t getStaticF_s_WaveBufferSliceIndex() ;

static inline int32_t getStaticF_s_WaveResolutionMultiplier() ;

static inline void setStaticF_s_AlphaSource(int32_t  value) ;

static inline void setStaticF_s_AverageWavelength(int32_t  value) ;

static inline void setStaticF_s_AxisX(int32_t  value) ;

static inline void setStaticF_s_MaximumAttenuationDepth(int32_t  value) ;

static inline void setStaticF_s_RespectShallowWaterAttenuation(int32_t  value) ;

static inline void setStaticF_s_SeaLevelOnly(int32_t  value) ;

static inline void setStaticF_s_TransitionalWavelengthThreshold(int32_t  value) ;

static inline void setStaticF_s_WaveBuffer(int32_t  value) ;

static inline void setStaticF_s_WaveBufferAttenuation(int32_t  value) ;

static inline void setStaticF_s_WaveBufferParameters(int32_t  value) ;

static inline void setStaticF_s_WaveBufferSliceIndex(int32_t  value) ;

static inline void setStaticF_s_WaveResolutionMultiplier(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeWaves_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeWaves_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeWaves_ShaderIDs(ShapeWaves_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeWaves_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeWaves_ShaderIDs(ShapeWaves_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16543};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ShapeWaves_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.ShapeWaves/WindSpeedSource
struct CORDL_TYPE ShapeWaves_WindSpeedSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShapeWaves_WindSpeedSource_Unwrapped
enum struct __ShapeWaves_WindSpeedSource_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ShapeWaves = static_cast<int32_t>(0x1),
__E_WaterRenderer = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShapeWaves_WindSpeedSource_Unwrapped () const noexcept {
return static_cast<__ShapeWaves_WindSpeedSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ShapeWaves_WindSpeedSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShapeWaves_WindSpeedSource(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource const None;

/// @brief Field ShapeWaves value: I32(1)
static ::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource const ShapeWaves;

/// @brief Field WaterRenderer value: I32(2)
static ::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource const WaterRenderer;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16544};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShapeWaves/Reporter
class CORDL_TYPE ShapeWaves_Reporter : public ::System::Object {
public:
// Declarations
/// @brief Field _Input, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Input, put=__cordl_internal_set__Input)) ::UnityW<::WaveHarmonic::Crest::ShapeWaves>  _Input;

/// @brief Convert operator to "::WaveHarmonic::Crest::IReportWaveDisplacement"
constexpr operator  ::WaveHarmonic::Crest::IReportWaveDisplacement*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IReportsDisplacement"
constexpr operator  ::WaveHarmonic::Crest::IReportsDisplacement*() noexcept;

static inline ::WaveHarmonic::Crest::ShapeWaves_Reporter* New_ctor(::WaveHarmonic::Crest::ShapeWaves*  input) ;

/// @brief Method ReportDisplacement, addr 0x18255bc00, size 0x1c0, virtual true, abstract: false, final true
inline bool ReportDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  horizontal, ::by_ref<float_t>  vertical) ;

/// @brief Method ReportWaveDisplacement, addr 0x18255be20, size 0x140, virtual true, abstract: false, final true
inline float_t ReportWaveDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  displacement) ;

constexpr ::UnityW<::WaveHarmonic::Crest::ShapeWaves> const& __cordl_internal_get__Input() const;

constexpr ::UnityW<::WaveHarmonic::Crest::ShapeWaves>& __cordl_internal_get__Input() ;

constexpr void __cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::ShapeWaves>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::ShapeWaves*  input) ;

/// @brief Convert to "::WaveHarmonic::Crest::IReportWaveDisplacement"
constexpr ::WaveHarmonic::Crest::IReportWaveDisplacement* i___WaveHarmonic__Crest__IReportWaveDisplacement() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IReportsDisplacement"
constexpr ::WaveHarmonic::Crest::IReportsDisplacement* i___WaveHarmonic__Crest__IReportsDisplacement() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeWaves_Reporter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeWaves_Reporter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeWaves_Reporter(ShapeWaves_Reporter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeWaves_Reporter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeWaves_Reporter(ShapeWaves_Reporter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16545};

/// @brief Field _Input, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::ShapeWaves>  ____Input;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves_Reporter, ____Input) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ShapeWaves_Reporter) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.ShapeWaves/AlphaSource
struct CORDL_TYPE ShapeWaves_AlphaSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ShapeWaves_AlphaSource_Unwrapped
enum struct __ShapeWaves_AlphaSource_Unwrapped : int32_t {
__E_AlwaysOne = static_cast<int32_t>(0x0),
__E_FromZero = static_cast<int32_t>(0x1),
__E_FromZeroNormalized = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShapeWaves_AlphaSource_Unwrapped () const noexcept {
return static_cast<__ShapeWaves_AlphaSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ShapeWaves_AlphaSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShapeWaves_AlphaSource(int32_t  value__) noexcept;

/// @brief Field AlwaysOne value: I32(0)
static ::WaveHarmonic::Crest::ShapeWaves_AlphaSource const AlwaysOne;

/// @brief Field FromZero value: I32(1)
static ::WaveHarmonic::Crest::ShapeWaves_AlphaSource const FromZero;

/// @brief Field FromZeroNormalized value: I32(2)
static ::WaveHarmonic::Crest::ShapeWaves_AlphaSource const FromZeroNormalized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16546};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves_AlphaSource, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ShapeWaves_AlphaSource) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Rect, UnityEngine.Rendering.LocalKeyword, UnityEngine.Vector2, UnityEngine.Vector4, WaveHarmonic.Crest.LodInput, WaveHarmonic.Crest.ShapeWaves::AlphaSource
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ShapeWaves
class CORDL_TYPE ShapeWaves : public ::WaveHarmonic::Crest::LodInput {
public:
// Declarations
using AlphaSource = ::WaveHarmonic::Crest::ShapeWaves_AlphaSource;

using Reporter = ::WaveHarmonic::Crest::ShapeWaves_Reporter;

using ShaderIDs = ::WaveHarmonic::Crest::ShapeWaves_ShaderIDs;

using WindSpeedSource = ::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource;

 __declspec(property(get=get_BicubicSampling, put=set_BicubicSampling)) bool  BicubicSampling;

 __declspec(property(get=get_DefaultMode)) ::WaveHarmonic::Crest::LodInputMode  DefaultMode;

 __declspec(property(get=get_DefaultSpectrum)) ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  DefaultSpectrum;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_EvaluateSpectrumAtRunTimeEveryFrame, put=set_EvaluateSpectrumAtRunTimeEveryFrame)) bool  EvaluateSpectrumAtRunTimeEveryFrame;

 __declspec(property(get=get_FollowHorizontalMotion)) bool  FollowHorizontalMotion;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_IncludeInDropDetailHeightBasedOnWaves, put=set_IncludeInDropDetailHeightBasedOnWaves)) bool  IncludeInDropDetailHeightBasedOnWaves;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_MaximumReportedHorizontalDisplacement, put=set_MaximumReportedHorizontalDisplacement)) float_t  MaximumReportedHorizontalDisplacement;

 __declspec(property(get=get_MaximumReportedVerticalDisplacement, put=set_MaximumReportedVerticalDisplacement)) float_t  MaximumReportedVerticalDisplacement;

 __declspec(property(get=get_MaximumReportedWavesDisplacement, put=set_MaximumReportedWavesDisplacement)) float_t  MaximumReportedWavesDisplacement;

 __declspec(property(get=get_MaximumResolution)) int32_t  MaximumResolution;

 __declspec(property(get=get_MinimumResolution)) int32_t  MinimumResolution;

 __declspec(property(get=get_OverrideGlobalWindDirection, put=set_OverrideGlobalWindDirection)) bool  OverrideGlobalWindDirection;

 __declspec(property(get=get_OverrideGlobalWindSpeed, put=set_OverrideGlobalWindSpeed)) bool  OverrideGlobalWindSpeed;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_PrimaryWaveDirection)) ::UnityEngine::Vector2  PrimaryWaveDirection;

 __declspec(property(get=get_Resolution, put=set_Resolution)) int32_t  Resolution;

 __declspec(property(get=get_RespectShallowWaterAttenuation, put=set_RespectShallowWaterAttenuation)) float_t  RespectShallowWaterAttenuation;

 __declspec(property(get=get_SeaLevelOnly, put=set_SeaLevelOnly)) bool  SeaLevelOnly;

 __declspec(property(get=get_Spectrum, put=set_Spectrum)) ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  Spectrum;

 __declspec(property(get=get_UpdateDataEachFrame)) bool  UpdateDataEachFrame;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_WaveBuffer)) ::UnityW<::UnityEngine::RenderTexture>  WaveBuffer;

 __declspec(property(get=get_WaveDirectionHeadingAngle, put=set_WaveDirectionHeadingAngle)) float_t  WaveDirectionHeadingAngle;

 __declspec(property(get=get_WindSpeed, put=set_WindSpeed)) float_t  WindSpeed;

 __declspec(property(get=get_WindSpeedKPH)) float_t  WindSpeedKPH;

 __declspec(property(get=get_WindSpeedMPS)) float_t  WindSpeedMPS;

/// @brief Field _ActiveSpectrum, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActiveSpectrum, put=__cordl_internal_set__ActiveSpectrum)) ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  _ActiveSpectrum;

/// @brief Field _AlphaSource, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get__AlphaSource, put=__cordl_internal_set__AlphaSource)) ::WaveHarmonic::Crest::ShapeWaves_AlphaSource  _AlphaSource;

/// @brief Field _BicubicSampling, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__BicubicSampling, put=__cordl_internal_set__BicubicSampling)) bool  _BicubicSampling;

/// @brief Field _DrawSlicesInEditor, offset 0xdd, size 0x1 
 __declspec(property(get=__cordl_internal_get__DrawSlicesInEditor, put=__cordl_internal_set__DrawSlicesInEditor)) bool  _DrawSlicesInEditor;

/// @brief Field _EvaluateSpectrumAtRunTimeEveryFrame, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__EvaluateSpectrumAtRunTimeEveryFrame, put=__cordl_internal_set__EvaluateSpectrumAtRunTimeEveryFrame)) bool  _EvaluateSpectrumAtRunTimeEveryFrame;

/// @brief Field _FirstCascade, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__FirstCascade, put=__cordl_internal_set__FirstCascade)) int32_t  _FirstCascade;

/// @brief Field _FirstUpdate, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__FirstUpdate, put=__cordl_internal_set__FirstUpdate)) bool  _FirstUpdate;

/// @brief Field _IncludeInDropDetailHeightBasedOnWaves, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get__IncludeInDropDetailHeightBasedOnWaves, put=__cordl_internal_set__IncludeInDropDetailHeightBasedOnWaves)) bool  _IncludeInDropDetailHeightBasedOnWaves;

/// @brief Field _LastCascade, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastCascade, put=__cordl_internal_set__LastCascade)) int32_t  _LastCascade;

/// @brief Field _LastGenerateFrameCount, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastGenerateFrameCount, put=__cordl_internal_set__LastGenerateFrameCount)) int32_t  _LastGenerateFrameCount;

/// @brief Field _MaximumDisplacement, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__MaximumDisplacement, put=__cordl_internal_set__MaximumDisplacement)) ::UnityEngine::Vector2  _MaximumDisplacement;

/// @brief Field <MaximumReportedHorizontalDisplacement>k__BackingField, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumReportedHorizontalDisplacement_k__BackingField, put=__cordl_internal_set__MaximumReportedHorizontalDisplacement_k__BackingField)) float_t  _MaximumReportedHorizontalDisplacement_k__BackingField;

/// @brief Field <MaximumReportedVerticalDisplacement>k__BackingField, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumReportedVerticalDisplacement_k__BackingField, put=__cordl_internal_set__MaximumReportedVerticalDisplacement_k__BackingField)) float_t  _MaximumReportedVerticalDisplacement_k__BackingField;

/// @brief Field <MaximumReportedWavesDisplacement>k__BackingField, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaximumReportedWavesDisplacement_k__BackingField, put=__cordl_internal_set__MaximumReportedWavesDisplacement_k__BackingField)) float_t  _MaximumReportedWavesDisplacement_k__BackingField;

/// @brief Field _OverrideGlobalWindDirection, offset 0xc9, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideGlobalWindDirection, put=__cordl_internal_set__OverrideGlobalWindDirection)) bool  _OverrideGlobalWindDirection;

/// @brief Field _OverrideGlobalWindSpeed, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideGlobalWindSpeed, put=__cordl_internal_set__OverrideGlobalWindSpeed)) bool  _OverrideGlobalWindSpeed;

/// @brief Field _Rect, offset 0x110, size 0x10 
 __declspec(property(get=__cordl_internal_get__Rect, put=__cordl_internal_set__Rect)) ::UnityEngine::Rect  _Rect;

/// @brief Field _Reporter, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__Reporter, put=__cordl_internal_set__Reporter)) ::WaveHarmonic::Crest::ShapeWaves_Reporter*  _Reporter;

/// @brief Field _Resolution, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__Resolution, put=__cordl_internal_set__Resolution)) int32_t  _Resolution;

/// @brief Field _RespectShallowWaterAttenuation, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__RespectShallowWaterAttenuation, put=__cordl_internal_set__RespectShallowWaterAttenuation)) float_t  _RespectShallowWaterAttenuation;

/// @brief Field _SeaLevelOnly, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__SeaLevelOnly, put=__cordl_internal_set__SeaLevelOnly)) bool  _SeaLevelOnly;

/// @brief Field _Spectrum, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Spectrum, put=__cordl_internal_set__Spectrum)) ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  _Spectrum;

/// @brief Field _WaveBufferParameters, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaveBufferParameters, put=__cordl_internal_set__WaveBufferParameters)) ::ArrayW<::UnityEngine::Vector4>  _WaveBufferParameters;

/// @brief Field _WaveBuffers, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaveBuffers, put=__cordl_internal_set__WaveBuffers)) ::UnityW<::UnityEngine::RenderTexture>  _WaveBuffers;

/// @brief Field _WaveDirectionHeadingAngle, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__WaveDirectionHeadingAngle, put=__cordl_internal_set__WaveDirectionHeadingAngle)) float_t  _WaveDirectionHeadingAngle;

/// @brief Field _Wavelength, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__Wavelength, put=__cordl_internal_set__Wavelength)) float_t  _Wavelength;

/// @brief Field _WindSpeed, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__WindSpeed, put=__cordl_internal_set__WindSpeed)) float_t  _WindSpeed;

/// @brief Field s_InstanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_InstanceCount, put=setStaticF_s_InstanceCount)) int32_t  s_InstanceCount;

/// @brief Field s_KeywordTexture, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_s_KeywordTexture, put=setStaticF_s_KeywordTexture)) ::UnityEngine::Rendering::LocalKeyword  s_KeywordTexture;

/// @brief Field s_KeywordTextureBlend, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_s_KeywordTextureBlend, put=setStaticF_s_KeywordTextureBlend)) ::UnityEngine::Rendering::LocalKeyword  s_KeywordTextureBlend;

/// @brief Field s_RenderPassOverride, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_RenderPassOverride, put=setStaticF_s_RenderPassOverride)) int32_t  s_RenderPassOverride;

/// @brief Field s_TransferWavesComputeShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TransferWavesComputeShader, put=setStaticF_s_TransferWavesComputeShader)) ::UnityW<::UnityEngine::ComputeShader>  s_TransferWavesComputeShader;

/// @brief Field s_WindSpectrum, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_WindSpectrum, put=setStaticF_s_WindSpectrum)) ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  s_WindSpectrum;

/// @brief Method Attach, addr 0x1825616e0, size 0x150, virtual true, abstract: false, final false
inline void Attach() ;

/// @brief Method Awake, addr 0x182561830, size 0x20, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Detach, addr 0x182561850, size 0x80, virtual true, abstract: false, final false
inline void Detach() ;

/// @brief Method Draw, addr 0x1825618d0, size 0x800, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method Filter, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final false
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

/// @brief Method GetResolution, addr 0x1825620d0, size 0x70, virtual false, abstract: false, final false
inline int32_t GetResolution() ;

/// @brief Method GetWaveDirectionHeadingAngle, addr 0x182562140, size 0x70, virtual false, abstract: false, final false
inline float_t GetWaveDirectionHeadingAngle() ;

/// @brief Method GetWindSpeedSource, addr 0x1825621b0, size 0x80, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::ShapeWaves_WindSpeedSource GetWindSpeedSource() ;

/// @brief Method GraphicsDraw, addr 0x182562230, size 0x340, virtual false, abstract: false, final false
inline void GraphicsDraw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method Initialize, addr 0x182562720, size 0x1e0, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method InitializeResources, addr 0x182562570, size 0x1b0, virtual false, abstract: false, final false
inline void InitializeResources() ;

/// @brief Method MinWavelength, addr 0x182562900, size 0x30, virtual false, abstract: false, final false
inline float_t MinWavelength(int32_t  cascadeIdx) ;

static inline ::WaveHarmonic::Crest::ShapeWaves* New_ctor() ;

/// @brief Method OnDestroy, addr 0x182562930, size 0x70, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1825629a0, size 0xe0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnMigrate, addr 0x182562a80, size 0x70, virtual true, abstract: false, final false
inline void OnMigrate() ;

/// @brief Method OnUpdate, addr 0x182562af0, size 0x70, virtual true, abstract: false, final false
inline void OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method ReportDisplacement, addr 0x182562b60, size 0x1d0, virtual false, abstract: false, final false
inline bool ReportDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  horizontal, ::by_ref<float_t>  vertical) ;

/// @brief Method ReportMaxDisplacement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReportMaxDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method ReportWaveDisplacement, addr 0x182562d30, size 0x150, virtual false, abstract: false, final false
inline float_t ReportWaveDisplacement(::WaveHarmonic::Crest::WaterRenderer*  water, float_t  displacement) ;

/// @brief Method SetRenderParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline void SetRenderParameters(::WaveHarmonic::Crest::WaterRenderer*  water, T  wrapper) ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> const& __cordl_internal_get__ActiveSpectrum() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>& __cordl_internal_get__ActiveSpectrum() ;

constexpr ::WaveHarmonic::Crest::ShapeWaves_AlphaSource const& __cordl_internal_get__AlphaSource() const;

constexpr ::WaveHarmonic::Crest::ShapeWaves_AlphaSource& __cordl_internal_get__AlphaSource() ;

constexpr bool const& __cordl_internal_get__BicubicSampling() const;

constexpr bool& __cordl_internal_get__BicubicSampling() ;

constexpr bool const& __cordl_internal_get__DrawSlicesInEditor() const;

constexpr bool& __cordl_internal_get__DrawSlicesInEditor() ;

constexpr bool const& __cordl_internal_get__EvaluateSpectrumAtRunTimeEveryFrame() const;

constexpr bool& __cordl_internal_get__EvaluateSpectrumAtRunTimeEveryFrame() ;

constexpr int32_t const& __cordl_internal_get__FirstCascade() const;

constexpr int32_t& __cordl_internal_get__FirstCascade() ;

constexpr bool const& __cordl_internal_get__FirstUpdate() const;

constexpr bool& __cordl_internal_get__FirstUpdate() ;

constexpr bool const& __cordl_internal_get__IncludeInDropDetailHeightBasedOnWaves() const;

constexpr bool& __cordl_internal_get__IncludeInDropDetailHeightBasedOnWaves() ;

constexpr int32_t const& __cordl_internal_get__LastCascade() const;

constexpr int32_t& __cordl_internal_get__LastCascade() ;

constexpr int32_t const& __cordl_internal_get__LastGenerateFrameCount() const;

constexpr int32_t& __cordl_internal_get__LastGenerateFrameCount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__MaximumDisplacement() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__MaximumDisplacement() ;

constexpr float_t const& __cordl_internal_get__MaximumReportedHorizontalDisplacement_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaximumReportedHorizontalDisplacement_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaximumReportedVerticalDisplacement_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaximumReportedVerticalDisplacement_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaximumReportedWavesDisplacement_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaximumReportedWavesDisplacement_k__BackingField() ;

constexpr bool const& __cordl_internal_get__OverrideGlobalWindDirection() const;

constexpr bool& __cordl_internal_get__OverrideGlobalWindDirection() ;

constexpr bool const& __cordl_internal_get__OverrideGlobalWindSpeed() const;

constexpr bool& __cordl_internal_get__OverrideGlobalWindSpeed() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get__Rect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get__Rect() ;

constexpr ::WaveHarmonic::Crest::ShapeWaves_Reporter* const& __cordl_internal_get__Reporter() const;

constexpr ::WaveHarmonic::Crest::ShapeWaves_Reporter*& __cordl_internal_get__Reporter() ;

constexpr int32_t const& __cordl_internal_get__Resolution() const;

constexpr int32_t& __cordl_internal_get__Resolution() ;

constexpr float_t const& __cordl_internal_get__RespectShallowWaterAttenuation() const;

constexpr float_t& __cordl_internal_get__RespectShallowWaterAttenuation() ;

constexpr bool const& __cordl_internal_get__SeaLevelOnly() const;

constexpr bool& __cordl_internal_get__SeaLevelOnly() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> const& __cordl_internal_get__Spectrum() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>& __cordl_internal_get__Spectrum() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get__WaveBufferParameters() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get__WaveBufferParameters() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__WaveBuffers() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__WaveBuffers() ;

constexpr float_t const& __cordl_internal_get__WaveDirectionHeadingAngle() const;

constexpr float_t& __cordl_internal_get__WaveDirectionHeadingAngle() ;

constexpr float_t const& __cordl_internal_get__Wavelength() const;

constexpr float_t& __cordl_internal_get__Wavelength() ;

constexpr float_t const& __cordl_internal_get__WindSpeed() const;

constexpr float_t& __cordl_internal_get__WindSpeed() ;

constexpr void __cordl_internal_set__ActiveSpectrum(::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  value) ;

constexpr void __cordl_internal_set__AlphaSource(::WaveHarmonic::Crest::ShapeWaves_AlphaSource  value) ;

constexpr void __cordl_internal_set__BicubicSampling(bool  value) ;

constexpr void __cordl_internal_set__DrawSlicesInEditor(bool  value) ;

constexpr void __cordl_internal_set__EvaluateSpectrumAtRunTimeEveryFrame(bool  value) ;

constexpr void __cordl_internal_set__FirstCascade(int32_t  value) ;

constexpr void __cordl_internal_set__FirstUpdate(bool  value) ;

constexpr void __cordl_internal_set__IncludeInDropDetailHeightBasedOnWaves(bool  value) ;

constexpr void __cordl_internal_set__LastCascade(int32_t  value) ;

constexpr void __cordl_internal_set__LastGenerateFrameCount(int32_t  value) ;

constexpr void __cordl_internal_set__MaximumDisplacement(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__MaximumReportedHorizontalDisplacement_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MaximumReportedVerticalDisplacement_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MaximumReportedWavesDisplacement_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__OverrideGlobalWindDirection(bool  value) ;

constexpr void __cordl_internal_set__OverrideGlobalWindSpeed(bool  value) ;

constexpr void __cordl_internal_set__Rect(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set__Reporter(::WaveHarmonic::Crest::ShapeWaves_Reporter*  value) ;

constexpr void __cordl_internal_set__Resolution(int32_t  value) ;

constexpr void __cordl_internal_set__RespectShallowWaterAttenuation(float_t  value) ;

constexpr void __cordl_internal_set__SeaLevelOnly(bool  value) ;

constexpr void __cordl_internal_set__Spectrum(::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  value) ;

constexpr void __cordl_internal_set__WaveBufferParameters(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set__WaveBuffers(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set__WaveDirectionHeadingAngle(float_t  value) ;

constexpr void __cordl_internal_set__Wavelength(float_t  value) ;

constexpr void __cordl_internal_set__WindSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x182562ec0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_s_InstanceCount() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_KeywordTexture() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_KeywordTextureBlend() ;

static inline int32_t getStaticF_s_RenderPassOverride() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_s_TransferWavesComputeShader() ;

static inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> getStaticF_s_WindSpectrum() ;

/// @brief Method get_BicubicSampling, addr 0x18030d8a0, size 0x10, virtual false, abstract: false, final false
inline bool get_BicubicSampling() ;

/// @brief Method get_DefaultMode, addr 0x180908b40, size 0x30, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::LodInputMode get_DefaultMode() ;

/// @brief Method get_DefaultSpectrum, addr 0x182562fb0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> get_DefaultSpectrum() ;

/// @brief Method get_Enabled, addr 0x182562fc0, size 0x110, virtual true, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_EvaluateSpectrumAtRunTimeEveryFrame, addr 0x181b649a0, size 0x10, virtual false, abstract: false, final false
inline bool get_EvaluateSpectrumAtRunTimeEveryFrame() ;

/// @brief Method get_FollowHorizontalMotion, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_FollowHorizontalMotion() ;

/// @brief Method get_GizmoColor, addr 0x182550900, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_IncludeInDropDetailHeightBasedOnWaves, addr 0x181965bc0, size 0x10, virtual false, abstract: false, final false
inline bool get_IncludeInDropDetailHeightBasedOnWaves() ;

/// @brief Method get_Inputs, addr 0x182550940, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_MaximumReportedHorizontalDisplacement, addr 0x18034c850, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaximumReportedHorizontalDisplacement() ;

/// @brief Method get_MaximumReportedVerticalDisplacement, addr 0x1804979c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaximumReportedVerticalDisplacement() ;

/// @brief Method get_MaximumReportedWavesDisplacement, addr 0x1825630d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaximumReportedWavesDisplacement() ;

/// @brief Method get_MaximumResolution, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_MaximumResolution() ;

/// @brief Method get_MinimumResolution, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_MinimumResolution() ;

/// @brief Method get_OverrideGlobalWindDirection, addr 0x18242c9e0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideGlobalWindDirection() ;

/// @brief Method get_OverrideGlobalWindSpeed, addr 0x180352b10, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideGlobalWindSpeed() ;

/// @brief Method get_Pass, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline int32_t get_Pass() ;

/// @brief Method get_PrimaryWaveDirection, addr 0x1825630e0, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_PrimaryWaveDirection() ;

/// @brief Method get_Resolution, addr 0x1825620d0, size 0x70, virtual false, abstract: false, final false
inline int32_t get_Resolution() ;

/// @brief Method get_RespectShallowWaterAttenuation, addr 0x1804979b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_RespectShallowWaterAttenuation() ;

/// @brief Method get_SeaLevelOnly, addr 0x180f187e0, size 0x650, virtual false, abstract: false, final false
inline bool get_SeaLevelOnly() ;

/// @brief Method get_Spectrum, addr 0x1803d9940, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> get_Spectrum() ;

/// @brief Method get_UpdateDataEachFrame, addr 0x181b649a0, size 0x10, virtual false, abstract: false, final false
inline bool get_UpdateDataEachFrame() ;

/// @brief Method get_Version, addr 0x18255ee90, size 0x20, virtual true, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Method get_WaveBuffer, addr 0x1803370c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> get_WaveBuffer() ;

/// @brief Method get_WaveDirectionHeadingAngle, addr 0x182562140, size 0x70, virtual false, abstract: false, final false
inline float_t get_WaveDirectionHeadingAngle() ;

/// @brief Method get_WindSpectrum, addr 0x1825631e0, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityW<::WaveHarmonic::Crest::WaveSpectrum> get_WindSpectrum() ;

/// @brief Method get_WindSpeed, addr 0x180497700, size 0x10, virtual false, abstract: false, final false
inline float_t get_WindSpeed() ;

/// @brief Method get_WindSpeedKPH, addr 0x1825632a0, size 0x70, virtual false, abstract: false, final false
inline float_t get_WindSpeedKPH() ;

/// @brief Method get_WindSpeedMPS, addr 0x182563310, size 0x80, virtual false, abstract: false, final false
inline float_t get_WindSpeedMPS() ;

static inline void setStaticF_s_InstanceCount(int32_t  value) ;

static inline void setStaticF_s_KeywordTexture(::UnityEngine::Rendering::LocalKeyword  value) ;

static inline void setStaticF_s_KeywordTextureBlend(::UnityEngine::Rendering::LocalKeyword  value) ;

static inline void setStaticF_s_RenderPassOverride(int32_t  value) ;

static inline void setStaticF_s_TransferWavesComputeShader(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_s_WindSpectrum(::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  value) ;

/// @brief Method set_BicubicSampling, addr 0x18140a480, size 0x10, virtual false, abstract: false, final false
inline void set_BicubicSampling(bool  value) ;

/// @brief Method set_EvaluateSpectrumAtRunTimeEveryFrame, addr 0x1820c80f0, size 0x10, virtual false, abstract: false, final false
inline void set_EvaluateSpectrumAtRunTimeEveryFrame(bool  value) ;

/// @brief Method set_IncludeInDropDetailHeightBasedOnWaves, addr 0x181966440, size 0x10, virtual false, abstract: false, final false
inline void set_IncludeInDropDetailHeightBasedOnWaves(bool  value) ;

/// @brief Method set_MaximumReportedHorizontalDisplacement, addr 0x182563390, size 0x10, virtual false, abstract: false, final false
inline void set_MaximumReportedHorizontalDisplacement(float_t  value) ;

/// @brief Method set_MaximumReportedVerticalDisplacement, addr 0x180497ad0, size 0x10, virtual false, abstract: false, final false
inline void set_MaximumReportedVerticalDisplacement(float_t  value) ;

/// @brief Method set_MaximumReportedWavesDisplacement, addr 0x1825633a0, size 0x10, virtual false, abstract: false, final false
inline void set_MaximumReportedWavesDisplacement(float_t  value) ;

/// @brief Method set_OverrideGlobalWindDirection, addr 0x1825633b0, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideGlobalWindDirection(bool  value) ;

/// @brief Method set_OverrideGlobalWindSpeed, addr 0x180352c30, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideGlobalWindSpeed(bool  value) ;

/// @brief Method set_Resolution, addr 0x1813f0050, size 0x10, virtual false, abstract: false, final false
inline void set_Resolution(int32_t  value) ;

/// @brief Method set_RespectShallowWaterAttenuation, addr 0x182552720, size 0x10, virtual false, abstract: false, final false
inline void set_RespectShallowWaterAttenuation(float_t  value) ;

/// @brief Method set_SeaLevelOnly, addr 0x180f18e30, size 0xedb0, virtual false, abstract: false, final false
inline void set_SeaLevelOnly(bool  value) ;

/// @brief Method set_Spectrum, addr 0x1803d9970, size 0x20, virtual false, abstract: false, final false
inline void set_Spectrum(::WaveHarmonic::Crest::WaveSpectrum*  value) ;

/// @brief Method set_WaveDirectionHeadingAngle, addr 0x180352b20, size 0x10, virtual false, abstract: false, final false
inline void set_WaveDirectionHeadingAngle(float_t  value) ;

/// @brief Method set_WindSpeed, addr 0x18255e570, size 0x10, virtual false, abstract: false, final false
inline void set_WindSpeed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShapeWaves() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShapeWaves", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShapeWaves(ShapeWaves && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShapeWaves", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShapeWaves(ShapeWaves const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16547};

/// @brief Field k_CascadeCount offset 0xffffffff size 0x4
static constexpr int32_t  k_CascadeCount{static_cast<int32_t>(0x10)};

/// @brief Field _BicubicSampling, offset: 0xb0, size: 0x1, def value: None
 bool  ____BicubicSampling;

/// @brief Field _Spectrum, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  ____Spectrum;

/// @brief Field _EvaluateSpectrumAtRunTimeEveryFrame, offset: 0xc0, size: 0x1, def value: None
 bool  ____EvaluateSpectrumAtRunTimeEveryFrame;

/// @brief Field _RespectShallowWaterAttenuation, offset: 0xc4, size: 0x4, def value: None
 float_t  ____RespectShallowWaterAttenuation;

/// @brief Field _SeaLevelOnly, offset: 0xc8, size: 0x1, def value: None
 bool  ____SeaLevelOnly;

/// @brief Field _OverrideGlobalWindDirection, offset: 0xc9, size: 0x1, def value: None
 bool  ____OverrideGlobalWindDirection;

/// @brief Field _WaveDirectionHeadingAngle, offset: 0xcc, size: 0x4, def value: None
 float_t  ____WaveDirectionHeadingAngle;

/// @brief Field _OverrideGlobalWindSpeed, offset: 0xd0, size: 0x1, def value: None
 bool  ____OverrideGlobalWindSpeed;

/// @brief Field _WindSpeed, offset: 0xd4, size: 0x4, def value: None
 float_t  ____WindSpeed;

/// @brief Field _Resolution, offset: 0xd8, size: 0x4, def value: None
 int32_t  ____Resolution;

/// @brief Field _IncludeInDropDetailHeightBasedOnWaves, offset: 0xdc, size: 0x1, def value: None
 bool  ____IncludeInDropDetailHeightBasedOnWaves;

/// @brief Field _DrawSlicesInEditor, offset: 0xdd, size: 0x1, def value: None
 bool  ____DrawSlicesInEditor;

/// @brief Field _WaveBufferParameters, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ____WaveBufferParameters;

/// @brief Field _ActiveSpectrum, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaveSpectrum>  ____ActiveSpectrum;

/// @brief Field _FirstCascade, offset: 0xf0, size: 0x4, def value: None
 int32_t  ____FirstCascade;

/// @brief Field _LastCascade, offset: 0xf4, size: 0x4, def value: None
 int32_t  ____LastCascade;

/// @brief Field _FirstUpdate, offset: 0xf8, size: 0x1, def value: None
 bool  ____FirstUpdate;

/// @brief Field _LastGenerateFrameCount, offset: 0xfc, size: 0x4, def value: None
 int32_t  ____LastGenerateFrameCount;

/// @brief Field _Wavelength, offset: 0x100, size: 0x4, def value: None
 float_t  ____Wavelength;

/// @brief Field _WaveBuffers, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ____WaveBuffers;

/// @brief Field _Rect, offset: 0x110, size: 0x10, def value: None
 ::UnityEngine::Rect  ____Rect;

/// @brief Field _MaximumDisplacement, offset: 0x120, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____MaximumDisplacement;

/// @brief Field <MaximumReportedHorizontalDisplacement>k__BackingField, offset: 0x128, size: 0x4, def value: None
 float_t  ____MaximumReportedHorizontalDisplacement_k__BackingField;

/// @brief Field <MaximumReportedVerticalDisplacement>k__BackingField, offset: 0x12c, size: 0x4, def value: None
 float_t  ____MaximumReportedVerticalDisplacement_k__BackingField;

/// @brief Field <MaximumReportedWavesDisplacement>k__BackingField, offset: 0x130, size: 0x4, def value: None
 float_t  ____MaximumReportedWavesDisplacement_k__BackingField;

/// @brief Field _Reporter, offset: 0x138, size: 0x8, def value: None
 ::WaveHarmonic::Crest::ShapeWaves_Reporter*  ____Reporter;

/// @brief Field _AlphaSource, offset: 0x140, size: 0x4, def value: None
 ::WaveHarmonic::Crest::ShapeWaves_AlphaSource  ____AlphaSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____BicubicSampling) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____Spectrum) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____EvaluateSpectrumAtRunTimeEveryFrame) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____RespectShallowWaterAttenuation) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____SeaLevelOnly) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____OverrideGlobalWindDirection) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____WaveDirectionHeadingAngle) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____OverrideGlobalWindSpeed) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____WindSpeed) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____Resolution) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____IncludeInDropDetailHeightBasedOnWaves) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____DrawSlicesInEditor) == 0xdd, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____WaveBufferParameters) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____ActiveSpectrum) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____FirstCascade) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____LastCascade) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____FirstUpdate) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____LastGenerateFrameCount) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____Wavelength) == 0x100, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____WaveBuffers) == 0x108, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____Rect) == 0x110, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____MaximumDisplacement) == 0x120, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____MaximumReportedHorizontalDisplacement_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____MaximumReportedVerticalDisplacement_k__BackingField) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____MaximumReportedWavesDisplacement_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____Reporter) == 0x138, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::ShapeWaves, ____AlphaSource) == 0x140, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ShapeWaves) == 0x148, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
