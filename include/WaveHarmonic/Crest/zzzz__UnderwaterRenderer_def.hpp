#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/UnderwaterRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__Versioned_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterCameraExclusion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnderwaterRenderer)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine::Rendering {
class Volume;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
class MaskRenderer_IMaskProvider;
}
namespace WaveHarmonic::Crest {
class MaskRenderer_IMaskReceiver;
}
namespace WaveHarmonic::Crest {
struct MaskRenderer_MaskInput;
}
namespace WaveHarmonic::Crest {
class MaskRenderer;
}
namespace WaveHarmonic::Crest {
class SampleCollisionHelper;
}
namespace WaveHarmonic::Crest {
class UnderwaterRenderer_DebugFields;
}
namespace WaveHarmonic::Crest {
struct UnderwaterRenderer_EffectPass;
}
namespace WaveHarmonic::Crest {
class UnderwaterRenderer_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class UnderwaterRenderer_UnderwaterSphericalHarmonicsData;
}
namespace WaveHarmonic::Crest {
class WaterBody;
}
namespace WaveHarmonic::Crest {
struct WaterCameraExclusion;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct UnderwaterRenderer_EffectPass;
}
namespace WaveHarmonic::Crest {
class UnderwaterRenderer;
}
namespace WaveHarmonic::Crest {
class UnderwaterRenderer_DebugFields;
}
namespace WaveHarmonic::Crest {
class UnderwaterRenderer_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class UnderwaterRenderer_UnderwaterSphericalHarmonicsData;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::UnderwaterRenderer_EffectPass);
MARK_REF_T(::WaveHarmonic::Crest::UnderwaterRenderer*);
MARK_REF_T(::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields*);
MARK_REF_T(::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*);
MARK_REF_T(::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::UnderwaterRenderer_EffectPass, "WaveHarmonic.Crest", "UnderwaterRenderer/EffectPass");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::UnderwaterRenderer*, "WaveHarmonic.Crest", "UnderwaterRenderer");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields*, "WaveHarmonic.Crest", "UnderwaterRenderer/DebugFields");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs*, "WaveHarmonic.Crest", "UnderwaterRenderer/ShaderIDs");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData*, "WaveHarmonic.Crest", "UnderwaterRenderer/UnderwaterSphericalHarmonicsData");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.UnderwaterRenderer/ShaderIDs
class CORDL_TYPE UnderwaterRenderer_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_AmbientLighting, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_AmbientLighting, put=setStaticF_s_AmbientLighting)) int32_t  s_AmbientLighting;

/// @brief Field s_CameraColorTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_CameraColorTexture, put=setStaticF_s_CameraColorTexture)) int32_t  s_CameraColorTexture;

/// @brief Field s_DataSliceOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_DataSliceOffset, put=setStaticF_s_DataSliceOffset)) int32_t  s_DataSliceOffset;

/// @brief Field s_ExtinctionMultiplier, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_ExtinctionMultiplier, put=setStaticF_s_ExtinctionMultiplier)) int32_t  s_ExtinctionMultiplier;

/// @brief Field s_FarPlaneOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_FarPlaneOffset, put=setStaticF_s_FarPlaneOffset)) int32_t  s_FarPlaneOffset;

/// @brief Field s_OutScatteringExtinctionFactor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_OutScatteringExtinctionFactor, put=setStaticF_s_OutScatteringExtinctionFactor)) int32_t  s_OutScatteringExtinctionFactor;

/// @brief Field s_OutScatteringFactor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_OutScatteringFactor, put=setStaticF_s_OutScatteringFactor)) int32_t  s_OutScatteringFactor;

/// @brief Field s_SunBoost, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SunBoost, put=setStaticF_s_SunBoost)) int32_t  s_SunBoost;

/// @brief Field s_UnderwaterEnvironmentalLightingWeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_UnderwaterEnvironmentalLightingWeight, put=setStaticF_s_UnderwaterEnvironmentalLightingWeight)) int32_t  s_UnderwaterEnvironmentalLightingWeight;

/// @brief Field s_WaterVolumeStencil, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_WaterVolumeStencil, put=setStaticF_s_WaterVolumeStencil)) int32_t  s_WaterVolumeStencil;

static inline int32_t getStaticF_s_AmbientLighting() ;

static inline int32_t getStaticF_s_CameraColorTexture() ;

static inline int32_t getStaticF_s_DataSliceOffset() ;

static inline int32_t getStaticF_s_ExtinctionMultiplier() ;

static inline int32_t getStaticF_s_FarPlaneOffset() ;

static inline int32_t getStaticF_s_OutScatteringExtinctionFactor() ;

static inline int32_t getStaticF_s_OutScatteringFactor() ;

static inline int32_t getStaticF_s_SunBoost() ;

static inline int32_t getStaticF_s_UnderwaterEnvironmentalLightingWeight() ;

static inline int32_t getStaticF_s_WaterVolumeStencil() ;

static inline void setStaticF_s_AmbientLighting(int32_t  value) ;

static inline void setStaticF_s_CameraColorTexture(int32_t  value) ;

static inline void setStaticF_s_DataSliceOffset(int32_t  value) ;

static inline void setStaticF_s_ExtinctionMultiplier(int32_t  value) ;

static inline void setStaticF_s_FarPlaneOffset(int32_t  value) ;

static inline void setStaticF_s_OutScatteringExtinctionFactor(int32_t  value) ;

static inline void setStaticF_s_OutScatteringFactor(int32_t  value) ;

static inline void setStaticF_s_SunBoost(int32_t  value) ;

static inline void setStaticF_s_UnderwaterEnvironmentalLightingWeight(int32_t  value) ;

static inline void setStaticF_s_WaterVolumeStencil(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnderwaterRenderer_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterRenderer_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnderwaterRenderer_ShaderIDs(UnderwaterRenderer_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterRenderer_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnderwaterRenderer_ShaderIDs(UnderwaterRenderer_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16665};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.UnderwaterRenderer/EffectPass
struct CORDL_TYPE UnderwaterRenderer_EffectPass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnderwaterRenderer_EffectPass_Unwrapped
enum struct __UnderwaterRenderer_EffectPass_Unwrapped : int32_t {
__E_FullScreen = static_cast<int32_t>(0x0),
__E_Reflections = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnderwaterRenderer_EffectPass_Unwrapped () const noexcept {
return static_cast<__UnderwaterRenderer_EffectPass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnderwaterRenderer_EffectPass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnderwaterRenderer_EffectPass(int32_t  value__) noexcept;

/// @brief Field FullScreen value: I32(0)
static ::WaveHarmonic::Crest::UnderwaterRenderer_EffectPass const FullScreen;

/// @brief Field Reflections value: I32(1)
static ::WaveHarmonic::Crest::UnderwaterRenderer_EffectPass const Reflections;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16666};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer_EffectPass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::UnderwaterRenderer_EffectPass) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Vector3
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.UnderwaterRenderer/UnderwaterSphericalHarmonicsData
class CORDL_TYPE UnderwaterRenderer_UnderwaterSphericalHarmonicsData : public ::System::Object {
public:
// Declarations
/// @brief Field _AmbientLighting, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__AmbientLighting, put=__cordl_internal_set__AmbientLighting)) ::ArrayW<::UnityEngine::Color>  _AmbientLighting;

/// @brief Field _DirectionsSH, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DirectionsSH, put=__cordl_internal_set__DirectionsSH)) ::ArrayW<::UnityEngine::Vector3>  _DirectionsSH;

static inline ::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData* New_ctor() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get__AmbientLighting() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get__AmbientLighting() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__DirectionsSH() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__DirectionsSH() ;

constexpr void __cordl_internal_set__AmbientLighting(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set__DirectionsSH(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x1825980b0, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnderwaterRenderer_UnderwaterSphericalHarmonicsData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterRenderer_UnderwaterSphericalHarmonicsData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnderwaterRenderer_UnderwaterSphericalHarmonicsData(UnderwaterRenderer_UnderwaterSphericalHarmonicsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterRenderer_UnderwaterSphericalHarmonicsData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnderwaterRenderer_UnderwaterSphericalHarmonicsData(UnderwaterRenderer_UnderwaterSphericalHarmonicsData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16667};

/// @brief Field _AmbientLighting, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ____AmbientLighting;

/// @brief Field _DirectionsSH, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____DirectionsSH;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData, ____AmbientLighting) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData, ____DirectionsSH) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.UnderwaterRenderer/DebugFields
class CORDL_TYPE UnderwaterRenderer_DebugFields : public ::System::Object {
public:
// Declarations
/// @brief Field _DisableArtifactCorrection, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableArtifactCorrection, put=__cordl_internal_set__DisableArtifactCorrection)) bool  _DisableArtifactCorrection;

/// @brief Field _DisableHeightAboveWaterOptimization, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableHeightAboveWaterOptimization, put=__cordl_internal_set__DisableHeightAboveWaterOptimization)) bool  _DisableHeightAboveWaterOptimization;

/// @brief Field _DisableMask, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__DisableMask, put=__cordl_internal_set__DisableMask)) bool  _DisableMask;

/// @brief Field _OnlyReflectionCameras, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get__OnlyReflectionCameras, put=__cordl_internal_set__OnlyReflectionCameras)) bool  _OnlyReflectionCameras;

/// @brief Field _VisualizeMask, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__VisualizeMask, put=__cordl_internal_set__VisualizeMask)) bool  _VisualizeMask;

/// @brief Field _VisualizeStencil, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get__VisualizeStencil, put=__cordl_internal_set__VisualizeStencil)) bool  _VisualizeStencil;

static inline ::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields* New_ctor() ;

constexpr bool const& __cordl_internal_get__DisableArtifactCorrection() const;

constexpr bool& __cordl_internal_get__DisableArtifactCorrection() ;

constexpr bool const& __cordl_internal_get__DisableHeightAboveWaterOptimization() const;

constexpr bool& __cordl_internal_get__DisableHeightAboveWaterOptimization() ;

constexpr bool const& __cordl_internal_get__DisableMask() const;

constexpr bool& __cordl_internal_get__DisableMask() ;

constexpr bool const& __cordl_internal_get__OnlyReflectionCameras() const;

constexpr bool& __cordl_internal_get__OnlyReflectionCameras() ;

constexpr bool const& __cordl_internal_get__VisualizeMask() const;

constexpr bool& __cordl_internal_get__VisualizeMask() ;

constexpr bool const& __cordl_internal_get__VisualizeStencil() const;

constexpr bool& __cordl_internal_get__VisualizeStencil() ;

constexpr void __cordl_internal_set__DisableArtifactCorrection(bool  value) ;

constexpr void __cordl_internal_set__DisableHeightAboveWaterOptimization(bool  value) ;

constexpr void __cordl_internal_set__DisableMask(bool  value) ;

constexpr void __cordl_internal_set__OnlyReflectionCameras(bool  value) ;

constexpr void __cordl_internal_set__VisualizeMask(bool  value) ;

constexpr void __cordl_internal_set__VisualizeStencil(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnderwaterRenderer_DebugFields() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterRenderer_DebugFields", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnderwaterRenderer_DebugFields(UnderwaterRenderer_DebugFields && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterRenderer_DebugFields", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnderwaterRenderer_DebugFields(UnderwaterRenderer_DebugFields const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16668};

/// @brief Field _VisualizeMask, offset: 0x10, size: 0x1, def value: None
 bool  ____VisualizeMask;

/// @brief Field _DisableMask, offset: 0x11, size: 0x1, def value: None
 bool  ____DisableMask;

/// @brief Field _VisualizeStencil, offset: 0x12, size: 0x1, def value: None
 bool  ____VisualizeStencil;

/// @brief Field _DisableHeightAboveWaterOptimization, offset: 0x13, size: 0x1, def value: None
 bool  ____DisableHeightAboveWaterOptimization;

/// @brief Field _DisableArtifactCorrection, offset: 0x14, size: 0x1, def value: None
 bool  ____DisableArtifactCorrection;

/// @brief Field _OnlyReflectionCameras, offset: 0x15, size: 0x1, def value: None
 bool  ____OnlyReflectionCameras;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields, ____VisualizeMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields, ____DisableMask) == 0x11, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields, ____VisualizeStencil) == 0x12, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields, ____DisableHeightAboveWaterOptimization) == 0x13, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields, ____DisableArtifactCorrection) == 0x14, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields, ____OnlyReflectionCameras) == 0x15, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.Rendering.RenderTargetIdentifier, UnityEngine.Vector3, WaveHarmonic.Crest.Internal.Versioned, WaveHarmonic.Crest.WaterCameraExclusion
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.UnderwaterRenderer
class CORDL_TYPE UnderwaterRenderer : public ::WaveHarmonic::Crest::Internal::Versioned {
public:
// Declarations
using DebugFields = ::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields;

using EffectPass = ::WaveHarmonic::Crest::UnderwaterRenderer_EffectPass;

using ShaderIDs = ::WaveHarmonic::Crest::UnderwaterRenderer_ShaderIDs;

using UnderwaterSphericalHarmonicsData = ::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData;

 __declspec(property(get=get_AffectsEnvironmentalLighting, put=set_AffectsEnvironmentalLighting)) bool  AffectsEnvironmentalLighting;

 __declspec(property(get=get_AllCameras, put=set_AllCameras)) bool  AllCameras;

 __declspec(property(get=get_CameraExclusions, put=set_CameraExclusions)) ::WaveHarmonic::Crest::WaterCameraExclusion  CameraExclusions;

 __declspec(property(get=get_CopyWaterMaterialParametersEachFrame, put=set_CopyWaterMaterialParametersEachFrame)) bool  CopyWaterMaterialParametersEachFrame;

 __declspec(property(get=get_CullLimit, put=set_CullLimit)) float_t  CullLimit;

 __declspec(property(get=get_EnableChunkCulling, put=set_EnableChunkCulling)) bool  EnableChunkCulling;

 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

 __declspec(property(get=get_EnvironmentalLightingWeight, put=set_EnvironmentalLightingWeight)) float_t  EnvironmentalLightingWeight;

 __declspec(property(get=get_FarPlaneMultiplier, put=set_FarPlaneMultiplier)) float_t  FarPlaneMultiplier;

 __declspec(property(get=get_Layer, put=set_Layer)) int32_t  Layer;

 __declspec(property(get=get_Material, put=set_Material)) ::UnityW<::UnityEngine::Material>  Material;

 __declspec(property(get=get_NeedsColorTexture, put=set_NeedsColorTexture)) bool  NeedsColorTexture;

 __declspec(property(get=get_Portaled)) bool  Portaled;

 __declspec(property(get=get_RenderBeforeTransparency)) bool  RenderBeforeTransparency;

 __declspec(property(get=get_RequiresFullScreenMask, put=set_RequiresFullScreenMask)) bool  RequiresFullScreenMask;

 __declspec(property(get=get_UseLegacyMask)) bool  UseLegacyMask;

 __declspec(property(get=get_UseStencilBuffer, put=set_UseStencilBuffer)) bool  UseStencilBuffer;

/// @brief Field <AfterCopyMaterial>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__AfterCopyMaterial_k__BackingField, put=setStaticF__AfterCopyMaterial_k__BackingField)) ::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*  _AfterCopyMaterial_k__BackingField;

/// @brief Field _AllCameras, offset 0x194, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllCameras, put=__cordl_internal_set__AllCameras)) bool  _AllCameras;

/// @brief Field _ArtifactsKernel, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get__ArtifactsKernel, put=__cordl_internal_set__ArtifactsKernel)) int32_t  _ArtifactsKernel;

/// @brief Field _ArtifactsShader, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ArtifactsShader, put=__cordl_internal_set__ArtifactsShader)) ::UnityW<::UnityEngine::ComputeShader>  _ArtifactsShader;

/// @brief Field _ArtifactsShaderInitialized, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__ArtifactsShaderInitialized, put=__cordl_internal_set__ArtifactsShaderInitialized)) bool  _ArtifactsShaderInitialized;

/// @brief Field _ArtifactsThreadGroupSizeX, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__ArtifactsThreadGroupSizeX, put=__cordl_internal_set__ArtifactsThreadGroupSizeX)) uint32_t  _ArtifactsThreadGroupSizeX;

/// @brief Field _ArtifactsThreadGroupSizeY, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get__ArtifactsThreadGroupSizeY, put=__cordl_internal_set__ArtifactsThreadGroupSizeY)) uint32_t  _ArtifactsThreadGroupSizeY;

/// @brief Field _CameraExclusions, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__CameraExclusions, put=__cordl_internal_set__CameraExclusions)) ::WaveHarmonic::Crest::WaterCameraExclusion  _CameraExclusions;

/// @brief Field _ColorCopyTarget, offset 0x90, size 0x28 
 __declspec(property(get=__cordl_internal_get__ColorCopyTarget, put=__cordl_internal_set__ColorCopyTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier  _ColorCopyTarget;

/// @brief Field _ColorTarget, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get__ColorTarget, put=__cordl_internal_set__ColorTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier  _ColorTarget;

/// @brief Field _CopyColor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__CopyColor, put=__cordl_internal_set__CopyColor)) ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  _CopyColor;

/// @brief Field _CopyWaterMaterialParametersEachFrame, offset 0x12c, size 0x1 
 __declspec(property(get=__cordl_internal_get__CopyWaterMaterialParametersEachFrame, put=__cordl_internal_set__CopyWaterMaterialParametersEachFrame)) bool  _CopyWaterMaterialParametersEachFrame;

/// @brief Field _CullLimit, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get__CullLimit, put=__cordl_internal_set__CullLimit)) float_t  _CullLimit;

/// @brief Field _CurrentWaterBody, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentWaterBody, put=__cordl_internal_set__CurrentWaterBody)) ::UnityW<::WaveHarmonic::Crest::WaterBody>  _CurrentWaterBody;

/// @brief Field _CurrentWaterMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentWaterMaterial, put=__cordl_internal_set__CurrentWaterMaterial)) ::UnityW<::UnityEngine::Material>  _CurrentWaterMaterial;

/// @brief Field _Debug, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__Debug, put=__cordl_internal_set__Debug)) ::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields*  _Debug;

/// @brief Field _DepthStencilTarget, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get__DepthStencilTarget, put=__cordl_internal_set__DepthStencilTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier  _DepthStencilTarget;

/// @brief Field _EffectCommandBuffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__EffectCommandBuffer, put=__cordl_internal_set__EffectCommandBuffer)) ::UnityEngine::Rendering::CommandBuffer*  _EffectCommandBuffer;

/// @brief Field _EnableChunkCulling, offset 0x134, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnableChunkCulling, put=__cordl_internal_set__EnableChunkCulling)) bool  _EnableChunkCulling;

/// @brief Field _Enabled, offset 0x101, size 0x1 
 __declspec(property(get=__cordl_internal_get__Enabled, put=__cordl_internal_set__Enabled)) bool  _Enabled;

/// @brief Field _EnvironmentalAmbientIntensity, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__EnvironmentalAmbientIntensity, put=__cordl_internal_set__EnvironmentalAmbientIntensity)) float_t  _EnvironmentalAmbientIntensity;

/// @brief Field _EnvironmentalAverageDensity, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__EnvironmentalAverageDensity, put=__cordl_internal_set__EnvironmentalAverageDensity)) float_t  _EnvironmentalAverageDensity;

/// @brief Field _EnvironmentalFogDensity, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__EnvironmentalFogDensity, put=__cordl_internal_set__EnvironmentalFogDensity)) float_t  _EnvironmentalFogDensity;

/// @brief Field _EnvironmentalInitialized, offset 0xd4, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnvironmentalInitialized, put=__cordl_internal_set__EnvironmentalInitialized)) bool  _EnvironmentalInitialized;

/// @brief Field _EnvironmentalLight, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__EnvironmentalLight, put=__cordl_internal_set__EnvironmentalLight)) ::UnityW<::UnityEngine::Light>  _EnvironmentalLight;

/// @brief Field _EnvironmentalLightIntensity, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__EnvironmentalLightIntensity, put=__cordl_internal_set__EnvironmentalLightIntensity)) float_t  _EnvironmentalLightIntensity;

/// @brief Field _EnvironmentalLightingEnable, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnvironmentalLightingEnable, put=__cordl_internal_set__EnvironmentalLightingEnable)) bool  _EnvironmentalLightingEnable;

/// @brief Field _EnvironmentalLightingVolume, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__EnvironmentalLightingVolume, put=__cordl_internal_set__EnvironmentalLightingVolume)) ::UnityW<::UnityEngine::Rendering::Volume>  _EnvironmentalLightingVolume;

/// @brief Field _EnvironmentalLightingVolumeProfile, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__EnvironmentalLightingVolumeProfile, put=__cordl_internal_set__EnvironmentalLightingVolumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile>  _EnvironmentalLightingVolumeProfile;

/// @brief Field _EnvironmentalLightingWeight, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get__EnvironmentalLightingWeight, put=__cordl_internal_set__EnvironmentalLightingWeight)) float_t  _EnvironmentalLightingWeight;

/// @brief Field _EnvironmentalNeedsRestoring, offset 0xd5, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnvironmentalNeedsRestoring, put=__cordl_internal_set__EnvironmentalNeedsRestoring)) bool  _EnvironmentalNeedsRestoring;

/// @brief Field _EnvironmentalReflectionIntensity, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__EnvironmentalReflectionIntensity, put=__cordl_internal_set__EnvironmentalReflectionIntensity)) float_t  _EnvironmentalReflectionIntensity;

/// @brief Field _Extinction, offset 0x178, size 0xc 
 __declspec(property(get=__cordl_internal_get__Extinction, put=__cordl_internal_set__Extinction)) ::UnityEngine::Vector3  _Extinction;

/// @brief Field _FarPlaneMultiplier, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__FarPlaneMultiplier, put=__cordl_internal_set__FarPlaneMultiplier)) float_t  _FarPlaneMultiplier;

/// @brief Field _HasEffectCommandBuffersBeenRegistered, offset 0xd6, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasEffectCommandBuffersBeenRegistered, put=__cordl_internal_set__HasEffectCommandBuffersBeenRegistered)) bool  _HasEffectCommandBuffersBeenRegistered;

/// @brief Field _HorizonMaskMaterial, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__HorizonMaskMaterial, put=__cordl_internal_set__HorizonMaskMaterial)) ::UnityW<::UnityEngine::Material>  _HorizonMaskMaterial;

/// @brief Field _Layer, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get__Layer, put=__cordl_internal_set__Layer)) int32_t  _Layer;

/// @brief Field _MaskMaterial, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__MaskMaterial, put=__cordl_internal_set__MaskMaterial)) ::UnityW<::UnityEngine::Material>  _MaskMaterial;

/// @brief Field _MaskRead, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get__MaskRead, put=__cordl_internal_set__MaskRead)) bool  _MaskRead;

/// @brief Field _Material, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__Material, put=__cordl_internal_set__Material)) ::UnityW<::UnityEngine::Material>  _Material;

/// @brief Field _MaterialLastUpdatedFrame, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaterialLastUpdatedFrame, put=__cordl_internal_set__MaterialLastUpdatedFrame)) int32_t  _MaterialLastUpdatedFrame;

/// @brief Field _MinimumFogDensity, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinimumFogDensity, put=__cordl_internal_set__MinimumFogDensity)) float_t  _MinimumFogDensity;

/// @brief Field <NeedsColorTexture>k__BackingField, offset 0x156, size 0x1 
 __declspec(property(get=__cordl_internal_get__NeedsColorTexture_k__BackingField, put=__cordl_internal_set__NeedsColorTexture_k__BackingField)) bool  _NeedsColorTexture_k__BackingField;

/// @brief Field <RequiresFullScreenMask>k__BackingField, offset 0x155, size 0x1 
 __declspec(property(get=__cordl_internal_get__RequiresFullScreenMask_k__BackingField, put=__cordl_internal_set__RequiresFullScreenMask_k__BackingField)) bool  _RequiresFullScreenMask_k__BackingField;

/// @brief Field _SamplingHeightHelper, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__SamplingHeightHelper, put=__cordl_internal_set__SamplingHeightHelper)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _SamplingHeightHelper;

/// @brief Field _SetRenderTargetToBackBuffers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__SetRenderTargetToBackBuffers, put=__cordl_internal_set__SetRenderTargetToBackBuffers)) ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  _SetRenderTargetToBackBuffers;

/// @brief Field _SphericalHarmonicsData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__SphericalHarmonicsData, put=__cordl_internal_set__SphericalHarmonicsData)) ::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData*  _SphericalHarmonicsData;

/// @brief Field _SurfaceMaterial, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__SurfaceMaterial, put=__cordl_internal_set__SurfaceMaterial)) ::UnityW<::UnityEngine::Material>  _SurfaceMaterial;

/// @brief Field <UseStencilBuffer>k__BackingField, offset 0x154, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseStencilBuffer_k__BackingField, put=__cordl_internal_set__UseStencilBuffer_k__BackingField)) bool  _UseStencilBuffer_k__BackingField;

/// @brief Field _ViewerWaterHeight, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get__ViewerWaterHeight, put=__cordl_internal_set__ViewerWaterHeight)) float_t  _ViewerWaterHeight;

/// @brief Field _VolumeMaterial, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__VolumeMaterial, put=__cordl_internal_set__VolumeMaterial)) ::UnityW<::UnityEngine::Material>  _VolumeMaterial;

/// @brief Field _Water, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Field _WaterBodyCulled, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get__WaterBodyCulled, put=__cordl_internal_set__WaterBodyCulled)) bool  _WaterBodyCulled;

/// @brief Field s_SampleSphericalHarmonicsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SampleSphericalHarmonicsMarker, put=setStaticF_s_SampleSphericalHarmonicsMarker)) ::Unity::Profiling::ProfilerMarker  s_SampleSphericalHarmonicsMarker;

/// @brief Convert operator to "::WaveHarmonic::Crest::MaskRenderer_IMaskProvider"
constexpr operator  ::WaveHarmonic::Crest::MaskRenderer_IMaskProvider*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver"
constexpr operator  ::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver*() noexcept;

/// @brief Method CopyColorTexture, addr 0x1825945c0, size 0x150, virtual false, abstract: false, final false
inline void CopyColorTexture(::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method DisableEnvironmentalLighting, addr 0x182594710, size 0x20, virtual false, abstract: false, final false
inline void DisableEnvironmentalLighting() ;

/// @brief Method EnableEnvironmentalLighting, addr 0x182594730, size 0x160, virtual false, abstract: false, final false
inline void EnableEnvironmentalLighting() ;

/// @brief Method ExecuteEffect, addr 0x182594890, size 0x110, virtual false, abstract: false, final false
inline void ExecuteEffect(::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  copyColor, ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  resetRenderTargets, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method ExecuteHeightField, addr 0x1825949a0, size 0x50, virtual false, abstract: false, final false
inline void ExecuteHeightField(::UnityEngine::Camera*  camera) ;

/// @brief Method FixMaskArtefacts, addr 0x1825949f0, size 0x230, virtual false, abstract: false, final false
inline void FixMaskArtefacts(::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::RenderTextureDescriptor  descriptor, ::UnityEngine::Rendering::RenderTargetIdentifier  target) ;

static inline ::WaveHarmonic::Crest::UnderwaterRenderer* New_ctor() ;

/// @brief Method OnAfterLegacyRender, addr 0x182594c20, size 0x80, virtual false, abstract: false, final false
inline void OnAfterLegacyRender(::UnityEngine::Camera*  camera) ;

/// @brief Method OnBeforeLegacyRender, addr 0x182594ca0, size 0x90, virtual false, abstract: false, final false
inline void OnBeforeLegacyRender(::UnityEngine::Camera*  camera) ;

/// @brief Method OnBeginCameraRendering, addr 0x182594d30, size 0x160, virtual false, abstract: false, final false
inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera) ;

/// @brief Method OnDestroy, addr 0x182594e90, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x182594f50, size 0xa0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDisableMask, addr 0x182594ed0, size 0x80, virtual false, abstract: false, final false
inline void OnDisableMask() ;

/// @brief Method OnEnable, addr 0x1825951b0, size 0x3d0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnableLegacy, addr 0x182594ff0, size 0xd0, virtual false, abstract: false, final false
inline void OnEnableLegacy() ;

/// @brief Method OnEnableMask, addr 0x1825950c0, size 0xf0, virtual false, abstract: false, final false
inline void OnEnableMask() ;

/// @brief Method OnEndCameraRendering, addr 0x182595580, size 0x120, virtual false, abstract: false, final false
inline void OnEndCameraRendering(::UnityEngine::Camera*  camera) ;

/// @brief Method OnPreRenderUnderwaterEffect, addr 0x1825956a0, size 0x640, virtual false, abstract: false, final false
inline void OnPreRenderUnderwaterEffect(::UnityEngine::Camera*  camera) ;

/// @brief Method PopulateMask, addr 0x182595ce0, size 0x260, virtual false, abstract: false, final false
inline void PopulateMask(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Camera*  camera) ;

/// @brief Method RenderLineMask, addr 0x182595f40, size 0x3e0, virtual false, abstract: false, final false
inline void RenderLineMask(::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Camera*  camera, ::UnityEngine::RenderTextureDescriptor  descriptor, ::UnityEngine::Rendering::RenderTargetIdentifier  target) ;

/// @brief Method RestoreEnvironmentalLighting, addr 0x182596320, size 0x100, virtual false, abstract: false, final false
inline void RestoreEnvironmentalLighting() ;

/// @brief Method SetAffectsEnvironmentalLighting, addr 0x182596420, size 0x80, virtual false, abstract: false, final false
inline void SetAffectsEnvironmentalLighting(bool  previous, bool  current) ;

/// @brief Method SetEnabled, addr 0x1825964a0, size 0x100, virtual false, abstract: false, final false
inline void SetEnabled(bool  previous, bool  current) ;

/// @brief Method SetRenderTargetToBackBuffers, addr 0x1825965a0, size 0x50, virtual false, abstract: false, final false
inline void SetRenderTargetToBackBuffers(::UnityEngine::Rendering::CommandBuffer*  commands) ;

/// @brief Method SetUpArtifactsShader, addr 0x1825965f0, size 0x90, virtual false, abstract: false, final false
inline void SetUpArtifactsShader() ;

/// @brief Method SetupUnderwaterEffect, addr 0x182594ff0, size 0xd0, virtual false, abstract: false, final false
inline void SetupUnderwaterEffect() ;

/// @brief Method ShouldRender, addr 0x182596680, size 0x410, virtual false, abstract: false, final false
inline bool ShouldRender(::UnityEngine::Camera*  camera) ;

/// @brief Method UpdateChunkCulling, addr 0x182596a90, size 0x290, virtual false, abstract: false, final false
inline void UpdateChunkCulling(::UnityEngine::Camera*  camera) ;

/// @brief Method UpdateEffectMaterial, addr 0x182596d20, size 0x370, virtual false, abstract: false, final false
inline void UpdateEffectMaterial(::UnityEngine::Camera*  camera) ;

/// @brief Method UpdateEnvironmentalLighting, addr 0x182597090, size 0x340, virtual false, abstract: false, final false
inline void UpdateEnvironmentalLighting(::UnityEngine::Camera*  camera, ::UnityEngine::Vector3  extinction, float_t  height) ;

/// @brief Method UpdateGlobals, addr 0x1825973d0, size 0x200, virtual false, abstract: false, final false
static inline void UpdateGlobals(::UnityEngine::Material*  source) ;

/// @brief Method UpdateRenderingParameters, addr 0x1825975d0, size 0x3e0, virtual false, abstract: false, final false
inline void UpdateRenderingParameters() ;

/// @brief Method WaveHarmonic.Crest.MaskRenderer.IMaskProvider.Allocate, addr 0x1825979b0, size 0x20, virtual true, abstract: false, final true
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput WaveHarmonic_Crest_MaskRenderer_IMaskProvider_Allocate() ;

/// @brief Method WaveHarmonic.Crest.MaskRenderer.IMaskProvider.OnMaskPass, addr 0x1825979d0, size 0x160, virtual true, abstract: false, final true
inline void WaveHarmonic_Crest_MaskRenderer_IMaskProvider_OnMaskPass(::UnityEngine::Rendering::CommandBuffer*  commands, ::UnityEngine::Camera*  camera, ::WaveHarmonic::Crest::MaskRenderer*  mask) ;

/// @brief Method WaveHarmonic.Crest.MaskRenderer.IMaskProvider.Write, addr 0x182597b30, size 0x50, virtual true, abstract: false, final true
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput WaveHarmonic_Crest_MaskRenderer_IMaskProvider_Write(::UnityEngine::Camera*  camera) ;

/// @brief Method WaveHarmonic.Crest.MaskRenderer.IMaskReceiver.Allocate, addr 0x1825979b0, size 0x20, virtual true, abstract: false, final true
inline ::WaveHarmonic::Crest::MaskRenderer_MaskInput WaveHarmonic_Crest_MaskRenderer_IMaskReceiver_Allocate() ;

constexpr bool const& __cordl_internal_get__AllCameras() const;

constexpr bool& __cordl_internal_get__AllCameras() ;

constexpr int32_t const& __cordl_internal_get__ArtifactsKernel() const;

constexpr int32_t& __cordl_internal_get__ArtifactsKernel() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__ArtifactsShader() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__ArtifactsShader() ;

constexpr bool const& __cordl_internal_get__ArtifactsShaderInitialized() const;

constexpr bool& __cordl_internal_get__ArtifactsShaderInitialized() ;

constexpr uint32_t const& __cordl_internal_get__ArtifactsThreadGroupSizeX() const;

constexpr uint32_t& __cordl_internal_get__ArtifactsThreadGroupSizeX() ;

constexpr uint32_t const& __cordl_internal_get__ArtifactsThreadGroupSizeY() const;

constexpr uint32_t& __cordl_internal_get__ArtifactsThreadGroupSizeY() ;

constexpr ::WaveHarmonic::Crest::WaterCameraExclusion const& __cordl_internal_get__CameraExclusions() const;

constexpr ::WaveHarmonic::Crest::WaterCameraExclusion& __cordl_internal_get__CameraExclusions() ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__ColorCopyTarget() const;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__ColorCopyTarget() ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__ColorTarget() const;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__ColorTarget() ;

constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* const& __cordl_internal_get__CopyColor() const;

constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*& __cordl_internal_get__CopyColor() ;

constexpr bool const& __cordl_internal_get__CopyWaterMaterialParametersEachFrame() const;

constexpr bool& __cordl_internal_get__CopyWaterMaterialParametersEachFrame() ;

constexpr float_t const& __cordl_internal_get__CullLimit() const;

constexpr float_t& __cordl_internal_get__CullLimit() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterBody> const& __cordl_internal_get__CurrentWaterBody() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterBody>& __cordl_internal_get__CurrentWaterBody() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__CurrentWaterMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__CurrentWaterMaterial() ;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields* const& __cordl_internal_get__Debug() const;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields*& __cordl_internal_get__Debug() ;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__DepthStencilTarget() const;

constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__DepthStencilTarget() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get__EffectCommandBuffer() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get__EffectCommandBuffer() ;

constexpr bool const& __cordl_internal_get__EnableChunkCulling() const;

constexpr bool& __cordl_internal_get__EnableChunkCulling() ;

constexpr bool const& __cordl_internal_get__Enabled() const;

constexpr bool& __cordl_internal_get__Enabled() ;

constexpr float_t const& __cordl_internal_get__EnvironmentalAmbientIntensity() const;

constexpr float_t& __cordl_internal_get__EnvironmentalAmbientIntensity() ;

constexpr float_t const& __cordl_internal_get__EnvironmentalAverageDensity() const;

constexpr float_t& __cordl_internal_get__EnvironmentalAverageDensity() ;

constexpr float_t const& __cordl_internal_get__EnvironmentalFogDensity() const;

constexpr float_t& __cordl_internal_get__EnvironmentalFogDensity() ;

constexpr bool const& __cordl_internal_get__EnvironmentalInitialized() const;

constexpr bool& __cordl_internal_get__EnvironmentalInitialized() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get__EnvironmentalLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get__EnvironmentalLight() ;

constexpr float_t const& __cordl_internal_get__EnvironmentalLightIntensity() const;

constexpr float_t& __cordl_internal_get__EnvironmentalLightIntensity() ;

constexpr bool const& __cordl_internal_get__EnvironmentalLightingEnable() const;

constexpr bool& __cordl_internal_get__EnvironmentalLightingEnable() ;

constexpr ::UnityW<::UnityEngine::Rendering::Volume> const& __cordl_internal_get__EnvironmentalLightingVolume() const;

constexpr ::UnityW<::UnityEngine::Rendering::Volume>& __cordl_internal_get__EnvironmentalLightingVolume() ;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get__EnvironmentalLightingVolumeProfile() const;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get__EnvironmentalLightingVolumeProfile() ;

constexpr float_t const& __cordl_internal_get__EnvironmentalLightingWeight() const;

constexpr float_t& __cordl_internal_get__EnvironmentalLightingWeight() ;

constexpr bool const& __cordl_internal_get__EnvironmentalNeedsRestoring() const;

constexpr bool& __cordl_internal_get__EnvironmentalNeedsRestoring() ;

constexpr float_t const& __cordl_internal_get__EnvironmentalReflectionIntensity() const;

constexpr float_t& __cordl_internal_get__EnvironmentalReflectionIntensity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__Extinction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__Extinction() ;

constexpr float_t const& __cordl_internal_get__FarPlaneMultiplier() const;

constexpr float_t& __cordl_internal_get__FarPlaneMultiplier() ;

constexpr bool const& __cordl_internal_get__HasEffectCommandBuffersBeenRegistered() const;

constexpr bool& __cordl_internal_get__HasEffectCommandBuffersBeenRegistered() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__HorizonMaskMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__HorizonMaskMaterial() ;

constexpr int32_t const& __cordl_internal_get__Layer() const;

constexpr int32_t& __cordl_internal_get__Layer() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__MaskMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__MaskMaterial() ;

constexpr bool const& __cordl_internal_get__MaskRead() const;

constexpr bool& __cordl_internal_get__MaskRead() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__Material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__Material() ;

constexpr int32_t const& __cordl_internal_get__MaterialLastUpdatedFrame() const;

constexpr int32_t& __cordl_internal_get__MaterialLastUpdatedFrame() ;

constexpr float_t const& __cordl_internal_get__MinimumFogDensity() const;

constexpr float_t& __cordl_internal_get__MinimumFogDensity() ;

constexpr bool const& __cordl_internal_get__NeedsColorTexture_k__BackingField() const;

constexpr bool& __cordl_internal_get__NeedsColorTexture_k__BackingField() ;

constexpr bool const& __cordl_internal_get__RequiresFullScreenMask_k__BackingField() const;

constexpr bool& __cordl_internal_get__RequiresFullScreenMask_k__BackingField() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__SamplingHeightHelper() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__SamplingHeightHelper() ;

constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>* const& __cordl_internal_get__SetRenderTargetToBackBuffers() const;

constexpr ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*& __cordl_internal_get__SetRenderTargetToBackBuffers() ;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData* const& __cordl_internal_get__SphericalHarmonicsData() const;

constexpr ::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData*& __cordl_internal_get__SphericalHarmonicsData() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__SurfaceMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__SurfaceMaterial() ;

constexpr bool const& __cordl_internal_get__UseStencilBuffer_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseStencilBuffer_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ViewerWaterHeight() const;

constexpr float_t& __cordl_internal_get__ViewerWaterHeight() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__VolumeMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__VolumeMaterial() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr bool const& __cordl_internal_get__WaterBodyCulled() const;

constexpr bool& __cordl_internal_get__WaterBodyCulled() ;

constexpr void __cordl_internal_set__AllCameras(bool  value) ;

constexpr void __cordl_internal_set__ArtifactsKernel(int32_t  value) ;

constexpr void __cordl_internal_set__ArtifactsShader(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__ArtifactsShaderInitialized(bool  value) ;

constexpr void __cordl_internal_set__ArtifactsThreadGroupSizeX(uint32_t  value) ;

constexpr void __cordl_internal_set__ArtifactsThreadGroupSizeY(uint32_t  value) ;

constexpr void __cordl_internal_set__CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value) ;

constexpr void __cordl_internal_set__ColorCopyTarget(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

constexpr void __cordl_internal_set__ColorTarget(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

constexpr void __cordl_internal_set__CopyColor(::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  value) ;

constexpr void __cordl_internal_set__CopyWaterMaterialParametersEachFrame(bool  value) ;

constexpr void __cordl_internal_set__CullLimit(float_t  value) ;

constexpr void __cordl_internal_set__CurrentWaterBody(::UnityW<::WaveHarmonic::Crest::WaterBody>  value) ;

constexpr void __cordl_internal_set__CurrentWaterMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Debug(::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields*  value) ;

constexpr void __cordl_internal_set__DepthStencilTarget(::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

constexpr void __cordl_internal_set__EffectCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set__EnableChunkCulling(bool  value) ;

constexpr void __cordl_internal_set__Enabled(bool  value) ;

constexpr void __cordl_internal_set__EnvironmentalAmbientIntensity(float_t  value) ;

constexpr void __cordl_internal_set__EnvironmentalAverageDensity(float_t  value) ;

constexpr void __cordl_internal_set__EnvironmentalFogDensity(float_t  value) ;

constexpr void __cordl_internal_set__EnvironmentalInitialized(bool  value) ;

constexpr void __cordl_internal_set__EnvironmentalLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set__EnvironmentalLightIntensity(float_t  value) ;

constexpr void __cordl_internal_set__EnvironmentalLightingEnable(bool  value) ;

constexpr void __cordl_internal_set__EnvironmentalLightingVolume(::UnityW<::UnityEngine::Rendering::Volume>  value) ;

constexpr void __cordl_internal_set__EnvironmentalLightingVolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value) ;

constexpr void __cordl_internal_set__EnvironmentalLightingWeight(float_t  value) ;

constexpr void __cordl_internal_set__EnvironmentalNeedsRestoring(bool  value) ;

constexpr void __cordl_internal_set__EnvironmentalReflectionIntensity(float_t  value) ;

constexpr void __cordl_internal_set__Extinction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__FarPlaneMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__HasEffectCommandBuffersBeenRegistered(bool  value) ;

constexpr void __cordl_internal_set__HorizonMaskMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Layer(int32_t  value) ;

constexpr void __cordl_internal_set__MaskMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__MaskRead(bool  value) ;

constexpr void __cordl_internal_set__Material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__MaterialLastUpdatedFrame(int32_t  value) ;

constexpr void __cordl_internal_set__MinimumFogDensity(float_t  value) ;

constexpr void __cordl_internal_set__NeedsColorTexture_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__RequiresFullScreenMask_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SamplingHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__SetRenderTargetToBackBuffers(::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  value) ;

constexpr void __cordl_internal_set__SphericalHarmonicsData(::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData*  value) ;

constexpr void __cordl_internal_set__SurfaceMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__UseStencilBuffer_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ViewerWaterHeight(float_t  value) ;

constexpr void __cordl_internal_set__VolumeMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

constexpr void __cordl_internal_set__WaterBodyCulled(bool  value) ;

/// @brief Method .ctor, addr 0x182597bc0, size 0x290, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>* getStaticF__AfterCopyMaterial_k__BackingField() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_SampleSphericalHarmonicsMarker() ;

/// @brief Method get_AffectsEnvironmentalLighting, addr 0x1817d5850, size 0x10, virtual false, abstract: false, final false
inline bool get_AffectsEnvironmentalLighting() ;

/// @brief Method get_AfterCopyMaterial, addr 0x182597e50, size 0x20, virtual false, abstract: false, final false
static inline ::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>* get_AfterCopyMaterial() ;

/// @brief Method get_AllCameras, addr 0x1818ebf30, size 0x10, virtual false, abstract: false, final false
inline bool get_AllCameras() ;

/// @brief Method get_CameraExclusions, addr 0x1820c7b60, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterCameraExclusion get_CameraExclusions() ;

/// @brief Method get_CopyWaterMaterialParametersEachFrame, addr 0x182597e70, size 0x10, virtual false, abstract: false, final false
inline bool get_CopyWaterMaterialParametersEachFrame() ;

/// @brief Method get_CullLimit, addr 0x18046c460, size 0x10, virtual false, abstract: false, final false
inline float_t get_CullLimit() ;

/// @brief Method get_EnableChunkCulling, addr 0x1820c7bc0, size 0x10, virtual false, abstract: false, final false
inline bool get_EnableChunkCulling() ;

/// @brief Method get_Enabled, addr 0x181c48f00, size 0x10, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_EnvironmentalLightingWeight, addr 0x1821d28c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_EnvironmentalLightingWeight() ;

/// @brief Method get_FarPlaneMultiplier, addr 0x1825630d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_FarPlaneMultiplier() ;

/// @brief Method get_Layer, addr 0x1812fdd20, size 0xa600, virtual false, abstract: false, final false
inline int32_t get_Layer() ;

/// @brief Method get_Material, addr 0x1803370c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_Material() ;

/// @brief Method get_NeedsColorTexture, addr 0x182194020, size 0x10, virtual false, abstract: false, final false
inline bool get_NeedsColorTexture() ;

/// @brief Method get_Portaled, addr 0x182597e80, size 0x30, virtual false, abstract: false, final false
inline bool get_Portaled() ;

/// @brief Method get_RenderBeforeTransparency, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool get_RenderBeforeTransparency() ;

/// @brief Method get_RequiresFullScreenMask, addr 0x1821940c0, size 0x10, virtual false, abstract: false, final false
inline bool get_RequiresFullScreenMask() ;

/// @brief Method get_UseLegacyMask, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool get_UseLegacyMask() ;

/// @brief Method get_UseStencilBuffer, addr 0x182194110, size 0x10, virtual false, abstract: false, final false
inline bool get_UseStencilBuffer() ;

/// @brief Convert to "::WaveHarmonic::Crest::MaskRenderer_IMaskProvider"
constexpr ::WaveHarmonic::Crest::MaskRenderer_IMaskProvider* i___WaveHarmonic__Crest__MaskRenderer_IMaskProvider() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver"
constexpr ::WaveHarmonic::Crest::MaskRenderer_IMaskReceiver* i___WaveHarmonic__Crest__MaskRenderer_IMaskReceiver() noexcept;

static inline void setStaticF__AfterCopyMaterial_k__BackingField(::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*  value) ;

static inline void setStaticF_s_SampleSphericalHarmonicsMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// @brief Method set_AffectsEnvironmentalLighting, addr 0x182597eb0, size 0x90, virtual false, abstract: false, final false
inline void set_AffectsEnvironmentalLighting(bool  value) ;

/// @brief Method set_AfterCopyMaterial, addr 0x182597f40, size 0x30, virtual false, abstract: false, final false
static inline void set_AfterCopyMaterial(::System::Action_2<::UnityW<::WaveHarmonic::Crest::WaterRenderer>,::UnityW<::UnityEngine::Material>>*  value) ;

/// @brief Method set_AllCameras, addr 0x182597f70, size 0x10, virtual false, abstract: false, final false
inline void set_AllCameras(bool  value) ;

/// @brief Method set_CameraExclusions, addr 0x1820c8180, size 0x10, virtual false, abstract: false, final false
inline void set_CameraExclusions(::WaveHarmonic::Crest::WaterCameraExclusion  value) ;

/// @brief Method set_CopyWaterMaterialParametersEachFrame, addr 0x182597f80, size 0x10, virtual false, abstract: false, final false
inline void set_CopyWaterMaterialParametersEachFrame(bool  value) ;

/// @brief Method set_CullLimit, addr 0x182597f90, size 0x10, virtual false, abstract: false, final false
inline void set_CullLimit(float_t  value) ;

/// @brief Method set_EnableChunkCulling, addr 0x18218b400, size 0x10, virtual false, abstract: false, final false
inline void set_EnableChunkCulling(bool  value) ;

/// @brief Method set_Enabled, addr 0x182597fa0, size 0x110, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

/// @brief Method set_EnvironmentalLightingWeight, addr 0x1821d2b10, size 0x10, virtual false, abstract: false, final false
inline void set_EnvironmentalLightingWeight(float_t  value) ;

/// @brief Method set_FarPlaneMultiplier, addr 0x1825633a0, size 0x10, virtual false, abstract: false, final false
inline void set_FarPlaneMultiplier(float_t  value) ;

/// @brief Method set_Layer, addr 0x1820c8260, size 0x10, virtual false, abstract: false, final false
inline void set_Layer(int32_t  value) ;

/// @brief Method set_Material, addr 0x180337170, size 0x20, virtual false, abstract: false, final false
inline void set_Material(::UnityEngine::Material*  value) ;

/// @brief Method set_NeedsColorTexture, addr 0x1821941b0, size 0x10, virtual false, abstract: false, final false
inline void set_NeedsColorTexture(bool  value) ;

/// @brief Method set_RequiresFullScreenMask, addr 0x182194210, size 0x10, virtual false, abstract: false, final false
inline void set_RequiresFullScreenMask(bool  value) ;

/// @brief Method set_UseStencilBuffer, addr 0x182194220, size 0x10, virtual false, abstract: false, final false
inline void set_UseStencilBuffer(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnderwaterRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnderwaterRenderer(UnderwaterRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnderwaterRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnderwaterRenderer(UnderwaterRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16669};

/// @brief Field k_ComputeShaderKernelFillMaskArtefacts offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ComputeShaderKernelFillMaskArtefacts{u"FillMaskArtefacts"};

/// @brief Field k_CullLimitMaximum offset 0xffffffff size 0x4
static constexpr float_t  k_CullLimitMaximum{static_cast<float_t>(0.01f)};

/// @brief Field k_CullLimitMinimum offset 0xffffffff size 0x4
static constexpr float_t  k_CullLimitMinimum{static_cast<float_t>(1e-6f)};

/// @brief Field k_DepthOutScattering offset 0xffffffff size 0x4
static constexpr float_t  k_DepthOutScattering{static_cast<float_t>(0.25f)};

/// @brief Field k_DrawMask offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DrawMask{u"Crest.DrawMask"};

/// @brief Field k_DrawMaskHorizon offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DrawMaskHorizon{u"Horizon"};

/// @brief Field k_DrawMaskSurface offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DrawMaskSurface{u"Surface"};

/// @brief Field k_DrawVolume offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DrawVolume{u"Crest.DrawWater/Volume"};

/// @brief Field k_KeywordDebugVisualizeMask offset 0xffffffff size 0x8
static constexpr ::ConstString  k_KeywordDebugVisualizeMask{u"_DEBUG_VISUALIZE_MASK"};

/// @brief Field k_KeywordDebugVisualizeStencil offset 0xffffffff size 0x8
static constexpr ::ConstString  k_KeywordDebugVisualizeStencil{u"_DEBUG_VISUALIZE_STENCIL"};

/// @brief Field k_SampleSphericalHarmonicsMarker offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SampleSphericalHarmonicsMarker{u"Crest.UnderwaterRenderer.SampleSphericalHarmonics"};

/// @brief Field k_ShaderNameEffect offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ShaderNameEffect{u"Crest/Underwater"};

/// @brief Field k_ShaderPassWaterHorizonMask offset 0xffffffff size 0x4
static constexpr int32_t  k_ShaderPassWaterHorizonMask{static_cast<int32_t>(0x0)};

/// @brief Field k_ShaderPassWaterSurfaceDepth offset 0xffffffff size 0x4
static constexpr int32_t  k_ShaderPassWaterSurfaceDepth{static_cast<int32_t>(0x1)};

/// @brief Field k_ShaderPassWaterSurfaceMask offset 0xffffffff size 0x4
static constexpr int32_t  k_ShaderPassWaterSurfaceMask{static_cast<int32_t>(0x0)};

/// @brief Field k_VolumeMaskQueue offset 0xffffffff size 0x4
static constexpr int32_t  k_VolumeMaskQueue{static_cast<int32_t>(0x3e8)};

/// @brief Field _EffectCommandBuffer, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ____EffectCommandBuffer;

/// @brief Field _CurrentWaterMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____CurrentWaterMaterial;

/// @brief Field _SphericalHarmonicsData, offset: 0x28, size: 0x8, def value: None
 ::WaveHarmonic::Crest::UnderwaterRenderer_UnderwaterSphericalHarmonicsData*  ____SphericalHarmonicsData;

/// @brief Field _CopyColor, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  ____CopyColor;

/// @brief Field _SetRenderTargetToBackBuffers, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::Rendering::CommandBuffer*>*  ____SetRenderTargetToBackBuffers;

/// @brief Field _ColorTarget, offset: 0x40, size: 0x28, def value: None
 ::UnityEngine::Rendering::RenderTargetIdentifier  ____ColorTarget;

/// @brief Field _DepthStencilTarget, offset: 0x68, size: 0x28, def value: None
 ::UnityEngine::Rendering::RenderTargetIdentifier  ____DepthStencilTarget;

/// @brief Field _ColorCopyTarget, offset: 0x90, size: 0x28, def value: None
 ::UnityEngine::Rendering::RenderTargetIdentifier  ____ColorCopyTarget;

/// @brief Field _EnvironmentalLight, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ____EnvironmentalLight;

/// @brief Field _EnvironmentalLightIntensity, offset: 0xc0, size: 0x4, def value: None
 float_t  ____EnvironmentalLightIntensity;

/// @brief Field _EnvironmentalAmbientIntensity, offset: 0xc4, size: 0x4, def value: None
 float_t  ____EnvironmentalAmbientIntensity;

/// @brief Field _EnvironmentalReflectionIntensity, offset: 0xc8, size: 0x4, def value: None
 float_t  ____EnvironmentalReflectionIntensity;

/// @brief Field _EnvironmentalFogDensity, offset: 0xcc, size: 0x4, def value: None
 float_t  ____EnvironmentalFogDensity;

/// @brief Field _EnvironmentalAverageDensity, offset: 0xd0, size: 0x4, def value: None
 float_t  ____EnvironmentalAverageDensity;

/// @brief Field _EnvironmentalInitialized, offset: 0xd4, size: 0x1, def value: None
 bool  ____EnvironmentalInitialized;

/// @brief Field _EnvironmentalNeedsRestoring, offset: 0xd5, size: 0x1, def value: None
 bool  ____EnvironmentalNeedsRestoring;

/// @brief Field _HasEffectCommandBuffersBeenRegistered, offset: 0xd6, size: 0x1, def value: None
 bool  ____HasEffectCommandBuffersBeenRegistered;

/// @brief Field _MaskMaterial, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____MaskMaterial;

/// @brief Field _HorizonMaskMaterial, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____HorizonMaskMaterial;

/// @brief Field _ArtifactsShader, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____ArtifactsShader;

/// @brief Field _ArtifactsShaderInitialized, offset: 0xf0, size: 0x1, def value: None
 bool  ____ArtifactsShaderInitialized;

/// @brief Field _ArtifactsKernel, offset: 0xf4, size: 0x4, def value: None
 int32_t  ____ArtifactsKernel;

/// @brief Field _ArtifactsThreadGroupSizeX, offset: 0xf8, size: 0x4, def value: None
 uint32_t  ____ArtifactsThreadGroupSizeX;

/// @brief Field _ArtifactsThreadGroupSizeY, offset: 0xfc, size: 0x4, def value: None
 uint32_t  ____ArtifactsThreadGroupSizeY;

/// @brief Field _MaskRead, offset: 0x100, size: 0x1, def value: None
 bool  ____MaskRead;

/// @brief Field _Enabled, offset: 0x101, size: 0x1, def value: None
 bool  ____Enabled;

/// @brief Field _Layer, offset: 0x104, size: 0x4, def value: None
 int32_t  ____Layer;

/// @brief Field _Material, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____Material;

/// @brief Field _EnvironmentalLightingEnable, offset: 0x110, size: 0x1, def value: None
 bool  ____EnvironmentalLightingEnable;

/// @brief Field _EnvironmentalLightingWeight, offset: 0x114, size: 0x4, def value: None
 float_t  ____EnvironmentalLightingWeight;

/// @brief Field _EnvironmentalLightingVolumeProfile, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::VolumeProfile>  ____EnvironmentalLightingVolumeProfile;

/// @brief Field _EnvironmentalLightingVolume, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::Volume>  ____EnvironmentalLightingVolume;

/// @brief Field _CameraExclusions, offset: 0x128, size: 0x4, def value: None
 ::WaveHarmonic::Crest::WaterCameraExclusion  ____CameraExclusions;

/// @brief Field _CopyWaterMaterialParametersEachFrame, offset: 0x12c, size: 0x1, def value: None
 bool  ____CopyWaterMaterialParametersEachFrame;

/// @brief Field _FarPlaneMultiplier, offset: 0x130, size: 0x4, def value: None
 float_t  ____FarPlaneMultiplier;

/// @brief Field _EnableChunkCulling, offset: 0x134, size: 0x1, def value: None
 bool  ____EnableChunkCulling;

/// @brief Field _CullLimit, offset: 0x138, size: 0x4, def value: None
 float_t  ____CullLimit;

/// @brief Field _Debug, offset: 0x140, size: 0x8, def value: None
 ::WaveHarmonic::Crest::UnderwaterRenderer_DebugFields*  ____Debug;

/// @brief Field _Water, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field _MaterialLastUpdatedFrame, offset: 0x150, size: 0x4, def value: None
 int32_t  ____MaterialLastUpdatedFrame;

/// @brief Field <UseStencilBuffer>k__BackingField, offset: 0x154, size: 0x1, def value: None
 bool  ____UseStencilBuffer_k__BackingField;

/// @brief Field <RequiresFullScreenMask>k__BackingField, offset: 0x155, size: 0x1, def value: None
 bool  ____RequiresFullScreenMask_k__BackingField;

/// @brief Field <NeedsColorTexture>k__BackingField, offset: 0x156, size: 0x1, def value: None
 bool  ____NeedsColorTexture_k__BackingField;

/// @brief Field _SurfaceMaterial, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____SurfaceMaterial;

/// @brief Field _VolumeMaterial, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____VolumeMaterial;

/// @brief Field _CurrentWaterBody, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterBody>  ____CurrentWaterBody;

/// @brief Field _WaterBodyCulled, offset: 0x170, size: 0x1, def value: None
 bool  ____WaterBodyCulled;

/// @brief Field _MinimumFogDensity, offset: 0x174, size: 0x4, def value: None
 float_t  ____MinimumFogDensity;

/// @brief Field _Extinction, offset: 0x178, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____Extinction;

/// @brief Field _SamplingHeightHelper, offset: 0x188, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____SamplingHeightHelper;

/// @brief Field _ViewerWaterHeight, offset: 0x190, size: 0x4, def value: None
 float_t  ____ViewerWaterHeight;

/// @brief Field _AllCameras, offset: 0x194, size: 0x1, def value: None
 bool  ____AllCameras;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EffectCommandBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____CurrentWaterMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____SphericalHarmonicsData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____CopyColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____SetRenderTargetToBackBuffers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____ColorTarget) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____DepthStencilTarget) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____ColorCopyTarget) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalLight) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalLightIntensity) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalAmbientIntensity) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalReflectionIntensity) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalFogDensity) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalAverageDensity) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalInitialized) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalNeedsRestoring) == 0xd5, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____HasEffectCommandBuffersBeenRegistered) == 0xd6, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____MaskMaterial) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____HorizonMaskMaterial) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____ArtifactsShader) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____ArtifactsShaderInitialized) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____ArtifactsKernel) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____ArtifactsThreadGroupSizeX) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____ArtifactsThreadGroupSizeY) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____MaskRead) == 0x100, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____Enabled) == 0x101, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____Layer) == 0x104, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____Material) == 0x108, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalLightingEnable) == 0x110, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalLightingWeight) == 0x114, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalLightingVolumeProfile) == 0x118, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnvironmentalLightingVolume) == 0x120, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____CameraExclusions) == 0x128, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____CopyWaterMaterialParametersEachFrame) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____FarPlaneMultiplier) == 0x130, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____EnableChunkCulling) == 0x134, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____CullLimit) == 0x138, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____Debug) == 0x140, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____Water) == 0x148, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____MaterialLastUpdatedFrame) == 0x150, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____UseStencilBuffer_k__BackingField) == 0x154, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____RequiresFullScreenMask_k__BackingField) == 0x155, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____NeedsColorTexture_k__BackingField) == 0x156, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____SurfaceMaterial) == 0x158, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____VolumeMaterial) == 0x160, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____CurrentWaterBody) == 0x168, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____WaterBodyCulled) == 0x170, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____MinimumFogDensity) == 0x174, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____Extinction) == 0x178, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____SamplingHeightHelper) == 0x188, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____ViewerWaterHeight) == 0x190, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::UnderwaterRenderer, ____AllCameras) == 0x194, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::UnderwaterRenderer) == 0x198, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
